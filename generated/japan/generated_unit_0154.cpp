#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0154[4095] = {
    1, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0,
    32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0,
    0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59,
    0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 71, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0,
    0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91,
    0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 100,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0,
    0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112,
    0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0,
    0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0,
    0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0,
    150, 0, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 159,
    0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0,
    0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0,
    0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184,
    0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191,
    0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207,
    0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0,
    215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0,
    224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0,
    232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0,
    239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252,
    0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 260, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0,
    268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0,
    276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0,
    285, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0,
    293, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313,
    0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 318, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0,
    0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0,
    330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 338, 0,
    0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0,
    0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0,
    0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0,
    0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367,
    0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0,
    375, 0, 376, 0, 0, 377, 0, 378, 0, 0, 379, 0, 380, 0, 0, 381, 0, 382, 0, 0, 383, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0,
    0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 0, 399, 0, 0,
    0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0,
    0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0,
    412, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0,
    0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0,
    427, 0, 0, 428, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0,
    436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 439, 0, 0, 440, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0,
    445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 453,
    0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 462, 0, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0,
    467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 473, 0, 474, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0,
    0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 493, 0,
    0, 0, 494, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 0, 0, 501, 0, 0, 502, 0,
    0, 0, 503, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0,
    0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0,
    521, 0, 522, 0, 0, 0, 0, 0, 523, 0, 524, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 528, 0, 529, 0, 0, 0,
    530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536,
    0, 0, 0, 0, 0, 537, 0, 538, 539, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0,
    0, 0, 0, 545, 0, 546, 547, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0,
    0, 553, 0, 554, 555, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 562,
    0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 569, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0,
    576, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 583, 584, 0, 585,
    0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 593,
    0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 601,
    0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 0, 609, 0,
    0, 0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 617, 0,
    0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0,
    623, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0,
    0, 0, 631, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 639, 0,
    0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0,
    0, 648, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0,
    656, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0,
    664, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0,
    672, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0,
    680, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 688,
    0, 0, 0, 689, 0, 0, 0, 690, 0, 691, 0, 692, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697,
    0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 705,
    0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 713,
    0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 721, 0,
    0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 729, 0,
    0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 737, 0, 0,
    0, 738, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0,
    0, 746, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0,
    0, 754, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0,
    0, 762, 0, 0, 0, 763, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0,
    770, 0, 0, 0, 771, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0,
    778, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 783, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0, 788, 0, 0,
    0, 0, 0, 789, 0, 790, 0, 0, 791, 0, 0, 792, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 797,
    798, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 0, 804, 0,
    0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0, 808, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 0, 812, 0,
    0, 0, 813, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 820, 0,
    0, 0, 821, 0, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 0, 827, 0, 0, 0, 828, 0,
    0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 836, 0,
    0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 839, 0, 0, 840, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 0, 843, 0,
    0, 0, 844, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0, 846, 0, 0, 0, 0, 0, 0, 847, 0, 848, 0, 0, 849, 0, 0, 850, 0, 0, 0,
    0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 853, 0, 0, 0, 0, 0, 0, 854, 0, 855, 0, 0, 856, 0, 0, 857, 0, 0,
    0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 860, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 863, 0, 0, 864, 0,
    0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 867, 0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 0, 870, 0, 0, 871,
    0, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 874, 0, 0, 0, 0, 0, 0, 875, 0, 876, 0, 0, 877, 0, 0,
    878, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 880, 0, 0, 881, 0, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 884, 0,
    0, 885, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 888, 0, 0, 0, 0, 0, 0, 889, 0, 890, 0, 0, 891,
    0, 0, 892, 0, 0, 0, 0, 0, 0, 893, 0, 0, 0, 0, 0, 0, 0, 894, 0, 0, 895, 0, 0, 0, 0, 0, 0, 896, 0, 897, 0, 0,
    898, 0, 0, 899, 0, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 0, 0, 901, 0, 0, 902, 0, 0, 0, 0, 0, 0, 903, 0, 904, 0,
    0, 905, 0, 0, 906, 0, 0, 0, 0, 0, 0, 907, 0, 0, 908, 0, 909, 0, 910, 0, 0, 0, 911, 0, 912, 0, 913, 0, 914, 0, 915, 0,
    916, 0, 917, 0, 918, 0, 919, 0, 920, 0, 921, 0, 922, 0, 923, 0, 924, 0, 925, 0, 926, 0, 927, 0, 928, 0, 929, 0, 930, 0, 931, 0,
    932, 0, 933, 0, 934, 0, 935, 0, 936, 0, 937, 0, 938, 0, 939, 0, 940, 0, 941, 0, 942, 0, 943, 0, 944, 0, 945, 0, 946, 0, 947, 0,
    948, 0, 949, 0, 950, 0, 951, 0, 952, 0, 953, 0, 954, 0, 955, 0, 956, 0, 957, 0, 958, 0, 959, 0, 960, 0, 961, 0, 962, 0, 963, 0,
    964, 0, 965, 0, 966, 0, 967, 0, 968, 0, 969, 0, 970, 0, 971, 0, 972, 0, 973, 0, 974, 0, 975, 0, 976, 0, 0, 0, 977, 0, 0, 0,
    0, 0, 978, 0, 0, 0, 0, 0, 0, 0, 0, 979, 0, 980, 0, 0, 0, 0, 0, 981, 0, 0, 0, 0, 0, 982, 0, 0, 0, 0, 983, 0,
    984, 0, 0, 0, 0, 0, 985, 0, 0, 0, 0, 986, 0, 0, 0, 0, 987, 0, 0, 0, 0, 0, 0, 988, 0, 0, 0, 0, 0, 989, 0, 0,
    0, 990, 0, 0, 0, 991, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 992, 0, 0, 0, 993, 0,
    0, 0, 994, 0, 0, 0, 995, 0, 0, 0, 0, 0, 996, 0, 0, 0, 0, 997, 0, 998, 0, 0, 0, 0, 0, 999, 0, 0, 0, 0, 1000,
};
void recomp_unit_0154_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A6C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0154[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A6C000;
    case 2u: goto L_08A6C008;
    case 3u: goto L_08A6C018;
    case 4u: goto L_08A6C020;
    case 5u: goto L_08A6C02C;
    case 6u: goto L_08A6C038;
    case 7u: goto L_08A6C04C;
    case 8u: goto L_08A6C068;
    case 9u: goto L_08A6C084;
    case 10u: goto L_08A6C094;
    case 11u: goto L_08A6C09C;
    case 12u: goto L_08A6C0A8;
    case 13u: goto L_08A6C0B4;
    case 14u: goto L_08A6C0C8;
    case 15u: goto L_08A6C0E4;
    case 16u: goto L_08A6C100;
    case 17u: goto L_08A6C110;
    case 18u: goto L_08A6C118;
    case 19u: goto L_08A6C124;
    case 20u: goto L_08A6C130;
    case 21u: goto L_08A6C144;
    case 22u: goto L_08A6C160;
    case 23u: goto L_08A6C17C;
    case 24u: goto L_08A6C18C;
    case 25u: goto L_08A6C194;
    case 26u: goto L_08A6C1A0;
    case 27u: goto L_08A6C1AC;
    case 28u: goto L_08A6C1C0;
    case 29u: goto L_08A6C1DC;
    case 30u: goto L_08A6C1EC;
    case 31u: goto L_08A6C1F4;
    case 32u: goto L_08A6C200;
    case 33u: goto L_08A6C20C;
    case 34u: goto L_08A6C220;
    case 35u: goto L_08A6C248;
    case 36u: goto L_08A6C258;
    case 37u: goto L_08A6C27C;
    case 38u: goto L_08A6C290;
    case 39u: goto L_08A6C2A4;
    case 40u: goto L_08A6C2B8;
    case 41u: goto L_08A6C2CC;
    case 42u: goto L_08A6C2D8;
    case 43u: goto L_08A6C2EC;
    case 44u: goto L_08A6C304;
    case 45u: goto L_08A6C320;
    case 46u: goto L_08A6C32C;
    case 47u: goto L_08A6C338;
    case 48u: goto L_08A6C344;
    case 49u: goto L_08A6C354;
    case 50u: goto L_08A6C36C;
    case 51u: goto L_08A6C378;
    case 52u: goto L_08A6C384;
    case 53u: goto L_08A6C394;
    case 54u: goto L_08A6C3AC;
    case 55u: goto L_08A6C3C4;
    case 56u: goto L_08A6C3D4;
    case 57u: goto L_08A6C3E4;
    case 58u: goto L_08A6C3F0;
    case 59u: goto L_08A6C3FC;
    case 60u: goto L_08A6C410;
    case 61u: goto L_08A6C41C;
    case 62u: goto L_08A6C42C;
    case 63u: goto L_08A6C438;
    case 64u: goto L_08A6C440;
    case 65u: goto L_08A6C44C;
    case 66u: goto L_08A6C454;
    case 67u: goto L_08A6C46C;
    case 68u: goto L_08A6C480;
    case 69u: goto L_08A6C490;
    case 70u: goto L_08A6C4A8;
    case 71u: goto L_08A6C4AC;
    case 72u: goto L_08A6C4B4;
    case 73u: goto L_08A6C4CC;
    case 74u: goto L_08A6C4D8;
    case 75u: goto L_08A6C4E4;
    case 76u: goto L_08A6C4F0;
    case 77u: goto L_08A6C504;
    case 78u: goto L_08A6C510;
    case 79u: goto L_08A6C518;
    case 80u: goto L_08A6C52C;
    case 81u: goto L_08A6C544;
    case 82u: goto L_08A6C55C;
    case 83u: goto L_08A6C574;
    case 84u: goto L_08A6C58C;
    case 85u: goto L_08A6C598;
    case 86u: goto L_08A6C5A4;
    case 87u: goto L_08A6C5B8;
    case 88u: goto L_08A6C5C4;
    case 89u: goto L_08A6C5CC;
    case 90u: goto L_08A6C5E4;
    case 91u: goto L_08A6C5FC;
    case 92u: goto L_08A6C608;
    case 93u: goto L_08A6C614;
    case 94u: goto L_08A6C628;
    case 95u: goto L_08A6C634;
    case 96u: goto L_08A6C63C;
    case 97u: goto L_08A6C65C;
    case 98u: goto L_08A6C668;
    case 99u: goto L_08A6C674;
    case 100u: goto L_08A6C67C;
    case 101u: goto L_08A6C690;
    case 102u: goto L_08A6C6A8;
    case 103u: goto L_08A6C6B8;
    case 104u: goto L_08A6C6D0;
    case 105u: goto L_08A6C6E0;
    case 106u: goto L_08A6C6F0;
    case 107u: goto L_08A6C704;
    case 108u: goto L_08A6C70C;
    case 109u: goto L_08A6C738;
    case 110u: goto L_08A6C74C;
    case 111u: goto L_08A6C764;
    case 112u: goto L_08A6C77C;
    case 113u: goto L_08A6C784;
    case 114u: goto L_08A6C7B0;
    case 115u: goto L_08A6C7BC;
    case 116u: goto L_08A6C7D4;
    case 117u: goto L_08A6C7E0;
    case 118u: goto L_08A6C808;
    case 119u: goto L_08A6C814;
    case 120u: goto L_08A6C824;
    case 121u: goto L_08A6C82C;
    case 122u: goto L_08A6C83C;
    case 123u: goto L_08A6C844;
    case 124u: goto L_08A6C854;
    case 125u: goto L_08A6C864;
    case 126u: goto L_08A6C86C;
    case 127u: goto L_08A6C87C;
    case 128u: goto L_08A6C898;
    case 129u: goto L_08A6C8B0;
    case 130u: goto L_08A6C8BC;
    case 131u: goto L_08A6C8CC;
    case 132u: goto L_08A6C8E4;
    case 133u: goto L_08A6C8F4;
    case 134u: goto L_08A6C908;
    case 135u: goto L_08A6C914;
    case 136u: goto L_08A6C920;
    case 137u: goto L_08A6C930;
    case 138u: goto L_08A6C940;
    case 139u: goto L_08A6C954;
    case 140u: goto L_08A6C968;
    case 141u: goto L_08A6C978;
    case 142u: goto L_08A6C988;
    case 143u: goto L_08A6C998;
    case 144u: goto L_08A6C9A8;
    case 145u: goto L_08A6C9B8;
    case 146u: goto L_08A6C9CC;
    case 147u: goto L_08A6C9DC;
    case 148u: goto L_08A6C9EC;
    case 149u: goto L_08A6C9F8;
    case 150u: goto L_08A6CA00;
    case 151u: goto L_08A6CA14;
    case 152u: goto L_08A6CA1C;
    case 153u: goto L_08A6CA28;
    case 154u: goto L_08A6CA4C;
    case 155u: goto L_08A6CA54;
    case 156u: goto L_08A6CA5C;
    case 157u: goto L_08A6CA64;
    case 158u: goto L_08A6CA6C;
    case 159u: goto L_08A6CA7C;
    case 160u: goto L_08A6CA84;
    case 161u: goto L_08A6CA90;
    case 162u: goto L_08A6CA9C;
    case 163u: goto L_08A6CAAC;
    case 164u: goto L_08A6CAB8;
    case 165u: goto L_08A6CAD8;
    case 166u: goto L_08A6CAE8;
    case 167u: goto L_08A6CAF8;
    case 168u: goto L_08A6CB08;
    case 169u: goto L_08A6CB18;
    case 170u: goto L_08A6CB28;
    case 171u: goto L_08A6CB38;
    case 172u: goto L_08A6CB48;
    case 173u: goto L_08A6CB58;
    case 174u: goto L_08A6CB68;
    case 175u: goto L_08A6CB78;
    case 176u: goto L_08A6CB84;
    case 177u: goto L_08A6CB90;
    case 178u: goto L_08A6CBA0;
    case 179u: goto L_08A6CBAC;
    case 180u: goto L_08A6CBB8;
    case 181u: goto L_08A6CBC8;
    case 182u: goto L_08A6CBD8;
    case 183u: goto L_08A6CBE8;
    case 184u: goto L_08A6CBFC;
    case 185u: goto L_08A6CC0C;
    case 186u: goto L_08A6CC1C;
    case 187u: goto L_08A6CC30;
    case 188u: goto L_08A6CC44;
    case 189u: goto L_08A6CC54;
    case 190u: goto L_08A6CC64;
    case 191u: goto L_08A6CC7C;
    case 192u: goto L_08A6CC8C;
    case 193u: goto L_08A6CC9C;
    case 194u: goto L_08A6CCAC;
    case 195u: goto L_08A6CCB8;
    case 196u: goto L_08A6CCC0;
    case 197u: goto L_08A6CCCC;
    case 198u: goto L_08A6CCD4;
    case 199u: goto L_08A6CCEC;
    case 200u: goto L_08A6CD1C;
    case 201u: goto L_08A6CD28;
    case 202u: goto L_08A6CD38;
    case 203u: goto L_08A6CD40;
    case 204u: goto L_08A6CD54;
    case 205u: goto L_08A6CD60;
    case 206u: goto L_08A6CD70;
    case 207u: goto L_08A6CD7C;
    case 208u: goto L_08A6CD90;
    case 209u: goto L_08A6CDA0;
    case 210u: goto L_08A6CDAC;
    case 211u: goto L_08A6CDC0;
    case 212u: goto L_08A6CDD0;
    case 213u: goto L_08A6CDE0;
    case 214u: goto L_08A6CDF0;
    case 215u: goto L_08A6CE00;
    case 216u: goto L_08A6CE10;
    case 217u: goto L_08A6CE20;
    case 218u: goto L_08A6CE30;
    case 219u: goto L_08A6CE3C;
    case 220u: goto L_08A6CE48;
    case 221u: goto L_08A6CE58;
    case 222u: goto L_08A6CE64;
    case 223u: goto L_08A6CE70;
    case 224u: goto L_08A6CE80;
    case 225u: goto L_08A6CE90;
    case 226u: goto L_08A6CEA0;
    case 227u: goto L_08A6CEAC;
    case 228u: goto L_08A6CEC0;
    case 229u: goto L_08A6CED0;
    case 230u: goto L_08A6CED8;
    case 231u: goto L_08A6CEEC;
    case 232u: goto L_08A6CF00;
    case 233u: goto L_08A6CF10;
    case 234u: goto L_08A6CF20;
    case 235u: goto L_08A6CF34;
    case 236u: goto L_08A6CF48;
    case 237u: goto L_08A6CF5C;
    case 238u: goto L_08A6CF70;
    case 239u: goto L_08A6CF80;
    case 240u: goto L_08A6CF90;
    case 241u: goto L_08A6CFA0;
    case 242u: goto L_08A6CFB0;
    case 243u: goto L_08A6CFC4;
    case 244u: goto L_08A6CFD8;
    case 245u: goto L_08A6CFF0;
    case 246u: goto L_08A6D000;
    case 247u: goto L_08A6D010;
    case 248u: goto L_08A6D028;
    case 249u: goto L_08A6D044;
    case 250u: goto L_08A6D054;
    case 251u: goto L_08A6D06C;
    case 252u: goto L_08A6D07C;
    case 253u: goto L_08A6D08C;
    case 254u: goto L_08A6D098;
    case 255u: goto L_08A6D0A0;
    case 256u: goto L_08A6D0AC;
    case 257u: goto L_08A6D0B4;
    case 258u: goto L_08A6D0CC;
    case 259u: goto L_08A6D0FC;
    case 260u: goto L_08A6D108;
    case 261u: goto L_08A6D118;
    case 262u: goto L_08A6D120;
    case 263u: goto L_08A6D134;
    case 264u: goto L_08A6D140;
    case 265u: goto L_08A6D150;
    case 266u: goto L_08A6D15C;
    case 267u: goto L_08A6D170;
    case 268u: goto L_08A6D180;
    case 269u: goto L_08A6D18C;
    case 270u: goto L_08A6D1A0;
    case 271u: goto L_08A6D1B0;
    case 272u: goto L_08A6D1C0;
    case 273u: goto L_08A6D1D0;
    case 274u: goto L_08A6D1E0;
    case 275u: goto L_08A6D1F0;
    case 276u: goto L_08A6D200;
    case 277u: goto L_08A6D210;
    case 278u: goto L_08A6D220;
    case 279u: goto L_08A6D22C;
    case 280u: goto L_08A6D238;
    case 281u: goto L_08A6D248;
    case 282u: goto L_08A6D254;
    case 283u: goto L_08A6D260;
    case 284u: goto L_08A6D270;
    case 285u: goto L_08A6D280;
    case 286u: goto L_08A6D290;
    case 287u: goto L_08A6D29C;
    case 288u: goto L_08A6D2B0;
    case 289u: goto L_08A6D2B8;
    case 290u: goto L_08A6D2CC;
    case 291u: goto L_08A6D2E0;
    case 292u: goto L_08A6D2F0;
    case 293u: goto L_08A6D300;
    case 294u: goto L_08A6D310;
    case 295u: goto L_08A6D320;
    case 296u: goto L_08A6D334;
    case 297u: goto L_08A6D348;
    case 298u: goto L_08A6D35C;
    case 299u: goto L_08A6D370;
    case 300u: goto L_08A6D384;
    case 301u: goto L_08A6D398;
    case 302u: goto L_08A6D3A8;
    case 303u: goto L_08A6D3B8;
    case 304u: goto L_08A6D3C8;
    case 305u: goto L_08A6D3D8;
    case 306u: goto L_08A6D3EC;
    case 307u: goto L_08A6D400;
    case 308u: goto L_08A6D418;
    case 309u: goto L_08A6D428;
    case 310u: goto L_08A6D438;
    case 311u: goto L_08A6D450;
    case 312u: goto L_08A6D46C;
    case 313u: goto L_08A6D47C;
    case 314u: goto L_08A6D494;
    case 315u: goto L_08A6D4A4;
    case 316u: goto L_08A6D4B4;
    case 317u: goto L_08A6D4C0;
    case 318u: goto L_08A6D4C8;
    case 319u: goto L_08A6D4D4;
    case 320u: goto L_08A6D4DC;
    case 321u: goto L_08A6D4F4;
    case 322u: goto L_08A6D50C;
    case 323u: goto L_08A6D518;
    case 324u: goto L_08A6D528;
    case 325u: goto L_08A6D534;
    case 326u: goto L_08A6D548;
    case 327u: goto L_08A6D558;
    case 328u: goto L_08A6D564;
    case 329u: goto L_08A6D570;
    case 330u: goto L_08A6D580;
    case 331u: goto L_08A6D58C;
    case 332u: goto L_08A6D5A0;
    case 333u: goto L_08A6D5B0;
    case 334u: goto L_08A6D5BC;
    case 335u: goto L_08A6D5C8;
    case 336u: goto L_08A6D5D8;
    case 337u: goto L_08A6D5E4;
    case 338u: goto L_08A6D5F8;
    case 339u: goto L_08A6D608;
    case 340u: goto L_08A6D61C;
    case 341u: goto L_08A6D630;
    case 342u: goto L_08A6D644;
    case 343u: goto L_08A6D654;
    case 344u: goto L_08A6D664;
    case 345u: goto L_08A6D674;
    case 346u: goto L_08A6D684;
    case 347u: goto L_08A6D694;
    case 348u: goto L_08A6D6A4;
    case 349u: goto L_08A6D6B4;
    case 350u: goto L_08A6D6C4;
    case 351u: goto L_08A6D6CC;
    case 352u: goto L_08A6D6E0;
    case 353u: goto L_08A6D6F4;
    case 354u: goto L_08A6D70C;
    case 355u: goto L_08A6D71C;
    case 356u: goto L_08A6D730;
    case 357u: goto L_08A6D744;
    case 358u: goto L_08A6D754;
    case 359u: goto L_08A6D764;
    case 360u: goto L_08A6D774;
    case 361u: goto L_08A6D784;
    case 362u: goto L_08A6D798;
    case 363u: goto L_08A6D7AC;
    case 364u: goto L_08A6D7C0;
    case 365u: goto L_08A6D7D4;
    case 366u: goto L_08A6D7E8;
    case 367u: goto L_08A6D7FC;
    case 368u: goto L_08A6D814;
    case 369u: goto L_08A6D824;
    case 370u: goto L_08A6D834;
    case 371u: goto L_08A6D844;
    case 372u: goto L_08A6D854;
    case 373u: goto L_08A6D864;
    case 374u: goto L_08A6D874;
    case 375u: goto L_08A6D880;
    case 376u: goto L_08A6D888;
    case 377u: goto L_08A6D894;
    case 378u: goto L_08A6D89C;
    case 379u: goto L_08A6D8A8;
    case 380u: goto L_08A6D8B0;
    case 381u: goto L_08A6D8BC;
    case 382u: goto L_08A6D8C4;
    case 383u: goto L_08A6D8D0;
    case 384u: goto L_08A6D8D8;
    case 385u: goto L_08A6D8E4;
    case 386u: goto L_08A6D8EC;
    case 387u: goto L_08A6D900;
    case 388u: goto L_08A6D924;
    case 389u: goto L_08A6D934;
    case 390u: goto L_08A6D948;
    case 391u: goto L_08A6D954;
    case 392u: goto L_08A6D974;
    case 393u: goto L_08A6D998;
    case 394u: goto L_08A6D9AC;
    case 395u: goto L_08A6D9C0;
    case 396u: goto L_08A6D9CC;
    case 397u: goto L_08A6D9D8;
    case 398u: goto L_08A6D9E4;
    case 399u: goto L_08A6D9F4;
    case 400u: goto L_08A6DA04;
    case 401u: goto L_08A6DA14;
    case 402u: goto L_08A6DA2C;
    case 403u: goto L_08A6DA3C;
    case 404u: goto L_08A6DA54;
    case 405u: goto L_08A6DA64;
    case 406u: goto L_08A6DA88;
    case 407u: goto L_08A6DA98;
    case 408u: goto L_08A6DAC0;
    case 409u: goto L_08A6DAD0;
    case 410u: goto L_08A6DAE4;
    case 411u: goto L_08A6DAF4;
    case 412u: goto L_08A6DB00;
    case 413u: goto L_08A6DB14;
    case 414u: goto L_08A6DB24;
    case 415u: goto L_08A6DB38;
    case 416u: goto L_08A6DB50;
    case 417u: goto L_08A6DB74;
    case 418u: goto L_08A6DB84;
    case 419u: goto L_08A6DB90;
    case 420u: goto L_08A6DB9C;
    case 421u: goto L_08A6DBAC;
    case 422u: goto L_08A6DBB8;
    case 423u: goto L_08A6DBC8;
    case 424u: goto L_08A6DBD4;
    case 425u: goto L_08A6DBE4;
    case 426u: goto L_08A6DBF4;
    case 427u: goto L_08A6DC00;
    case 428u: goto L_08A6DC0C;
    case 429u: goto L_08A6DC1C;
    case 430u: goto L_08A6DC28;
    case 431u: goto L_08A6DC38;
    case 432u: goto L_08A6DC48;
    case 433u: goto L_08A6DC54;
    case 434u: goto L_08A6DC64;
    case 435u: goto L_08A6DC70;
    case 436u: goto L_08A6DC80;
    case 437u: goto L_08A6DC98;
    case 438u: goto L_08A6DCA8;
    case 439u: goto L_08A6DCB0;
    case 440u: goto L_08A6DCBC;
    case 441u: goto L_08A6DCD0;
    case 442u: goto L_08A6DCD8;
    case 443u: goto L_08A6DCE8;
    case 444u: goto L_08A6DCF8;
    case 445u: goto L_08A6DD00;
    case 446u: goto L_08A6DD0C;
    case 447u: goto L_08A6DD38;
    case 448u: goto L_08A6DD40;
    case 449u: goto L_08A6DD50;
    case 450u: goto L_08A6DD5C;
    case 451u: goto L_08A6DD64;
    case 452u: goto L_08A6DD6C;
    case 453u: goto L_08A6DD7C;
    case 454u: goto L_08A6DD8C;
    case 455u: goto L_08A6DD94;
    case 456u: goto L_08A6DDA0;
    case 457u: goto L_08A6DDCC;
    case 458u: goto L_08A6DDD4;
    case 459u: goto L_08A6DDE4;
    case 460u: goto L_08A6DE10;
    case 461u: goto L_08A6DE18;
    case 462u: goto L_08A6DE28;
    case 463u: goto L_08A6DE38;
    case 464u: goto L_08A6DE40;
    case 465u: goto L_08A6DE4C;
    case 466u: goto L_08A6DE78;
    case 467u: goto L_08A6DE80;
    case 468u: goto L_08A6DE90;
    case 469u: goto L_08A6DEA0;
    case 470u: goto L_08A6DEB4;
    case 471u: goto L_08A6DEBC;
    case 472u: goto L_08A6DECC;
    case 473u: goto L_08A6DF0C;
    case 474u: goto L_08A6DF14;
    case 475u: goto L_08A6DF1C;
    case 476u: goto L_08A6DF34;
    case 477u: goto L_08A6DF44;
    case 478u: goto L_08A6DF50;
    case 479u: goto L_08A6DF60;
    case 480u: goto L_08A6DF70;
    case 481u: goto L_08A6DF98;
    case 482u: goto L_08A6DFAC;
    case 483u: goto L_08A6DFC8;
    case 484u: goto L_08A6DFE0;
    case 485u: goto L_08A6DFF0;
    case 486u: goto L_08A6E008;
    case 487u: goto L_08A6E018;
    case 488u: goto L_08A6E028;
    case 489u: goto L_08A6E038;
    case 490u: goto L_08A6E048;
    case 491u: goto L_08A6E058;
    case 492u: goto L_08A6E068;
    case 493u: goto L_08A6E078;
    case 494u: goto L_08A6E088;
    case 495u: goto L_08A6E094;
    case 496u: goto L_08A6E0A4;
    case 497u: goto L_08A6E0B4;
    case 498u: goto L_08A6E0C4;
    case 499u: goto L_08A6E0D0;
    case 500u: goto L_08A6E0DC;
    case 501u: goto L_08A6E0EC;
    case 502u: goto L_08A6E0F8;
    case 503u: goto L_08A6E108;
    case 504u: goto L_08A6E114;
    case 505u: goto L_08A6E124;
    case 506u: goto L_08A6E14C;
    case 507u: goto L_08A6E154;
    case 508u: goto L_08A6E16C;
    case 509u: goto L_08A6E174;
    case 510u: goto L_08A6E188;
    case 511u: goto L_08A6E1A0;
    case 512u: goto L_08A6E1D0;
    case 513u: goto L_08A6E1D8;
    case 514u: goto L_08A6E1E8;
    case 515u: goto L_08A6E214;
    case 516u: goto L_08A6E220;
    case 517u: goto L_08A6E230;
    case 518u: goto L_08A6E240;
    case 519u: goto L_08A6E250;
    case 520u: goto L_08A6E260;
    case 521u: goto L_08A6E280;
    case 522u: goto L_08A6E288;
    case 523u: goto L_08A6E2A0;
    case 524u: goto L_08A6E2A8;
    case 525u: goto L_08A6E2AC;
    case 526u: goto L_08A6E2C8;
    case 527u: goto L_08A6E2D8;
    case 528u: goto L_08A6E2E8;
    case 529u: goto L_08A6E2F0;
    case 530u: goto L_08A6E300;
    case 531u: goto L_08A6E310;
    case 532u: goto L_08A6E320;
    case 533u: goto L_08A6E32C;
    case 534u: goto L_08A6E33C;
    case 535u: goto L_08A6E34C;
    case 536u: goto L_08A6E37C;
    case 537u: goto L_08A6E394;
    case 538u: goto L_08A6E39C;
    case 539u: goto L_08A6E3A0;
    case 540u: goto L_08A6E3AC;
    case 541u: goto L_08A6E3BC;
    case 542u: goto L_08A6E3D0;
    case 543u: goto L_08A6E3DC;
    case 544u: goto L_08A6E3F4;
    case 545u: goto L_08A6E40C;
    case 546u: goto L_08A6E414;
    case 547u: goto L_08A6E418;
    case 548u: goto L_08A6E424;
    case 549u: goto L_08A6E434;
    case 550u: goto L_08A6E448;
    case 551u: goto L_08A6E454;
    case 552u: goto L_08A6E46C;
    case 553u: goto L_08A6E484;
    case 554u: goto L_08A6E48C;
    case 555u: goto L_08A6E490;
    case 556u: goto L_08A6E49C;
    case 557u: goto L_08A6E4AC;
    case 558u: goto L_08A6E4C0;
    case 559u: goto L_08A6E4CC;
    case 560u: goto L_08A6E4E0;
    case 561u: goto L_08A6E4F0;
    case 562u: goto L_08A6E4FC;
    case 563u: goto L_08A6E51C;
    case 564u: goto L_08A6E52C;
    case 565u: goto L_08A6E53C;
    case 566u: goto L_08A6E548;
    case 567u: goto L_08A6E558;
    case 568u: goto L_08A6E568;
    case 569u: goto L_08A6E578;
    case 570u: goto L_08A6E5A0;
    case 571u: goto L_08A6E5A8;
    case 572u: goto L_08A6E5C0;
    case 573u: goto L_08A6E5C8;
    case 574u: goto L_08A6E5DC;
    case 575u: goto L_08A6E5F4;
    case 576u: goto L_08A6E600;
    case 577u: goto L_08A6E610;
    case 578u: goto L_08A6E62C;
    case 579u: goto L_08A6E63C;
    case 580u: goto L_08A6E64C;
    case 581u: goto L_08A6E658;
    case 582u: goto L_08A6E664;
    case 583u: goto L_08A6E670;
    case 584u: goto L_08A6E674;
    case 585u: goto L_08A6E67C;
    case 586u: goto L_08A6E68C;
    case 587u: goto L_08A6E69C;
    case 588u: goto L_08A6E6AC;
    case 589u: goto L_08A6E6BC;
    case 590u: goto L_08A6E6CC;
    case 591u: goto L_08A6E6DC;
    case 592u: goto L_08A6E6EC;
    case 593u: goto L_08A6E6FC;
    case 594u: goto L_08A6E70C;
    case 595u: goto L_08A6E71C;
    case 596u: goto L_08A6E72C;
    case 597u: goto L_08A6E73C;
    case 598u: goto L_08A6E74C;
    case 599u: goto L_08A6E75C;
    case 600u: goto L_08A6E76C;
    case 601u: goto L_08A6E77C;
    case 602u: goto L_08A6E78C;
    case 603u: goto L_08A6E7A0;
    case 604u: goto L_08A6E7B0;
    case 605u: goto L_08A6E7C0;
    case 606u: goto L_08A6E7D0;
    case 607u: goto L_08A6E7E0;
    case 608u: goto L_08A6E7F0;
    case 609u: goto L_08A6E7F8;
    case 610u: goto L_08A6E808;
    case 611u: goto L_08A6E818;
    case 612u: goto L_08A6E824;
    case 613u: goto L_08A6E848;
    case 614u: goto L_08A6E858;
    case 615u: goto L_08A6E864;
    case 616u: goto L_08A6E870;
    case 617u: goto L_08A6E878;
    case 618u: goto L_08A6E888;
    case 619u: goto L_08A6E898;
    case 620u: goto L_08A6E8A8;
    case 621u: goto L_08A6E8D0;
    case 622u: goto L_08A6E8E4;
    case 623u: goto L_08A6E900;
    case 624u: goto L_08A6E910;
    case 625u: goto L_08A6E920;
    case 626u: goto L_08A6E930;
    case 627u: goto L_08A6E940;
    case 628u: goto L_08A6E950;
    case 629u: goto L_08A6E964;
    case 630u: goto L_08A6E974;
    case 631u: goto L_08A6E988;
    case 632u: goto L_08A6E998;
    case 633u: goto L_08A6E9A4;
    case 634u: goto L_08A6E9B0;
    case 635u: goto L_08A6E9C0;
    case 636u: goto L_08A6E9CC;
    case 637u: goto L_08A6E9D8;
    case 638u: goto L_08A6E9E4;
    case 639u: goto L_08A6E9F8;
    case 640u: goto L_08A6EA08;
    case 641u: goto L_08A6EA18;
    case 642u: goto L_08A6EA28;
    case 643u: goto L_08A6EA38;
    case 644u: goto L_08A6EA48;
    case 645u: goto L_08A6EA58;
    case 646u: goto L_08A6EA68;
    case 647u: goto L_08A6EA78;
    case 648u: goto L_08A6EA84;
    case 649u: goto L_08A6EA90;
    case 650u: goto L_08A6EAA4;
    case 651u: goto L_08A6EAB0;
    case 652u: goto L_08A6EAC4;
    case 653u: goto L_08A6EAD4;
    case 654u: goto L_08A6EAE0;
    case 655u: goto L_08A6EAF0;
    case 656u: goto L_08A6EB00;
    case 657u: goto L_08A6EB10;
    case 658u: goto L_08A6EB20;
    case 659u: goto L_08A6EB30;
    case 660u: goto L_08A6EB40;
    case 661u: goto L_08A6EB50;
    case 662u: goto L_08A6EB60;
    case 663u: goto L_08A6EB70;
    case 664u: goto L_08A6EB80;
    case 665u: goto L_08A6EB90;
    case 666u: goto L_08A6EBA0;
    case 667u: goto L_08A6EBB0;
    case 668u: goto L_08A6EBC0;
    case 669u: goto L_08A6EBD0;
    case 670u: goto L_08A6EBE0;
    case 671u: goto L_08A6EBF0;
    case 672u: goto L_08A6EC00;
    case 673u: goto L_08A6EC10;
    case 674u: goto L_08A6EC20;
    case 675u: goto L_08A6EC30;
    case 676u: goto L_08A6EC40;
    case 677u: goto L_08A6EC50;
    case 678u: goto L_08A6EC60;
    case 679u: goto L_08A6EC70;
    case 680u: goto L_08A6EC80;
    case 681u: goto L_08A6EC90;
    case 682u: goto L_08A6ECA0;
    case 683u: goto L_08A6ECB0;
    case 684u: goto L_08A6ECC0;
    case 685u: goto L_08A6ECD0;
    case 686u: goto L_08A6ECE0;
    case 687u: goto L_08A6ECEC;
    case 688u: goto L_08A6ECFC;
    case 689u: goto L_08A6ED0C;
    case 690u: goto L_08A6ED1C;
    case 691u: goto L_08A6ED24;
    case 692u: goto L_08A6ED2C;
    case 693u: goto L_08A6ED3C;
    case 694u: goto L_08A6ED4C;
    case 695u: goto L_08A6ED5C;
    case 696u: goto L_08A6ED6C;
    case 697u: goto L_08A6ED7C;
    case 698u: goto L_08A6ED8C;
    case 699u: goto L_08A6ED9C;
    case 700u: goto L_08A6EDAC;
    case 701u: goto L_08A6EDBC;
    case 702u: goto L_08A6EDCC;
    case 703u: goto L_08A6EDDC;
    case 704u: goto L_08A6EDEC;
    case 705u: goto L_08A6EDFC;
    case 706u: goto L_08A6EE0C;
    case 707u: goto L_08A6EE1C;
    case 708u: goto L_08A6EE2C;
    case 709u: goto L_08A6EE3C;
    case 710u: goto L_08A6EE4C;
    case 711u: goto L_08A6EE5C;
    case 712u: goto L_08A6EE6C;
    case 713u: goto L_08A6EE7C;
    case 714u: goto L_08A6EE88;
    case 715u: goto L_08A6EE98;
    case 716u: goto L_08A6EEA8;
    case 717u: goto L_08A6EEB8;
    case 718u: goto L_08A6EEC8;
    case 719u: goto L_08A6EED8;
    case 720u: goto L_08A6EEE8;
    case 721u: goto L_08A6EEF8;
    case 722u: goto L_08A6EF08;
    case 723u: goto L_08A6EF18;
    case 724u: goto L_08A6EF28;
    case 725u: goto L_08A6EF38;
    case 726u: goto L_08A6EF48;
    case 727u: goto L_08A6EF58;
    case 728u: goto L_08A6EF68;
    case 729u: goto L_08A6EF78;
    case 730u: goto L_08A6EF88;
    case 731u: goto L_08A6EF98;
    case 732u: goto L_08A6EFA8;
    case 733u: goto L_08A6EFB8;
    case 734u: goto L_08A6EFC8;
    case 735u: goto L_08A6EFD8;
    case 736u: goto L_08A6EFE4;
    case 737u: goto L_08A6EFF4;
    case 738u: goto L_08A6F004;
    case 739u: goto L_08A6F014;
    case 740u: goto L_08A6F024;
    case 741u: goto L_08A6F034;
    case 742u: goto L_08A6F044;
    case 743u: goto L_08A6F054;
    case 744u: goto L_08A6F064;
    case 745u: goto L_08A6F074;
    case 746u: goto L_08A6F084;
    case 747u: goto L_08A6F094;
    case 748u: goto L_08A6F0A4;
    case 749u: goto L_08A6F0B4;
    case 750u: goto L_08A6F0C4;
    case 751u: goto L_08A6F0D4;
    case 752u: goto L_08A6F0E4;
    case 753u: goto L_08A6F0F4;
    case 754u: goto L_08A6F104;
    case 755u: goto L_08A6F114;
    case 756u: goto L_08A6F124;
    case 757u: goto L_08A6F134;
    case 758u: goto L_08A6F144;
    case 759u: goto L_08A6F154;
    case 760u: goto L_08A6F164;
    case 761u: goto L_08A6F174;
    case 762u: goto L_08A6F184;
    case 763u: goto L_08A6F194;
    case 764u: goto L_08A6F1A0;
    case 765u: goto L_08A6F1B0;
    case 766u: goto L_08A6F1C0;
    case 767u: goto L_08A6F1D0;
    case 768u: goto L_08A6F1E0;
    case 769u: goto L_08A6F1F0;
    case 770u: goto L_08A6F200;
    case 771u: goto L_08A6F210;
    case 772u: goto L_08A6F220;
    case 773u: goto L_08A6F230;
    case 774u: goto L_08A6F240;
    case 775u: goto L_08A6F250;
    case 776u: goto L_08A6F260;
    case 777u: goto L_08A6F270;
    case 778u: goto L_08A6F280;
    case 779u: goto L_08A6F290;
    case 780u: goto L_08A6F2A0;
    case 781u: goto L_08A6F2B0;
    case 782u: goto L_08A6F2C0;
    case 783u: goto L_08A6F2CC;
    case 784u: goto L_08A6F2D8;
    case 785u: goto L_08A6F324;
    case 786u: goto L_08A6F360;
    case 787u: goto L_08A6F368;
    case 788u: goto L_08A6F374;
    case 789u: goto L_08A6F38C;
    case 790u: goto L_08A6F394;
    case 791u: goto L_08A6F3A0;
    case 792u: goto L_08A6F3AC;
    case 793u: goto L_08A6F3B8;
    case 794u: goto L_08A6F3C4;
    case 795u: goto L_08A6F3D0;
    case 796u: goto L_08A6F3F4;
    case 797u: goto L_08A6F3FC;
    case 798u: goto L_08A6F400;
    case 799u: goto L_08A6F404;
    case 800u: goto L_08A6F438;
    case 801u: goto L_08A6F448;
    case 802u: goto L_08A6F458;
    case 803u: goto L_08A6F468;
    case 804u: goto L_08A6F478;
    case 805u: goto L_08A6F488;
    case 806u: goto L_08A6F498;
    case 807u: goto L_08A6F4A8;
    case 808u: goto L_08A6F4B8;
    case 809u: goto L_08A6F4C8;
    case 810u: goto L_08A6F4D8;
    case 811u: goto L_08A6F4E8;
    case 812u: goto L_08A6F4F8;
    case 813u: goto L_08A6F508;
    case 814u: goto L_08A6F518;
    case 815u: goto L_08A6F528;
    case 816u: goto L_08A6F538;
    case 817u: goto L_08A6F548;
    case 818u: goto L_08A6F558;
    case 819u: goto L_08A6F568;
    case 820u: goto L_08A6F578;
    case 821u: goto L_08A6F588;
    case 822u: goto L_08A6F598;
    case 823u: goto L_08A6F5A8;
    case 824u: goto L_08A6F5B8;
    case 825u: goto L_08A6F5C8;
    case 826u: goto L_08A6F5D8;
    case 827u: goto L_08A6F5E8;
    case 828u: goto L_08A6F5F8;
    case 829u: goto L_08A6F608;
    case 830u: goto L_08A6F618;
    case 831u: goto L_08A6F628;
    case 832u: goto L_08A6F638;
    case 833u: goto L_08A6F648;
    case 834u: goto L_08A6F658;
    case 835u: goto L_08A6F668;
    case 836u: goto L_08A6F678;
    case 837u: goto L_08A6F688;
    case 838u: goto L_08A6F698;
    case 839u: goto L_08A6F6B4;
    case 840u: goto L_08A6F6C0;
    case 841u: goto L_08A6F6D0;
    case 842u: goto L_08A6F6EC;
    case 843u: goto L_08A6F6F8;
    case 844u: goto L_08A6F708;
    case 845u: goto L_08A6F728;
    case 846u: goto L_08A6F734;
    case 847u: goto L_08A6F750;
    case 848u: goto L_08A6F758;
    case 849u: goto L_08A6F764;
    case 850u: goto L_08A6F770;
    case 851u: goto L_08A6F78C;
    case 852u: goto L_08A6F7AC;
    case 853u: goto L_08A6F7B8;
    case 854u: goto L_08A6F7D4;
    case 855u: goto L_08A6F7DC;
    case 856u: goto L_08A6F7E8;
    case 857u: goto L_08A6F7F4;
    case 858u: goto L_08A6F810;
    case 859u: goto L_08A6F830;
    case 860u: goto L_08A6F83C;
    case 861u: goto L_08A6F858;
    case 862u: goto L_08A6F860;
    case 863u: goto L_08A6F86C;
    case 864u: goto L_08A6F878;
    case 865u: goto L_08A6F894;
    case 866u: goto L_08A6F8B4;
    case 867u: goto L_08A6F8C0;
    case 868u: goto L_08A6F8DC;
    case 869u: goto L_08A6F8E4;
    case 870u: goto L_08A6F8F0;
    case 871u: goto L_08A6F8FC;
    case 872u: goto L_08A6F918;
    case 873u: goto L_08A6F938;
    case 874u: goto L_08A6F944;
    case 875u: goto L_08A6F960;
    case 876u: goto L_08A6F968;
    case 877u: goto L_08A6F974;
    case 878u: goto L_08A6F980;
    case 879u: goto L_08A6F99C;
    case 880u: goto L_08A6F9BC;
    case 881u: goto L_08A6F9C8;
    case 882u: goto L_08A6F9E4;
    case 883u: goto L_08A6F9EC;
    case 884u: goto L_08A6F9F8;
    case 885u: goto L_08A6FA04;
    case 886u: goto L_08A6FA20;
    case 887u: goto L_08A6FA40;
    case 888u: goto L_08A6FA4C;
    case 889u: goto L_08A6FA68;
    case 890u: goto L_08A6FA70;
    case 891u: goto L_08A6FA7C;
    case 892u: goto L_08A6FA88;
    case 893u: goto L_08A6FAA4;
    case 894u: goto L_08A6FAC4;
    case 895u: goto L_08A6FAD0;
    case 896u: goto L_08A6FAEC;
    case 897u: goto L_08A6FAF4;
    case 898u: goto L_08A6FB00;
    case 899u: goto L_08A6FB0C;
    case 900u: goto L_08A6FB28;
    case 901u: goto L_08A6FB48;
    case 902u: goto L_08A6FB54;
    case 903u: goto L_08A6FB70;
    case 904u: goto L_08A6FB78;
    case 905u: goto L_08A6FB84;
    case 906u: goto L_08A6FB90;
    case 907u: goto L_08A6FBAC;
    case 908u: goto L_08A6FBB8;
    case 909u: goto L_08A6FBC0;
    case 910u: goto L_08A6FBC8;
    case 911u: goto L_08A6FBD8;
    case 912u: goto L_08A6FBE0;
    case 913u: goto L_08A6FBE8;
    case 914u: goto L_08A6FBF0;
    case 915u: goto L_08A6FBF8;
    case 916u: goto L_08A6FC00;
    case 917u: goto L_08A6FC08;
    case 918u: goto L_08A6FC10;
    case 919u: goto L_08A6FC18;
    case 920u: goto L_08A6FC20;
    case 921u: goto L_08A6FC28;
    case 922u: goto L_08A6FC30;
    case 923u: goto L_08A6FC38;
    case 924u: goto L_08A6FC40;
    case 925u: goto L_08A6FC48;
    case 926u: goto L_08A6FC50;
    case 927u: goto L_08A6FC58;
    case 928u: goto L_08A6FC60;
    case 929u: goto L_08A6FC68;
    case 930u: goto L_08A6FC70;
    case 931u: goto L_08A6FC78;
    case 932u: goto L_08A6FC80;
    case 933u: goto L_08A6FC88;
    case 934u: goto L_08A6FC90;
    case 935u: goto L_08A6FC98;
    case 936u: goto L_08A6FCA0;
    case 937u: goto L_08A6FCA8;
    case 938u: goto L_08A6FCB0;
    case 939u: goto L_08A6FCB8;
    case 940u: goto L_08A6FCC0;
    case 941u: goto L_08A6FCC8;
    case 942u: goto L_08A6FCD0;
    case 943u: goto L_08A6FCD8;
    case 944u: goto L_08A6FCE0;
    case 945u: goto L_08A6FCE8;
    case 946u: goto L_08A6FCF0;
    case 947u: goto L_08A6FCF8;
    case 948u: goto L_08A6FD00;
    case 949u: goto L_08A6FD08;
    case 950u: goto L_08A6FD10;
    case 951u: goto L_08A6FD18;
    case 952u: goto L_08A6FD20;
    case 953u: goto L_08A6FD28;
    case 954u: goto L_08A6FD30;
    case 955u: goto L_08A6FD38;
    case 956u: goto L_08A6FD40;
    case 957u: goto L_08A6FD48;
    case 958u: goto L_08A6FD50;
    case 959u: goto L_08A6FD58;
    case 960u: goto L_08A6FD60;
    case 961u: goto L_08A6FD68;
    case 962u: goto L_08A6FD70;
    case 963u: goto L_08A6FD78;
    case 964u: goto L_08A6FD80;
    case 965u: goto L_08A6FD88;
    case 966u: goto L_08A6FD90;
    case 967u: goto L_08A6FD98;
    case 968u: goto L_08A6FDA0;
    case 969u: goto L_08A6FDA8;
    case 970u: goto L_08A6FDB0;
    case 971u: goto L_08A6FDB8;
    case 972u: goto L_08A6FDC0;
    case 973u: goto L_08A6FDC8;
    case 974u: goto L_08A6FDD0;
    case 975u: goto L_08A6FDD8;
    case 976u: goto L_08A6FDE0;
    case 977u: goto L_08A6FDF0;
    case 978u: goto L_08A6FE08;
    case 979u: goto L_08A6FE2C;
    case 980u: goto L_08A6FE34;
    case 981u: goto L_08A6FE4C;
    case 982u: goto L_08A6FE64;
    case 983u: goto L_08A6FE78;
    case 984u: goto L_08A6FE80;
    case 985u: goto L_08A6FE98;
    case 986u: goto L_08A6FEAC;
    case 987u: goto L_08A6FEC0;
    case 988u: goto L_08A6FEDC;
    case 989u: goto L_08A6FEF4;
    case 990u: goto L_08A6FF04;
    case 991u: goto L_08A6FF14;
    case 992u: goto L_08A6FF68;
    case 993u: goto L_08A6FF78;
    case 994u: goto L_08A6FF88;
    case 995u: goto L_08A6FF98;
    case 996u: goto L_08A6FFB0;
    case 997u: goto L_08A6FFC4;
    case 998u: goto L_08A6FFCC;
    case 999u: goto L_08A6FFE4;
    case 1000u: goto L_08A6FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A6C000:
    ctx.set_gpr(31, 0x08A6C008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 862u, 0x08A43D90u>(ctx, &aot_mem) && ctx.pc == 0x08A6C008u) goto L_08A6C008;
    return;
L_08A6C008:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-20924)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C084;
      }
      goto L_08A6C018;
    }
L_08A6C018:
    ctx.set_gpr(31, 0x08A6C020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A6C020u) goto L_08A6C020;
    return;
L_08A6C020:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A6C02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A6C02Cu) goto L_08A6C02C;
    return;
L_08A6C02C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 72u, 0x088B06C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C038u) goto L_08A6C038;
    return;
L_08A6C038:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20924));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C04Cu) goto L_08A6C04C;
    return;
L_08A6C04C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20924)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C068u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C068u) goto L_08A6C068;
    return;
L_08A6C068:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20924)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C084u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C084u) goto L_08A6C084;
    return;
L_08A6C084:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-20908)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C100;
      }
      goto L_08A6C094;
    }
L_08A6C094:
    ctx.set_gpr(31, 0x08A6C09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A6C09Cu) goto L_08A6C09C;
    return;
L_08A6C09C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A6C0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A6C0A8u) goto L_08A6C0A8;
    return;
L_08A6C0A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A6C0B4u) goto L_08A6C0B4;
    return;
L_08A6C0B4:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20908));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C0C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C0C8u) goto L_08A6C0C8;
    return;
L_08A6C0C8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20908)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C0E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C0E4u) goto L_08A6C0E4;
    return;
L_08A6C0E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20908)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C100u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C100u) goto L_08A6C100;
    return;
L_08A6C100:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-20892)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C17C;
      }
      goto L_08A6C110;
    }
L_08A6C110:
    ctx.set_gpr(31, 0x08A6C118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A6C118u) goto L_08A6C118;
    return;
L_08A6C118:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A6C124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A6C124u) goto L_08A6C124;
    return;
L_08A6C124:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A6C130u) goto L_08A6C130;
    return;
L_08A6C130:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20892));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C144u) goto L_08A6C144;
    return;
L_08A6C144:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20892)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C160u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C160u) goto L_08A6C160;
    return;
L_08A6C160:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20892)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C17Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C17Cu) goto L_08A6C17C;
    return;
L_08A6C17C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-20876)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C1DC;
      }
      goto L_08A6C18C;
    }
L_08A6C18C:
    ctx.set_gpr(31, 0x08A6C194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A6C194u) goto L_08A6C194;
    return;
L_08A6C194:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A6C1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A6C1A0u) goto L_08A6C1A0;
    return;
L_08A6C1A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 631u, 0x088BBA54u>(ctx, &aot_mem) && ctx.pc == 0x08A6C1ACu) goto L_08A6C1AC;
    return;
L_08A6C1AC:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20876));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C1C0u) goto L_08A6C1C0;
    return;
L_08A6C1C0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20876)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C1DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C1DCu) goto L_08A6C1DC;
    return;
L_08A6C1DC:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-20860)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C248;
      }
      goto L_08A6C1EC;
    }
L_08A6C1EC:
    ctx.set_gpr(31, 0x08A6C1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A6C1F4u) goto L_08A6C1F4;
    return;
L_08A6C1F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A6C200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A6C200u) goto L_08A6C200;
    return;
L_08A6C200:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 39u, 0x088C0398u>(ctx, &aot_mem) && ctx.pc == 0x08A6C20Cu) goto L_08A6C20C;
    return;
L_08A6C20C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20860));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C220u) goto L_08A6C220;
    return;
L_08A6C220:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20860)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C248u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C248u) goto L_08A6C248;
    return;
L_08A6C248:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C258:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20924));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6C27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C27Cu) goto L_08A6C27C;
    return;
L_08A6C27C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20908));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6C290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C290u) goto L_08A6C290;
    return;
L_08A6C290:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20892));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6C2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C2A4u) goto L_08A6C2A4;
    return;
L_08A6C2A4:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20876));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6C2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C2B8u) goto L_08A6C2B8;
    return;
L_08A6C2B8:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20860));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6C2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C2CCu) goto L_08A6C2CC;
    return;
L_08A6C2CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6C2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 885u, 0x08A43F14u>(ctx, &aot_mem) && ctx.pc == 0x08A6C2D8u) goto L_08A6C2D8;
    return;
L_08A6C2D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C2EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A6C304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 899u, 0x08A43FF4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C304u) goto L_08A6C304;
    return;
L_08A6C304:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6C320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C320u) goto L_08A6C320;
    return;
L_08A6C320:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C338;
      }
      goto L_08A6C32C;
    }
L_08A6C32C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A6C338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 164u, 0x08A44B94u>(ctx, &aot_mem) && ctx.pc == 0x08A6C338u) goto L_08A6C338;
    return;
L_08A6C338:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(73)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C354;
      }
      goto L_08A6C344;
    }
L_08A6C344:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A6C354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 130u, 0x088D09C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6C354u) goto L_08A6C354;
    return;
L_08A6C354:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C36Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C36Cu) goto L_08A6C36C;
    return;
L_08A6C36C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6C378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C378u) goto L_08A6C378;
    return;
L_08A6C378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A6C384u) goto L_08A6C384;
    return;
L_08A6C384:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C394u) goto L_08A6C394;
    return;
L_08A6C394:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C3ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C3ACu) goto L_08A6C3AC;
    return;
L_08A6C3AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C3C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C3C4u) goto L_08A6C3C4;
    return;
L_08A6C3C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A6C3D4u);
    // nop
    goto L_08A6D900;
L_08A6C3D4:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A6C67C;
      }
      goto L_08A6C3E4;
    }
L_08A6C3E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6C3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C3F0u) goto L_08A6C3F0;
    return;
L_08A6C3F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 257u, 0x08995790u>(ctx, &aot_mem) && ctx.pc == 0x08A6C3FCu) goto L_08A6C3FC;
    return;
L_08A6C3FC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23208));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C41C;
      }
      goto L_08A6C410;
    }
L_08A6C410:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C46C;
      }
      goto L_08A6C41C;
    }
L_08A6C41C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C454;
      }
      goto L_08A6C42C;
    }
L_08A6C42C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A6C438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C438u) goto L_08A6C438;
    return;
L_08A6C438:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C44C;
      }
      goto L_08A6C440;
    }
L_08A6C440:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A6C44Cu) goto L_08A6C44C;
    return;
L_08A6C44C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A6C454;
L_08A6C454:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23208));
    ctx.set_gpr(31, 0x08A6C46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A6C46Cu) goto L_08A6C46C;
    return;
L_08A6C46C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A6C480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 139u, 0x089A0894u>(ctx, &aot_mem) && ctx.pc == 0x08A6C480u) goto L_08A6C480;
    return;
L_08A6C480:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C4AC;
      }
      goto L_08A6C490;
    }
L_08A6C490:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C4AC;
      }
      goto L_08A6C4A8;
    }
L_08A6C4A8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A6C4AC;
L_08A6C4AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C4D8;
      }
      goto L_08A6C4B4;
    }
L_08A6C4B4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C4D8;
      }
      goto L_08A6C4CC;
    }
L_08A6C4CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A6C4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C4D8u) goto L_08A6C4D8;
    return;
L_08A6C4D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6C4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C4E4u) goto L_08A6C4E4;
    return;
L_08A6C4E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 409u, 0x088B2600u>(ctx, &aot_mem) && ctx.pc == 0x08A6C4F0u) goto L_08A6C4F0;
    return;
L_08A6C4F0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C504u) goto L_08A6C504;
    return;
L_08A6C504:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C518;
      }
      goto L_08A6C510;
    }
L_08A6C510:
    ctx.set_gpr(31, 0x08A6C518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6C518u) goto L_08A6C518;
    return;
L_08A6C518:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A6C52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 12u, 0x088D00D4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C52Cu) goto L_08A6C52C;
    return;
L_08A6C52C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C544u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C544u) goto L_08A6C544;
    return;
L_08A6C544:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C55Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C55Cu) goto L_08A6C55C;
    return;
L_08A6C55C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C574u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C574u) goto L_08A6C574;
    return;
L_08A6C574:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C58Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C58Cu) goto L_08A6C58C;
    return;
L_08A6C58C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6C598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C598u) goto L_08A6C598;
    return;
L_08A6C598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 355u, 0x088B2154u>(ctx, &aot_mem) && ctx.pc == 0x08A6C5A4u) goto L_08A6C5A4;
    return;
L_08A6C5A4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C5B8u) goto L_08A6C5B8;
    return;
L_08A6C5B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C5CC;
      }
      goto L_08A6C5C4;
    }
L_08A6C5C4:
    ctx.set_gpr(31, 0x08A6C5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6C5CCu) goto L_08A6C5CC;
    return;
L_08A6C5CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C5E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C5E4u) goto L_08A6C5E4;
    return;
L_08A6C5E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C5FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C5FCu) goto L_08A6C5FC;
    return;
L_08A6C5FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6C608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C608u) goto L_08A6C608;
    return;
L_08A6C608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A6C614u) goto L_08A6C614;
    return;
L_08A6C614:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C628u) goto L_08A6C628;
    return;
L_08A6C628:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C63C;
      }
      goto L_08A6C634;
    }
L_08A6C634:
    ctx.set_gpr(31, 0x08A6C63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6C63Cu) goto L_08A6C63C;
    return;
L_08A6C63C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C65Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C65Cu) goto L_08A6C65C;
    return;
L_08A6C65C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6C668u);
    // nop
    goto L_08A6D954;
L_08A6C668:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C67C;
      }
      goto L_08A6C674;
    }
L_08A6C674:
    ctx.set_gpr(31, 0x08A6C67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6C67Cu) goto L_08A6C67C;
    return;
L_08A6C67C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C690:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A6C6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 70u, 0x08A44474u>(ctx, &aot_mem) && ctx.pc == 0x08A6C6A8u) goto L_08A6C6A8;
    return;
L_08A6C6A8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6C6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C6B8u) goto L_08A6C6B8;
    return;
L_08A6C6B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6C6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C6D0u) goto L_08A6C6D0;
    return;
L_08A6C6D0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6C6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C6E0u) goto L_08A6C6E0;
    return;
L_08A6C6E0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6C6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6C6F0u) goto L_08A6C6F0;
    return;
L_08A6C6F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C704:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6C70C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C738u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C738u) goto L_08A6C738;
    return;
L_08A6C738:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C87C;
      }
      goto L_08A6C74C;
    }
L_08A6C74C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C764u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C764u) goto L_08A6C764;
    return;
L_08A6C764:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C77Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C77Cu) goto L_08A6C77C;
    return;
L_08A6C77C:
    ctx.set_gpr(31, 0x08A6C784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C784u) goto L_08A6C784;
    return;
L_08A6C784:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23232));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A6C7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x08A6C7B0u) goto L_08A6C7B0;
    return;
L_08A6C7B0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C7D4;
      }
      goto L_08A6C7BC;
    }
L_08A6C7BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6C7D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6C7D4u) goto L_08A6C7D4;
    return;
L_08A6C7D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C844;
      }
      goto L_08A6C7E0;
    }
L_08A6C7E0:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23268));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A6C808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 578u, 0x08A7B518u>(ctx, &aot_mem) && ctx.pc == 0x08A6C808u) goto L_08A6C808;
    return;
L_08A6C808:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C82C;
      }
      goto L_08A6C814;
    }
L_08A6C814:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6C824u);
    // nop
    goto L_08A6D4F4;
L_08A6C824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C87C;
      }
      goto L_08A6C82C;
    }
L_08A6C82C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6C83Cu);
    // nop
    goto L_08A6D0CC;
L_08A6C83C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C87C;
      }
      goto L_08A6C844;
    }
L_08A6C844:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6C86C;
      }
      goto L_08A6C854;
    }
L_08A6C854:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6C864u);
    // nop
    goto L_08A6CCEC;
L_08A6C864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C87C;
      }
      goto L_08A6C86C;
    }
L_08A6C86C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6C87Cu);
    // nop
    goto L_08A6CA28;
L_08A6C87C:
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
L_08A6C898:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A6C8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C8B0u) goto L_08A6C8B0;
    return;
L_08A6C8B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C8BCu) goto L_08A6C8BC;
    return;
L_08A6C8BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C978;
      }
      goto L_08A6C8CC;
    }
L_08A6C8CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A6C8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C8E4u) goto L_08A6C8E4;
    return;
L_08A6C8E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A6C8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C8F4u) goto L_08A6C8F4;
    return;
L_08A6C8F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20908)));
    ctx.set_gpr(31, 0x08A6C908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C908u) goto L_08A6C908;
    return;
L_08A6C908:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6C914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C914u) goto L_08A6C914;
    return;
L_08A6C914:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C920u) goto L_08A6C920;
    return;
L_08A6C920:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6C930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6C930u) goto L_08A6C930;
    return;
L_08A6C930:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08A6C940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C940u) goto L_08A6C940;
    return;
L_08A6C940:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21824)));
    ctx.set_gpr(31, 0x08A6C954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C954u) goto L_08A6C954;
    return;
L_08A6C954:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20876)));
    ctx.set_gpr(31, 0x08A6C968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C968u) goto L_08A6C968;
    return;
L_08A6C968:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6C988;
      }
      goto L_08A6C978;
    }
L_08A6C978:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_08A6C988;
L_08A6C988:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A6C998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C998u) goto L_08A6C998;
    return;
L_08A6C998:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A6C9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C9A8u) goto L_08A6C9A8;
    return;
L_08A6C9A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A6C9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C9B8u) goto L_08A6C9B8;
    return;
L_08A6C9B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6C9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C9CCu) goto L_08A6C9CC;
    return;
L_08A6C9CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A6C9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C9DCu) goto L_08A6C9DC;
    return;
L_08A6C9DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A6C9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6C9ECu) goto L_08A6C9EC;
    return;
L_08A6C9EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CA00;
      }
      goto L_08A6C9F8;
    }
L_08A6C9F8:
    ctx.set_gpr(31, 0x08A6CA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6CA00u) goto L_08A6CA00;
    return;
L_08A6CA00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CA14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CA1C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6CA28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CA5C;
      }
      goto L_08A6CA4C;
    }
L_08A6CA4C:
    ctx.set_gpr(31, 0x08A6CA54u);
    // nop
    goto L_08A6C898;
L_08A6CA54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CCD4;
      }
      goto L_08A6CA5C;
    }
L_08A6CA5C:
    ctx.set_gpr(31, 0x08A6CA64u);
    // nop
    goto L_08A6CA1C;
L_08A6CA64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CA84;
      }
      goto L_08A6CA6C;
    }
L_08A6CA6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6CA7Cu);
    // nop
    goto L_08A6CA14;
L_08A6CA7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CCD4;
      }
      goto L_08A6CA84;
    }
L_08A6CA84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6CA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CA90u) goto L_08A6CA90;
    return;
L_08A6CA90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6CA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CA9Cu) goto L_08A6CA9C;
    return;
L_08A6CA9C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6CAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CAACu) goto L_08A6CAAC;
    return;
L_08A6CAAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6CAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CAB8u) goto L_08A6CAB8;
    return;
L_08A6CAB8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6CAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CAD8u) goto L_08A6CAD8;
    return;
L_08A6CAD8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A6CAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CAE8u) goto L_08A6CAE8;
    return;
L_08A6CAE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A6CAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CAF8u) goto L_08A6CAF8;
    return;
L_08A6CAF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A6CB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB08u) goto L_08A6CB08;
    return;
L_08A6CB08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A6CB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB18u) goto L_08A6CB18;
    return;
L_08A6CB18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A6CB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB28u) goto L_08A6CB28;
    return;
L_08A6CB28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A6CB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB38u) goto L_08A6CB38;
    return;
L_08A6CB38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A6CB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB48u) goto L_08A6CB48;
    return;
L_08A6CB48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A6CB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB58u) goto L_08A6CB58;
    return;
L_08A6CB58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A6CB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB68u) goto L_08A6CB68;
    return;
L_08A6CB68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A6CB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CB78u) goto L_08A6CB78;
    return;
L_08A6CB78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6CB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CB84u) goto L_08A6CB84;
    return;
L_08A6CB84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6CB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CB90u) goto L_08A6CB90;
    return;
L_08A6CB90:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6CBA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CBA0u) goto L_08A6CBA0;
    return;
L_08A6CBA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6CBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CBACu) goto L_08A6CBAC;
    return;
L_08A6CBAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6CBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CBB8u) goto L_08A6CBB8;
    return;
L_08A6CBB8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6CBC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CBC8u) goto L_08A6CBC8;
    return;
L_08A6CBC8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A6CBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CBD8u) goto L_08A6CBD8;
    return;
L_08A6CBD8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A6CBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CBE8u) goto L_08A6CBE8;
    return;
L_08A6CBE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6CBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CBFCu) goto L_08A6CBFC;
    return;
L_08A6CBFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08A6CC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CC0Cu) goto L_08A6CC0C;
    return;
L_08A6CC0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08A6CC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CC1Cu) goto L_08A6CC1C;
    return;
L_08A6CC1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21824)));
    ctx.set_gpr(31, 0x08A6CC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CC30u) goto L_08A6CC30;
    return;
L_08A6CC30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21824)));
    ctx.set_gpr(31, 0x08A6CC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CC44u) goto L_08A6CC44;
    return;
L_08A6CC44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A6CC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CC54u) goto L_08A6CC54;
    return;
L_08A6CC54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A6CC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CC64u) goto L_08A6CC64;
    return;
L_08A6CC64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A6CC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CC7Cu) goto L_08A6CC7C;
    return;
L_08A6CC7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A6CC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CC8Cu) goto L_08A6CC8C;
    return;
L_08A6CC8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A6CC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CC9Cu) goto L_08A6CC9C;
    return;
L_08A6CC9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A6CCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CCACu) goto L_08A6CCAC;
    return;
L_08A6CCAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CCC0;
      }
      goto L_08A6CCB8;
    }
L_08A6CCB8:
    ctx.set_gpr(31, 0x08A6CCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6CCC0u) goto L_08A6CCC0;
    return;
L_08A6CCC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CCD4;
      }
      goto L_08A6CCCC;
    }
L_08A6CCCC:
    ctx.set_gpr(31, 0x08A6CCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6CCD4u) goto L_08A6CCD4;
    return;
L_08A6CCD4:
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
L_08A6CCEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6CD1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6CD1Cu) goto L_08A6CD1C;
    return;
L_08A6CD1C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CD40;
      }
      goto L_08A6CD28;
    }
L_08A6CD28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6CD38u);
    // nop
    goto L_08A6CA28;
L_08A6CD38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D0B4;
      }
      goto L_08A6CD40;
    }
L_08A6CD40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6CD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CD54u) goto L_08A6CD54;
    return;
L_08A6CD54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6CD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CD60u) goto L_08A6CD60;
    return;
L_08A6CD60:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6CD70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CD70u) goto L_08A6CD70;
    return;
L_08A6CD70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6CD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CD7Cu) goto L_08A6CD7C;
    return;
L_08A6CD7C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A6CD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CD90u) goto L_08A6CD90;
    return;
L_08A6CD90:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A6CDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CDA0u) goto L_08A6CDA0;
    return;
L_08A6CDA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CE30;
      }
      goto L_08A6CDAC;
    }
L_08A6CDAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6CDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CDC0u) goto L_08A6CDC0;
    return;
L_08A6CDC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A6CDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CDD0u) goto L_08A6CDD0;
    return;
L_08A6CDD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A6CDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CDE0u) goto L_08A6CDE0;
    return;
L_08A6CDE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A6CDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CDF0u) goto L_08A6CDF0;
    return;
L_08A6CDF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A6CE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CE00u) goto L_08A6CE00;
    return;
L_08A6CE00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A6CE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CE10u) goto L_08A6CE10;
    return;
L_08A6CE10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A6CE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CE20u) goto L_08A6CE20;
    return;
L_08A6CE20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A6CE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CE30u) goto L_08A6CE30;
    return;
L_08A6CE30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6CE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CE3Cu) goto L_08A6CE3C;
    return;
L_08A6CE3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6CE48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CE48u) goto L_08A6CE48;
    return;
L_08A6CE48:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6CE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CE58u) goto L_08A6CE58;
    return;
L_08A6CE58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6CE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CE64u) goto L_08A6CE64;
    return;
L_08A6CE64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6CE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CE70u) goto L_08A6CE70;
    return;
L_08A6CE70:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6CE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6CE80u) goto L_08A6CE80;
    return;
L_08A6CE80:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A6CE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CE90u) goto L_08A6CE90;
    return;
L_08A6CE90:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A6CEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CEA0u) goto L_08A6CEA0;
    return;
L_08A6CEA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CED8;
      }
      goto L_08A6CEAC;
    }
L_08A6CEAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6CEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CEC0u) goto L_08A6CEC0;
    return;
L_08A6CEC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A6CED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CED0u) goto L_08A6CED0;
    return;
L_08A6CED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6CF00;
      }
      goto L_08A6CED8;
    }
L_08A6CED8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6CEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CEECu) goto L_08A6CEEC;
    return;
L_08A6CEEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6CF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CF00u) goto L_08A6CF00;
    return;
L_08A6CF00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08A6CF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CF10u) goto L_08A6CF10;
    return;
L_08A6CF10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08A6CF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CF20u) goto L_08A6CF20;
    return;
L_08A6CF20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21824)));
    ctx.set_gpr(31, 0x08A6CF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CF34u) goto L_08A6CF34;
    return;
L_08A6CF34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21824)));
    ctx.set_gpr(31, 0x08A6CF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CF48u) goto L_08A6CF48;
    return;
L_08A6CF48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20876)));
    ctx.set_gpr(31, 0x08A6CF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CF5Cu) goto L_08A6CF5C;
    return;
L_08A6CF5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20876)));
    ctx.set_gpr(31, 0x08A6CF70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CF70u) goto L_08A6CF70;
    return;
L_08A6CF70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, 0x08A6CF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CF80u) goto L_08A6CF80;
    return;
L_08A6CF80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, 0x08A6CF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CF90u) goto L_08A6CF90;
    return;
L_08A6CF90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, 0x08A6CFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CFA0u) goto L_08A6CFA0;
    return;
L_08A6CFA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, 0x08A6CFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CFB0u) goto L_08A6CFB0;
    return;
L_08A6CFB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20892)));
    ctx.set_gpr(31, 0x08A6CFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CFC4u) goto L_08A6CFC4;
    return;
L_08A6CFC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20892)));
    ctx.set_gpr(31, 0x08A6CFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6CFD8u) goto L_08A6CFD8;
    return;
L_08A6CFD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6CFF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6CFF0u) goto L_08A6CFF0;
    return;
L_08A6CFF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A6D000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D000u) goto L_08A6D000;
    return;
L_08A6D000:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A6D010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D010u) goto L_08A6D010;
    return;
L_08A6D010:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6D028u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6D028u) goto L_08A6D028;
    return;
L_08A6D028:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A6D044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D044u) goto L_08A6D044;
    return;
L_08A6D044:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A6D054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D054u) goto L_08A6D054;
    return;
L_08A6D054:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6D06Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6D06Cu) goto L_08A6D06C;
    return;
L_08A6D06C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A6D07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D07Cu) goto L_08A6D07C;
    return;
L_08A6D07C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A6D08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D08Cu) goto L_08A6D08C;
    return;
L_08A6D08C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D0A0;
      }
      goto L_08A6D098;
    }
L_08A6D098:
    ctx.set_gpr(31, 0x08A6D0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6D0A0u) goto L_08A6D0A0;
    return;
L_08A6D0A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D0B4;
      }
      goto L_08A6D0AC;
    }
L_08A6D0AC:
    ctx.set_gpr(31, 0x08A6D0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6D0B4u) goto L_08A6D0B4;
    return;
L_08A6D0B4:
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
L_08A6D0CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6D0FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6D0FCu) goto L_08A6D0FC;
    return;
L_08A6D0FC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D120;
      }
      goto L_08A6D108;
    }
L_08A6D108:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6D118u);
    // nop
    goto L_08A6CA28;
L_08A6D118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D4DC;
      }
      goto L_08A6D120;
    }
L_08A6D120:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6D134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D134u) goto L_08A6D134;
    return;
L_08A6D134:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6D140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D140u) goto L_08A6D140;
    return;
L_08A6D140:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6D150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D150u) goto L_08A6D150;
    return;
L_08A6D150:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6D15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D15Cu) goto L_08A6D15C;
    return;
L_08A6D15C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A6D170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D170u) goto L_08A6D170;
    return;
L_08A6D170:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A6D180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D180u) goto L_08A6D180;
    return;
L_08A6D180:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D220;
      }
      goto L_08A6D18C;
    }
L_08A6D18C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6D1A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D1A0u) goto L_08A6D1A0;
    return;
L_08A6D1A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A6D1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D1B0u) goto L_08A6D1B0;
    return;
L_08A6D1B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A6D1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D1C0u) goto L_08A6D1C0;
    return;
L_08A6D1C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A6D1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D1D0u) goto L_08A6D1D0;
    return;
L_08A6D1D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A6D1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D1E0u) goto L_08A6D1E0;
    return;
L_08A6D1E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A6D1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D1F0u) goto L_08A6D1F0;
    return;
L_08A6D1F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A6D200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D200u) goto L_08A6D200;
    return;
L_08A6D200:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A6D210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D210u) goto L_08A6D210;
    return;
L_08A6D210:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A6D220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D220u) goto L_08A6D220;
    return;
L_08A6D220:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6D22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D22Cu) goto L_08A6D22C;
    return;
L_08A6D22C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6D238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D238u) goto L_08A6D238;
    return;
L_08A6D238:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6D248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D248u) goto L_08A6D248;
    return;
L_08A6D248:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6D254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D254u) goto L_08A6D254;
    return;
L_08A6D254:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6D260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D260u) goto L_08A6D260;
    return;
L_08A6D260:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6D270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D270u) goto L_08A6D270;
    return;
L_08A6D270:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A6D280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D280u) goto L_08A6D280;
    return;
L_08A6D280:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A6D290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D290u) goto L_08A6D290;
    return;
L_08A6D290:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D2B8;
      }
      goto L_08A6D29C;
    }
L_08A6D29C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6D2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D2B0u) goto L_08A6D2B0;
    return;
L_08A6D2B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D2E0;
      }
      goto L_08A6D2B8;
    }
L_08A6D2B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6D2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D2CCu) goto L_08A6D2CC;
    return;
L_08A6D2CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6D2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D2E0u) goto L_08A6D2E0;
    return;
L_08A6D2E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08A6D2F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D2F0u) goto L_08A6D2F0;
    return;
L_08A6D2F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08A6D300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D300u) goto L_08A6D300;
    return;
L_08A6D300:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08A6D310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D310u) goto L_08A6D310;
    return;
L_08A6D310:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08A6D320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D320u) goto L_08A6D320;
    return;
L_08A6D320:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21824)));
    ctx.set_gpr(31, 0x08A6D334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D334u) goto L_08A6D334;
    return;
L_08A6D334:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21824)));
    ctx.set_gpr(31, 0x08A6D348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D348u) goto L_08A6D348;
    return;
L_08A6D348:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21804)));
    ctx.set_gpr(31, 0x08A6D35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D35Cu) goto L_08A6D35C;
    return;
L_08A6D35C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21804)));
    ctx.set_gpr(31, 0x08A6D370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D370u) goto L_08A6D370;
    return;
L_08A6D370:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20876)));
    ctx.set_gpr(31, 0x08A6D384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D384u) goto L_08A6D384;
    return;
L_08A6D384:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20876)));
    ctx.set_gpr(31, 0x08A6D398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D398u) goto L_08A6D398;
    return;
L_08A6D398:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08A6D3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D3A8u) goto L_08A6D3A8;
    return;
L_08A6D3A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08A6D3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D3B8u) goto L_08A6D3B8;
    return;
L_08A6D3B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08A6D3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D3C8u) goto L_08A6D3C8;
    return;
L_08A6D3C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08A6D3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D3D8u) goto L_08A6D3D8;
    return;
L_08A6D3D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20892)));
    ctx.set_gpr(31, 0x08A6D3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D3ECu) goto L_08A6D3EC;
    return;
L_08A6D3EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20892)));
    ctx.set_gpr(31, 0x08A6D400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D400u) goto L_08A6D400;
    return;
L_08A6D400:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6D418u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6D418u) goto L_08A6D418;
    return;
L_08A6D418:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A6D428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D428u) goto L_08A6D428;
    return;
L_08A6D428:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A6D438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D438u) goto L_08A6D438;
    return;
L_08A6D438:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6D450u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6D450u) goto L_08A6D450;
    return;
L_08A6D450:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A6D46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D46Cu) goto L_08A6D46C;
    return;
L_08A6D46C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A6D47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D47Cu) goto L_08A6D47C;
    return;
L_08A6D47C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6D494u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6D494u) goto L_08A6D494;
    return;
L_08A6D494:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A6D4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D4A4u) goto L_08A6D4A4;
    return;
L_08A6D4A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A6D4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D4B4u) goto L_08A6D4B4;
    return;
L_08A6D4B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D4C8;
      }
      goto L_08A6D4C0;
    }
L_08A6D4C0:
    ctx.set_gpr(31, 0x08A6D4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6D4C8u) goto L_08A6D4C8;
    return;
L_08A6D4C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D4DC;
      }
      goto L_08A6D4D4;
    }
L_08A6D4D4:
    ctx.set_gpr(31, 0x08A6D4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6D4DCu) goto L_08A6D4DC;
    return;
L_08A6D4DC:
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
L_08A6D4F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A6D50Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D50Cu) goto L_08A6D50C;
    return;
L_08A6D50C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6D518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D518u) goto L_08A6D518;
    return;
L_08A6D518:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6D528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D528u) goto L_08A6D528;
    return;
L_08A6D528:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6D534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D534u) goto L_08A6D534;
    return;
L_08A6D534:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A6D548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D548u) goto L_08A6D548;
    return;
L_08A6D548:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A6D558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D558u) goto L_08A6D558;
    return;
L_08A6D558:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6D564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D564u) goto L_08A6D564;
    return;
L_08A6D564:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6D570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D570u) goto L_08A6D570;
    return;
L_08A6D570:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6D580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D580u) goto L_08A6D580;
    return;
L_08A6D580:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6D58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D58Cu) goto L_08A6D58C;
    return;
L_08A6D58C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A6D5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D5A0u) goto L_08A6D5A0;
    return;
L_08A6D5A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A6D5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D5B0u) goto L_08A6D5B0;
    return;
L_08A6D5B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6D5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D5BCu) goto L_08A6D5BC;
    return;
L_08A6D5BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6D5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D5C8u) goto L_08A6D5C8;
    return;
L_08A6D5C8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6D5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D5D8u) goto L_08A6D5D8;
    return;
L_08A6D5D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6D5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 534u, 0x088C2F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D5E4u) goto L_08A6D5E4;
    return;
L_08A6D5E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A6D5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D5F8u) goto L_08A6D5F8;
    return;
L_08A6D5F8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A6D608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D608u) goto L_08A6D608;
    return;
L_08A6D608:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D6CC;
      }
      goto L_08A6D61C;
    }
L_08A6D61C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6D630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D630u) goto L_08A6D630;
    return;
L_08A6D630:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6D644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D644u) goto L_08A6D644;
    return;
L_08A6D644:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A6D654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D654u) goto L_08A6D654;
    return;
L_08A6D654:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A6D664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D664u) goto L_08A6D664;
    return;
L_08A6D664:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A6D674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D674u) goto L_08A6D674;
    return;
L_08A6D674:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08A6D684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D684u) goto L_08A6D684;
    return;
L_08A6D684:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A6D694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D694u) goto L_08A6D694;
    return;
L_08A6D694:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08A6D6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D6A4u) goto L_08A6D6A4;
    return;
L_08A6D6A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A6D6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D6B4u) goto L_08A6D6B4;
    return;
L_08A6D6B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A6D6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D6C4u) goto L_08A6D6C4;
    return;
L_08A6D6C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D6F4;
      }
      goto L_08A6D6CC;
    }
L_08A6D6CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6D6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D6E0u) goto L_08A6D6E0;
    return;
L_08A6D6E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21828)));
    ctx.set_gpr(31, 0x08A6D6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D6F4u) goto L_08A6D6F4;
    return;
L_08A6D6F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A6D70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D70Cu) goto L_08A6D70C;
    return;
L_08A6D70C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A6D71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D71Cu) goto L_08A6D71C;
    return;
L_08A6D71C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21820)));
    ctx.set_gpr(31, 0x08A6D730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D730u) goto L_08A6D730;
    return;
L_08A6D730:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21820)));
    ctx.set_gpr(31, 0x08A6D744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D744u) goto L_08A6D744;
    return;
L_08A6D744:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08A6D754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D754u) goto L_08A6D754;
    return;
L_08A6D754:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08A6D764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D764u) goto L_08A6D764;
    return;
L_08A6D764:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08A6D774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D774u) goto L_08A6D774;
    return;
L_08A6D774:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08A6D784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D784u) goto L_08A6D784;
    return;
L_08A6D784:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20860)));
    ctx.set_gpr(31, 0x08A6D798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D798u) goto L_08A6D798;
    return;
L_08A6D798:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20860)));
    ctx.set_gpr(31, 0x08A6D7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D7ACu) goto L_08A6D7AC;
    return;
L_08A6D7AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21804)));
    ctx.set_gpr(31, 0x08A6D7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D7C0u) goto L_08A6D7C0;
    return;
L_08A6D7C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21804)));
    ctx.set_gpr(31, 0x08A6D7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D7D4u) goto L_08A6D7D4;
    return;
L_08A6D7D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21824)));
    ctx.set_gpr(31, 0x08A6D7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D7E8u) goto L_08A6D7E8;
    return;
L_08A6D7E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21824)));
    ctx.set_gpr(31, 0x08A6D7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D7FCu) goto L_08A6D7FC;
    return;
L_08A6D7FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6D814u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6D814u) goto L_08A6D814;
    return;
L_08A6D814:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08A6D824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D824u) goto L_08A6D824;
    return;
L_08A6D824:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08A6D834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D834u) goto L_08A6D834;
    return;
L_08A6D834:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A6D844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D844u) goto L_08A6D844;
    return;
L_08A6D844:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08A6D854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D854u) goto L_08A6D854;
    return;
L_08A6D854:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A6D864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D864u) goto L_08A6D864;
    return;
L_08A6D864:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08A6D874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D874u) goto L_08A6D874;
    return;
L_08A6D874:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D888;
      }
      goto L_08A6D880;
    }
L_08A6D880:
    ctx.set_gpr(31, 0x08A6D888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6D888u) goto L_08A6D888;
    return;
L_08A6D888:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D89C;
      }
      goto L_08A6D894;
    }
L_08A6D894:
    ctx.set_gpr(31, 0x08A6D89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6D89Cu) goto L_08A6D89C;
    return;
L_08A6D89C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D8B0;
      }
      goto L_08A6D8A8;
    }
L_08A6D8A8:
    ctx.set_gpr(31, 0x08A6D8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6D8B0u) goto L_08A6D8B0;
    return;
L_08A6D8B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D8C4;
      }
      goto L_08A6D8BC;
    }
L_08A6D8BC:
    ctx.set_gpr(31, 0x08A6D8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6D8C4u) goto L_08A6D8C4;
    return;
L_08A6D8C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D8D8;
      }
      goto L_08A6D8D0;
    }
L_08A6D8D0:
    ctx.set_gpr(31, 0x08A6D8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6D8D8u) goto L_08A6D8D8;
    return;
L_08A6D8D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D8EC;
      }
      goto L_08A6D8E4;
    }
L_08A6D8E4:
    ctx.set_gpr(31, 0x08A6D8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6D8ECu) goto L_08A6D8EC;
    return;
L_08A6D8EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D900:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32404)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6D934;
      }
      goto L_08A6D924;
    }
L_08A6D924:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6D948;
      }
      goto L_08A6D934;
    }
L_08A6D934:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    goto L_08A6D948;
L_08A6D948:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D954:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6D974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6D974u) goto L_08A6D974;
    return;
L_08A6D974:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A6D998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 255u, 0x089A508Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6D998u) goto L_08A6D998;
    return;
L_08A6D998:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6D9ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6D9ACu) goto L_08A6D9AC;
    return;
L_08A6D9AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D9C0:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D9CC:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D9D8:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D9E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26572)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6D9F4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DA04:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26520)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DA14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6DA2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6DA2Cu) goto L_08A6DA2C;
    return;
L_08A6DA2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DA3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6DA54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6DA54u) goto L_08A6DA54;
    return;
L_08A6DA54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DA64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 253u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6DA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6DA88u) goto L_08A6DA88;
    return;
L_08A6DA88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DA98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A6DAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 826u, 0x0890FDF0u>(ctx, &aot_mem) && ctx.pc == 0x08A6DAC0u) goto L_08A6DAC0;
    return;
L_08A6DAC0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DAE4;
      }
      goto L_08A6DAD0;
    }
L_08A6DAD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A6DAE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 826u, 0x0890FDF0u>(ctx, &aot_mem) && ctx.pc == 0x08A6DAE4u) goto L_08A6DAE4;
    return;
L_08A6DAE4:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DB00;
      }
      goto L_08A6DAF4;
    }
L_08A6DAF4:
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DB14;
      }
      goto L_08A6DB00;
    }
L_08A6DB00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A6DB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 826u, 0x0890FDF0u>(ctx, &aot_mem) && ctx.pc == 0x08A6DB14u) goto L_08A6DB14;
    return;
L_08A6DB14:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DB38;
      }
      goto L_08A6DB24;
    }
L_08A6DB24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A6DB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 826u, 0x0890FDF0u>(ctx, &aot_mem) && ctx.pc == 0x08A6DB38u) goto L_08A6DB38;
    return;
L_08A6DB38:
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
L_08A6DB50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6DB9C;
      }
      goto L_08A6DB74;
    }
L_08A6DB74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DB90;
      }
      goto L_08A6DB84;
    }
L_08A6DB84:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DB9C;
      }
      goto L_08A6DB90;
    }
L_08A6DB90:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A6DB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6DB9Cu) goto L_08A6DB9C;
    return;
L_08A6DB9C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DBE4;
      }
      goto L_08A6DBAC;
    }
L_08A6DBAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6DBE4;
      }
      goto L_08A6DBB8;
    }
L_08A6DBB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DBD4;
      }
      goto L_08A6DBC8;
    }
L_08A6DBC8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DBE4;
      }
      goto L_08A6DBD4;
    }
L_08A6DBD4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A6DBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6DBE4u) goto L_08A6DBE4;
    return;
L_08A6DBE4:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DC00;
      }
      goto L_08A6DBF4;
    }
L_08A6DBF4:
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DC38;
      }
      goto L_08A6DC00;
    }
L_08A6DC00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6DC38;
      }
      goto L_08A6DC0C;
    }
L_08A6DC0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DC28;
      }
      goto L_08A6DC1C;
    }
L_08A6DC1C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DC38;
      }
      goto L_08A6DC28;
    }
L_08A6DC28:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A6DC38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6DC38u) goto L_08A6DC38;
    return;
L_08A6DC38:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DC80;
      }
      goto L_08A6DC48;
    }
L_08A6DC48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6DC80;
      }
      goto L_08A6DC54;
    }
L_08A6DC54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DC70;
      }
      goto L_08A6DC64;
    }
L_08A6DC64:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DC80;
      }
      goto L_08A6DC70;
    }
L_08A6DC70:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A6DC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6DC80u) goto L_08A6DC80;
    return;
L_08A6DC80:
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
L_08A6DC98:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DCD0;
      }
      goto L_08A6DCA8;
    }
L_08A6DCA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6DCD0;
      }
      goto L_08A6DCB0;
    }
L_08A6DCB0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DCD0;
      }
      goto L_08A6DCBC;
    }
L_08A6DCBC:
    ctx.set_gpr(4, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_08A6DCD0;
L_08A6DCD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DCD8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD38;
      }
      goto L_08A6DCE8;
    }
L_08A6DCE8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD38;
      }
      goto L_08A6DCF8;
    }
L_08A6DCF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6DD38;
      }
      goto L_08A6DD00;
    }
L_08A6DD00:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD38;
      }
      goto L_08A6DD0C;
    }
L_08A6DD0C:
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A6DD38;
L_08A6DD38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DD40:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 6u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD5C;
      }
      goto L_08A6DD50;
    }
L_08A6DD50:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DD64;
      }
      goto L_08A6DD5C;
    }
L_08A6DD5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    goto L_08A6DD64;
L_08A6DD64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DD6C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DD7C;
    }
L_08A6DD7C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DD8C;
    }
L_08A6DD8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DD94;
    }
L_08A6DD94:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DDCC;
      }
      goto L_08A6DDA0;
    }
L_08A6DDA0:
    ctx.set_gpr(4, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A6DDCC;
L_08A6DDCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DDD4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE10;
      }
      goto L_08A6DDE4;
    }
L_08A6DDE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), 0u);
    goto L_08A6DE10;
L_08A6DE10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DE18:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE78;
      }
      goto L_08A6DE28;
    }
L_08A6DE28:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE78;
      }
      goto L_08A6DE38;
    }
L_08A6DE38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6DE78;
      }
      goto L_08A6DE40;
    }
L_08A6DE40:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DE78;
      }
      goto L_08A6DE4C;
    }
L_08A6DE4C:
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A6DE78;
L_08A6DE78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DE80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DE90:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DEA0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A6DF14;
      }
      goto L_08A6DEB4;
    }
L_08A6DEB4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A6DF14;
      }
      goto L_08A6DEBC;
    }
L_08A6DEBC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DF0C;
      }
      goto L_08A6DECC;
    }
L_08A6DECC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[8] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6DF14;
      }
      goto L_08A6DF0C;
    }
L_08A6DF0C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
    goto L_08A6DF14;
L_08A6DF14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DF1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6DF34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6DF34u) goto L_08A6DF34;
    return;
L_08A6DF34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DF44:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DF50:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DF60:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26476)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DF70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6DF98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6DF98u) goto L_08A6DF98;
    return;
L_08A6DF98:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A6DFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 161u, 0x08A0226Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6DFACu) goto L_08A6DFAC;
    return;
L_08A6DFAC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08A6DFC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6DFE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6DFE0u) goto L_08A6DFE0;
    return;
L_08A6DFE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6DFF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6E008u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6E008u) goto L_08A6E008;
    return;
L_08A6E008:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E018:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26424)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E028:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26368)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E038:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26384)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E048:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26396)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E058:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26408)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E068:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26436)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E078:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26360)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E088:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E094:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26292)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E0A4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E0B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E0C4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E0D0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E0DC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26248)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E0EC:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E0F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26180)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E108:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E114:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26156)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E124:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E154;
      }
      goto L_08A6E14C;
    }
L_08A6E14C:
    ctx.set_gpr(31, 0x08A6E154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08A6E154u) goto L_08A6E154;
    return;
L_08A6E154:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E174;
      }
      goto L_08A6E16C;
    }
L_08A6E16C:
    ctx.set_gpr(31, 0x08A6E174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6E174u) goto L_08A6E174;
    return;
L_08A6E174:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A6E188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6E188u) goto L_08A6E188;
    return;
L_08A6E188:
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
L_08A6E1A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E1D8;
      }
      goto L_08A6E1D0;
    }
L_08A6E1D0:
    ctx.set_gpr(31, 0x08A6E1D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6E1D8u) goto L_08A6E1D8;
    return;
L_08A6E1D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6E1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6E1E8u) goto L_08A6E1E8;
    return;
L_08A6E1E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
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
L_08A6E214:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E220:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26092)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E230:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25884)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E240:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25860)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E250:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25856)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E260:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A6E280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 620u, 0x08A5EA00u>(ctx, &aot_mem) && ctx.pc == 0x08A6E280u) goto L_08A6E280;
    return;
L_08A6E280:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E2AC;
      }
      goto L_08A6E288;
    }
L_08A6E288:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6E2A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6E2A0u) goto L_08A6E2A0;
    return;
L_08A6E2A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E2AC;
      }
      goto L_08A6E2A8;
    }
L_08A6E2A8:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A6E2AC;
L_08A6E2AC:
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
L_08A6E2C8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25824)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E2D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25812)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E2E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E2F0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25788)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E300:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25768)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E310:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25752)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E320:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E32C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25500)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E33C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25444)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E34C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E3A0;
      }
      goto L_08A6E37C;
    }
L_08A6E37C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E39C;
      }
      goto L_08A6E394;
    }
L_08A6E394:
    ctx.set_gpr(31, 0x08A6E39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6E39Cu) goto L_08A6E39C;
    return;
L_08A6E39C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A6E3A0;
L_08A6E3A0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E37C;
      }
      goto L_08A6E3AC;
    }
L_08A6E3AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E3D0;
      }
      goto L_08A6E3BC;
    }
L_08A6E3BC:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A6E3D0;
L_08A6E3D0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E3BC;
      }
      goto L_08A6E3DC;
    }
L_08A6E3DC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E418;
      }
      goto L_08A6E3F4;
    }
L_08A6E3F4:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E414;
      }
      goto L_08A6E40C;
    }
L_08A6E40C:
    ctx.set_gpr(31, 0x08A6E414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6E414u) goto L_08A6E414;
    return;
L_08A6E414:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A6E418;
L_08A6E418:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E3F4;
      }
      goto L_08A6E424;
    }
L_08A6E424:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E448;
      }
      goto L_08A6E434;
    }
L_08A6E434:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A6E448;
L_08A6E448:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E434;
      }
      goto L_08A6E454;
    }
L_08A6E454:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E490;
      }
      goto L_08A6E46C;
    }
L_08A6E46C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E48C;
      }
      goto L_08A6E484;
    }
L_08A6E484:
    ctx.set_gpr(31, 0x08A6E48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6E48Cu) goto L_08A6E48C;
    return;
L_08A6E48C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A6E490;
L_08A6E490:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E46C;
      }
      goto L_08A6E49C;
    }
L_08A6E49C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E4C0;
      }
      goto L_08A6E4AC;
    }
L_08A6E4AC:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A6E4C0;
L_08A6E4C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E4AC;
      }
      goto L_08A6E4CC;
    }
L_08A6E4CC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6E4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E4E0u) goto L_08A6E4E0;
    return;
L_08A6E4E0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6E4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E4F0u) goto L_08A6E4F0;
    return;
L_08A6E4F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6E4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 372u, 0x08A59BECu>(ctx, &aot_mem) && ctx.pc == 0x08A6E4FCu) goto L_08A6E4FC;
    return;
L_08A6E4FC:
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
L_08A6E51C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25148)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E52C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25112)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E53C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E548:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25044)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E558:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24916)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E568:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24720)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E5A8;
      }
      goto L_08A6E5A0;
    }
L_08A6E5A0:
    ctx.set_gpr(31, 0x08A6E5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08A6E5A8u) goto L_08A6E5A8;
    return;
L_08A6E5A8:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E5C8;
      }
      goto L_08A6E5C0;
    }
L_08A6E5C0:
    ctx.set_gpr(31, 0x08A6E5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6E5C8u) goto L_08A6E5C8;
    return;
L_08A6E5C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A6E5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6E5DCu) goto L_08A6E5DC;
    return;
L_08A6E5DC:
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
L_08A6E5F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E600:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24680)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E610:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6E62Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6E62Cu) goto L_08A6E62C;
    return;
L_08A6E62C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E63C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24612)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E64C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E658:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E670;
      }
      goto L_08A6E664;
    }
L_08A6E664:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6E674;
      }
      goto L_08A6E670;
    }
L_08A6E670:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_08A6E674;
L_08A6E674:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E67C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24580)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E68C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24572)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E69C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24420)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E6AC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24552)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E6BC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24536)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E6CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24524)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E6DC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24484)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E6EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A6E6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 473u, 0x08A51AECu>(ctx, &aot_mem) && ctx.pc == 0x08A6E6FCu) goto L_08A6E6FC;
    return;
L_08A6E6FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E70C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24388)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E71C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24372)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E72C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24360)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E73C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24304)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E74C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24296)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E75C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E76C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E77C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24236)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E78C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08A6E7A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E7A0u) goto L_08A6E7A0;
    return;
L_08A6E7A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E7B0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24088)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E7C0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24076)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E7D0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24056)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E7E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24044)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E7F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E7F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23964)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E808:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23920)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E818:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E824:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] & 254u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A6E848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E848u) goto L_08A6E848;
    return;
L_08A6E848:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E858:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E864:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E870:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E878:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E888:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E898:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E8A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6E8D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6E8D0u) goto L_08A6E8D0;
    return;
L_08A6E8D0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A6E8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 161u, 0x08A0226Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6E8E4u) goto L_08A6E8E4;
    return;
L_08A6E8E4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08A6E900:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23904)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E910:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23836)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E920:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23724)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E930:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23672)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E940:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23512)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A6E964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E964u) goto L_08A6E964;
    return;
L_08A6E964:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E974:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A6E988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E988u) goto L_08A6E988;
    return;
L_08A6E988:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E998:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E9A4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E9B0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23376)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E9C0:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E9CC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E9D8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6E9E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A6E9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6E9F8u) goto L_08A6E9F8;
    return;
L_08A6E9F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EA08:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23180)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EA18:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EA28:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23024)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EA38:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22972)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EA48:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22824)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EA58:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22812)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EA68:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22736)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EA78:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(81)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EA84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EA90:
    ctx.set_gpr(3, ctx.gpr[5] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EAA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EAB0:
    ctx.set_gpr(3, ctx.gpr[5] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EAC4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22500)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EAD4:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EAE0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22444)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EAF0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22504)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EB00:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22528)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EB10:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22532)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EB20:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22572)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EB30:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22588)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EB40:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22592)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EB50:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22604)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EB60:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22624)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EB70:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22628)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EB80:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22644)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EB90:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22648)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EBA0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22672)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EBB0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22676)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EBC0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22980)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EBD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EBE0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22740)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EBF0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22744)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EC00:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22748)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EC10:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22784)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EC20:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22788)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EC30:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22828)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EC40:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22840)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EC50:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22848)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EC60:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22852)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EC70:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22984)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EC80:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23008)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EC90:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23012)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ECA0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23028)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ECB0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23104)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ECC0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23140)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ECD0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23156)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ECE0:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ECEC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23196)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ECFC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23256)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ED0C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23420)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ED1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ED24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ED2C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23728)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ED3C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23764)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ED4C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23840)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ED5C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23852)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ED6C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24092)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ED7C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24240)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ED8C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24244)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ED9C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24264)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EDAC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24280)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EDBC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24308)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EDCC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24364)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EDDC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24384)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EDEC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24436)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EDFC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22568)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EE0C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24504)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EE1C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24508)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EE2C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24528)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EE3C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24564)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EE4C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24616)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EE5C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24624)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EE6C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24740)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EE7C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EE88:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24788)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EE98:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24792)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EEA8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24820)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EEB8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24872)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EEC8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24920)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EED8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24944)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EEE8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24320)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EEF8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24948)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EF08:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24964)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EF18:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24968)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EF28:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25024)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EF38:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25048)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EF48:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25052)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EF58:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25056)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EF68:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25060)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EF78:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25064)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EF88:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25068)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EF98:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25116)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EFA8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25448)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EFB8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25460)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EFC8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25504)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EFD8:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EFE4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25676)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6EFF4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25680)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F004:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25684)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F014:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25688)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F024:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25692)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F034:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25696)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F044:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25700)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F054:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25704)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F064:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25708)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F074:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25712)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F084:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25716)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F094:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25720)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F0A4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25792)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F0B4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25832)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F0C4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26580)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F0D4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25864)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F0E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25888)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F0F4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25904)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F104:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25908)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F114:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25928)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F124:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25932)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F134:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25944)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F144:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26096)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F154:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26100)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F164:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26128)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F174:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26172)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F184:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26264)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F194:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F1A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26268)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F1B0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26280)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F1C0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26300)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F1D0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26316)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F1E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26320)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F1F0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26324)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F200:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26328)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F210:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26332)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F220:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26336)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F230:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26340)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F240:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26344)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F250:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26548)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F260:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26584)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F270:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26128)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F280:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23024)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F290:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26360)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F2A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F2B0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25088)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F2C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F2CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F2D8:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F3AC;
      }
      goto L_08A6F324;
    }
L_08A6F324:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(3, ctx.gpr[17] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08A6F360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08A6F360u) goto L_08A6F360;
    return;
L_08A6F360:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F374;
      }
      goto L_08A6F368;
    }
L_08A6F368:
    ctx.set_gpr(19, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F3AC;
      }
      goto L_08A6F374;
    }
L_08A6F374:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08A6F38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 106u, 0x0883CC54u>(ctx, &aot_mem) && ctx.pc == 0x08A6F38Cu) goto L_08A6F38C;
    return;
L_08A6F38C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F3A0;
      }
      goto L_08A6F394;
    }
L_08A6F394:
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F3AC;
      }
      goto L_08A6F3A0;
    }
L_08A6F3A0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F404;
      }
      goto L_08A6F3AC;
    }
L_08A6F3AC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F324;
      }
      goto L_08A6F3B8;
    }
L_08A6F3B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F3D0;
      }
      goto L_08A6F3C4;
    }
L_08A6F3C4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F404;
      }
      goto L_08A6F3D0;
    }
L_08A6F3D0:
    ctx.set_gpr(3, ctx.gpr[19] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08A6F3F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08A6F3F4u) goto L_08A6F3F4;
    return;
L_08A6F3F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F400;
      }
      goto L_08A6F3FC;
    }
L_08A6F3FC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A6F400;
L_08A6F400:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_08A6F404;
L_08A6F404:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F438:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25460)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F448:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24944)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F458:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24964)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F468:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25024)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F478:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24820)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F488:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24524)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F498:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24504)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F4A8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24320)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F4B8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24280)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F4C8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23852)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F4D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F4E8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22840)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F4F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22528)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F508:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22500)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F518:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22812)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F528:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25944)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F538:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23008)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F548:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24624)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F558:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25812)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F568:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22736)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F578:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22748)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F588:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22784)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F598:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22972)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F5A8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22568)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F5B8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22588)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F5C8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22604)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F5D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22644)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F5E8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22672)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F5F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25884)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F608:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25904)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F618:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25928)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F628:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23764)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F638:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24180)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F648:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26340)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F658:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26360)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F668:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23140)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F678:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25068)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F688:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25088)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F698:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F6C0;
      }
      goto L_08A6F6B4;
    }
L_08A6F6B4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A6F6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6F6C0u) goto L_08A6F6C0;
    return;
L_08A6F6C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F6D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F6F8;
      }
      goto L_08A6F6EC;
    }
L_08A6F6EC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A6F6F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6F6F8u) goto L_08A6F6F8;
    return;
L_08A6F6F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6F708:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F770;
      }
      goto L_08A6F728;
    }
L_08A6F728:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F758;
      }
      goto L_08A6F734;
    }
L_08A6F734:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F758;
      }
      goto L_08A6F750;
    }
L_08A6F750:
    ctx.set_gpr(31, 0x08A6F758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6F758u) goto L_08A6F758;
    return;
L_08A6F758:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6F770;
      }
      goto L_08A6F764;
    }
L_08A6F764:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6F770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A6F770u) goto L_08A6F770;
    return;
L_08A6F770:
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
L_08A6F78C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F7F4;
      }
      goto L_08A6F7AC;
    }
L_08A6F7AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F7DC;
      }
      goto L_08A6F7B8;
    }
L_08A6F7B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F7DC;
      }
      goto L_08A6F7D4;
    }
L_08A6F7D4:
    ctx.set_gpr(31, 0x08A6F7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6F7DCu) goto L_08A6F7DC;
    return;
L_08A6F7DC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6F7F4;
      }
      goto L_08A6F7E8;
    }
L_08A6F7E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6F7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A6F7F4u) goto L_08A6F7F4;
    return;
L_08A6F7F4:
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
L_08A6F810:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F878;
      }
      goto L_08A6F830;
    }
L_08A6F830:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F860;
      }
      goto L_08A6F83C;
    }
L_08A6F83C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F860;
      }
      goto L_08A6F858;
    }
L_08A6F858:
    ctx.set_gpr(31, 0x08A6F860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6F860u) goto L_08A6F860;
    return;
L_08A6F860:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6F878;
      }
      goto L_08A6F86C;
    }
L_08A6F86C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6F878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A6F878u) goto L_08A6F878;
    return;
L_08A6F878:
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
L_08A6F894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F8FC;
      }
      goto L_08A6F8B4;
    }
L_08A6F8B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F8E4;
      }
      goto L_08A6F8C0;
    }
L_08A6F8C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F8E4;
      }
      goto L_08A6F8DC;
    }
L_08A6F8DC:
    ctx.set_gpr(31, 0x08A6F8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6F8E4u) goto L_08A6F8E4;
    return;
L_08A6F8E4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6F8FC;
      }
      goto L_08A6F8F0;
    }
L_08A6F8F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6F8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A6F8FCu) goto L_08A6F8FC;
    return;
L_08A6F8FC:
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
L_08A6F918:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F980;
      }
      goto L_08A6F938;
    }
L_08A6F938:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F968;
      }
      goto L_08A6F944;
    }
L_08A6F944:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F968;
      }
      goto L_08A6F960;
    }
L_08A6F960:
    ctx.set_gpr(31, 0x08A6F968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6F968u) goto L_08A6F968;
    return;
L_08A6F968:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6F980;
      }
      goto L_08A6F974;
    }
L_08A6F974:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6F980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A6F980u) goto L_08A6F980;
    return;
L_08A6F980:
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
L_08A6F99C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FA04;
      }
      goto L_08A6F9BC;
    }
L_08A6F9BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F9EC;
      }
      goto L_08A6F9C8;
    }
L_08A6F9C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6F9EC;
      }
      goto L_08A6F9E4;
    }
L_08A6F9E4:
    ctx.set_gpr(31, 0x08A6F9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6F9ECu) goto L_08A6F9EC;
    return;
L_08A6F9EC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6FA04;
      }
      goto L_08A6F9F8;
    }
L_08A6F9F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6FA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A6FA04u) goto L_08A6FA04;
    return;
L_08A6FA04:
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
L_08A6FA20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FA88;
      }
      goto L_08A6FA40;
    }
L_08A6FA40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FA70;
      }
      goto L_08A6FA4C;
    }
L_08A6FA4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FA70;
      }
      goto L_08A6FA68;
    }
L_08A6FA68:
    ctx.set_gpr(31, 0x08A6FA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6FA70u) goto L_08A6FA70;
    return;
L_08A6FA70:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6FA88;
      }
      goto L_08A6FA7C;
    }
L_08A6FA7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6FA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A6FA88u) goto L_08A6FA88;
    return;
L_08A6FA88:
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
L_08A6FAA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FB0C;
      }
      goto L_08A6FAC4;
    }
L_08A6FAC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FAF4;
      }
      goto L_08A6FAD0;
    }
L_08A6FAD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FAF4;
      }
      goto L_08A6FAEC;
    }
L_08A6FAEC:
    ctx.set_gpr(31, 0x08A6FAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6FAF4u) goto L_08A6FAF4;
    return;
L_08A6FAF4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6FB0C;
      }
      goto L_08A6FB00;
    }
L_08A6FB00:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6FB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A6FB0Cu) goto L_08A6FB0C;
    return;
L_08A6FB0C:
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
L_08A6FB28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FB90;
      }
      goto L_08A6FB48;
    }
L_08A6FB48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FB78;
      }
      goto L_08A6FB54;
    }
L_08A6FB54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FB78;
      }
      goto L_08A6FB70;
    }
L_08A6FB70:
    ctx.set_gpr(31, 0x08A6FB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6FB78u) goto L_08A6FB78;
    return;
L_08A6FB78:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6FB90;
      }
      goto L_08A6FB84;
    }
L_08A6FB84:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6FB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A6FB90u) goto L_08A6FB90;
    return;
L_08A6FB90:
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
L_08A6FBAC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32146)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FBC0;
      }
      goto L_08A6FBB8;
    }
L_08A6FBB8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32146), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08A6FBC0;
L_08A6FBC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6FBC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A6FBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 20u, 0x08A781A8u>(ctx, &aot_mem) && ctx.pc == 0x08A6FBD8u) goto L_08A6FBD8;
    return;
L_08A6FBD8:
    ctx.set_gpr(31, 0x08A6FBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 693u, 0x08A77F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FBE0u) goto L_08A6FBE0;
    return;
L_08A6FBE0:
    ctx.set_gpr(31, 0x08A6FBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 673u, 0x08A77DB0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FBE8u) goto L_08A6FBE8;
    return;
L_08A6FBE8:
    ctx.set_gpr(31, 0x08A6FBF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 659u, 0x08A77C64u>(ctx, &aot_mem) && ctx.pc == 0x08A6FBF0u) goto L_08A6FBF0;
    return;
L_08A6FBF0:
    ctx.set_gpr(31, 0x08A6FBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 641u, 0x08A77A98u>(ctx, &aot_mem) && ctx.pc == 0x08A6FBF8u) goto L_08A6FBF8;
    return;
L_08A6FBF8:
    ctx.set_gpr(31, 0x08A6FC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 627u, 0x08A77954u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC00u) goto L_08A6FC00;
    return;
L_08A6FC00:
    ctx.set_gpr(31, 0x08A6FC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 600u, 0x08A776D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC08u) goto L_08A6FC08;
    return;
L_08A6FC08:
    ctx.set_gpr(31, 0x08A6FC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 559u, 0x08A77394u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC10u) goto L_08A6FC10;
    return;
L_08A6FC10:
    ctx.set_gpr(31, 0x08A6FC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 535u, 0x08A77150u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC18u) goto L_08A6FC18;
    return;
L_08A6FC18:
    ctx.set_gpr(31, 0x08A6FC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 506u, 0x08A76EB0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC20u) goto L_08A6FC20;
    return;
L_08A6FC20:
    ctx.set_gpr(31, 0x08A6FC28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 484u, 0x08A76C84u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC28u) goto L_08A6FC28;
    return;
L_08A6FC28:
    ctx.set_gpr(31, 0x08A6FC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 455u, 0x08A769DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6FC30u) goto L_08A6FC30;
    return;
L_08A6FC30:
    ctx.set_gpr(31, 0x08A6FC38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 429u, 0x08A767B4u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC38u) goto L_08A6FC38;
    return;
L_08A6FC38:
    ctx.set_gpr(31, 0x08A6FC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 412u, 0x08A76654u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC40u) goto L_08A6FC40;
    return;
L_08A6FC40:
    ctx.set_gpr(31, 0x08A6FC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 386u, 0x08A763F4u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC48u) goto L_08A6FC48;
    return;
L_08A6FC48:
    ctx.set_gpr(31, 0x08A6FC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 351u, 0x08A760DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6FC50u) goto L_08A6FC50;
    return;
L_08A6FC50:
    ctx.set_gpr(31, 0x08A6FC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 329u, 0x08A75EB0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC58u) goto L_08A6FC58;
    return;
L_08A6FC58:
    ctx.set_gpr(31, 0x08A6FC60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 307u, 0x08A75C84u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC60u) goto L_08A6FC60;
    return;
L_08A6FC60:
    ctx.set_gpr(31, 0x08A6FC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 278u, 0x08A759E4u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC68u) goto L_08A6FC68;
    return;
L_08A6FC68:
    ctx.set_gpr(31, 0x08A6FC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 255u, 0x08A757A8u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC70u) goto L_08A6FC70;
    return;
L_08A6FC70:
    ctx.set_gpr(31, 0x08A6FC78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 232u, 0x08A7556Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FC78u) goto L_08A6FC78;
    return;
L_08A6FC78:
    ctx.set_gpr(31, 0x08A6FC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 205u, 0x08A752FCu>(ctx, &aot_mem) && ctx.pc == 0x08A6FC80u) goto L_08A6FC80;
    return;
L_08A6FC80:
    ctx.set_gpr(31, 0x08A6FC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 179u, 0x08A750E4u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC88u) goto L_08A6FC88;
    return;
L_08A6FC88:
    ctx.set_gpr(31, 0x08A6FC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 164u, 0x08A74F74u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC90u) goto L_08A6FC90;
    return;
L_08A6FC90:
    ctx.set_gpr(31, 0x08A6FC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 148u, 0x08A74DF8u>(ctx, &aot_mem) && ctx.pc == 0x08A6FC98u) goto L_08A6FC98;
    return;
L_08A6FC98:
    ctx.set_gpr(31, 0x08A6FCA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 123u, 0x08A74B84u>(ctx, &aot_mem) && ctx.pc == 0x08A6FCA0u) goto L_08A6FCA0;
    return;
L_08A6FCA0:
    ctx.set_gpr(31, 0x08A6FCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 108u, 0x08A749FCu>(ctx, &aot_mem) && ctx.pc == 0x08A6FCA8u) goto L_08A6FCA8;
    return;
L_08A6FCA8:
    ctx.set_gpr(31, 0x08A6FCB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 87u, 0x08A7482Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FCB0u) goto L_08A6FCB0;
    return;
L_08A6FCB0:
    ctx.set_gpr(31, 0x08A6FCB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 73u, 0x08A746E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FCB8u) goto L_08A6FCB8;
    return;
L_08A6FCB8:
    ctx.set_gpr(31, 0x08A6FCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 55u, 0x08A74514u>(ctx, &aot_mem) && ctx.pc == 0x08A6FCC0u) goto L_08A6FCC0;
    return;
L_08A6FCC0:
    ctx.set_gpr(31, 0x08A6FCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 36u, 0x08A74338u>(ctx, &aot_mem) && ctx.pc == 0x08A6FCC8u) goto L_08A6FCC8;
    return;
L_08A6FCC8:
    ctx.set_gpr(31, 0x08A6FCD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 21u, 0x08A741C0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FCD0u) goto L_08A6FCD0;
    return;
L_08A6FCD0:
    ctx.set_gpr(31, 0x08A6FCD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 7u, 0x08A74074u>(ctx, &aot_mem) && ctx.pc == 0x08A6FCD8u) goto L_08A6FCD8;
    return;
L_08A6FCD8:
    ctx.set_gpr(31, 0x08A6FCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 674u, 0x08A73EA8u>(ctx, &aot_mem) && ctx.pc == 0x08A6FCE0u) goto L_08A6FCE0;
    return;
L_08A6FCE0:
    ctx.set_gpr(31, 0x08A6FCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 660u, 0x08A73D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FCE8u) goto L_08A6FCE8;
    return;
L_08A6FCE8:
    ctx.set_gpr(31, 0x08A6FCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 646u, 0x08A73C10u>(ctx, &aot_mem) && ctx.pc == 0x08A6FCF0u) goto L_08A6FCF0;
    return;
L_08A6FCF0:
    ctx.set_gpr(31, 0x08A6FCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 626u, 0x08A73A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FCF8u) goto L_08A6FCF8;
    return;
L_08A6FCF8:
    ctx.set_gpr(31, 0x08A6FD00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 602u, 0x08A73848u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD00u) goto L_08A6FD00;
    return;
L_08A6FD00:
    ctx.set_gpr(31, 0x08A6FD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 573u, 0x08A735C0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD08u) goto L_08A6FD08;
    return;
L_08A6FD08:
    ctx.set_gpr(31, 0x08A6FD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 546u, 0x08A7335Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FD10u) goto L_08A6FD10;
    return;
L_08A6FD10:
    ctx.set_gpr(31, 0x08A6FD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 522u, 0x08A73130u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD18u) goto L_08A6FD18;
    return;
L_08A6FD18:
    ctx.set_gpr(31, 0x08A6FD20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 500u, 0x08A72F04u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD20u) goto L_08A6FD20;
    return;
L_08A6FD20:
    ctx.set_gpr(31, 0x08A6FD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 468u, 0x08A72C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FD28u) goto L_08A6FD28;
    return;
L_08A6FD28:
    ctx.set_gpr(31, 0x08A6FD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 447u, 0x08A72A30u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD30u) goto L_08A6FD30;
    return;
L_08A6FD30:
    ctx.set_gpr(31, 0x08A6FD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 421u, 0x08A72780u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD38u) goto L_08A6FD38;
    return;
L_08A6FD38:
    ctx.set_gpr(31, 0x08A6FD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 394u, 0x08A724F0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD40u) goto L_08A6FD40;
    return;
L_08A6FD40:
    ctx.set_gpr(31, 0x08A6FD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 378u, 0x08A72374u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD48u) goto L_08A6FD48;
    return;
L_08A6FD48:
    ctx.set_gpr(31, 0x08A6FD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 357u, 0x08A7215Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FD50u) goto L_08A6FD50;
    return;
L_08A6FD50:
    ctx.set_gpr(31, 0x08A6FD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 330u, 0x08A71ED0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD58u) goto L_08A6FD58;
    return;
L_08A6FD58:
    ctx.set_gpr(31, 0x08A6FD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 313u, 0x08A71D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FD60u) goto L_08A6FD60;
    return;
L_08A6FD60:
    ctx.set_gpr(31, 0x08A6FD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 295u, 0x08A71B78u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD68u) goto L_08A6FD68;
    return;
L_08A6FD68:
    ctx.set_gpr(31, 0x08A6FD70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 269u, 0x08A71900u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD70u) goto L_08A6FD70;
    return;
L_08A6FD70:
    ctx.set_gpr(31, 0x08A6FD78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 241u, 0x08A71674u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD78u) goto L_08A6FD78;
    return;
L_08A6FD78:
    ctx.set_gpr(31, 0x08A6FD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 212u, 0x08A713BCu>(ctx, &aot_mem) && ctx.pc == 0x08A6FD80u) goto L_08A6FD80;
    return;
L_08A6FD80:
    ctx.set_gpr(31, 0x08A6FD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 184u, 0x08A71140u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD88u) goto L_08A6FD88;
    return;
L_08A6FD88:
    ctx.set_gpr(31, 0x08A6FD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 162u, 0x08A70F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FD90u) goto L_08A6FD90;
    return;
L_08A6FD90:
    ctx.set_gpr(31, 0x08A6FD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 140u, 0x08A70CF8u>(ctx, &aot_mem) && ctx.pc == 0x08A6FD98u) goto L_08A6FD98;
    return;
L_08A6FD98:
    ctx.set_gpr(31, 0x08A6FDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 118u, 0x08A70AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6FDA0u) goto L_08A6FDA0;
    return;
L_08A6FDA0:
    ctx.set_gpr(31, 0x08A6FDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 95u, 0x08A708F0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FDA8u) goto L_08A6FDA8;
    return;
L_08A6FDA8:
    ctx.set_gpr(31, 0x08A6FDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 81u, 0x08A707A4u>(ctx, &aot_mem) && ctx.pc == 0x08A6FDB0u) goto L_08A6FDB0;
    return;
L_08A6FDB0:
    ctx.set_gpr(31, 0x08A6FDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 63u, 0x08A705D8u>(ctx, &aot_mem) && ctx.pc == 0x08A6FDB8u) goto L_08A6FDB8;
    return;
L_08A6FDB8:
    ctx.set_gpr(31, 0x08A6FDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 49u, 0x08A7048Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6FDC0u) goto L_08A6FDC0;
    return;
L_08A6FDC0:
    ctx.set_gpr(31, 0x08A6FDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 35u, 0x08A70340u>(ctx, &aot_mem) && ctx.pc == 0x08A6FDC8u) goto L_08A6FDC8;
    return;
L_08A6FDC8:
    ctx.set_gpr(31, 0x08A6FDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 17u, 0x08A70174u>(ctx, &aot_mem) && ctx.pc == 0x08A6FDD0u) goto L_08A6FDD0;
    return;
L_08A6FDD0:
    ctx.set_gpr(31, 0x08A6FDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 3u, 0x08A70028u>(ctx, &aot_mem) && ctx.pc == 0x08A6FDD8u) goto L_08A6FDD8;
    return;
L_08A6FDD8:
    ctx.set_gpr(31, 0x08A6FDE0u);
    // nop
    goto L_08A6FEDC;
L_08A6FDE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6FDF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20856)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FE34;
      }
      goto L_08A6FE08;
    }
L_08A6FE08:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23504));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23456));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23480));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08A6FE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08A6FE2Cu) goto L_08A6FE2C;
    return;
L_08A6FE2C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-20856), ctx.gpr[2]);
    goto L_08A6FE34;
L_08A6FE34:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20856)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6FE4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20852)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FE78;
      }
      goto L_08A6FE64;
    }
L_08A6FE64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FE80;
      }
      goto L_08A6FE78;
    }
L_08A6FE78:
    ctx.set_gpr(31, 0x08A6FE80u);
    // nop
    goto L_08A6FEDC;
L_08A6FE80:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20852)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6FE98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A6FEACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FEACu) goto L_08A6FEAC;
    return;
L_08A6FEAC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6424));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A6FEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FEC0u) goto L_08A6FEC0;
    return;
L_08A6FEC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6FEDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2215u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-252));
    ctx.set_gpr(31, 0x08A6FEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A6FEF4u) goto L_08A6FEF4;
    return;
L_08A6FEF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6FF04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A6FF14u);
    // nop
    goto L_08A6FBAC;
L_08A6FF14:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23524));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20852));
    ctx.set_gpr(6, 2215u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(11364));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-30708));
    ctx.set_gpr(8, 2215u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-136));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(23532));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2215u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-360));
    ctx.set_gpr(31, 0x08A6FF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A6FF68u) goto L_08A6FF68;
    return;
L_08A6FF68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6FF78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A6FF88u);
    // nop
    goto L_08A6FE4C;
L_08A6FF88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6FF98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20848)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FFC4;
      }
      goto L_08A6FFB0;
    }
L_08A6FFB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6FFCC;
      }
      goto L_08A6FFC4;
    }
L_08A6FFC4:
    ctx.set_gpr(31, 0x08A6FFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 3u, 0x08A70028u>(ctx, &aot_mem) && ctx.pc == 0x08A6FFCCu) goto L_08A6FFCC;
    return;
L_08A6FFCC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20848)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6FFE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A6FFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A6FFF8u) goto L_08A6FFF8;
    return;
L_08A6FFF8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6324));
    ctx.pc = 0x08A70000u; return;
}

void recomp_unit_0154(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0154_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_154(Runtime &runtime) {
    runtime.register_generated_unit(154u, 0x08A6C000u, 16384u, &recomp_unit_0154, &recomp_unit_0154_entry);
    runtime.register_function(0x08A6C000u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C008u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C018u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C020u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C02Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C038u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C04Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C068u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C084u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C094u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C09Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C0E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C100u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C110u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C118u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C124u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C130u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C144u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C160u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C17Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C18Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C194u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C1F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C200u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C20Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C220u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C248u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C258u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C27Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C290u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C2ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C304u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C320u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C32Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C338u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C344u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C354u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C36Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C378u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C384u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C394u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C3FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C410u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C41Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C42Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C438u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C440u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C44Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C454u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C46Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C480u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C490u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C4F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C504u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C510u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C518u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C52Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C544u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C55Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C574u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C58Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C598u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C5FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C608u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C614u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C628u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C634u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C63Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C65Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C668u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C674u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C67Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C690u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C6F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C704u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C70Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C738u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C74Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C764u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C77Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C784u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C7E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C808u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C814u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C824u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C82Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C83Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C844u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C854u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C864u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C86Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C87Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C898u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C8F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C908u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C914u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C920u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C930u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C940u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C954u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C968u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C978u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C988u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C998u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6C9F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CA9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CAF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CB90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CBFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC44u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC8Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CC9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCCCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CCECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CD90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CDF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CE90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CEA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CEACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CEC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CED0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CED8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CEECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CF90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CFA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CFB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CFC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CFD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6CFF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D000u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D010u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D028u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D044u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D054u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D06Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D07Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D08Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D098u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D0A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D0ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D0B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D0CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D0FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D108u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D118u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D120u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D134u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D140u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D150u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D15Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D170u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D180u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D18Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D1F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D200u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D210u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D220u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D22Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D238u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D248u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D254u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D260u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D270u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D280u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D290u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D29Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D2F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D300u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D310u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D320u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D334u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D348u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D35Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D370u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D384u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D398u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D3ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D400u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D418u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D428u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D438u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D450u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D46Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D47Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D494u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D4F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D50Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D518u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D528u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D534u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D548u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D558u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D564u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D570u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D580u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D58Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D5F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D608u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D61Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D630u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D644u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D654u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D664u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D674u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D684u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D694u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D6F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D70Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D71Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D730u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D744u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D754u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D764u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D774u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D784u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D798u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D7ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D7C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D7D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D7E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D7FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D814u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D824u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D834u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D844u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D854u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D864u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D874u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D880u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D888u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D894u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D89Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D8A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D8B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D8BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D8C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D8D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D8D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D8E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D8ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D900u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D924u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D934u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D948u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D954u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D974u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D998u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D9ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D9C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D9CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D9D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D9E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6D9F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA2Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DA98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DAF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB24u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB74u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DB9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DBF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DC98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCBCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DCF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD8Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DD94u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDCCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DDE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DE90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEB4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DEBCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DECCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF44u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DF98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6DFF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E008u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E018u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E028u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E038u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E048u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E058u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E068u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E078u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E088u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E094u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E0F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E108u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E114u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E124u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E14Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E154u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E16Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E174u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E188u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E1E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E214u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E220u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E230u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E240u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E250u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E260u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E280u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E288u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E2F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E300u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E310u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E320u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E32Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E33Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E34Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E37Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E394u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E39Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E3F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E40Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E414u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E418u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E424u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E434u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E448u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E454u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E46Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E484u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E48Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E490u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E49Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E4ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E4C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E4CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E4E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E4F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E4FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E51Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E52Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E53Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E548u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E558u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E568u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E578u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E5A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E5A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E5C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E5C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E5DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E5F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E600u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E610u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E62Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E63Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E64Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E658u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E664u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E670u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E674u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E67Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E68Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E69Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E6FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E70Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E71Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E72Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E73Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E74Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E75Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E76Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E77Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E78Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E7F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E808u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E818u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E824u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E848u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E858u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E864u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E870u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E878u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E888u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E898u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E8A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E8D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E8E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E900u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E910u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E920u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E930u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E940u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E950u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E964u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E974u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E988u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E998u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6E9F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EA90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAD4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EAF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EB90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EBF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EC90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ECFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED24u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED2Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED8Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6ED9Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDBCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDCCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDDCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EDFCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE1Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE2Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE3Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE5Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE6Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EE98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EEA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EEB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EEC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EED8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EEE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EEF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EF98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EFA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EFB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EFC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EFD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EFE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6EFF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F004u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F014u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F024u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F034u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F044u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F054u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F064u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F074u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F084u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F094u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F0A4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F0B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F0C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F0D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F0E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F0F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F104u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F114u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F124u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F134u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F144u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F154u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F164u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F174u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F184u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F194u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F1A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F1B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F1C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F1D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F1E0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F1F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F200u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F210u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F220u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F230u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F240u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F250u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F260u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F270u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F280u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F290u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2B0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2CCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F2D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F324u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F360u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F368u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F374u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F38Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F394u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3A0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3C4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F3FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F400u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F404u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F438u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F448u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F458u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F468u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F478u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F488u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F498u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F4A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F4B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F4C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F4D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F4E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F4F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F508u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F518u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F528u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F538u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F548u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F558u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F568u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F578u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F588u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F598u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5A8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5D8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F5F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F608u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F618u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F628u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F638u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F648u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F658u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F668u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F678u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F688u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F698u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F6B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F6C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F6D0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F6ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F6F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F708u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F728u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F734u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F750u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F758u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F764u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F770u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F78Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7ACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7B8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7D4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7E8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F7F4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F810u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F830u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F83Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F858u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F860u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F86Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F878u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F894u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F8B4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F8C0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F8DCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F8E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F8F0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F8FCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F918u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F938u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F944u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F960u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F968u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F974u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F980u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F99Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9BCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9C8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9E4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9ECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6F9F8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA7Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FA88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FAA4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FAC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FAD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FAECu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FAF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB0Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB54u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB84u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FB90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FBF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FC98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCE8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FCF8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD00u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD10u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD18u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD20u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD28u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD30u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD38u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD40u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD48u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD50u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD58u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD60u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD70u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD90u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FD98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDA0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDA8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDB8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDC8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDD0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDD8u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDE0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FDF0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE08u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE2Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE34u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE4Cu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE64u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE80u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FE98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FEACu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FEC0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FEDCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FEF4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF04u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF14u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF68u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF78u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF88u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FF98u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFB0u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFC4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFCCu, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFE4u, &recomp_unit_0154, "recomp_unit_0154");
    runtime.register_function(0x08A6FFF8u, &recomp_unit_0154, "recomp_unit_0154");
}
} // namespace psprecomp
