#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0094[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 6, 0, 0, 7, 0, 0, 8, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0,
    12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18,
    0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 26,
    0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 34,
    0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 42,
    0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 50,
    0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58,
    0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0,
    0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97,
    0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0,
    106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 114, 0, 0, 115, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 126, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 130, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 143, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168,
    0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 202, 203, 0, 0, 204, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 235, 0, 0, 0, 0, 236, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0, 247, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 255, 0, 256,
    257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 265,
    0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278,
    0, 0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 288,
    0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 298, 299, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0,
    0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 319, 0, 320, 0, 0,
    321, 0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 330,
    0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0,
    339, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 0,
    349, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 356, 0, 357, 0, 0, 0, 0, 0,
    358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0,
    362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0, 0,
    371, 0, 372, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 375, 376, 0, 0, 0, 377, 0, 0, 378, 0, 379, 0, 380, 0, 0, 381, 0, 0, 382,
    0, 0, 0, 383, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 390, 0, 391, 0, 0,
    0, 0, 0, 392, 0, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 397, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 401, 0,
    0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 406, 0,
    0, 407, 0, 0, 0, 0, 408, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 413, 0, 414,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 419, 0, 0, 0,
    0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 427, 428, 0, 0, 0,
    429, 0, 0, 430, 0, 431, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 438, 0, 0, 0, 439, 0, 0, 0,
    0, 0, 440, 0, 0, 0, 0, 0, 441, 442, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 448,
    0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 454, 455, 0, 0, 0, 456, 0, 0, 457, 0, 458, 0, 459,
    0, 0, 460, 0, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0,
    468, 469, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0,
    0, 479, 0, 0, 480, 0, 0, 0, 481, 0, 0, 482, 0, 483, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 486, 487, 0, 0, 0, 488, 0, 0,
    489, 0, 490, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499,
    0, 0, 0, 0, 0, 500, 501, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 510, 0, 511,
    0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 0, 518, 0, 519, 0, 0, 520, 0, 521,
    0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 524, 0, 525, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 0, 529, 0, 0, 530, 0, 531,
    0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 535, 536, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 540,
    0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 543, 0, 0, 544, 0, 545, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0,
    0, 550, 0, 551, 0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 0, 555, 0, 0, 556, 0, 557, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0,
    560, 0, 0, 0, 0, 0, 561, 562, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 569,
    0, 0, 570, 0, 571, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 576, 0, 577, 0, 578, 0, 0, 579, 0, 0,
    580, 0, 0, 0, 581, 0, 0, 582, 0, 583, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 588, 0, 589, 0,
    0, 0, 0, 0, 590, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 596, 0, 0, 597,
    0, 598, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 604, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0,
    0, 608, 0, 0, 609, 0, 610, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 615, 0, 616, 0, 0, 0, 0,
    0, 617, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 0, 625, 0, 626, 0, 0,
    0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 630, 0, 631, 0, 0, 632, 0, 0, 633, 0, 0, 0, 634, 0, 0, 635, 0, 636, 0, 637,
    0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 641, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 651, 0, 652, 0, 0, 0, 653, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0,
    0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 0, 665, 666, 0, 0,
    0, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0,
    673, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 679, 680, 0, 0, 0, 681, 0, 0, 0,
    0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 685, 686, 0, 0, 0, 0, 687, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0,
    0, 693, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 698, 0, 699, 0, 0, 700, 0, 0, 0, 0,
    701, 0, 702, 0, 0, 0, 0, 703, 0, 704, 0, 0, 705, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 708, 0, 709, 0, 0, 710, 0, 0,
    0, 0, 711, 0, 712, 0, 0, 0, 0, 713, 0, 714, 715, 0, 0, 0, 0, 716, 0, 717, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 0, 720,
    0, 721, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 724, 725, 0, 0, 726, 0, 727, 0, 0, 0, 728, 0, 729, 0, 0, 0, 730, 0, 0, 0,
    0, 731, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 737, 738, 0, 0, 0, 739, 0,
    0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 0, 0,
    0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 747, 748, 0, 749, 0, 0, 750, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0, 754, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0,
    0, 759, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0,
    763, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 0,
    769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 771, 0, 0, 0, 772, 0, 0, 773, 0,
    0, 774, 0, 0, 0, 0, 775, 0, 0, 776, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 779, 0, 780, 0, 0, 781, 0, 0, 0, 0, 0, 782,
    0, 0, 0, 0, 0, 783, 0, 784, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 787, 0, 0, 0, 0, 0, 788, 0,
    0, 0, 789, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 0, 792, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0, 0,
    798, 0, 0, 799, 0, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 804, 0, 0, 805, 0, 0, 806, 0, 807, 0, 0, 0, 0, 808,
    0, 809, 0, 0, 0, 0, 0, 0, 810, 811, 0, 812, 0, 0, 0, 0, 0, 0, 813, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0,
    0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 820, 821, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 824, 0, 0, 825, 0, 0, 0, 0, 0, 826,
    0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 835, 0, 836, 0, 0, 837, 838, 0, 839, 0, 0, 0,
    840, 0, 0, 841, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 846, 0, 0, 847, 0,
    0, 0, 0, 0, 0, 0, 848, 849, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852, 0, 853, 854, 0, 0, 0, 0, 0,
    855, 0, 856, 0, 0, 857, 0, 0, 858, 0, 0, 859, 0, 0, 0, 0, 860, 0, 0, 861, 0, 0, 862, 0, 0, 0, 0, 0, 0, 863, 0, 0,
    864, 0, 0, 0, 0, 0, 865, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 868, 0, 0, 0, 0, 0, 869, 0, 0, 870, 0,
    871, 0, 0, 0, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 873, 0, 0, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0,
    0, 876, 0, 0, 877, 0, 878, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 881, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 883, 0,
    0, 0, 0, 0, 884, 0, 0, 0, 0, 885, 0, 0, 886, 0, 0, 887, 0, 0, 888, 0, 0, 889, 0, 890, 0, 891, 0, 0, 0, 0, 892, 0,
    0, 893, 0, 0, 0, 0, 0, 0, 894, 0, 0, 895, 0, 0, 0, 0, 896, 0, 0, 897, 0, 0, 898, 899, 0, 0, 0, 0, 0, 0, 900, 0,
    0, 0, 0, 901, 0, 0, 0, 0, 0, 902, 0, 903, 904, 0, 0, 0, 905, 0, 0, 0, 0, 0, 0, 906, 0, 0, 0, 907, 0, 0, 908, 0,
    0, 909, 0, 0, 0, 0, 910, 0, 0, 911, 0, 0, 912, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0, 0, 0, 914, 0, 0, 915, 0, 0,
    916, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0, 0, 921, 0, 922,
    923, 0, 0, 924, 0, 0, 0, 925, 0, 926, 0, 927, 0, 0, 928, 0, 0, 0, 929, 0, 0, 930, 0, 931, 0, 0, 932, 0, 933, 0, 0, 0,
    0, 934, 0, 0, 0, 935, 0, 0, 0, 0, 0, 936, 937, 0, 938, 0, 0, 939, 0, 0, 0, 940, 0, 0, 0, 0, 0, 941, 942, 0, 943, 0,
    0, 0, 0, 0, 944, 0, 0, 945, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 947, 0, 948, 0, 0, 0, 0, 0, 949, 0, 0, 950, 0, 0,
    951, 0, 952, 0, 0, 0, 0, 0, 0, 0, 0, 953, 0, 954, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 955, 0, 0, 0, 0, 0, 0, 956,
};
void recomp_unit_0094_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0897C000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0094[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0897C000;
    case 2u: goto L_0897C00C;
    case 3u: goto L_0897C020;
    case 4u: goto L_0897C02C;
    case 5u: goto L_0897C034;
    case 6u: goto L_0897C038;
    case 7u: goto L_0897C044;
    case 8u: goto L_0897C050;
    case 9u: goto L_0897C054;
    case 10u: goto L_0897C060;
    case 11u: goto L_0897C06C;
    case 12u: goto L_0897C080;
    case 13u: goto L_0897C08C;
    case 14u: goto L_0897C094;
    case 15u: goto L_0897C0C8;
    case 16u: goto L_0897C0E4;
    case 17u: goto L_0897C0F4;
    case 18u: goto L_0897C0FC;
    case 19u: goto L_0897C114;
    case 20u: goto L_0897C11C;
    case 21u: goto L_0897C134;
    case 22u: goto L_0897C13C;
    case 23u: goto L_0897C154;
    case 24u: goto L_0897C15C;
    case 25u: goto L_0897C174;
    case 26u: goto L_0897C17C;
    case 27u: goto L_0897C194;
    case 28u: goto L_0897C19C;
    case 29u: goto L_0897C1B4;
    case 30u: goto L_0897C1BC;
    case 31u: goto L_0897C1D4;
    case 32u: goto L_0897C1DC;
    case 33u: goto L_0897C1F4;
    case 34u: goto L_0897C1FC;
    case 35u: goto L_0897C214;
    case 36u: goto L_0897C21C;
    case 37u: goto L_0897C234;
    case 38u: goto L_0897C23C;
    case 39u: goto L_0897C254;
    case 40u: goto L_0897C25C;
    case 41u: goto L_0897C274;
    case 42u: goto L_0897C27C;
    case 43u: goto L_0897C294;
    case 44u: goto L_0897C29C;
    case 45u: goto L_0897C2B4;
    case 46u: goto L_0897C2BC;
    case 47u: goto L_0897C2D4;
    case 48u: goto L_0897C2DC;
    case 49u: goto L_0897C2F4;
    case 50u: goto L_0897C2FC;
    case 51u: goto L_0897C314;
    case 52u: goto L_0897C31C;
    case 53u: goto L_0897C334;
    case 54u: goto L_0897C33C;
    case 55u: goto L_0897C354;
    case 56u: goto L_0897C35C;
    case 57u: goto L_0897C374;
    case 58u: goto L_0897C37C;
    case 59u: goto L_0897C394;
    case 60u: goto L_0897C39C;
    case 61u: goto L_0897C3B4;
    case 62u: goto L_0897C3BC;
    case 63u: goto L_0897C3D4;
    case 64u: goto L_0897C3DC;
    case 65u: goto L_0897C3EC;
    case 66u: goto L_0897C40C;
    case 67u: goto L_0897C424;
    case 68u: goto L_0897C43C;
    case 69u: goto L_0897C448;
    case 70u: goto L_0897C450;
    case 71u: goto L_0897C468;
    case 72u: goto L_0897C488;
    case 73u: goto L_0897C4A0;
    case 74u: goto L_0897C4C0;
    case 75u: goto L_0897C4D8;
    case 76u: goto L_0897C4F0;
    case 77u: goto L_0897C4FC;
    case 78u: goto L_0897C514;
    case 79u: goto L_0897C528;
    case 80u: goto L_0897C540;
    case 81u: goto L_0897C54C;
    case 82u: goto L_0897C564;
    case 83u: goto L_0897C578;
    case 84u: goto L_0897C594;
    case 85u: goto L_0897C5D4;
    case 86u: goto L_0897C5DC;
    case 87u: goto L_0897C5EC;
    case 88u: goto L_0897C5F4;
    case 89u: goto L_0897C60C;
    case 90u: goto L_0897C614;
    case 91u: goto L_0897C620;
    case 92u: goto L_0897C62C;
    case 93u: goto L_0897C644;
    case 94u: goto L_0897C654;
    case 95u: goto L_0897C65C;
    case 96u: goto L_0897C674;
    case 97u: goto L_0897C67C;
    case 98u: goto L_0897C694;
    case 99u: goto L_0897C69C;
    case 100u: goto L_0897C6B4;
    case 101u: goto L_0897C6BC;
    case 102u: goto L_0897C6D4;
    case 103u: goto L_0897C6E4;
    case 104u: goto L_0897C6EC;
    case 105u: goto L_0897C6F4;
    case 106u: goto L_0897C700;
    case 107u: goto L_0897C70C;
    case 108u: goto L_0897C724;
    case 109u: goto L_0897C74C;
    case 110u: goto L_0897C758;
    case 111u: goto L_0897C7AC;
    case 112u: goto L_0897C7C8;
    case 113u: goto L_0897C7D8;
    case 114u: goto L_0897C7DC;
    case 115u: goto L_0897C7E8;
    case 116u: goto L_0897C800;
    case 117u: goto L_0897C814;
    case 118u: goto L_0897C820;
    case 119u: goto L_0897C828;
    case 120u: goto L_0897C860;
    case 121u: goto L_0897C868;
    case 122u: goto L_0897C874;
    case 123u: goto L_0897C8AC;
    case 124u: goto L_0897C8B4;
    case 125u: goto L_0897C8C4;
    case 126u: goto L_0897C8C8;
    case 127u: goto L_0897C8D4;
    case 128u: goto L_0897C8E0;
    case 129u: goto L_0897C8E8;
    case 130u: goto L_0897C8F4;
    case 131u: goto L_0897C8FC;
    case 132u: goto L_0897C924;
    case 133u: goto L_0897C92C;
    case 134u: goto L_0897C950;
    case 135u: goto L_0897C960;
    case 136u: goto L_0897C96C;
    case 137u: goto L_0897C974;
    case 138u: goto L_0897C980;
    case 139u: goto L_0897C9AC;
    case 140u: goto L_0897C9C0;
    case 141u: goto L_0897C9DC;
    case 142u: goto L_0897C9F4;
    case 143u: goto L_0897CA04;
    case 144u: goto L_0897CA10;
    case 145u: goto L_0897CA18;
    case 146u: goto L_0897CA24;
    case 147u: goto L_0897CA50;
    case 148u: goto L_0897CA64;
    case 149u: goto L_0897CA80;
    case 150u: goto L_0897CA98;
    case 151u: goto L_0897CAA8;
    case 152u: goto L_0897CAB4;
    case 153u: goto L_0897CABC;
    case 154u: goto L_0897CAC8;
    case 155u: goto L_0897CAF4;
    case 156u: goto L_0897CB08;
    case 157u: goto L_0897CB24;
    case 158u: goto L_0897CB3C;
    case 159u: goto L_0897CB4C;
    case 160u: goto L_0897CB58;
    case 161u: goto L_0897CB60;
    case 162u: goto L_0897CB6C;
    case 163u: goto L_0897CB98;
    case 164u: goto L_0897CBAC;
    case 165u: goto L_0897CBC8;
    case 166u: goto L_0897CBE0;
    case 167u: goto L_0897CBF0;
    case 168u: goto L_0897CBFC;
    case 169u: goto L_0897CC04;
    case 170u: goto L_0897CC10;
    case 171u: goto L_0897CC3C;
    case 172u: goto L_0897CC50;
    case 173u: goto L_0897CC6C;
    case 174u: goto L_0897CC84;
    case 175u: goto L_0897CC98;
    case 176u: goto L_0897CCD0;
    case 177u: goto L_0897CCDC;
    case 178u: goto L_0897CCF8;
    case 179u: goto L_0897CD04;
    case 180u: goto L_0897CD14;
    case 181u: goto L_0897CD38;
    case 182u: goto L_0897CD48;
    case 183u: goto L_0897CD50;
    case 184u: goto L_0897CD5C;
    case 185u: goto L_0897CD88;
    case 186u: goto L_0897CD94;
    case 187u: goto L_0897CDA0;
    case 188u: goto L_0897CDA8;
    case 189u: goto L_0897CDB0;
    case 190u: goto L_0897CDC4;
    case 191u: goto L_0897CDD8;
    case 192u: goto L_0897CDE0;
    case 193u: goto L_0897CDF4;
    case 194u: goto L_0897CE08;
    case 195u: goto L_0897CE10;
    case 196u: goto L_0897CE24;
    case 197u: goto L_0897CE38;
    case 198u: goto L_0897CE40;
    case 199u: goto L_0897CE54;
    case 200u: goto L_0897CE68;
    case 201u: goto L_0897CE84;
    case 202u: goto L_0897CE9C;
    case 203u: goto L_0897CEA0;
    case 204u: goto L_0897CEAC;
    case 205u: goto L_0897CEB0;
    case 206u: goto L_0897CEBC;
    case 207u: goto L_0897CECC;
    case 208u: goto L_0897CED8;
    case 209u: goto L_0897CEE4;
    case 210u: goto L_0897CEEC;
    case 211u: goto L_0897CEF8;
    case 212u: goto L_0897CF24;
    case 213u: goto L_0897CF38;
    case 214u: goto L_0897CF54;
    case 215u: goto L_0897CF6C;
    case 216u: goto L_0897CF94;
    case 217u: goto L_0897CFA8;
    case 218u: goto L_0897CFB8;
    case 219u: goto L_0897CFC4;
    case 220u: goto L_0897D000;
    case 221u: goto L_0897D020;
    case 222u: goto L_0897D040;
    case 223u: goto L_0897D058;
    case 224u: goto L_0897D068;
    case 225u: goto L_0897D080;
    case 226u: goto L_0897D090;
    case 227u: goto L_0897D09C;
    case 228u: goto L_0897D0C4;
    case 229u: goto L_0897D114;
    case 230u: goto L_0897D124;
    case 231u: goto L_0897D13C;
    case 232u: goto L_0897D148;
    case 233u: goto L_0897D1A0;
    case 234u: goto L_0897D1DC;
    case 235u: goto L_0897D20C;
    case 236u: goto L_0897D220;
    case 237u: goto L_0897D224;
    case 238u: goto L_0897D234;
    case 239u: goto L_0897D254;
    case 240u: goto L_0897D294;
    case 241u: goto L_0897D2A4;
    case 242u: goto L_0897D2B0;
    case 243u: goto L_0897D2C0;
    case 244u: goto L_0897D2CC;
    case 245u: goto L_0897D2D8;
    case 246u: goto L_0897D2E0;
    case 247u: goto L_0897D2EC;
    case 248u: goto L_0897D2F0;
    case 249u: goto L_0897D318;
    case 250u: goto L_0897D330;
    case 251u: goto L_0897D338;
    case 252u: goto L_0897D348;
    case 253u: goto L_0897D360;
    case 254u: goto L_0897D368;
    case 255u: goto L_0897D374;
    case 256u: goto L_0897D37C;
    case 257u: goto L_0897D380;
    case 258u: goto L_0897D394;
    case 259u: goto L_0897D3B8;
    case 260u: goto L_0897D3C4;
    case 261u: goto L_0897D3CC;
    case 262u: goto L_0897D3D4;
    case 263u: goto L_0897D3E4;
    case 264u: goto L_0897D3F0;
    case 265u: goto L_0897D3FC;
    case 266u: goto L_0897D404;
    case 267u: goto L_0897D420;
    case 268u: goto L_0897D434;
    case 269u: goto L_0897D450;
    case 270u: goto L_0897D458;
    case 271u: goto L_0897D474;
    case 272u: goto L_0897D484;
    case 273u: goto L_0897D4B0;
    case 274u: goto L_0897D4B8;
    case 275u: goto L_0897D4C4;
    case 276u: goto L_0897D4D4;
    case 277u: goto L_0897D4E4;
    case 278u: goto L_0897D4FC;
    case 279u: goto L_0897D508;
    case 280u: goto L_0897D518;
    case 281u: goto L_0897D524;
    case 282u: goto L_0897D52C;
    case 283u: goto L_0897D538;
    case 284u: goto L_0897D540;
    case 285u: goto L_0897D558;
    case 286u: goto L_0897D568;
    case 287u: goto L_0897D574;
    case 288u: goto L_0897D57C;
    case 289u: goto L_0897D584;
    case 290u: goto L_0897D590;
    case 291u: goto L_0897D59C;
    case 292u: goto L_0897D5AC;
    case 293u: goto L_0897D5B8;
    case 294u: goto L_0897D5C0;
    case 295u: goto L_0897D5C8;
    case 296u: goto L_0897D5D8;
    case 297u: goto L_0897D5F0;
    case 298u: goto L_0897D608;
    case 299u: goto L_0897D60C;
    case 300u: goto L_0897D614;
    case 301u: goto L_0897D62C;
    case 302u: goto L_0897D638;
    case 303u: goto L_0897D654;
    case 304u: goto L_0897D688;
    case 305u: goto L_0897D690;
    case 306u: goto L_0897D6A8;
    case 307u: goto L_0897D6B0;
    case 308u: goto L_0897D6CC;
    case 309u: goto L_0897D6EC;
    case 310u: goto L_0897D6F8;
    case 311u: goto L_0897D708;
    case 312u: goto L_0897D714;
    case 313u: goto L_0897D71C;
    case 314u: goto L_0897D728;
    case 315u: goto L_0897D730;
    case 316u: goto L_0897D748;
    case 317u: goto L_0897D758;
    case 318u: goto L_0897D764;
    case 319u: goto L_0897D76C;
    case 320u: goto L_0897D774;
    case 321u: goto L_0897D780;
    case 322u: goto L_0897D78C;
    case 323u: goto L_0897D79C;
    case 324u: goto L_0897D7A8;
    case 325u: goto L_0897D7B0;
    case 326u: goto L_0897D7B8;
    case 327u: goto L_0897D7C8;
    case 328u: goto L_0897D7E0;
    case 329u: goto L_0897D7F8;
    case 330u: goto L_0897D7FC;
    case 331u: goto L_0897D804;
    case 332u: goto L_0897D81C;
    case 333u: goto L_0897D828;
    case 334u: goto L_0897D830;
    case 335u: goto L_0897D850;
    case 336u: goto L_0897D85C;
    case 337u: goto L_0897D86C;
    case 338u: goto L_0897D878;
    case 339u: goto L_0897D880;
    case 340u: goto L_0897D88C;
    case 341u: goto L_0897D894;
    case 342u: goto L_0897D8AC;
    case 343u: goto L_0897D8BC;
    case 344u: goto L_0897D8C8;
    case 345u: goto L_0897D8D0;
    case 346u: goto L_0897D8D8;
    case 347u: goto L_0897D8E4;
    case 348u: goto L_0897D8F0;
    case 349u: goto L_0897D900;
    case 350u: goto L_0897D90C;
    case 351u: goto L_0897D914;
    case 352u: goto L_0897D91C;
    case 353u: goto L_0897D92C;
    case 354u: goto L_0897D944;
    case 355u: goto L_0897D95C;
    case 356u: goto L_0897D960;
    case 357u: goto L_0897D968;
    case 358u: goto L_0897D980;
    case 359u: goto L_0897D98C;
    case 360u: goto L_0897D9AC;
    case 361u: goto L_0897D9F8;
    case 362u: goto L_0897DA00;
    case 363u: goto L_0897DA10;
    case 364u: goto L_0897DA20;
    case 365u: goto L_0897DA28;
    case 366u: goto L_0897DA38;
    case 367u: goto L_0897DA40;
    case 368u: goto L_0897DA58;
    case 369u: goto L_0897DA64;
    case 370u: goto L_0897DA74;
    case 371u: goto L_0897DA80;
    case 372u: goto L_0897DA88;
    case 373u: goto L_0897DA94;
    case 374u: goto L_0897DA9C;
    case 375u: goto L_0897DAB4;
    case 376u: goto L_0897DAB8;
    case 377u: goto L_0897DAC8;
    case 378u: goto L_0897DAD4;
    case 379u: goto L_0897DADC;
    case 380u: goto L_0897DAE4;
    case 381u: goto L_0897DAF0;
    case 382u: goto L_0897DAFC;
    case 383u: goto L_0897DB0C;
    case 384u: goto L_0897DB18;
    case 385u: goto L_0897DB20;
    case 386u: goto L_0897DB28;
    case 387u: goto L_0897DB38;
    case 388u: goto L_0897DB50;
    case 389u: goto L_0897DB68;
    case 390u: goto L_0897DB6C;
    case 391u: goto L_0897DB74;
    case 392u: goto L_0897DB8C;
    case 393u: goto L_0897DB98;
    case 394u: goto L_0897DBA0;
    case 395u: goto L_0897DBB0;
    case 396u: goto L_0897DBC0;
    case 397u: goto L_0897DBC4;
    case 398u: goto L_0897DBCC;
    case 399u: goto L_0897DBD8;
    case 400u: goto L_0897DBF0;
    case 401u: goto L_0897DBF8;
    case 402u: goto L_0897DC1C;
    case 403u: goto L_0897DC44;
    case 404u: goto L_0897DC60;
    case 405u: goto L_0897DC70;
    case 406u: goto L_0897DC78;
    case 407u: goto L_0897DC84;
    case 408u: goto L_0897DC98;
    case 409u: goto L_0897DCA0;
    case 410u: goto L_0897DCAC;
    case 411u: goto L_0897DCD4;
    case 412u: goto L_0897DCEC;
    case 413u: goto L_0897DCF4;
    case 414u: goto L_0897DCFC;
    case 415u: goto L_0897DD3C;
    case 416u: goto L_0897DD44;
    case 417u: goto L_0897DD58;
    case 418u: goto L_0897DD68;
    case 419u: goto L_0897DD70;
    case 420u: goto L_0897DD90;
    case 421u: goto L_0897DD9C;
    case 422u: goto L_0897DDAC;
    case 423u: goto L_0897DDB8;
    case 424u: goto L_0897DDC0;
    case 425u: goto L_0897DDCC;
    case 426u: goto L_0897DDD4;
    case 427u: goto L_0897DDEC;
    case 428u: goto L_0897DDF0;
    case 429u: goto L_0897DE00;
    case 430u: goto L_0897DE0C;
    case 431u: goto L_0897DE14;
    case 432u: goto L_0897DE1C;
    case 433u: goto L_0897DE28;
    case 434u: goto L_0897DE34;
    case 435u: goto L_0897DE44;
    case 436u: goto L_0897DE50;
    case 437u: goto L_0897DE58;
    case 438u: goto L_0897DE60;
    case 439u: goto L_0897DE70;
    case 440u: goto L_0897DE88;
    case 441u: goto L_0897DEA0;
    case 442u: goto L_0897DEA4;
    case 443u: goto L_0897DEAC;
    case 444u: goto L_0897DEC4;
    case 445u: goto L_0897DED0;
    case 446u: goto L_0897DED8;
    case 447u: goto L_0897DEF0;
    case 448u: goto L_0897DEFC;
    case 449u: goto L_0897DF0C;
    case 450u: goto L_0897DF18;
    case 451u: goto L_0897DF20;
    case 452u: goto L_0897DF2C;
    case 453u: goto L_0897DF34;
    case 454u: goto L_0897DF4C;
    case 455u: goto L_0897DF50;
    case 456u: goto L_0897DF60;
    case 457u: goto L_0897DF6C;
    case 458u: goto L_0897DF74;
    case 459u: goto L_0897DF7C;
    case 460u: goto L_0897DF88;
    case 461u: goto L_0897DF94;
    case 462u: goto L_0897DFA4;
    case 463u: goto L_0897DFB0;
    case 464u: goto L_0897DFB8;
    case 465u: goto L_0897DFC0;
    case 466u: goto L_0897DFD0;
    case 467u: goto L_0897DFE8;
    case 468u: goto L_0897E000;
    case 469u: goto L_0897E004;
    case 470u: goto L_0897E00C;
    case 471u: goto L_0897E024;
    case 472u: goto L_0897E030;
    case 473u: goto L_0897E05C;
    case 474u: goto L_0897E0A8;
    case 475u: goto L_0897E0BC;
    case 476u: goto L_0897E0D0;
    case 477u: goto L_0897E0D8;
    case 478u: goto L_0897E0E8;
    case 479u: goto L_0897E104;
    case 480u: goto L_0897E110;
    case 481u: goto L_0897E120;
    case 482u: goto L_0897E12C;
    case 483u: goto L_0897E134;
    case 484u: goto L_0897E140;
    case 485u: goto L_0897E148;
    case 486u: goto L_0897E160;
    case 487u: goto L_0897E164;
    case 488u: goto L_0897E174;
    case 489u: goto L_0897E180;
    case 490u: goto L_0897E188;
    case 491u: goto L_0897E190;
    case 492u: goto L_0897E19C;
    case 493u: goto L_0897E1A8;
    case 494u: goto L_0897E1B8;
    case 495u: goto L_0897E1C4;
    case 496u: goto L_0897E1CC;
    case 497u: goto L_0897E1D4;
    case 498u: goto L_0897E1E4;
    case 499u: goto L_0897E1FC;
    case 500u: goto L_0897E214;
    case 501u: goto L_0897E218;
    case 502u: goto L_0897E220;
    case 503u: goto L_0897E238;
    case 504u: goto L_0897E244;
    case 505u: goto L_0897E264;
    case 506u: goto L_0897E2B4;
    case 507u: goto L_0897E2BC;
    case 508u: goto L_0897E2D8;
    case 509u: goto L_0897E2E0;
    case 510u: goto L_0897E2F4;
    case 511u: goto L_0897E2FC;
    case 512u: goto L_0897E314;
    case 513u: goto L_0897E320;
    case 514u: goto L_0897E328;
    case 515u: goto L_0897E338;
    case 516u: goto L_0897E344;
    case 517u: goto L_0897E354;
    case 518u: goto L_0897E360;
    case 519u: goto L_0897E368;
    case 520u: goto L_0897E374;
    case 521u: goto L_0897E37C;
    case 522u: goto L_0897E394;
    case 523u: goto L_0897E3A4;
    case 524u: goto L_0897E3B0;
    case 525u: goto L_0897E3B8;
    case 526u: goto L_0897E3C0;
    case 527u: goto L_0897E3CC;
    case 528u: goto L_0897E3D8;
    case 529u: goto L_0897E3E8;
    case 530u: goto L_0897E3F4;
    case 531u: goto L_0897E3FC;
    case 532u: goto L_0897E404;
    case 533u: goto L_0897E414;
    case 534u: goto L_0897E42C;
    case 535u: goto L_0897E444;
    case 536u: goto L_0897E448;
    case 537u: goto L_0897E450;
    case 538u: goto L_0897E468;
    case 539u: goto L_0897E474;
    case 540u: goto L_0897E47C;
    case 541u: goto L_0897E48C;
    case 542u: goto L_0897E498;
    case 543u: goto L_0897E4A8;
    case 544u: goto L_0897E4B4;
    case 545u: goto L_0897E4BC;
    case 546u: goto L_0897E4C8;
    case 547u: goto L_0897E4D0;
    case 548u: goto L_0897E4E8;
    case 549u: goto L_0897E4F8;
    case 550u: goto L_0897E504;
    case 551u: goto L_0897E50C;
    case 552u: goto L_0897E514;
    case 553u: goto L_0897E520;
    case 554u: goto L_0897E52C;
    case 555u: goto L_0897E53C;
    case 556u: goto L_0897E548;
    case 557u: goto L_0897E550;
    case 558u: goto L_0897E558;
    case 559u: goto L_0897E568;
    case 560u: goto L_0897E580;
    case 561u: goto L_0897E598;
    case 562u: goto L_0897E59C;
    case 563u: goto L_0897E5A4;
    case 564u: goto L_0897E5BC;
    case 565u: goto L_0897E5C8;
    case 566u: goto L_0897E5D0;
    case 567u: goto L_0897E5E0;
    case 568u: goto L_0897E5EC;
    case 569u: goto L_0897E5FC;
    case 570u: goto L_0897E608;
    case 571u: goto L_0897E610;
    case 572u: goto L_0897E61C;
    case 573u: goto L_0897E624;
    case 574u: goto L_0897E63C;
    case 575u: goto L_0897E64C;
    case 576u: goto L_0897E658;
    case 577u: goto L_0897E660;
    case 578u: goto L_0897E668;
    case 579u: goto L_0897E674;
    case 580u: goto L_0897E680;
    case 581u: goto L_0897E690;
    case 582u: goto L_0897E69C;
    case 583u: goto L_0897E6A4;
    case 584u: goto L_0897E6AC;
    case 585u: goto L_0897E6BC;
    case 586u: goto L_0897E6D4;
    case 587u: goto L_0897E6EC;
    case 588u: goto L_0897E6F0;
    case 589u: goto L_0897E6F8;
    case 590u: goto L_0897E710;
    case 591u: goto L_0897E71C;
    case 592u: goto L_0897E724;
    case 593u: goto L_0897E73C;
    case 594u: goto L_0897E754;
    case 595u: goto L_0897E760;
    case 596u: goto L_0897E770;
    case 597u: goto L_0897E77C;
    case 598u: goto L_0897E784;
    case 599u: goto L_0897E790;
    case 600u: goto L_0897E798;
    case 601u: goto L_0897E7B0;
    case 602u: goto L_0897E7C0;
    case 603u: goto L_0897E7CC;
    case 604u: goto L_0897E7D4;
    case 605u: goto L_0897E7DC;
    case 606u: goto L_0897E7E8;
    case 607u: goto L_0897E7F4;
    case 608u: goto L_0897E804;
    case 609u: goto L_0897E810;
    case 610u: goto L_0897E818;
    case 611u: goto L_0897E820;
    case 612u: goto L_0897E830;
    case 613u: goto L_0897E848;
    case 614u: goto L_0897E860;
    case 615u: goto L_0897E864;
    case 616u: goto L_0897E86C;
    case 617u: goto L_0897E884;
    case 618u: goto L_0897E890;
    case 619u: goto L_0897E898;
    case 620u: goto L_0897E8B0;
    case 621u: goto L_0897E8BC;
    case 622u: goto L_0897E8CC;
    case 623u: goto L_0897E8D8;
    case 624u: goto L_0897E8E0;
    case 625u: goto L_0897E8EC;
    case 626u: goto L_0897E8F4;
    case 627u: goto L_0897E90C;
    case 628u: goto L_0897E91C;
    case 629u: goto L_0897E928;
    case 630u: goto L_0897E930;
    case 631u: goto L_0897E938;
    case 632u: goto L_0897E944;
    case 633u: goto L_0897E950;
    case 634u: goto L_0897E960;
    case 635u: goto L_0897E96C;
    case 636u: goto L_0897E974;
    case 637u: goto L_0897E97C;
    case 638u: goto L_0897E98C;
    case 639u: goto L_0897E9A4;
    case 640u: goto L_0897E9BC;
    case 641u: goto L_0897E9C0;
    case 642u: goto L_0897E9C8;
    case 643u: goto L_0897E9E0;
    case 644u: goto L_0897E9EC;
    case 645u: goto L_0897EA1C;
    case 646u: goto L_0897EA2C;
    case 647u: goto L_0897EA54;
    case 648u: goto L_0897EA60;
    case 649u: goto L_0897EA70;
    case 650u: goto L_0897EA98;
    case 651u: goto L_0897EAA8;
    case 652u: goto L_0897EAB0;
    case 653u: goto L_0897EAC0;
    case 654u: goto L_0897EAC4;
    case 655u: goto L_0897EAE0;
    case 656u: goto L_0897EAF8;
    case 657u: goto L_0897EB08;
    case 658u: goto L_0897EB34;
    case 659u: goto L_0897EB54;
    case 660u: goto L_0897EB6C;
    case 661u: goto L_0897EB98;
    case 662u: goto L_0897EBB8;
    case 663u: goto L_0897EBD0;
    case 664u: goto L_0897EBDC;
    case 665u: goto L_0897EBF0;
    case 666u: goto L_0897EBF4;
    case 667u: goto L_0897EC08;
    case 668u: goto L_0897EC24;
    case 669u: goto L_0897EC38;
    case 670u: goto L_0897EC48;
    case 671u: goto L_0897EC5C;
    case 672u: goto L_0897EC6C;
    case 673u: goto L_0897EC80;
    case 674u: goto L_0897EC90;
    case 675u: goto L_0897ECA0;
    case 676u: goto L_0897ECAC;
    case 677u: goto L_0897ECC8;
    case 678u: goto L_0897ECD0;
    case 679u: goto L_0897ECDC;
    case 680u: goto L_0897ECE0;
    case 681u: goto L_0897ECF0;
    case 682u: goto L_0897ED0C;
    case 683u: goto L_0897ED44;
    case 684u: goto L_0897ED54;
    case 685u: goto L_0897ED60;
    case 686u: goto L_0897ED64;
    case 687u: goto L_0897ED78;
    case 688u: goto L_0897EDB0;
    case 689u: goto L_0897EDBC;
    case 690u: goto L_0897EDCC;
    case 691u: goto L_0897EDE4;
    case 692u: goto L_0897EDF4;
    case 693u: goto L_0897EE04;
    case 694u: goto L_0897EE10;
    case 695u: goto L_0897EE24;
    case 696u: goto L_0897EE3C;
    case 697u: goto L_0897EE44;
    case 698u: goto L_0897EE58;
    case 699u: goto L_0897EE60;
    case 700u: goto L_0897EE6C;
    case 701u: goto L_0897EE80;
    case 702u: goto L_0897EE88;
    case 703u: goto L_0897EE9C;
    case 704u: goto L_0897EEA4;
    case 705u: goto L_0897EEB0;
    case 706u: goto L_0897EEC4;
    case 707u: goto L_0897EECC;
    case 708u: goto L_0897EEE0;
    case 709u: goto L_0897EEE8;
    case 710u: goto L_0897EEF4;
    case 711u: goto L_0897EF08;
    case 712u: goto L_0897EF10;
    case 713u: goto L_0897EF24;
    case 714u: goto L_0897EF2C;
    case 715u: goto L_0897EF30;
    case 716u: goto L_0897EF44;
    case 717u: goto L_0897EF4C;
    case 718u: goto L_0897EF60;
    case 719u: goto L_0897EF68;
    case 720u: goto L_0897EF7C;
    case 721u: goto L_0897EF84;
    case 722u: goto L_0897EF98;
    case 723u: goto L_0897EFA0;
    case 724u: goto L_0897EFB0;
    case 725u: goto L_0897EFB4;
    case 726u: goto L_0897EFC0;
    case 727u: goto L_0897EFC8;
    case 728u: goto L_0897EFD8;
    case 729u: goto L_0897EFE0;
    case 730u: goto L_0897EFF0;
    case 731u: goto L_0897F004;
    case 732u: goto L_0897F010;
    case 733u: goto L_0897F020;
    case 734u: goto L_0897F038;
    case 735u: goto L_0897F04C;
    case 736u: goto L_0897F054;
    case 737u: goto L_0897F064;
    case 738u: goto L_0897F068;
    case 739u: goto L_0897F078;
    case 740u: goto L_0897F094;
    case 741u: goto L_0897F0B0;
    case 742u: goto L_0897F0C0;
    case 743u: goto L_0897F0D8;
    case 744u: goto L_0897F0F4;
    case 745u: goto L_0897F10C;
    case 746u: goto L_0897F124;
    case 747u: goto L_0897F188;
    case 748u: goto L_0897F18C;
    case 749u: goto L_0897F194;
    case 750u: goto L_0897F1A0;
    case 751u: goto L_0897F1A4;
    case 752u: goto L_0897F1D0;
    case 753u: goto L_0897F1E8;
    case 754u: goto L_0897F1F8;
    case 755u: goto L_0897F230;
    case 756u: goto L_0897F250;
    case 757u: goto L_0897F254;
    case 758u: goto L_0897F26C;
    case 759u: goto L_0897F284;
    case 760u: goto L_0897F2A0;
    case 761u: goto L_0897F2C8;
    case 762u: goto L_0897F2E8;
    case 763u: goto L_0897F300;
    case 764u: goto L_0897F308;
    case 765u: goto L_0897F310;
    case 766u: goto L_0897F334;
    case 767u: goto L_0897F358;
    case 768u: goto L_0897F374;
    case 769u: goto L_0897F380;
    case 770u: goto L_0897F3D0;
    case 771u: goto L_0897F3DC;
    case 772u: goto L_0897F3EC;
    case 773u: goto L_0897F3F8;
    case 774u: goto L_0897F404;
    case 775u: goto L_0897F418;
    case 776u: goto L_0897F424;
    case 777u: goto L_0897F42C;
    case 778u: goto L_0897F440;
    case 779u: goto L_0897F450;
    case 780u: goto L_0897F458;
    case 781u: goto L_0897F464;
    case 782u: goto L_0897F47C;
    case 783u: goto L_0897F494;
    case 784u: goto L_0897F49C;
    case 785u: goto L_0897F4AC;
    case 786u: goto L_0897F4D4;
    case 787u: goto L_0897F4E0;
    case 788u: goto L_0897F4F8;
    case 789u: goto L_0897F508;
    case 790u: goto L_0897F518;
    case 791u: goto L_0897F520;
    case 792u: goto L_0897F538;
    case 793u: goto L_0897F544;
    case 794u: goto L_0897F550;
    case 795u: goto L_0897F55C;
    case 796u: goto L_0897F568;
    case 797u: goto L_0897F574;
    case 798u: goto L_0897F580;
    case 799u: goto L_0897F58C;
    case 800u: goto L_0897F598;
    case 801u: goto L_0897F5A4;
    case 802u: goto L_0897F5B0;
    case 803u: goto L_0897F5BC;
    case 804u: goto L_0897F5C8;
    case 805u: goto L_0897F5D4;
    case 806u: goto L_0897F5E0;
    case 807u: goto L_0897F5E8;
    case 808u: goto L_0897F5FC;
    case 809u: goto L_0897F604;
    case 810u: goto L_0897F620;
    case 811u: goto L_0897F624;
    case 812u: goto L_0897F62C;
    case 813u: goto L_0897F648;
    case 814u: goto L_0897F654;
    case 815u: goto L_0897F674;
    case 816u: goto L_0897F68C;
    case 817u: goto L_0897F6B4;
    case 818u: goto L_0897F6C0;
    case 819u: goto L_0897F6D4;
    case 820u: goto L_0897F6E0;
    case 821u: goto L_0897F6E4;
    case 822u: goto L_0897F710;
    case 823u: goto L_0897F74C;
    case 824u: goto L_0897F758;
    case 825u: goto L_0897F764;
    case 826u: goto L_0897F77C;
    case 827u: goto L_0897F794;
    case 828u: goto L_0897F7A8;
    case 829u: goto L_0897F7C8;
    case 830u: goto L_0897F7D0;
    case 831u: goto L_0897F7EC;
    case 832u: goto L_0897F814;
    case 833u: goto L_0897F834;
    case 834u: goto L_0897F848;
    case 835u: goto L_0897F850;
    case 836u: goto L_0897F858;
    case 837u: goto L_0897F864;
    case 838u: goto L_0897F868;
    case 839u: goto L_0897F870;
    case 840u: goto L_0897F880;
    case 841u: goto L_0897F88C;
    case 842u: goto L_0897F8A0;
    case 843u: goto L_0897F8B8;
    case 844u: goto L_0897F8CC;
    case 845u: goto L_0897F8E4;
    case 846u: goto L_0897F8EC;
    case 847u: goto L_0897F8F8;
    case 848u: goto L_0897F918;
    case 849u: goto L_0897F91C;
    case 850u: goto L_0897F92C;
    case 851u: goto L_0897F954;
    case 852u: goto L_0897F95C;
    case 853u: goto L_0897F964;
    case 854u: goto L_0897F968;
    case 855u: goto L_0897F980;
    case 856u: goto L_0897F988;
    case 857u: goto L_0897F994;
    case 858u: goto L_0897F9A0;
    case 859u: goto L_0897F9AC;
    case 860u: goto L_0897F9C0;
    case 861u: goto L_0897F9CC;
    case 862u: goto L_0897F9D8;
    case 863u: goto L_0897F9F4;
    case 864u: goto L_0897FA00;
    case 865u: goto L_0897FA18;
    case 866u: goto L_0897FA28;
    case 867u: goto L_0897FA44;
    case 868u: goto L_0897FA54;
    case 869u: goto L_0897FA6C;
    case 870u: goto L_0897FA78;
    case 871u: goto L_0897FA80;
    case 872u: goto L_0897FAA4;
    case 873u: goto L_0897FAB8;
    case 874u: goto L_0897FAD0;
    case 875u: goto L_0897FAF8;
    case 876u: goto L_0897FB04;
    case 877u: goto L_0897FB10;
    case 878u: goto L_0897FB18;
    case 879u: goto L_0897FB20;
    case 880u: goto L_0897FB38;
    case 881u: goto L_0897FB4C;
    case 882u: goto L_0897FB5C;
    case 883u: goto L_0897FB78;
    case 884u: goto L_0897FB90;
    case 885u: goto L_0897FBA4;
    case 886u: goto L_0897FBB0;
    case 887u: goto L_0897FBBC;
    case 888u: goto L_0897FBC8;
    case 889u: goto L_0897FBD4;
    case 890u: goto L_0897FBDC;
    case 891u: goto L_0897FBE4;
    case 892u: goto L_0897FBF8;
    case 893u: goto L_0897FC04;
    case 894u: goto L_0897FC20;
    case 895u: goto L_0897FC2C;
    case 896u: goto L_0897FC40;
    case 897u: goto L_0897FC4C;
    case 898u: goto L_0897FC58;
    case 899u: goto L_0897FC5C;
    case 900u: goto L_0897FC78;
    case 901u: goto L_0897FC8C;
    case 902u: goto L_0897FCA4;
    case 903u: goto L_0897FCAC;
    case 904u: goto L_0897FCB0;
    case 905u: goto L_0897FCC0;
    case 906u: goto L_0897FCDC;
    case 907u: goto L_0897FCEC;
    case 908u: goto L_0897FCF8;
    case 909u: goto L_0897FD04;
    case 910u: goto L_0897FD18;
    case 911u: goto L_0897FD24;
    case 912u: goto L_0897FD30;
    case 913u: goto L_0897FD40;
    case 914u: goto L_0897FD68;
    case 915u: goto L_0897FD74;
    case 916u: goto L_0897FD80;
    case 917u: goto L_0897FD98;
    case 918u: goto L_0897FDAC;
    case 919u: goto L_0897FDC4;
    case 920u: goto L_0897FDD8;
    case 921u: goto L_0897FDF4;
    case 922u: goto L_0897FDFC;
    case 923u: goto L_0897FE00;
    case 924u: goto L_0897FE0C;
    case 925u: goto L_0897FE1C;
    case 926u: goto L_0897FE24;
    case 927u: goto L_0897FE2C;
    case 928u: goto L_0897FE38;
    case 929u: goto L_0897FE48;
    case 930u: goto L_0897FE54;
    case 931u: goto L_0897FE5C;
    case 932u: goto L_0897FE68;
    case 933u: goto L_0897FE70;
    case 934u: goto L_0897FE84;
    case 935u: goto L_0897FE94;
    case 936u: goto L_0897FEAC;
    case 937u: goto L_0897FEB0;
    case 938u: goto L_0897FEB8;
    case 939u: goto L_0897FEC4;
    case 940u: goto L_0897FED4;
    case 941u: goto L_0897FEEC;
    case 942u: goto L_0897FEF0;
    case 943u: goto L_0897FEF8;
    case 944u: goto L_0897FF10;
    case 945u: goto L_0897FF1C;
    case 946u: goto L_0897FF38;
    case 947u: goto L_0897FF48;
    case 948u: goto L_0897FF50;
    case 949u: goto L_0897FF68;
    case 950u: goto L_0897FF74;
    case 951u: goto L_0897FF80;
    case 952u: goto L_0897FF88;
    case 953u: goto L_0897FFAC;
    case 954u: goto L_0897FFB4;
    case 955u: goto L_0897FFE0;
    case 956u: goto L_0897FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0897C000:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897C038;
      }
      goto L_0897C00C;
    }
L_0897C00C:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0897C020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C020u) goto L_0897C020;
    return;
L_0897C020:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0897C02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C02Cu) goto L_0897C02C;
    return;
L_0897C02C:
    ctx.set_gpr(31, 0x0897C034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C034u) goto L_0897C034;
    return;
L_0897C034:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0897C038;
L_0897C038:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4096));
    goto L_0897C044;
L_0897C044:
    ctx.set_gpr(3, ctx.gpr[18] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 824u, 0x0897BFA0u>(ctx, &aot_mem); return;
      }
      goto L_0897C050;
    }
L_0897C050:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0897C054;
L_0897C054:
    ctx.set_gpr(1, ctx.gpr[23] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 816u, 0x0897BF44u>(ctx, &aot_mem); return;
      }
      goto L_0897C060;
    }
L_0897C060:
    ctx.set_gpr(3, ctx.gpr[17] & 63u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C094;
      }
      goto L_0897C06C;
    }
L_0897C06C:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0897C080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C080u) goto L_0897C080;
    return;
L_0897C080:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0897C08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C08Cu) goto L_0897C08C;
    return;
L_0897C08C:
    ctx.set_gpr(31, 0x0897C094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C094u) goto L_0897C094;
    return;
L_0897C094:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C0C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897C0E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C0E4u) goto L_0897C0E4;
    return;
L_0897C0E4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9732));
    ctx.set_gpr(31, 0x0897C0F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C0F4u) goto L_0897C0F4;
    return;
L_0897C0F4:
    ctx.set_gpr(31, 0x0897C0FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C0FCu) goto L_0897C0FC;
    return;
L_0897C0FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9760));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C114u) goto L_0897C114;
    return;
L_0897C114:
    ctx.set_gpr(31, 0x0897C11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C11Cu) goto L_0897C11C;
    return;
L_0897C11C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9804));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C134u) goto L_0897C134;
    return;
L_0897C134:
    ctx.set_gpr(31, 0x0897C13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C13Cu) goto L_0897C13C;
    return;
L_0897C13C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9848));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C154u) goto L_0897C154;
    return;
L_0897C154:
    ctx.set_gpr(31, 0x0897C15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C15Cu) goto L_0897C15C;
    return;
L_0897C15C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9892));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C174u) goto L_0897C174;
    return;
L_0897C174:
    ctx.set_gpr(31, 0x0897C17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C17Cu) goto L_0897C17C;
    return;
L_0897C17C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9936));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C194u) goto L_0897C194;
    return;
L_0897C194:
    ctx.set_gpr(31, 0x0897C19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C19Cu) goto L_0897C19C;
    return;
L_0897C19C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9980));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C1B4u) goto L_0897C1B4;
    return;
L_0897C1B4:
    ctx.set_gpr(31, 0x0897C1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C1BCu) goto L_0897C1BC;
    return;
L_0897C1BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10024));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C1D4u) goto L_0897C1D4;
    return;
L_0897C1D4:
    ctx.set_gpr(31, 0x0897C1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C1DCu) goto L_0897C1DC;
    return;
L_0897C1DC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10068));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C1F4u) goto L_0897C1F4;
    return;
L_0897C1F4:
    ctx.set_gpr(31, 0x0897C1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C1FCu) goto L_0897C1FC;
    return;
L_0897C1FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10112));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C214u) goto L_0897C214;
    return;
L_0897C214:
    ctx.set_gpr(31, 0x0897C21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C21Cu) goto L_0897C21C;
    return;
L_0897C21C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10156));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C234u) goto L_0897C234;
    return;
L_0897C234:
    ctx.set_gpr(31, 0x0897C23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C23Cu) goto L_0897C23C;
    return;
L_0897C23C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10200));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C254u) goto L_0897C254;
    return;
L_0897C254:
    ctx.set_gpr(31, 0x0897C25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C25Cu) goto L_0897C25C;
    return;
L_0897C25C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10244));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C274u) goto L_0897C274;
    return;
L_0897C274:
    ctx.set_gpr(31, 0x0897C27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C27Cu) goto L_0897C27C;
    return;
L_0897C27C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10288));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C294u) goto L_0897C294;
    return;
L_0897C294:
    ctx.set_gpr(31, 0x0897C29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C29Cu) goto L_0897C29C;
    return;
L_0897C29C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10332));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C2B4u) goto L_0897C2B4;
    return;
L_0897C2B4:
    ctx.set_gpr(31, 0x0897C2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C2BCu) goto L_0897C2BC;
    return;
L_0897C2BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10376));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C2D4u) goto L_0897C2D4;
    return;
L_0897C2D4:
    ctx.set_gpr(31, 0x0897C2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C2DCu) goto L_0897C2DC;
    return;
L_0897C2DC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10420));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C2F4u) goto L_0897C2F4;
    return;
L_0897C2F4:
    ctx.set_gpr(31, 0x0897C2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C2FCu) goto L_0897C2FC;
    return;
L_0897C2FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10464));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C314u) goto L_0897C314;
    return;
L_0897C314:
    ctx.set_gpr(31, 0x0897C31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C31Cu) goto L_0897C31C;
    return;
L_0897C31C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10508));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C334u) goto L_0897C334;
    return;
L_0897C334:
    ctx.set_gpr(31, 0x0897C33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C33Cu) goto L_0897C33C;
    return;
L_0897C33C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10552));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C354u) goto L_0897C354;
    return;
L_0897C354:
    ctx.set_gpr(31, 0x0897C35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C35Cu) goto L_0897C35C;
    return;
L_0897C35C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10596));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C374u) goto L_0897C374;
    return;
L_0897C374:
    ctx.set_gpr(31, 0x0897C37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C37Cu) goto L_0897C37C;
    return;
L_0897C37C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C394u) goto L_0897C394;
    return;
L_0897C394:
    ctx.set_gpr(31, 0x0897C39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C39Cu) goto L_0897C39C;
    return;
L_0897C39C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10684));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C3B4u) goto L_0897C3B4;
    return;
L_0897C3B4:
    ctx.set_gpr(31, 0x0897C3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C3BCu) goto L_0897C3BC;
    return;
L_0897C3BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10728));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897C3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C3D4u) goto L_0897C3D4;
    return;
L_0897C3D4:
    ctx.set_gpr(31, 0x0897C3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C3DCu) goto L_0897C3DC;
    return;
L_0897C3DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C3EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x0897C40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0897C40Cu) goto L_0897C40C;
    return;
L_0897C40C:
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
L_0897C424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C450;
      }
      goto L_0897C43C;
    }
L_0897C43C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897C450;
      }
      goto L_0897C448;
    }
L_0897C448:
    ctx.set_gpr(31, 0x0897C450u);
    // nop
    goto L_0897C528;
L_0897C450:
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
L_0897C468:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x0897C488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0897C488u) goto L_0897C488;
    return;
L_0897C488:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C4A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x0897C4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0897C4C0u) goto L_0897C4C0;
    return;
L_0897C4C0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C4D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0897C4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 219u, 0x0893CE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C4F0u) goto L_0897C4F0;
    return;
L_0897C4F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897C4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0897C4FCu) goto L_0897C4FC;
    return;
L_0897C4FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897C514u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C514u) goto L_0897C514;
    return;
L_0897C514:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C528:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0897C540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 219u, 0x0893CE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C540u) goto L_0897C540;
    return;
L_0897C540:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897C54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0897C54Cu) goto L_0897C54C;
    return;
L_0897C54C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897C564u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C564u) goto L_0897C564;
    return;
L_0897C564:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C578:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C594:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(21, ctx.gpr[10] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C5DC;
      }
      goto L_0897C5D4;
    }
L_0897C5D4:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10772));
    goto L_0897C5DC;
L_0897C5DC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10784));
    ctx.set_gpr(31, 0x0897C5ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C5ECu) goto L_0897C5EC;
    return;
L_0897C5EC:
    ctx.set_gpr(31, 0x0897C5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C5F4u) goto L_0897C5F4;
    return;
L_0897C5F4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897C60Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C60Cu) goto L_0897C60C;
    return;
L_0897C60C:
    ctx.set_gpr(31, 0x0897C614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 219u, 0x0893CE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C614u) goto L_0897C614;
    return;
L_0897C614:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897C620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0897C620u) goto L_0897C620;
    return;
L_0897C620:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897C62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 111u, 0x088F8A08u>(ctx, &aot_mem) && ctx.pc == 0x0897C62Cu) goto L_0897C62C;
    return;
L_0897C62C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 1025 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C654;
      }
      goto L_0897C644;
    }
L_0897C644:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897C654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C654u) goto L_0897C654;
    return;
L_0897C654:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C674;
      }
      goto L_0897C65C;
    }
L_0897C65C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897C674u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C674u) goto L_0897C674;
    return;
L_0897C674:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C694;
      }
      goto L_0897C67C;
    }
L_0897C67C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897C694u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C694u) goto L_0897C694;
    return;
L_0897C694:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C6B4;
      }
      goto L_0897C69C;
    }
L_0897C69C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897C6B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C6B4u) goto L_0897C6B4;
    return;
L_0897C6B4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C6D4;
      }
      goto L_0897C6BC;
    }
L_0897C6BC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897C6D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C6D4u) goto L_0897C6D4;
    return;
L_0897C6D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C828;
      }
      goto L_0897C6E4;
    }
L_0897C6E4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C828;
      }
      goto L_0897C6EC;
    }
L_0897C6EC:
    ctx.set_gpr(31, 0x0897C6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 219u, 0x0893CE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C6F4u) goto L_0897C6F4;
    return;
L_0897C6F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897C700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0897C700u) goto L_0897C700;
    return;
L_0897C700:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897C70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 459u, 0x088F2730u>(ctx, &aot_mem) && ctx.pc == 0x0897C70Cu) goto L_0897C70C;
    return;
L_0897C70C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897C724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 527u, 0x08915DC4u>(ctx, &aot_mem) && ctx.pc == 0x0897C724u) goto L_0897C724;
    return;
L_0897C724:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] | 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-33));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897C74Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C74Cu) goto L_0897C74C;
    return;
L_0897C74C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C7DC;
      }
      goto L_0897C758;
    }
L_0897C758:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(88));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0897C7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x0897C7ACu) goto L_0897C7AC;
    return;
L_0897C7AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897C7C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C7C8u) goto L_0897C7C8;
    return;
L_0897C7C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0897C7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x0897C7D8u) goto L_0897C7D8;
    return;
L_0897C7D8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0897C7DC;
L_0897C7DC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C758;
      }
      goto L_0897C7E8;
    }
L_0897C7E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897C800u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C800u) goto L_0897C800;
    return;
L_0897C800:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897C814u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C814u) goto L_0897C814;
    return;
L_0897C814:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C828;
      }
      goto L_0897C820;
    }
L_0897C820:
    ctx.set_gpr(31, 0x0897C828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0897C828u) goto L_0897C828;
    return;
L_0897C828:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10792));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10820));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10828));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4444));
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(10832));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(10844));
    ctx.set_gpr(31, 0x0897C860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C860u) goto L_0897C860;
    return;
L_0897C860:
    ctx.set_gpr(31, 0x0897C868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C868u) goto L_0897C868;
    return;
L_0897C868:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C8C8;
      }
      goto L_0897C874;
    }
L_0897C874:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10856));
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(9, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0897C8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C8ACu) goto L_0897C8AC;
    return;
L_0897C8AC:
    ctx.set_gpr(31, 0x0897C8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C8B4u) goto L_0897C8B4;
    return;
L_0897C8B4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0897C8C4u);
    // nop
    goto L_0897C424;
L_0897C8C4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0897C8C8;
L_0897C8C8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897C874;
      }
      goto L_0897C8D4;
    }
L_0897C8D4:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0897C8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0897C8E0u) goto L_0897C8E0;
    return;
L_0897C8E0:
    ctx.set_gpr(31, 0x0897C8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0897C8E8u) goto L_0897C8E8;
    return;
L_0897C8E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C8FC;
      }
      goto L_0897C8F4;
    }
L_0897C8F4:
    ctx.set_gpr(31, 0x0897C8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0897C8FCu) goto L_0897C8FC;
    return;
L_0897C8FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C924:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C92C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897C950u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C950u) goto L_0897C950;
    return;
L_0897C950:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897C9F4;
      }
      goto L_0897C960;
    }
L_0897C960:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x0897C96Cu);
    // nop
    goto L_0897C4D8;
L_0897C96C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C980;
      }
      goto L_0897C974;
    }
L_0897C974:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897C980u);
    // nop
    goto L_0897C3EC;
L_0897C980:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10888));
    ctx.set_gpr(31, 0x0897C9ACu);
    // nop
    goto L_0897C468;
L_0897C9AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10904));
    ctx.set_gpr(31, 0x0897C9C0u);
    // nop
    goto L_0897C4A0;
L_0897C9C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 2200u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14984));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0897C9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x08910268u>(ctx, &aot_mem) && ctx.pc == 0x0897C9DCu) goto L_0897C9DC;
    return;
L_0897C9DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897C9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x0897C9F4u) goto L_0897C9F4;
    return;
L_0897C9F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897CA98;
      }
      goto L_0897CA04;
    }
L_0897CA04:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x0897CA10u);
    // nop
    goto L_0897C4D8;
L_0897CA10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CA24;
      }
      goto L_0897CA18;
    }
L_0897CA18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897CA24u);
    // nop
    goto L_0897C3EC;
L_0897CA24:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10912));
    ctx.set_gpr(31, 0x0897CA50u);
    // nop
    goto L_0897C468;
L_0897CA50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10904));
    ctx.set_gpr(31, 0x0897CA64u);
    // nop
    goto L_0897C4A0;
L_0897CA64:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 2200u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14984));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0897CA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x08910268u>(ctx, &aot_mem) && ctx.pc == 0x0897CA80u) goto L_0897CA80;
    return;
L_0897CA80:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897CA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x0897CA98u) goto L_0897CA98;
    return;
L_0897CA98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897CB3C;
      }
      goto L_0897CAA8;
    }
L_0897CAA8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x0897CAB4u);
    // nop
    goto L_0897C4D8;
L_0897CAB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CAC8;
      }
      goto L_0897CABC;
    }
L_0897CABC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897CAC8u);
    // nop
    goto L_0897C3EC;
L_0897CAC8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10928));
    ctx.set_gpr(31, 0x0897CAF4u);
    // nop
    goto L_0897C468;
L_0897CAF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10904));
    ctx.set_gpr(31, 0x0897CB08u);
    // nop
    goto L_0897C4A0;
L_0897CB08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 2200u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14984));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0897CB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x08910268u>(ctx, &aot_mem) && ctx.pc == 0x0897CB24u) goto L_0897CB24;
    return;
L_0897CB24:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897CB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x0897CB3Cu) goto L_0897CB3C;
    return;
L_0897CB3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897CBE0;
      }
      goto L_0897CB4C;
    }
L_0897CB4C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x0897CB58u);
    // nop
    goto L_0897C4D8;
L_0897CB58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CB6C;
      }
      goto L_0897CB60;
    }
L_0897CB60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897CB6Cu);
    // nop
    goto L_0897C3EC;
L_0897CB6C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10956));
    ctx.set_gpr(31, 0x0897CB98u);
    // nop
    goto L_0897C468;
L_0897CB98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10904));
    ctx.set_gpr(31, 0x0897CBACu);
    // nop
    goto L_0897C4A0;
L_0897CBAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 2200u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14984));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0897CBC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x08910268u>(ctx, &aot_mem) && ctx.pc == 0x0897CBC8u) goto L_0897CBC8;
    return;
L_0897CBC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897CBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x0897CBE0u) goto L_0897CBE0;
    return;
L_0897CBE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897CC84;
      }
      goto L_0897CBF0;
    }
L_0897CBF0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x0897CBFCu);
    // nop
    goto L_0897C4D8;
L_0897CBFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CC10;
      }
      goto L_0897CC04;
    }
L_0897CC04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897CC10u);
    // nop
    goto L_0897C3EC;
L_0897CC10:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10984));
    ctx.set_gpr(31, 0x0897CC3Cu);
    // nop
    goto L_0897C468;
L_0897CC3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10904));
    ctx.set_gpr(31, 0x0897CC50u);
    // nop
    goto L_0897C4A0;
L_0897CC50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 2200u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14984));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0897CC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x08910268u>(ctx, &aot_mem) && ctx.pc == 0x0897CC6Cu) goto L_0897CC6C;
    return;
L_0897CC6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897CC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x0897CC84u) goto L_0897CC84;
    return;
L_0897CC84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897CC98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897CCD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897CCD0u) goto L_0897CCD0;
    return;
L_0897CCD0:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CEB0;
      }
      goto L_0897CCDC;
    }
L_0897CCDC:
    ctx.set_gpr(4, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(31460));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CEAC;
      }
      goto L_0897CCF8;
    }
L_0897CCF8:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CEA0;
      }
      goto L_0897CD04;
    }
L_0897CD04:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0897CD14u);
    // nop
    goto L_0897D09C;
L_0897CD14:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0897CD38u);
    // nop
    goto L_0897D254;
L_0897CD38:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x0897CD48u);
    // nop
    goto L_0897C4D8;
L_0897CD48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CD5C;
      }
      goto L_0897CD50;
    }
L_0897CD50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897CD5Cu);
    // nop
    goto L_0897C3EC;
L_0897CD5C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] << 26u);
    ctx.set_gpr(3, ctx.gpr[19] << 12u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] << 12u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897CE40;
      }
      goto L_0897CD88;
    }
L_0897CD88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897CE10;
      }
      goto L_0897CD94;
    }
L_0897CD94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897CDE0;
      }
      goto L_0897CDA0;
    }
L_0897CDA0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CDB0;
      }
      goto L_0897CDA8;
    }
L_0897CDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CE68;
      }
      goto L_0897CDB0;
    }
L_0897CDB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11004));
    ctx.set_gpr(31, 0x0897CDC4u);
    // nop
    goto L_0897C468;
L_0897CDC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11020));
    ctx.set_gpr(31, 0x0897CDD8u);
    // nop
    goto L_0897C4A0;
L_0897CDD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CE68;
      }
      goto L_0897CDE0;
    }
L_0897CDE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11032));
    ctx.set_gpr(31, 0x0897CDF4u);
    // nop
    goto L_0897C468;
L_0897CDF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11020));
    ctx.set_gpr(31, 0x0897CE08u);
    // nop
    goto L_0897C4A0;
L_0897CE08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CE68;
      }
      goto L_0897CE10;
    }
L_0897CE10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11044));
    ctx.set_gpr(31, 0x0897CE24u);
    // nop
    goto L_0897C468;
L_0897CE24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11020));
    ctx.set_gpr(31, 0x0897CE38u);
    // nop
    goto L_0897C4A0;
L_0897CE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CE68;
      }
      goto L_0897CE40;
    }
L_0897CE40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11060));
    ctx.set_gpr(31, 0x0897CE54u);
    // nop
    goto L_0897C468;
L_0897CE54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11020));
    ctx.set_gpr(31, 0x0897CE68u);
    // nop
    goto L_0897C4A0;
L_0897CE68:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, 2200u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14984));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0897CE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x08910268u>(ctx, &aot_mem) && ctx.pc == 0x0897CE84u) goto L_0897CE84;
    return;
L_0897CE84:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x0897CE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x0897CE9Cu) goto L_0897CE9C;
    return;
L_0897CE9C:
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[16]);
    goto L_0897CEA0;
L_0897CEA0:
    ctx.set_gpr(3, ctx.gpr[19] < static_cast<std::uint32_t>(16384) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897CD04;
      }
      goto L_0897CEAC;
    }
L_0897CEAC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0897CEB0;
L_0897CEB0:
    ctx.set_gpr(3, ctx.gpr[20] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897CCDC;
      }
      goto L_0897CEBC;
    }
L_0897CEBC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897CF6C;
      }
      goto L_0897CECC;
    }
L_0897CECC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897CF6C;
      }
      goto L_0897CED8;
    }
L_0897CED8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x0897CEE4u);
    // nop
    goto L_0897C4D8;
L_0897CEE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CEF8;
      }
      goto L_0897CEEC;
    }
L_0897CEEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897CEF8u);
    // nop
    goto L_0897C3EC;
L_0897CEF8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11076));
    ctx.set_gpr(31, 0x0897CF24u);
    // nop
    goto L_0897C468;
L_0897CF24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11020));
    ctx.set_gpr(31, 0x0897CF38u);
    // nop
    goto L_0897C4A0;
L_0897CF38:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, 2200u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14984));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0897CF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x08910268u>(ctx, &aot_mem) && ctx.pc == 0x0897CF54u) goto L_0897CF54;
    return;
L_0897CF54:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x0897CF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x0897CF6Cu) goto L_0897CF6C;
    return;
L_0897CF6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897CF94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897CFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 558u, 0x0892E674u>(ctx, &aot_mem) && ctx.pc == 0x0897CFA8u) goto L_0897CFA8;
    return;
L_0897CFA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897CFB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897CFC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897D000u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D000u) goto L_0897D000;
    return;
L_0897D000:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897D020u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D020u) goto L_0897D020;
    return;
L_0897D020:
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
L_0897D040:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897D058u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D058u) goto L_0897D058;
    return;
L_0897D058:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D068:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897D080u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D080u) goto L_0897D080;
    return;
L_0897D080:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D090:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D09C:
    ctx.set_gpr(2, ctx.gpr[5] >> 4u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D0C4:
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
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, ctx.gpr[20] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D13C;
      }
      goto L_0897D114;
    }
L_0897D114:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0897D124u);
    // nop
    goto L_0897D09C;
L_0897D124:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0897D13C;
L_0897D13C:
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D114;
      }
      goto L_0897D148;
    }
L_0897D148:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
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
L_0897D1A0:
    ctx.set_gpr(8, ctx.gpr[5] >> 4u);
    ctx.set_gpr(3, ctx.gpr[5] & 15u);
    ctx.set_gpr(7, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(4, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D1DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D224;
      }
      goto L_0897D20C;
    }
L_0897D20C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897D220u);
    // nop
    goto L_0897D1A0;
L_0897D220:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0897D224;
L_0897D224:
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D20C;
      }
      goto L_0897D234;
    }
L_0897D234:
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
L_0897D254:
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D2E0;
      }
      goto L_0897D294;
    }
L_0897D294:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D2B0;
      }
      goto L_0897D2A4;
    }
L_0897D2A4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D2F0;
      }
      goto L_0897D2B0;
    }
L_0897D2B0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0897D2C0u);
    // nop
    goto L_0897D09C;
L_0897D2C0:
    ctx.set_gpr(2, ctx.gpr[17] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897D2D8;
      }
      goto L_0897D2CC;
    }
L_0897D2CC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D2F0;
      }
      goto L_0897D2D8;
    }
L_0897D2D8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0897D2E0;
L_0897D2E0:
    ctx.set_gpr(2, ctx.gpr[20] < static_cast<std::uint32_t>(16384) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D294;
      }
      goto L_0897D2EC;
    }
L_0897D2EC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0897D2F0;
L_0897D2F0:
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
L_0897D318:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31440)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D338;
      }
      goto L_0897D330;
    }
L_0897D330:
    ctx.set_gpr(31, 0x0897D338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 902u, 0x089834ECu>(ctx, &aot_mem) && ctx.pc == 0x0897D338u) goto L_0897D338;
    return;
L_0897D338:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0897D360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 205u, 0x08980D54u>(ctx, &aot_mem) && ctx.pc == 0x0897D360u) goto L_0897D360;
    return;
L_0897D360:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D37C;
      }
      goto L_0897D368;
    }
L_0897D368:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897D374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 670u, 0x08903578u>(ctx, &aot_mem) && ctx.pc == 0x0897D374u) goto L_0897D374;
    return;
L_0897D374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D380;
      }
      goto L_0897D37C;
    }
L_0897D37C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0897D380;
L_0897D380:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D394:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0897D3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 103u, 0x089046A4u>(ctx, &aot_mem) && ctx.pc == 0x0897D3B8u) goto L_0897D3B8;
    return;
L_0897D3B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D3D4;
      }
      goto L_0897D3C4;
    }
L_0897D3C4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D3D4;
      }
      goto L_0897D3CC;
    }
L_0897D3CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_0897D3D4;
L_0897D3D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D3F0;
      }
      goto L_0897D3E4;
    }
L_0897D3E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0897D3F0;
L_0897D3F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D404;
      }
      goto L_0897D3FC;
    }
L_0897D3FC:
    ctx.set_gpr(31, 0x0897D404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0897D404u) goto L_0897D404;
    return;
L_0897D404:
    ctx.set_gpr(2, 0u + 0u);
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
L_0897D420:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D458;
      }
      goto L_0897D434;
    }
L_0897D434:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(493));
    ctx.set_gpr(31, 0x0897D450u);
    // nop
    ctx.pc = 0x08B0DC74u;
    return;
L_0897D450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D474;
      }
      goto L_0897D458;
    }
L_0897D458:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(514));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(420));
    ctx.set_gpr(31, 0x0897D474u);
    // nop
    ctx.pc = 0x08B0DC74u;
    return;
L_0897D474:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897D4B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D4B0u) goto L_0897D4B0;
    return;
L_0897D4B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D4E4;
      }
      goto L_0897D4B8;
    }
L_0897D4B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x0897D4C4u);
    // nop
    ctx.pc = 0x08B0DC34u;
    return;
L_0897D4C4:
    ctx.set_gpr(16, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(16, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D638;
      }
      goto L_0897D4D4;
    }
L_0897D4D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D638;
      }
      goto L_0897D4E4;
    }
L_0897D4E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11096));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D508;
      }
      goto L_0897D4FC;
    }
L_0897D4FC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D558;
      }
      goto L_0897D508;
    }
L_0897D508:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D540;
      }
      goto L_0897D518;
    }
L_0897D518:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897D524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0897D524u) goto L_0897D524;
    return;
L_0897D524:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D538;
      }
      goto L_0897D52C;
    }
L_0897D52C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897D538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0897D538u) goto L_0897D538;
    return;
L_0897D538:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0897D540;
L_0897D540:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11096));
    ctx.set_gpr(31, 0x0897D558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0897D558u) goto L_0897D558;
    return;
L_0897D558:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D57C;
      }
      goto L_0897D568;
    }
L_0897D568:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0897D574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D574u) goto L_0897D574;
    return;
L_0897D574:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897D57C;
L_0897D57C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D59C;
      }
      goto L_0897D584;
    }
L_0897D584:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0897D590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D590u) goto L_0897D590;
    return;
L_0897D590:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897D59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0897D59Cu) goto L_0897D59C;
    return;
L_0897D59C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D5C0;
      }
      goto L_0897D5AC;
    }
L_0897D5AC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0897D5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D5B8u) goto L_0897D5B8;
    return;
L_0897D5B8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897D5C0;
L_0897D5C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D5D8;
      }
      goto L_0897D5C8;
    }
L_0897D5C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0897D5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0897D5D8u) goto L_0897D5D8;
    return;
L_0897D5D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D60C;
      }
      goto L_0897D5F0;
    }
L_0897D5F0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D60C;
      }
      goto L_0897D608;
    }
L_0897D608:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0897D60C;
L_0897D60C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D638;
      }
      goto L_0897D614;
    }
L_0897D614:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D638;
      }
      goto L_0897D62C;
    }
L_0897D62C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897D638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D638u) goto L_0897D638;
    return;
L_0897D638:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0897D654:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897D688u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D688u) goto L_0897D688;
    return;
L_0897D688:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D830;
      }
      goto L_0897D690;
    }
L_0897D690:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897D6A8u);
    // nop
    ctx.pc = 0x08B0DC44u;
    return;
L_0897D6A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D6CC;
      }
      goto L_0897D6B0;
    }
L_0897D6B0:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D98C;
      }
      goto L_0897D6CC;
    }
L_0897D6CC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11128));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D6F8;
      }
      goto L_0897D6EC;
    }
L_0897D6EC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D748;
      }
      goto L_0897D6F8;
    }
L_0897D6F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D730;
      }
      goto L_0897D708;
    }
L_0897D708:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897D714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0897D714u) goto L_0897D714;
    return;
L_0897D714:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D728;
      }
      goto L_0897D71C;
    }
L_0897D71C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897D728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0897D728u) goto L_0897D728;
    return;
L_0897D728:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0897D730;
L_0897D730:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11128));
    ctx.set_gpr(31, 0x0897D748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0897D748u) goto L_0897D748;
    return;
L_0897D748:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D76C;
      }
      goto L_0897D758;
    }
L_0897D758:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x0897D764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D764u) goto L_0897D764;
    return;
L_0897D764:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897D76C;
L_0897D76C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D78C;
      }
      goto L_0897D774;
    }
L_0897D774:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x0897D780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D780u) goto L_0897D780;
    return;
L_0897D780:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897D78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0897D78Cu) goto L_0897D78C;
    return;
L_0897D78C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D7B0;
      }
      goto L_0897D79C;
    }
L_0897D79C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0897D7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D7A8u) goto L_0897D7A8;
    return;
L_0897D7A8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897D7B0;
L_0897D7B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D7C8;
      }
      goto L_0897D7B8;
    }
L_0897D7B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0897D7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0897D7C8u) goto L_0897D7C8;
    return;
L_0897D7C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D7FC;
      }
      goto L_0897D7E0;
    }
L_0897D7E0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D7FC;
      }
      goto L_0897D7F8;
    }
L_0897D7F8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0897D7FC;
L_0897D7FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D98C;
      }
      goto L_0897D804;
    }
L_0897D804:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D98C;
      }
      goto L_0897D81C;
    }
L_0897D81C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897D828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D828u) goto L_0897D828;
    return;
L_0897D828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D98C;
      }
      goto L_0897D830;
    }
L_0897D830:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11164));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D85C;
      }
      goto L_0897D850;
    }
L_0897D850:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D8AC;
      }
      goto L_0897D85C;
    }
L_0897D85C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D894;
      }
      goto L_0897D86C;
    }
L_0897D86C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897D878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0897D878u) goto L_0897D878;
    return;
L_0897D878:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D88C;
      }
      goto L_0897D880;
    }
L_0897D880:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897D88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0897D88Cu) goto L_0897D88C;
    return;
L_0897D88C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0897D894;
L_0897D894:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11164));
    ctx.set_gpr(31, 0x0897D8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0897D8ACu) goto L_0897D8AC;
    return;
L_0897D8AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D8D0;
      }
      goto L_0897D8BC;
    }
L_0897D8BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x0897D8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D8C8u) goto L_0897D8C8;
    return;
L_0897D8C8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897D8D0;
L_0897D8D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D8F0;
      }
      goto L_0897D8D8;
    }
L_0897D8D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x0897D8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D8E4u) goto L_0897D8E4;
    return;
L_0897D8E4:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897D8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0897D8F0u) goto L_0897D8F0;
    return;
L_0897D8F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D914;
      }
      goto L_0897D900;
    }
L_0897D900:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0897D90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D90Cu) goto L_0897D90C;
    return;
L_0897D90C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897D914;
L_0897D914:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D92C;
      }
      goto L_0897D91C;
    }
L_0897D91C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0897D92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0897D92Cu) goto L_0897D92C;
    return;
L_0897D92C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D960;
      }
      goto L_0897D944;
    }
L_0897D944:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D960;
      }
      goto L_0897D95C;
    }
L_0897D95C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0897D960;
L_0897D960:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D98C;
      }
      goto L_0897D968;
    }
L_0897D968:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D98C;
      }
      goto L_0897D980;
    }
L_0897D980:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897D98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D98Cu) goto L_0897D98C;
    return;
L_0897D98C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897D9AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897D9F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897D9F8u) goto L_0897D9F8;
    return;
L_0897D9F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DED8;
      }
      goto L_0897DA00;
    }
L_0897DA00:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DBCC;
      }
      goto L_0897DA10;
    }
L_0897DA10:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DA28;
      }
      goto L_0897DA20;
    }
L_0897DA20:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DBB0;
      }
      goto L_0897DA28;
    }
L_0897DA28:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x0897DA38u);
    // nop
    ctx.pc = 0x08B0DC24u;
    return;
L_0897DA38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897DBA0;
      }
      goto L_0897DA40;
    }
L_0897DA40:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11196));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DA64;
      }
      goto L_0897DA58;
    }
L_0897DA58:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DAB8;
      }
      goto L_0897DA64;
    }
L_0897DA64:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DA9C;
      }
      goto L_0897DA74;
    }
L_0897DA74:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897DA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0897DA80u) goto L_0897DA80;
    return;
L_0897DA80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DA94;
      }
      goto L_0897DA88;
    }
L_0897DA88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897DA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0897DA94u) goto L_0897DA94;
    return;
L_0897DA94:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0897DA9C;
L_0897DA9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11196));
    ctx.set_gpr(31, 0x0897DAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0897DAB4u) goto L_0897DAB4;
    return;
L_0897DAB4:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0897DAB8;
L_0897DAB8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DADC;
      }
      goto L_0897DAC8;
    }
L_0897DAC8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0897DAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DAD4u) goto L_0897DAD4;
    return;
L_0897DAD4:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0897DADC;
L_0897DADC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DAFC;
      }
      goto L_0897DAE4;
    }
L_0897DAE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0897DAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DAF0u) goto L_0897DAF0;
    return;
L_0897DAF0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897DAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0897DAFCu) goto L_0897DAFC;
    return;
L_0897DAFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DB20;
      }
      goto L_0897DB0C;
    }
L_0897DB0C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0897DB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DB18u) goto L_0897DB18;
    return;
L_0897DB18:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0897DB20;
L_0897DB20:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DB38;
      }
      goto L_0897DB28;
    }
L_0897DB28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0897DB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0897DB38u) goto L_0897DB38;
    return;
L_0897DB38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DB6C;
      }
      goto L_0897DB50;
    }
L_0897DB50:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DB6C;
      }
      goto L_0897DB68;
    }
L_0897DB68:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0897DB6C;
L_0897DB6C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DB98;
      }
      goto L_0897DB74;
    }
L_0897DB74:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DB98;
      }
      goto L_0897DB8C;
    }
L_0897DB8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897DB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DB98u) goto L_0897DB98;
    return;
L_0897DB98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E030;
      }
      goto L_0897DBA0;
    }
L_0897DBA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DBC4;
      }
      goto L_0897DBB0;
    }
L_0897DBB0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0897DBC0u);
    // nop
    goto L_0897E05C;
L_0897DBC0:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    goto L_0897DBC4;
L_0897DBC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0897DBCC;
L_0897DBCC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E030;
      }
      goto L_0897DBD8;
    }
L_0897DBD8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897DBF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897DBF0u) goto L_0897DBF0;
    return;
L_0897DBF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DC60;
      }
      goto L_0897DBF8;
    }
L_0897DBF8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897DC1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897DC1Cu) goto L_0897DC1C;
    return;
L_0897DC1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897DC44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897DC44u) goto L_0897DC44;
    return;
L_0897DC44:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897DC60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897DC60u) goto L_0897DC60;
    return;
L_0897DC60:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0897DC70u);
    // nop
    ctx.pc = 0x08B0DC84u;
    return;
L_0897DC70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DD68;
      }
      goto L_0897DC78;
    }
L_0897DC78:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DCA0;
      }
      goto L_0897DC84;
    }
L_0897DC84:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0897DC98u);
    // nop
    goto L_0897E05C;
L_0897DC98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E030;
      }
      goto L_0897DCA0;
    }
L_0897DCA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DCF4;
      }
      goto L_0897DCAC;
    }
L_0897DCAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(31, 0x0897DCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 527u, 0x0881E2E0u>(ctx, &aot_mem) && ctx.pc == 0x0897DCD4u) goto L_0897DCD4;
    return;
L_0897DCD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0897DCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0897DCECu) goto L_0897DCEC;
    return;
L_0897DCEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DCFC;
      }
      goto L_0897DCF4;
    }
L_0897DCF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0897DCFC;
L_0897DCFC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897DD58;
      }
      goto L_0897DD3C;
    }
L_0897DD3C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897DD58;
      }
      goto L_0897DD44;
    }
L_0897DD44:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E030;
      }
      goto L_0897DD58;
    }
L_0897DD58:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E030;
      }
      goto L_0897DD68;
    }
L_0897DD68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897E030;
      }
      goto L_0897DD70;
    }
L_0897DD70:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11232));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DD9C;
      }
      goto L_0897DD90;
    }
L_0897DD90:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DDF0;
      }
      goto L_0897DD9C;
    }
L_0897DD9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DDD4;
      }
      goto L_0897DDAC;
    }
L_0897DDAC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897DDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0897DDB8u) goto L_0897DDB8;
    return;
L_0897DDB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DDCC;
      }
      goto L_0897DDC0;
    }
L_0897DDC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897DDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0897DDCCu) goto L_0897DDCC;
    return;
L_0897DDCC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0897DDD4;
L_0897DDD4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11232));
    ctx.set_gpr(31, 0x0897DDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0897DDECu) goto L_0897DDEC;
    return;
L_0897DDEC:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0897DDF0;
L_0897DDF0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DE14;
      }
      goto L_0897DE00;
    }
L_0897DE00:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0897DE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DE0Cu) goto L_0897DE0C;
    return;
L_0897DE0C:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0897DE14;
L_0897DE14:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DE34;
      }
      goto L_0897DE1C;
    }
L_0897DE1C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0897DE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DE28u) goto L_0897DE28;
    return;
L_0897DE28:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897DE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0897DE34u) goto L_0897DE34;
    return;
L_0897DE34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DE58;
      }
      goto L_0897DE44;
    }
L_0897DE44:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0897DE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DE50u) goto L_0897DE50;
    return;
L_0897DE50:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0897DE58;
L_0897DE58:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DE70;
      }
      goto L_0897DE60;
    }
L_0897DE60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0897DE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0897DE70u) goto L_0897DE70;
    return;
L_0897DE70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DEA4;
      }
      goto L_0897DE88;
    }
L_0897DE88:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DEA4;
      }
      goto L_0897DEA0;
    }
L_0897DEA0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0897DEA4;
L_0897DEA4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E030;
      }
      goto L_0897DEAC;
    }
L_0897DEAC:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E030;
      }
      goto L_0897DEC4;
    }
L_0897DEC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897DED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DED0u) goto L_0897DED0;
    return;
L_0897DED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E030;
      }
      goto L_0897DED8;
    }
L_0897DED8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11268));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DEFC;
      }
      goto L_0897DEF0;
    }
L_0897DEF0:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DF50;
      }
      goto L_0897DEFC;
    }
L_0897DEFC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897DF34;
      }
      goto L_0897DF0C;
    }
L_0897DF0C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897DF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0897DF18u) goto L_0897DF18;
    return;
L_0897DF18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DF2C;
      }
      goto L_0897DF20;
    }
L_0897DF20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897DF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0897DF2Cu) goto L_0897DF2C;
    return;
L_0897DF2C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0897DF34;
L_0897DF34:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11268));
    ctx.set_gpr(31, 0x0897DF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0897DF4Cu) goto L_0897DF4C;
    return;
L_0897DF4C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0897DF50;
L_0897DF50:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DF74;
      }
      goto L_0897DF60;
    }
L_0897DF60:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x0897DF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DF6Cu) goto L_0897DF6C;
    return;
L_0897DF6C:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0897DF74;
L_0897DF74:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DF94;
      }
      goto L_0897DF7C;
    }
L_0897DF7C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x0897DF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DF88u) goto L_0897DF88;
    return;
L_0897DF88:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897DF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0897DF94u) goto L_0897DF94;
    return;
L_0897DF94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DFB8;
      }
      goto L_0897DFA4;
    }
L_0897DFA4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0897DFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DFB0u) goto L_0897DFB0;
    return;
L_0897DFB0:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0897DFB8;
L_0897DFB8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DFD0;
      }
      goto L_0897DFC0;
    }
L_0897DFC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0897DFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0897DFD0u) goto L_0897DFD0;
    return;
L_0897DFD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E004;
      }
      goto L_0897DFE8;
    }
L_0897DFE8:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E004;
      }
      goto L_0897E000;
    }
L_0897E000:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0897E004;
L_0897E004:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E030;
      }
      goto L_0897E00C;
    }
L_0897E00C:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E030;
      }
      goto L_0897E024;
    }
L_0897E024:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897E030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E030u) goto L_0897E030;
    return;
L_0897E030:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897E05C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897E0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 527u, 0x0881E2E0u>(ctx, &aot_mem) && ctx.pc == 0x0897E0A8u) goto L_0897E0A8;
    return;
L_0897E0A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0897E0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 607u, 0x08903088u>(ctx, &aot_mem) && ctx.pc == 0x0897E0BCu) goto L_0897E0BC;
    return;
L_0897E0BC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897E0D0u);
    // nop
    ctx.pc = 0x08B0DC3Cu;
    return;
L_0897E0D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897E0E8;
      }
      goto L_0897E0D8;
    }
L_0897E0D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E244;
      }
      goto L_0897E0E8;
    }
L_0897E0E8:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11292));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E110;
      }
      goto L_0897E104;
    }
L_0897E104:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E164;
      }
      goto L_0897E110;
    }
L_0897E110:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E148;
      }
      goto L_0897E120;
    }
L_0897E120:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897E12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0897E12Cu) goto L_0897E12C;
    return;
L_0897E12C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E140;
      }
      goto L_0897E134;
    }
L_0897E134:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897E140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0897E140u) goto L_0897E140;
    return;
L_0897E140:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0897E148;
L_0897E148:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11292));
    ctx.set_gpr(31, 0x0897E160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0897E160u) goto L_0897E160;
    return;
L_0897E160:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0897E164;
L_0897E164:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E188;
      }
      goto L_0897E174;
    }
L_0897E174:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0897E180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E180u) goto L_0897E180;
    return;
L_0897E180:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0897E188;
L_0897E188:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E1A8;
      }
      goto L_0897E190;
    }
L_0897E190:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0897E19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E19Cu) goto L_0897E19C;
    return;
L_0897E19C:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897E1A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0897E1A8u) goto L_0897E1A8;
    return;
L_0897E1A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E1CC;
      }
      goto L_0897E1B8;
    }
L_0897E1B8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0897E1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E1C4u) goto L_0897E1C4;
    return;
L_0897E1C4:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0897E1CC;
L_0897E1CC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E1E4;
      }
      goto L_0897E1D4;
    }
L_0897E1D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0897E1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0897E1E4u) goto L_0897E1E4;
    return;
L_0897E1E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E218;
      }
      goto L_0897E1FC;
    }
L_0897E1FC:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E218;
      }
      goto L_0897E214;
    }
L_0897E214:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0897E218;
L_0897E218:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E244;
      }
      goto L_0897E220;
    }
L_0897E220:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E244;
      }
      goto L_0897E238;
    }
L_0897E238:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897E244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E244u) goto L_0897E244;
    return;
L_0897E244:
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
L_0897E264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897E2B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E2B4u) goto L_0897E2B4;
    return;
L_0897E2B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E898;
      }
      goto L_0897E2BC;
    }
L_0897E2BC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x0897E2D8u);
    // nop
    ctx.pc = 0x08B0DC7Cu;
    return;
L_0897E2D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897E73C;
      }
      goto L_0897E2E0;
    }
L_0897E2E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0897E2F4u);
    // nop
    ctx.pc = 0x08B0DC04u;
    return;
L_0897E2F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897E724;
      }
      goto L_0897E2FC;
    }
L_0897E2FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, 32770u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] | 809u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897E47C;
      }
      goto L_0897E314;
    }
L_0897E314:
    ctx.set_gpr(3, ctx.gpr[3] | 803u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897E328;
      }
      goto L_0897E320;
    }
L_0897E320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E5D0;
      }
      goto L_0897E328;
    }
L_0897E328:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11328));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E344;
      }
      goto L_0897E338;
    }
L_0897E338:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E394;
      }
      goto L_0897E344;
    }
L_0897E344:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E37C;
      }
      goto L_0897E354;
    }
L_0897E354:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897E360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0897E360u) goto L_0897E360;
    return;
L_0897E360:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E374;
      }
      goto L_0897E368;
    }
L_0897E368:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897E374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0897E374u) goto L_0897E374;
    return;
L_0897E374:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0897E37C;
L_0897E37C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11328));
    ctx.set_gpr(31, 0x0897E394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0897E394u) goto L_0897E394;
    return;
L_0897E394:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E3B8;
      }
      goto L_0897E3A4;
    }
L_0897E3A4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0897E3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E3B0u) goto L_0897E3B0;
    return;
L_0897E3B0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897E3B8;
L_0897E3B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E3D8;
      }
      goto L_0897E3C0;
    }
L_0897E3C0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0897E3CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E3CCu) goto L_0897E3CC;
    return;
L_0897E3CC:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897E3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0897E3D8u) goto L_0897E3D8;
    return;
L_0897E3D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E3FC;
      }
      goto L_0897E3E8;
    }
L_0897E3E8:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0897E3F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E3F4u) goto L_0897E3F4;
    return;
L_0897E3F4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897E3FC;
L_0897E3FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E414;
      }
      goto L_0897E404;
    }
L_0897E404:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0897E414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0897E414u) goto L_0897E414;
    return;
L_0897E414:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E448;
      }
      goto L_0897E42C;
    }
L_0897E42C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E448;
      }
      goto L_0897E444;
    }
L_0897E444:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0897E448;
L_0897E448:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E450;
    }
L_0897E450:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E468;
    }
L_0897E468:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897E474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E474u) goto L_0897E474;
    return;
L_0897E474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E47C;
    }
L_0897E47C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11356));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E498;
      }
      goto L_0897E48C;
    }
L_0897E48C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E4E8;
      }
      goto L_0897E498;
    }
L_0897E498:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E4D0;
      }
      goto L_0897E4A8;
    }
L_0897E4A8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897E4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0897E4B4u) goto L_0897E4B4;
    return;
L_0897E4B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E4C8;
      }
      goto L_0897E4BC;
    }
L_0897E4BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897E4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0897E4C8u) goto L_0897E4C8;
    return;
L_0897E4C8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0897E4D0;
L_0897E4D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11356));
    ctx.set_gpr(31, 0x0897E4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0897E4E8u) goto L_0897E4E8;
    return;
L_0897E4E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E50C;
      }
      goto L_0897E4F8;
    }
L_0897E4F8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0897E504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E504u) goto L_0897E504;
    return;
L_0897E504:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897E50C;
L_0897E50C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E52C;
      }
      goto L_0897E514;
    }
L_0897E514:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0897E520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E520u) goto L_0897E520;
    return;
L_0897E520:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897E52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0897E52Cu) goto L_0897E52C;
    return;
L_0897E52C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E550;
      }
      goto L_0897E53C;
    }
L_0897E53C:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0897E548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E548u) goto L_0897E548;
    return;
L_0897E548:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897E550;
L_0897E550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E568;
      }
      goto L_0897E558;
    }
L_0897E558:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0897E568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0897E568u) goto L_0897E568;
    return;
L_0897E568:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E59C;
      }
      goto L_0897E580;
    }
L_0897E580:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E59C;
      }
      goto L_0897E598;
    }
L_0897E598:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0897E59C;
L_0897E59C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E5A4;
    }
L_0897E5A4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E5BC;
    }
L_0897E5BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897E5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E5C8u) goto L_0897E5C8;
    return;
L_0897E5C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E5D0;
    }
L_0897E5D0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11400));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E5EC;
      }
      goto L_0897E5E0;
    }
L_0897E5E0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E63C;
      }
      goto L_0897E5EC;
    }
L_0897E5EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E624;
      }
      goto L_0897E5FC;
    }
L_0897E5FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897E608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0897E608u) goto L_0897E608;
    return;
L_0897E608:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E61C;
      }
      goto L_0897E610;
    }
L_0897E610:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897E61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0897E61Cu) goto L_0897E61C;
    return;
L_0897E61C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0897E624;
L_0897E624:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11400));
    ctx.set_gpr(31, 0x0897E63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0897E63Cu) goto L_0897E63C;
    return;
L_0897E63C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E660;
      }
      goto L_0897E64C;
    }
L_0897E64C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x0897E658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E658u) goto L_0897E658;
    return;
L_0897E658:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897E660;
L_0897E660:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E680;
      }
      goto L_0897E668;
    }
L_0897E668:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x0897E674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E674u) goto L_0897E674;
    return;
L_0897E674:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897E680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0897E680u) goto L_0897E680;
    return;
L_0897E680:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E6A4;
      }
      goto L_0897E690;
    }
L_0897E690:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0897E69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E69Cu) goto L_0897E69C;
    return;
L_0897E69C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897E6A4;
L_0897E6A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E6BC;
      }
      goto L_0897E6AC;
    }
L_0897E6AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0897E6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0897E6BCu) goto L_0897E6BC;
    return;
L_0897E6BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E6F0;
      }
      goto L_0897E6D4;
    }
L_0897E6D4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E6F0;
      }
      goto L_0897E6EC;
    }
L_0897E6EC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0897E6F0;
L_0897E6F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E6F8;
    }
L_0897E6F8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E710;
    }
L_0897E710:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897E71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E71Cu) goto L_0897E71C;
    return;
L_0897E71C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E724;
    }
L_0897E724:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E73C;
    }
L_0897E73C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11440));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E760;
      }
      goto L_0897E754;
    }
L_0897E754:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E7B0;
      }
      goto L_0897E760;
    }
L_0897E760:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E798;
      }
      goto L_0897E770;
    }
L_0897E770:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897E77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0897E77Cu) goto L_0897E77C;
    return;
L_0897E77C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E790;
      }
      goto L_0897E784;
    }
L_0897E784:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897E790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0897E790u) goto L_0897E790;
    return;
L_0897E790:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0897E798;
L_0897E798:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11440));
    ctx.set_gpr(31, 0x0897E7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0897E7B0u) goto L_0897E7B0;
    return;
L_0897E7B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E7D4;
      }
      goto L_0897E7C0;
    }
L_0897E7C0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0897E7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E7CCu) goto L_0897E7CC;
    return;
L_0897E7CC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897E7D4;
L_0897E7D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E7F4;
      }
      goto L_0897E7DC;
    }
L_0897E7DC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0897E7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E7E8u) goto L_0897E7E8;
    return;
L_0897E7E8:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897E7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0897E7F4u) goto L_0897E7F4;
    return;
L_0897E7F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E818;
      }
      goto L_0897E804;
    }
L_0897E804:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0897E810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E810u) goto L_0897E810;
    return;
L_0897E810:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897E818;
L_0897E818:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E830;
      }
      goto L_0897E820;
    }
L_0897E820:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0897E830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0897E830u) goto L_0897E830;
    return;
L_0897E830:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E864;
      }
      goto L_0897E848;
    }
L_0897E848:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E864;
      }
      goto L_0897E860;
    }
L_0897E860:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0897E864;
L_0897E864:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E86C;
    }
L_0897E86C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E884;
    }
L_0897E884:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897E890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E890u) goto L_0897E890;
    return;
L_0897E890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E898;
    }
L_0897E898:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11472));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E8BC;
      }
      goto L_0897E8B0;
    }
L_0897E8B0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E90C;
      }
      goto L_0897E8BC;
    }
L_0897E8BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E8F4;
      }
      goto L_0897E8CC;
    }
L_0897E8CC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897E8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0897E8D8u) goto L_0897E8D8;
    return;
L_0897E8D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E8EC;
      }
      goto L_0897E8E0;
    }
L_0897E8E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897E8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0897E8ECu) goto L_0897E8EC;
    return;
L_0897E8EC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0897E8F4;
L_0897E8F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11472));
    ctx.set_gpr(31, 0x0897E90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0897E90Cu) goto L_0897E90C;
    return;
L_0897E90C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E930;
      }
      goto L_0897E91C;
    }
L_0897E91C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0897E928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E928u) goto L_0897E928;
    return;
L_0897E928:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897E930;
L_0897E930:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E950;
      }
      goto L_0897E938;
    }
L_0897E938:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0897E944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E944u) goto L_0897E944;
    return;
L_0897E944:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0897E950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0897E950u) goto L_0897E950;
    return;
L_0897E950:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E974;
      }
      goto L_0897E960;
    }
L_0897E960:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0897E96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E96Cu) goto L_0897E96C;
    return;
L_0897E96C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897E974;
L_0897E974:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E98C;
      }
      goto L_0897E97C;
    }
L_0897E97C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0897E98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0897E98Cu) goto L_0897E98C;
    return;
L_0897E98C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9C0;
      }
      goto L_0897E9A4;
    }
L_0897E9A4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9C0;
      }
      goto L_0897E9BC;
    }
L_0897E9BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0897E9C0;
L_0897E9C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E9C8;
    }
L_0897E9C8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9EC;
      }
      goto L_0897E9E0;
    }
L_0897E9E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897E9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E9ECu) goto L_0897E9EC;
    return;
L_0897E9EC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EA1C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EA2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897EAC4;
      }
      goto L_0897EA54;
    }
L_0897EA54:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EAC4;
      }
      goto L_0897EA60;
    }
L_0897EA60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EAC4;
      }
      goto L_0897EA70;
    }
L_0897EA70:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897EAC4;
      }
      goto L_0897EA98;
    }
L_0897EA98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0897EAA8u);
    // nop
    ctx.pc = 0x08B0DC5Cu;
    return;
L_0897EAA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EAC0;
      }
      goto L_0897EAB0;
    }
L_0897EAB0:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EAC4;
      }
      goto L_0897EAC0;
    }
L_0897EAC0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0897EAC4;
L_0897EAC4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0897EAE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0897EAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 877u, 0x08983340u>(ctx, &aot_mem) && ctx.pc == 0x0897EAF8u) goto L_0897EAF8;
    return;
L_0897EAF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EB08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897EB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EB34u) goto L_0897EB34;
    return;
L_0897EB34:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897EB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 758u, 0x08982C1Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EB54u) goto L_0897EB54;
    return;
L_0897EB54:
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
L_0897EB6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897EB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EB98u) goto L_0897EB98;
    return;
L_0897EB98:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897EBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 758u, 0x08982C1Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EBB8u) goto L_0897EBB8;
    return;
L_0897EBB8:
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
L_0897EBD0:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EBDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897EBF4;
      }
      goto L_0897EBF0;
    }
L_0897EBF0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_0897EBF4;
L_0897EBF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ECA0;
      }
      goto L_0897EC08;
    }
L_0897EC08:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-32484));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897EC24:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32516));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ECAC;
      }
      goto L_0897EC38;
    }
L_0897EC38:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32500));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ECAC;
      }
      goto L_0897EC48;
    }
L_0897EC48:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32508));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ECAC;
      }
      goto L_0897EC5C;
    }
L_0897EC5C:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32492));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ECAC;
      }
      goto L_0897EC6C;
    }
L_0897EC6C:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32504));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ECAC;
      }
      goto L_0897EC80;
    }
L_0897EC80:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32488));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ECAC;
      }
      goto L_0897EC90;
    }
L_0897EC90:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32496));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ECAC;
      }
      goto L_0897ECA0;
    }
L_0897ECA0:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32512));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    goto L_0897ECAC;
L_0897ECAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897ECC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897ECC8u) goto L_0897ECC8;
    return;
L_0897ECC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897ECDC;
      }
      goto L_0897ECD0;
    }
L_0897ECD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ECE0;
      }
      goto L_0897ECDC;
    }
L_0897ECDC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0897ECE0;
L_0897ECE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ECF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ED64;
      }
      goto L_0897ED0C;
    }
L_0897ED0C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30632)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30636)));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30632), ctx.gpr[5]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30636), ctx.gpr[3]);
    ctx.set_gpr(31, 0x0897ED44u);
    // nop
    ctx.pc = 0x08B0DC34u;
    return;
L_0897ED44:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ED64;
      }
      goto L_0897ED54;
    }
L_0897ED54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897ED60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0897ED60u) goto L_0897ED60;
    return;
L_0897ED60:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    goto L_0897ED64;
L_0897ED64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ED78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EDBC;
      }
      goto L_0897EDB0;
    }
L_0897EDB0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F1A4;
      }
      goto L_0897EDBC;
    }
L_0897EDBC:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(512));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EDE4;
      }
      goto L_0897EDCC;
    }
L_0897EDCC:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EDCC;
      }
      goto L_0897EDE4;
    }
L_0897EDE4:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897EDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 247u, 0x0891D1E8u>(ctx, &aot_mem) && ctx.pc == 0x0897EDF4u) goto L_0897EDF4;
    return;
L_0897EDF4:
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897EE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 255u, 0x0891D24Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EE04u) goto L_0897EE04;
    return;
L_0897EE04:
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x0897EE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 305u, 0x0891D534u>(ctx, &aot_mem) && ctx.pc == 0x0897EE10u) goto L_0897EE10;
    return;
L_0897EE10:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897EE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 228u, 0x0891D098u>(ctx, &aot_mem) && ctx.pc == 0x0897EE24u) goto L_0897EE24;
    return;
L_0897EE24:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32500));
    ctx.set_gpr(31, 0x0897EE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0897EE3Cu) goto L_0897EE3C;
    return;
L_0897EE3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EE60;
      }
      goto L_0897EE44;
    }
L_0897EE44:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32516));
    ctx.set_gpr(31, 0x0897EE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0897EE58u) goto L_0897EE58;
    return;
L_0897EE58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EE6C;
      }
      goto L_0897EE60;
    }
L_0897EE60:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1538));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EF30;
      }
      goto L_0897EE6C;
    }
L_0897EE6C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32496));
    ctx.set_gpr(31, 0x0897EE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0897EE80u) goto L_0897EE80;
    return;
L_0897EE80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EEA4;
      }
      goto L_0897EE88;
    }
L_0897EE88:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32512));
    ctx.set_gpr(31, 0x0897EE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0897EE9Cu) goto L_0897EE9C;
    return;
L_0897EE9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EEB0;
      }
      goto L_0897EEA4;
    }
L_0897EEA4:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EF30;
      }
      goto L_0897EEB0;
    }
L_0897EEB0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32492));
    ctx.set_gpr(31, 0x0897EEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0897EEC4u) goto L_0897EEC4;
    return;
L_0897EEC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EEE8;
      }
      goto L_0897EECC;
    }
L_0897EECC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32508));
    ctx.set_gpr(31, 0x0897EEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0897EEE0u) goto L_0897EEE0;
    return;
L_0897EEE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EEF4;
      }
      goto L_0897EEE8;
    }
L_0897EEE8:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(770));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EF30;
      }
      goto L_0897EEF4;
    }
L_0897EEF4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32488));
    ctx.set_gpr(31, 0x0897EF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0897EF08u) goto L_0897EF08;
    return;
L_0897EF08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EF2C;
      }
      goto L_0897EF10;
    }
L_0897EF10:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32504));
    ctx.set_gpr(31, 0x0897EF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0897EF24u) goto L_0897EF24;
    return;
L_0897EF24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EF30;
      }
      goto L_0897EF2C;
    }
L_0897EF2C:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1539));
    goto L_0897EF30;
L_0897EF30:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32500));
    ctx.set_gpr(31, 0x0897EF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0897EF44u) goto L_0897EF44;
    return;
L_0897EF44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EFA0;
      }
      goto L_0897EF4C;
    }
L_0897EF4C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32496));
    ctx.set_gpr(31, 0x0897EF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0897EF60u) goto L_0897EF60;
    return;
L_0897EF60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EFA0;
      }
      goto L_0897EF68;
    }
L_0897EF68:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32492));
    ctx.set_gpr(31, 0x0897EF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0897EF7Cu) goto L_0897EF7C;
    return;
L_0897EF7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EFA0;
      }
      goto L_0897EF84;
    }
L_0897EF84:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32488));
    ctx.set_gpr(31, 0x0897EF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0897EF98u) goto L_0897EF98;
    return;
L_0897EF98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EFB0;
      }
      goto L_0897EFA0;
    }
L_0897EFA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EFB4;
      }
      goto L_0897EFB0;
    }
L_0897EFB0:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    goto L_0897EFB4;
L_0897EFB4:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F18C;
      }
      goto L_0897EFC0;
    }
L_0897EFC0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EFD8;
      }
      goto L_0897EFC8;
    }
L_0897EFC8:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F010;
      }
      goto L_0897EFD8;
    }
L_0897EFD8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EFF0;
      }
      goto L_0897EFE0;
    }
L_0897EFE0:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F010;
      }
      goto L_0897EFF0;
    }
L_0897EFF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(31, 0x0897F004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 307u, 0x0891D564u>(ctx, &aot_mem) && ctx.pc == 0x0897F004u) goto L_0897F004;
    return;
L_0897F004:
    ctx.set_gpr(21, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F188;
      }
      goto L_0897F010;
    }
L_0897F010:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897F020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0897F020u) goto L_0897F020;
    return;
L_0897F020:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897F038u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F038u) goto L_0897F038;
    return;
L_0897F038:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8703));
    ctx.set_gpr(31, 0x0897F04Cu);
    // nop
    ctx.pc = 0x08B0DC74u;
    return;
L_0897F04C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897F064;
      }
      goto L_0897F054;
    }
L_0897F054:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F068;
      }
      goto L_0897F064;
    }
L_0897F064:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_0897F068;
L_0897F068:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897F188;
      }
      goto L_0897F078;
    }
L_0897F078:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0897F094u);
    // nop
    ctx.pc = 0x08B0DC7Cu;
    return;
L_0897F094:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x0897F0B0u);
    // nop
    ctx.pc = 0x08B0DC7Cu;
    return;
L_0897F0B0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F124;
      }
      goto L_0897F0C0;
    }
L_0897F0C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x0897F0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 12u, 0x08948114u>(ctx, &aot_mem) && ctx.pc == 0x0897F0D8u) goto L_0897F0D8;
    return;
L_0897F0D8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F10C;
      }
      goto L_0897F0F4;
    }
L_0897F0F4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897F10Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F10Cu) goto L_0897F10C;
    return;
L_0897F10C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897F124;
L_0897F124:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30632)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30636)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30632), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30636), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30640)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30644)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30640), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30644), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F1A4;
      }
      goto L_0897F188;
    }
L_0897F188:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0897F18C;
L_0897F18C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F1A0;
      }
      goto L_0897F194;
    }
L_0897F194:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897EFC0;
      }
      goto L_0897F1A0;
    }
L_0897F1A0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0897F1A4;
L_0897F1A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(560));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F1D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897F1E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F1E8u) goto L_0897F1E8;
    return;
L_0897F1E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F1F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F2E8;
      }
      goto L_0897F230;
    }
L_0897F230:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F254;
      }
      goto L_0897F250;
    }
L_0897F250:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0897F254;
L_0897F254:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897F26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0897F26Cu) goto L_0897F26C;
    return;
L_0897F26C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F310;
      }
      goto L_0897F284;
    }
L_0897F284:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897F2A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F2A0u) goto L_0897F2A0;
    return;
L_0897F2A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897F2C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F2C8u) goto L_0897F2C8;
    return;
L_0897F2C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897F2E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F2E8u) goto L_0897F2E8;
    return;
L_0897F2E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0897F300u);
    // nop
    ctx.pc = 0x08B0DC1Cu;
    return;
L_0897F300:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897F284;
      }
      goto L_0897F308;
    }
L_0897F308:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.lo);
    goto L_0897F310;
L_0897F310:
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
L_0897F334:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(31, 0x0897F358u);
    // nop
    ctx.pc = 0x08B0DC04u;
    return;
L_0897F358:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F374:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F380:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-624));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[11]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F3DC;
      }
      goto L_0897F3D0;
    }
L_0897F3D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F6E4;
      }
      goto L_0897F3DC;
    }
L_0897F3DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F3F8;
      }
      goto L_0897F3EC;
    }
L_0897F3EC:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F404;
      }
      goto L_0897F3F8;
    }
L_0897F3F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_0897F404;
L_0897F404:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.set_gpr(20, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F424;
      }
      goto L_0897F418;
    }
L_0897F418:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F6E4;
      }
      goto L_0897F424;
    }
L_0897F424:
    ctx.set_gpr(31, 0x0897F42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0897F42Cu) goto L_0897F42C;
    return;
L_0897F42C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F6D4;
      }
      goto L_0897F440;
    }
L_0897F440:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F624;
      }
      goto L_0897F450;
    }
L_0897F450:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0897F464;
      }
      goto L_0897F458;
    }
L_0897F458:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F624;
      }
      goto L_0897F464;
    }
L_0897F464:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897F494;
      }
      goto L_0897F47C;
    }
L_0897F47C:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F624;
      }
      goto L_0897F494;
    }
L_0897F494:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897F4D4;
      }
      goto L_0897F49C;
    }
L_0897F49C:
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897F4D4;
      }
      goto L_0897F4AC;
    }
L_0897F4AC:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F624;
      }
      goto L_0897F4D4;
    }
L_0897F4D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F624;
      }
      goto L_0897F4E0;
    }
L_0897F4E0:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F508;
      }
      goto L_0897F4F8;
    }
L_0897F4F8:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0897F508;
L_0897F508:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x0897F518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F518u) goto L_0897F518;
    return;
L_0897F518:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F520;
    }
L_0897F520:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F538;
    }
L_0897F538:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(117));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F544;
    }
L_0897F544:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(111));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F550;
    }
L_0897F550:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(120));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F55C;
    }
L_0897F55C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(105));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F568;
    }
L_0897F568:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(110));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F574;
    }
L_0897F574:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(101));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F580;
    }
L_0897F580:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(102));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F58C;
    }
L_0897F58C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(103));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F598;
    }
L_0897F598:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(115));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F5A4;
    }
L_0897F5A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(83));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F5B0;
    }
L_0897F5B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(99));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F5BC;
    }
L_0897F5BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(67));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F5C8;
    }
L_0897F5C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(93));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F5D4;
    }
L_0897F5D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(112));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F5E8;
      }
      goto L_0897F5E0;
    }
L_0897F5E0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0897F4F8;
      }
      goto L_0897F5E8;
    }
L_0897F5E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x0897F5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F5FCu) goto L_0897F5FC;
    return;
L_0897F5FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F604;
    }
L_0897F604:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0897F620;
L_0897F620:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    goto L_0897F624;
L_0897F624:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F450;
      }
      goto L_0897F62C;
    }
L_0897F62C:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11448));
    ctx.set_gpr(31, 0x0897F648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0897F648u) goto L_0897F648;
    return;
L_0897F648:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897F68C;
      }
      goto L_0897F654;
    }
L_0897F654:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0897F674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0897F674u) goto L_0897F674;
    return;
L_0897F674:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F6D4;
      }
      goto L_0897F68C;
    }
L_0897F68C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0897F6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0897F6B4u) goto L_0897F6B4;
    return;
L_0897F6B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897F6E0;
      }
      goto L_0897F6C0;
    }
L_0897F6C0:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_0897F6D4;
L_0897F6D4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F440;
      }
      goto L_0897F6E0;
    }
L_0897F6E0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0897F6E4;
L_0897F6E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(624));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F710:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4136), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4152), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4156), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4160), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4164), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4168), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4172), ctx.gpr[11]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F758;
      }
      goto L_0897F74C;
    }
L_0897F74C:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F764;
      }
      goto L_0897F758;
    }
L_0897F758:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_0897F764;
L_0897F764:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(4176));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4136)));
    ctx.set_gpr(31, 0x0897F77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1u, 0x0881C004u>(ctx, &aot_mem) && ctx.pc == 0x0897F77Cu) goto L_0897F77C;
    return;
L_0897F77C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897F794u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F794u) goto L_0897F794;
    return;
L_0897F794:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4176));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F7A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F870;
      }
      goto L_0897F7C8;
    }
L_0897F7C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F834;
      }
      goto L_0897F7D0;
    }
L_0897F7D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897F7ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F7ECu) goto L_0897F7EC;
    return;
L_0897F7EC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31432)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897F814u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F814u) goto L_0897F814;
    return;
L_0897F814:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 51712u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897F834u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897F834u) goto L_0897F834;
    return;
L_0897F834:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0897F848u);
    // nop
    ctx.pc = 0x08B0DC1Cu;
    return;
L_0897F848:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897F7D0;
      }
      goto L_0897F850;
    }
L_0897F850:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F864;
      }
      goto L_0897F858;
    }
L_0897F858:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F868;
      }
      goto L_0897F864;
    }
L_0897F864:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0897F868;
L_0897F868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F8A0;
      }
      goto L_0897F870;
    }
L_0897F870:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897F88C;
      }
      goto L_0897F880;
    }
L_0897F880:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F8A0;
      }
      goto L_0897F88C;
    }
L_0897F88C:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    goto L_0897F8A0;
L_0897F8A0:
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
L_0897F8B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F8EC;
      }
      goto L_0897F8CC;
    }
L_0897F8CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0897F8E4u);
    // nop
    ctx.pc = 0x08B0DC7Cu;
    return;
L_0897F8E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F91C;
      }
      goto L_0897F8EC;
    }
L_0897F8EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897F918;
      }
      goto L_0897F8F8;
    }
L_0897F8F8:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F91C;
      }
      goto L_0897F918;
    }
L_0897F918:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0897F91C;
L_0897F91C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F92C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0897F954u);
    // nop
    ctx.pc = 0x08B0DC04u;
    return;
L_0897F954:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F964;
      }
      goto L_0897F95C;
    }
L_0897F95C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F968;
      }
      goto L_0897F964;
    }
L_0897F964:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    goto L_0897F968;
L_0897F968:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F980:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F994;
      }
      goto L_0897F988;
    }
L_0897F988:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FA78;
      }
      goto L_0897F994;
    }
L_0897F994:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F9AC;
      }
      goto L_0897F9A0;
    }
L_0897F9A0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FA78;
      }
      goto L_0897F9AC;
    }
L_0897F9AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F9CC;
      }
      goto L_0897F9C0;
    }
L_0897F9C0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FA78;
      }
      goto L_0897F9CC;
    }
L_0897F9CC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FA18;
      }
      goto L_0897F9D8;
    }
L_0897F9D8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897FA28;
      }
      goto L_0897F9F4;
    }
L_0897F9F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897FA28;
      }
      goto L_0897FA00;
    }
L_0897FA00:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    goto L_0897FA18;
L_0897FA18:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F9D8;
      }
      goto L_0897FA28;
    }
L_0897FA28:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0897FA6C;
      }
      goto L_0897FA44;
    }
L_0897FA44:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FA6C;
      }
      goto L_0897FA54;
    }
L_0897FA54:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    goto L_0897FA6C;
L_0897FA6C:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    goto L_0897FA78;
L_0897FA78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FA80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897FAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0897FAA4u) goto L_0897FAA4;
    return;
L_0897FAA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897FAB8u);
    // nop
    ctx.pc = 0x08B0DC04u;
    return;
L_0897FAB8:
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
L_0897FAD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FBBC;
      }
      goto L_0897FAF8;
    }
L_0897FAF8:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0897FB90;
      }
      goto L_0897FB04;
    }
L_0897FB04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897FB4C;
      }
      goto L_0897FB10;
    }
L_0897FB10:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FB20;
      }
      goto L_0897FB18;
    }
L_0897FB18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FBB0;
      }
      goto L_0897FB20;
    }
L_0897FB20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x0897FB38u);
    // nop
    ctx.pc = 0x08B0DC7Cu;
    return;
L_0897FB38:
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC5C;
      }
      goto L_0897FB4C;
    }
L_0897FB4C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897FB5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897FB5Cu) goto L_0897FB5C;
    return;
L_0897FB5C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0897FB78u);
    // nop
    ctx.pc = 0x08B0DC7Cu;
    return;
L_0897FB78:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[16] ^ ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC5C;
      }
      goto L_0897FB90;
    }
L_0897FB90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0897FBA4u);
    // nop
    ctx.pc = 0x08B0DC7Cu;
    return;
L_0897FBA4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC5C;
      }
      goto L_0897FBB0;
    }
L_0897FBB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC5C;
      }
      goto L_0897FBBC;
    }
L_0897FBBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897FC2C;
      }
      goto L_0897FBC8;
    }
L_0897FBC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897FC04;
      }
      goto L_0897FBD4;
    }
L_0897FBD4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FBE4;
      }
      goto L_0897FBDC;
    }
L_0897FBDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC4C;
      }
      goto L_0897FBE4;
    }
L_0897FBE4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC58;
      }
      goto L_0897FBF8;
    }
L_0897FBF8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC58;
      }
      goto L_0897FC04;
    }
L_0897FC04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC58;
      }
      goto L_0897FC20;
    }
L_0897FC20:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC58;
      }
      goto L_0897FC2C;
    }
L_0897FC2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897FC58;
      }
      goto L_0897FC40;
    }
L_0897FC40:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC58;
      }
      goto L_0897FC4C;
    }
L_0897FC4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC5C;
      }
      goto L_0897FC58;
    }
L_0897FC58:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0897FC5C;
L_0897FC5C:
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
L_0897FC78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FCAC;
      }
      goto L_0897FC8C;
    }
L_0897FC8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0897FCA4u);
    // nop
    ctx.pc = 0x08B0DC7Cu;
    return;
L_0897FCA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FCB0;
      }
      goto L_0897FCAC;
    }
L_0897FCAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    goto L_0897FCB0;
L_0897FCB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FCC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11568)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897FD18;
      }
      goto L_0897FCDC;
    }
L_0897FCDC:
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11500));
    ctx.set_gpr(31, 0x0897FCECu);
    // nop
    ctx.pc = 0x08B0DF9Cu;
    return;
L_0897FCEC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0897FCF8u);
    // nop
    ctx.pc = 0x08B0DF8Cu;
    return;
L_0897FCF8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0897FD04u);
    // nop
    goto L_0897FFAC;
L_0897FD04:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31732), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FD30;
      }
      goto L_0897FD18;
    }
L_0897FD18:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0897FD24u);
    // nop
    goto L_0897FFAC;
L_0897FD24:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31732), ctx.gpr[4]);
    goto L_0897FD30;
L_0897FD30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FD40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0897FD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0897FD68u) goto L_0897FD68;
    return;
L_0897FD68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897FD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0897FD74u) goto L_0897FD74;
    return;
L_0897FD74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897FD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x0897FD80u) goto L_0897FD80;
    return;
L_0897FD80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31728)));
    ctx.set_gpr(31, 0x0897FD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x0897FD98u) goto L_0897FD98;
    return;
L_0897FD98:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0897FDACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0897FDACu) goto L_0897FDAC;
    return;
L_0897FDAC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897FDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x0897FDC4u) goto L_0897FDC4;
    return;
L_0897FDC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FE00;
      }
      goto L_0897FDD8;
    }
L_0897FDD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897FDFC;
      }
      goto L_0897FDF4;
    }
L_0897FDF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(47));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0897FDFC;
L_0897FDFC:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0897FE00;
L_0897FE00:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FDD8;
      }
      goto L_0897FE0C;
    }
L_0897FE0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FE24;
      }
      goto L_0897FE1C;
    }
L_0897FE1C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0897FE24;
L_0897FE24:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FE38;
      }
      goto L_0897FE2C;
    }
L_0897FE2C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FE84;
      }
      goto L_0897FE38;
    }
L_0897FE38:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FE70;
      }
      goto L_0897FE48;
    }
L_0897FE48:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0897FE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0897FE54u) goto L_0897FE54;
    return;
L_0897FE54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FE68;
      }
      goto L_0897FE5C;
    }
L_0897FE5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0897FE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0897FE68u) goto L_0897FE68;
    return;
L_0897FE68:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0897FE70;
L_0897FE70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0897FE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0897FE84u) goto L_0897FE84;
    return;
L_0897FE84:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FEB0;
      }
      goto L_0897FE94;
    }
L_0897FE94:
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FEB0;
      }
      goto L_0897FEAC;
    }
L_0897FEAC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0897FEB0;
L_0897FEB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FEC4;
      }
      goto L_0897FEB8;
    }
L_0897FEB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_0897FEC4;
L_0897FEC4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FEF0;
      }
      goto L_0897FED4;
    }
L_0897FED4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FEF0;
      }
      goto L_0897FEEC;
    }
L_0897FEEC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0897FEF0;
L_0897FEF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FF1C;
      }
      goto L_0897FEF8;
    }
L_0897FEF8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FF1C;
      }
      goto L_0897FF10;
    }
L_0897FF10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897FF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897FF1Cu) goto L_0897FF1C;
    return;
L_0897FF1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FF48;
      }
      goto L_0897FF38;
    }
L_0897FF38:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0897FF48;
L_0897FF48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FF74;
      }
      goto L_0897FF50;
    }
L_0897FF50:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FF74;
      }
      goto L_0897FF68;
    }
L_0897FF68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0897FF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897FF74u) goto L_0897FF74;
    return;
L_0897FF74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FF88;
      }
      goto L_0897FF80;
    }
L_0897FF80:
    ctx.set_gpr(31, 0x0897FF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0897FF88u) goto L_0897FF88;
    return;
L_0897FF88:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0897FFAC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FFE0;
      }
      goto L_0897FFB4;
    }
L_0897FFB4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31732)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11548));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31728), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FFFC;
      }
      goto L_0897FFE0;
    }
L_0897FFE0:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11548));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31728), ctx.gpr[4]);
    goto L_0897FFFC;
L_0897FFFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0094(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0094_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_94(Runtime &runtime) {
    runtime.register_generated_unit(94u, 0x0897C000u, 16384u, &recomp_unit_0094, &recomp_unit_0094_entry);
    runtime.register_function(0x0897C000u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C00Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C020u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C02Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C034u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C038u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C044u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C050u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C054u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C060u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C06Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C080u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C08Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C094u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C0C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C0E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C0F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C0FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C114u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C11Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C134u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C13Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C154u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C15Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C174u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C17Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C194u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C19Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C214u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C21Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C234u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C23Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C254u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C25Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C274u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C27Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C294u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C29Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C2B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C2BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C2D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C2DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C2F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C2FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C314u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C31Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C334u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C33Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C354u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C35Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C374u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C37Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C394u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C39Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C40Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C424u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C43Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C448u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C450u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C468u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C488u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C514u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C528u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C540u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C54Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C564u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C578u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C594u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C60Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C614u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C620u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C62Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C644u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C654u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C65Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C674u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C67Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C694u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C69Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C700u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C70Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C724u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C74Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C758u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C800u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C814u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C820u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C828u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C860u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C868u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C874u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C924u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C92Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C950u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C960u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C96Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C974u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C980u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CABCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCD0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CECCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CED8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D000u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D020u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D040u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D058u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D068u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D080u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D090u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D09Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D114u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D124u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D13Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D148u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D20Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D220u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D224u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D234u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D254u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D294u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D318u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D330u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D338u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D348u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D360u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D368u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D374u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D37Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D380u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D394u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D404u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D420u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D434u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D450u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D458u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D474u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D484u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D508u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D518u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D524u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D52Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D538u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D540u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D558u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D568u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D574u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D57Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D584u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D590u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D59Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D608u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D60Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D614u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D62Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D638u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D654u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D688u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D690u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D708u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D714u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D71Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D728u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D730u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D748u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D758u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D764u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D76Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D774u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D780u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D78Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D79Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D804u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D81Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D828u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D830u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D850u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D85Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D86Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D878u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D880u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D88Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D894u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D900u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D90Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D914u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D91Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D92Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D944u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D95Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D960u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D968u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D980u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D98Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DADCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DED0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DED8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFD0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E000u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E004u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E00Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E024u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E030u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E05Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E0A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E0BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E0D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E0D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E0E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E104u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E110u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E120u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E12Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E134u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E140u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E148u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E160u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E164u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E174u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E180u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E188u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E190u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E19Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E214u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E218u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E220u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E238u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E244u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E264u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E314u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E320u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E328u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E338u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E344u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E354u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E360u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E368u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E374u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E37Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E394u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E404u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E414u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E42Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E444u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E448u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E450u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E468u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E474u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E47Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E48Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E498u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E504u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E50Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E514u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E520u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E52Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E53Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E548u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E550u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E558u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E568u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E580u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E598u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E59Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E608u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E610u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E61Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E624u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E63Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E64Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E658u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E660u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E668u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E674u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E680u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E690u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E69Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E710u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E71Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E724u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E73Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E754u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E760u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E770u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E77Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E784u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E790u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E798u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E804u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E810u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E818u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E820u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E830u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E848u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E860u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E864u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E86Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E884u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E890u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E898u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E90Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E91Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E928u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E930u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E938u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E944u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E950u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E960u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E96Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E974u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E97Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E98Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBD0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECD0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EECCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F004u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F010u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F020u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F038u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F04Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F054u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F064u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F068u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F078u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F094u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F10Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F124u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F188u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F18Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F194u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F230u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F250u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F254u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F26Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F284u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F300u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F308u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F310u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F334u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F358u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F374u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F380u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F404u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F418u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F424u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F42Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F440u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F450u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F458u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F464u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F47Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F494u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F49Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F508u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F518u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F520u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F538u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F544u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F550u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F55Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F568u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F574u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F580u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F58Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F598u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F604u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F620u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F624u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F62Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F648u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F654u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F674u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F68Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F710u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F74Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F758u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F764u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F77Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F794u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F814u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F834u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F848u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F850u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F858u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F864u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F868u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F870u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F880u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F88Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F918u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F91Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F92Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F954u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F95Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F964u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F968u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F980u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F988u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F994u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FAA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FAB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FAD0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FAF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FDACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FDC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FDD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FDF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FDFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FED4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFFCu, &recomp_unit_0094, "recomp_unit_0094");
}
} // namespace psprecomp
