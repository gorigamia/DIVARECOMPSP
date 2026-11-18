#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0170[4093] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 12, 13, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 22, 0, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 44, 0, 45,
    0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 52,
    53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 59, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 81, 0,
    0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 91,
    0, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 0, 96, 0, 97, 0, 0, 98, 0, 99, 0, 100, 101, 0, 0, 102, 0, 0, 103, 0, 104, 0,
    0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 0, 112, 113, 0, 0, 114, 0, 0, 0, 115, 0, 0,
    116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124,
    0, 125, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 129, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 134, 0, 135, 0,
    136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 145, 0, 146,
    0, 0, 147, 0, 148, 0, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 155, 156, 0, 157, 0, 0, 158, 0, 159,
    0, 160, 0, 161, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 167, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 177, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 182, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 184, 0, 185, 0, 186, 187, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192,
    0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223,
    0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0,
    0, 0, 0, 231, 0, 0, 232, 233, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238,
    0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0,
    0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0,
    257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 264, 0, 0, 265, 266,
    0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276,
    0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 283,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 286, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0,
    298, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0,
    0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0,
    0, 318, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0,
    328, 0, 329, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0,
    340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0,
    0, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 359, 360, 361, 0,
    0, 362, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0,
    0, 372, 0, 373, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 382, 0, 383,
    0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 389, 390, 0, 0, 391,
    0, 0, 0, 0, 392, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 403,
    0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 0, 409, 0, 410, 0, 411, 412, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 415, 416, 0, 0,
    417, 0, 0, 0, 0, 418, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 0, 0, 0, 424, 425, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428,
    0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 434, 0, 0, 435, 0,
    0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 441,
    0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0,
    0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454,
    0, 455, 0, 0, 456, 0, 0, 457, 0, 458, 0, 459, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0,
    464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 475, 0, 0, 476, 477, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0,
    481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0,
    487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 493,
    0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 499, 0,
    0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 504, 0, 505, 0, 506, 0,
    507, 0, 508, 0, 509, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 514, 0, 515, 516, 0, 517, 0, 0, 518, 0, 519, 0,
    520, 521, 0, 0, 522, 0, 0, 0, 0, 0, 523, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 532, 0, 0, 533, 0, 0,
    0, 0, 0, 0, 534, 0, 535, 0, 0, 536, 0, 537, 0, 0, 538, 0, 539, 0, 0, 540, 0, 541, 0, 542, 0, 0, 543, 0, 544, 0, 0, 545,
    0, 546, 0, 0, 547, 0, 548, 0, 0, 549, 0, 550, 0, 551, 0, 0, 552, 0, 553, 0, 0, 554, 0, 555, 0, 0, 556, 0, 557, 0, 558, 0,
    0, 559, 0, 560, 0, 0, 561, 0, 562, 0, 0, 563, 0, 564, 0, 0, 565, 0, 566, 0, 0, 567, 0, 568, 0, 569, 0, 0, 570, 0, 571, 0,
    0, 572, 0, 573, 0, 0, 574, 0, 575, 0, 0, 576, 0, 577, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 0, 583, 584, 0, 0, 0, 585, 0,
    0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 589, 0, 590, 0, 591, 0, 592, 0, 0, 593, 0, 0, 0, 0,
    0, 594, 0, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0,
    0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 605, 0,
    0, 606, 607, 0, 0, 0, 608, 0, 609, 0, 610, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 615, 0, 616, 0,
    617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 621, 0, 622, 0, 623, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 626,
    0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0,
    634, 0, 0, 635, 0, 636, 637, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0,
    643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 652, 0, 0, 0, 653, 0, 0,
    0, 0, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 659, 0, 0, 660, 0, 0, 661, 0, 662, 0, 663, 0, 0, 664, 0, 0, 665, 666, 0, 0,
    0, 667, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 673, 674,
    0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 677, 0, 678, 679, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 682, 683, 684, 0, 0, 685, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 690, 0,
    0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 694, 695, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0,
    698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 704, 0, 705,
    0, 706, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 711, 0, 0,
    0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 715, 0, 716, 0, 0, 0, 0, 0, 717, 0, 718, 0, 719, 0,
    0, 0, 0, 0, 720, 721, 0, 722, 0, 0, 723, 0, 724, 0, 725, 726, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 730,
    0, 731, 0, 0, 0, 0, 732, 0, 733, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0,
    0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 743, 0, 0, 0, 0, 0, 0,
    744, 0, 0, 745, 0, 0, 746, 0, 0, 0, 747, 748, 0, 749, 0, 0, 0, 750, 751, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0, 0, 0, 0,
    754, 0, 0, 0, 0, 0, 755, 0, 756, 757, 0, 0, 758, 0, 759, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0, 0,
    763, 0, 764, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0,
    769, 0, 0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 0, 772, 773, 0, 0, 0, 0, 0, 774, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 779, 0, 780, 0, 0, 0, 781, 0, 0, 0, 0, 0, 782, 783, 0, 0, 784, 0,
    785, 0, 0, 0, 0, 786, 0, 0, 787, 788, 0, 0, 0, 0, 0, 789, 0, 790, 791, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 795, 0, 796, 0, 797, 0, 0, 0, 0, 0, 798, 0, 799, 0, 800, 0, 0, 0,
    0, 801, 0, 0, 802, 803, 0, 0, 0, 0, 0, 804, 0, 805, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 811, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 814, 815, 0, 0, 0,
    0, 0, 816, 0, 817, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0, 820, 0, 821, 0, 822, 0, 823, 0, 0, 0, 824, 0, 0, 825, 0,
    0, 0, 0, 0, 826, 0, 0, 827, 0, 828, 829, 0, 0, 0, 830, 0, 0, 831, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 833, 0,
    834, 0, 835, 0, 836, 0, 837, 0, 838, 0, 839, 0, 840, 0, 841, 0, 842, 843, 0, 844, 0, 0, 0, 0, 845, 0, 846, 0, 0, 847, 0, 0,
    848, 0, 0, 849, 0, 0, 850, 0, 851, 0, 852, 0, 853, 0, 854, 855, 0, 0, 856, 0, 0, 0, 0, 857, 0, 858, 0, 0, 859, 0, 0, 860,
    0, 0, 861, 0, 0, 862, 0, 863, 0, 864, 0, 865, 0, 866, 867, 0, 0, 868, 0, 0, 0, 0, 869, 0, 870, 0, 0, 871, 0, 0, 872, 0,
    0, 873, 0, 0, 874, 0, 875, 0, 876, 0, 877, 0, 878, 879, 0, 0, 880, 0, 0, 0, 0, 0, 881, 0, 882, 0, 883, 0, 0, 0, 884, 0,
    0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 887, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0,
    889, 0, 890, 0, 891, 0, 892, 0, 0, 0, 893, 0, 0, 894, 0, 0, 0, 0, 895, 0, 896, 0, 897, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 898, 0, 899, 0, 0, 900, 0, 0, 0, 0, 0, 901, 0, 0, 902, 0, 0, 0, 0, 0, 903, 0, 904, 0, 0, 905, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 906, 0, 907, 0, 908, 0, 0, 0, 909, 0, 0, 0, 0, 0, 0, 910, 0,
    0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 912, 0, 0, 913, 0, 914, 915, 0, 0, 0, 916, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 917, 0, 918, 0, 919, 0, 920, 0, 0, 0, 0, 921, 0, 922, 0, 923, 0, 924, 0, 0, 0, 0, 925, 0, 926, 0, 927, 0,
    928, 0, 0, 0, 0, 929, 0, 930, 0, 931, 0, 0, 932, 0, 933, 0, 934, 0, 935, 0, 0, 936, 937, 0, 0, 0, 938, 939, 0, 0, 0, 940,
    0, 0, 0, 0, 0, 0, 941, 0, 0, 0, 0, 0, 0, 942, 0, 0, 0, 0, 0, 943, 0, 944, 0, 945, 0, 0, 0, 946, 0, 947, 0, 0,
    948, 0, 949, 0, 0, 950, 0, 0, 0, 951, 0, 0, 0, 0, 0, 952, 0, 953, 0, 954, 0, 0, 0, 955, 0, 956, 0, 0, 957, 0, 958, 0,
    0, 959, 0, 0, 0, 960, 0, 0, 0, 0, 0, 961, 0, 962, 0, 963, 0, 0, 0, 964, 0, 965, 0, 0, 966, 0, 967, 0, 0, 968, 0, 0,
    0, 0, 969, 970, 0, 0, 0, 971, 0, 0, 972, 0, 0, 973, 0, 974, 975, 0, 976, 0, 977, 0, 0, 0, 0, 0, 0, 0, 0, 978, 0, 0,
    979, 0, 980, 0, 981, 0, 982, 0, 0, 983, 0, 984, 0, 0, 0, 985, 0, 986, 0, 987, 0, 988, 0, 989, 0, 990, 0, 0, 0, 991, 0, 992,
    0, 993, 0, 0, 0, 0, 994, 0, 995, 0, 996, 0, 0, 0, 997, 0, 998, 0, 0, 0, 0, 0, 999, 0, 0, 0, 1000, 0, 0, 1001, 0, 1002,
    0, 0, 1003, 0, 1004, 0, 0, 1005, 0, 1006, 0, 1007, 0, 0, 1008, 0, 0, 1009, 0, 0, 0, 0, 1010, 0, 0, 0, 0, 0, 0, 1011, 0, 1012,
    0, 1013, 1014, 0, 0, 0, 0, 0, 1015, 0, 1016, 0, 0, 0, 0, 0, 0, 1017, 0, 1018, 0, 1019, 0, 0, 0, 1020, 0, 1021, 0, 1022, 0, 1023,
    0, 1024, 0, 0, 1025, 0, 0, 0, 0, 1026, 0, 0, 0, 0, 1027, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1028, 0, 1029, 0, 0, 0, 1030, 0,
    0, 1031, 0, 1032, 0, 1033, 0, 0, 1034, 1035, 0, 1036, 0, 0, 0, 1037, 0, 0, 0, 0, 0, 1038, 0, 0, 0, 1039, 0, 0, 1040, 0, 0, 1041,
    0, 1042, 1043, 0, 0, 1044, 0, 0, 0, 1045, 0, 0, 0, 0, 1046, 0, 0, 0, 0, 1047, 0, 1048, 0, 0, 0, 0, 1049, 0, 1050,
};
void recomp_unit_0170_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AAC000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0170[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AAC000;
    case 2u: goto L_08AAC00C;
    case 3u: goto L_08AAC028;
    case 4u: goto L_08AAC048;
    case 5u: goto L_08AAC064;
    case 6u: goto L_08AAC084;
    case 7u: goto L_08AAC08C;
    case 8u: goto L_08AAC0A4;
    case 9u: goto L_08AAC0B8;
    case 10u: goto L_08AAC0C0;
    case 11u: goto L_08AAC0C8;
    case 12u: goto L_08AAC0D0;
    case 13u: goto L_08AAC0D4;
    case 14u: goto L_08AAC0DC;
    case 15u: goto L_08AAC0F0;
    case 16u: goto L_08AAC100;
    case 17u: goto L_08AAC118;
    case 18u: goto L_08AAC134;
    case 19u: goto L_08AAC148;
    case 20u: goto L_08AAC154;
    case 21u: goto L_08AAC15C;
    case 22u: goto L_08AAC160;
    case 23u: goto L_08AAC174;
    case 24u: goto L_08AAC190;
    case 25u: goto L_08AAC1A4;
    case 26u: goto L_08AAC1B0;
    case 27u: goto L_08AAC1B8;
    case 28u: goto L_08AAC1BC;
    case 29u: goto L_08AAC1D0;
    case 30u: goto L_08AAC25C;
    case 31u: goto L_08AAC264;
    case 32u: goto L_08AAC274;
    case 33u: goto L_08AAC2AC;
    case 34u: goto L_08AAC2C8;
    case 35u: goto L_08AAC2E8;
    case 36u: goto L_08AAC304;
    case 37u: goto L_08AAC324;
    case 38u: goto L_08AAC32C;
    case 39u: goto L_08AAC344;
    case 40u: goto L_08AAC358;
    case 41u: goto L_08AAC360;
    case 42u: goto L_08AAC368;
    case 43u: goto L_08AAC370;
    case 44u: goto L_08AAC374;
    case 45u: goto L_08AAC37C;
    case 46u: goto L_08AAC390;
    case 47u: goto L_08AAC3A0;
    case 48u: goto L_08AAC3B8;
    case 49u: goto L_08AAC3D4;
    case 50u: goto L_08AAC3E8;
    case 51u: goto L_08AAC3F4;
    case 52u: goto L_08AAC3FC;
    case 53u: goto L_08AAC400;
    case 54u: goto L_08AAC414;
    case 55u: goto L_08AAC430;
    case 56u: goto L_08AAC444;
    case 57u: goto L_08AAC450;
    case 58u: goto L_08AAC458;
    case 59u: goto L_08AAC45C;
    case 60u: goto L_08AAC470;
    case 61u: goto L_08AAC4E0;
    case 62u: goto L_08AAC4E8;
    case 63u: goto L_08AAC4F8;
    case 64u: goto L_08AAC514;
    case 65u: goto L_08AAC530;
    case 66u: goto L_08AAC550;
    case 67u: goto L_08AAC56C;
    case 68u: goto L_08AAC58C;
    case 69u: goto L_08AAC594;
    case 70u: goto L_08AAC5A8;
    case 71u: goto L_08AAC5C0;
    case 72u: goto L_08AAC5D4;
    case 73u: goto L_08AAC604;
    case 74u: goto L_08AAC60C;
    case 75u: goto L_08AAC614;
    case 76u: goto L_08AAC61C;
    case 77u: goto L_08AAC640;
    case 78u: goto L_08AAC65C;
    case 79u: goto L_08AAC668;
    case 80u: goto L_08AAC670;
    case 81u: goto L_08AAC678;
    case 82u: goto L_08AAC690;
    case 83u: goto L_08AAC698;
    case 84u: goto L_08AAC6A4;
    case 85u: goto L_08AAC6BC;
    case 86u: goto L_08AAC6C4;
    case 87u: goto L_08AAC6D0;
    case 88u: goto L_08AAC6DC;
    case 89u: goto L_08AAC6E8;
    case 90u: goto L_08AAC6F0;
    case 91u: goto L_08AAC6FC;
    case 92u: goto L_08AAC708;
    case 93u: goto L_08AAC714;
    case 94u: goto L_08AAC71C;
    case 95u: goto L_08AAC724;
    case 96u: goto L_08AAC730;
    case 97u: goto L_08AAC738;
    case 98u: goto L_08AAC744;
    case 99u: goto L_08AAC74C;
    case 100u: goto L_08AAC754;
    case 101u: goto L_08AAC758;
    case 102u: goto L_08AAC764;
    case 103u: goto L_08AAC770;
    case 104u: goto L_08AAC778;
    case 105u: goto L_08AAC788;
    case 106u: goto L_08AAC798;
    case 107u: goto L_08AAC7A0;
    case 108u: goto L_08AAC7AC;
    case 109u: goto L_08AAC7B8;
    case 110u: goto L_08AAC7C0;
    case 111u: goto L_08AAC7C8;
    case 112u: goto L_08AAC7D4;
    case 113u: goto L_08AAC7D8;
    case 114u: goto L_08AAC7E4;
    case 115u: goto L_08AAC7F4;
    case 116u: goto L_08AAC800;
    case 117u: goto L_08AAC808;
    case 118u: goto L_08AAC81C;
    case 119u: goto L_08AAC82C;
    case 120u: goto L_08AAC830;
    case 121u: goto L_08AAC844;
    case 122u: goto L_08AAC854;
    case 123u: goto L_08AAC85C;
    case 124u: goto L_08AAC87C;
    case 125u: goto L_08AAC884;
    case 126u: goto L_08AAC88C;
    case 127u: goto L_08AAC8A0;
    case 128u: goto L_08AAC8AC;
    case 129u: goto L_08AAC8B0;
    case 130u: goto L_08AAC8BC;
    case 131u: goto L_08AAC8D0;
    case 132u: goto L_08AAC8D8;
    case 133u: goto L_08AAC8E4;
    case 134u: goto L_08AAC8F0;
    case 135u: goto L_08AAC8F8;
    case 136u: goto L_08AAC900;
    case 137u: goto L_08AAC910;
    case 138u: goto L_08AAC92C;
    case 139u: goto L_08AAC934;
    case 140u: goto L_08AAC938;
    case 141u: goto L_08AAC950;
    case 142u: goto L_08AAC958;
    case 143u: goto L_08AAC960;
    case 144u: goto L_08AAC96C;
    case 145u: goto L_08AAC974;
    case 146u: goto L_08AAC97C;
    case 147u: goto L_08AAC988;
    case 148u: goto L_08AAC990;
    case 149u: goto L_08AAC99C;
    case 150u: goto L_08AAC9A8;
    case 151u: goto L_08AAC9B0;
    case 152u: goto L_08AAC9B8;
    case 153u: goto L_08AAC9C0;
    case 154u: goto L_08AAC9D0;
    case 155u: goto L_08AAC9DC;
    case 156u: goto L_08AAC9E0;
    case 157u: goto L_08AAC9E8;
    case 158u: goto L_08AAC9F4;
    case 159u: goto L_08AAC9FC;
    case 160u: goto L_08AACA04;
    case 161u: goto L_08AACA0C;
    case 162u: goto L_08AACA10;
    case 163u: goto L_08AACA24;
    case 164u: goto L_08AACA4C;
    case 165u: goto L_08AACA5C;
    case 166u: goto L_08AACA68;
    case 167u: goto L_08AACA6C;
    case 168u: goto L_08AACA88;
    case 169u: goto L_08AACAA4;
    case 170u: goto L_08AACAAC;
    case 171u: goto L_08AACAC8;
    case 172u: goto L_08AACAD0;
    case 173u: goto L_08AACAD8;
    case 174u: goto L_08AACAE4;
    case 175u: goto L_08AACAEC;
    case 176u: goto L_08AACB0C;
    case 177u: goto L_08AACB18;
    case 178u: goto L_08AACB1C;
    case 179u: goto L_08AACB2C;
    case 180u: goto L_08AACBE0;
    case 181u: goto L_08AACBE8;
    case 182u: goto L_08AACBF4;
    case 183u: goto L_08AACC78;
    case 184u: goto L_08AACC84;
    case 185u: goto L_08AACC8C;
    case 186u: goto L_08AACC94;
    case 187u: goto L_08AACC98;
    case 188u: goto L_08AACCA0;
    case 189u: goto L_08AACCA8;
    case 190u: goto L_08AACCC8;
    case 191u: goto L_08AACCF0;
    case 192u: goto L_08AACCFC;
    case 193u: goto L_08AACD04;
    case 194u: goto L_08AACD1C;
    case 195u: goto L_08AACD30;
    case 196u: goto L_08AACD34;
    case 197u: goto L_08AACD44;
    case 198u: goto L_08AACD58;
    case 199u: goto L_08AACD6C;
    case 200u: goto L_08AACE00;
    case 201u: goto L_08AACE0C;
    case 202u: goto L_08AACE1C;
    case 203u: goto L_08AACE30;
    case 204u: goto L_08AACE38;
    case 205u: goto L_08AACE40;
    case 206u: goto L_08AACE4C;
    case 207u: goto L_08AACE5C;
    case 208u: goto L_08AACE70;
    case 209u: goto L_08AACE78;
    case 210u: goto L_08AACE90;
    case 211u: goto L_08AACEA4;
    case 212u: goto L_08AACEC4;
    case 213u: goto L_08AACED4;
    case 214u: goto L_08AACEF0;
    case 215u: goto L_08AACEF8;
    case 216u: goto L_08AACF00;
    case 217u: goto L_08AACF2C;
    case 218u: goto L_08AACF34;
    case 219u: goto L_08AACF3C;
    case 220u: goto L_08AACF48;
    case 221u: goto L_08AACF50;
    case 222u: goto L_08AACF70;
    case 223u: goto L_08AACF7C;
    case 224u: goto L_08AACF88;
    case 225u: goto L_08AACFA0;
    case 226u: goto L_08AACFB4;
    case 227u: goto L_08AACFC8;
    case 228u: goto L_08AACFD4;
    case 229u: goto L_08AACFE0;
    case 230u: goto L_08AACFEC;
    case 231u: goto L_08AAD00C;
    case 232u: goto L_08AAD018;
    case 233u: goto L_08AAD01C;
    case 234u: goto L_08AAD030;
    case 235u: goto L_08AAD040;
    case 236u: goto L_08AAD050;
    case 237u: goto L_08AAD074;
    case 238u: goto L_08AAD07C;
    case 239u: goto L_08AAD088;
    case 240u: goto L_08AAD094;
    case 241u: goto L_08AAD0B0;
    case 242u: goto L_08AAD0C4;
    case 243u: goto L_08AAD0E4;
    case 244u: goto L_08AAD0F8;
    case 245u: goto L_08AAD104;
    case 246u: goto L_08AAD114;
    case 247u: goto L_08AAD18C;
    case 248u: goto L_08AAD194;
    case 249u: goto L_08AAD19C;
    case 250u: goto L_08AAD1B4;
    case 251u: goto L_08AAD1C0;
    case 252u: goto L_08AAD1C8;
    case 253u: goto L_08AAD1D0;
    case 254u: goto L_08AAD1D8;
    case 255u: goto L_08AAD1E4;
    case 256u: goto L_08AAD1F4;
    case 257u: goto L_08AAD200;
    case 258u: goto L_08AAD218;
    case 259u: goto L_08AAD22C;
    case 260u: goto L_08AAD240;
    case 261u: goto L_08AAD24C;
    case 262u: goto L_08AAD258;
    case 263u: goto L_08AAD264;
    case 264u: goto L_08AAD26C;
    case 265u: goto L_08AAD278;
    case 266u: goto L_08AAD27C;
    case 267u: goto L_08AAD298;
    case 268u: goto L_08AAD2A8;
    case 269u: goto L_08AAD2F0;
    case 270u: goto L_08AAD300;
    case 271u: goto L_08AAD308;
    case 272u: goto L_08AAD334;
    case 273u: goto L_08AAD350;
    case 274u: goto L_08AAD364;
    case 275u: goto L_08AAD374;
    case 276u: goto L_08AAD37C;
    case 277u: goto L_08AAD38C;
    case 278u: goto L_08AAD39C;
    case 279u: goto L_08AAD3AC;
    case 280u: goto L_08AAD3D0;
    case 281u: goto L_08AAD3E8;
    case 282u: goto L_08AAD3F4;
    case 283u: goto L_08AAD3FC;
    case 284u: goto L_08AAD424;
    case 285u: goto L_08AAD430;
    case 286u: goto L_08AAD434;
    case 287u: goto L_08AAD43C;
    case 288u: goto L_08AAD450;
    case 289u: goto L_08AAD460;
    case 290u: goto L_08AAD47C;
    case 291u: goto L_08AAD49C;
    case 292u: goto L_08AAD4B4;
    case 293u: goto L_08AAD4BC;
    case 294u: goto L_08AAD4C4;
    case 295u: goto L_08AAD4D4;
    case 296u: goto L_08AAD4E4;
    case 297u: goto L_08AAD4F8;
    case 298u: goto L_08AAD500;
    case 299u: goto L_08AAD508;
    case 300u: goto L_08AAD518;
    case 301u: goto L_08AAD528;
    case 302u: goto L_08AAD548;
    case 303u: goto L_08AAD568;
    case 304u: goto L_08AAD570;
    case 305u: goto L_08AAD584;
    case 306u: goto L_08AAD598;
    case 307u: goto L_08AAD5B8;
    case 308u: goto L_08AAD5D8;
    case 309u: goto L_08AAD5E0;
    case 310u: goto L_08AAD5F8;
    case 311u: goto L_08AAD608;
    case 312u: goto L_08AAD624;
    case 313u: goto L_08AAD62C;
    case 314u: goto L_08AAD63C;
    case 315u: goto L_08AAD650;
    case 316u: goto L_08AAD66C;
    case 317u: goto L_08AAD674;
    case 318u: goto L_08AAD684;
    case 319u: goto L_08AAD68C;
    case 320u: goto L_08AAD694;
    case 321u: goto L_08AAD6A4;
    case 322u: goto L_08AAD6BC;
    case 323u: goto L_08AAD6CC;
    case 324u: goto L_08AAD6D4;
    case 325u: goto L_08AAD6DC;
    case 326u: goto L_08AAD6E4;
    case 327u: goto L_08AAD6F4;
    case 328u: goto L_08AAD700;
    case 329u: goto L_08AAD708;
    case 330u: goto L_08AAD710;
    case 331u: goto L_08AAD724;
    case 332u: goto L_08AAD740;
    case 333u: goto L_08AAD748;
    case 334u: goto L_08AAD750;
    case 335u: goto L_08AAD758;
    case 336u: goto L_08AAD760;
    case 337u: goto L_08AAD768;
    case 338u: goto L_08AAD770;
    case 339u: goto L_08AAD778;
    case 340u: goto L_08AAD780;
    case 341u: goto L_08AAD788;
    case 342u: goto L_08AAD790;
    case 343u: goto L_08AAD798;
    case 344u: goto L_08AAD7A0;
    case 345u: goto L_08AAD7C0;
    case 346u: goto L_08AAD7C8;
    case 347u: goto L_08AAD7D4;
    case 348u: goto L_08AAD7E4;
    case 349u: goto L_08AAD7EC;
    case 350u: goto L_08AAD7F4;
    case 351u: goto L_08AAD80C;
    case 352u: goto L_08AAD81C;
    case 353u: goto L_08AAD824;
    case 354u: goto L_08AAD82C;
    case 355u: goto L_08AAD844;
    case 356u: goto L_08AAD84C;
    case 357u: goto L_08AAD858;
    case 358u: goto L_08AAD860;
    case 359u: goto L_08AAD870;
    case 360u: goto L_08AAD874;
    case 361u: goto L_08AAD878;
    case 362u: goto L_08AAD884;
    case 363u: goto L_08AAD88C;
    case 364u: goto L_08AAD898;
    case 365u: goto L_08AAD8A0;
    case 366u: goto L_08AAD8A8;
    case 367u: goto L_08AAD8B0;
    case 368u: goto L_08AAD8C8;
    case 369u: goto L_08AAD8D0;
    case 370u: goto L_08AAD8E8;
    case 371u: goto L_08AAD8F0;
    case 372u: goto L_08AAD904;
    case 373u: goto L_08AAD90C;
    case 374u: goto L_08AAD914;
    case 375u: goto L_08AAD91C;
    case 376u: goto L_08AAD928;
    case 377u: goto L_08AAD930;
    case 378u: goto L_08AAD940;
    case 379u: goto L_08AAD948;
    case 380u: goto L_08AAD958;
    case 381u: goto L_08AAD960;
    case 382u: goto L_08AAD974;
    case 383u: goto L_08AAD97C;
    case 384u: goto L_08AAD994;
    case 385u: goto L_08AAD9C0;
    case 386u: goto L_08AAD9CC;
    case 387u: goto L_08AAD9D8;
    case 388u: goto L_08AAD9E4;
    case 389u: goto L_08AAD9EC;
    case 390u: goto L_08AAD9F0;
    case 391u: goto L_08AAD9FC;
    case 392u: goto L_08AADA10;
    case 393u: goto L_08AADA14;
    case 394u: goto L_08AADA1C;
    case 395u: goto L_08AADA24;
    case 396u: goto L_08AADA2C;
    case 397u: goto L_08AADA34;
    case 398u: goto L_08AADA3C;
    case 399u: goto L_08AADA44;
    case 400u: goto L_08AADA54;
    case 401u: goto L_08AADA64;
    case 402u: goto L_08AADA70;
    case 403u: goto L_08AADA7C;
    case 404u: goto L_08AADA84;
    case 405u: goto L_08AADA8C;
    case 406u: goto L_08AADA94;
    case 407u: goto L_08AADA9C;
    case 408u: goto L_08AADAA4;
    case 409u: goto L_08AADAB0;
    case 410u: goto L_08AADAB8;
    case 411u: goto L_08AADAC0;
    case 412u: goto L_08AADAC4;
    case 413u: goto L_08AADACC;
    case 414u: goto L_08AADAE0;
    case 415u: goto L_08AADAF0;
    case 416u: goto L_08AADAF4;
    case 417u: goto L_08AADB00;
    case 418u: goto L_08AADB14;
    case 419u: goto L_08AADB18;
    case 420u: goto L_08AADB20;
    case 421u: goto L_08AADB28;
    case 422u: goto L_08AADB30;
    case 423u: goto L_08AADB38;
    case 424u: goto L_08AADB4C;
    case 425u: goto L_08AADB50;
    case 426u: goto L_08AADB54;
    case 427u: goto L_08AADB6C;
    case 428u: goto L_08AADB7C;
    case 429u: goto L_08AADB8C;
    case 430u: goto L_08AADBA8;
    case 431u: goto L_08AADBB0;
    case 432u: goto L_08AADBD0;
    case 433u: goto L_08AADBE4;
    case 434u: goto L_08AADBEC;
    case 435u: goto L_08AADBF8;
    case 436u: goto L_08AADC0C;
    case 437u: goto L_08AADC28;
    case 438u: goto L_08AADC3C;
    case 439u: goto L_08AADC5C;
    case 440u: goto L_08AADC64;
    case 441u: goto L_08AADC7C;
    case 442u: goto L_08AADC90;
    case 443u: goto L_08AADC9C;
    case 444u: goto L_08AADCB0;
    case 445u: goto L_08AADCBC;
    case 446u: goto L_08AADCC8;
    case 447u: goto L_08AADCD4;
    case 448u: goto L_08AADCE4;
    case 449u: goto L_08AADCF4;
    case 450u: goto L_08AADD04;
    case 451u: goto L_08AADD18;
    case 452u: goto L_08AADD34;
    case 453u: goto L_08AADD70;
    case 454u: goto L_08AADD7C;
    case 455u: goto L_08AADD84;
    case 456u: goto L_08AADD90;
    case 457u: goto L_08AADD9C;
    case 458u: goto L_08AADDA4;
    case 459u: goto L_08AADDAC;
    case 460u: goto L_08AADDB0;
    case 461u: goto L_08AADDC8;
    case 462u: goto L_08AADDE0;
    case 463u: goto L_08AADDF4;
    case 464u: goto L_08AADE00;
    case 465u: goto L_08AADE58;
    case 466u: goto L_08AADE98;
    case 467u: goto L_08AADED8;
    case 468u: goto L_08AADF04;
    case 469u: goto L_08AADF18;
    case 470u: goto L_08AADF58;
    case 471u: goto L_08AADF80;
    case 472u: goto L_08AADF94;
    case 473u: goto L_08AADF9C;
    case 474u: goto L_08AADFAC;
    case 475u: goto L_08AADFB4;
    case 476u: goto L_08AADFC0;
    case 477u: goto L_08AADFC4;
    case 478u: goto L_08AADFD8;
    case 479u: goto L_08AADFE8;
    case 480u: goto L_08AADFF8;
    case 481u: goto L_08AAE000;
    case 482u: goto L_08AAE028;
    case 483u: goto L_08AAE030;
    case 484u: goto L_08AAE044;
    case 485u: goto L_08AAE04C;
    case 486u: goto L_08AAE060;
    case 487u: goto L_08AAE080;
    case 488u: goto L_08AAE094;
    case 489u: goto L_08AAE0B0;
    case 490u: goto L_08AAE0D0;
    case 491u: goto L_08AAE0D8;
    case 492u: goto L_08AAE0E4;
    case 493u: goto L_08AAE0FC;
    case 494u: goto L_08AAE104;
    case 495u: goto L_08AAE120;
    case 496u: goto L_08AAE130;
    case 497u: goto L_08AAE158;
    case 498u: goto L_08AAE170;
    case 499u: goto L_08AAE178;
    case 500u: goto L_08AAE194;
    case 501u: goto L_08AAE1A4;
    case 502u: goto L_08AAE1D8;
    case 503u: goto L_08AAE1E0;
    case 504u: goto L_08AAE1E8;
    case 505u: goto L_08AAE1F0;
    case 506u: goto L_08AAE1F8;
    case 507u: goto L_08AAE200;
    case 508u: goto L_08AAE208;
    case 509u: goto L_08AAE210;
    case 510u: goto L_08AAE21C;
    case 511u: goto L_08AAE224;
    case 512u: goto L_08AAE23C;
    case 513u: goto L_08AAE244;
    case 514u: goto L_08AAE250;
    case 515u: goto L_08AAE258;
    case 516u: goto L_08AAE25C;
    case 517u: goto L_08AAE264;
    case 518u: goto L_08AAE270;
    case 519u: goto L_08AAE278;
    case 520u: goto L_08AAE280;
    case 521u: goto L_08AAE284;
    case 522u: goto L_08AAE290;
    case 523u: goto L_08AAE2A8;
    case 524u: goto L_08AAE2AC;
    case 525u: goto L_08AAE2C8;
    case 526u: goto L_08AAE2D8;
    case 527u: goto L_08AAE310;
    case 528u: goto L_08AAE324;
    case 529u: goto L_08AAE330;
    case 530u: goto L_08AAE348;
    case 531u: goto L_08AAE360;
    case 532u: goto L_08AAE368;
    case 533u: goto L_08AAE374;
    case 534u: goto L_08AAE390;
    case 535u: goto L_08AAE398;
    case 536u: goto L_08AAE3A4;
    case 537u: goto L_08AAE3AC;
    case 538u: goto L_08AAE3B8;
    case 539u: goto L_08AAE3C0;
    case 540u: goto L_08AAE3CC;
    case 541u: goto L_08AAE3D4;
    case 542u: goto L_08AAE3DC;
    case 543u: goto L_08AAE3E8;
    case 544u: goto L_08AAE3F0;
    case 545u: goto L_08AAE3FC;
    case 546u: goto L_08AAE404;
    case 547u: goto L_08AAE410;
    case 548u: goto L_08AAE418;
    case 549u: goto L_08AAE424;
    case 550u: goto L_08AAE42C;
    case 551u: goto L_08AAE434;
    case 552u: goto L_08AAE440;
    case 553u: goto L_08AAE448;
    case 554u: goto L_08AAE454;
    case 555u: goto L_08AAE45C;
    case 556u: goto L_08AAE468;
    case 557u: goto L_08AAE470;
    case 558u: goto L_08AAE478;
    case 559u: goto L_08AAE484;
    case 560u: goto L_08AAE48C;
    case 561u: goto L_08AAE498;
    case 562u: goto L_08AAE4A0;
    case 563u: goto L_08AAE4AC;
    case 564u: goto L_08AAE4B4;
    case 565u: goto L_08AAE4C0;
    case 566u: goto L_08AAE4C8;
    case 567u: goto L_08AAE4D4;
    case 568u: goto L_08AAE4DC;
    case 569u: goto L_08AAE4E4;
    case 570u: goto L_08AAE4F0;
    case 571u: goto L_08AAE4F8;
    case 572u: goto L_08AAE504;
    case 573u: goto L_08AAE50C;
    case 574u: goto L_08AAE518;
    case 575u: goto L_08AAE520;
    case 576u: goto L_08AAE52C;
    case 577u: goto L_08AAE534;
    case 578u: goto L_08AAE538;
    case 579u: goto L_08AAE540;
    case 580u: goto L_08AAE548;
    case 581u: goto L_08AAE550;
    case 582u: goto L_08AAE558;
    case 583u: goto L_08AAE564;
    case 584u: goto L_08AAE568;
    case 585u: goto L_08AAE578;
    case 586u: goto L_08AAE598;
    case 587u: goto L_08AAE5AC;
    case 588u: goto L_08AAE5B8;
    case 589u: goto L_08AAE5C8;
    case 590u: goto L_08AAE5D0;
    case 591u: goto L_08AAE5D8;
    case 592u: goto L_08AAE5E0;
    case 593u: goto L_08AAE5EC;
    case 594u: goto L_08AAE604;
    case 595u: goto L_08AAE618;
    case 596u: goto L_08AAE624;
    case 597u: goto L_08AAE64C;
    case 598u: goto L_08AAE668;
    case 599u: goto L_08AAE670;
    case 600u: goto L_08AAE684;
    case 601u: goto L_08AAE6B0;
    case 602u: goto L_08AAE6C8;
    case 603u: goto L_08AAE6DC;
    case 604u: goto L_08AAE6F0;
    case 605u: goto L_08AAE6F8;
    case 606u: goto L_08AAE704;
    case 607u: goto L_08AAE708;
    case 608u: goto L_08AAE718;
    case 609u: goto L_08AAE720;
    case 610u: goto L_08AAE728;
    case 611u: goto L_08AAE730;
    case 612u: goto L_08AAE744;
    case 613u: goto L_08AAE758;
    case 614u: goto L_08AAE768;
    case 615u: goto L_08AAE770;
    case 616u: goto L_08AAE778;
    case 617u: goto L_08AAE780;
    case 618u: goto L_08AAE794;
    case 619u: goto L_08AAE7A8;
    case 620u: goto L_08AAE7B8;
    case 621u: goto L_08AAE7C0;
    case 622u: goto L_08AAE7C8;
    case 623u: goto L_08AAE7D0;
    case 624u: goto L_08AAE7D8;
    case 625u: goto L_08AAE7F0;
    case 626u: goto L_08AAE7FC;
    case 627u: goto L_08AAE80C;
    case 628u: goto L_08AAE81C;
    case 629u: goto L_08AAE82C;
    case 630u: goto L_08AAE83C;
    case 631u: goto L_08AAE850;
    case 632u: goto L_08AAE86C;
    case 633u: goto L_08AAE874;
    case 634u: goto L_08AAE880;
    case 635u: goto L_08AAE88C;
    case 636u: goto L_08AAE894;
    case 637u: goto L_08AAE898;
    case 638u: goto L_08AAE8AC;
    case 639u: goto L_08AAE8B4;
    case 640u: goto L_08AAE8D0;
    case 641u: goto L_08AAE8E0;
    case 642u: goto L_08AAE8F0;
    case 643u: goto L_08AAE900;
    case 644u: goto L_08AAE94C;
    case 645u: goto L_08AAE98C;
    case 646u: goto L_08AAE9A8;
    case 647u: goto L_08AAE9C0;
    case 648u: goto L_08AAE9C8;
    case 649u: goto L_08AAE9D0;
    case 650u: goto L_08AAE9D8;
    case 651u: goto L_08AAE9E0;
    case 652u: goto L_08AAE9E4;
    case 653u: goto L_08AAE9F4;
    case 654u: goto L_08AAEA0C;
    case 655u: goto L_08AAEA14;
    case 656u: goto L_08AAEA1C;
    case 657u: goto L_08AAEA24;
    case 658u: goto L_08AAEA2C;
    case 659u: goto L_08AAEA30;
    case 660u: goto L_08AAEA3C;
    case 661u: goto L_08AAEA48;
    case 662u: goto L_08AAEA50;
    case 663u: goto L_08AAEA58;
    case 664u: goto L_08AAEA64;
    case 665u: goto L_08AAEA70;
    case 666u: goto L_08AAEA74;
    case 667u: goto L_08AAEA84;
    case 668u: goto L_08AAEAA4;
    case 669u: goto L_08AAEAB8;
    case 670u: goto L_08AAEACC;
    case 671u: goto L_08AAEAD0;
    case 672u: goto L_08AAEAE8;
    case 673u: goto L_08AAEAF8;
    case 674u: goto L_08AAEAFC;
    case 675u: goto L_08AAEB0C;
    case 676u: goto L_08AAEB20;
    case 677u: goto L_08AAEB2C;
    case 678u: goto L_08AAEB34;
    case 679u: goto L_08AAEB38;
    case 680u: goto L_08AAEB40;
    case 681u: goto L_08AAEB6C;
    case 682u: goto L_08AAEB9C;
    case 683u: goto L_08AAEBA0;
    case 684u: goto L_08AAEBA4;
    case 685u: goto L_08AAEBB0;
    case 686u: goto L_08AAEBB8;
    case 687u: goto L_08AAEBC0;
    case 688u: goto L_08AAEBE4;
    case 689u: goto L_08AAEBEC;
    case 690u: goto L_08AAEBF8;
    case 691u: goto L_08AAEC04;
    case 692u: goto L_08AAEC28;
    case 693u: goto L_08AAEC34;
    case 694u: goto L_08AAEC50;
    case 695u: goto L_08AAEC54;
    case 696u: goto L_08AAEC5C;
    case 697u: goto L_08AAEC74;
    case 698u: goto L_08AAEC80;
    case 699u: goto L_08AAECA8;
    case 700u: goto L_08AAECB0;
    case 701u: goto L_08AAECC8;
    case 702u: goto L_08AAECE0;
    case 703u: goto L_08AAECEC;
    case 704u: goto L_08AAECF4;
    case 705u: goto L_08AAECFC;
    case 706u: goto L_08AAED04;
    case 707u: goto L_08AAED10;
    case 708u: goto L_08AAED20;
    case 709u: goto L_08AAED50;
    case 710u: goto L_08AAED58;
    case 711u: goto L_08AAED74;
    case 712u: goto L_08AAED8C;
    case 713u: goto L_08AAEDB8;
    case 714u: goto L_08AAEDC4;
    case 715u: goto L_08AAEDC8;
    case 716u: goto L_08AAEDD0;
    case 717u: goto L_08AAEDE8;
    case 718u: goto L_08AAEDF0;
    case 719u: goto L_08AAEDF8;
    case 720u: goto L_08AAEE10;
    case 721u: goto L_08AAEE14;
    case 722u: goto L_08AAEE1C;
    case 723u: goto L_08AAEE28;
    case 724u: goto L_08AAEE30;
    case 725u: goto L_08AAEE38;
    case 726u: goto L_08AAEE3C;
    case 727u: goto L_08AAEE4C;
    case 728u: goto L_08AAEE58;
    case 729u: goto L_08AAEE74;
    case 730u: goto L_08AAEE7C;
    case 731u: goto L_08AAEE84;
    case 732u: goto L_08AAEE98;
    case 733u: goto L_08AAEEA0;
    case 734u: goto L_08AAEEB0;
    case 735u: goto L_08AAEEBC;
    case 736u: goto L_08AAEED0;
    case 737u: goto L_08AAEEDC;
    case 738u: goto L_08AAEEEC;
    case 739u: goto L_08AAEF08;
    case 740u: goto L_08AAEF2C;
    case 741u: goto L_08AAEF50;
    case 742u: goto L_08AAEF5C;
    case 743u: goto L_08AAEF64;
    case 744u: goto L_08AAEF80;
    case 745u: goto L_08AAEF8C;
    case 746u: goto L_08AAEF98;
    case 747u: goto L_08AAEFA8;
    case 748u: goto L_08AAEFAC;
    case 749u: goto L_08AAEFB4;
    case 750u: goto L_08AAEFC4;
    case 751u: goto L_08AAEFC8;
    case 752u: goto L_08AAEFD8;
    case 753u: goto L_08AAEFE8;
    case 754u: goto L_08AAF000;
    case 755u: goto L_08AAF018;
    case 756u: goto L_08AAF020;
    case 757u: goto L_08AAF024;
    case 758u: goto L_08AAF030;
    case 759u: goto L_08AAF038;
    case 760u: goto L_08AAF044;
    case 761u: goto L_08AAF058;
    case 762u: goto L_08AAF064;
    case 763u: goto L_08AAF080;
    case 764u: goto L_08AAF088;
    case 765u: goto L_08AAF094;
    case 766u: goto L_08AAF0D0;
    case 767u: goto L_08AAF0F0;
    case 768u: goto L_08AAF0F8;
    case 769u: goto L_08AAF100;
    case 770u: goto L_08AAF10C;
    case 771u: goto L_08AAF128;
    case 772u: goto L_08AAF134;
    case 773u: goto L_08AAF138;
    case 774u: goto L_08AAF150;
    case 775u: goto L_08AAF158;
    case 776u: goto L_08AAF164;
    case 777u: goto L_08AAF19C;
    case 778u: goto L_08AAF1B0;
    case 779u: goto L_08AAF1B8;
    case 780u: goto L_08AAF1C0;
    case 781u: goto L_08AAF1D0;
    case 782u: goto L_08AAF1E8;
    case 783u: goto L_08AAF1EC;
    case 784u: goto L_08AAF1F8;
    case 785u: goto L_08AAF200;
    case 786u: goto L_08AAF214;
    case 787u: goto L_08AAF220;
    case 788u: goto L_08AAF224;
    case 789u: goto L_08AAF23C;
    case 790u: goto L_08AAF244;
    case 791u: goto L_08AAF248;
    case 792u: goto L_08AAF24C;
    case 793u: goto L_08AAF274;
    case 794u: goto L_08AAF2A8;
    case 795u: goto L_08AAF2B8;
    case 796u: goto L_08AAF2C0;
    case 797u: goto L_08AAF2C8;
    case 798u: goto L_08AAF2E0;
    case 799u: goto L_08AAF2E8;
    case 800u: goto L_08AAF2F0;
    case 801u: goto L_08AAF304;
    case 802u: goto L_08AAF310;
    case 803u: goto L_08AAF314;
    case 804u: goto L_08AAF32C;
    case 805u: goto L_08AAF334;
    case 806u: goto L_08AAF33C;
    case 807u: goto L_08AAF360;
    case 808u: goto L_08AAF394;
    case 809u: goto L_08AAF3B0;
    case 810u: goto L_08AAF3B8;
    case 811u: goto L_08AAF3C0;
    case 812u: goto L_08AAF3CC;
    case 813u: goto L_08AAF3E0;
    case 814u: goto L_08AAF3EC;
    case 815u: goto L_08AAF3F0;
    case 816u: goto L_08AAF408;
    case 817u: goto L_08AAF410;
    case 818u: goto L_08AAF41C;
    case 819u: goto L_08AAF430;
    case 820u: goto L_08AAF444;
    case 821u: goto L_08AAF44C;
    case 822u: goto L_08AAF454;
    case 823u: goto L_08AAF45C;
    case 824u: goto L_08AAF46C;
    case 825u: goto L_08AAF478;
    case 826u: goto L_08AAF490;
    case 827u: goto L_08AAF49C;
    case 828u: goto L_08AAF4A4;
    case 829u: goto L_08AAF4A8;
    case 830u: goto L_08AAF4B8;
    case 831u: goto L_08AAF4C4;
    case 832u: goto L_08AAF4DC;
    case 833u: goto L_08AAF4F8;
    case 834u: goto L_08AAF500;
    case 835u: goto L_08AAF508;
    case 836u: goto L_08AAF510;
    case 837u: goto L_08AAF518;
    case 838u: goto L_08AAF520;
    case 839u: goto L_08AAF528;
    case 840u: goto L_08AAF530;
    case 841u: goto L_08AAF538;
    case 842u: goto L_08AAF540;
    case 843u: goto L_08AAF544;
    case 844u: goto L_08AAF54C;
    case 845u: goto L_08AAF560;
    case 846u: goto L_08AAF568;
    case 847u: goto L_08AAF574;
    case 848u: goto L_08AAF580;
    case 849u: goto L_08AAF58C;
    case 850u: goto L_08AAF598;
    case 851u: goto L_08AAF5A0;
    case 852u: goto L_08AAF5A8;
    case 853u: goto L_08AAF5B0;
    case 854u: goto L_08AAF5B8;
    case 855u: goto L_08AAF5BC;
    case 856u: goto L_08AAF5C8;
    case 857u: goto L_08AAF5DC;
    case 858u: goto L_08AAF5E4;
    case 859u: goto L_08AAF5F0;
    case 860u: goto L_08AAF5FC;
    case 861u: goto L_08AAF608;
    case 862u: goto L_08AAF614;
    case 863u: goto L_08AAF61C;
    case 864u: goto L_08AAF624;
    case 865u: goto L_08AAF62C;
    case 866u: goto L_08AAF634;
    case 867u: goto L_08AAF638;
    case 868u: goto L_08AAF644;
    case 869u: goto L_08AAF658;
    case 870u: goto L_08AAF660;
    case 871u: goto L_08AAF66C;
    case 872u: goto L_08AAF678;
    case 873u: goto L_08AAF684;
    case 874u: goto L_08AAF690;
    case 875u: goto L_08AAF698;
    case 876u: goto L_08AAF6A0;
    case 877u: goto L_08AAF6A8;
    case 878u: goto L_08AAF6B0;
    case 879u: goto L_08AAF6B4;
    case 880u: goto L_08AAF6C0;
    case 881u: goto L_08AAF6D8;
    case 882u: goto L_08AAF6E0;
    case 883u: goto L_08AAF6E8;
    case 884u: goto L_08AAF6F8;
    case 885u: goto L_08AAF718;
    case 886u: goto L_08AAF74C;
    case 887u: goto L_08AAF754;
    case 888u: goto L_08AAF76C;
    case 889u: goto L_08AAF780;
    case 890u: goto L_08AAF788;
    case 891u: goto L_08AAF790;
    case 892u: goto L_08AAF798;
    case 893u: goto L_08AAF7A8;
    case 894u: goto L_08AAF7B4;
    case 895u: goto L_08AAF7C8;
    case 896u: goto L_08AAF7D0;
    case 897u: goto L_08AAF7D8;
    case 898u: goto L_08AAF808;
    case 899u: goto L_08AAF810;
    case 900u: goto L_08AAF81C;
    case 901u: goto L_08AAF834;
    case 902u: goto L_08AAF840;
    case 903u: goto L_08AAF858;
    case 904u: goto L_08AAF860;
    case 905u: goto L_08AAF86C;
    case 906u: goto L_08AAF8BC;
    case 907u: goto L_08AAF8C4;
    case 908u: goto L_08AAF8CC;
    case 909u: goto L_08AAF8DC;
    case 910u: goto L_08AAF8F8;
    case 911u: goto L_08AAF910;
    case 912u: goto L_08AAF928;
    case 913u: goto L_08AAF934;
    case 914u: goto L_08AAF93C;
    case 915u: goto L_08AAF940;
    case 916u: goto L_08AAF950;
    case 917u: goto L_08AAF990;
    case 918u: goto L_08AAF998;
    case 919u: goto L_08AAF9A0;
    case 920u: goto L_08AAF9A8;
    case 921u: goto L_08AAF9BC;
    case 922u: goto L_08AAF9C4;
    case 923u: goto L_08AAF9CC;
    case 924u: goto L_08AAF9D4;
    case 925u: goto L_08AAF9E8;
    case 926u: goto L_08AAF9F0;
    case 927u: goto L_08AAF9F8;
    case 928u: goto L_08AAFA00;
    case 929u: goto L_08AAFA14;
    case 930u: goto L_08AAFA1C;
    case 931u: goto L_08AAFA24;
    case 932u: goto L_08AAFA30;
    case 933u: goto L_08AAFA38;
    case 934u: goto L_08AAFA40;
    case 935u: goto L_08AAFA48;
    case 936u: goto L_08AAFA54;
    case 937u: goto L_08AAFA58;
    case 938u: goto L_08AAFA68;
    case 939u: goto L_08AAFA6C;
    case 940u: goto L_08AAFA7C;
    case 941u: goto L_08AAFA98;
    case 942u: goto L_08AAFAB4;
    case 943u: goto L_08AAFACC;
    case 944u: goto L_08AAFAD4;
    case 945u: goto L_08AAFADC;
    case 946u: goto L_08AAFAEC;
    case 947u: goto L_08AAFAF4;
    case 948u: goto L_08AAFB00;
    case 949u: goto L_08AAFB08;
    case 950u: goto L_08AAFB14;
    case 951u: goto L_08AAFB24;
    case 952u: goto L_08AAFB3C;
    case 953u: goto L_08AAFB44;
    case 954u: goto L_08AAFB4C;
    case 955u: goto L_08AAFB5C;
    case 956u: goto L_08AAFB64;
    case 957u: goto L_08AAFB70;
    case 958u: goto L_08AAFB78;
    case 959u: goto L_08AAFB84;
    case 960u: goto L_08AAFB94;
    case 961u: goto L_08AAFBAC;
    case 962u: goto L_08AAFBB4;
    case 963u: goto L_08AAFBBC;
    case 964u: goto L_08AAFBCC;
    case 965u: goto L_08AAFBD4;
    case 966u: goto L_08AAFBE0;
    case 967u: goto L_08AAFBE8;
    case 968u: goto L_08AAFBF4;
    case 969u: goto L_08AAFC08;
    case 970u: goto L_08AAFC0C;
    case 971u: goto L_08AAFC1C;
    case 972u: goto L_08AAFC28;
    case 973u: goto L_08AAFC34;
    case 974u: goto L_08AAFC3C;
    case 975u: goto L_08AAFC40;
    case 976u: goto L_08AAFC48;
    case 977u: goto L_08AAFC50;
    case 978u: goto L_08AAFC74;
    case 979u: goto L_08AAFC80;
    case 980u: goto L_08AAFC88;
    case 981u: goto L_08AAFC90;
    case 982u: goto L_08AAFC98;
    case 983u: goto L_08AAFCA4;
    case 984u: goto L_08AAFCAC;
    case 985u: goto L_08AAFCBC;
    case 986u: goto L_08AAFCC4;
    case 987u: goto L_08AAFCCC;
    case 988u: goto L_08AAFCD4;
    case 989u: goto L_08AAFCDC;
    case 990u: goto L_08AAFCE4;
    case 991u: goto L_08AAFCF4;
    case 992u: goto L_08AAFCFC;
    case 993u: goto L_08AAFD04;
    case 994u: goto L_08AAFD18;
    case 995u: goto L_08AAFD20;
    case 996u: goto L_08AAFD28;
    case 997u: goto L_08AAFD38;
    case 998u: goto L_08AAFD40;
    case 999u: goto L_08AAFD58;
    case 1000u: goto L_08AAFD68;
    case 1001u: goto L_08AAFD74;
    case 1002u: goto L_08AAFD7C;
    case 1003u: goto L_08AAFD88;
    case 1004u: goto L_08AAFD90;
    case 1005u: goto L_08AAFD9C;
    case 1006u: goto L_08AAFDA4;
    case 1007u: goto L_08AAFDAC;
    case 1008u: goto L_08AAFDB8;
    case 1009u: goto L_08AAFDC4;
    case 1010u: goto L_08AAFDD8;
    case 1011u: goto L_08AAFDF4;
    case 1012u: goto L_08AAFDFC;
    case 1013u: goto L_08AAFE04;
    case 1014u: goto L_08AAFE08;
    case 1015u: goto L_08AAFE20;
    case 1016u: goto L_08AAFE28;
    case 1017u: goto L_08AAFE44;
    case 1018u: goto L_08AAFE4C;
    case 1019u: goto L_08AAFE54;
    case 1020u: goto L_08AAFE64;
    case 1021u: goto L_08AAFE6C;
    case 1022u: goto L_08AAFE74;
    case 1023u: goto L_08AAFE7C;
    case 1024u: goto L_08AAFE84;
    case 1025u: goto L_08AAFE90;
    case 1026u: goto L_08AAFEA4;
    case 1027u: goto L_08AAFEB8;
    case 1028u: goto L_08AAFEE0;
    case 1029u: goto L_08AAFEE8;
    case 1030u: goto L_08AAFEF8;
    case 1031u: goto L_08AAFF04;
    case 1032u: goto L_08AAFF0C;
    case 1033u: goto L_08AAFF14;
    case 1034u: goto L_08AAFF20;
    case 1035u: goto L_08AAFF24;
    case 1036u: goto L_08AAFF2C;
    case 1037u: goto L_08AAFF3C;
    case 1038u: goto L_08AAFF54;
    case 1039u: goto L_08AAFF64;
    case 1040u: goto L_08AAFF70;
    case 1041u: goto L_08AAFF7C;
    case 1042u: goto L_08AAFF84;
    case 1043u: goto L_08AAFF88;
    case 1044u: goto L_08AAFF94;
    case 1045u: goto L_08AAFFA4;
    case 1046u: goto L_08AAFFB8;
    case 1047u: goto L_08AAFFCC;
    case 1048u: goto L_08AAFFD4;
    case 1049u: goto L_08AAFFE8;
    case 1050u: goto L_08AAFFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AAC000:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC00C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AAC028u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 993u, 0x08AAB8B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAC028u) goto L_08AAC028;
    return;
L_08AAC028:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7208));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC048:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAC064u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 110u, 0x08A7C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08AAC064u) goto L_08AAC064;
    return;
L_08AAC064:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7240));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC084:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AAC08C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AAC0A4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 938u, 0x08AAB42Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC0A4u) goto L_08AAC0A4;
    return;
L_08AAC0A4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7320));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAC0B8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    goto L_08AAC2E8;
L_08AAC0B8:
    ctx.set_gpr(31, 0x08AAC0C0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 935u, 0x08AAB3C0u>(ctx, &aot_mem) && ctx.pc == 0x08AAC0C0u) goto L_08AAC0C0;
    return;
L_08AAC0C0:
    ctx.set_gpr(31, 0x08AAC0C8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 954u, 0x08AAB59Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC0C8u) goto L_08AAC0C8;
    return;
L_08AAC0C8:
    ctx.set_gpr(31, 0x08AAC0D0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(108));
    goto L_08AAC2AC;
L_08AAC0D0:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(244));
    goto L_08AAC0D4;
L_08AAC0D4:
    ctx.set_gpr(31, 0x08AAC0DCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 662u, 0x08AAA460u>(ctx, &aot_mem) && ctx.pc == 0x08AAC0DCu) goto L_08AAC0DC;
    return;
L_08AAC0DC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(308));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC0D4;
      }
      goto L_08AAC0F0;
    }
L_08AAC0F0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAC100u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAC100u) goto L_08AAC100;
    return;
L_08AAC100:
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
L_08AAC118:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AAC15C;
      }
      goto L_08AAC134;
    }
L_08AAC134:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7352));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAC148u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 975u, 0x08AAB6F4u>(ctx, &aot_mem) && ctx.pc == 0x08AAC148u) goto L_08AAC148;
    return;
L_08AAC148:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AAC160;
    }
    goto L_08AAC154;
L_08AAC154:
    ctx.set_gpr(31, 0x08AAC15Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AAC15Cu) goto L_08AAC15C;
    return;
L_08AAC15C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AAC160;
L_08AAC160:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC174:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AAC1B8;
      }
      goto L_08AAC190;
    }
L_08AAC190:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7384));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAC1A4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 74u, 0x08A7C488u>(ctx, &aot_mem) && ctx.pc == 0x08AAC1A4u) goto L_08AAC1A4;
    return;
L_08AAC1A4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AAC1BC;
    }
    goto L_08AAC1B0;
L_08AAC1B0:
    ctx.set_gpr(31, 0x08AAC1B8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AAC1B8u) goto L_08AAC1B8;
    return;
L_08AAC1B8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AAC1BC;
L_08AAC1BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC1D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(229), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AAC25C;
L_08AAC25C:
    ctx.set_gpr(31, 0x08AAC264u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(244));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 664u, 0x08AAA488u>(ctx, &aot_mem) && ctx.pc == 0x08AAC264u) goto L_08AAC264;
    return;
L_08AAC264:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AAC25C;
      }
      goto L_08AAC274;
    }
L_08AAC274:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(372), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(404), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(372), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(436), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(440), 0u);
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
L_08AAC2AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AAC2C8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 993u, 0x08AAB8B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAC2C8u) goto L_08AAC2C8;
    return;
L_08AAC2C8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7352));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC2E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAC304u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 110u, 0x08A7C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08AAC304u) goto L_08AAC304;
    return;
L_08AAC304:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7384));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC324:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AAC32C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AAC344u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 938u, 0x08AAB42Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC344u) goto L_08AAC344;
    return;
L_08AAC344:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6776));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAC358u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    goto L_08AAC550;
L_08AAC358:
    ctx.set_gpr(31, 0x08AAC360u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 935u, 0x08AAB3C0u>(ctx, &aot_mem) && ctx.pc == 0x08AAC360u) goto L_08AAC360;
    return;
L_08AAC360:
    ctx.set_gpr(31, 0x08AAC368u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 954u, 0x08AAB59Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC368u) goto L_08AAC368;
    return;
L_08AAC368:
    ctx.set_gpr(31, 0x08AAC370u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(104));
    goto L_08AAC514;
L_08AAC370:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(216));
    goto L_08AAC374;
L_08AAC374:
    ctx.set_gpr(31, 0x08AAC37Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 662u, 0x08AAA460u>(ctx, &aot_mem) && ctx.pc == 0x08AAC37Cu) goto L_08AAC37C;
    return;
L_08AAC37C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC374;
      }
      goto L_08AAC390;
    }
L_08AAC390:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAC3A0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAC3A0u) goto L_08AAC3A0;
    return;
L_08AAC3A0:
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
L_08AAC3B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AAC3FC;
      }
      goto L_08AAC3D4;
    }
L_08AAC3D4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6524));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAC3E8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 975u, 0x08AAB6F4u>(ctx, &aot_mem) && ctx.pc == 0x08AAC3E8u) goto L_08AAC3E8;
    return;
L_08AAC3E8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AAC400;
    }
    goto L_08AAC3F4;
L_08AAC3F4:
    ctx.set_gpr(31, 0x08AAC3FCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AAC3FCu) goto L_08AAC3FC;
    return;
L_08AAC3FC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AAC400;
L_08AAC400:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC414:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AAC458;
      }
      goto L_08AAC430;
    }
L_08AAC430:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6808));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAC444u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 74u, 0x08A7C488u>(ctx, &aot_mem) && ctx.pc == 0x08AAC444u) goto L_08AAC444;
    return;
L_08AAC444:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AAC45C;
    }
    goto L_08AAC450;
L_08AAC450:
    ctx.set_gpr(31, 0x08AAC458u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AAC458u) goto L_08AAC458;
    return;
L_08AAC458:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AAC45C;
L_08AAC45C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC470:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(3, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08AAC4E0;
L_08AAC4E0:
    ctx.set_gpr(31, 0x08AAC4E8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(216));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 664u, 0x08AAA488u>(ctx, &aot_mem) && ctx.pc == 0x08AAC4E8u) goto L_08AAC4E8;
    return;
L_08AAC4E8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AAC4E0;
      }
      goto L_08AAC4F8;
    }
L_08AAC4F8:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(0u));
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
L_08AAC514:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAC530u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 993u, 0x08AAB8B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAC530u) goto L_08AAC530;
    return;
L_08AAC530:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6524));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC550:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAC56Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 110u, 0x08A7C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08AAC56Cu) goto L_08AAC56C;
    return;
L_08AAC56C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6808));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC58C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AAC594:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAC5A8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 938u, 0x08AAB42Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC5A8u) goto L_08AAC5A8;
    return;
L_08AAC5A8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6888));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAC5C0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAC5C0u) goto L_08AAC5C0;
    return;
L_08AAC5C0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC5D4:
    ctx.set_gpr(5, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(3, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC604:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AAC60C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC614:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(9420), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC61C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AAC82C;
      }
      goto L_08AAC640;
    }
L_08AAC640:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-23756));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC65C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AAC670;
    }
    goto L_08AAC668;
L_08AAC668:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAC830;
      }
      goto L_08AAC670;
    }
L_08AAC670:
    ctx.set_gpr(31, 0x08AAC678u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAC678u) goto L_08AAC678;
    return;
L_08AAC678:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AAC690u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08AAC690u) goto L_08AAC690;
    return;
L_08AAC690:
    ctx.set_gpr(31, 0x08AAC698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC698u) goto L_08AAC698;
    return;
L_08AAC698:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAC6A4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08AAC6A4u) goto L_08AAC6A4;
    return;
L_08AAC6A4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08AAC6BCu);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    goto L_08AAE1A4;
L_08AAC6BC:
    ctx.set_gpr(31, 0x08AAC6C4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAC8BC;
L_08AAC6C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AAC6D0;
L_08AAC6D0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAC6DCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AAC910;
L_08AAC6DC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AAC830;
    }
    goto L_08AAC6E8;
L_08AAC6E8:
    ctx.set_gpr(31, 0x08AAC6F0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAD4F8;
L_08AAC6F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AAC6FC;
L_08AAC6FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAC708u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AAD508;
L_08AAC708:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AAC71C;
    }
    goto L_08AAC714;
L_08AAC714:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAC830;
      }
      goto L_08AAC71C;
    }
L_08AAC71C:
    ctx.set_gpr(31, 0x08AAC724u);
    // nop
    goto L_08AACEF8;
L_08AAC724:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AAC730;
L_08AAC730:
    ctx.set_gpr(31, 0x08AAC738u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AACF00;
L_08AAC738:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08AAC74C;
    }
    goto L_08AAC744;
L_08AAC744:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAC830;
      }
      goto L_08AAC74C;
    }
L_08AAC74C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AAC754;
L_08AAC754:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    goto L_08AAC758;
L_08AAC758:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AAC764u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAD528;
L_08AAC764:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AAC778;
    }
    goto L_08AAC770;
L_08AAC770:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAC830;
      }
      goto L_08AAC778;
    }
L_08AAC778:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAC758;
      }
      goto L_08AAC788;
    }
L_08AAC788:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AAC798;
L_08AAC798:
    ctx.set_gpr(31, 0x08AAC7A0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29328)));
    goto L_08AAC854;
L_08AAC7A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAC7ACu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AACEA4;
L_08AAC7AC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AAC7C0;
    }
    goto L_08AAC7B8;
L_08AAC7B8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAC830;
      }
      goto L_08AAC7C0;
    }
L_08AAC7C0:
    ctx.set_gpr(31, 0x08AAC7C8u);
    // nop
    goto L_08AAD0E4;
L_08AAC7C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AAC7D4;
L_08AAC7D4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08AAC7D8;
L_08AAC7D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08AAC7E4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AAC844;
L_08AAC7E4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAC7F4u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AAD114;
L_08AAC7F4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AAC808;
    }
    goto L_08AAC800;
L_08AAC800:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAC830;
      }
      goto L_08AAC808;
    }
L_08AAC808:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AAC7D8;
    }
    goto L_08AAC81C;
L_08AAC81C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AAC82C;
L_08AAC82C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AAC830;
L_08AAC830:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC844:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC854:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC85C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
        goto L_08AAC8AC;
    }
    goto L_08AAC87C;
L_08AAC87C:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AAC8B0;
    }
    goto L_08AAC884;
L_08AAC884:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC8A0;
      }
      goto L_08AAC88C;
    }
L_08AAC88C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAC8A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAC8A0u) goto L_08AAC8A0;
    return;
L_08AAC8A0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC8B0;
      }
      goto L_08AAC8AC;
    }
L_08AAC8AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AAC8B0;
L_08AAC8B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC8BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAC8D0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAC8D0u) goto L_08AAC8D0;
    return;
L_08AAC8D0:
    ctx.set_gpr(31, 0x08AAC8D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08AAC8D8u) goto L_08AAC8D8;
    return;
L_08AAC8D8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08AAC8E4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 23u, 0x088641F0u>(ctx, &aot_mem) && ctx.pc == 0x08AAC8E4u) goto L_08AAC8E4;
    return;
L_08AAC8E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (ctx.gpr[4] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28936), ctx.gpr[4]);
        goto L_08AAC900;
    }
    goto L_08AAC8F0;
L_08AAC8F0:
    ctx.set_gpr(31, 0x08AAC8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 735u, 0x0884E828u>(ctx, &aot_mem) && ctx.pc == 0x08AAC8F8u) goto L_08AAC8F8;
    return;
L_08AAC8F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28936), ctx.gpr[4]);
    goto L_08AAC900;
L_08AAC900:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAC934;
      }
      goto L_08AAC92C;
    }
L_08AAC92C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(84));
      if (branch_taken) {
          goto L_08AAC938;
      }
      goto L_08AAC934;
    }
L_08AAC934:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1495));
    goto L_08AAC938;
L_08AAC938:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28936)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AAC950u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x08AAC950u) goto L_08AAC950;
    return;
L_08AAC950:
    ctx.set_gpr(31, 0x08AAC958u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AAC958u) goto L_08AAC958;
    return;
L_08AAC958:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC974;
      }
      goto L_08AAC960;
    }
L_08AAC960:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AAC96Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AAC96Cu) goto L_08AAC96C;
    return;
L_08AAC96C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AACA10;
      }
      goto L_08AAC974;
    }
L_08AAC974:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28936)));
        goto L_08AAC9B0;
    }
    goto L_08AAC97C;
L_08AAC97C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28936)));
    ctx.set_gpr(31, 0x08AAC988u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 209u, 0x088509B4u>(ctx, &aot_mem) && ctx.pc == 0x08AAC988u) goto L_08AAC988;
    return;
L_08AAC988:
    ctx.set_gpr(31, 0x08AAC990u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem) && ctx.pc == 0x08AAC990u) goto L_08AAC990;
    return;
L_08AAC990:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAC99Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(25712));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 392u, 0x08B0D848u>(ctx, &aot_mem) && ctx.pc == 0x08AAC99Cu) goto L_08AAC99C;
    return;
L_08AAC99C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08AAC9A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x08AAC9A8u) goto L_08AAC9A8;
    return;
L_08AAC9A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28936)));
      if (branch_taken) {
          goto L_08AAC9E0;
      }
      goto L_08AAC9B0;
    }
L_08AAC9B0:
    ctx.set_gpr(31, 0x08AAC9B8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 209u, 0x088509B4u>(ctx, &aot_mem) && ctx.pc == 0x08AAC9B8u) goto L_08AAC9B8;
    return;
L_08AAC9B8:
    ctx.set_gpr(31, 0x08AAC9C0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem) && ctx.pc == 0x08AAC9C0u) goto L_08AAC9C0;
    return;
L_08AAC9C0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(25712));
    ctx.set_gpr(31, 0x08AAC9D0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(25036));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 402u, 0x08B0D8FCu>(ctx, &aot_mem) && ctx.pc == 0x08AAC9D0u) goto L_08AAC9D0;
    return;
L_08AAC9D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08AAC9DCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x08AAC9DCu) goto L_08AAC9DC;
    return;
L_08AAC9DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28936)));
    goto L_08AAC9E0;
L_08AAC9E0:
    ctx.set_gpr(31, 0x08AAC9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 45u, 0x08850228u>(ctx, &aot_mem) && ctx.pc == 0x08AAC9E8u) goto L_08AAC9E8;
    return;
L_08AAC9E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28936)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
        goto L_08AACA04;
    }
    goto L_08AAC9F4;
L_08AAC9F4:
    ctx.set_gpr(31, 0x08AAC9FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 778u, 0x0884EA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC9FCu) goto L_08AAC9FC;
    return;
L_08AAC9FC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28936), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_08AACA04;
L_08AACA04:
    ctx.set_gpr(31, 0x08AACA0Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AACA0Cu) goto L_08AACA0C;
    return;
L_08AACA0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AACA10;
L_08AACA10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACA24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08AACA4Cu);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    goto L_08AACAA4;
L_08AACA4C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(17, ctx.gpr[18] + static_cast<std::uint32_t>(142));
    ctx.set_gpr(31, 0x08AACA5Cu);
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(308));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 563u, 0x08862198u>(ctx, &aot_mem) && ctx.pc == 0x08AACA5Cu) goto L_08AACA5C;
    return;
L_08AACA5C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AACA6C;
      }
      goto L_08AACA68;
    }
L_08AACA68:
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(361));
    goto L_08AACA6C;
L_08AACA6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AACA88u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(195));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 975u, 0x0885BBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AACA88u) goto L_08AACA88;
    return;
L_08AACA88:
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
L_08AACAA4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACAAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08AACAC8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 985u, 0x0885BCF8u>(ctx, &aot_mem) && ctx.pc == 0x08AACAC8u) goto L_08AACAC8;
    return;
L_08AACAC8:
    ctx.set_gpr(31, 0x08AACAD0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AACAD0u) goto L_08AACAD0;
    return;
L_08AACAD0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08AACAEC;
    }
    goto L_08AACAD8;
L_08AACAD8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AACAE4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AACAE4u) goto L_08AACAE4;
    return;
L_08AACAE4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AACB1C;
      }
      goto L_08AACAEC;
    }
L_08AACAEC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AACB0Cu);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AACB0Cu) goto L_08AACB0C;
    return;
L_08AACB0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AACB18u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AACB18u) goto L_08AACB18;
    return;
L_08AACB18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AACB1C;
L_08AACB1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACB2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20824)));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20828)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20832)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20836)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20840)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20844)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20848)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20852)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20856)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20860)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08AACBE0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 25u, 0x08864208u>(ctx, &aot_mem) && ctx.pc == 0x08AACBE0u) goto L_08AACBE0;
    return;
L_08AACBE0:
    ctx.set_gpr(31, 0x08AACBE8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 563u, 0x08862198u>(ctx, &aot_mem) && ctx.pc == 0x08AACBE8u) goto L_08AACBE8;
    return;
L_08AACBE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AACC78;
      }
      goto L_08AACBF4;
    }
L_08AACBF4:
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20864)));
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[29]);
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20868)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20872)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20876)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20880)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20884)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20888)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20892)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20896)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20900)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AACC78;
L_08AACC78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AACC8C;
      }
      goto L_08AACC84;
    }
L_08AACC84:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AACCA8;
      }
      goto L_08AACC8C;
    }
L_08AACC8C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACC98;
      }
      goto L_08AACC94;
    }
L_08AACC94:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08AACC98;
L_08AACC98:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AACCA8;
    }
    goto L_08AACCA0;
L_08AACCA0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AACCA8;
L_08AACCA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACCC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AACCF0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08AACB2C;
L_08AACCF0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AACD04;
    }
    goto L_08AACCFC;
L_08AACCFC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AACD34;
      }
      goto L_08AACD04;
    }
L_08AACD04:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AACD1Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AACD1Cu) goto L_08AACD1C;
    return;
L_08AACD1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08AACD30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 158u, 0x0885C924u>(ctx, &aot_mem) && ctx.pc == 0x08AACD30u) goto L_08AACD30;
    return;
L_08AACD30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AACD34;
L_08AACD34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACD44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08AACD58u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 159u, 0x0885C93Cu>(ctx, &aot_mem) && ctx.pc == 0x08AACD58u) goto L_08AACD58;
    return;
L_08AACD58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACD6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20904)));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20908)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20912)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20916)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20920)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20924)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20928)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20932)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20936)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20940)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08AACE00u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15612));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 45u, 0x08B0C274u>(ctx, &aot_mem) && ctx.pc == 0x08AACE00u) goto L_08AACE00;
    return;
L_08AACE00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACE0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AACE1Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15612));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 50u, 0x08B0C2CCu>(ctx, &aot_mem) && ctx.pc == 0x08AACE1Cu) goto L_08AACE1C;
    return;
L_08AACE1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACE30:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25036));
    goto L_08AACE38;
L_08AACE38:
    // nop
    goto L_08AACE40;
L_08AACE40:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACE4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AACE5Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25036));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 891u, 0x08B0BC9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AACE5Cu) goto L_08AACE5C;
    return;
L_08AACE5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACE70:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(112));
    (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 633u, 0x0885E624u>(ctx, &aot_mem); return;
L_08AACE78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(85));
    ctx.set_gpr(31, 0x08AACE90u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 664u, 0x0885E894u>(ctx, &aot_mem) && ctx.pc == 0x08AACE90u) goto L_08AACE90;
    return;
L_08AACE90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACEA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08AACEC4u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08AACEF0;
L_08AACEC4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1518));
    ctx.set_gpr(31, 0x08AACED4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 664u, 0x0885E894u>(ctx, &aot_mem) && ctx.pc == 0x08AACED4u) goto L_08AACED4;
    return;
L_08AACED4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACEF0:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AACEF8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15408));
    (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 126u, 0x0884C800u>(ctx, &aot_mem); return;
L_08AACF00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(15408));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1497));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1498));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AACF2Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 129u, 0x0884C830u>(ctx, &aot_mem) && ctx.pc == 0x08AACF2Cu) goto L_08AACF2C;
    return;
L_08AACF2C:
    ctx.set_gpr(31, 0x08AACF34u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AACF34u) goto L_08AACF34;
    return;
L_08AACF34:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15608)));
        goto L_08AACF50;
    }
    goto L_08AACF3C;
L_08AACF3C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AACF48u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AACF48u) goto L_08AACF48;
    return;
L_08AACF48:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAD01C;
      }
      goto L_08AACF50;
    }
L_08AACF50:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15408));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AACF70u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AACF70u) goto L_08AACF70;
    return;
L_08AACF70:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(25712));
    ctx.set_gpr(31, 0x08AACF7Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    goto L_08AAD0C4;
L_08AACF7C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AACF88u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08AACF88u) goto L_08AACF88;
    return;
L_08AACF88:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(31, 0x08AACFA0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AACFA0u) goto L_08AACFA0;
    return;
L_08AACFA0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08AACFB4u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08AAD050;
L_08AACFB4:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08AACFC8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15408));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 628u, 0x08857210u>(ctx, &aot_mem) && ctx.pc == 0x08AACFC8u) goto L_08AACFC8;
    return;
L_08AACFC8:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08AACFD4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15408));
    goto L_08AAD040;
L_08AACFD4:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08AACFE0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15408));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 627u, 0x08857200u>(ctx, &aot_mem) && ctx.pc == 0x08AACFE0u) goto L_08AACFE0;
    return;
L_08AACFE0:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08AACFECu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15408));
    goto L_08AAD030;
L_08AACFEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29324)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15608)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAD00Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15408));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAD00Cu) goto L_08AAD00C;
    return;
L_08AAD00C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AAD018u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AAD018u) goto L_08AAD018;
    return;
L_08AAD018:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AAD01C;
L_08AAD01C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD030:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD040:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD050:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08AAD074u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 44u, 0x08A00774u>(ctx, &aot_mem) && ctx.pc == 0x08AAD074u) goto L_08AAD074;
    return;
L_08AAD074:
    ctx.set_gpr(31, 0x08AAD07Cu);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AAD0B0;
L_08AAD07C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AAD088u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AAD0B0;
L_08AAD088:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AAD094u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AAD0B0;
L_08AAD094:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
L_08AAD0B0:
    ctx.set_gpr(2, 16997u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 12001u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD0C4:
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD0E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAD0F8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD0F8u) goto L_08AAD0F8;
    return;
L_08AAD0F8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3648));
    ctx.set_gpr(31, 0x08AAD104u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1005u, 0x0885FE18u>(ctx, &aot_mem) && ctx.pc == 0x08AAD104u) goto L_08AAD104;
    return;
L_08AAD104:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD114:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20944)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20948)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20952)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20956)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20960)));
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08AAD18Cu);
    ctx.set_gpr(19, ctx.gpr[16] + ctx.gpr[2]);
    goto L_08AAD2F0;
L_08AAD18C:
    if (static_cast<std::int32_t>(ctx.gpr[16]) >= 0) {
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
        goto L_08AAD19C;
    }
    goto L_08AAD194;
L_08AAD194:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAD27C;
      }
      goto L_08AAD19C;
    }
L_08AAD19C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(3648));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AAD1B4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1027u, 0x0885FFA0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD1B4u) goto L_08AAD1B4;
    return;
L_08AAD1B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(16, 0u + 0u);
        goto L_08AAD1C8;
    }
    goto L_08AAD1C0;
L_08AAD1C0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAD27C;
      }
      goto L_08AAD1C8;
    }
L_08AAD1C8:
    ctx.set_gpr(31, 0x08AAD1D0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAD2A8;
L_08AAD1D0:
    if (ctx.gpr[2] != ctx.gpr[17]) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08AAD26C;
    }
    goto L_08AAD1D8;
L_08AAD1D8:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AAD1E4u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(25712));
    goto L_08AAD298;
L_08AAD1E4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(3648));
    ctx.set_gpr(31, 0x08AAD1F4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 127u, 0x0886065Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD1F4u) goto L_08AAD1F4;
    return;
L_08AAD1F4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAD200u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08AAD200u) goto L_08AAD200;
    return;
L_08AAD200:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x08AAD218u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD218u) goto L_08AAD218;
    return;
L_08AAD218:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08AAD22Cu);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08AAD050;
L_08AAD22C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08AAD240u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 189u, 0x08850884u>(ctx, &aot_mem) && ctx.pc == 0x08AAD240u) goto L_08AAD240;
    return;
L_08AAD240:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08AAD24Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 191u, 0x088508CCu>(ctx, &aot_mem) && ctx.pc == 0x08AAD24Cu) goto L_08AAD24C;
    return;
L_08AAD24C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08AAD258u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 192u, 0x088508DCu>(ctx, &aot_mem) && ctx.pc == 0x08AAD258u) goto L_08AAD258;
    return;
L_08AAD258:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08AAD264u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 193u, 0x088508ECu>(ctx, &aot_mem) && ctx.pc == 0x08AAD264u) goto L_08AAD264;
    return;
L_08AAD264:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAD27C;
      }
      goto L_08AAD26C;
    }
L_08AAD26C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD1C8;
      }
      goto L_08AAD278;
    }
L_08AAD278:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AAD27C;
L_08AAD27C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD298:
    ctx.set_gpr(2, ctx.gpr[5] << 6u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2968));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD2A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20788)));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20792)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20796)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20800)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD2F0:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD300:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD308:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20964)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20968)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AAD334u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD334u) goto L_08AAD334;
    return;
L_08AAD334:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAD350u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD350u) goto L_08AAD350;
    return;
L_08AAD350:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD364:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AAD374;
L_08AAD374:
    ctx.set_gpr(31, 0x08AAD37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD37Cu) goto L_08AAD37C;
    return;
L_08AAD37C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AAD38Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD38Cu) goto L_08AAD38C;
    return;
L_08AAD38C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD374;
      }
      goto L_08AAD39C;
    }
L_08AAD39C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD3AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-608));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(5, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20972));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(147));
    goto L_08AAD3D0;
L_08AAD3D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AAD3D0;
      }
      goto L_08AAD3E8;
    }
L_08AAD3E8:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08AAD3F4;
L_08AAD3F4:
    ctx.set_gpr(31, 0x08AAD3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD3FCu) goto L_08AAD3FC;
    return;
L_08AAD3FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAD424u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AAD424u) goto L_08AAD424;
    return;
L_08AAD424:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD434;
      }
      goto L_08AAD430;
    }
L_08AAD430:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08AAD434;
L_08AAD434:
    ctx.set_gpr(31, 0x08AAD43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD43Cu) goto L_08AAD43C;
    return;
L_08AAD43C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAD450u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD450u) goto L_08AAD450;
    return;
L_08AAD450:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AAD3F4;
      }
      goto L_08AAD460;
    }
L_08AAD460:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD47C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-608));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(5, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21560));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(147));
    goto L_08AAD49C;
L_08AAD49C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AAD49C;
      }
      goto L_08AAD4B4;
    }
L_08AAD4B4:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08AAD4BC;
L_08AAD4BC:
    ctx.set_gpr(31, 0x08AAD4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD4C4u) goto L_08AAD4C4;
    return;
L_08AAD4C4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08AAD4D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AAD4D4u) goto L_08AAD4D4;
    return;
L_08AAD4D4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AAD4BC;
      }
      goto L_08AAD4E4;
    }
L_08AAD4E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD4F8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29304));
    goto L_08AAD500;
L_08AAD500:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 668u, 0x08852878u>(ctx, &aot_mem); return;
L_08AAD508:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AAD518u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29304));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 279u, 0x08B0D0B0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD518u) goto L_08AAD518;
    return;
L_08AAD518:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD528:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22148));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(11));
    goto L_08AAD548;
L_08AAD548:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AAD548;
      }
      goto L_08AAD568;
    }
L_08AAD568:
    ctx.set_gpr(31, 0x08AAD570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD570u) goto L_08AAD570;
    return;
L_08AAD570:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08AAD584u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 847u, 0x08AB31BCu>(ctx, &aot_mem) && ctx.pc == 0x08AAD584u) goto L_08AAD584;
    return;
L_08AAD584:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22236));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(11));
    goto L_08AAD5B8;
L_08AAD5B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AAD5B8;
      }
      goto L_08AAD5D8;
    }
L_08AAD5D8:
    ctx.set_gpr(31, 0x08AAD5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD5E0u) goto L_08AAD5E0;
    return;
L_08AAD5E0:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAD5F8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 887u, 0x08AB33C4u>(ctx, &aot_mem) && ctx.pc == 0x08AAD5F8u) goto L_08AAD5F8;
    return;
L_08AAD5F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD608:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAD624;
L_08AAD624:
    ctx.set_gpr(31, 0x08AAD62Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AAD598;
L_08AAD62C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 22 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AAD624;
    }
    goto L_08AAD63C;
L_08AAD63C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD650:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAD66C;
L_08AAD66C:
    ctx.set_gpr(31, 0x08AAD674u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AAD598;
L_08AAD674:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 19 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AAD66C;
    }
    goto L_08AAD684;
L_08AAD684:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(29304));
    goto L_08AAD68C;
L_08AAD68C:
    ctx.set_gpr(31, 0x08AAD694u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 302u, 0x08B0D2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD694u) goto L_08AAD694;
    return;
L_08AAD694:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 7 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(29304));
        goto L_08AAD68C;
    }
    goto L_08AAD6A4;
L_08AAD6A4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15608)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15408));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAD6BCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAD6BCu) goto L_08AAD6BC;
    return;
L_08AAD6BC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15608)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAD6CCu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15408));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAD6CCu) goto L_08AAD6CC;
    return;
L_08AAD6CC:
    ctx.set_gpr(31, 0x08AAD6D4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3648));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1011u, 0x0885FE90u>(ctx, &aot_mem) && ctx.pc == 0x08AAD6D4u) goto L_08AAD6D4;
    return;
L_08AAD6D4:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(112));
    goto L_08AAD6DC;
L_08AAD6DC:
    ctx.set_gpr(31, 0x08AAD6E4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 740u, 0x0885ED60u>(ctx, &aot_mem) && ctx.pc == 0x08AAD6E4u) goto L_08AAD6E4;
    return;
L_08AAD6E4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(112));
        goto L_08AAD6DC;
    }
    goto L_08AAD6F4;
L_08AAD6F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28936)));
    if (ctx.gpr[4] == 0u) {
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
        goto L_08AAD710;
    }
    goto L_08AAD700;
L_08AAD700:
    ctx.set_gpr(31, 0x08AAD708u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 778u, 0x0884EA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD708u) goto L_08AAD708;
    return;
L_08AAD708:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28936), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_08AAD710;
L_08AAD710:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD724:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAD740u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAD740u) goto L_08AAD740;
    return;
L_08AAD740:
    ctx.set_gpr(31, 0x08AAD748u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AAD748u) goto L_08AAD748;
    return;
L_08AAD748:
    ctx.set_gpr(31, 0x08AAD750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAD750u) goto L_08AAD750;
    return;
L_08AAD750:
    ctx.set_gpr(31, 0x08AAD758u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AAD758u) goto L_08AAD758;
    return;
L_08AAD758:
    ctx.set_gpr(31, 0x08AAD760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AAD760u) goto L_08AAD760;
    return;
L_08AAD760:
    ctx.set_gpr(31, 0x08AAD768u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AAD768u) goto L_08AAD768;
    return;
L_08AAD768:
    ctx.set_gpr(31, 0x08AAD770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD770u) goto L_08AAD770;
    return;
L_08AAD770:
    ctx.set_gpr(31, 0x08AAD778u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAD778u) goto L_08AAD778;
    return;
L_08AAD778:
    ctx.set_gpr(31, 0x08AAD780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AAD780u) goto L_08AAD780;
    return;
L_08AAD780:
    ctx.set_gpr(31, 0x08AAD788u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08AAD788u) goto L_08AAD788;
    return;
L_08AAD788:
    ctx.set_gpr(31, 0x08AAD790u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAD650;
L_08AAD790:
    ctx.set_gpr(31, 0x08AAD798u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAD47C;
L_08AAD798:
    ctx.set_gpr(31, 0x08AAD7A0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAD364;
L_08AAD7A0:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22324)));
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22328)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AAD7C0;
L_08AAD7C0:
    ctx.set_gpr(31, 0x08AAD7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AAD7C8u) goto L_08AAD7C8;
    return;
L_08AAD7C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AAD7D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 118u, 0x08AF07C4u>(ctx, &aot_mem) && ctx.pc == 0x08AAD7D4u) goto L_08AAD7D4;
    return;
L_08AAD7D4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AAD7C0;
      }
      goto L_08AAD7E4;
    }
L_08AAD7E4:
    ctx.set_gpr(31, 0x08AAD7ECu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAD608;
L_08AAD7EC:
    ctx.set_gpr(31, 0x08AAD7F4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(29304));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 308u, 0x08B0D364u>(ctx, &aot_mem) && ctx.pc == 0x08AAD7F4u) goto L_08AAD7F4;
    return;
L_08AAD7F4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15608)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15408));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAD80Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAD80Cu) goto L_08AAD80C;
    return;
L_08AAD80C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(15608)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAD81Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15408));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAD81Cu) goto L_08AAD81C;
    return;
L_08AAD81C:
    ctx.set_gpr(31, 0x08AAD824u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3648));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1011u, 0x0885FE90u>(ctx, &aot_mem) && ctx.pc == 0x08AAD824u) goto L_08AAD824;
    return;
L_08AAD824:
    ctx.set_gpr(31, 0x08AAD82Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 642u, 0x0885E700u>(ctx, &aot_mem) && ctx.pc == 0x08AAD82Cu) goto L_08AAD82C;
    return;
L_08AAD82C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAD844u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAD844u) goto L_08AAD844;
    return;
L_08AAD844:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08AAD84C;
L_08AAD84C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08AAD878;
    }
    goto L_08AAD858;
L_08AAD858:
    if (ctx.gpr[4] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
        goto L_08AAD874;
    }
    goto L_08AAD860;
L_08AAD860:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAD870u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAD870u) goto L_08AAD870;
    return;
L_08AAD870:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    goto L_08AAD874;
L_08AAD874:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AAD878;
L_08AAD878:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AAD84C;
      }
      goto L_08AAD884;
    }
L_08AAD884:
    ctx.set_gpr(31, 0x08AAD88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AAD88Cu) goto L_08AAD88C;
    return;
L_08AAD88C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAD898u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AAD898u) goto L_08AAD898;
    return;
L_08AAD898:
    ctx.set_gpr(31, 0x08AAD8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD8A0u) goto L_08AAD8A0;
    return;
L_08AAD8A0:
    ctx.set_gpr(31, 0x08AAD8A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD8A8u) goto L_08AAD8A8;
    return;
L_08AAD8A8:
    ctx.set_gpr(31, 0x08AAD8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AAD8B0u) goto L_08AAD8B0;
    return;
L_08AAD8B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16752u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAD8C8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 310u, 0x088494C4u>(ctx, &aot_mem) && ctx.pc == 0x08AAD8C8u) goto L_08AAD8C8;
    return;
L_08AAD8C8:
    ctx.set_gpr(31, 0x08AAD8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AAD8D0u) goto L_08AAD8D0;
    return;
L_08AAD8D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAD8E8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 776u, 0x0884AD28u>(ctx, &aot_mem) && ctx.pc == 0x08AAD8E8u) goto L_08AAD8E8;
    return;
L_08AAD8E8:
    ctx.set_gpr(31, 0x08AAD8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AAD8F0u) goto L_08AAD8F0;
    return;
L_08AAD8F0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AAD904u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 309u, 0x088494B4u>(ctx, &aot_mem) && ctx.pc == 0x08AAD904u) goto L_08AAD904;
    return;
L_08AAD904:
    ctx.set_gpr(31, 0x08AAD90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD90Cu) goto L_08AAD90C;
    return;
L_08AAD90C:
    ctx.set_gpr(31, 0x08AAD914u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08AAD914u) goto L_08AAD914;
    return;
L_08AAD914:
    ctx.set_gpr(31, 0x08AAD91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD91Cu) goto L_08AAD91C;
    return;
L_08AAD91C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAD928u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 275u, 0x08AB0FF8u>(ctx, &aot_mem) && ctx.pc == 0x08AAD928u) goto L_08AAD928;
    return;
L_08AAD928:
    ctx.set_gpr(31, 0x08AAD930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD930u) goto L_08AAD930;
    return;
L_08AAD930:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAD940u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 936u, 0x08AB36B0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD940u) goto L_08AAD940;
    return;
L_08AAD940:
    ctx.set_gpr(31, 0x08AAD948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD948u) goto L_08AAD948;
    return;
L_08AAD948:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AAD958u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 936u, 0x08AB36B0u>(ctx, &aot_mem) && ctx.pc == 0x08AAD958u) goto L_08AAD958;
    return;
L_08AAD958:
    ctx.set_gpr(31, 0x08AAD960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AAD960u) goto L_08AAD960;
    return;
L_08AAD960:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15692u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x08AAD974u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1017u, 0x08A7F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08AAD974u) goto L_08AAD974;
    return;
L_08AAD974:
    ctx.set_gpr(31, 0x08AAD97Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 651u, 0x08AAA32Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD97Cu) goto L_08AAD97C;
    return;
L_08AAD97C:
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
L_08AAD994:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AADB38;
      }
      goto L_08AAD9C0;
    }
L_08AAD9C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
        goto L_08AADAF4;
    }
    goto L_08AAD9CC;
L_08AAD9CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
        goto L_08AAD9F0;
    }
    goto L_08AAD9D8;
L_08AAD9D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AAD9EC;
      }
      goto L_08AAD9E4;
    }
L_08AAD9E4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08AADB54;
      }
      goto L_08AAD9EC;
    }
L_08AAD9EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    goto L_08AAD9F0;
L_08AAD9F0:
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AADA14;
      }
      goto L_08AAD9FC;
    }
L_08AAD9FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AADA10u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AADA10u) goto L_08AADA10;
    return;
L_08AADA10:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_08AADA14;
L_08AADA14:
    ctx.set_gpr(31, 0x08AADA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AADA1Cu) goto L_08AADA1C;
    return;
L_08AADA1C:
    ctx.set_gpr(31, 0x08AADA24u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08AADA24u) goto L_08AADA24;
    return;
L_08AADA24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AADB50;
      }
      goto L_08AADA2C;
    }
L_08AADA2C:
    ctx.set_gpr(31, 0x08AADA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AADA34u) goto L_08AADA34;
    return;
L_08AADA34:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(3648));
    goto L_08AADA3C;
L_08AADA3C:
    ctx.set_gpr(31, 0x08AADA44u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 131u, 0x088606B4u>(ctx, &aot_mem) && ctx.pc == 0x08AADA44u) goto L_08AADA44;
    return;
L_08AADA44:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(3648));
        goto L_08AADA3C;
    }
    goto L_08AADA54;
L_08AADA54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
        goto L_08AADAB8;
    }
    goto L_08AADA64;
L_08AADA64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AADA9C;
      }
      goto L_08AADA70;
    }
L_08AADA70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AADA84;
      }
      goto L_08AADA7C;
    }
L_08AADA7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AADAC4;
      }
      goto L_08AADA84;
    }
L_08AADA84:
    ctx.set_gpr(31, 0x08AADA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AADA8Cu) goto L_08AADA8C;
    return;
L_08AADA8C:
    ctx.set_gpr(31, 0x08AADA94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x08AADA94u) goto L_08AADA94;
    return;
L_08AADA94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AADAC4;
      }
      goto L_08AADA9C;
    }
L_08AADA9C:
    ctx.set_gpr(31, 0x08AADAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AADAA4u) goto L_08AADAA4;
    return;
L_08AADAA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AADAB0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08AADAB0u) goto L_08AADAB0;
    return;
L_08AADAB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AADAC4;
      }
      goto L_08AADAB8;
    }
L_08AADAB8:
    ctx.set_gpr(31, 0x08AADAC0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AAE2D8;
L_08AADAC0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_08AADAC4;
L_08AADAC4:
    ctx.set_gpr(31, 0x08AADACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x08AADACCu) goto L_08AADACC;
    return;
L_08AADACC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), 0u);
        goto L_08AADAF0;
    }
    goto L_08AADAE0;
L_08AADAE0:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08AADAF0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AAE130;
L_08AADAF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    goto L_08AADAF4;
L_08AADAF4:
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AADB18;
      }
      goto L_08AADB00;
    }
L_08AADB00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AADB14u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AADB14u) goto L_08AADB14;
    return;
L_08AADB14:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_08AADB18;
L_08AADB18:
    ctx.set_gpr(31, 0x08AADB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AADB20u) goto L_08AADB20;
    return;
L_08AADB20:
    ctx.set_gpr(31, 0x08AADB28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08AADB28u) goto L_08AADB28;
    return;
L_08AADB28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AADB50;
      }
      goto L_08AADB30;
    }
L_08AADB30:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), 0u);
    goto L_08AADB38;
L_08AADB38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AADB4Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AADB4Cu) goto L_08AADB4C;
    return;
L_08AADB4C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_08AADB50;
L_08AADB50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08AADB54;
L_08AADB54:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AADB6Cu);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AADB6Cu) goto L_08AADB6C;
    return;
L_08AADB6C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AADB7Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 646u, 0x0885E758u>(ctx, &aot_mem) && ctx.pc == 0x08AADB7Cu) goto L_08AADB7C;
    return;
L_08AADB7C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AADB8Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(3648));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1013u, 0x0885FEC0u>(ctx, &aot_mem) && ctx.pc == 0x08AADB8Cu) goto L_08AADB8C;
    return;
L_08AADB8C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15608)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AADBA8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15408));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AADBA8u) goto L_08AADBA8;
    return;
L_08AADBA8:
    ctx.set_gpr(31, 0x08AADBB0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(28940));
    goto L_08AADBD0;
L_08AADBB0:
    ctx.set_gpr(2, 0u < ctx.gpr[16] ? 1u : 0u);
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
L_08AADBD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AADBE4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08AADBE4u) goto L_08AADBE4;
    return;
L_08AADBE4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AADBF8;
    }
    goto L_08AADBEC;
L_08AADBEC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AADBF8u);
    ctx.set_gpr(25, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08AADBF8u) goto L_08AADBF8;
    return;
L_08AADBF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADC0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AADC28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AADC28u) goto L_08AADC28;
    return;
L_08AADC28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADC3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AADC5Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08AADC5Cu) goto L_08AADC5C;
    return;
L_08AADC5C:
    ctx.set_gpr(31, 0x08AADC64u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08AADC64u) goto L_08AADC64;
    return;
L_08AADC64:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(31, 0x08AADC7Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AADC7Cu) goto L_08AADC7C;
    return;
L_08AADC7C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08AADC90u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_08AAD050;
L_08AADC90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AADC9Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08AADD18;
L_08AADC9C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08AADCB0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 628u, 0x08857210u>(ctx, &aot_mem) && ctx.pc == 0x08AADCB0u) goto L_08AADCB0;
    return;
L_08AADCB0:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08AADCBCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08AAD040;
L_08AADCBC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08AADCC8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 627u, 0x08857200u>(ctx, &aot_mem) && ctx.pc == 0x08AADCC8u) goto L_08AADCC8;
    return;
L_08AADCC8:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08AADCD4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08AAD030;
L_08AADCD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x08AADCE4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 663u, 0x0886ABF4u>(ctx, &aot_mem) && ctx.pc == 0x08AADCE4u) goto L_08AADCE4;
    return;
L_08AADCE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x08AADCF4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 662u, 0x0886ABE4u>(ctx, &aot_mem) && ctx.pc == 0x08AADCF4u) goto L_08AADCF4;
    return;
L_08AADCF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x08AADD04u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 661u, 0x0886ABD4u>(ctx, &aot_mem) && ctx.pc == 0x08AADD04u) goto L_08AADD04;
    return;
L_08AADD04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADD18:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADD34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AADD70u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AADD70u) goto L_08AADD70;
    return;
L_08AADD70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AADDA4;
    }
    goto L_08AADD7C;
L_08AADD7C:
    ctx.set_gpr(31, 0x08AADD84u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15612));
    goto L_08AADDF4;
L_08AADD84:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AADD90u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15612));
    goto L_08AADDC8;
L_08AADD90:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15612));
    ctx.set_gpr(31, 0x08AADD9Cu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 69u, 0x08B0C3A4u>(ctx, &aot_mem) && ctx.pc == 0x08AADD9Cu) goto L_08AADD9C;
    return;
L_08AADD9C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AADDB0;
      }
      goto L_08AADDA4;
    }
L_08AADDA4:
    ctx.set_gpr(31, 0x08AADDACu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AADE00;
L_08AADDAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AADDB0;
L_08AADDB0:
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
L_08AADDC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AADDE0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 715u, 0x08AAA868u>(ctx, &aot_mem) && ctx.pc == 0x08AADDE0u) goto L_08AADDE0;
    return;
L_08AADDE0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADDF4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADE00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(6));
    ctx.set_fpr_bits(16, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AADE58u);
    ctx.set_gpr(10, ctx.gpr[9] + 0u);
    goto L_08AADF18;
L_08AADE58:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(6));
    ctx.set_fpr_bits(16, ctx.fpr_bits(12));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08AADE98u);
    ctx.set_gpr(10, 0u + 0u);
    goto L_08AADF18;
L_08AADE98:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(6));
    ctx.set_fpr_bits(16, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AADED8u);
    ctx.set_gpr(10, ctx.gpr[9] + 0u);
    goto L_08AADF18;
L_08AADED8:
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AADF04u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 81u, 0x08B0C48Cu>(ctx, &aot_mem) && ctx.pc == 0x08AADF04u) goto L_08AADF04;
    return;
L_08AADF04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADF18:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADF58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29328)));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AADF80u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08AADFF8;
L_08AADF80:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[16]))));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AADF94u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 679u, 0x08862AB8u>(ctx, &aot_mem) && ctx.pc == 0x08AADF94u) goto L_08AADF94;
    return;
L_08AADF94:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(-2));
        goto L_08AADFB4;
    }
    goto L_08AADF9C;
L_08AADF9C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28940));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AADFACu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AADFE8;
L_08AADFAC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AADFC4;
      }
      goto L_08AADFB4;
    }
L_08AADFB4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28940));
    ctx.set_gpr(31, 0x08AADFC0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AADFD8;
L_08AADFC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AADFC4;
L_08AADFC4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AADFD8:
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 914u, 0x08AAB1D8u>(ctx, &aot_mem); return;
L_08AADFE8:
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 914u, 0x08AAB1D8u>(ctx, &aot_mem); return;
L_08AADFF8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAE060;
      }
      goto L_08AAE028;
    }
L_08AAE028:
    ctx.set_gpr(31, 0x08AAE030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AAE030u) goto L_08AAE030;
    return;
L_08AAE030:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAE044u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAE044u) goto L_08AAE044;
    return;
L_08AAE044:
    ctx.set_gpr(31, 0x08AAE04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x08AAE04Cu) goto L_08AAE04C;
    return;
L_08AAE04C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAE060u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAE060u) goto L_08AAE060;
    return;
L_08AAE060:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAE094;
      }
      goto L_08AAE080;
    }
L_08AAE080:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAE094u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAE094u) goto L_08AAE094;
    return;
L_08AAE094:
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
L_08AAE0B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAE0D8;
      }
      goto L_08AAE0D0;
    }
L_08AAE0D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08AAE0D8;
L_08AAE0D8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.set_gpr(31, 0x08AAE0E4u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAE0E4u) goto L_08AAE0E4;
    return;
L_08AAE0E4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AAE0FCu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08AAE0FCu) goto L_08AAE0FC;
    return;
L_08AAE0FC:
    ctx.set_gpr(31, 0x08AAE104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAE104u) goto L_08AAE104;
    return;
L_08AAE104:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AAE120u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE120u) goto L_08AAE120;
    return;
L_08AAE120:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AAE158u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAE158u) goto L_08AAE158;
    return;
L_08AAE158:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AAE170u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08AAE170u) goto L_08AAE170;
    return;
L_08AAE170:
    ctx.set_gpr(31, 0x08AAE178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAE178u) goto L_08AAE178;
    return;
L_08AAE178:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AAE194u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE194u) goto L_08AAE194;
    return;
L_08AAE194:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE1A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_08AAE208;
      }
      goto L_08AAE1D8;
    }
L_08AAE1D8:
    ctx.set_gpr(31, 0x08AAE1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AAE1E0u) goto L_08AAE1E0;
    return;
L_08AAE1E0:
    ctx.set_gpr(31, 0x08AAE1E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08AAE1E8u) goto L_08AAE1E8;
    return;
L_08AAE1E8:
    ctx.set_gpr(31, 0x08AAE1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE1F0u) goto L_08AAE1F0;
    return;
L_08AAE1F0:
    ctx.set_gpr(31, 0x08AAE1F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AAE1F8u) goto L_08AAE1F8;
    return;
L_08AAE1F8:
    ctx.set_gpr(31, 0x08AAE200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE200u) goto L_08AAE200;
    return;
L_08AAE200:
    ctx.set_gpr(31, 0x08AAE208u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AAE208u) goto L_08AAE208;
    return;
L_08AAE208:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE21C;
      }
      goto L_08AAE210;
    }
L_08AAE210:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08AAE21Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08AAE21Cu) goto L_08AAE21C;
    return;
L_08AAE21C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE250;
      }
      goto L_08AAE224;
    }
L_08AAE224:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAE23Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAE23Cu) goto L_08AAE23C;
    return;
L_08AAE23C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE250;
      }
      goto L_08AAE244;
    }
L_08AAE244:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08AAE250u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAE2C8;
L_08AAE250:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AAE2AC;
    }
    goto L_08AAE258;
L_08AAE258:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08AAE25C;
L_08AAE25C:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3648));
        goto L_08AAE278;
    }
    goto L_08AAE264;
L_08AAE264:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3648));
    ctx.set_gpr(31, 0x08AAE270u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 68u, 0x08860384u>(ctx, &aot_mem) && ctx.pc == 0x08AAE270u) goto L_08AAE270;
    return;
L_08AAE270:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAE284;
      }
      goto L_08AAE278;
    }
L_08AAE278:
    ctx.set_gpr(31, 0x08AAE280u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 100u, 0x08860534u>(ctx, &aot_mem) && ctx.pc == 0x08AAE280u) goto L_08AAE280;
    return;
L_08AAE280:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AAE284;
L_08AAE284:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE25C;
      }
      goto L_08AAE290;
    }
L_08AAE290:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(15608)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15408));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAE2A8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAE2A8u) goto L_08AAE2A8;
    return;
L_08AAE2A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AAE2AC;
L_08AAE2AC:
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
L_08AAE2C8:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 489u, 0x0885DDBCu>(ctx, &aot_mem); return;
L_08AAE2D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23680));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23728));
    ctx.set_gpr(31, 0x08AAE310u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 206u, 0x08804DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AAE310u) goto L_08AAE310;
    return;
L_08AAE310:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAE324u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08AAE000;
L_08AAE324:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08AAE330u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 308u, 0x08ABD0E4u>(ctx, &aot_mem) && ctx.pc == 0x08AAE330u) goto L_08AAE330;
    return;
L_08AAE330:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AAE360u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE360u) goto L_08AAE360;
    return;
L_08AAE360:
    ctx.set_gpr(31, 0x08AAE368u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AAE368u) goto L_08AAE368;
    return;
L_08AAE368:
    ctx.set_gpr(1, ctx.gpr[17] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAE534;
      }
      goto L_08AAE374;
    }
L_08AAE374:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-23672));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE390:
    ctx.set_gpr(31, 0x08AAE398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE398u) goto L_08AAE398;
    return;
L_08AAE398:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE3A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE3A4u) goto L_08AAE3A4;
    return;
L_08AAE3A4:
    ctx.set_gpr(31, 0x08AAE3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE3ACu) goto L_08AAE3AC;
    return;
L_08AAE3AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE3B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE3B8u) goto L_08AAE3B8;
    return;
L_08AAE3B8:
    ctx.set_gpr(31, 0x08AAE3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE3C0u) goto L_08AAE3C0;
    return;
L_08AAE3C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE3CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE3CCu) goto L_08AAE3CC;
    return;
L_08AAE3CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE538;
      }
      goto L_08AAE3D4;
    }
L_08AAE3D4:
    ctx.set_gpr(31, 0x08AAE3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE3DCu) goto L_08AAE3DC;
    return;
L_08AAE3DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE3E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE3E8u) goto L_08AAE3E8;
    return;
L_08AAE3E8:
    ctx.set_gpr(31, 0x08AAE3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE3F0u) goto L_08AAE3F0;
    return;
L_08AAE3F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE3FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE3FCu) goto L_08AAE3FC;
    return;
L_08AAE3FC:
    ctx.set_gpr(31, 0x08AAE404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE404u) goto L_08AAE404;
    return;
L_08AAE404:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE410u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE410u) goto L_08AAE410;
    return;
L_08AAE410:
    ctx.set_gpr(31, 0x08AAE418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE418u) goto L_08AAE418;
    return;
L_08AAE418:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE424u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE424u) goto L_08AAE424;
    return;
L_08AAE424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE538;
      }
      goto L_08AAE42C;
    }
L_08AAE42C:
    ctx.set_gpr(31, 0x08AAE434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE434u) goto L_08AAE434;
    return;
L_08AAE434:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE440u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE440u) goto L_08AAE440;
    return;
L_08AAE440:
    ctx.set_gpr(31, 0x08AAE448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE448u) goto L_08AAE448;
    return;
L_08AAE448:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE454u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE454u) goto L_08AAE454;
    return;
L_08AAE454:
    ctx.set_gpr(31, 0x08AAE45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE45Cu) goto L_08AAE45C;
    return;
L_08AAE45C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE468u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE468u) goto L_08AAE468;
    return;
L_08AAE468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE538;
      }
      goto L_08AAE470;
    }
L_08AAE470:
    ctx.set_gpr(31, 0x08AAE478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE478u) goto L_08AAE478;
    return;
L_08AAE478:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE484u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(23));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE484u) goto L_08AAE484;
    return;
L_08AAE484:
    ctx.set_gpr(31, 0x08AAE48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE48Cu) goto L_08AAE48C;
    return;
L_08AAE48C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE498u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE498u) goto L_08AAE498;
    return;
L_08AAE498:
    ctx.set_gpr(31, 0x08AAE4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE4A0u) goto L_08AAE4A0;
    return;
L_08AAE4A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE4ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE4ACu) goto L_08AAE4AC;
    return;
L_08AAE4AC:
    ctx.set_gpr(31, 0x08AAE4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE4B4u) goto L_08AAE4B4;
    return;
L_08AAE4B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE4C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE4C0u) goto L_08AAE4C0;
    return;
L_08AAE4C0:
    ctx.set_gpr(31, 0x08AAE4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE4C8u) goto L_08AAE4C8;
    return;
L_08AAE4C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE4D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE4D4u) goto L_08AAE4D4;
    return;
L_08AAE4D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE538;
      }
      goto L_08AAE4DC;
    }
L_08AAE4DC:
    ctx.set_gpr(31, 0x08AAE4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE4E4u) goto L_08AAE4E4;
    return;
L_08AAE4E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE4F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(23));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE4F0u) goto L_08AAE4F0;
    return;
L_08AAE4F0:
    ctx.set_gpr(31, 0x08AAE4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE4F8u) goto L_08AAE4F8;
    return;
L_08AAE4F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE504u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE504u) goto L_08AAE504;
    return;
L_08AAE504:
    ctx.set_gpr(31, 0x08AAE50Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE50Cu) goto L_08AAE50C;
    return;
L_08AAE50C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE518u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE518u) goto L_08AAE518;
    return;
L_08AAE518:
    ctx.set_gpr(31, 0x08AAE520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE520u) goto L_08AAE520;
    return;
L_08AAE520:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE52Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE52Cu) goto L_08AAE52C;
    return;
L_08AAE52C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE538;
      }
      goto L_08AAE534;
    }
L_08AAE534:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AAE538;
L_08AAE538:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AAE568;
    }
    goto L_08AAE540;
L_08AAE540:
    ctx.set_gpr(31, 0x08AAE548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE548u) goto L_08AAE548;
    return;
L_08AAE548:
    ctx.set_gpr(31, 0x08AAE550u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08AAE550u) goto L_08AAE550;
    return;
L_08AAE550:
    ctx.set_gpr(31, 0x08AAE558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AAE558u) goto L_08AAE558;
    return;
L_08AAE558:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08AAE564u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 512u, 0x08B02738u>(ctx, &aot_mem) && ctx.pc == 0x08AAE564u) goto L_08AAE564;
    return;
L_08AAE564:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AAE568;
L_08AAE568:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AAE598u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAE598u) goto L_08AAE598;
    return;
L_08AAE598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AAE5ACu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAE5ACu) goto L_08AAE5AC;
    return;
L_08AAE5AC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AAE5B8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAE670;
L_08AAE5B8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(29304));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(31, 0x08AAE5C8u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AAE668;
L_08AAE5C8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AAE5EC;
    }
    goto L_08AAE5D0;
L_08AAE5D0:
    ctx.set_gpr(31, 0x08AAE5D8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(29304));
    goto L_08AAE668;
L_08AAE5D8:
    ctx.set_gpr(31, 0x08AAE5E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 219u, 0x08850A70u>(ctx, &aot_mem) && ctx.pc == 0x08AAE5E0u) goto L_08AAE5E0;
    return;
L_08AAE5E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AAE5EC;
L_08AAE5EC:
    ctx.set_gpr(2, 59430u << 16u);
    ctx.set_gpr(18, ctx.gpr[2] | 54933u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 15889u << 16u);
    ctx.set_gpr(31, 0x08AAE604u);
    ctx.set_gpr(17, ctx.gpr[2] | 11787u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 87u, 0x0883CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAE604u) goto L_08AAE604;
    return;
L_08AAE604:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE618u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAE618u) goto L_08AAE618;
    return;
L_08AAE618:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE624u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AAE624u) goto L_08AAE624;
    return;
L_08AAE624:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 16076u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AAE64Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AAE684;
L_08AAE64C:
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
L_08AAE668:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE670:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29324)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(29304));
    (void)rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 318u, 0x08B0D3F8u>(ctx, &aot_mem); return;
L_08AAE684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[12];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08AAE6F0;
      }
      goto L_08AAE6B0;
    }
L_08AAE6B0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 14545u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 46871u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08AAE6C8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 663u, 0x0886ABF4u>(ctx, &aot_mem) && ctx.pc == 0x08AAE6C8u) goto L_08AAE6C8;
    return;
L_08AAE6C8:
    ctx.set_gpr(2, 14545u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 46871u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08AAE6DCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 662u, 0x0886ABE4u>(ctx, &aot_mem) && ctx.pc == 0x08AAE6DCu) goto L_08AAE6DC;
    return;
L_08AAE6DC:
    ctx.set_gpr(2, 14545u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 46871u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08AAE6F0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 661u, 0x0886ABD4u>(ctx, &aot_mem) && ctx.pc == 0x08AAE6F0u) goto L_08AAE6F0;
    return;
L_08AAE6F0:
    ctx.set_gpr(31, 0x08AAE6F8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(29304));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 312u, 0x08B0D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08AAE6F8u) goto L_08AAE6F8;
    return;
L_08AAE6F8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AAE708;
    }
    goto L_08AAE704;
L_08AAE704:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AAE708;
L_08AAE708:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE718:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE720:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE728:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE730:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAE744u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAE744u) goto L_08AAE744;
    return;
L_08AAE744:
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AAE758u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAE758u) goto L_08AAE758;
    return;
L_08AAE758:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE768:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE770:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE778:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE780:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAE794u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AAE794u) goto L_08AAE794;
    return;
L_08AAE794:
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AAE7A8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAE7A8u) goto L_08AAE7A8;
    return;
L_08AAE7A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE7B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE7C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE7C8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE7D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE7D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AAE7F0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 186u, 0x08848C48u>(ctx, &aot_mem) && ctx.pc == 0x08AAE7F0u) goto L_08AAE7F0;
    return;
L_08AAE7F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE7FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 190u, 0x08AA8A14u>(ctx, &aot_mem) && ctx.pc == 0x08AAE7FCu) goto L_08AAE7FC;
    return;
L_08AAE7FC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAE80Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE80Cu) goto L_08AAE80C;
    return;
L_08AAE80C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAE81Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE81Cu) goto L_08AAE81C;
    return;
L_08AAE81C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAE82Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE82Cu) goto L_08AAE82C;
    return;
L_08AAE82C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(54));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAE83Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE83Cu) goto L_08AAE83C;
    return;
L_08AAE83C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE850:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AAE894;
      }
      goto L_08AAE86C;
    }
L_08AAE86C:
    ctx.set_gpr(31, 0x08AAE874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 186u, 0x08848C48u>(ctx, &aot_mem) && ctx.pc == 0x08AAE874u) goto L_08AAE874;
    return;
L_08AAE874:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AAE880u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 190u, 0x08AA8A14u>(ctx, &aot_mem) && ctx.pc == 0x08AAE880u) goto L_08AAE880;
    return;
L_08AAE880:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AAE898;
    }
    goto L_08AAE88C;
L_08AAE88C:
    ctx.set_gpr(31, 0x08AAE894u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAE8AC;
L_08AAE894:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AAE898;
L_08AAE898:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE8AC:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08AAE8B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAE8F0;
      }
      goto L_08AAE8D0;
    }
L_08AAE8D0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAE8E0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE8E0u) goto L_08AAE8E0;
    return;
L_08AAE8E0:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AAE8F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(38));
    goto L_08AAF094;
L_08AAE8F0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAE900u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE900u) goto L_08AAE900;
    return;
L_08AAE900:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(176));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(17));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(19));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAE94Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAE94Cu) goto L_08AAE94C;
    return;
L_08AAE94C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    ctx.set_gpr(2, 0u | 57088u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(19));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.set_gpr(31, 0x08AAE98Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.pc = 0x08B0E09Cu;
    return;
L_08AAE98C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE9A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAE9E0;
      }
      goto L_08AAE9C0;
    }
L_08AAE9C0:
    ctx.set_gpr(31, 0x08AAE9C8u);
    // nop
    ctx.pc = 0x08B0E094u;
    return;
L_08AAE9C8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AAE9E4;
    }
    goto L_08AAE9D0;
L_08AAE9D0:
    ctx.set_gpr(31, 0x08AAE9D8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAEA84;
L_08AAE9D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAE9E4;
      }
      goto L_08AAE9E0;
    }
L_08AAE9E0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AAE9E4;
L_08AAE9E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE9F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAEA14;
      }
      goto L_08AAEA0C;
    }
L_08AAEA0C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAEA74;
      }
      goto L_08AAEA14;
    }
L_08AAEA14:
    ctx.set_gpr(31, 0x08AAEA1Cu);
    // nop
    ctx.pc = 0x08B0E094u;
    return;
L_08AAEA1C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
        goto L_08AAEA30;
    }
    goto L_08AAEA24;
L_08AAEA24:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAEA74;
      }
      goto L_08AAEA2C;
    }
L_08AAEA2C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    goto L_08AAEA30;
L_08AAEA30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AAEA74;
    }
    goto L_08AAEA3C;
L_08AAEA3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AAEA74;
    }
    goto L_08AAEA48;
L_08AAEA48:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEA74;
      }
      goto L_08AAEA50;
    }
L_08AAEA50:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAEA74;
      }
      goto L_08AAEA58;
    }
L_08AAEA58:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEA74;
      }
      goto L_08AAEA64;
    }
L_08AAEA64:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEA74;
      }
      goto L_08AAEA70;
    }
L_08AAEA70:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AAEA74;
L_08AAEA74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEA84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 19 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAEACC;
      }
      goto L_08AAEAA4;
    }
L_08AAEAA4:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AAEAD0;
    }
    goto L_08AAEAB8;
L_08AAEAB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AAEAA4;
      }
      goto L_08AAEACC;
    }
L_08AAEACC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AAEAD0;
L_08AAEAD0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(54));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAEAE8u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08AAF360;
L_08AAEAE8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08AAEB0C;
      }
      goto L_08AAEAF8;
    }
L_08AAEAF8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AAEAFC;
L_08AAEAFC:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(54)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AAEAFC;
    }
    goto L_08AAEB0C;
L_08AAEB0C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEB20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(54));
        goto L_08AAEB38;
    }
    goto L_08AAEB2C;
L_08AAEB2C:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(16));
        goto L_08AAEB38;
    }
    goto L_08AAEB34;
L_08AAEB34:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AAEB38;
L_08AAEB38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEB40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(10240));
    ctx.set_gpr(8, ctx.gpr[4] + static_cast<std::uint32_t>(9216));
    ctx.set_gpr(6, ctx.gpr[3] & 65535u);
    ctx.set_gpr(9, ctx.gpr[8] & 65535u);
    ctx.set_gpr(8, ctx.gpr[6] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(6, ctx.gpr[9] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAEBB0;
      }
      goto L_08AAEB6C;
    }
L_08AAEB6C:
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, ctx.gpr[4] & 1023u);
    ctx.set_gpr(14, ctx.gpr[25] << 10u);
    ctx.set_gpr(13, ctx.gpr[24] + static_cast<std::uint32_t>(9216));
    ctx.set_gpr(15, ctx.gpr[24] & 1023u);
    ctx.set_gpr(10, ctx.gpr[13] & 65535u);
    ctx.set_gpr(12, ctx.gpr[14] | ctx.gpr[15]);
    ctx.set_gpr(11, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AAEBA4;
      }
      goto L_08AAEB9C;
    }
L_08AAEB9C:
    ctx.set_gpr(9, 2246u << 16u);
    goto L_08AAEBA0;
L_08AAEBA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-19584)));
    goto L_08AAEBA4;
L_08AAEBA4:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEBB0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAEBA4;
      }
      goto L_08AAEBB8;
    }
L_08AAEBB8:
    ctx.set_gpr(9, 2246u << 16u);
    goto L_08AAEBA0;
L_08AAEBC0:
    ctx.set_gpr(7, 16u << 16u);
    ctx.set_gpr(9, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[9] | 10240u);
    ctx.set_gpr(8, ctx.gpr[7] | 65535u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[6] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAEBEC;
      }
      goto L_08AAEBE4;
    }
L_08AAEBE4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(11, 0u | 65535u);
      if (branch_taken) {
          goto L_08AAEBF8;
      }
      goto L_08AAEBEC;
    }
L_08AAEBEC:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-19584)));
    ctx.set_gpr(11, 0u | 65535u);
    goto L_08AAEBF8;
L_08AAEBF8:
    ctx.set_gpr(10, ctx.gpr[11] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
        goto L_08AAEC28;
    }
    goto L_08AAEC04;
L_08AAEC04:
    ctx.set_gpr(24, 65535u << 16u);
    ctx.set_gpr(14, ctx.gpr[5] + ctx.gpr[24]);
    ctx.set_gpr(15, ctx.gpr[14] >> 10u);
    ctx.set_gpr(12, ctx.gpr[15] + static_cast<std::uint32_t>(-10240));
    ctx.set_gpr(13, ctx.gpr[14] & 1023u);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(5, ctx.gpr[13] + static_cast<std::uint32_t>(-9216));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08AAEC28;
L_08AAEC28:
    ctx.set_gpr(25, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[25]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEC34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AAEC5C;
      }
      goto L_08AAEC50;
    }
L_08AAEC50:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    goto L_08AAEC54;
L_08AAEC54:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEC5C:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(62));
    ctx.set_gpr(4, ctx.gpr[6] & 255u);
    ctx.set_gpr(8, ctx.gpr[4] < static_cast<std::uint32_t>(51) ? 1u : 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] & 127u);
      if (branch_taken) {
          goto L_08AAEC80;
      }
      goto L_08AAEC74;
    }
L_08AAEC74:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-19588)));
    goto L_08AAEC50;
L_08AAEC80:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(13, ctx.gpr[4] & ctx.gpr[14]);
    ctx.set_gpr(10, ctx.gpr[13] << 6u);
    ctx.set_gpr(11, ctx.gpr[12] & 63u);
    ctx.set_gpr(4, ctx.gpr[10] | ctx.gpr[11]);
    ctx.set_gpr(6, ctx.gpr[6] << 5u);
    ctx.set_gpr(9, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAEC80;
      }
      goto L_08AAECA8;
    }
L_08AAECA8:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    goto L_08AAEC54;
L_08AAECB0:
    ctx.set_gpr(3, 16u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] | 65535u);
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAECE0;
      }
      goto L_08AAECC8;
    }
L_08AAECC8:
    ctx.set_gpr(11, 65535u << 16u);
    ctx.set_gpr(9, ctx.gpr[11] | 10240u);
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(7, ctx.gpr[8] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(13, ctx.gpr[5] < static_cast<std::uint32_t>(128) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAECEC;
      }
      goto L_08AAECE0;
    }
L_08AAECE0:
    ctx.set_gpr(12, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-19588)));
    ctx.set_gpr(13, ctx.gpr[5] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    goto L_08AAECEC;
L_08AAECEC:
    if (ctx.gpr[13] == 0u) {
    ctx.set_gpr(14, ctx.gpr[5] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
        goto L_08AAED04;
    }
    goto L_08AAECF4;
L_08AAECF4:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AAECFC;
L_08AAECFC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAED04:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2048));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAED20;
      }
      goto L_08AAED10;
    }
L_08AAED10:
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(15, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAED10;
      }
      goto L_08AAED20;
    }
L_08AAED20:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, ctx.gpr[9] - ctx.gpr[7]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(25, ctx.gpr[8] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[25] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[24];
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAED74;
      }
      goto L_08AAED50;
    }
L_08AAED50:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AAED58;
L_08AAED58:
    ctx.set_gpr(12, ctx.gpr[5] & 63u);
    ctx.set_gpr(11, ctx.gpr[12] | ctx.gpr[8]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    ctx.set_gpr(5, ctx.gpr[5] >> 6u);
      if (branch_taken) {
          goto L_08AAED58;
      }
      goto L_08AAED74;
    }
L_08AAED74:
    ctx.set_gpr(14, ctx.gpr[9] >> 1u);
    ctx.set_gpr(13, ctx.gpr[5] & ctx.gpr[14]);
    ctx.set_gpr(7, ~(0u | ctx.gpr[9]));
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAECFC;
L_08AAED8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    ctx.set_gpr(10, ctx.gpr[4] >> 7u);
    ctx.set_gpr(8, ctx.gpr[10] ^ 1u);
    ctx.set_gpr(9, ctx.gpr[6] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAEDC4;
      }
      goto L_08AAEDB8;
    }
L_08AAEDB8:
    ctx.set_gpr(11, ctx.gpr[4] < static_cast<std::uint32_t>(253) ? 1u : 0u);
    if (ctx.gpr[11] != 0u) {
    ctx.set_gpr(14, ctx.gpr[4] + static_cast<std::uint32_t>(127));
        goto L_08AAEDD0;
    }
    goto L_08AAEDC4;
L_08AAEDC4:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    goto L_08AAEDC8;
L_08AAEDC8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEDD0:
    ctx.set_gpr(13, ctx.gpr[14] & 255u);
    ctx.set_gpr(12, ctx.gpr[13] < static_cast<std::uint32_t>(31) ? 1u : 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08AAEEBC;
      }
      goto L_08AAEDE8;
    }
L_08AAEDE8:
    ctx.set_gpr(15, ctx.gpr[4] << 1u);
    ctx.set_gpr(6, ctx.gpr[15] + static_cast<std::uint32_t>(-257));
    goto L_08AAEDF0;
L_08AAEDF0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(10, ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAEE3C;
      }
      goto L_08AAEDF8;
    }
L_08AAEDF8:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(25, ctx.gpr[3] & 255u);
    ctx.set_gpr(24, ctx.gpr[25] < static_cast<std::uint32_t>(63) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAEE84;
      }
      goto L_08AAEE10;
    }
L_08AAEE10:
    ctx.set_gpr(8, ctx.gpr[4] + static_cast<std::uint32_t>(-63));
    goto L_08AAEE14;
L_08AAEE14:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(10, ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAEE3C;
      }
      goto L_08AAEE1C;
    }
L_08AAEE1C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_08AAEE7C;
      }
      goto L_08AAEE28;
    }
L_08AAEE28:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[15];
    ctx.set_gpr(2, ctx.gpr[6] ^ 77u);
      if (branch_taken) {
          goto L_08AAEE74;
      }
      goto L_08AAEE30;
    }
L_08AAEE30:
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(15));
    if (ctx.gpr[2] == 0u) ctx.set_gpr(6, ctx.gpr[24]);
    goto L_08AAEE38;
L_08AAEE38:
    ctx.set_gpr(10, ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08AAEE3C;
L_08AAEE3C:
    ctx.set_gpr(11, ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(25, ctx.gpr[10] | ctx.gpr[11]);
    if (ctx.gpr[25] == 0u) {
    ctx.set_gpr(14, ctx.gpr[6] + static_cast<std::uint32_t>(32));
        goto L_08AAEE58;
    }
    goto L_08AAEE4C;
L_08AAEE4C:
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-19592)));
    goto L_08AAEDC8;
L_08AAEE58:
    ctx.set_gpr(13, ctx.gpr[9] << 15u);
    ctx.set_gpr(3, ctx.gpr[14] << 8u);
    ctx.set_gpr(9, ctx.gpr[13] | ctx.gpr[3]);
    ctx.set_gpr(12, ctx.gpr[8] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[9] | ctx.gpr[12]);
    ctx.set_gpr(2, ctx.gpr[6] & 65535u);
    goto L_08AAEDC8;
L_08AAEE74:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    goto L_08AAEE38;
L_08AAEE7C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08AAEE38;
L_08AAEE84:
    ctx.set_gpr(12, ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(11, ctx.gpr[12] & 255u);
    ctx.set_gpr(10, ctx.gpr[11] < static_cast<std::uint32_t>(31) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(14, ctx.gpr[4] + static_cast<std::uint32_t>(97));
      if (branch_taken) {
          goto L_08AAEEA0;
      }
      goto L_08AAEE98;
    }
L_08AAEE98:
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    goto L_08AAEE14;
L_08AAEEA0:
    ctx.set_gpr(13, ctx.gpr[14] & 255u);
    ctx.set_gpr(3, ctx.gpr[13] < static_cast<std::uint32_t>(94) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEE14;
      }
      goto L_08AAEEB0;
    }
L_08AAEEB0:
    ctx.set_gpr(8, ctx.gpr[4] + static_cast<std::uint32_t>(-158));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08AAEE14;
L_08AAEEBC:
    ctx.set_gpr(10, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, ctx.gpr[10] & 255u);
    ctx.set_gpr(24, ctx.gpr[25] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(13, ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AAEEDC;
      }
      goto L_08AAEED0;
    }
L_08AAEED0:
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-385));
    goto L_08AAEDF0;
L_08AAEEDC:
    ctx.set_gpr(12, ctx.gpr[13] & 255u);
    ctx.set_gpr(11, ctx.gpr[12] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(10, ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAEE3C;
      }
      goto L_08AAEEEC;
    }
L_08AAEEEC:
    ctx.set_gpr(15, ctx.gpr[4] << 1u);
    ctx.set_gpr(9, ctx.gpr[15] + static_cast<std::uint32_t>(-411));
    ctx.set_gpr(14, ctx.gpr[4] < static_cast<std::uint32_t>(244) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[15] + static_cast<std::uint32_t>(-473));
    if (ctx.gpr[14] == 0u) ctx.set_gpr(6, ctx.gpr[9]);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    goto L_08AAEDF0;
L_08AAEF08:
    ctx.set_gpr(5, ctx.gpr[5] & 65535u);
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(-160));
    ctx.set_gpr(3, ctx.gpr[7] & 65535u);
    ctx.set_gpr(6, ctx.gpr[3] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[5] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[8] | ctx.gpr[6]);
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAEFC4;
      }
      goto L_08AAEF2C;
    }
L_08AAEF2C:
    ctx.set_gpr(9, (ctx.gpr[5] >> 8u) & 0x0000007Fu);
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(14, ctx.gpr[4] < static_cast<std::uint32_t>(94) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[5] & 127u);
    ctx.set_gpr(12, ctx.gpr[14] ^ 1u);
    ctx.set_gpr(13, ctx.gpr[4] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    ctx.set_gpr(11, ctx.gpr[12] | ctx.gpr[13]);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(3, ctx.gpr[5] >> 15u);
      if (branch_taken) {
          goto L_08AAEFA8;
      }
      goto L_08AAEF50;
    }
L_08AAEF50:
    ctx.set_gpr(15, ctx.gpr[4] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAEFAC;
      }
      goto L_08AAEF5C;
    }
L_08AAEF5C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAEFAC;
      }
      goto L_08AAEF64;
    }
L_08AAEF64:
    ctx.set_gpr(2, ctx.gpr[9] ^ 34u);
    ctx.set_gpr(12, ctx.gpr[9] ^ 38u);
    ctx.set_gpr(25, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(11, ctx.gpr[12] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(24, ctx.gpr[25] | ctx.gpr[11]);
    if (ctx.gpr[24] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AAEFAC;
    }
    goto L_08AAEF80;
L_08AAEF80:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(39));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[3];
    ctx.set_gpr(14, ctx.gpr[9] + static_cast<std::uint32_t>(-41));
      if (branch_taken) {
          goto L_08AAEFA8;
      }
      goto L_08AAEF8C;
    }
L_08AAEF8C:
    ctx.set_gpr(13, ctx.gpr[14] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAEFAC;
      }
      goto L_08AAEF98;
    }
L_08AAEF98:
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(9, ctx.gpr[4] < static_cast<std::uint32_t>(62) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAEFAC;
      }
      goto L_08AAEFA8;
    }
L_08AAEFA8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AAEFAC;
L_08AAEFAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(25, ctx.gpr[7] & 65535u);
      if (branch_taken) {
          goto L_08AAEFC8;
      }
      goto L_08AAEFB4;
    }
L_08AAEFB4:
    ctx.set_gpr(7, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(-19592)));
    ctx.set_gpr(8, ctx.gpr[5] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(-160));
    goto L_08AAEFC4;
L_08AAEFC4:
    ctx.set_gpr(25, ctx.gpr[7] & 65535u);
    goto L_08AAEFC8;
L_08AAEFC8:
    ctx.set_gpr(24, ctx.gpr[25] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    ctx.set_gpr(15, ctx.gpr[8] | ctx.gpr[24]);
    if (ctx.gpr[15] != 0u) {
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
        goto L_08AAF038;
    }
    goto L_08AAEFD8;
L_08AAEFD8:
    ctx.set_gpr(11, ctx.gpr[5] + static_cast<std::uint32_t>(-253));
    ctx.set_gpr(8, ctx.gpr[11] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
        goto L_08AAF038;
    }
    goto L_08AAEFE8;
L_08AAEFE8:
    ctx.set_gpr(3, ctx.gpr[5] & 127u);
    ctx.set_gpr(7, (ctx.gpr[5] >> 8u) & 0x0000007Fu);
    ctx.set_gpr(12, ctx.gpr[5] >> 15u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08AAF058;
      }
      goto L_08AAF000;
    }
L_08AAF000:
    ctx.set_gpr(14, ctx.gpr[7] + static_cast<std::uint32_t>(225));
    ctx.set_gpr(13, ctx.gpr[5] < static_cast<std::uint32_t>(63) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, ctx.gpr[14] >> 1u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAF020;
      }
      goto L_08AAF018;
    }
L_08AAF018:
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(353));
    ctx.set_gpr(2, ctx.gpr[9] >> 1u);
    goto L_08AAF020;
L_08AAF020:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AAF024;
L_08AAF024:
    ctx.set_gpr(13, ctx.gpr[5] & 1u);
    if (ctx.gpr[13] != 0u) {
    ctx.set_gpr(4, ctx.gpr[8] < static_cast<std::uint32_t>(64) ? 1u : 0u);
        goto L_08AAF044;
    }
    goto L_08AAF030;
L_08AAF030:
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(-98));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AAF038;
L_08AAF038:
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF044:
    ctx.set_gpr(9, ctx.gpr[8] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(14, ctx.gpr[8] + static_cast<std::uint32_t>(63));
    if (ctx.gpr[4] == 0u) ctx.set_gpr(14, ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[14]));
    goto L_08AAF038;
L_08AAF058:
    ctx.set_gpr(4, ctx.gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(379));
      if (branch_taken) {
          goto L_08AAF088;
      }
      goto L_08AAF064;
    }
L_08AAF064:
    ctx.set_gpr(2, ctx.gpr[5] >> 3u);
    ctx.set_gpr(25, ctx.gpr[7] + static_cast<std::uint32_t>(447));
    ctx.set_gpr(11, ctx.gpr[2] << 1u);
    ctx.set_gpr(24, ctx.gpr[11] + ctx.gpr[2]);
    ctx.set_gpr(15, ctx.gpr[25] >> 1u);
    ctx.set_gpr(7, ctx.gpr[15] - ctx.gpr[24]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08AAF080;
L_08AAF080:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08AAF024;
L_08AAF088:
    ctx.set_gpr(12, ctx.gpr[3] >> 1u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    goto L_08AAF080;
L_08AAF094:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AAF0F0;
      }
      goto L_08AAF0D0;
    }
L_08AAF0D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF0F0:
    ctx.set_gpr(31, 0x08AAF0F8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08AAEC34;
L_08AAF0F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AAF158;
      }
      goto L_08AAF100;
    }
L_08AAF100:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AAF10Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[29]);
    goto L_08AAEBC0;
L_08AAF10C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[29]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAF158;
      }
      goto L_08AAF128;
    }
L_08AAF128:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[19];
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AAF150;
      }
      goto L_08AAF134;
    }
L_08AAF134:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AAF138;
L_08AAF138:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AAF138;
      }
      goto L_08AAF150;
    }
L_08AAF150:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AAF0F0;
L_08AAF158:
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(3, ctx.gpr[18] + 0u);
    goto L_08AAF0D0;
L_08AAF164:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AAF24C;
      }
      goto L_08AAF19C;
    }
L_08AAF19C:
    ctx.set_gpr(17, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(21, 2246u << 16u);
    ctx.set_gpr(19, 0u | 65535u);
    ctx.set_gpr(22, 2246u << 16u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AAF1B0;
L_08AAF1B0:
    ctx.set_gpr(31, 0x08AAF1B8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08AAEC34;
L_08AAF1B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AAF244;
      }
      goto L_08AAF1C0;
    }
L_08AAF1C0:
    ctx.set_gpr(4, ctx.gpr[19] < ctx.gpr[3] ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[29]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-19592)));
      if (branch_taken) {
          goto L_08AAF1E8;
      }
      goto L_08AAF1D0;
    }
L_08AAF1D0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-19576)));
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AAF1EC;
      }
      goto L_08AAF1E8;
    }
L_08AAF1E8:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    goto L_08AAF1EC;
L_08AAF1EC:
    ctx.set_gpr(5, ctx.gpr[5] & 65535u);
    if (ctx.gpr[5] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08AAF248;
    }
    goto L_08AAF1F8;
L_08AAF1F8:
    ctx.set_gpr(31, 0x08AAF200u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08AAEF08;
L_08AAF200:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[29]);
    ctx.set_gpr(6, ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAF244;
      }
      goto L_08AAF214;
    }
L_08AAF214:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.set_gpr(3, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AAF23C;
      }
      goto L_08AAF220;
    }
L_08AAF220:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AAF224;
L_08AAF224:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAF224;
      }
      goto L_08AAF23C;
    }
L_08AAF23C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AAF1B0;
L_08AAF244:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08AAF248;
L_08AAF248:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08AAF24C;
L_08AAF24C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF274:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AAF33C;
      }
      goto L_08AAF2A8;
    }
L_08AAF2A8:
    ctx.set_gpr(17, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(20, 2246u << 16u);
    ctx.set_gpr(19, 2246u << 16u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AAF2B8;
L_08AAF2B8:
    ctx.set_gpr(31, 0x08AAF2C0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08AAED8C;
L_08AAF2C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-19580)));
      if (branch_taken) {
          goto L_08AAF334;
      }
      goto L_08AAF2C8;
    }
L_08AAF2C8:
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-19588)));
      if (branch_taken) {
          goto L_08AAF2E8;
      }
      goto L_08AAF2E0;
    }
L_08AAF2E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AAF334;
      }
      goto L_08AAF2E8;
    }
L_08AAF2E8:
    ctx.set_gpr(31, 0x08AAF2F0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08AAECB0;
L_08AAF2F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAF334;
      }
      goto L_08AAF304;
    }
L_08AAF304:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.set_gpr(3, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AAF32C;
      }
      goto L_08AAF310;
    }
L_08AAF310:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AAF314;
L_08AAF314:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAF314;
      }
      goto L_08AAF32C;
    }
L_08AAF32C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AAF2B8;
L_08AAF334:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08AAF33C;
L_08AAF33C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF360:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AAF3B0;
      }
      goto L_08AAF394;
    }
L_08AAF394:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF3B0:
    ctx.set_gpr(31, 0x08AAF3B8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08AAEB40;
L_08AAF3B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AAF410;
      }
      goto L_08AAF3C0;
    }
L_08AAF3C0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AAF3CCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[29]);
    goto L_08AAECB0;
L_08AAF3CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAF410;
      }
      goto L_08AAF3E0;
    }
L_08AAF3E0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.set_gpr(3, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08AAF408;
      }
      goto L_08AAF3EC;
    }
L_08AAF3EC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AAF3F0;
L_08AAF3F0:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAF3F0;
      }
      goto L_08AAF408;
    }
L_08AAF408:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AAF3B0;
L_08AAF410:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08AAF394;
L_08AAF41C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-19580), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19576), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF430:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AAF444;
L_08AAF444:
    ctx.set_gpr(31, 0x08AAF44Cu);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_08AAEC34;
L_08AAF44C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AAF45C;
      }
      goto L_08AAF454;
    }
L_08AAF454:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AAF444;
L_08AAF45C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF46C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF478:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AAF4A8;
    }
    goto L_08AAF490;
L_08AAF490:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AAF4A4;
      }
      goto L_08AAF49C;
    }
L_08AAF49C:
    ctx.set_gpr(31, 0x08AAF4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AAF4A4u) goto L_08AAF4A4;
    return;
L_08AAF4A4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AAF4A8;
L_08AAF4A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF4B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF4C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AAF544;
    }
    goto L_08AAF4DC;
L_08AAF4DC:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23580));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF4F8:
    ctx.set_gpr(31, 0x08AAF500u);
    // nop
    goto L_08AAF54C;
L_08AAF500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF540;
      }
      goto L_08AAF508;
    }
L_08AAF508:
    ctx.set_gpr(31, 0x08AAF510u);
    // nop
    goto L_08AAF5C8;
L_08AAF510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF540;
      }
      goto L_08AAF518;
    }
L_08AAF518:
    ctx.set_gpr(31, 0x08AAF520u);
    // nop
    goto L_08AAF644;
L_08AAF520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF540;
      }
      goto L_08AAF528;
    }
L_08AAF528:
    ctx.set_gpr(31, 0x08AAF530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1173u, 0x08AC7D90u>(ctx, &aot_mem) && ctx.pc == 0x08AAF530u) goto L_08AAF530;
    return;
L_08AAF530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF540;
      }
      goto L_08AAF538;
    }
L_08AAF538:
    ctx.set_gpr(31, 0x08AAF540u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1137u, 0x08AC7B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAF540u) goto L_08AAF540;
    return;
L_08AAF540:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AAF544;
L_08AAF544:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF54C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAF560u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.pc = 0x08B0E044u;
    return;
L_08AAF560:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AAF5BC;
    }
    goto L_08AAF568;
L_08AAF568:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAF5B8;
      }
      goto L_08AAF574;
    }
L_08AAF574:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAF5B0;
      }
      goto L_08AAF580;
    }
L_08AAF580:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AAF5A0;
    }
    goto L_08AAF58C;
L_08AAF58C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAF5B8;
      }
      goto L_08AAF598;
    }
L_08AAF598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF5B8;
      }
      goto L_08AAF5A0;
    }
L_08AAF5A0:
    ctx.set_gpr(31, 0x08AAF5A8u);
    // nop
    ctx.pc = 0x08B0E07Cu;
    return;
L_08AAF5A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF5B8;
      }
      goto L_08AAF5B0;
    }
L_08AAF5B0:
    ctx.set_gpr(31, 0x08AAF5B8u);
    // nop
    ctx.pc = 0x08B0E05Cu;
    return;
L_08AAF5B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AAF5BC;
L_08AAF5BC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF5C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAF5DCu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.pc = 0x08B0E094u;
    return;
L_08AAF5DC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AAF638;
    }
    goto L_08AAF5E4;
L_08AAF5E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAF634;
      }
      goto L_08AAF5F0;
    }
L_08AAF5F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAF62C;
      }
      goto L_08AAF5FC;
    }
L_08AAF5FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AAF61C;
    }
    goto L_08AAF608;
L_08AAF608:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAF634;
      }
      goto L_08AAF614;
    }
L_08AAF614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF634;
      }
      goto L_08AAF61C;
    }
L_08AAF61C:
    ctx.set_gpr(31, 0x08AAF624u);
    // nop
    ctx.pc = 0x08B0E01Cu;
    return;
L_08AAF624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF634;
      }
      goto L_08AAF62C;
    }
L_08AAF62C:
    ctx.set_gpr(31, 0x08AAF634u);
    // nop
    ctx.pc = 0x08B0E014u;
    return;
L_08AAF634:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AAF638;
L_08AAF638:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF644:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AAF658u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.pc = 0x08B0E084u;
    return;
L_08AAF658:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AAF6B4;
    }
    goto L_08AAF660;
L_08AAF660:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAF6B0;
      }
      goto L_08AAF66C;
    }
L_08AAF66C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAF6A8;
      }
      goto L_08AAF678;
    }
L_08AAF678:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AAF698;
    }
    goto L_08AAF684;
L_08AAF684:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAF6B0;
      }
      goto L_08AAF690;
    }
L_08AAF690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF6B0;
      }
      goto L_08AAF698;
    }
L_08AAF698:
    ctx.set_gpr(31, 0x08AAF6A0u);
    // nop
    ctx.pc = 0x08B0E074u;
    return;
L_08AAF6A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF6B0;
      }
      goto L_08AAF6A8;
    }
L_08AAF6A8:
    ctx.set_gpr(31, 0x08AAF6B0u);
    // nop
    ctx.pc = 0x08B0E0ACu;
    return;
L_08AAF6B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AAF6B4;
L_08AAF6B4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF6C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-19572)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF7B4;
      }
      goto L_08AAF6D8;
    }
L_08AAF6D8:
    ctx.set_gpr(31, 0x08AAF6E0u);
    // nop
    goto L_08AAF840;
L_08AAF6E0:
    ctx.set_gpr(31, 0x08AAF6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 131u, 0x08AB06F8u>(ctx, &aot_mem) && ctx.pc == 0x08AAF6E8u) goto L_08AAF6E8;
    return;
L_08AAF6E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAF6F8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAF6F8u) goto L_08AAF6F8;
    return;
L_08AAF6F8:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22524));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAF718u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 924u, 0x08883CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AAF718u) goto L_08AAF718;
    return;
L_08AAF718:
    ctx.set_gpr(3, 2230u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(22532));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19564), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19560), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(31, 0x08AAF74Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19552), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAF74Cu) goto L_08AAF74C;
    return;
L_08AAF74C:
    ctx.set_gpr(31, 0x08AAF754u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AAF754u) goto L_08AAF754;
    return;
L_08AAF754:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-19552)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAF76Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAF76Cu) goto L_08AAF76C;
    return;
L_08AAF76C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-19556), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AAF780u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19568));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 936u, 0x08883D74u>(ctx, &aot_mem) && ctx.pc == 0x08AAF780u) goto L_08AAF780;
    return;
L_08AAF780:
    ctx.set_gpr(31, 0x08AAF788u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 467u, 0x0887F5B4u>(ctx, &aot_mem) && ctx.pc == 0x08AAF788u) goto L_08AAF788;
    return;
L_08AAF788:
    ctx.set_gpr(31, 0x08AAF790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 313u, 0x0887E518u>(ctx, &aot_mem) && ctx.pc == 0x08AAF790u) goto L_08AAF790;
    return;
L_08AAF790:
    ctx.set_gpr(31, 0x08AAF798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 713u, 0x0888B3D0u>(ctx, &aot_mem) && ctx.pc == 0x08AAF798u) goto L_08AAF798;
    return;
L_08AAF798:
    ctx.set_gpr(4, 2219u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2096));
    ctx.set_gpr(31, 0x08AAF7A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 501u, 0x0887F858u>(ctx, &aot_mem) && ctx.pc == 0x08AAF7A8u) goto L_08AAF7A8;
    return;
L_08AAF7A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-19572), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08AAF7B4;
L_08AAF7B4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-19572)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF7C8:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 528u, 0x0887FA14u>(ctx, &aot_mem); return;
L_08AAF7D0:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    goto L_08AAF7D8;
L_08AAF7D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08AAF810;
      }
      goto L_08AAF808;
    }
L_08AAF808:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08AAF81C;
      }
      goto L_08AAF810;
    }
L_08AAF810:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_08AAF81C;
L_08AAF81C:
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AAF834u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19548));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1u, 0x0881C004u>(ctx, &aot_mem) && ctx.pc == 0x08AAF834u) goto L_08AAF834;
    return;
L_08AAF834:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF840:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AAF858u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22524));
    ctx.pc = 0x08B0DF9Cu;
    return;
L_08AAF858:
    ctx.set_gpr(31, 0x08AAF860u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B0DF8Cu;
    return;
L_08AAF860:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF86C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2444), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAF8BCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAF8BCu) goto L_08AAF8BC;
    return;
L_08AAF8BC:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_08AAF8C4;
L_08AAF8C4:
    ctx.set_gpr(31, 0x08AAF8CCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2104));
    goto L_08AAF8F8;
L_08AAF8CC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AAF8C4;
      }
      goto L_08AAF8DC;
    }
L_08AAF8DC:
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
L_08AAF8F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem); return;
L_08AAF910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AAF940;
    }
    goto L_08AAF928;
L_08AAF928:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AAF93C;
      }
      goto L_08AAF934;
    }
L_08AAF934:
    ctx.set_gpr(31, 0x08AAF93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AAF93Cu) goto L_08AAF93C;
    return;
L_08AAF93C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AAF940;
L_08AAF940:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2444), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AAF990u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAF990u) goto L_08AAF990;
    return;
L_08AAF990:
    ctx.set_gpr(31, 0x08AAF998u);
    // nop
    goto L_08AAF6C0;
L_08AAF998:
    ctx.set_gpr(31, 0x08AAF9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAF9A0u) goto L_08AAF9A0;
    return;
L_08AAF9A0:
    ctx.set_gpr(31, 0x08AAF9A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AAF9A8u) goto L_08AAF9A8;
    return;
L_08AAF9A8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAF9BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3796));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAF9BCu) goto L_08AAF9BC;
    return;
L_08AAF9BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAFA68;
      }
      goto L_08AAF9C4;
    }
L_08AAF9C4:
    ctx.set_gpr(31, 0x08AAF9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAF9CCu) goto L_08AAF9CC;
    return;
L_08AAF9CC:
    ctx.set_gpr(31, 0x08AAF9D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AAF9D4u) goto L_08AAF9D4;
    return;
L_08AAF9D4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAF9E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(476));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAF9E8u) goto L_08AAF9E8;
    return;
L_08AAF9E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAFA68;
      }
      goto L_08AAF9F0;
    }
L_08AAF9F0:
    ctx.set_gpr(31, 0x08AAF9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAF9F8u) goto L_08AAF9F8;
    return;
L_08AAF9F8:
    ctx.set_gpr(31, 0x08AAFA00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AAFA00u) goto L_08AAFA00;
    return;
L_08AAFA00:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAFA14u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(428));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAFA14u) goto L_08AAFA14;
    return;
L_08AAFA14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAFA68;
      }
      goto L_08AAFA1C;
    }
L_08AAFA1C:
    ctx.set_gpr(31, 0x08AAFA24u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAFA7C;
L_08AAFA24:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AAFA58;
    }
    goto L_08AAFA30;
L_08AAFA30:
    ctx.set_gpr(31, 0x08AAFA38u);
    // nop
    goto L_08AAF7C8;
L_08AAFA38:
    ctx.set_gpr(31, 0x08AAFA40u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAFC50;
L_08AAFA40:
    ctx.set_gpr(31, 0x08AAFA48u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAFA7C;
L_08AAFA48:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAFA30;
      }
      goto L_08AAFA54;
    }
L_08AAFA54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AAFA58;
L_08AAFA58:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAFA6C;
      }
      goto L_08AAFA68;
    }
L_08AAFA68:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AAFA6C;
L_08AAFA6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFA7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAFC08;
      }
      goto L_08AAFA98;
    }
L_08AAFA98:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-23552));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFAB4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22552));
    ctx.set_gpr(31, 0x08AAFACCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 428u, 0x0887AFD8u>(ctx, &aot_mem) && ctx.pc == 0x08AAFACCu) goto L_08AAFACC;
    return;
L_08AAFACC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AAFAF4;
    }
    goto L_08AAFAD4;
L_08AAFAD4:
    ctx.set_gpr(31, 0x08AAFADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08AAFADCu) goto L_08AAFADC;
    return;
L_08AAFADC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(31, 0x08AAFAECu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22576));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x08AAFAECu) goto L_08AAFAEC;
    return;
L_08AAFAEC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAFC0C;
      }
      goto L_08AAFAF4;
    }
L_08AAFAF4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAFC08;
      }
      goto L_08AAFB00;
    }
L_08AAFB00:
    ctx.set_gpr(31, 0x08AAFB08u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 432u, 0x0887B63Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAFB08u) goto L_08AAFB08;
    return;
L_08AAFB08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AAFC0C;
    }
    goto L_08AAFB14;
L_08AAFB14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAFC08;
      }
      goto L_08AAFB24;
    }
L_08AAFB24:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22616));
    ctx.set_gpr(31, 0x08AAFB3Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 428u, 0x0887AFD8u>(ctx, &aot_mem) && ctx.pc == 0x08AAFB3Cu) goto L_08AAFB3C;
    return;
L_08AAFB3C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AAFB64;
    }
    goto L_08AAFB44;
L_08AAFB44:
    ctx.set_gpr(31, 0x08AAFB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08AAFB4Cu) goto L_08AAFB4C;
    return;
L_08AAFB4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(31, 0x08AAFB5Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22640));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x08AAFB5Cu) goto L_08AAFB5C;
    return;
L_08AAFB5C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAFC0C;
      }
      goto L_08AAFB64;
    }
L_08AAFB64:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAFC08;
      }
      goto L_08AAFB70;
    }
L_08AAFB70:
    ctx.set_gpr(31, 0x08AAFB78u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 432u, 0x0887B63Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAFB78u) goto L_08AAFB78;
    return;
L_08AAFB78:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAFC08;
      }
      goto L_08AAFB84;
    }
L_08AAFB84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAFC08;
      }
      goto L_08AAFB94;
    }
L_08AAFB94:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22684));
    ctx.set_gpr(31, 0x08AAFBACu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 428u, 0x0887AFD8u>(ctx, &aot_mem) && ctx.pc == 0x08AAFBACu) goto L_08AAFBAC;
    return;
L_08AAFBAC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AAFBD4;
    }
    goto L_08AAFBB4;
L_08AAFBB4:
    ctx.set_gpr(31, 0x08AAFBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08AAFBBCu) goto L_08AAFBBC;
    return;
L_08AAFBBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(31, 0x08AAFBCCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22708));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x08AAFBCCu) goto L_08AAFBCC;
    return;
L_08AAFBCC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAFC0C;
      }
      goto L_08AAFBD4;
    }
L_08AAFBD4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAFC08;
      }
      goto L_08AAFBE0;
    }
L_08AAFBE0:
    ctx.set_gpr(31, 0x08AAFBE8u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 432u, 0x0887B63Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAFBE8u) goto L_08AAFBE8;
    return;
L_08AAFBE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAFC08;
      }
      goto L_08AAFBF4;
    }
L_08AAFBF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AAFC0C;
      }
      goto L_08AAFC08;
    }
L_08AAFC08:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AAFC0C;
L_08AAFC0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFC1C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AAFC40;
    }
    goto L_08AAFC28;
L_08AAFC28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFC3C;
      }
      goto L_08AAFC34;
    }
L_08AAFC34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFC40;
      }
      goto L_08AAFC3C;
    }
L_08AAFC3C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AAFC40;
L_08AAFC40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFC48:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFC50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAFD74;
      }
      goto L_08AAFC74;
    }
L_08AAFC74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2444)));
        goto L_08AAFC88;
    }
    goto L_08AAFC80;
L_08AAFC80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFD9C;
      }
      goto L_08AAFC88;
    }
L_08AAFC88:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFD9C;
      }
      goto L_08AAFC90;
    }
L_08AAFC90:
    ctx.set_gpr(31, 0x08AAFC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 93u, 0x0887CB70u>(ctx, &aot_mem) && ctx.pc == 0x08AAFC98u) goto L_08AAFC98;
    return;
L_08AAFC98:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2444)));
        goto L_08AAFCC4;
    }
    goto L_08AAFCA4;
L_08AAFCA4:
    ctx.set_gpr(31, 0x08AAFCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08AAFCACu) goto L_08AAFCAC;
    return;
L_08AAFCAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(31, 0x08AAFCBCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22752));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x08AAFCBCu) goto L_08AAFCBC;
    return;
L_08AAFCBC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAFE08;
      }
      goto L_08AAFCC4;
    }
L_08AAFCC4:
    ctx.set_gpr(31, 0x08AAFCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 195u, 0x08879BE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAFCCCu) goto L_08AAFCCC;
    return;
L_08AAFCCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFD9C;
      }
      goto L_08AAFCD4;
    }
L_08AAFCD4:
    ctx.set_gpr(31, 0x08AAFCDCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AAFE28;
L_08AAFCDC:
    ctx.set_gpr(31, 0x08AAFCE4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2444)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 89u, 0x0887C944u>(ctx, &aot_mem) && ctx.pc == 0x08AAFCE4u) goto L_08AAFCE4;
    return;
L_08AAFCE4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[18] << 11u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AAFD20;
      }
      goto L_08AAFCF4;
    }
L_08AAFCF4:
    ctx.set_gpr(31, 0x08AAFCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAFCFCu) goto L_08AAFCFC;
    return;
L_08AAFCFC:
    ctx.set_gpr(31, 0x08AAFD04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AAFD04u) goto L_08AAFD04;
    return;
L_08AAFD04:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AAFD18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAFD18u) goto L_08AAFD18;
    return;
L_08AAFD18:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAFD58;
      }
      goto L_08AAFD20;
    }
L_08AAFD20:
    ctx.set_gpr(31, 0x08AAFD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08AAFD28u) goto L_08AAFD28;
    return;
L_08AAFD28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(31, 0x08AAFD38u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22800));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x08AAFD38u) goto L_08AAFD38;
    return;
L_08AAFD38:
    ctx.set_gpr(31, 0x08AAFD40u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2444)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 5u, 0x0887C344u>(ctx, &aot_mem) && ctx.pc == 0x08AAFD40u) goto L_08AAFD40;
    return;
L_08AAFD40:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2444), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAFD9C;
      }
      goto L_08AAFD58;
    }
L_08AAFD58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2444)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08AAFD68u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 46u, 0x0887C680u>(ctx, &aot_mem) && ctx.pc == 0x08AAFD68u) goto L_08AAFD68;
    return;
L_08AAFD68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AAFD9C;
      }
      goto L_08AAFD74;
    }
L_08AAFD74:
    ctx.set_gpr(31, 0x08AAFD7Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2444)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 93u, 0x0887CB70u>(ctx, &aot_mem) && ctx.pc == 0x08AAFD7Cu) goto L_08AAFD7C;
    return;
L_08AAFD7C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAFD9C;
      }
      goto L_08AAFD88;
    }
L_08AAFD88:
    ctx.set_gpr(31, 0x08AAFD90u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2444)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 5u, 0x0887C344u>(ctx, &aot_mem) && ctx.pc == 0x08AAFD90u) goto L_08AAFD90;
    return;
L_08AAFD90:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2444), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_08AAFD9C;
L_08AAFD9C:
    ctx.set_gpr(31, 0x08AAFDA4u);
    // nop
    ctx.pc = 0x08B0E0B4u;
    return;
L_08AAFDA4:
    ctx.set_gpr(31, 0x08AAFDACu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 673u, 0x08847D20u>(ctx, &aot_mem) && ctx.pc == 0x08AAFDACu) goto L_08AAFDAC;
    return;
L_08AAFDAC:
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[2]);
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
        goto L_08AAFDC4;
    }
    goto L_08AAFDB8;
L_08AAFDB8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_08AAFDD8;
      }
      goto L_08AAFDC4;
    }
L_08AAFDC4:
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08AAFDD8;
L_08AAFDD8:
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AAFE08;
    }
    goto L_08AAFDF4;
L_08AAFDF4:
    ctx.set_gpr(31, 0x08AAFDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 668u, 0x08847CDCu>(ctx, &aot_mem) && ctx.pc == 0x08AAFDFCu) goto L_08AAFDFC;
    return;
L_08AAFDFC:
    ctx.set_gpr(31, 0x08AAFE04u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1000));
    ctx.pc = 0x08B0DE14u;
    return;
L_08AAFE04:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AAFE08;
L_08AAFE08:
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
L_08AAFE20:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFE28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAFEA4;
      }
      goto L_08AAFE44;
    }
L_08AAFE44:
    ctx.set_gpr(31, 0x08AAFE4Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 131u, 0x0892C968u>(ctx, &aot_mem) && ctx.pc == 0x08AAFE4Cu) goto L_08AAFE4C;
    return;
L_08AAFE4C:
    ctx.set_gpr(31, 0x08AAFE54u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 61u, 0x08844370u>(ctx, &aot_mem) && ctx.pc == 0x08AAFE54u) goto L_08AAFE54;
    return;
L_08AAFE54:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AAFE64u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08AAFE64u) goto L_08AAFE64;
    return;
L_08AAFE64:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFE74;
      }
      goto L_08AAFE6C;
    }
L_08AAFE6C:
    ctx.set_gpr(31, 0x08AAFE74u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 177u, 0x0892CC64u>(ctx, &aot_mem) && ctx.pc == 0x08AAFE74u) goto L_08AAFE74;
    return;
L_08AAFE74:
    ctx.set_gpr(31, 0x08AAFE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AAFE7Cu) goto L_08AAFE7C;
    return;
L_08AAFE7C:
    ctx.set_gpr(31, 0x08AAFE84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AAFE84u) goto L_08AAFE84;
    return;
L_08AAFE84:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08AAFE90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AAFE90u) goto L_08AAFE90;
    return;
L_08AAFE90:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_08AAFEA4;
L_08AAFEA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFEB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AAFEE8;
      }
      goto L_08AAFEE0;
    }
L_08AAFEE0:
    ctx.set_gpr(31, 0x08AAFEE8u);
    // nop
    goto L_08AAFE28;
L_08AAFEE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AAFF24;
    }
    goto L_08AAFEF8;
L_08AAFEF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08AAFF3C;
    }
    goto L_08AAFF04;
L_08AAFF04:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFF3C;
      }
      goto L_08AAFF0C;
    }
L_08AAFF0C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAFF3C;
      }
      goto L_08AAFF14;
    }
L_08AAFF14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFF3C;
      }
      goto L_08AAFF20;
    }
L_08AAFF20:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AAFF24;
L_08AAFF24:
    ctx.set_gpr(31, 0x08AAFF2Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 1u, 0x0887C28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAFF2Cu) goto L_08AAFF2C;
    return;
L_08AAFF2C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2444), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AAFF3C;
L_08AAFF3C:
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
L_08AAFF54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AAFF64u);
    // nop
    goto L_08AAFE20;
L_08AAFF64:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AAFF88;
    }
    goto L_08AAFF70;
L_08AAFF70:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AAFF84;
      }
      goto L_08AAFF7C;
    }
L_08AAFF7C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AAFF88;
      }
      goto L_08AAFF84;
    }
L_08AAFF84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AAFF88;
L_08AAFF88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFF94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AAFFA4u);
    // nop
    goto L_08AAFE20;
L_08AAFFA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 4u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFFB8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AAFEB8;
L_08AAFFCC:
    // nop
    goto L_08AAFF94;
L_08AAFFD4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08AAFEB8;
L_08AAFFE8:
    // nop
    goto L_08AAFF94;
L_08AAFFF0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08AAFEB8;
}

void recomp_unit_0170(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0170_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_170(Runtime &runtime) {
    runtime.register_generated_unit(170u, 0x08AAC000u, 16384u, &recomp_unit_0170, &recomp_unit_0170_entry);
    runtime.register_function(0x08AAC000u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC00Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC028u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC048u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC064u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC084u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC08Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC100u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC118u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC134u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC148u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC154u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC15Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC160u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC174u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC190u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC25Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC264u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC274u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC304u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC324u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC32Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC344u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC358u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC360u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC368u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC370u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC374u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC37Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC390u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC400u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC414u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC430u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC444u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC450u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC458u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC45Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC470u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC514u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC530u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC550u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC56Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC58Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC594u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC604u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC60Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC614u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC61Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC640u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC65Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC668u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC670u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC678u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC690u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC698u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC708u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC714u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC71Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC724u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC730u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC738u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC744u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC74Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC754u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC758u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC764u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC770u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC778u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC788u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC798u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC800u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC808u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC81Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC82Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC830u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC844u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC854u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC85Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC87Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC884u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC88Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC900u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC910u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC92Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC934u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC938u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC950u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC958u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC960u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC96Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC974u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC97Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC988u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC990u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC99Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAD0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACED4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD00Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD018u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD01Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD030u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD040u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD050u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD074u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD07Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD088u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD094u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD104u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD114u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD18Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD194u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD19Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD200u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD218u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD22Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD240u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD24Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD258u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD264u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD26Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD278u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD27Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD298u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD300u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD308u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD334u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD350u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD364u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD374u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD37Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD38Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD39Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD424u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD430u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD434u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD43Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD450u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD460u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD47Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD49Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD500u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD508u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD518u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD528u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD548u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD568u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD570u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD584u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD598u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD608u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD624u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD62Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD63Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD650u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD66Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD674u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD684u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD68Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD694u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD700u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD708u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD710u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD724u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD740u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD748u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD750u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD758u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD760u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD768u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD770u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD778u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD780u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD788u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD790u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD798u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD80Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD81Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD824u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD82Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD844u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD84Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD858u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD860u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD870u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD874u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD878u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD884u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD88Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD898u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD904u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD90Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD914u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD91Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD928u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD930u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD940u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD948u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD958u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD960u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD974u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD97Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD994u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADACCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBD0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADED8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE000u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE028u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE030u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE044u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE04Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE060u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE080u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE094u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE104u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE120u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE130u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE158u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE170u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE178u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE194u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE200u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE208u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE210u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE21Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE224u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE23Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE244u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE250u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE258u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE25Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE264u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE270u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE278u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE280u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE284u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE290u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE2A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE2ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE2C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE2D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE310u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE324u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE330u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE348u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE360u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE368u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE374u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE390u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE398u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE404u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE410u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE418u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE424u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE42Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE434u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE440u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE448u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE454u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE45Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE468u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE470u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE478u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE484u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE48Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE498u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE504u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE50Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE518u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE520u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE52Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE534u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE538u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE540u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE548u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE550u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE558u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE564u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE568u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE578u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE598u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE604u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE618u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE624u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE64Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE668u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE670u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE684u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE704u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE708u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE718u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE720u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE728u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE730u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE744u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE758u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE768u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE770u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE778u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE780u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE794u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE80Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE81Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE82Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE83Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE850u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE86Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE874u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE880u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE88Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE894u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE898u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE900u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE94Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE98Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEACCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAD0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEAFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDD0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEED0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEDCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF000u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF018u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF020u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF024u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF030u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF038u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF044u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF058u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF064u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF080u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF088u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF094u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF100u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF10Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF128u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF134u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF138u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF150u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF158u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF164u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF19Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF200u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF214u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF220u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF224u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF23Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF244u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF248u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF24Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF274u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF304u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF310u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF314u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF32Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF334u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF33Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF360u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF394u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF408u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF410u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF41Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF430u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF444u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF44Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF454u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF45Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF46Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF478u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF490u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF49Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF500u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF508u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF510u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF518u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF520u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF528u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF530u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF538u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF540u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF544u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF54Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF560u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF568u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF574u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF580u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF58Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF598u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF608u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF614u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF61Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF624u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF62Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF634u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF638u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF644u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF658u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF660u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF66Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF678u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF684u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF690u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF698u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF718u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF74Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF754u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF76Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF780u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF788u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF790u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF798u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF808u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF810u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF81Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF834u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF840u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF858u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF860u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF86Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF910u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF928u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF934u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF93Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF940u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF950u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF990u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF998u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFACCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFADCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCDCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF20u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFF0u, &recomp_unit_0170, "recomp_unit_0170");
}
} // namespace psprecomp
