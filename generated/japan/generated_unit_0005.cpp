#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0005[4068] = {
    1, 0, 2, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 0,
    14, 0, 0, 15, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 24,
    0, 0, 25, 0, 0, 26, 27, 0, 28, 0, 29, 0, 30, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35,
    0, 0, 36, 0, 37, 0, 38, 0, 39, 40, 0, 0, 0, 0, 0, 41, 0, 42, 43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0,
    48, 0, 49, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 70, 71,
    72, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0,
    0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 93, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99,
    0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0,
    105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 113,
    0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118, 119, 0, 0, 120, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 129, 130, 0, 0, 0, 0, 0, 131, 0, 132, 133, 0, 0, 134, 0, 135,
    0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147,
    0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 153, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 158,
    159, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0,
    166, 0, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0,
    175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 179, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 185, 0, 186, 0, 187,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0,
    193, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 213,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 218, 219, 0, 0,
    0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0,
    229, 0, 230, 231, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0,
    0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 254, 0, 255, 256, 0, 0, 257, 0, 258, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 263,
    0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271,
    272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 278, 279, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 282, 0, 283, 284, 0, 0, 285, 0, 286, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 289,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 292, 0, 0, 293, 0, 0, 0, 294, 0, 295, 296, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 299, 0, 0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 305, 0, 0, 0, 0, 0, 306,
    0, 0, 307, 0, 308, 309, 0, 310, 0, 311, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 319, 0, 320, 321, 0, 0, 322, 0, 323, 324,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 327, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0,
    0, 336, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 340, 0, 341, 0, 342, 0, 343, 0, 0, 344, 345, 0, 0, 346, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 350, 0, 0, 351, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 354, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 358, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 361, 0, 362, 0, 363, 0, 0, 364, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 367, 0, 0, 368, 0, 369, 0, 370, 0, 0, 371, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0,
    376, 0, 377, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 382, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 386, 387, 0, 0, 388, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 0, 393, 0, 394, 0, 395, 0, 0, 396, 0, 397, 398, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 399, 400, 0, 401, 0, 402, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0,
    0, 407, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 411, 0, 0, 0, 412, 0, 413, 0, 0, 0, 414, 415,
    0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 419, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 423, 0, 424,
    0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0,
    0, 0, 432, 0, 0, 0, 433, 434, 0, 0, 0, 435, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 439, 0, 440, 0, 0, 441, 0,
    0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 448, 0, 0, 0, 0, 449, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 450, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 455, 0, 456, 0, 0,
    457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 462, 0, 0, 463, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 468, 0, 469, 0, 0, 470,
    471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 0, 479, 0, 0, 0, 480,
    0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0,
    0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 494, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0,
    500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 505, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0,
    0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 516, 0,
    0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 522, 0, 523, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 530, 0, 0,
    531, 0, 0, 0, 532, 533, 0, 0, 0, 534, 0, 0, 0, 0, 535, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0,
    539, 0, 0, 0, 540, 0, 0, 0, 541, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 546,
    0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 550, 551, 0, 0, 0, 0, 552, 0, 0, 553, 0, 554, 0, 0, 555, 0, 556,
    557, 558, 0, 559, 0, 0, 560, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0,
    566, 567, 0, 568, 0, 569, 0, 0, 570, 0, 571, 0, 0, 572, 0, 0, 573, 0, 574, 0, 575, 0, 0, 576, 0, 577, 0, 578, 0, 0, 579, 0,
    580, 0, 581, 582, 0, 583, 0, 0, 584, 0, 585, 0, 586, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0,
    0, 590, 0, 591, 0, 592, 0, 593, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 599, 600, 0, 0,
    0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 603, 0, 604, 0, 0, 605, 606, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 607, 608, 0, 0, 609, 0, 610, 0, 0, 0, 611, 612, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614,
    0, 0, 615, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    620, 0, 621, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0,
    0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 627, 0, 0, 628, 0, 629, 0, 0, 0, 0, 630, 0, 0, 631, 632, 0, 633,
    0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 639, 0, 640, 0, 641, 0, 0, 0,
    0, 0, 0, 642, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 646, 0, 647, 0, 0, 648, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0,
    651, 0, 0, 652, 0, 653, 0, 654, 0, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 661, 0, 662, 0, 0,
    0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 666, 667, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0,
    670, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 674, 0, 675, 0, 676, 0, 0, 0, 0, 677, 0, 678, 0, 0, 679, 0, 0,
    0, 680, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 684,
    0, 0, 0, 0, 0, 0, 685, 686, 687, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 0, 692, 0,
    0, 0, 693, 0, 0, 694, 695, 0, 696, 0, 0, 697, 698, 0, 0, 699, 0, 700, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0,
    0, 0, 704, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 707, 708, 0, 0, 0, 709, 0, 710, 0, 0, 711, 0, 0, 0, 712,
    713, 0, 714, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 717, 0, 718, 0, 719, 0, 720, 0, 0, 0, 721, 722, 0, 723, 0, 0, 0, 724,
    0, 725, 0, 0, 0, 726, 727, 0, 728, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0,
    733, 0, 734, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 739, 0, 740, 0, 741, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0,
    745, 0, 746, 0, 0, 0, 747, 0, 748, 0, 0, 0, 749, 0, 0, 750, 0, 751, 0, 752, 0, 753, 0, 0, 754, 0, 755, 0, 0, 0, 0, 756,
    0, 0, 757, 0, 758, 0, 759, 0, 0, 0, 0, 760, 0, 761, 762, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 764, 765, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 770, 0, 771,
    0, 772, 0, 773, 0, 0, 0, 0, 774, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 778, 779, 0, 0, 0, 780,
    0, 0, 0, 0, 0, 781, 0, 782, 0, 783, 784, 0, 785, 0, 0, 786, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 789, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 792, 0, 0, 793, 0, 794, 0, 0, 0, 0, 0, 0, 795, 796, 0, 0, 0, 797,
    0, 798, 0, 799, 0, 0, 0, 0, 0, 0, 800, 801, 0, 802, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 0, 805, 0, 806,
    807, 0, 808, 0, 0, 0, 809, 0, 0, 0, 0, 810, 811, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 813, 0, 814, 0, 815, 0, 816, 0, 817,
    0, 818, 0, 0, 0, 0, 0, 0, 819, 820, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0,
    0, 824, 825, 0, 826, 0, 0, 827, 0, 0, 0, 828, 0, 0, 829, 0, 0, 830, 0, 831, 0, 832, 833, 0, 834, 0, 0, 0, 835, 0, 836, 0,
    0, 0, 0, 837, 0, 838, 0, 0, 0, 839, 0, 0, 0, 0, 0, 840, 0, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 843, 844, 0, 0, 845,
    0, 0, 0, 0, 0, 846, 0, 0, 847, 848, 0, 0, 0, 0, 0, 849, 0, 0, 850, 0, 0, 851, 852, 0, 853, 0, 0, 854, 0, 0, 855, 856,
    0, 857, 0, 0, 0, 0, 858, 0, 859, 0, 860, 0, 861, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 863, 0, 0, 864, 0, 0, 0, 865, 0,
    0, 0, 866, 0, 867, 0, 868, 869, 0, 0, 870, 871, 0, 0, 872, 0, 873, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 875, 0, 0, 0, 0, 0, 876, 0, 0, 0, 877, 0, 878, 0, 0, 879, 0, 880, 0, 881, 0, 882, 0, 883, 0, 884, 0, 885, 886, 0, 0,
    0, 0, 0, 0, 887, 888, 0, 0, 889, 0, 0, 890, 0, 0, 0, 891, 892, 0, 893, 0, 0, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0,
    0, 0, 895, 0, 0, 0, 0, 0, 0, 896, 0, 0, 897, 0, 0, 898, 0, 0, 0, 899, 0, 0, 0, 0, 900, 0, 0, 901, 0, 902, 0, 0,
    0, 903, 0, 0, 0, 904, 0, 905, 0, 0, 906, 0, 0, 0, 0, 0, 907, 0, 0, 0, 908, 0, 0, 909, 0, 0, 0, 0, 0, 0, 910, 0,
    0, 911, 0, 0, 0, 912, 0, 0, 0, 0, 0, 913, 0, 914, 915, 0, 0, 0, 0, 0, 916, 0, 917, 0, 0, 918, 0, 919, 0, 0, 0, 0,
    0, 920, 0, 921, 922, 0, 0, 923, 0, 0, 0, 0, 0, 0, 924, 0, 925, 0, 926, 0, 927, 0, 0, 0, 0, 928, 0, 929, 0, 0, 0, 0,
    0, 930, 0, 931, 0, 932, 0, 0, 0, 933, 0, 0, 0, 0, 0, 0, 0, 934, 0, 0, 935, 936, 0, 0, 0, 0, 0, 0, 0, 937, 0, 938,
    0, 0, 0, 0, 0, 0, 0, 939, 0, 0, 0, 0, 0, 0, 940, 0, 0, 0, 0, 941, 0, 0, 0, 0, 0, 0, 942, 0, 0, 0, 0, 943,
    0, 0, 0, 0, 944, 0, 0, 0, 0, 0, 0, 0, 945, 0, 0, 946, 0, 947, 0, 948, 0, 949, 0, 0, 950, 0, 0, 0, 0, 0, 951, 0,
    0, 952, 953, 0, 954, 0, 0, 0, 0, 955, 0, 0, 0, 956, 0, 957, 958, 0, 0, 0, 959, 0, 960, 0, 961, 0, 962, 0, 0, 963, 0, 0,
    0, 964, 0, 0, 965, 0, 0, 0, 0, 966, 0, 967, 0, 0, 0, 968, 0, 969, 0, 970, 0, 0, 971, 0, 0, 0, 0, 972, 0, 0, 0, 973,
    0, 0, 0, 0, 0, 974, 0, 0, 0, 0, 0, 0, 0, 0, 0, 975, 976, 0, 0, 977, 0, 0, 0, 978, 0, 0, 979, 0, 0, 0, 980, 0,
    0, 0, 0, 981, 0, 982, 0, 0, 983, 0, 0, 0, 984, 0, 0, 0, 0, 0, 0, 0, 985, 0, 986, 0, 987, 988, 0, 0, 0, 0, 0, 0,
    989, 0, 0, 0, 990, 991, 0, 0, 992, 0, 0, 0, 993, 0, 994, 995, 0, 996, 0, 0, 0, 0, 0, 0, 997, 0, 0, 0, 998, 0, 0, 999,
    0, 0, 1000, 0, 0, 0, 0, 0, 0, 0, 1001, 0, 1002, 0, 1003, 0, 1004, 0, 0, 0, 1005, 0, 0, 1006, 0, 1007, 0, 0, 1008, 0, 0, 0,
    0, 1009, 0, 0, 0, 1010, 0, 1011, 0, 0, 0, 0, 1012, 0, 0, 0, 1013, 0, 0, 1014, 0, 1015, 0, 0, 0, 1016, 0, 0, 0, 1017, 0, 0,
    1018, 0, 0, 1019, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1020, 0, 0, 0, 0, 0, 1021, 0, 0, 0, 1022, 0, 1023, 0, 0, 1024, 0,
    1025, 0, 1026, 0, 0, 1027, 0, 0, 1028, 1029, 0, 1030, 0, 1031, 0, 1032, 0, 1033, 0, 1034, 0, 1035, 0, 0, 0, 1036, 0, 0, 0, 1037, 0, 1038,
    0, 1039, 0, 1040, 0, 1041, 0, 1042, 0, 1043, 0, 1044, 0, 0, 1045, 0, 0, 0, 1046, 0, 1047, 0, 0, 1048, 0, 0, 0, 0, 0, 0, 1049, 0,
    1050, 0, 0, 0, 0, 0, 0, 0, 0, 1051, 0, 1052, 0, 0, 0, 1053, 0, 1054, 0, 0, 1055, 0, 1056, 0, 0, 1057, 0, 1058, 0, 1059, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1060, 0, 0, 0, 0, 0, 0, 0, 1061, 0, 1062, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1063, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1064, 0, 0, 0, 0,
    1065, 0, 1066, 1067,
};
void recomp_unit_0005_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08818000u;
        entry_id = (entry_delta < 16272u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0005[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08818000;
    case 2u: goto L_08818008;
    case 3u: goto L_08818018;
    case 4u: goto L_08818020;
    case 5u: goto L_08818028;
    case 6u: goto L_08818030;
    case 7u: goto L_08818038;
    case 8u: goto L_08818040;
    case 9u: goto L_08818050;
    case 10u: goto L_08818058;
    case 11u: goto L_08818060;
    case 12u: goto L_08818068;
    case 13u: goto L_08818070;
    case 14u: goto L_08818080;
    case 15u: goto L_0881808C;
    case 16u: goto L_08818094;
    case 17u: goto L_088180A0;
    case 18u: goto L_088180A8;
    case 19u: goto L_088180B8;
    case 20u: goto L_088180CC;
    case 21u: goto L_088180D0;
    case 22u: goto L_088180E8;
    case 23u: goto L_088180F4;
    case 24u: goto L_088180FC;
    case 25u: goto L_08818108;
    case 26u: goto L_08818114;
    case 27u: goto L_08818118;
    case 28u: goto L_08818120;
    case 29u: goto L_08818128;
    case 30u: goto L_08818130;
    case 31u: goto L_08818134;
    case 32u: goto L_0881814C;
    case 33u: goto L_08818160;
    case 34u: goto L_0881816C;
    case 35u: goto L_0881817C;
    case 36u: goto L_08818188;
    case 37u: goto L_08818190;
    case 38u: goto L_08818198;
    case 39u: goto L_088181A0;
    case 40u: goto L_088181A4;
    case 41u: goto L_088181BC;
    case 42u: goto L_088181C4;
    case 43u: goto L_088181C8;
    case 44u: goto L_088181D4;
    case 45u: goto L_088181DC;
    case 46u: goto L_088181E4;
    case 47u: goto L_088181F4;
    case 48u: goto L_08818200;
    case 49u: goto L_08818208;
    case 50u: goto L_08818210;
    case 51u: goto L_08818218;
    case 52u: goto L_08818224;
    case 53u: goto L_0881822C;
    case 54u: goto L_0881823C;
    case 55u: goto L_08818244;
    case 56u: goto L_08818250;
    case 57u: goto L_0881825C;
    case 58u: goto L_08818268;
    case 59u: goto L_08818270;
    case 60u: goto L_08818284;
    case 61u: goto L_08818298;
    case 62u: goto L_088182BC;
    case 63u: goto L_088182E4;
    case 64u: goto L_08818330;
    case 65u: goto L_08818334;
    case 66u: goto L_0881834C;
    case 67u: goto L_08818358;
    case 68u: goto L_08818360;
    case 69u: goto L_0881836C;
    case 70u: goto L_08818378;
    case 71u: goto L_0881837C;
    case 72u: goto L_08818380;
    case 73u: goto L_0881838C;
    case 74u: goto L_08818398;
    case 75u: goto L_088183AC;
    case 76u: goto L_088183C4;
    case 77u: goto L_088183E4;
    case 78u: goto L_088183F8;
    case 79u: goto L_08818404;
    case 80u: goto L_08818414;
    case 81u: goto L_08818420;
    case 82u: goto L_08818428;
    case 83u: goto L_08818430;
    case 84u: goto L_08818438;
    case 85u: goto L_08818440;
    case 86u: goto L_08818444;
    case 87u: goto L_08818484;
    case 88u: goto L_0881848C;
    case 89u: goto L_08818494;
    case 90u: goto L_088184A8;
    case 91u: goto L_088184B4;
    case 92u: goto L_088184BC;
    case 93u: goto L_088184C0;
    case 94u: goto L_088184CC;
    case 95u: goto L_088184D4;
    case 96u: goto L_088184E4;
    case 97u: goto L_088184EC;
    case 98u: goto L_088184F4;
    case 99u: goto L_088184FC;
    case 100u: goto L_08818508;
    case 101u: goto L_08818510;
    case 102u: goto L_08818548;
    case 103u: goto L_08818564;
    case 104u: goto L_08818574;
    case 105u: goto L_08818580;
    case 106u: goto L_08818590;
    case 107u: goto L_0881859C;
    case 108u: goto L_088185A8;
    case 109u: goto L_088185B0;
    case 110u: goto L_088185C8;
    case 111u: goto L_088185E4;
    case 112u: goto L_088185F8;
    case 113u: goto L_088185FC;
    case 114u: goto L_08818614;
    case 115u: goto L_08818620;
    case 116u: goto L_08818628;
    case 117u: goto L_08818634;
    case 118u: goto L_08818640;
    case 119u: goto L_08818644;
    case 120u: goto L_08818650;
    case 121u: goto L_08818654;
    case 122u: goto L_0881866C;
    case 123u: goto L_08818680;
    case 124u: goto L_0881868C;
    case 125u: goto L_0881869C;
    case 126u: goto L_088186A8;
    case 127u: goto L_088186B0;
    case 128u: goto L_088186B8;
    case 129u: goto L_088186C0;
    case 130u: goto L_088186C4;
    case 131u: goto L_088186DC;
    case 132u: goto L_088186E4;
    case 133u: goto L_088186E8;
    case 134u: goto L_088186F4;
    case 135u: goto L_088186FC;
    case 136u: goto L_08818704;
    case 137u: goto L_08818714;
    case 138u: goto L_08818720;
    case 139u: goto L_08818728;
    case 140u: goto L_08818730;
    case 141u: goto L_08818738;
    case 142u: goto L_08818744;
    case 143u: goto L_0881874C;
    case 144u: goto L_0881875C;
    case 145u: goto L_08818768;
    case 146u: goto L_08818774;
    case 147u: goto L_0881877C;
    case 148u: goto L_08818790;
    case 149u: goto L_0881879C;
    case 150u: goto L_088187C0;
    case 151u: goto L_088187E8;
    case 152u: goto L_08818834;
    case 153u: goto L_08818838;
    case 154u: goto L_08818850;
    case 155u: goto L_0881885C;
    case 156u: goto L_08818864;
    case 157u: goto L_08818870;
    case 158u: goto L_0881887C;
    case 159u: goto L_08818880;
    case 160u: goto L_08818884;
    case 161u: goto L_08818898;
    case 162u: goto L_088188B4;
    case 163u: goto L_088188D0;
    case 164u: goto L_088188E4;
    case 165u: goto L_088188F0;
    case 166u: goto L_08818900;
    case 167u: goto L_0881890C;
    case 168u: goto L_08818914;
    case 169u: goto L_0881891C;
    case 170u: goto L_08818924;
    case 171u: goto L_0881892C;
    case 172u: goto L_08818930;
    case 173u: goto L_08818970;
    case 174u: goto L_08818978;
    case 175u: goto L_08818980;
    case 176u: goto L_08818994;
    case 177u: goto L_088189A0;
    case 178u: goto L_088189A8;
    case 179u: goto L_088189AC;
    case 180u: goto L_088189B8;
    case 181u: goto L_088189C0;
    case 182u: goto L_088189CC;
    case 183u: goto L_088189D4;
    case 184u: goto L_088189DC;
    case 185u: goto L_088189EC;
    case 186u: goto L_088189F4;
    case 187u: goto L_088189FC;
    case 188u: goto L_08818A34;
    case 189u: goto L_08818A48;
    case 190u: goto L_08818A54;
    case 191u: goto L_08818A60;
    case 192u: goto L_08818A68;
    case 193u: goto L_08818A80;
    case 194u: goto L_08818A8C;
    case 195u: goto L_08818AA4;
    case 196u: goto L_08818AB0;
    case 197u: goto L_08818ABC;
    case 198u: goto L_08818ACC;
    case 199u: goto L_08818AD0;
    case 200u: goto L_08818AE0;
    case 201u: goto L_08818AE8;
    case 202u: goto L_08818B0C;
    case 203u: goto L_08818B38;
    case 204u: goto L_08818B40;
    case 205u: goto L_08818B54;
    case 206u: goto L_08818B5C;
    case 207u: goto L_08818B70;
    case 208u: goto L_08818BA0;
    case 209u: goto L_08818BC4;
    case 210u: goto L_08818BCC;
    case 211u: goto L_08818BD8;
    case 212u: goto L_08818BE0;
    case 213u: goto L_08818BFC;
    case 214u: goto L_08818C14;
    case 215u: goto L_08818C3C;
    case 216u: goto L_08818C5C;
    case 217u: goto L_08818C64;
    case 218u: goto L_08818C70;
    case 219u: goto L_08818C74;
    case 220u: goto L_08818C8C;
    case 221u: goto L_08818C98;
    case 222u: goto L_08818CAC;
    case 223u: goto L_08818CB0;
    case 224u: goto L_08818CC8;
    case 225u: goto L_08818CE0;
    case 226u: goto L_08818CE8;
    case 227u: goto L_08818CF0;
    case 228u: goto L_08818CF8;
    case 229u: goto L_08818D00;
    case 230u: goto L_08818D08;
    case 231u: goto L_08818D0C;
    case 232u: goto L_08818D24;
    case 233u: goto L_08818D30;
    case 234u: goto L_08818D3C;
    case 235u: goto L_08818D48;
    case 236u: goto L_08818D4C;
    case 237u: goto L_08818D90;
    case 238u: goto L_08818DA4;
    case 239u: goto L_08818DB0;
    case 240u: goto L_08818DB8;
    case 241u: goto L_08818DC0;
    case 242u: goto L_08818DC8;
    case 243u: goto L_08818DD0;
    case 244u: goto L_08818DF8;
    case 245u: goto L_08818E14;
    case 246u: goto L_08818E2C;
    case 247u: goto L_08818E34;
    case 248u: goto L_08818E54;
    case 249u: goto L_08818E94;
    case 250u: goto L_08818EB0;
    case 251u: goto L_08818EBC;
    case 252u: goto L_08818ECC;
    case 253u: goto L_08818F04;
    case 254u: goto L_08818F14;
    case 255u: goto L_08818F1C;
    case 256u: goto L_08818F20;
    case 257u: goto L_08818F2C;
    case 258u: goto L_08818F34;
    case 259u: goto L_08818F38;
    case 260u: goto L_08818F40;
    case 261u: goto L_08818F6C;
    case 262u: goto L_08818F78;
    case 263u: goto L_08818F7C;
    case 264u: goto L_08818F84;
    case 265u: goto L_08818F9C;
    case 266u: goto L_08818FA4;
    case 267u: goto L_08818FB4;
    case 268u: goto L_08818FCC;
    case 269u: goto L_08818FD4;
    case 270u: goto L_08818FF0;
    case 271u: goto L_08818FFC;
    case 272u: goto L_08819000;
    case 273u: goto L_08819010;
    case 274u: goto L_08819020;
    case 275u: goto L_08819028;
    case 276u: goto L_0881902C;
    case 277u: goto L_0881905C;
    case 278u: goto L_08819060;
    case 279u: goto L_08819064;
    case 280u: goto L_0881906C;
    case 281u: goto L_088190A0;
    case 282u: goto L_088190A4;
    case 283u: goto L_088190AC;
    case 284u: goto L_088190B0;
    case 285u: goto L_088190BC;
    case 286u: goto L_088190C4;
    case 287u: goto L_088190C8;
    case 288u: goto L_088190F8;
    case 289u: goto L_088190FC;
    case 290u: goto L_08819108;
    case 291u: goto L_08819138;
    case 292u: goto L_0881913C;
    case 293u: goto L_08819148;
    case 294u: goto L_08819158;
    case 295u: goto L_08819160;
    case 296u: goto L_08819164;
    case 297u: goto L_08819190;
    case 298u: goto L_088191A8;
    case 299u: goto L_088191AC;
    case 300u: goto L_088191B8;
    case 301u: goto L_088191C0;
    case 302u: goto L_088191CC;
    case 303u: goto L_088191D8;
    case 304u: goto L_088191E0;
    case 305u: goto L_088191E4;
    case 306u: goto L_088191FC;
    case 307u: goto L_08819208;
    case 308u: goto L_08819210;
    case 309u: goto L_08819214;
    case 310u: goto L_0881921C;
    case 311u: goto L_08819224;
    case 312u: goto L_08819228;
    case 313u: goto L_08819238;
    case 314u: goto L_0881926C;
    case 315u: goto L_08819278;
    case 316u: goto L_08819284;
    case 317u: goto L_088192C4;
    case 318u: goto L_088192D0;
    case 319u: goto L_088192D8;
    case 320u: goto L_088192E0;
    case 321u: goto L_088192E4;
    case 322u: goto L_088192F0;
    case 323u: goto L_088192F8;
    case 324u: goto L_088192FC;
    case 325u: goto L_0881932C;
    case 326u: goto L_08819338;
    case 327u: goto L_08819340;
    case 328u: goto L_08819348;
    case 329u: goto L_08819350;
    case 330u: goto L_08819364;
    case 331u: goto L_0881936C;
    case 332u: goto L_088193A4;
    case 333u: goto L_088193B8;
    case 334u: goto L_088193E8;
    case 335u: goto L_088193F8;
    case 336u: goto L_08819404;
    case 337u: goto L_08819408;
    case 338u: goto L_08819424;
    case 339u: goto L_08819438;
    case 340u: goto L_0881943C;
    case 341u: goto L_08819444;
    case 342u: goto L_0881944C;
    case 343u: goto L_08819454;
    case 344u: goto L_08819460;
    case 345u: goto L_08819464;
    case 346u: goto L_08819470;
    case 347u: goto L_0881949C;
    case 348u: goto L_088194A8;
    case 349u: goto L_088194B0;
    case 350u: goto L_088194B8;
    case 351u: goto L_088194C4;
    case 352u: goto L_088194C8;
    case 353u: goto L_08819510;
    case 354u: goto L_08819514;
    case 355u: goto L_08819524;
    case 356u: goto L_0881952C;
    case 357u: goto L_08819564;
    case 358u: goto L_08819568;
    case 359u: goto L_0881959C;
    case 360u: goto L_088195A4;
    case 361u: goto L_088195B0;
    case 362u: goto L_088195B8;
    case 363u: goto L_088195C0;
    case 364u: goto L_088195CC;
    case 365u: goto L_088195D0;
    case 366u: goto L_088195DC;
    case 367u: goto L_08819608;
    case 368u: goto L_08819614;
    case 369u: goto L_0881961C;
    case 370u: goto L_08819624;
    case 371u: goto L_08819630;
    case 372u: goto L_08819634;
    case 373u: goto L_08819640;
    case 374u: goto L_0881966C;
    case 375u: goto L_08819678;
    case 376u: goto L_08819680;
    case 377u: goto L_08819688;
    case 378u: goto L_08819690;
    case 379u: goto L_0881969C;
    case 380u: goto L_088196CC;
    case 381u: goto L_088196D0;
    case 382u: goto L_08819710;
    case 383u: goto L_08819714;
    case 384u: goto L_08819748;
    case 385u: goto L_08819750;
    case 386u: goto L_0881975C;
    case 387u: goto L_08819760;
    case 388u: goto L_0881976C;
    case 389u: goto L_08819798;
    case 390u: goto L_088197A4;
    case 391u: goto L_088197AC;
    case 392u: goto L_088197B4;
    case 393u: goto L_088197C0;
    case 394u: goto L_088197C8;
    case 395u: goto L_088197D0;
    case 396u: goto L_088197DC;
    case 397u: goto L_088197E4;
    case 398u: goto L_088197E8;
    case 399u: goto L_08819818;
    case 400u: goto L_0881981C;
    case 401u: goto L_08819824;
    case 402u: goto L_0881982C;
    case 403u: goto L_08819834;
    case 404u: goto L_08819840;
    case 405u: goto L_08819870;
    case 406u: goto L_08819878;
    case 407u: goto L_08819884;
    case 408u: goto L_0881988C;
    case 409u: goto L_0881989C;
    case 410u: goto L_088198CC;
    case 411u: goto L_088198D0;
    case 412u: goto L_088198E0;
    case 413u: goto L_088198E8;
    case 414u: goto L_088198F8;
    case 415u: goto L_088198FC;
    case 416u: goto L_08819908;
    case 417u: goto L_08819934;
    case 418u: goto L_08819940;
    case 419u: goto L_08819948;
    case 420u: goto L_08819950;
    case 421u: goto L_0881995C;
    case 422u: goto L_08819964;
    case 423u: goto L_08819974;
    case 424u: goto L_0881997C;
    case 425u: goto L_08819988;
    case 426u: goto L_08819998;
    case 427u: goto L_088199B0;
    case 428u: goto L_088199B8;
    case 429u: goto L_088199DC;
    case 430u: goto L_088199E8;
    case 431u: goto L_088199F8;
    case 432u: goto L_08819A08;
    case 433u: goto L_08819A18;
    case 434u: goto L_08819A1C;
    case 435u: goto L_08819A2C;
    case 436u: goto L_08819A30;
    case 437u: goto L_08819A50;
    case 438u: goto L_08819A58;
    case 439u: goto L_08819A64;
    case 440u: goto L_08819A6C;
    case 441u: goto L_08819A78;
    case 442u: goto L_08819A84;
    case 443u: goto L_08819A9C;
    case 444u: goto L_08819AA8;
    case 445u: goto L_08819AB8;
    case 446u: goto L_08819AC8;
    case 447u: goto L_08819AD8;
    case 448u: goto L_08819ADC;
    case 449u: goto L_08819AF0;
    case 450u: goto L_08819B20;
    case 451u: goto L_08819B24;
    case 452u: goto L_08819B30;
    case 453u: goto L_08819B58;
    case 454u: goto L_08819B64;
    case 455u: goto L_08819B6C;
    case 456u: goto L_08819B74;
    case 457u: goto L_08819B80;
    case 458u: goto L_08819BB4;
    case 459u: goto L_08819BBC;
    case 460u: goto L_08819BC8;
    case 461u: goto L_08819BD4;
    case 462u: goto L_08819C0C;
    case 463u: goto L_08819C18;
    case 464u: goto L_08819C1C;
    case 465u: goto L_08819C28;
    case 466u: goto L_08819C54;
    case 467u: goto L_08819C60;
    case 468u: goto L_08819C68;
    case 469u: goto L_08819C70;
    case 470u: goto L_08819C7C;
    case 471u: goto L_08819C80;
    case 472u: goto L_08819C8C;
    case 473u: goto L_08819CB8;
    case 474u: goto L_08819CC4;
    case 475u: goto L_08819CCC;
    case 476u: goto L_08819CD4;
    case 477u: goto L_08819CDC;
    case 478u: goto L_08819CE4;
    case 479u: goto L_08819CEC;
    case 480u: goto L_08819CFC;
    case 481u: goto L_08819D08;
    case 482u: goto L_08819D1C;
    case 483u: goto L_08819D50;
    case 484u: goto L_08819D54;
    case 485u: goto L_08819D88;
    case 486u: goto L_08819DA0;
    case 487u: goto L_08819DB0;
    case 488u: goto L_08819DC8;
    case 489u: goto L_08819DCC;
    case 490u: goto L_08819DD8;
    case 491u: goto L_08819DF4;
    case 492u: goto L_08819E10;
    case 493u: goto L_08819E1C;
    case 494u: goto L_08819E2C;
    case 495u: goto L_08819E30;
    case 496u: goto L_08819E44;
    case 497u: goto L_08819E58;
    case 498u: goto L_08819E68;
    case 499u: goto L_08819E74;
    case 500u: goto L_08819E80;
    case 501u: goto L_08819E94;
    case 502u: goto L_08819EA8;
    case 503u: goto L_08819EB4;
    case 504u: goto L_08819ED0;
    case 505u: goto L_08819ED4;
    case 506u: goto L_08819EE8;
    case 507u: goto L_08819EF8;
    case 508u: goto L_08819F04;
    case 509u: goto L_08819F18;
    case 510u: goto L_08819F28;
    case 511u: goto L_08819F3C;
    case 512u: goto L_08819F48;
    case 513u: goto L_08819F58;
    case 514u: goto L_08819F64;
    case 515u: goto L_08819F74;
    case 516u: goto L_08819F78;
    case 517u: goto L_08819F88;
    case 518u: goto L_08819FA4;
    case 519u: goto L_08819FBC;
    case 520u: goto L_08819FD4;
    case 521u: goto L_08819FE0;
    case 522u: goto L_08819FE8;
    case 523u: goto L_08819FF0;
    case 524u: goto L_0881A01C;
    case 525u: goto L_0881A024;
    case 526u: goto L_0881A034;
    case 527u: goto L_0881A03C;
    case 528u: goto L_0881A054;
    case 529u: goto L_0881A070;
    case 530u: goto L_0881A074;
    case 531u: goto L_0881A080;
    case 532u: goto L_0881A090;
    case 533u: goto L_0881A094;
    case 534u: goto L_0881A0A4;
    case 535u: goto L_0881A0B8;
    case 536u: goto L_0881A0BC;
    case 537u: goto L_0881A0E4;
    case 538u: goto L_0881A0EC;
    case 539u: goto L_0881A100;
    case 540u: goto L_0881A110;
    case 541u: goto L_0881A120;
    case 542u: goto L_0881A124;
    case 543u: goto L_0881A14C;
    case 544u: goto L_0881A158;
    case 545u: goto L_0881A170;
    case 546u: goto L_0881A17C;
    case 547u: goto L_0881A188;
    case 548u: goto L_0881A1A4;
    case 549u: goto L_0881A1AC;
    case 550u: goto L_0881A1BC;
    case 551u: goto L_0881A1C0;
    case 552u: goto L_0881A1D4;
    case 553u: goto L_0881A1E0;
    case 554u: goto L_0881A1E8;
    case 555u: goto L_0881A1F4;
    case 556u: goto L_0881A1FC;
    case 557u: goto L_0881A200;
    case 558u: goto L_0881A204;
    case 559u: goto L_0881A20C;
    case 560u: goto L_0881A218;
    case 561u: goto L_0881A220;
    case 562u: goto L_0881A230;
    case 563u: goto L_0881A248;
    case 564u: goto L_0881A250;
    case 565u: goto L_0881A26C;
    case 566u: goto L_0881A280;
    case 567u: goto L_0881A284;
    case 568u: goto L_0881A28C;
    case 569u: goto L_0881A294;
    case 570u: goto L_0881A2A0;
    case 571u: goto L_0881A2A8;
    case 572u: goto L_0881A2B4;
    case 573u: goto L_0881A2C0;
    case 574u: goto L_0881A2C8;
    case 575u: goto L_0881A2D0;
    case 576u: goto L_0881A2DC;
    case 577u: goto L_0881A2E4;
    case 578u: goto L_0881A2EC;
    case 579u: goto L_0881A2F8;
    case 580u: goto L_0881A300;
    case 581u: goto L_0881A308;
    case 582u: goto L_0881A30C;
    case 583u: goto L_0881A314;
    case 584u: goto L_0881A320;
    case 585u: goto L_0881A328;
    case 586u: goto L_0881A330;
    case 587u: goto L_0881A344;
    case 588u: goto L_0881A350;
    case 589u: goto L_0881A360;
    case 590u: goto L_0881A384;
    case 591u: goto L_0881A38C;
    case 592u: goto L_0881A394;
    case 593u: goto L_0881A39C;
    case 594u: goto L_0881A3A0;
    case 595u: goto L_0881A3B0;
    case 596u: goto L_0881A3D0;
    case 597u: goto L_0881A3DC;
    case 598u: goto L_0881A3E4;
    case 599u: goto L_0881A3F0;
    case 600u: goto L_0881A3F4;
    case 601u: goto L_0881A418;
    case 602u: goto L_0881A450;
    case 603u: goto L_0881A454;
    case 604u: goto L_0881A45C;
    case 605u: goto L_0881A468;
    case 606u: goto L_0881A46C;
    case 607u: goto L_0881A498;
    case 608u: goto L_0881A49C;
    case 609u: goto L_0881A4A8;
    case 610u: goto L_0881A4B0;
    case 611u: goto L_0881A4C0;
    case 612u: goto L_0881A4C4;
    case 613u: goto L_0881A4D0;
    case 614u: goto L_0881A4FC;
    case 615u: goto L_0881A508;
    case 616u: goto L_0881A510;
    case 617u: goto L_0881A518;
    case 618u: goto L_0881A548;
    case 619u: goto L_0881A54C;
    case 620u: goto L_0881A580;
    case 621u: goto L_0881A588;
    case 622u: goto L_0881A58C;
    case 623u: goto L_0881A5D0;
    case 624u: goto L_0881A5EC;
    case 625u: goto L_0881A608;
    case 626u: goto L_0881A634;
    case 627u: goto L_0881A63C;
    case 628u: goto L_0881A648;
    case 629u: goto L_0881A650;
    case 630u: goto L_0881A664;
    case 631u: goto L_0881A670;
    case 632u: goto L_0881A674;
    case 633u: goto L_0881A67C;
    case 634u: goto L_0881A68C;
    case 635u: goto L_0881A6A0;
    case 636u: goto L_0881A6B4;
    case 637u: goto L_0881A6C8;
    case 638u: goto L_0881A6D0;
    case 639u: goto L_0881A6E0;
    case 640u: goto L_0881A6E8;
    case 641u: goto L_0881A6F0;
    case 642u: goto L_0881A70C;
    case 643u: goto L_0881A714;
    case 644u: goto L_0881A72C;
    case 645u: goto L_0881A738;
    case 646u: goto L_0881A740;
    case 647u: goto L_0881A748;
    case 648u: goto L_0881A754;
    case 649u: goto L_0881A75C;
    case 650u: goto L_0881A764;
    case 651u: goto L_0881A780;
    case 652u: goto L_0881A78C;
    case 653u: goto L_0881A794;
    case 654u: goto L_0881A79C;
    case 655u: goto L_0881A7A8;
    case 656u: goto L_0881A7B0;
    case 657u: goto L_0881A7B8;
    case 658u: goto L_0881A7C0;
    case 659u: goto L_0881A7C8;
    case 660u: goto L_0881A7E0;
    case 661u: goto L_0881A7EC;
    case 662u: goto L_0881A7F4;
    case 663u: goto L_0881A80C;
    case 664u: goto L_0881A830;
    case 665u: goto L_0881A840;
    case 666u: goto L_0881A848;
    case 667u: goto L_0881A84C;
    case 668u: goto L_0881A858;
    case 669u: goto L_0881A86C;
    case 670u: goto L_0881A880;
    case 671u: goto L_0881A888;
    case 672u: goto L_0881A898;
    case 673u: goto L_0881A8B0;
    case 674u: goto L_0881A8BC;
    case 675u: goto L_0881A8C4;
    case 676u: goto L_0881A8CC;
    case 677u: goto L_0881A8E0;
    case 678u: goto L_0881A8E8;
    case 679u: goto L_0881A8F4;
    case 680u: goto L_0881A904;
    case 681u: goto L_0881A908;
    case 682u: goto L_0881A944;
    case 683u: goto L_0881A960;
    case 684u: goto L_0881A97C;
    case 685u: goto L_0881A998;
    case 686u: goto L_0881A99C;
    case 687u: goto L_0881A9A0;
    case 688u: goto L_0881A9AC;
    case 689u: goto L_0881A9C0;
    case 690u: goto L_0881A9D0;
    case 691u: goto L_0881A9D8;
    case 692u: goto L_0881A9F8;
    case 693u: goto L_0881AA08;
    case 694u: goto L_0881AA14;
    case 695u: goto L_0881AA18;
    case 696u: goto L_0881AA20;
    case 697u: goto L_0881AA2C;
    case 698u: goto L_0881AA30;
    case 699u: goto L_0881AA3C;
    case 700u: goto L_0881AA44;
    case 701u: goto L_0881AA54;
    case 702u: goto L_0881AA60;
    case 703u: goto L_0881AA78;
    case 704u: goto L_0881AA88;
    case 705u: goto L_0881AA90;
    case 706u: goto L_0881AAA4;
    case 707u: goto L_0881AAC4;
    case 708u: goto L_0881AAC8;
    case 709u: goto L_0881AAD8;
    case 710u: goto L_0881AAE0;
    case 711u: goto L_0881AAEC;
    case 712u: goto L_0881AAFC;
    case 713u: goto L_0881AB00;
    case 714u: goto L_0881AB08;
    case 715u: goto L_0881AB18;
    case 716u: goto L_0881AB20;
    case 717u: goto L_0881AB38;
    case 718u: goto L_0881AB40;
    case 719u: goto L_0881AB48;
    case 720u: goto L_0881AB50;
    case 721u: goto L_0881AB60;
    case 722u: goto L_0881AB64;
    case 723u: goto L_0881AB6C;
    case 724u: goto L_0881AB7C;
    case 725u: goto L_0881AB84;
    case 726u: goto L_0881AB94;
    case 727u: goto L_0881AB98;
    case 728u: goto L_0881ABA0;
    case 729u: goto L_0881ABB4;
    case 730u: goto L_0881ABC0;
    case 731u: goto L_0881ABD0;
    case 732u: goto L_0881ABF4;
    case 733u: goto L_0881AC00;
    case 734u: goto L_0881AC08;
    case 735u: goto L_0881AC10;
    case 736u: goto L_0881AC18;
    case 737u: goto L_0881AC40;
    case 738u: goto L_0881AC9C;
    case 739u: goto L_0881ACA8;
    case 740u: goto L_0881ACB0;
    case 741u: goto L_0881ACB8;
    case 742u: goto L_0881ACC8;
    case 743u: goto L_0881ACD4;
    case 744u: goto L_0881ACE8;
    case 745u: goto L_0881AD00;
    case 746u: goto L_0881AD08;
    case 747u: goto L_0881AD18;
    case 748u: goto L_0881AD20;
    case 749u: goto L_0881AD30;
    case 750u: goto L_0881AD3C;
    case 751u: goto L_0881AD44;
    case 752u: goto L_0881AD4C;
    case 753u: goto L_0881AD54;
    case 754u: goto L_0881AD60;
    case 755u: goto L_0881AD68;
    case 756u: goto L_0881AD7C;
    case 757u: goto L_0881AD88;
    case 758u: goto L_0881AD90;
    case 759u: goto L_0881AD98;
    case 760u: goto L_0881ADAC;
    case 761u: goto L_0881ADB4;
    case 762u: goto L_0881ADB8;
    case 763u: goto L_0881ADC0;
    case 764u: goto L_0881AE0C;
    case 765u: goto L_0881AE10;
    case 766u: goto L_0881AE20;
    case 767u: goto L_0881AE3C;
    case 768u: goto L_0881AE48;
    case 769u: goto L_0881AE60;
    case 770u: goto L_0881AE74;
    case 771u: goto L_0881AE7C;
    case 772u: goto L_0881AE84;
    case 773u: goto L_0881AE8C;
    case 774u: goto L_0881AEA0;
    case 775u: goto L_0881AEA4;
    case 776u: goto L_0881AED4;
    case 777u: goto L_0881AEDC;
    case 778u: goto L_0881AEE8;
    case 779u: goto L_0881AEEC;
    case 780u: goto L_0881AEFC;
    case 781u: goto L_0881AF14;
    case 782u: goto L_0881AF1C;
    case 783u: goto L_0881AF24;
    case 784u: goto L_0881AF28;
    case 785u: goto L_0881AF30;
    case 786u: goto L_0881AF3C;
    case 787u: goto L_0881AF48;
    case 788u: goto L_0881AF58;
    case 789u: goto L_0881AF74;
    case 790u: goto L_0881AFA4;
    case 791u: goto L_0881AFB0;
    case 792u: goto L_0881AFB8;
    case 793u: goto L_0881AFC4;
    case 794u: goto L_0881AFCC;
    case 795u: goto L_0881AFE8;
    case 796u: goto L_0881AFEC;
    case 797u: goto L_0881AFFC;
    case 798u: goto L_0881B004;
    case 799u: goto L_0881B00C;
    case 800u: goto L_0881B028;
    case 801u: goto L_0881B02C;
    case 802u: goto L_0881B034;
    case 803u: goto L_0881B050;
    case 804u: goto L_0881B060;
    case 805u: goto L_0881B074;
    case 806u: goto L_0881B07C;
    case 807u: goto L_0881B080;
    case 808u: goto L_0881B088;
    case 809u: goto L_0881B098;
    case 810u: goto L_0881B0AC;
    case 811u: goto L_0881B0B0;
    case 812u: goto L_0881B0C4;
    case 813u: goto L_0881B0DC;
    case 814u: goto L_0881B0E4;
    case 815u: goto L_0881B0EC;
    case 816u: goto L_0881B0F4;
    case 817u: goto L_0881B0FC;
    case 818u: goto L_0881B104;
    case 819u: goto L_0881B120;
    case 820u: goto L_0881B124;
    case 821u: goto L_0881B138;
    case 822u: goto L_0881B154;
    case 823u: goto L_0881B16C;
    case 824u: goto L_0881B184;
    case 825u: goto L_0881B188;
    case 826u: goto L_0881B190;
    case 827u: goto L_0881B19C;
    case 828u: goto L_0881B1AC;
    case 829u: goto L_0881B1B8;
    case 830u: goto L_0881B1C4;
    case 831u: goto L_0881B1CC;
    case 832u: goto L_0881B1D4;
    case 833u: goto L_0881B1D8;
    case 834u: goto L_0881B1E0;
    case 835u: goto L_0881B1F0;
    case 836u: goto L_0881B1F8;
    case 837u: goto L_0881B20C;
    case 838u: goto L_0881B214;
    case 839u: goto L_0881B224;
    case 840u: goto L_0881B23C;
    case 841u: goto L_0881B248;
    case 842u: goto L_0881B264;
    case 843u: goto L_0881B26C;
    case 844u: goto L_0881B270;
    case 845u: goto L_0881B27C;
    case 846u: goto L_0881B294;
    case 847u: goto L_0881B2A0;
    case 848u: goto L_0881B2A4;
    case 849u: goto L_0881B2BC;
    case 850u: goto L_0881B2C8;
    case 851u: goto L_0881B2D4;
    case 852u: goto L_0881B2D8;
    case 853u: goto L_0881B2E0;
    case 854u: goto L_0881B2EC;
    case 855u: goto L_0881B2F8;
    case 856u: goto L_0881B2FC;
    case 857u: goto L_0881B304;
    case 858u: goto L_0881B318;
    case 859u: goto L_0881B320;
    case 860u: goto L_0881B328;
    case 861u: goto L_0881B330;
    case 862u: goto L_0881B348;
    case 863u: goto L_0881B35C;
    case 864u: goto L_0881B368;
    case 865u: goto L_0881B378;
    case 866u: goto L_0881B388;
    case 867u: goto L_0881B390;
    case 868u: goto L_0881B398;
    case 869u: goto L_0881B39C;
    case 870u: goto L_0881B3A8;
    case 871u: goto L_0881B3AC;
    case 872u: goto L_0881B3B8;
    case 873u: goto L_0881B3C0;
    case 874u: goto L_0881B3CC;
    case 875u: goto L_0881B404;
    case 876u: goto L_0881B41C;
    case 877u: goto L_0881B42C;
    case 878u: goto L_0881B434;
    case 879u: goto L_0881B440;
    case 880u: goto L_0881B448;
    case 881u: goto L_0881B450;
    case 882u: goto L_0881B458;
    case 883u: goto L_0881B460;
    case 884u: goto L_0881B468;
    case 885u: goto L_0881B470;
    case 886u: goto L_0881B474;
    case 887u: goto L_0881B490;
    case 888u: goto L_0881B494;
    case 889u: goto L_0881B4A0;
    case 890u: goto L_0881B4AC;
    case 891u: goto L_0881B4BC;
    case 892u: goto L_0881B4C0;
    case 893u: goto L_0881B4C8;
    case 894u: goto L_0881B4E8;
    case 895u: goto L_0881B508;
    case 896u: goto L_0881B524;
    case 897u: goto L_0881B530;
    case 898u: goto L_0881B53C;
    case 899u: goto L_0881B54C;
    case 900u: goto L_0881B560;
    case 901u: goto L_0881B56C;
    case 902u: goto L_0881B574;
    case 903u: goto L_0881B584;
    case 904u: goto L_0881B594;
    case 905u: goto L_0881B59C;
    case 906u: goto L_0881B5A8;
    case 907u: goto L_0881B5C0;
    case 908u: goto L_0881B5D0;
    case 909u: goto L_0881B5DC;
    case 910u: goto L_0881B5F8;
    case 911u: goto L_0881B604;
    case 912u: goto L_0881B614;
    case 913u: goto L_0881B62C;
    case 914u: goto L_0881B634;
    case 915u: goto L_0881B638;
    case 916u: goto L_0881B650;
    case 917u: goto L_0881B658;
    case 918u: goto L_0881B664;
    case 919u: goto L_0881B66C;
    case 920u: goto L_0881B684;
    case 921u: goto L_0881B68C;
    case 922u: goto L_0881B690;
    case 923u: goto L_0881B69C;
    case 924u: goto L_0881B6B8;
    case 925u: goto L_0881B6C0;
    case 926u: goto L_0881B6C8;
    case 927u: goto L_0881B6D0;
    case 928u: goto L_0881B6E4;
    case 929u: goto L_0881B6EC;
    case 930u: goto L_0881B704;
    case 931u: goto L_0881B70C;
    case 932u: goto L_0881B714;
    case 933u: goto L_0881B724;
    case 934u: goto L_0881B744;
    case 935u: goto L_0881B750;
    case 936u: goto L_0881B754;
    case 937u: goto L_0881B774;
    case 938u: goto L_0881B77C;
    case 939u: goto L_0881B79C;
    case 940u: goto L_0881B7B8;
    case 941u: goto L_0881B7CC;
    case 942u: goto L_0881B7E8;
    case 943u: goto L_0881B7FC;
    case 944u: goto L_0881B810;
    case 945u: goto L_0881B830;
    case 946u: goto L_0881B83C;
    case 947u: goto L_0881B844;
    case 948u: goto L_0881B84C;
    case 949u: goto L_0881B854;
    case 950u: goto L_0881B860;
    case 951u: goto L_0881B878;
    case 952u: goto L_0881B884;
    case 953u: goto L_0881B888;
    case 954u: goto L_0881B890;
    case 955u: goto L_0881B8A4;
    case 956u: goto L_0881B8B4;
    case 957u: goto L_0881B8BC;
    case 958u: goto L_0881B8C0;
    case 959u: goto L_0881B8D0;
    case 960u: goto L_0881B8D8;
    case 961u: goto L_0881B8E0;
    case 962u: goto L_0881B8E8;
    case 963u: goto L_0881B8F4;
    case 964u: goto L_0881B904;
    case 965u: goto L_0881B910;
    case 966u: goto L_0881B924;
    case 967u: goto L_0881B92C;
    case 968u: goto L_0881B93C;
    case 969u: goto L_0881B944;
    case 970u: goto L_0881B94C;
    case 971u: goto L_0881B958;
    case 972u: goto L_0881B96C;
    case 973u: goto L_0881B97C;
    case 974u: goto L_0881B994;
    case 975u: goto L_0881B9BC;
    case 976u: goto L_0881B9C0;
    case 977u: goto L_0881B9CC;
    case 978u: goto L_0881B9DC;
    case 979u: goto L_0881B9E8;
    case 980u: goto L_0881B9F8;
    case 981u: goto L_0881BA0C;
    case 982u: goto L_0881BA14;
    case 983u: goto L_0881BA20;
    case 984u: goto L_0881BA30;
    case 985u: goto L_0881BA50;
    case 986u: goto L_0881BA58;
    case 987u: goto L_0881BA60;
    case 988u: goto L_0881BA64;
    case 989u: goto L_0881BA80;
    case 990u: goto L_0881BA90;
    case 991u: goto L_0881BA94;
    case 992u: goto L_0881BAA0;
    case 993u: goto L_0881BAB0;
    case 994u: goto L_0881BAB8;
    case 995u: goto L_0881BABC;
    case 996u: goto L_0881BAC4;
    case 997u: goto L_0881BAE0;
    case 998u: goto L_0881BAF0;
    case 999u: goto L_0881BAFC;
    case 1000u: goto L_0881BB08;
    case 1001u: goto L_0881BB28;
    case 1002u: goto L_0881BB30;
    case 1003u: goto L_0881BB38;
    case 1004u: goto L_0881BB40;
    case 1005u: goto L_0881BB50;
    case 1006u: goto L_0881BB5C;
    case 1007u: goto L_0881BB64;
    case 1008u: goto L_0881BB70;
    case 1009u: goto L_0881BB84;
    case 1010u: goto L_0881BB94;
    case 1011u: goto L_0881BB9C;
    case 1012u: goto L_0881BBB0;
    case 1013u: goto L_0881BBC0;
    case 1014u: goto L_0881BBCC;
    case 1015u: goto L_0881BBD4;
    case 1016u: goto L_0881BBE4;
    case 1017u: goto L_0881BBF4;
    case 1018u: goto L_0881BC00;
    case 1019u: goto L_0881BC0C;
    case 1020u: goto L_0881BC3C;
    case 1021u: goto L_0881BC54;
    case 1022u: goto L_0881BC64;
    case 1023u: goto L_0881BC6C;
    case 1024u: goto L_0881BC78;
    case 1025u: goto L_0881BC80;
    case 1026u: goto L_0881BC88;
    case 1027u: goto L_0881BC94;
    case 1028u: goto L_0881BCA0;
    case 1029u: goto L_0881BCA4;
    case 1030u: goto L_0881BCAC;
    case 1031u: goto L_0881BCB4;
    case 1032u: goto L_0881BCBC;
    case 1033u: goto L_0881BCC4;
    case 1034u: goto L_0881BCCC;
    case 1035u: goto L_0881BCD4;
    case 1036u: goto L_0881BCE4;
    case 1037u: goto L_0881BCF4;
    case 1038u: goto L_0881BCFC;
    case 1039u: goto L_0881BD04;
    case 1040u: goto L_0881BD0C;
    case 1041u: goto L_0881BD14;
    case 1042u: goto L_0881BD1C;
    case 1043u: goto L_0881BD24;
    case 1044u: goto L_0881BD2C;
    case 1045u: goto L_0881BD38;
    case 1046u: goto L_0881BD48;
    case 1047u: goto L_0881BD50;
    case 1048u: goto L_0881BD5C;
    case 1049u: goto L_0881BD78;
    case 1050u: goto L_0881BD80;
    case 1051u: goto L_0881BDA4;
    case 1052u: goto L_0881BDAC;
    case 1053u: goto L_0881BDBC;
    case 1054u: goto L_0881BDC4;
    case 1055u: goto L_0881BDD0;
    case 1056u: goto L_0881BDD8;
    case 1057u: goto L_0881BDE4;
    case 1058u: goto L_0881BDEC;
    case 1059u: goto L_0881BDF4;
    case 1060u: goto L_0881BEC4;
    case 1061u: goto L_0881BEE4;
    case 1062u: goto L_0881BEEC;
    case 1063u: goto L_0881BF28;
    case 1064u: goto L_0881BF6C;
    case 1065u: goto L_0881BF80;
    case 1066u: goto L_0881BF88;
    case 1067u: goto L_0881BF8C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08818000:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_088180A0;
    }
    goto L_08818008;
L_08818008:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    goto L_08818018;
L_08818018:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08818038;
      }
      goto L_08818020;
    }
L_08818020:
    if (ctx.gpr[8] != ctx.gpr[3]) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
        goto L_08818018;
    }
    goto L_08818028;
L_08818028:
    if (ctx.gpr[7] == 0u) {
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
        goto L_08818094;
    }
    goto L_08818030;
L_08818030:
    ctx.set_gpr(4, ctx.gpr[9] + 0u);
    goto L_08818008;
L_08818038:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0881808C;
      }
      goto L_08818040;
    }
L_08818040:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_08818050;
L_08818050:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08818068;
      }
      goto L_08818058;
    }
L_08818058:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
        goto L_08818050;
    }
    goto L_08818060;
L_08818060:
    ctx.set_gpr(9, ctx.gpr[8] + 0u);
    goto L_08818040;
L_08818068:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(8, 0u + 0u);
        goto L_08818080;
    }
    goto L_08818070;
L_08818070:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818080:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881808C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818094:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088180A0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08818008;
      }
      goto L_088180A8;
    }
L_088180A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088180B8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(25, ctx.gpr[4] + 0u);
    ctx.set_gpr(10, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    goto L_088180D0;
L_088180CC:
    ctx.set_gpr(4, ctx.gpr[9] + 0u);
    goto L_088180D0;
L_088180D0:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[10]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088180CC;
      }
      goto L_088180E8;
    }
L_088180E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
      if (branch_taken) {
          goto L_0881822C;
      }
      goto L_088180F4;
    }
L_088180F4:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[2];
    ctx.set_gpr(24, 0u + 0u);
      if (branch_taken) {
          goto L_08818250;
      }
      goto L_088180FC;
    }
L_088180FC:
    ctx.set_gpr(3, ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088181D4;
      }
      goto L_08818108;
    }
L_08818108:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088181D4;
      }
      goto L_08818114;
    }
L_08818114:
    ctx.set_gpr(14, ctx.gpr[7] + 0u);
    goto L_08818118;
L_08818118:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(2, 32768u << 16u);
      if (branch_taken) {
          goto L_08818128;
      }
      goto L_08818120;
    }
L_08818120:
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    goto L_08818128;
L_08818128:
    { const bool branch_taken = ctx.gpr[14] != 0u;
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[14]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08818134;
      }
      goto L_08818130;
    }
L_08818130:
    ctx.pc = 0x08818130u; rt.stop("Allegrex BREAK code 7 at 0x08818130"); return;
    goto L_08818134;
L_08818134:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(13, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(15, ctx.hi);
    ctx.set_gpr(12, ctx.lo);
    goto L_0881814C;
L_0881814C:
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[13]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[8] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_0881817C;
      }
      goto L_08818160;
    }
L_08818160:
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
      if (branch_taken) {
          goto L_08818200;
      }
      goto L_0881816C;
    }
L_0881816C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(55));
    if (ctx.gpr[2] == 0u) ctx.set_gpr(3, ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[8] - ctx.gpr[3]);
    goto L_0881817C;
L_0881817C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08818200;
      }
      goto L_08818188;
    }
L_08818188:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    ctx.set_gpr(2, ctx.gpr[12] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_088181C4;
      }
      goto L_08818190;
    }
L_08818190:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
        goto L_088181C8;
    }
    goto L_08818198;
L_08818198:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[11];
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088181BC;
      }
      goto L_088181A0;
    }
L_088181A0:
    ctx.lo = ctx.gpr[4];
    goto L_088181A4;
L_088181A4:
    ctx.execute_madd(11u, 14u);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.lo);
    goto L_0881814C;
L_088181BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.lo = ctx.gpr[4];
      if (branch_taken) {
          goto L_088181A4;
      }
      goto L_088181C4;
    }
L_088181C4:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    goto L_088181C8;
L_088181C8:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_0881814C;
L_088181D4:
    if (ctx.gpr[8] == ctx.gpr[2]) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
        goto L_0881825C;
    }
    goto L_088181DC;
L_088181DC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(14, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08818118;
      }
      goto L_088181E4;
    }
L_088181E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[2];
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08818118;
      }
      goto L_088181F4;
    }
L_088181F4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(10));
    goto L_08818118;
L_08818200:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    ctx.set_gpr(2, 0u - ctx.gpr[11]);
      if (branch_taken) {
          goto L_0881823C;
      }
      goto L_08818208;
    }
L_08818208:
    ctx.set_gpr(3, ctx.gpr[11] + 0u);
    if (ctx.gpr[24] != 0u) ctx.set_gpr(3, ctx.gpr[2]);
    goto L_08818210;
L_08818210:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08818224;
      }
      goto L_08818218;
    }
L_08818218:
    ctx.set_gpr(2, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[10] != 0u) ctx.set_gpr(5, ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08818224;
L_08818224:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881822C:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_088180FC;
L_0881823C:
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(3, 32768u << 16u);
      if (branch_taken) {
          goto L_08818284;
      }
      goto L_08818244;
    }
L_08818244:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08818210;
L_08818250:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_088180FC;
L_0881825C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(120));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08818270;
      }
      goto L_08818268;
    }
L_08818268:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088181DC;
      }
      goto L_08818270;
    }
L_08818270:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(16));
    goto L_08818118;
L_08818284:
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08818210;
L_08818298:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088182BCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x088182BCu) goto L_088182BC;
    return;
L_088182BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088180B8;
L_088182E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_08818334;
L_08818330:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08818334;
L_08818334:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08818330;
      }
      goto L_0881834C;
    }
L_0881834C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
      if (branch_taken) {
          goto L_08818564;
      }
      goto L_08818358;
    }
L_08818358:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(30, 0u + 0u);
      if (branch_taken) {
          goto L_08818590;
      }
      goto L_08818360;
    }
L_08818360:
    ctx.set_gpr(3, ctx.gpr[22] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08818484;
      }
      goto L_0881836C;
    }
L_0881836C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08818484;
      }
      goto L_08818378;
    }
L_08818378:
    ctx.set_gpr(20, ctx.gpr[22] + 0u);
    goto L_0881837C;
L_0881837C:
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 31u));
    goto L_08818380;
L_08818380:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(19, 32768u << 16u);
      if (branch_taken) {
          goto L_08818398;
      }
      goto L_0881838C;
    }
L_0881838C:
    ctx.set_gpr(19, 32767u << 16u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(19, ctx.gpr[19] | 65535u);
    goto L_08818398;
L_08818398:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088183ACu);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 527u, 0x0881E2E0u>(ctx, &aot_mem) && ctx.pc == 0x088183ACu) goto L_088183AC;
    return;
L_088183AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088183C4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 417u, 0x0881DCD0u>(ctx, &aot_mem) && ctx.pc == 0x088183C4u) goto L_088183C4;
    return;
L_088183C4:
    ctx.set_gpr(12, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(13, ctx.gpr[3] + 0u);
    ctx.set_gpr(14, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(15, ctx.gpr[3] + 0u);
    goto L_088183E4;
L_088183E4:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[14]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_08818414;
      }
      goto L_088183F8;
    }
L_088183F8:
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
      if (branch_taken) {
          goto L_088184EC;
      }
      goto L_08818404;
    }
L_08818404:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(55));
    if (ctx.gpr[2] == 0u) ctx.set_gpr(3, ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[16] - ctx.gpr[3]);
    goto L_08818414;
L_08818414:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088184EC;
      }
      goto L_08818420;
    }
L_08818420:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    ctx.set_gpr(2, ctx.gpr[13] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_088184BC;
      }
      goto L_08818428;
    }
L_08818428:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-1));
        goto L_088184C0;
    }
    goto L_08818430;
L_08818430:
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[11];
    ctx.set_gpr(2, ctx.gpr[12] < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_088184B4;
      }
      goto L_08818438;
    }
L_08818438:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[12];
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[10]) * static_cast<std::uint64_t>(ctx.gpr[20]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
      if (branch_taken) {
          goto L_088184CC;
      }
      goto L_08818440;
    }
L_08818440:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    goto L_08818444;
L_08818444:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.hi);
    ctx.set_gpr(6, ctx.lo);
    ctx.lo = ctx.gpr[7];
    ctx.execute_madd(10u, 21u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.execute_madd(20u, 11u);
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    goto L_088183E4;
L_08818484:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
        goto L_0881859C;
    }
    goto L_0881848C;
L_0881848C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(20, ctx.gpr[22] + 0u);
      if (branch_taken) {
          goto L_0881837C;
      }
      goto L_08818494;
    }
L_08818494:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(21, 0u + 0u);
      if (branch_taken) {
          goto L_08818380;
      }
      goto L_088184A8;
    }
L_088184A8:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(10));
    goto L_08818380;
L_088184B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08818438;
      }
      goto L_088184BC;
    }
L_088184BC:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-1));
    goto L_088184C0;
L_088184C0:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088183E4;
L_088184CC:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_08818440;
      }
      goto L_088184D4;
    }
L_088184D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
      if (branch_taken) {
          goto L_08818444;
      }
      goto L_088184E4;
    }
L_088184E4:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-1));
    goto L_088184C0;
L_088184EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    ctx.set_gpr(4, ctx.gpr[10] + 0u);
      if (branch_taken) {
          goto L_08818574;
      }
      goto L_088184F4;
    }
L_088184F4:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(5, ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08818548;
      }
      goto L_088184FC;
    }
L_088184FC:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08818510;
      }
      goto L_08818508;
    }
L_08818508:
    if (ctx.gpr[9] != 0u) ctx.set_gpr(23, ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    goto L_08818510;
L_08818510:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818548:
    ctx.set_gpr(2, 0u - ctx.gpr[10]);
    ctx.set_gpr(4, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, 0u - ctx.gpr[11]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088184FC;
L_08818564:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08818360;
L_08818574:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.set_gpr(5, 32768u << 16u);
      if (branch_taken) {
          goto L_088185C8;
      }
      goto L_08818580;
    }
L_08818580:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088184FC;
L_08818590:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08818360;
L_0881859C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(120));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_088185B0;
      }
      goto L_088185A8;
    }
L_088185A8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0881848C;
      }
      goto L_088185B0;
    }
L_088185B0:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(21, 0u + 0u);
    goto L_08818380;
L_088185C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 32767u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[5] | 65535u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088184FC;
L_088185E4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(24, ctx.gpr[4] + 0u);
    ctx.set_gpr(10, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    goto L_088185FC;
L_088185F8:
    ctx.set_gpr(4, ctx.gpr[9] + 0u);
    goto L_088185FC;
L_088185FC:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[10]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088185F8;
      }
      goto L_08818614;
    }
L_08818614:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
      if (branch_taken) {
          goto L_0881874C;
      }
      goto L_08818620;
    }
L_08818620:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[2];
    ctx.set_gpr(25, 0u + 0u);
      if (branch_taken) {
          goto L_0881875C;
      }
      goto L_08818628;
    }
L_08818628:
    ctx.set_gpr(3, ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088186F4;
      }
      goto L_08818634;
    }
L_08818634:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088186F4;
      }
      goto L_08818640;
    }
L_08818640:
    ctx.set_gpr(14, ctx.gpr[7] + 0u);
    goto L_08818644;
L_08818644:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[14]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_08818654;
      }
      goto L_08818650;
    }
L_08818650:
    ctx.pc = 0x08818650u; rt.stop("Allegrex BREAK code 7 at 0x08818650"); return;
    goto L_08818654;
L_08818654:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(13, ctx.gpr[3] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(15, ctx.hi);
    ctx.set_gpr(12, ctx.lo);
    goto L_0881866C;
L_0881866C:
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[13]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[8] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_0881869C;
      }
      goto L_08818680;
    }
L_08818680:
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
      if (branch_taken) {
          goto L_08818720;
      }
      goto L_0881868C;
    }
L_0881868C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(55));
    if (ctx.gpr[2] == 0u) ctx.set_gpr(3, ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[8] - ctx.gpr[3]);
    goto L_0881869C;
L_0881869C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08818720;
      }
      goto L_088186A8;
    }
L_088186A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) < 0;
    ctx.set_gpr(2, ctx.gpr[12] < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_088186E4;
      }
      goto L_088186B0;
    }
L_088186B0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
        goto L_088186E8;
    }
    goto L_088186B8;
L_088186B8:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[10];
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088186DC;
      }
      goto L_088186C0;
    }
L_088186C0:
    ctx.lo = ctx.gpr[4];
    goto L_088186C4;
L_088186C4:
    ctx.execute_madd(10u, 14u);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.lo);
    goto L_0881866C;
L_088186DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.lo = ctx.gpr[4];
      if (branch_taken) {
          goto L_088186C4;
      }
      goto L_088186E4;
    }
L_088186E4:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    goto L_088186E8;
L_088186E8:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_0881866C;
L_088186F4:
    if (ctx.gpr[8] == ctx.gpr[2]) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
        goto L_08818768;
    }
    goto L_088186FC;
L_088186FC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(14, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08818644;
      }
      goto L_08818704;
    }
L_08818704:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[2];
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08818644;
      }
      goto L_08818714;
    }
L_08818714:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(10));
    goto L_08818644;
L_08818720:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) >= 0;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
      if (branch_taken) {
          goto L_08818790;
      }
      goto L_08818728;
    }
L_08818728:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08818730;
L_08818730:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08818744;
      }
      goto L_08818738;
    }
L_08818738:
    ctx.set_gpr(2, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[11] != 0u) ctx.set_gpr(5, ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08818744;
L_08818744:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[10] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881874C:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08818628;
L_0881875C:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08818628;
L_08818768:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(120));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_0881877C;
      }
      goto L_08818774;
    }
L_08818774:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088186FC;
      }
      goto L_0881877C;
    }
L_0881877C:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(16));
    goto L_08818644;
L_08818790:
    ctx.set_gpr(2, 0u - ctx.gpr[10]);
    if (ctx.gpr[25] != 0u) ctx.set_gpr(10, ctx.gpr[2]);
    goto L_08818730;
L_0881879C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088187C0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x088187C0u) goto L_088187C0;
    return;
L_088187C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088185E4;
L_088187E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(30, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    goto L_08818838;
L_08818834:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08818838;
L_08818838:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08818834;
      }
      goto L_08818850;
    }
L_08818850:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
      if (branch_taken) {
          goto L_08818A34;
      }
      goto L_0881885C;
    }
L_0881885C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08818A48;
      }
      goto L_08818864;
    }
L_08818864:
    ctx.set_gpr(3, ctx.gpr[22] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08818970;
      }
      goto L_08818870;
    }
L_08818870:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08818970;
      }
      goto L_0881887C;
    }
L_0881887C:
    ctx.set_gpr(20, ctx.gpr[22] + 0u);
    goto L_08818880;
L_08818880:
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 31u));
    goto L_08818884;
L_08818884:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08818898u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 417u, 0x0881DCD0u>(ctx, &aot_mem) && ctx.pc == 0x08818898u) goto L_08818898;
    return;
L_08818898:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088188B4u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 527u, 0x0881E2E0u>(ctx, &aot_mem) && ctx.pc == 0x088188B4u) goto L_088188B4;
    return;
L_088188B4:
    ctx.set_gpr(14, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(12, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(13, ctx.gpr[19] + 0u);
    goto L_088188D0;
L_088188D0:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[12]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_08818900;
      }
      goto L_088188E4;
    }
L_088188E4:
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
      if (branch_taken) {
          goto L_088189D4;
      }
      goto L_088188F0;
    }
L_088188F0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(55));
    if (ctx.gpr[2] == 0u) ctx.set_gpr(3, ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[16] - ctx.gpr[3]);
    goto L_08818900;
L_08818900:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088189D4;
      }
      goto L_0881890C;
    }
L_0881890C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_088189A8;
      }
      goto L_08818914;
    }
L_08818914:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-1));
        goto L_088189AC;
    }
    goto L_0881891C;
L_0881891C:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[11];
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_088189A0;
      }
      goto L_08818924;
    }
L_08818924:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[18];
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[10]) * static_cast<std::uint64_t>(ctx.gpr[20]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
      if (branch_taken) {
          goto L_088189B8;
      }
      goto L_0881892C;
    }
L_0881892C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    goto L_08818930;
L_08818930:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.hi);
    ctx.set_gpr(6, ctx.lo);
    ctx.lo = ctx.gpr[7];
    ctx.execute_madd(10u, 21u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.execute_madd(20u, 11u);
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    goto L_088188D0;
L_08818970:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
        goto L_08818A54;
    }
    goto L_08818978;
L_08818978:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(20, ctx.gpr[22] + 0u);
      if (branch_taken) {
          goto L_08818880;
      }
      goto L_08818980;
    }
L_08818980:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(21, 0u + 0u);
      if (branch_taken) {
          goto L_08818884;
      }
      goto L_08818994;
    }
L_08818994:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(10));
    goto L_08818884;
L_088189A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08818924;
      }
      goto L_088189A8;
    }
L_088189A8:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-1));
    goto L_088189AC;
L_088189AC:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088188D0;
L_088189B8:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0881892C;
      }
      goto L_088189C0;
    }
L_088189C0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
      if (branch_taken) {
          goto L_08818930;
      }
      goto L_088189CC;
    }
L_088189CC:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-1));
    goto L_088189AC;
L_088189D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) >= 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08818A80;
      }
      goto L_088189DC;
    }
L_088189DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088189EC;
L_088189EC:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088189FC;
      }
      goto L_088189F4;
    }
L_088189F4:
    if (ctx.gpr[9] != 0u) ctx.set_gpr(23, ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    goto L_088189FC;
L_088189FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[10] + 0u);
    ctx.set_gpr(3, ctx.gpr[11] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818A34:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08818864;
L_08818A48:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08818864;
L_08818A54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(120));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08818A68;
      }
      goto L_08818A60;
    }
L_08818A60:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08818978;
      }
      goto L_08818A68;
    }
L_08818A68:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(21, 0u + 0u);
    goto L_08818884;
L_08818A80:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(2, 0u - ctx.gpr[10]);
      if (branch_taken) {
          goto L_088189EC;
      }
      goto L_08818A8C;
    }
L_08818A8C:
    ctx.set_gpr(3, 0u - ctx.gpr[11]);
    ctx.set_gpr(4, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    goto L_088189EC;
L_08818AA4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08818AE0;
      }
      goto L_08818AB0;
    }
L_08818AB0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[7]);
    goto L_08818ABC;
L_08818ABC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08818AD0;
      }
      goto L_08818ACC;
    }
L_08818ACC:
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08818AD0;
L_08818AD0:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08818ABC;
      }
      goto L_08818AE0;
    }
L_08818AE0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818AE8:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[4] & 1u);
    jump_target = ctx.gpr[31];
    if (ctx.gpr[4] != 0u) ctx.set_gpr(2, ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818B0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08818BC4;
      }
      goto L_08818B38;
    }
L_08818B38:
    ctx.set_gpr(31, 0x08818B40u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08818B40u) goto L_08818B40;
    return;
L_08818B40:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, ctx.gpr[18] << 1u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08818B54u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 226u, 0x08814F84u>(ctx, &aot_mem) && ctx.pc == 0x08818B54u) goto L_08818B54;
    return;
L_08818B54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08818BA0;
      }
      goto L_08818B5C;
    }
L_08818B5C:
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08818B70u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08818B70u) goto L_08818B70;
    return;
L_08818B70:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818BA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818BC4:
    ctx.set_gpr(31, 0x08818BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08818BCCu) goto L_08818BCC;
    return;
L_08818BCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08818BD8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 491u, 0x08812074u>(ctx, &aot_mem) && ctx.pc == 0x08818BD8u) goto L_08818BD8;
    return;
L_08818BD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08818BA0;
      }
      goto L_08818BE0;
    }
L_08818BE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(1021));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    goto L_08818BFC;
L_08818BFC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(66)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08818BFC;
      }
      goto L_08818C14;
    }
L_08818C14:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818C3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08818D08;
      }
      goto L_08818C5C;
    }
L_08818C5C:
    ctx.set_gpr(31, 0x08818C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08818C64u) goto L_08818C64;
    return;
L_08818C64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08818CE0;
      }
      goto L_08818C70;
    }
L_08818C70:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08818C74;
L_08818C74:
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000020u) | ((0u & 0x00000001u) << 5u));
    ctx.set_gpr(4, ctx.gpr[2] & 65535u);
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08818DA4;
      }
      goto L_08818C8C;
    }
L_08818C8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08818D24;
      }
      goto L_08818C98;
    }
L_08818C98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08818CF8;
      }
      goto L_08818CAC;
    }
L_08818CAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08818CB0;
L_08818CB0:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08818CC8;
L_08818CC8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818CE0:
    ctx.set_gpr(31, 0x08818CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08818CE8u) goto L_08818CE8;
    return;
L_08818CE8:
    ctx.set_gpr(31, 0x08818CF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 251u, 0x08810E78u>(ctx, &aot_mem) && ctx.pc == 0x08818CF0u) goto L_08818CF0;
    return;
L_08818CF0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08818C74;
L_08818CF8:
    ctx.set_gpr(31, 0x08818D00u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08818B0C;
L_08818D00:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08818CB0;
    }
    goto L_08818D08;
L_08818D08:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    goto L_08818D0C;
L_08818D0C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818D24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08818D48;
      }
      goto L_08818D30;
    }
L_08818D30:
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08818D4C;
    }
    goto L_08818D3C;
L_08818D3C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-1)));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08818D90;
    }
    goto L_08818D48;
L_08818D48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08818D4C;
L_08818D4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(66));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818D90:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08818CC8;
L_08818DA4:
    ctx.set_gpr(2, ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08818D08;
      }
      goto L_08818DB0;
    }
L_08818DB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[5] | 4u);
      if (branch_taken) {
          goto L_08818DC0;
      }
      goto L_08818DB8;
    }
L_08818DB8:
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08818C8C;
L_08818DC0:
    ctx.set_gpr(31, 0x08818DC8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 227u, 0x08810CA4u>(ctx, &aot_mem) && ctx.pc == 0x08818DC8u) goto L_08818DC8;
    return;
L_08818DC8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
        goto L_08818D0C;
    }
    goto L_08818DD0;
L_08818DD0:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000008u) | ((0u & 0x00000001u) << 3u));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[5] | 4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08818C8C;
L_08818DF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08818E2C;
      }
      goto L_08818E14;
    }
L_08818E14:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818E2C:
    ctx.set_gpr(31, 0x08818E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 334u, 0x0881163Cu>(ctx, &aot_mem) && ctx.pc == 0x08818E34u) goto L_08818E34;
    return;
L_08818E34:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818E54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-656));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[5]);
    ctx.set_gpr(31, 0x08818E94u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 453u, 0x08811DDCu>(ctx, &aot_mem) && ctx.pc == 0x08818E94u) goto L_08818E94;
    return;
L_08818E94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08819CD4;
      }
      goto L_08818EB0;
    }
L_08818EB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08819CD4;
      }
      goto L_08818EBC;
    }
L_08818EBC:
    ctx.set_gpr(3, ctx.gpr[3] & 26u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
      if (branch_taken) {
          goto L_08819BBC;
      }
      goto L_08818ECC;
    }
L_08818ECC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1536)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1540)));
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(30, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    goto L_08818F04;
L_08818F04:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[30] + 0u);
      if (branch_taken) {
          goto L_08818F78;
      }
      goto L_08818F14;
    }
L_08818F14:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_08818F78;
      }
      goto L_08818F1C;
    }
L_08818F1C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08818F20;
L_08818F20:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(17, ctx.gpr[16] - ctx.gpr[30]);
      if (branch_taken) {
          goto L_08818F38;
      }
      goto L_08818F2C;
    }
L_08818F2C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08818F20;
    }
    goto L_08818F34;
L_08818F34:
    ctx.set_gpr(17, ctx.gpr[16] - ctx.gpr[30]);
    goto L_08818F38;
L_08818F38:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_08818F7C;
    }
    goto L_08818F40;
L_08818F40:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08819878;
      }
      goto L_08818F6C;
    }
L_08818F6C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[5]);
    goto L_08818F78;
L_08818F78:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_08818F7C;
L_08818F7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
      if (branch_taken) {
          goto L_0881A79C;
      }
      goto L_08818F84;
    }
L_08818F84:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(30, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), 0u);
    goto L_08818F9C;
L_08818F9C:
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_08818FA4;
L_08818FA4:
    ctx.set_gpr(3, ctx.gpr[21] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
      if (branch_taken) {
          goto L_08818FCC;
      }
      goto L_08818FB4;
    }
L_08818FB4:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1544));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818FCC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0881A79C;
      }
      goto L_08818FD4;
    }
L_08818FD4:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    goto L_08818FF0;
L_08818FF0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
      if (branch_taken) {
          goto L_0881926C;
      }
      goto L_08818FFC;
    }
L_08818FFC:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08819000;
L_08819000:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(22, ctx.gpr[2] & 132u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
      if (branch_taken) {
          goto L_08819064;
      }
      goto L_08819010;
    }
L_08819010:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.set_gpr(16, ctx.gpr[4] - ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08819060;
      }
      goto L_08819020;
    }
L_08819020:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, 2225u << 16u);
      if (branch_taken) {
          goto L_088195C0;
      }
      goto L_08819028;
    }
L_08819028:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_0881902C;
L_0881902C:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(1520));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088197B4;
      }
      goto L_0881905C;
    }
L_0881905C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08819060;
L_08819060:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    goto L_08819064;
L_08819064:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
      if (branch_taken) {
          goto L_08819278;
      }
      goto L_0881906C;
    }
L_0881906C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088192C4;
      }
      goto L_088190A0;
    }
L_088190A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(128));
    goto L_088190A4;
L_088190A4:
    if (ctx.gpr[22] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
        goto L_088192E4;
    }
    goto L_088190AC;
L_088190AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    goto L_088190B0;
L_088190B0:
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[20]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_088190F8;
      }
      goto L_088190BC;
    }
L_088190BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 2225u << 16u);
      if (branch_taken) {
          goto L_08819454;
      }
      goto L_088190C4;
    }
L_088190C4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_088190C8;
L_088190C8:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1504));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088195A4;
      }
      goto L_088190F8;
    }
L_088190F8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    goto L_088190FC;
L_088190FC:
    ctx.set_gpr(2, ctx.gpr[5] & 256u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 102 ? 1u : 0u);
      if (branch_taken) {
          goto L_08819348;
      }
      goto L_08819108;
    }
L_08819108:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[20] + ctx.gpr[5]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08819438;
      }
      goto L_08819138;
    }
L_08819138:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    goto L_0881913C;
L_0881913C:
    ctx.set_gpr(2, ctx.gpr[5] & 4u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
        goto L_088191E4;
    }
    goto L_08819148;
L_08819148:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_088191E0;
      }
      goto L_08819158;
    }
L_08819158:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 2225u << 16u);
      if (branch_taken) {
          goto L_08819624;
      }
      goto L_08819160;
    }
L_08819160:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08819164;
L_08819164:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1520));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088191CC;
      }
      goto L_08819190;
    }
L_08819190:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) > static_cast<std::int32_t>(ctx.gpr[6]) ? ctx.gpr[23] : ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088191FC;
      }
      goto L_088191A8;
    }
L_088191A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    goto L_088191AC;
L_088191AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08818F04;
      }
      goto L_088191B8;
    }
L_088191B8:
    ctx.set_gpr(31, 0x088191C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 489u, 0x08812048u>(ctx, &aot_mem) && ctx.pc == 0x088191C0u) goto L_088191C0;
    return;
L_088191C0:
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), 0u);
    goto L_08818F04;
L_088191CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x088191D8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_088191D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
      if (branch_taken) {
          goto L_08819214;
      }
      goto L_088191E0;
    }
L_088191E0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    goto L_088191E4;
L_088191E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) > static_cast<std::int32_t>(ctx.gpr[6]) ? ctx.gpr[23] : ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088191A8;
      }
      goto L_088191FC;
    }
L_088191FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x08819208u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_08819208:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
      if (branch_taken) {
          goto L_088191AC;
      }
      goto L_08819210;
    }
L_08819210:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    goto L_08819214;
L_08819214:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
      if (branch_taken) {
          goto L_08819228;
      }
      goto L_0881921C;
    }
L_0881921C:
    ctx.set_gpr(31, 0x08819224u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 489u, 0x08812048u>(ctx, &aot_mem) && ctx.pc == 0x08819224u) goto L_08819224;
    return;
L_08819224:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    goto L_08819228;
L_08819228:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] & 64u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881A30C;
      }
      goto L_08819238;
    }
L_08819238:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881926C:
    ctx.set_gpr(2, ctx.gpr[6] & 2u);
    ctx.set_gpr(23, ctx.gpr[23] + ctx.gpr[2]);
    goto L_08819000;
L_08819278:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088190A4;
      }
      goto L_08819284;
    }
L_08819284:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(17));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[21]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088190A0;
      }
      goto L_088192C4;
    }
L_088192C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x088192D0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_088192D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_088192D8;
    }
L_088192D8:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088190AC;
      }
      goto L_088192E0;
    }
L_088192E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    goto L_088192E4;
L_088192E4:
    ctx.set_gpr(17, ctx.gpr[4] - ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_088190AC;
      }
      goto L_088192F0;
    }
L_088192F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, 2225u << 16u);
      if (branch_taken) {
          goto L_08819750;
      }
      goto L_088192F8;
    }
L_088192F8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_088192FC;
L_088192FC:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(1504));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088190AC;
      }
      goto L_0881932C;
    }
L_0881932C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x08819338u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_08819338:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_08819340;
    }
L_08819340:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    goto L_088190B0;
L_08819348:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
      if (branch_taken) {
          goto L_088194B8;
      }
      goto L_08819350;
    }
L_08819350:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08819364u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881FBBCu>(ctx, &aot_mem) && ctx.pc == 0x08819364u) goto L_08819364;
    return;
L_08819364:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08819688;
      }
      goto L_0881936C;
    }
L_0881936C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1988));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08819950;
      }
      goto L_088193A4;
    }
L_088193A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
      if (branch_taken) {
          goto L_08819834;
      }
      goto L_088193B8;
    }
L_088193B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881A280;
      }
      goto L_088193E8;
    }
L_088193E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
      if (branch_taken) {
          goto L_0881913C;
      }
      goto L_088193F8;
    }
L_088193F8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, 2225u << 16u);
      if (branch_taken) {
          goto L_08819C70;
      }
      goto L_08819404;
    }
L_08819404:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08819408;
L_08819408:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1504));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[16]);
    goto L_08819424;
L_08819424:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08819138;
      }
      goto L_08819438;
    }
L_08819438:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    goto L_0881943C;
L_0881943C:
    ctx.set_gpr(31, 0x08819444u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_08819444:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_0881944C;
    }
L_0881944C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    goto L_0881913C;
L_08819454:
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(1504));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(16));
    goto L_08819470;
L_08819460:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    goto L_08819464;
L_08819464:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
        goto L_088190C8;
    }
    goto L_08819470;
L_08819470:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08819460;
      }
      goto L_0881949C;
    }
L_0881949C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x088194A8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_088194A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_088194B0;
    }
L_088194B0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    goto L_08819464;
L_088194B8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
      if (branch_taken) {
          goto L_08819B74;
      }
      goto L_088194C4;
    }
L_088194C4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    goto L_088194C8;
L_088194C8:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(17, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08819B58;
      }
      goto L_08819510;
    }
L_08819510:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    goto L_08819514;
L_08819514:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08819524u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 906u, 0x0881FC44u>(ctx, &aot_mem) && ctx.pc == 0x08819524u) goto L_08819524;
    return;
L_08819524:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
      if (branch_taken) {
          goto L_088197D0;
      }
      goto L_0881952C;
    }
L_0881952C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08819818;
      }
      goto L_08819564;
    }
L_08819564:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    goto L_08819568;
L_08819568:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08819138;
      }
      goto L_0881959C;
    }
L_0881959C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    goto L_0881943C;
L_088195A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x088195B0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_088195B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_088195B8;
    }
L_088195B8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    goto L_088190FC;
L_088195C0:
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(1520));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(16));
    goto L_088195DC;
L_088195CC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    goto L_088195D0;
L_088195D0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
        goto L_0881902C;
    }
    goto L_088195DC;
L_088195DC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088195CC;
      }
      goto L_08819608;
    }
L_08819608:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x08819614u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_08819614:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_0881961C;
    }
L_0881961C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    goto L_088195D0;
L_08819624:
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(1520));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(16));
    goto L_08819640;
L_08819630:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    goto L_08819634;
L_08819634:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
        goto L_08819164;
    }
    goto L_08819640;
L_08819640:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08819630;
      }
      goto L_0881966C;
    }
L_0881966C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x08819678u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_08819678:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_08819680;
    }
L_08819680:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    goto L_08819634;
L_08819688:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
      if (branch_taken) {
          goto L_0881A418;
      }
      goto L_08819690;
    }
L_08819690:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
      if (branch_taken) {
          goto L_0881989C;
      }
      goto L_0881969C;
    }
L_0881969C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881A2D0;
      }
      goto L_088196CC;
    }
L_088196CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088196D0;
L_088196D0:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1992));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881A2B4;
      }
      goto L_08819710;
    }
L_08819710:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08819714;
L_08819714:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08819138;
      }
      goto L_08819748;
    }
L_08819748:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    goto L_0881943C;
L_08819750:
    ctx.set_gpr(22, ctx.gpr[5] + static_cast<std::uint32_t>(1504));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(16));
    goto L_0881976C;
L_0881975C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-16));
    goto L_08819760;
L_08819760:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 17 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
        goto L_088192FC;
    }
    goto L_0881976C;
L_0881976C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881975C;
      }
      goto L_08819798;
    }
L_08819798:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x088197A4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_088197A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_088197AC;
    }
L_088197AC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-16));
    goto L_08819760;
L_088197B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x088197C0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_088197C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_088197C8;
    }
L_088197C8:
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    goto L_08819060;
L_088197D0:
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08819564;
      }
      goto L_088197DC;
    }
L_088197DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, 2225u << 16u);
      if (branch_taken) {
          goto L_08819C0C;
      }
      goto L_088197E4;
    }
L_088197E4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_088197E8;
L_088197E8:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(1504));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08819564;
      }
      goto L_08819818;
    }
L_08819818:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    goto L_0881981C;
L_0881981C:
    ctx.set_gpr(31, 0x08819824u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_08819824:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_0881982C;
    }
L_0881982C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    goto L_08819568;
L_08819834:
    ctx.set_gpr(2, ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
      if (branch_taken) {
          goto L_0881913C;
      }
      goto L_08819840;
    }
L_08819840:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088193E8;
      }
      goto L_08819870;
    }
L_08819870:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    goto L_0881A284;
L_08819878:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x08819884u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_08819884:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
      if (branch_taken) {
          goto L_08819224;
      }
      goto L_0881988C;
    }
L_0881988C:
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[5]);
    goto L_08818F78;
L_0881989C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881A2EC;
      }
      goto L_088198CC;
    }
L_088198CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_088198D0;
L_088198D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08819B20;
      }
      goto L_088198E0;
    }
L_088198E0:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
        goto L_08819AF0;
    }
    goto L_088198E8;
L_088198E8:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[5] + static_cast<std::uint32_t>(1504));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(16));
    goto L_08819908;
L_088198F8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    goto L_088198FC;
L_088198FC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
        goto L_08819AF0;
    }
    goto L_08819908;
L_08819908:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088198F8;
      }
      goto L_08819934;
    }
L_08819934:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x08819940u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_08819940:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_08819948;
    }
L_08819948:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    goto L_088198FC;
L_08819950:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x0881995Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_0881995C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_08819964;
    }
L_08819964:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088193B8;
      }
      goto L_08819974;
    }
L_08819974:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    goto L_08819834;
L_0881997C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(4, ctx.gpr[4] | 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[4]);
    goto L_08819988;
L_08819988:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
      if (branch_taken) {
          goto L_08819E10;
      }
      goto L_08819998;
    }
L_08819998:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000007u) | ((0u & 0x00000007u) << 0u));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[2]);
    goto L_088199B0;
L_088199B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08819A30;
      }
      goto L_088199B8;
    }
L_088199B8:
    ctx.set_gpr(2, 0u - ctx.gpr[16]);
    ctx.set_gpr(3, 0u - ctx.gpr[17]);
    ctx.set_gpr(4, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(45));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08819A30;
L_088199DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(4, ctx.gpr[4] | 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[4]);
    goto L_088199E8;
L_088199E8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08819DD8;
      }
      goto L_088199F8;
    }
L_088199F8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[6] & 16u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08819A1C;
    }
    goto L_08819A08;
L_08819A08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0881A6A0;
    }
    goto L_08819A18;
L_08819A18:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08819A1C;
L_08819A1C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08819A2C;
L_08819A2C:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_08819A30;
L_08819A30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < 0 ? 1u : 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000080u) | ((0u & 0x00000001u) << 7u));
    if (ctx.gpr[3] == 0u) ctx.set_gpr(5, ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08819A58;
      }
      goto L_08819A50;
    }
L_08819A50:
    if (ctx.gpr[22] == 0u) {
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(524));
        goto L_0881A344;
    }
    goto L_08819A58;
L_08819A58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0881A384;
      }
      goto L_08819A64;
    }
L_08819A64:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(524));
      if (branch_taken) {
          goto L_08819D54;
      }
      goto L_08819A6C;
    }
L_08819A6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(524));
      if (branch_taken) {
          goto L_0881A588;
      }
      goto L_08819A78;
    }
L_08819A78:
    ctx.set_gpr(16, 2225u << 16u);
    ctx.set_gpr(31, 0x08819A84u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1960));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08819A84u) goto L_08819A84;
    return;
L_08819A84:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1960));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[2]) > static_cast<std::int32_t>(ctx.gpr[22]) ? ctx.gpr[2] : ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[16]);
    goto L_08818FF0;
L_08819A9C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(6, ctx.gpr[6] | 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[6]);
    goto L_08819AA8;
L_08819AA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[3] & 32u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08819DF4;
      }
      goto L_08819AB8;
    }
L_08819AB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[4] & 16u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08819ADC;
    }
    goto L_08819AC8;
L_08819AC8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[5] & 64u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0881A6B4;
    }
    goto L_08819AD8;
L_08819AD8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08819ADC;
L_08819ADC:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    goto L_08819A2C;
L_08819AF0:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1504));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881A314;
      }
      goto L_08819B20;
    }
L_08819B20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    goto L_08819B24;
L_08819B24:
    ctx.set_gpr(2, ctx.gpr[4] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
        goto L_0881913C;
    }
    goto L_08819B30;
L_08819B30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1992));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08819424;
L_08819B58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x08819B64u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_08819B64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_08819B6C;
    }
L_08819B6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    goto L_08819514;
L_08819B74:
    ctx.set_gpr(2, ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
      if (branch_taken) {
          goto L_088194C8;
      }
      goto L_08819B80;
    }
L_08819B80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08819564;
      }
      goto L_08819BB4;
    }
L_08819BB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    goto L_0881981C;
L_08819BBC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08818ECC;
      }
      goto L_08819BC8;
    }
L_08819BC8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.set_gpr(31, 0x08819BD4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_0881AC40;
L_08819BD4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08819C0C:
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(1504));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(16));
    goto L_08819C28;
L_08819C18:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    goto L_08819C1C;
L_08819C1C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
        goto L_088197E8;
    }
    goto L_08819C28;
L_08819C28:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08819C18;
      }
      goto L_08819C54;
    }
L_08819C54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x08819C60u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_08819C60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_08819C68;
    }
L_08819C68:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    goto L_08819C1C;
L_08819C70:
    ctx.set_gpr(18, ctx.gpr[4] + static_cast<std::uint32_t>(1504));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(16));
    goto L_08819C8C;
L_08819C7C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    goto L_08819C80;
L_08819C80:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
        goto L_08819408;
    }
    goto L_08819C8C;
L_08819C8C:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08819C7C;
      }
      goto L_08819CB8;
    }
L_08819CB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x08819CC4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_08819CC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_08819CCC;
    }
L_08819CCC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    goto L_08819C80;
L_08819CD4:
    ctx.set_gpr(31, 0x08819CDCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 84u, 0x0881C6E4u>(ctx, &aot_mem) && ctx.pc == 0x08819CDCu) goto L_08819CDC;
    return;
L_08819CDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
      if (branch_taken) {
          goto L_0881A308;
      }
      goto L_08819CE4;
    }
L_08819CE4:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08818EBC;
L_08819CEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881A2A8;
      }
      goto L_08819CFC;
    }
L_08819CFC:
    ctx.set_gpr(3, 0u - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_08819D08;
L_08819D08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] | 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[4]);
    goto L_08818F9C;
L_08819D1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1904));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    goto L_08819A2C;
L_08819D50:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    goto L_08819D54;
L_08819D54:
    ctx.set_gpr(4, ctx.gpr[17] << 29u);
    ctx.set_gpr(2, ctx.gpr[16] >> 3u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[17] >> 3u);
    ctx.set_gpr(4, ctx.gpr[16] & 7u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08819D50;
      }
      goto L_08819D88;
    }
L_08819D88:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(2, ctx.gpr[6] & 1u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08819DC8;
      }
      goto L_08819DA0;
    }
L_08819DA0:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08819DC8;
      }
      goto L_08819DB0;
    }
L_08819DB0:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    goto L_08819DC8;
L_08819DC8:
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(348));
    goto L_08819DCC;
L_08819DCC:
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[20]) > static_cast<std::int32_t>(ctx.gpr[22]) ? ctx.gpr[20] : ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[22]);
    goto L_08818FF0;
L_08819DD8:
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000007u) | ((0u & 0x00000007u) << 0u));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[2]);
    goto L_08819A2C;
L_08819DF4:
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000007u) | ((0u & 0x00000007u) << 0u));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[2]);
    goto L_08819A2C;
L_08819E10:
    ctx.set_gpr(2, ctx.gpr[6] & 16u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08819E30;
    }
    goto L_08819E1C;
L_08819E1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[3] & 64u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
        goto L_0881A68C;
    }
    goto L_08819E2C;
L_08819E2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08819E30;
L_08819E30:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    goto L_088199B0;
L_08819E44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[3]);
    goto L_08818F9C;
L_08819E58:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[6] & 32u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
      if (branch_taken) {
          goto L_0881A5EC;
      }
      goto L_08819E68;
    }
L_08819E68:
    ctx.set_gpr(2, ctx.gpr[6] & 16u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0881A330;
    }
    goto L_08819E74;
L_08819E74:
    ctx.set_gpr(2, ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881A330;
      }
      goto L_08819E80;
    }
L_08819E80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08818F04;
L_08819E94:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(108));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
      if (branch_taken) {
          goto L_0881A714;
      }
      goto L_08819EA8;
    }
L_08819EA8:
    ctx.set_gpr(4, ctx.gpr[4] | 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[4]);
    goto L_08818F9C;
L_08819EB4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1904));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] & 32u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
      if (branch_taken) {
          goto L_0881A074;
      }
      goto L_08819ED0;
    }
L_08819ED0:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(7));
    goto L_08819ED4;
L_08819ED4:
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000007u) | ((0u & 0x00000007u) << 0u));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[2]);
    goto L_08819EE8;
L_08819EE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08819A2C;
      }
      goto L_08819EF8;
    }
L_08819EF8:
    ctx.set_gpr(2, ctx.gpr[16] | ctx.gpr[17]);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
        goto L_08819A30;
    }
    goto L_08819F04;
L_08819F04:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(6, ctx.gpr[6] | 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[6]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    goto L_08819A2C;
L_08819F18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(43));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    goto L_08818F9C;
L_08819F28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[2]);
    goto L_08818F9C;
L_08819F3C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
        goto L_08818F9C;
    }
    goto L_08819F48;
L_08819F48:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    goto L_08818F9C;
L_08819F58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(67));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08819F78;
      }
      goto L_08819F64;
    }
L_08819F64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[3] & 16u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0881A608;
    }
    goto L_08819F74;
L_08819F74:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_08819F78;
L_08819F78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08819F88u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08819F88u) goto L_08819F88;
    return;
L_08819F88:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08819FA4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 4u, 0x0881C0C8u>(ctx, &aot_mem) && ctx.pc == 0x08819FA4u) goto L_08819FA4;
    return;
L_08819FA4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
      if (branch_taken) {
          goto L_08819224;
      }
      goto L_08819FBC;
    }
L_08819FBC:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[20]) > static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[20] : ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_08818FF0;
L_08819FD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(103));
      if (branch_taken) {
          goto L_0881A70C;
      }
      goto L_08819FE0;
    }
L_08819FE0:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(71));
      if (branch_taken) {
          goto L_0881A670;
      }
      goto L_08819FE8;
    }
L_08819FE8:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881A674;
      }
      goto L_08819FF0;
    }
L_08819FF0:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000007u) | ((0u & 0x00000007u) << 0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.set_gpr(31, 0x0881A01Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 253u, 0x0880D4A4u>(ctx, &aot_mem) && ctx.pc == 0x0881A01Cu) goto L_0881A01C;
    return;
L_0881A01C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
      if (branch_taken) {
          goto L_0881A6E0;
      }
      goto L_0881A024;
    }
L_0881A024:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0881A034u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 927u, 0x0881FE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0881A034u) goto L_0881A034;
    return;
L_0881A034:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0881A9D8;
      }
      goto L_0881A03C;
    }
L_0881A03C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1924));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    goto L_08818FF0;
L_0881A054:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1940));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] & 32u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08819ED4;
      }
      goto L_0881A070;
    }
L_0881A070:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    goto L_0881A074;
L_0881A074:
    ctx.set_gpr(2, ctx.gpr[3] & 16u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0881A094;
    }
    goto L_0881A080;
L_0881A080:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[4] & 64u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0881A67C;
    }
    goto L_0881A090;
L_0881A090:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_0881A094;
L_0881A094:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    goto L_08819EE8;
L_0881A0A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[2]);
    goto L_08818F9C;
L_0881A0B8:
    ctx.set_gpr(4, 0u + 0u);
    goto L_0881A0BC;
L_0881A0BC:
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881A0BC;
      }
      goto L_0881A0E4;
    }
L_0881A0E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[4]);
    goto L_08818FA4;
L_0881A0EC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] | 128u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[6]);
    goto L_08818F9C;
L_0881A100:
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881ABB4;
      }
      goto L_0881A110;
    }
L_0881A110:
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(22, 0u + 0u);
      if (branch_taken) {
          goto L_08818FA4;
      }
      goto L_0881A120;
    }
L_0881A120:
    ctx.set_gpr(6, 0u + 0u);
    goto L_0881A124;
L_0881A124:
    ctx.set_gpr(3, ctx.gpr[6] << 3u);
    ctx.set_gpr(2, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881A124;
      }
      goto L_0881A14C;
    }
L_0881A14C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(22, static_cast<std::int32_t>(ctx.gpr[6]) > static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[6] : ctx.gpr[2]);
    goto L_08818FA4;
L_0881A158:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0881A764;
      }
      goto L_0881A170;
    }
L_0881A170:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(83));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
      if (branch_taken) {
          goto L_0881A188;
      }
      goto L_0881A17C;
    }
L_0881A17C:
    ctx.set_gpr(16, ctx.gpr[6] & 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A634;
      }
      goto L_0881A188;
    }
L_0881A188:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0881A1A4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0881A1A4u) goto L_0881A1A4;
    return;
L_0881A1A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_0881AA60;
      }
      goto L_0881A1AC;
    }
L_0881A1AC:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(23, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    goto L_0881A1C0;
L_0881A1BC:
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    goto L_0881A1C0;
L_0881A1C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
      if (branch_taken) {
          goto L_0881A200;
      }
      goto L_0881A1D4;
    }
L_0881A1D4:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0881A1E0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 4u, 0x0881C0C8u>(ctx, &aot_mem) && ctx.pc == 0x0881A1E0u) goto L_0881A1E0;
    return;
L_0881A1E0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08819224;
      }
      goto L_0881A1E8;
    }
L_0881A1E8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
        goto L_0881A204;
    }
    goto L_0881A1F4;
L_0881A1F4:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[3];
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881A1BC;
      }
      goto L_0881A1FC;
    }
L_0881A1FC:
    ctx.set_gpr(20, ctx.gpr[22] + 0u);
    goto L_0881A200;
L_0881A200:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    goto L_0881A204;
L_0881A204:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(23, 0u + 0u);
      if (branch_taken) {
          goto L_08818FF0;
      }
      goto L_0881A20C;
    }
L_0881A20C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.set_gpr(31, 0x0881A218u);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 491u, 0x08812074u>(ctx, &aot_mem) && ctx.pc == 0x0881A218u) goto L_0881A218;
    return;
L_0881A218:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08819224;
      }
      goto L_0881A220;
    }
L_0881A220:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0881A230u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0881A230u) goto L_0881A230;
    return;
L_0881A230:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0881A248u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 12u, 0x0881C188u>(ctx, &aot_mem) && ctx.pc == 0x0881A248u) goto L_0881A248;
    return;
L_0881A248:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_0881A250;
    }
L_0881A250:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[20]) > static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[20] : ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08818FF0;
L_0881A26C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] | 32u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[6]);
    goto L_08818F9C;
L_0881A280:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    goto L_0881A284;
L_0881A284:
    ctx.set_gpr(31, 0x0881A28Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_0881A28C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_0881A294;
    }
L_0881A294:
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088193F8;
      }
      goto L_0881A2A0;
    }
L_0881A2A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    goto L_0881913C;
L_0881A2A8:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_08818F9C;
L_0881A2B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x0881A2C0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_0881A2C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_0881A2C8;
    }
L_0881A2C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08819714;
L_0881A2D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x0881A2DCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_0881A2DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_0881A2E4;
    }
L_0881A2E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088196D0;
L_0881A2EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x0881A2F8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_0881A2F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_0881A300;
    }
L_0881A300:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_088198D0;
L_0881A308:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0881A30C;
L_0881A30C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[2]);
    goto L_08819238;
L_0881A314:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x0881A320u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_0881A320:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_0881A328;
    }
L_0881A328:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    goto L_08819B24;
L_0881A330:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08818F04;
L_0881A344:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-348));
      if (branch_taken) {
          goto L_08819DC8;
      }
      goto L_0881A350;
    }
L_0881A350:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[6] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(348));
        goto L_08819DCC;
    }
    goto L_0881A360;
L_0881A360:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-347));
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(523));
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[20]) > static_cast<std::int32_t>(ctx.gpr[22]) ? ctx.gpr[20] : ctx.gpr[22]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(523), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[22]);
    goto L_08818FF0;
L_0881A384:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(524));
      if (branch_taken) {
          goto L_0881A39C;
      }
      goto L_0881A38C;
    }
L_0881A38C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(2, ctx.gpr[16] < static_cast<std::uint32_t>(10) ? 1u : 0u);
      if (branch_taken) {
          goto L_0881A3F0;
      }
      goto L_0881A394;
    }
L_0881A394:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881A3F4;
      }
      goto L_0881A39C;
    }
L_0881A39C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0881A3A0;
L_0881A3A0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x0881A3B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 527u, 0x0881E2E0u>(ctx, &aot_mem) && ctx.pc == 0x0881A3B0u) goto L_0881A3B0;
    return;
L_0881A3B0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0881A3D0u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 417u, 0x0881DCD0u>(ctx, &aot_mem) && ctx.pc == 0x0881A3D0u) goto L_0881A3D0;
    return;
L_0881A3D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0881A39C;
      }
      goto L_0881A3DC;
    }
L_0881A3DC:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881A3F4;
      }
      goto L_0881A3E4;
    }
L_0881A3E4:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881A3A0;
      }
      goto L_0881A3F0;
    }
L_0881A3F0:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    goto L_0881A3F4;
L_0881A3F4:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[20]) > static_cast<std::int32_t>(ctx.gpr[22]) ? ctx.gpr[20] : ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[22]);
    goto L_08818FF0;
L_0881A418:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1988));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881A72C;
      }
      goto L_0881A450;
    }
L_0881A450:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0881A454;
L_0881A454:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
        goto L_0881A46C;
    }
    goto L_0881A45C;
L_0881A45C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
      if (branch_taken) {
          goto L_0881913C;
      }
      goto L_0881A468;
    }
L_0881A468:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    goto L_0881A46C;
L_0881A46C:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881A748;
      }
      goto L_0881A498;
    }
L_0881A498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0881A49C;
L_0881A49C:
    ctx.set_gpr(17, 0u - ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881A548;
      }
      goto L_0881A4A8;
    }
L_0881A4A8:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
        goto L_0881A518;
    }
    goto L_0881A4B0;
L_0881A4B0:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(18, ctx.gpr[4] + static_cast<std::uint32_t>(1504));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(16));
    goto L_0881A4D0;
L_0881A4C0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-16));
    goto L_0881A4C4;
L_0881A4C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 17 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
        goto L_0881A518;
    }
    goto L_0881A4D0;
L_0881A4D0:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881A4C0;
      }
      goto L_0881A4FC;
    }
L_0881A4FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x0881A508u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_0881A508:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_0881A510;
    }
L_0881A510:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-16));
    goto L_0881A4C4;
L_0881A518:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1504));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881A780;
      }
      goto L_0881A548;
    }
L_0881A548:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    goto L_0881A54C;
L_0881A54C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08819138;
      }
      goto L_0881A580;
    }
L_0881A580:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    goto L_0881943C;
L_0881A588:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[6]);
    goto L_0881A58C;
L_0881A58C:
    ctx.set_gpr(5, ctx.gpr[17] << 28u);
    ctx.set_gpr(2, ctx.gpr[16] >> 4u);
    ctx.set_gpr(2, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.set_gpr(4, ctx.gpr[16] & 15u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[17] >> 4u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] | ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_0881A58C;
      }
      goto L_0881A5D0;
    }
L_0881A5D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[22]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[20]) > static_cast<std::int32_t>(ctx.gpr[22]) ? ctx.gpr[20] : ctx.gpr[22]);
    goto L_08818FF0;
L_0881A5EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08818F04;
L_0881A608:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[20]) > static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[20] : ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_08818FF0;
L_0881A634:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
      if (branch_taken) {
          goto L_0881A6C8;
      }
      goto L_0881A63C;
    }
L_0881A63C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0881A648u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 626u, 0x08812984u>(ctx, &aot_mem) && ctx.pc == 0x0881A648u) goto L_0881A648;
    return;
L_0881A648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
      if (branch_taken) {
          goto L_0881AA44;
      }
      goto L_0881A650;
    }
L_0881A650:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    ctx.set_gpr(20, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[20]) > static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[20] : ctx.gpr[16]);
      if (branch_taken) {
          goto L_08818FF0;
      }
      goto L_0881A664;
    }
L_0881A664:
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[22]) > static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[22] : ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[22] + 0u);
    goto L_08818FF0;
L_0881A670:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0881A674;
L_0881A674:
    if (ctx.gpr[22] == 0u) ctx.set_gpr(22, ctx.gpr[2]);
    goto L_08819FF0;
L_0881A67C:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    goto L_08819EE8;
L_0881A68C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    goto L_088199B0;
L_0881A6A0:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    goto L_08819A2C;
L_0881A6B4:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    goto L_08819A2C;
L_0881A6C8:
    ctx.set_gpr(31, 0x0881A6D0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0881A6D0u) goto L_0881A6D0;
    return;
L_0881A6D0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[2]) > static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[2] : ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    goto L_08818FF0;
L_0881A6E0:
    ctx.set_gpr(31, 0x0881A6E8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 254u, 0x0880D4DCu>(ctx, &aot_mem) && ctx.pc == 0x0881A6E8u) goto L_0881A6E8;
    return;
L_0881A6E8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
        goto L_0881A7C8;
    }
    goto L_0881A6F0;
L_0881A6F0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1928));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    goto L_08818FF0;
L_0881A70C:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(6));
    goto L_08819FF0;
L_0881A714:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] | 32u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[6]);
    goto L_08818F9C;
L_0881A72C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x0881A738u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_0881A738:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_0881A740;
    }
L_0881A740:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0881A454;
L_0881A748:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x0881A754u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_0881A754:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_0881A75C;
    }
L_0881A75C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0881A49C;
L_0881A764:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1932));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    goto L_08818FF0;
L_0881A780:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(31, 0x0881A78Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_0881A78C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08819210;
      }
      goto L_0881A794;
    }
L_0881A794:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    goto L_0881A54C;
L_0881A79C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
        goto L_0881A7B0;
    }
    goto L_0881A7A8;
L_0881A7A8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    goto L_08819224;
L_0881A7B0:
    ctx.set_gpr(31, 0x0881A7B8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08818DF8;
L_0881A7B8:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
        goto L_08819224;
    }
    goto L_0881A7C0;
L_0881A7C0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    goto L_08819228;
L_0881A7C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(102));
    ctx.set_gpr(20, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] | 256u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0881A7F4;
      }
      goto L_0881A7E0;
    }
L_0881A7E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(101));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(69));
      if (branch_taken) {
          goto L_0881AA54;
      }
      goto L_0881A7EC;
    }
L_0881A7EC:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881AA54;
      }
      goto L_0881A7F4;
    }
L_0881A7F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0881AAA4;
      }
      goto L_0881A80C;
    }
L_0881A80C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[20] + 0u);
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0881A830u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 732u, 0x0880F658u>(ctx, &aot_mem) && ctx.pc == 0x0881A830u) goto L_0881A830;
    return;
L_0881A830:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(103));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(71));
      if (branch_taken) {
          goto L_0881AA2C;
      }
      goto L_0881A840;
    }
L_0881A840:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
      if (branch_taken) {
          goto L_0881AA30;
      }
      goto L_0881A848;
    }
L_0881A848:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    goto L_0881A84C;
L_0881A84C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(102));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.set_gpr(19, ctx.gpr[5] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0881AAEC;
      }
      goto L_0881A858;
    }
L_0881A858:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0881A86Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881FBBCu>(ctx, &aot_mem) && ctx.pc == 0x0881A86Cu) goto L_0881A86C;
    return;
L_0881A86C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] == 0u) ctx.set_gpr(3, ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881A898;
      }
      goto L_0881A880;
    }
L_0881A880:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(48));
    goto L_0881A888;
L_0881A888:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881A888;
      }
      goto L_0881A898;
    }
L_0881A898:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(2, ctx.gpr[21] ^ 103u);
    ctx.set_gpr(4, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881A9F8;
      }
      goto L_0881A8B0;
    }
L_0881A8B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(71));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 102 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881A9F8;
      }
      goto L_0881A8BC;
    }
L_0881A8BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(102));
      if (branch_taken) {
          goto L_0881AB38;
      }
      goto L_0881A8C4;
    }
L_0881A8C4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[21]))));
    goto L_0881A8CC;
L_0881A8CC:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0881AB6C;
      }
      goto L_0881A8E0;
    }
L_0881A8E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(43));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0881A8E8;
L_0881A8E8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0881AA90;
      }
      goto L_0881A8F4;
    }
L_0881A8F4:
    ctx.set_gpr(2, 26214u << 16u);
    ctx.set_gpr(8, ctx.gpr[2] | 26215u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    goto L_0881A908;
L_0881A904:
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    goto L_0881A908;
L_0881A908:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_0881A904;
      }
      goto L_0881A944;
    }
L_0881A944:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-2), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(38));
      if (branch_taken) {
          goto L_0881A97C;
      }
      goto L_0881A960;
    }
L_0881A960:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881A960;
      }
      goto L_0881A97C;
    }
L_0881A97C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(20, ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881A9C0;
      }
      goto L_0881A998;
    }
L_0881A998:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0881A99C;
L_0881A99C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    goto L_0881A9A0;
L_0881A9A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[20]) > static_cast<std::int32_t>(ctx.gpr[5]) ? ctx.gpr[20] : ctx.gpr[5]);
      if (branch_taken) {
          goto L_08818FF0;
      }
      goto L_0881A9AC;
    }
L_0881A9AC:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[20]) > static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[20] : ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08818FF0;
L_0881A9C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
      if (branch_taken) {
          goto L_0881A9A0;
      }
      goto L_0881A9D0;
    }
L_0881A9D0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0881A9A0;
L_0881A9D8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1924));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08818FF0;
L_0881A9F8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < -3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(101));
      if (branch_taken) {
          goto L_0881AA18;
      }
      goto L_0881AA08;
    }
L_0881AA08:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(103));
      if (branch_taken) {
          goto L_0881AAC8;
      }
      goto L_0881AA14;
    }
L_0881AA14:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(101));
    goto L_0881AA18;
L_0881AA18:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(101));
      if (branch_taken) {
          goto L_0881A8CC;
      }
      goto L_0881AA20;
    }
L_0881AA20:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(69));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(69));
    goto L_0881A8CC;
L_0881AA2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    goto L_0881AA30;
L_0881AA30:
    ctx.set_gpr(2, ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
      if (branch_taken) {
          goto L_0881A84C;
      }
      goto L_0881AA3C;
    }
L_0881AA3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0881A898;
L_0881AA44:
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[22]) > static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[22] : ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[22] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    goto L_08818FF0;
L_0881AA54:
    ctx.set_gpr(20, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    goto L_0881A7F4;
L_0881AA60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0881AA78u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 12u, 0x0881C188u>(ctx, &aot_mem) && ctx.pc == 0x0881AA78u) goto L_0881AA78;
    return;
L_0881AA78:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
      if (branch_taken) {
          goto L_08819224;
      }
      goto L_0881AA88;
    }
L_0881AA88:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    goto L_0881A200;
L_0881AA90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0881A97C;
L_0881AAA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(17, ctx.gpr[3] ^ ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[6]);
    goto L_0881A80C;
L_0881AAC4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0881AAC8;
L_0881AAC8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_0881A9C0;
      }
      goto L_0881AAD8;
    }
L_0881AAD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881ABA0;
      }
      goto L_0881AAE0;
    }
L_0881AAE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(20, ctx.gpr[2] + ctx.gpr[4]);
    goto L_0881A99C;
L_0881AAEC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881AB08;
      }
      goto L_0881AAFC;
    }
L_0881AAFC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0881AB00;
L_0881AB00:
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[7]);
    goto L_0881A858;
L_0881AB08:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0881AB18u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 906u, 0x0881FC44u>(ctx, &aot_mem) && ctx.pc == 0x0881AB18u) goto L_0881AB18;
    return;
L_0881AB18:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_0881AB00;
    }
    goto L_0881AB20;
L_0881AB20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[2] - ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[7]);
    goto L_0881A858;
L_0881AB38:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0881AAC4;
      }
      goto L_0881AB40;
    }
L_0881AB40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0881AB7C;
      }
      goto L_0881AB48;
    }
L_0881AB48:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0881AB64;
      }
      goto L_0881AB50;
    }
L_0881AB50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
      if (branch_taken) {
          goto L_0881A9A0;
      }
      goto L_0881AB60;
    }
L_0881AB60:
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[20]);
    goto L_0881AB64;
L_0881AB64:
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0881A99C;
L_0881AB6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(5, 0u - ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0881A8E8;
L_0881AB7C:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.set_gpr(20, ctx.gpr[22] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881AB98;
      }
      goto L_0881AB84;
    }
L_0881AB84:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(2, ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881A99C;
      }
      goto L_0881AB94;
    }
L_0881AB94:
    ctx.set_gpr(20, ctx.gpr[22] + static_cast<std::uint32_t>(2));
    goto L_0881AB98;
L_0881AB98:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(102));
    goto L_0881A99C;
L_0881ABA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[7]);
    ctx.set_gpr(20, ctx.gpr[2] + ctx.gpr[4]);
    goto L_0881A99C;
L_0881ABB4:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881A2A8;
      }
      goto L_0881ABC0;
    }
L_0881ABC0:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(-1));
    goto L_08818F9C;
L_0881ABD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0881ABF4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0881ABF4u) goto L_0881ABF4;
    return;
L_0881ABF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881AC10;
      }
      goto L_0881AC00;
    }
L_0881AC00:
    ctx.set_gpr(31, 0x0881AC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0881AC08u) goto L_0881AC08;
    return;
L_0881AC08:
    ctx.set_gpr(31, 0x0881AC10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 251u, 0x08810E78u>(ctx, &aot_mem) && ctx.pc == 0x0881AC10u) goto L_0881AC10;
    return;
L_0881AC10:
    ctx.set_gpr(31, 0x0881AC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0881AC18u) goto L_0881AC18;
    return;
L_0881AC18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08818E54;
L_0881AC40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1136));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1024));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000002u) | ((0u & 0x00000001u) << 1u));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.set_gpr(31, 0x0881AC9Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    goto L_0881ABD0;
L_0881AC9C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_0881ACB8;
      }
      goto L_0881ACA8;
    }
L_0881ACA8:
    ctx.set_gpr(31, 0x0881ACB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 227u, 0x08810CA4u>(ctx, &aot_mem) && ctx.pc == 0x0881ACB0u) goto L_0881ACB0;
    return;
L_0881ACB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != 0u) ctx.set_gpr(16, ctx.gpr[3]);
    goto L_0881ACB8;
L_0881ACB8:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] & 64u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881ACD4;
      }
      goto L_0881ACC8;
    }
L_0881ACC8:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_0881ACD4;
L_0881ACD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1128)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1124)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881ACE8:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_0881AD68;
      }
      goto L_0881AD00;
    }
L_0881AD00:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    goto L_0881AD08;
L_0881AD08:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_0881AD08;
      }
      goto L_0881AD18;
    }
L_0881AD18:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881AD60;
      }
      goto L_0881AD20;
    }
L_0881AD20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[9]);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(93));
    goto L_0881AD30;
L_0881AD30:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    goto L_0881AD3C;
L_0881AD3C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[10];
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881AD7C;
      }
      goto L_0881AD44;
    }
L_0881AD44:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0881AD60;
      }
      goto L_0881AD4C;
    }
L_0881AD4C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, ctx.gpr[8] + 0u);
        goto L_0881AD60;
    }
    goto L_0881AD54;
L_0881AD54:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    goto L_0881AD30;
L_0881AD60:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881AD68:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_0881AD00;
L_0881AD7C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[9];
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0881ADB4;
      }
      goto L_0881AD88;
    }
L_0881AD88:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(45));
        goto L_0881ADB8;
    }
    goto L_0881AD90;
L_0881AD90:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[7]);
    goto L_0881AD98;
L_0881AD98:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881AD98;
      }
      goto L_0881ADAC;
    }
L_0881ADAC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    goto L_0881AD3C;
L_0881ADB4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(45));
    goto L_0881ADB8;
L_0881ADB8:
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    goto L_0881AD30;
L_0881ADC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), 0u);
    goto L_0881AE0C;
L_0881AE0C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    goto L_0881AE10;
L_0881AE10:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0881AEA0;
      }
      goto L_0881AE20;
    }
L_0881AE20:
    ctx.set_gpr(16, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(37));
      if (branch_taken) {
          goto L_0881AED4;
      }
      goto L_0881AE3C;
    }
L_0881AE3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_0881AE74;
L_0881AE48:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881AE0C;
      }
      goto L_0881AE60;
    }
L_0881AE60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0881AE74;
L_0881AE74:
    if (static_cast<std::int32_t>(ctx.gpr[3]) > 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881AE48;
    }
    goto L_0881AE7C;
L_0881AE7C:
    ctx.set_gpr(31, 0x0881AE84u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x0881AE84u) goto L_0881AE84;
    return;
L_0881AE84:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881AE48;
    }
    goto L_0881AE8C;
L_0881AE8C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0881AE20;
      }
      goto L_0881AEA0;
    }
L_0881AEA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    goto L_0881AEA4;
L_0881AEA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881AED4:
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0881AF3C;
    }
    goto L_0881AEDC;
L_0881AEDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0881AF14;
      }
      goto L_0881AEE8;
    }
L_0881AEE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0881AEEC;
L_0881AEEC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-1))))));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881AEA0;
      }
      goto L_0881AEFC;
    }
L_0881AEFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0881AE0C;
L_0881AF14:
    ctx.set_gpr(31, 0x0881AF1Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x0881AF1Cu) goto L_0881AF1C;
    return;
L_0881AF1C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881AEEC;
    }
    goto L_0881AF24;
L_0881AF24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    goto L_0881AF28;
L_0881AF28:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
      if (branch_taken) {
          goto L_0881AEA4;
      }
      goto L_0881AF30;
    }
L_0881AF30:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    goto L_0881AEA0;
L_0881AF3C:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(30, 0u + 0u);
    ctx.set_gpr(20, 0u + 0u);
    goto L_0881AF48;
L_0881AF48:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(121) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881AF74;
      }
      goto L_0881AF58;
    }
L_0881AF58:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2032));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881AF74:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2178u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32584));
    ctx.set_gpr(4, ctx.gpr[20] | 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    if (ctx.gpr[3] != 0u) ctx.set_gpr(20, ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[2]);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(3));
    goto L_0881AFA4;
L_0881AFA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(2, ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_0881B318;
      }
      goto L_0881AFB0;
    }
L_0881AFB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(23, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0881B028;
      }
      goto L_0881AFB8;
    }
L_0881AFB8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    goto L_0881AFCC;
L_0881AFC4:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0881AFCC;
L_0881AFCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, ctx.gpr[21] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_0881B02C;
      }
      goto L_0881AFE8;
    }
L_0881AFE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0881AFEC;
L_0881AFEC:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881AFC4;
      }
      goto L_0881AFFC;
    }
L_0881AFFC:
    ctx.set_gpr(31, 0x0881B004u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x0881B004u) goto L_0881B004;
    return;
L_0881B004:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
      if (branch_taken) {
          goto L_0881AF28;
      }
      goto L_0881B00C;
    }
L_0881B00C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_0881AFEC;
    }
    goto L_0881B028;
L_0881B028:
    ctx.set_gpr(2, ctx.gpr[21] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    goto L_0881B02C;
L_0881B02C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(18, ctx.gpr[23] + 0u);
      if (branch_taken) {
          goto L_0881AE0C;
      }
      goto L_0881B034;
    }
L_0881B034:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2516));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881B050:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[20] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    if (ctx.gpr[30] == 0u) ctx.set_gpr(30, ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881B658;
      }
      goto L_0881B060;
    }
L_0881B060:
    ctx.set_gpr(20, ctx.gpr[20] >> 4u);
    ctx.set_gpr(2, ctx.gpr[20] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(21, 0u + 0u);
      if (branch_taken) {
          goto L_0881BDF4;
      }
      goto L_0881B074;
    }
L_0881B074:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(18, ctx.gpr[23] + 0u);
      if (branch_taken) {
          goto L_0881B378;
      }
      goto L_0881B07C;
    }
L_0881B07C:
    ctx.set_gpr(2, ctx.gpr[20] & 1u);
    goto L_0881B080;
L_0881B080:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
        goto L_0881AE10;
    }
    goto L_0881B088;
L_0881B088:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    goto L_0881AE0C;
L_0881B098:
    ctx.set_gpr(3, ctx.gpr[20] & 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[30] == 0u) ctx.set_gpr(30, ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_0881B7E8;
      }
      goto L_0881B0AC;
    }
L_0881B0AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0881B0B0;
L_0881B0B0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[29] + ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881BDE4;
      }
      goto L_0881B0C4;
    }
L_0881B0C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[20];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881BDE4;
      }
      goto L_0881B0DC;
    }
L_0881B0DC:
    if (static_cast<std::int32_t>(ctx.gpr[3]) > 0) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881B0B0;
    }
    goto L_0881B0E4;
L_0881B0E4:
    ctx.set_gpr(31, 0x0881B0ECu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x0881B0ECu) goto L_0881B0EC;
    return;
L_0881B0EC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881B0B0;
    }
    goto L_0881B0F4;
L_0881B0F4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(18, ctx.gpr[23] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0881AF24;
      }
      goto L_0881B0FC;
    }
L_0881B0FC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    goto L_0881AE10;
L_0881B104:
    ctx.set_gpr(2, ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(349) ? 1u : 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(349));
    if (ctx.gpr[2] == 0u) ctx.set_gpr(30, ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[20] | 1408u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(268));
      if (branch_taken) {
          goto L_0881B2D4;
      }
      goto L_0881B120;
    }
L_0881B120:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0881B124;
L_0881B124:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-43));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(78) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] & 256u);
      if (branch_taken) {
          goto L_0881B2D8;
      }
      goto L_0881B138;
    }
L_0881B138:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2536));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881B154:
    ctx.set_gpr(2, ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(349) ? 1u : 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(349));
    if (ctx.gpr[2] == 0u) ctx.set_gpr(30, ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(16, ctx.gpr[20] | 1920u);
      if (branch_taken) {
          goto L_0881B79C;
      }
      goto L_0881B16C;
    }
L_0881B16C:
    ctx.set_gpr(18, ctx.gpr[23] + 0u);
    ctx.set_gpr(20, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), 0u);
    ctx.set_gpr(21, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), 0u);
    goto L_0881B184;
L_0881B184:
    ctx.set_gpr(2, ctx.gpr[16] & 256u);
    goto L_0881B188;
L_0881B188:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] & 16u);
      if (branch_taken) {
          goto L_0881B1D8;
      }
      goto L_0881B190;
    }
L_0881B190:
    ctx.set_gpr(2, ctx.gpr[16] & 1024u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(101));
      if (branch_taken) {
          goto L_0881BA80;
      }
      goto L_0881B19C;
    }
L_0881B19C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-1))))));
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881BAB8;
      }
      goto L_0881B1AC;
    }
L_0881B1AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(69));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
        goto L_0881BABC;
    }
    goto L_0881B1B8;
L_0881B1B8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(31, 0x0881B1C4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08818C3C;
L_0881B1C4:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    goto L_0881B1CC;
L_0881B1CC:
    ctx.set_gpr(31, 0x0881B1D4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08818C3C;
L_0881B1D4:
    ctx.set_gpr(2, ctx.gpr[16] & 16u);
    goto L_0881B1D8;
L_0881B1D8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
        goto L_0881AE10;
    }
    goto L_0881B1E0;
L_0881B1E0:
    ctx.set_gpr(3, ctx.gpr[16] & 1536u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1024));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0881B97C;
      }
      goto L_0881B1F0;
    }
L_0881B1F0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
      if (branch_taken) {
          goto L_0881B9C0;
      }
      goto L_0881B1F8;
    }
L_0881B1F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0881B20Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(10));
    goto L_088180B8;
L_0881B20C:
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[21]);
    goto L_0881B994;
L_0881B214:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[20] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    if (ctx.gpr[30] == 0u) ctx.set_gpr(30, ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881B5F8;
      }
      goto L_0881B224;
    }
L_0881B224:
    ctx.set_gpr(20, ctx.gpr[20] >> 4u);
    ctx.set_gpr(2, ctx.gpr[20] ^ 1u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[29]);
      if (branch_taken) {
          goto L_0881BBD4;
      }
      goto L_0881B23C;
    }
L_0881B23C:
    ctx.set_gpr(18, ctx.gpr[23] + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0881B248;
L_0881B248:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
      if (branch_taken) {
          goto L_0881B270;
      }
      goto L_0881B264;
    }
L_0881B264:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.set_gpr(2, 2226u << 16u);
      if (branch_taken) {
          goto L_0881BC00;
      }
      goto L_0881B26C;
    }
L_0881B26C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    goto L_0881B270;
L_0881B270:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
        goto L_0881AE10;
    }
    goto L_0881B27C;
L_0881B27C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_0881AE0C;
L_0881B294:
    ctx.set_gpr(2, ctx.gpr[16] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] & 256u);
      if (branch_taken) {
          goto L_0881B2D8;
      }
      goto L_0881B2A0;
    }
L_0881B2A0:
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x00000080u) | ((0u & 0x00000001u) << 7u));
    goto L_0881B2A4;
L_0881B2A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881BD14;
      }
      goto L_0881B2BC;
    }
L_0881B2BC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    goto L_0881B2C8;
L_0881B2C8:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[30]);
    if (ctx.gpr[18] != ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881B124;
    }
    goto L_0881B2D4;
L_0881B2D4:
    ctx.set_gpr(2, ctx.gpr[16] & 256u);
    goto L_0881B2D8;
L_0881B2D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_0881BBB0;
      }
      goto L_0881B2E0;
    }
L_0881B2E0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-1))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0881BB28;
      }
      goto L_0881B2EC;
    }
L_0881B2EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(88));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0881BB28;
      }
      goto L_0881B2F8;
    }
L_0881B2F8:
    ctx.set_gpr(2, ctx.gpr[16] & 16u);
    goto L_0881B2FC;
L_0881B2FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
      if (branch_taken) {
          goto L_0881BAC4;
      }
      goto L_0881B304;
    }
L_0881B304:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    goto L_0881AE0C;
L_0881B318:
    ctx.set_gpr(31, 0x0881B320u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x0881B320u) goto L_0881B320;
    return;
L_0881B320:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_0881AFB0;
      }
      goto L_0881B328;
    }
L_0881B328:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    goto L_0881AF28;
L_0881B330:
    ctx.set_gpr(2, 2178u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32584));
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), 0u);
    goto L_0881AFA4;
L_0881B348:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(104));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
        goto L_0881B368;
    }
    goto L_0881B35C;
L_0881B35C:
    ctx.set_gpr(20, ctx.gpr[20] | 4u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0881AF48;
L_0881B368:
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(20, ctx.gpr[20] | 8u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0881AF48;
L_0881B378:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2844)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0881AF24;
      }
      goto L_0881B388;
    }
L_0881B388:
    ctx.set_gpr(23, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_0881B3CC;
L_0881B390:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
        goto L_0881B398;
    }
    goto L_0881B398;
L_0881B398:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[16]);
    goto L_0881B39C;
L_0881B39C:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0881B3AC;
      }
      goto L_0881B3A8;
    }
L_0881B3A8:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(2));
    goto L_0881B3AC;
L_0881B3AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0881B448;
      }
      goto L_0881B3B8;
    }
L_0881B3B8:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.set_gpr(3, 2226u << 16u);
      if (branch_taken) {
          goto L_0881B07C;
      }
      goto L_0881B3C0;
    }
L_0881B3C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2844)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
      if (branch_taken) {
          goto L_0881AF28;
      }
      goto L_0881B3CC;
    }
L_0881B3CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[29] + ctx.gpr[16]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0881B404u);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(268), static_cast<std::uint8_t>(ctx.gpr[8]));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0881B404u) goto L_0881B404;
    return;
L_0881B404:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0881B41Cu);
    ctx.set_gpr(8, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 613u, 0x08812868u>(ctx, &aot_mem) && ctx.pc == 0x0881B41Cu) goto L_0881B41C;
    return;
L_0881B41C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
        goto L_0881AF28;
    }
    goto L_0881B42C;
L_0881B42C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, ctx.gpr[20] & 1u);
      if (branch_taken) {
          goto L_0881B390;
      }
      goto L_0881B434;
    }
L_0881B434:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[20] & 1u);
      if (branch_taken) {
          goto L_0881B3AC;
      }
      goto L_0881B440;
    }
L_0881B440:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[16]);
    goto L_0881B39C;
L_0881B448:
    ctx.set_gpr(31, 0x0881B450u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x0881B450u) goto L_0881B450;
    return;
L_0881B450:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B3B8;
      }
      goto L_0881B458;
    }
L_0881B458:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(2, ctx.gpr[20] & 1u);
      if (branch_taken) {
          goto L_0881B080;
      }
      goto L_0881B460;
    }
L_0881B460:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    goto L_0881AF28;
L_0881B468:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(4));
    goto L_0881AFA4;
L_0881B470:
    ctx.set_gpr(20, ctx.gpr[20] | 1u);
    goto L_0881B474;
L_0881B474:
    ctx.set_gpr(2, 2178u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32584));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[4]);
    goto L_0881AFA4;
L_0881B490:
    ctx.set_gpr(20, ctx.gpr[20] | 1u);
    goto L_0881B494;
L_0881B494:
    ctx.set_gpr(20, ctx.gpr[20] | 64u);
    ctx.set_gpr(21, 0u + 0u);
    goto L_0881AFA4;
L_0881B4A0:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0881B4ACu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    goto L_0881ACE8;
L_0881B4AC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, ctx.gpr[20] | 64u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    goto L_0881AFA4;
L_0881B4BC:
    ctx.set_gpr(20, ctx.gpr[20] | 1u);
    goto L_0881B4C0;
L_0881B4C0:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(2));
    goto L_0881AFA4;
L_0881B4C8:
    ctx.set_gpr(2, 2178u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31260));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[20] | 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[2]);
    goto L_0881AFA4;
L_0881B4E8:
    ctx.set_gpr(2, 2178u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31260));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(20, ctx.gpr[20] | 544u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[4]);
    goto L_0881AFA4;
L_0881B508:
    ctx.set_gpr(2, 2178u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31260));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[3]);
    goto L_0881AFA4;
L_0881B524:
    ctx.set_gpr(2, ctx.gpr[20] & 16u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
        goto L_0881AE10;
    }
    goto L_0881B530;
L_0881B530:
    ctx.set_gpr(2, ctx.gpr[20] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[20] & 4u);
      if (branch_taken) {
          goto L_0881B56C;
      }
      goto L_0881B53C;
    }
L_0881B53C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_0881AE0C;
L_0881B54C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(108));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
        goto L_0881B584;
    }
    goto L_0881B560;
L_0881B560:
    ctx.set_gpr(20, ctx.gpr[20] | 1u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0881AF48;
L_0881B56C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[20] & 1u);
      if (branch_taken) {
          goto L_0881B594;
      }
      goto L_0881B574;
    }
L_0881B574:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    goto L_0881AE0C;
L_0881B584:
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(20, ctx.gpr[20] | 2u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0881AF48;
L_0881B594:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_0881B5D0;
    }
    goto L_0881B59C;
L_0881B59C:
    ctx.set_gpr(2, ctx.gpr[20] & 2u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_0881B5D0;
    }
    goto L_0881B5A8;
L_0881B5A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0881AE0C;
L_0881B5C0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[20] | 2u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0881AF48;
L_0881B5D0:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_0881AE0C;
L_0881B5DC:
    ctx.set_gpr(2, 2178u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31260));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[2]);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[2]);
    goto L_0881AFA4;
L_0881B5F8:
    ctx.set_gpr(2, ctx.gpr[20] & 16u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_0881B714;
    }
    goto L_0881B604;
L_0881B604:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(16, 0u + 0u);
    goto L_0881B634;
L_0881B614:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[16];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0881B6C8;
      }
      goto L_0881B62C;
    }
L_0881B62C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0881B6B8;
      }
      goto L_0881B634;
    }
L_0881B634:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0881B638;
L_0881B638:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_0881B614;
    }
    goto L_0881B650;
L_0881B650:
    ctx.set_gpr(18, ctx.gpr[23] + ctx.gpr[16]);
    goto L_0881AE0C;
L_0881B658:
    ctx.set_gpr(2, ctx.gpr[20] & 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0881B6D0;
      }
      goto L_0881B664;
    }
L_0881B664:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0881B690;
L_0881B66C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(31, 0x0881B684u);
    ctx.set_gpr(30, ctx.gpr[30] - ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x0881B684u) goto L_0881B684;
    return;
L_0881B684:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B704;
      }
      goto L_0881B68C;
    }
L_0881B68C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0881B690;
L_0881B690:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881B66C;
      }
      goto L_0881B69C;
    }
L_0881B69C:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[30]);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(18, ctx.gpr[16] + ctx.gpr[23]);
    goto L_0881AE0C;
L_0881B6B8:
    ctx.set_gpr(31, 0x0881B6C0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x0881B6C0u) goto L_0881B6C0;
    return;
L_0881B6C0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881B638;
    }
    goto L_0881B6C8;
L_0881B6C8:
    ctx.set_gpr(18, ctx.gpr[23] + ctx.gpr[16]);
    goto L_0881AE0C;
L_0881B6D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x0881B6E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 257u, 0x08811040u>(ctx, &aot_mem) && ctx.pc == 0x0881B6E4u) goto L_0881B6E4;
    return;
L_0881B6E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881AF24;
      }
      goto L_0881B6EC;
    }
L_0881B6EC:
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[2]);
    goto L_0881AE0C;
L_0881B704:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(18, ctx.gpr[16] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_0881AE0C;
      }
      goto L_0881B70C;
    }
L_0881B70C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    goto L_0881AF28;
L_0881B714:
    ctx.set_gpr(16, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(21, ctx.gpr[18] + ctx.gpr[30]);
    ctx.set_gpr(20, ctx.gpr[18] + 0u);
    goto L_0881B750;
L_0881B724:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881BA60;
      }
      goto L_0881B744;
    }
L_0881B744:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0881BA50;
      }
      goto L_0881B750;
    }
L_0881B750:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0881B754;
L_0881B754:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_0881B724;
    }
    goto L_0881B774;
L_0881B774:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    goto L_0881BA64;
L_0881B77C:
    ctx.set_gpr(3, ctx.gpr[30] << 3u);
    ctx.set_gpr(2, ctx.gpr[30] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(30, ctx.gpr[2] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0881AF48;
L_0881B79C:
    ctx.set_gpr(18, ctx.gpr[23] + 0u);
    ctx.set_gpr(20, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), 0u);
    ctx.set_gpr(21, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0881B7B8;
L_0881B7B8:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-43));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(59) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
        goto L_0881B8C0;
    }
    goto L_0881B7CC;
L_0881B7CC:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2848));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881B7E8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(21, ctx.gpr[18] + ctx.gpr[30]);
    ctx.set_gpr(20, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0881B7FC;
L_0881B7FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[29] + ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881B854;
      }
      goto L_0881B810;
    }
L_0881B810:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[18];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881B854;
      }
      goto L_0881B830;
    }
L_0881B830:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881B7FC;
    }
    goto L_0881B83C;
L_0881B83C:
    ctx.set_gpr(31, 0x0881B844u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x0881B844u) goto L_0881B844;
    return;
L_0881B844:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881B7FC;
    }
    goto L_0881B84C;
L_0881B84C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[18];
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
      if (branch_taken) {
          goto L_0881AF28;
      }
      goto L_0881B854;
    }
L_0881B854:
    ctx.set_gpr(20, ctx.gpr[18] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(22, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881AEA0;
      }
      goto L_0881B860;
    }
L_0881B860:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(18, ctx.gpr[23] + ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[3]);
    goto L_0881AE0C;
L_0881B878:
    ctx.set_gpr(2, ctx.gpr[16] & 128u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
      if (branch_taken) {
          goto L_0881B8C0;
      }
      goto L_0881B884;
    }
L_0881B884:
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x00000080u) | ((0u & 0x00000001u) << 7u));
    goto L_0881B888;
L_0881B888:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0881B890;
L_0881B890:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881B8D0;
      }
      goto L_0881B8A4;
    }
L_0881B8A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[30]);
    goto L_0881B8B4;
L_0881B8B4:
    if (ctx.gpr[18] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881B7B8;
    }
    goto L_0881B8BC;
L_0881B8BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    goto L_0881B8C0;
L_0881B8C0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000100u) | ((0u & 0x00000001u) << 8u));
    if (ctx.gpr[3] != 0u) ctx.set_gpr(16, ctx.gpr[2]);
    goto L_0881B184;
L_0881B8D0:
    ctx.set_gpr(31, 0x0881B8D8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x0881B8D8u) goto L_0881B8D8;
    return;
L_0881B8D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_0881B8B4;
      }
      goto L_0881B8E0;
    }
L_0881B8E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    goto L_0881B8C0;
L_0881B8E8:
    ctx.set_gpr(2, ctx.gpr[16] & 512u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-641));
      if (branch_taken) {
          goto L_0881B8BC;
      }
      goto L_0881B8F4;
    }
L_0881B8F4:
    ctx.set_gpr(16, ctx.gpr[16] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[2]);
    goto L_0881B888;
L_0881B904:
    ctx.set_gpr(2, ctx.gpr[16] & 256u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x00000180u) | ((0u & 0x00000003u) << 7u));
        goto L_0881B888;
    }
    goto L_0881B910;
L_0881B910:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x00000080u) | ((0u & 0x00000001u) << 7u));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[4]);
    goto L_0881B890;
L_0881B924:
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x00000180u) | ((0u & 0x00000003u) << 7u));
    goto L_0881B888;
L_0881B92C:
    ctx.set_gpr(3, ctx.gpr[16] & 1280u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1024));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[16] & 1024u);
      if (branch_taken) {
          goto L_0881B94C;
      }
      goto L_0881B93C;
    }
L_0881B93C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
      if (branch_taken) {
          goto L_0881B8C0;
      }
      goto L_0881B944;
    }
L_0881B944:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] & 256u);
      if (branch_taken) {
          goto L_0881B188;
      }
      goto L_0881B94C;
    }
L_0881B94C:
    ctx.set_gpr(2, ctx.gpr[16] & 512u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0881B96C;
      }
      goto L_0881B958;
    }
L_0881B958:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[20]);
    ctx.set_gpr(21, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0881B96C;
L_0881B96C:
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000600u) | ((0u & 0x00000003u) << 9u));
    ctx.set_gpr(16, ctx.gpr[2] | 384u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), 0u);
    goto L_0881B888;
L_0881B97C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u - ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881B9BC;
      }
      goto L_0881B994;
    }
L_0881B994:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(607));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(606));
    if (ctx.gpr[2] == 0u) ctx.set_gpr(4, ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3084));
    ctx.set_gpr(31, 0x0881B9BCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0881B9BCu) goto L_0881B9BC;
    return;
L_0881B9BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    goto L_0881B9C0;
L_0881B9C0:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(31, 0x0881B9CCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 632u, 0x08816DB4u>(ctx, &aot_mem) && ctx.pc == 0x0881B9CCu) goto L_0881B9CC;
    return;
L_0881B9CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0881B9E8;
      }
      goto L_0881B9DC;
    }
L_0881B9DC:
    ctx.set_gpr(2, ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BA0C;
      }
      goto L_0881B9E8;
    }
L_0881B9E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_0881B9F8;
L_0881B9F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[2]);
    goto L_0881AE0C;
L_0881BA0C:
    ctx.set_gpr(31, 0x0881BA14u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x0881BA14u) goto L_0881BA14;
    return;
L_0881BA14:
    ctx.set_gpr(7, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0881B9F8;
L_0881BA20:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[20] | 16u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_0881AF48;
L_0881BA30:
    ctx.set_gpr(2, 2178u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31260));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(20, ctx.gpr[20] | 512u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[3]);
    goto L_0881AFA4;
L_0881BA50:
    ctx.set_gpr(31, 0x0881BA58u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x0881BA58u) goto L_0881BA58;
    return;
L_0881BA58:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881B754;
    }
    goto L_0881BA60;
L_0881BA60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    goto L_0881BA64;
L_0881BA64:
    ctx.set_gpr(2, ctx.gpr[20] - ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0881AE0C;
L_0881BA80:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
      if (branch_taken) {
          goto L_0881AEA4;
      }
      goto L_0881BA90;
    }
L_0881BA90:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_0881BA94;
L_0881BA94:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x0881BAA0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08818C3C;
L_0881BAA0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881BA94;
      }
      goto L_0881BAB0;
    }
L_0881BAB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    goto L_0881AEA4;
L_0881BAB8:
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    goto L_0881BABC;
L_0881BABC:
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    goto L_0881B1CC;
L_0881BAC4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0881BAE0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881BAE0u) goto L_0881BAE0;
    return;
L_0881BAE0:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] & 32u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_0881BB50;
    }
    goto L_0881BAF0;
L_0881BAF0:
    ctx.set_gpr(2, ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] & 4u);
      if (branch_taken) {
          goto L_0881BB38;
      }
      goto L_0881BAFC;
    }
L_0881BAFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0881BB08;
L_0881BB08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[23] + ctx.gpr[2]);
    goto L_0881AE0C;
L_0881BB28:
    ctx.set_gpr(31, 0x0881BB30u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08818C3C;
L_0881BB30:
    ctx.set_gpr(2, ctx.gpr[16] & 16u);
    goto L_0881B2FC;
L_0881BB38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_0881BB5C;
      }
      goto L_0881BB40;
    }
L_0881BB40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_0881BB08;
L_0881BB50:
    ctx.set_gpr(4, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0881BB08;
L_0881BB5C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_0881BB50;
    }
    goto L_0881BB64;
L_0881BB64:
    ctx.set_gpr(2, ctx.gpr[16] & 2u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_0881BB50;
    }
    goto L_0881BB70;
L_0881BB70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.set_gpr(2, 2178u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31260));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
      if (branch_taken) {
          goto L_0881BBE4;
      }
      goto L_0881BB84;
    }
L_0881BB84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0881BB94u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    goto L_088182E4;
L_0881BB94:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0881BB9C;
L_0881BB9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_0881BB08;
L_0881BBB0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
        goto L_0881AEA4;
    }
    goto L_0881BBC0;
L_0881BBC0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-1))))));
    ctx.set_gpr(31, 0x0881BBCCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08818C3C;
L_0881BBCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    goto L_0881AEA4;
L_0881BBD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[4]);
    goto L_0881B23C;
L_0881BBE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0881BBF4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    goto L_088187E8;
L_0881BBF4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0881BB9C;
L_0881BC00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2844)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881AF24;
      }
      goto L_0881BC0C;
    }
L_0881BC0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(23, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[29] + ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0881BC3Cu);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(268), static_cast<std::uint8_t>(ctx.gpr[7]));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0881BC3Cu) goto L_0881BC3C;
    return;
L_0881BC3C:
    ctx.set_gpr(8, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(31, 0x0881BC54u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 613u, 0x08812868u>(ctx, &aot_mem) && ctx.pc == 0x0881BC54u) goto L_0881BC54;
    return;
L_0881BC54:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
        goto L_0881AF28;
    }
    goto L_0881BC64;
L_0881BC64:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0881BD04;
      }
      goto L_0881BC6C;
    }
L_0881BC6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    goto L_0881BC78;
L_0881BC78:
    ctx.set_gpr(31, 0x0881BC80u);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 449u, 0x08811CCCu>(ctx, &aot_mem) && ctx.pc == 0x0881BC80u) goto L_0881BC80;
    return;
L_0881BC80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881BCCC;
      }
      goto L_0881BC88;
    }
L_0881BC88:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(21, 0u + 0u);
      if (branch_taken) {
          goto L_0881BCA0;
      }
      goto L_0881BC94;
    }
L_0881BC94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[4]);
    goto L_0881BCA0;
L_0881BCA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0881BCA4;
L_0881BCA4:
    if (static_cast<std::int32_t>(ctx.gpr[3]) > 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881B248;
    }
    goto L_0881BCAC;
L_0881BCAC:
    ctx.set_gpr(31, 0x0881BCB4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x0881BCB4u) goto L_0881BCB4;
    return;
L_0881BCB4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0881B248;
    }
    goto L_0881BCBC;
L_0881BCBC:
    if (ctx.gpr[21] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
        goto L_0881B270;
    }
    goto L_0881BCC4;
L_0881BCC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    goto L_0881AF28;
L_0881BCCC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
      if (branch_taken) {
          goto L_0881B270;
      }
      goto L_0881BCD4;
    }
L_0881BCD4:
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(20, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0881BCE4;
L_0881BCE4:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0881BCF4u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08818C3C;
L_0881BCF4:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[16];
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881BCE4;
      }
      goto L_0881BCFC;
    }
L_0881BCFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    goto L_0881B270;
L_0881BD04:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
        goto L_0881BC78;
    }
    goto L_0881BD0C;
L_0881BD0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0881BCA4;
L_0881BD14:
    ctx.set_gpr(31, 0x0881BD1Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 343u, 0x08815864u>(ctx, &aot_mem) && ctx.pc == 0x0881BD1Cu) goto L_0881BD1C;
    return;
L_0881BD1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(268));
      if (branch_taken) {
          goto L_0881B2C8;
      }
      goto L_0881BD24;
    }
L_0881BD24:
    ctx.set_gpr(2, ctx.gpr[16] & 256u);
    goto L_0881B2D8;
L_0881BD2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, ctx.gpr[16] & 1024u);
      if (branch_taken) {
          goto L_0881BD48;
      }
      goto L_0881BD38;
    }
L_0881BD38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(16, ctx.gpr[16] | 512u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] & 1024u);
    goto L_0881BD48;
L_0881BD48:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x00000380u) | ((0u & 0x00000007u) << 7u));
        goto L_0881B2A4;
    }
    goto L_0881BD50;
L_0881BD50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1409));
    ctx.set_gpr(16, ctx.gpr[16] & ctx.gpr[2]);
    goto L_0881B2A4;
L_0881BD5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1996));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[3]);
    goto L_0881BD78;
L_0881BD78:
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x00000380u) | ((0u & 0x00000007u) << 7u));
    goto L_0881B2A4;
L_0881BD80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1996));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881BD78;
      }
      goto L_0881BDA4;
    }
L_0881BDA4:
    ctx.set_gpr(2, ctx.gpr[16] & 256u);
    goto L_0881B2D8;
L_0881BDAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x00000380u) | ((0u & 0x00000007u) << 7u));
        goto L_0881B2A4;
    }
    goto L_0881BDBC;
L_0881BDBC:
    ctx.set_gpr(2, ctx.gpr[16] & 256u);
    goto L_0881B2D8;
L_0881BDC4:
    ctx.set_gpr(2, ctx.gpr[16] & 512u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(269));
      if (branch_taken) {
          goto L_0881B2D4;
      }
      goto L_0881BDD0;
    }
L_0881BDD0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881B2D4;
      }
      goto L_0881BDD8;
    }
L_0881BDD8:
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x00000200u) | ((0u & 0x00000001u) << 9u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[2]);
    goto L_0881B2A4;
L_0881BDE4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(18, ctx.gpr[23] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0881AEA0;
      }
      goto L_0881BDEC;
    }
L_0881BDEC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    goto L_0881AE10;
L_0881BDF4:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    goto L_0881B074;
L_0881BEC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0881BEE4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0881BEE4u) goto L_0881BEE4;
    return;
L_0881BEE4:
    ctx.set_gpr(31, 0x0881BEECu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0881BEECu) goto L_0881BEEC;
    return;
L_0881BEEC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08818E54;
L_0881BF28:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    if (ctx.gpr[5] == 0u) ctx.set_gpr(3, 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(520));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(31, 0x0881BF6Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0881BF6Cu) goto L_0881BF6C;
    return;
L_0881BF6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0881BF80u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    goto L_08818E54;
L_0881BF80:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881BF8C;
      }
      goto L_0881BF88;
    }
L_0881BF88:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0881BF8C;
L_0881BF8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0005(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0005_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_5(Runtime &runtime) {
    runtime.register_generated_unit(5u, 0x08818000u, 16384u, &recomp_unit_0005, &recomp_unit_0005_entry);
    runtime.register_function(0x08818000u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818008u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818018u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818020u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818028u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818030u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818038u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818040u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818050u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818058u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818060u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818068u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818070u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818080u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881808Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818094u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818108u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818114u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818118u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818120u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818128u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818130u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818134u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881814Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818160u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881816Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881817Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818188u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818190u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818198u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818200u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818208u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818210u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818218u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818224u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881822Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881823Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818244u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818250u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881825Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818268u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818270u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818284u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818298u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818330u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818334u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881834Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818358u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818360u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881836Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818378u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881837Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818380u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881838Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818398u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818404u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818414u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818420u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818428u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818430u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818438u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818440u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818444u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818484u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881848Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818494u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818508u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818510u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818548u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818564u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818574u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818580u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818590u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881859Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818614u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818620u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818628u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818634u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818640u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818644u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818650u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818654u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881866Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818680u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881868Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881869Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818704u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818714u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818720u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818728u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818730u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818738u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818744u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881874Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881875Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818768u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818774u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881877Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818790u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881879Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088187C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088187E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818834u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818838u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818850u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881885Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818864u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818870u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881887Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818880u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818884u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818898u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818900u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881890Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818914u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881891Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818924u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881892Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818930u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818970u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818978u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818980u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818994u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A34u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818ABCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818ACCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E34u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818EB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818EBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818ECCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F34u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819000u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819010u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819020u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819028u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881902Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881905Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819060u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819064u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881906Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819108u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819138u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881913Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819148u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819158u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819160u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819164u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819190u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819208u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819210u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819214u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881921Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819224u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819228u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819238u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881926Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819278u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819284u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881932Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819338u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819340u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819348u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819350u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819364u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881936Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819404u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819408u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819424u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819438u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881943Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819444u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881944Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819454u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819460u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819464u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819470u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881949Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819510u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819514u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819524u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881952Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819564u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819568u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881959Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819608u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819614u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881961Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819624u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819630u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819634u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819640u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881966Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819678u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819680u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819688u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819690u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881969Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819710u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819714u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819748u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819750u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881975Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819760u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881976Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819798u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819818u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881981Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819824u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881982Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819834u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819840u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819870u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819878u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819884u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881988Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881989Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819908u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819934u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819940u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819948u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819950u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881995Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819964u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819974u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881997Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819988u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819998u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819ADCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819ED0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819ED4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A01Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A024u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A034u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A03Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A054u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A070u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A074u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A080u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A090u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A094u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A100u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A110u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A120u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A124u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A14Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A158u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A170u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A17Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A188u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A200u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A204u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A20Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A218u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A220u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A230u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A248u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A250u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A26Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A280u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A284u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A28Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A294u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A300u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A308u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A30Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A314u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A320u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A328u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A330u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A344u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A350u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A360u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A384u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A38Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A394u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A39Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A418u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A450u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A454u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A45Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A468u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A46Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A498u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A49Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A508u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A510u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A518u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A548u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A54Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A580u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A588u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A58Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A608u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A634u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A63Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A648u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A650u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A664u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A670u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A674u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A67Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A68Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A70Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A714u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A72Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A738u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A740u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A748u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A754u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A75Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A764u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A780u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A78Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A794u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A79Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A80Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A830u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A840u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A848u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A84Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A858u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A86Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A880u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A888u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A898u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A904u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A908u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A944u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A960u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A97Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A998u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A99Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AED4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B004u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B00Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B028u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B02Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B034u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B050u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B060u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B074u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B07Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B080u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B088u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B098u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B104u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B120u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B124u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B138u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B154u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B16Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B184u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B188u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B190u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B19Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B20Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B214u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B224u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B23Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B248u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B264u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B26Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B270u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B27Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B294u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B304u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B318u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B320u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B328u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B330u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B348u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B35Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B368u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B378u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B388u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B390u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B398u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B39Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B404u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B41Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B42Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B434u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B440u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B448u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B450u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B458u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B460u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B468u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B470u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B474u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B490u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B494u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B508u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B524u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B530u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B53Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B54Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B560u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B56Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B574u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B584u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B594u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B59Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B604u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B614u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B62Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B634u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B638u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B650u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B658u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B664u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B66Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B684u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B68Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B690u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B69Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B704u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B70Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B714u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B724u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B744u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B750u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B754u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B774u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B77Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B79Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B810u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B830u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B83Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B844u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B84Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B854u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B860u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B878u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B884u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B888u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B890u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B904u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B910u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B924u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B92Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B93Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B944u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B94Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B958u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B96Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B97Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B994u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BABCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BEC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BEE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BEECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF8Cu, &recomp_unit_0005, "recomp_unit_0005");
}
} // namespace psprecomp
