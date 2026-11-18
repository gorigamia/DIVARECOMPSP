#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0037[4095] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 4, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10,
    0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 17, 0, 0, 18, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25,
    0, 0, 0, 0, 26, 27, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0,
    0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 40, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0,
    44, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0, 53, 0, 54, 55, 0, 56, 0, 0,
    57, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0,
    0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0,
    75, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82,
    83, 0, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 93, 0, 94,
    0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 98, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 106, 107, 0, 108, 109, 0, 110, 111, 0, 112, 113, 0, 114, 115, 0, 0, 116, 117, 0,
    0, 118, 0, 0, 0, 119, 0, 120, 121, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 129, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0,
    0, 0, 0, 134, 135, 0, 0, 136, 0, 0, 137, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0,
    0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 148, 0, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164,
    0, 165, 0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 0, 176, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 179, 0, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 184,
    0, 0, 0, 0, 0, 185, 0, 0, 186, 187, 0, 188, 189, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 212, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0,
    219, 0, 0, 220, 0, 221, 0, 0, 222, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 227, 0, 228, 0, 0, 229, 0, 0, 0,
    230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 239, 0, 240, 0,
    241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 255, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 262, 263, 0, 264, 265, 266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0,
    274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0,
    0, 0, 0, 293, 294, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 302,
    0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0,
    307, 308, 0, 309, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 0, 0, 319, 0, 320,
    0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 0, 330, 0, 331,
    0, 0, 0, 0, 332, 333, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 337, 338, 0, 0, 339, 0, 340, 0, 341, 0, 342, 0, 0, 0, 0,
    0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 354, 0, 0, 355, 0, 0, 0, 356, 357, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 360, 0, 0, 0, 361, 0, 0, 362, 0, 0,
    0, 363, 364, 0, 365, 0, 0, 366, 0, 367, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370,
    0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 373, 0, 374, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 0,
    0, 0, 379, 0, 380, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 387,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390,
    0, 0, 0, 391, 0, 392, 0, 393, 0, 0, 394, 0, 395, 0, 396, 0, 397, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400,
    0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 407, 408, 0, 0, 409, 0,
    0, 410, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 416, 0, 417, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420,
    0, 421, 0, 422, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 427, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 433, 0, 434, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 438, 0, 0, 0, 439,
    0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0,
    0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 447, 0, 0, 0, 0, 0, 0, 448, 0, 449, 450, 0, 451, 0, 0, 0, 0, 0, 0, 452,
    453, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 461,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 464, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 469, 0, 0, 470, 0, 0, 0,
    471, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0,
    0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 479, 480, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 488, 0, 0, 0, 0, 489,
    0, 0, 490, 0, 491, 0, 492, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 497, 0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 501, 0, 502, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0,
    506, 0, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 511, 0, 0, 512, 0, 513, 0, 514, 0, 515, 0, 0, 516, 0, 0, 517, 0, 518, 0, 519,
    0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 524, 0, 0, 525, 0, 526, 527, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 532, 0,
    0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 538, 0, 0, 539, 0, 540, 0, 0, 541, 0, 542, 0, 0, 0, 0,
    543, 0, 544, 0, 545, 546, 0, 0, 0, 0, 547, 0, 548, 0, 549, 0, 550, 0, 0, 551, 0, 552, 0, 553, 0, 0, 0, 554, 0, 555, 0, 556,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 560, 561, 0, 562,
    563, 0, 564, 565, 0, 566, 567, 0, 568, 569, 0, 570, 571, 0, 572, 573, 0, 574, 0, 575, 0, 576, 0, 0, 0, 577, 0, 578, 0, 0, 0, 579,
    0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593,
    0, 594, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 604, 0, 605, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611,
    0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 616, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0,
    619, 0, 620, 0, 621, 0, 622, 0, 0, 623, 0, 624, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629,
    0, 630, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 638,
    0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0, 0, 0, 0, 647, 0, 648, 0, 0, 649,
    0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 653, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 656, 0, 0, 657, 658, 0, 0, 659,
    0, 0, 0, 0, 660, 661, 0, 0, 662, 0, 663, 0, 664, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 668, 0, 669,
    0, 670, 0, 671, 0, 0, 672, 0, 673, 0, 0, 674, 0, 0, 675, 0, 676, 0, 677, 0, 678, 679, 0, 680, 0, 681, 0, 0, 682, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 683, 0, 684, 0, 685, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 688, 689, 0, 0, 0, 0, 0, 690, 0,
    0, 691, 692, 0, 693, 694, 0, 0, 695, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 699, 0, 700, 0, 0, 0,
    701, 0, 702, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 707, 0, 0, 0, 708, 0, 709, 0, 0, 710, 0, 0, 0, 0,
    711, 0, 0, 712, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 715, 716, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0,
    719, 0, 0, 720, 721, 0, 0, 0, 722, 0, 0, 0, 723, 724, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0,
    0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 741, 0, 0, 742, 0, 0, 0, 743,
    0, 0, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 748, 749, 750, 0, 0, 0, 0, 0, 0,
    0, 751, 0, 752, 0, 0, 0, 0, 753, 0, 0, 754, 0, 755, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 759, 760, 0,
    0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 764, 0, 765, 766, 0, 767, 0, 0, 0, 0,
    768, 0, 769, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 772, 0, 0, 773, 0, 0, 774, 775, 0, 0, 0, 776, 0, 0, 0, 0, 777,
    778, 779, 0, 0, 0, 780, 0, 0, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 785, 0, 0,
    0, 0, 0, 786, 787, 0, 788, 789, 0, 0, 790, 791, 0, 0, 0, 792, 793, 0, 0, 794, 795, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0,
    0, 804, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0, 808, 0, 809, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 0,
    812, 813, 0, 0, 0, 0, 0, 814, 0, 815, 0, 816, 0, 817, 0, 818, 0, 819, 0, 820, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0,
    822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 824,
    0, 825, 0, 0, 0, 826, 0, 827, 0, 0, 828, 0, 829, 0, 0, 830, 0, 0, 0, 831, 0, 832, 0, 833, 0, 0, 0, 0, 0, 834, 0, 0,
    0, 0, 0, 0, 0, 0, 835, 0, 836, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 840, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0,
    842, 0, 843, 0, 0, 844, 0, 845, 846, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 0, 0, 850, 0, 0, 851,
    0, 0, 852, 0, 853, 854, 0, 855, 0, 856, 0, 857, 0, 0, 0, 858, 0, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 862, 863, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 0, 0, 0, 0,
    866, 0, 867, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 869, 0, 0, 0, 0, 870, 0, 0, 0, 871, 872, 0, 873, 0, 874, 0, 875, 0, 876,
    0, 0, 0, 0, 0, 0, 877, 0, 878, 0, 879, 0, 0, 0, 880, 0, 881, 0, 882, 0, 883, 0, 884, 0, 0, 0, 0, 885, 0, 886, 0, 0,
    0, 0, 0, 887, 0, 888, 0, 0, 0, 889, 0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 892, 0, 0, 0, 893, 0, 894, 0, 895, 0, 0, 0, 0,
    896, 0, 897, 0, 898, 0, 0, 0, 899, 0, 0, 900, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 0, 0, 0, 903, 0, 0, 0,
    904, 905, 0, 0, 906, 0, 0, 907, 0, 908, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 909, 0, 910,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 911, 0, 912, 0, 913, 0, 0, 0, 0, 914, 0, 915,
    0, 0, 0, 0, 0, 0, 0, 0, 916, 0, 917, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 920, 0, 921,
};
void recomp_unit_0037_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08898000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0037[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08898000;
    case 2u: goto L_08898018;
    case 3u: goto L_08898028;
    case 4u: goto L_0889802C;
    case 5u: goto L_08898034;
    case 6u: goto L_0889803C;
    case 7u: goto L_08898048;
    case 8u: goto L_08898060;
    case 9u: goto L_08898074;
    case 10u: goto L_0889807C;
    case 11u: goto L_08898088;
    case 12u: goto L_0889809C;
    case 13u: goto L_088980A4;
    case 14u: goto L_088980AC;
    case 15u: goto L_088980C4;
    case 16u: goto L_088980F0;
    case 17u: goto L_08898104;
    case 18u: goto L_08898110;
    case 19u: goto L_0889811C;
    case 20u: goto L_08898124;
    case 21u: goto L_0889812C;
    case 22u: goto L_08898148;
    case 23u: goto L_0889815C;
    case 24u: goto L_08898170;
    case 25u: goto L_0889817C;
    case 26u: goto L_08898190;
    case 27u: goto L_08898194;
    case 28u: goto L_088981A8;
    case 29u: goto L_088981B0;
    case 30u: goto L_088981C8;
    case 31u: goto L_088981D4;
    case 32u: goto L_088981E8;
    case 33u: goto L_08898204;
    case 34u: goto L_0889820C;
    case 35u: goto L_08898214;
    case 36u: goto L_0889821C;
    case 37u: goto L_08898224;
    case 38u: goto L_08898230;
    case 39u: goto L_08898238;
    case 40u: goto L_08898248;
    case 41u: goto L_0889824C;
    case 42u: goto L_0889825C;
    case 43u: goto L_08898274;
    case 44u: goto L_08898280;
    case 45u: goto L_08898288;
    case 46u: goto L_08898294;
    case 47u: goto L_088982A4;
    case 48u: goto L_088982AC;
    case 49u: goto L_088982B8;
    case 50u: goto L_088982C0;
    case 51u: goto L_088982D0;
    case 52u: goto L_088982D8;
    case 53u: goto L_088982E0;
    case 54u: goto L_088982E8;
    case 55u: goto L_088982EC;
    case 56u: goto L_088982F4;
    case 57u: goto L_08898300;
    case 58u: goto L_0889830C;
    case 59u: goto L_08898314;
    case 60u: goto L_0889831C;
    case 61u: goto L_0889832C;
    case 62u: goto L_0889833C;
    case 63u: goto L_08898348;
    case 64u: goto L_08898358;
    case 65u: goto L_08898368;
    case 66u: goto L_08898378;
    case 67u: goto L_08898388;
    case 68u: goto L_08898398;
    case 69u: goto L_088983C4;
    case 70u: goto L_088983CC;
    case 71u: goto L_088983D8;
    case 72u: goto L_0889845C;
    case 73u: goto L_08898468;
    case 74u: goto L_08898474;
    case 75u: goto L_08898480;
    case 76u: goto L_08898494;
    case 77u: goto L_088984A4;
    case 78u: goto L_088984AC;
    case 79u: goto L_088984C8;
    case 80u: goto L_088984DC;
    case 81u: goto L_088984E8;
    case 82u: goto L_088984FC;
    case 83u: goto L_08898500;
    case 84u: goto L_0889850C;
    case 85u: goto L_08898514;
    case 86u: goto L_08898520;
    case 87u: goto L_08898528;
    case 88u: goto L_088985A0;
    case 89u: goto L_088985C4;
    case 90u: goto L_088985D0;
    case 91u: goto L_088985E0;
    case 92u: goto L_088985E8;
    case 93u: goto L_088985F4;
    case 94u: goto L_088985FC;
    case 95u: goto L_0889860C;
    case 96u: goto L_08898614;
    case 97u: goto L_08898644;
    case 98u: goto L_08898648;
    case 99u: goto L_08898650;
    case 100u: goto L_08898658;
    case 101u: goto L_08898664;
    case 102u: goto L_08898688;
    case 103u: goto L_08898690;
    case 104u: goto L_08898698;
    case 105u: goto L_088986A8;
    case 106u: goto L_088986B4;
    case 107u: goto L_088986B8;
    case 108u: goto L_088986C0;
    case 109u: goto L_088986C4;
    case 110u: goto L_088986CC;
    case 111u: goto L_088986D0;
    case 112u: goto L_088986D8;
    case 113u: goto L_088986DC;
    case 114u: goto L_088986E4;
    case 115u: goto L_088986E8;
    case 116u: goto L_088986F4;
    case 117u: goto L_088986F8;
    case 118u: goto L_08898704;
    case 119u: goto L_08898714;
    case 120u: goto L_0889871C;
    case 121u: goto L_08898720;
    case 122u: goto L_08898724;
    case 123u: goto L_08898744;
    case 124u: goto L_08898774;
    case 125u: goto L_0889877C;
    case 126u: goto L_08898780;
    case 127u: goto L_088987B4;
    case 128u: goto L_088987BC;
    case 129u: goto L_088987C0;
    case 130u: goto L_088987CC;
    case 131u: goto L_088987DC;
    case 132u: goto L_088987E4;
    case 133u: goto L_088987F4;
    case 134u: goto L_0889880C;
    case 135u: goto L_08898810;
    case 136u: goto L_0889881C;
    case 137u: goto L_08898828;
    case 138u: goto L_0889882C;
    case 139u: goto L_08898834;
    case 140u: goto L_08898870;
    case 141u: goto L_08898878;
    case 142u: goto L_08898884;
    case 143u: goto L_0889888C;
    case 144u: goto L_08898894;
    case 145u: goto L_088988A0;
    case 146u: goto L_088988A8;
    case 147u: goto L_088988BC;
    case 148u: goto L_088988C0;
    case 149u: goto L_088988CC;
    case 150u: goto L_088988D4;
    case 151u: goto L_088988DC;
    case 152u: goto L_088988E8;
    case 153u: goto L_088988F0;
    case 154u: goto L_088988FC;
    case 155u: goto L_08898918;
    case 156u: goto L_08898924;
    case 157u: goto L_0889892C;
    case 158u: goto L_08898938;
    case 159u: goto L_08898948;
    case 160u: goto L_08898954;
    case 161u: goto L_0889895C;
    case 162u: goto L_08898968;
    case 163u: goto L_08898970;
    case 164u: goto L_0889897C;
    case 165u: goto L_08898984;
    case 166u: goto L_08898990;
    case 167u: goto L_08898998;
    case 168u: goto L_088989A0;
    case 169u: goto L_088989A8;
    case 170u: goto L_088989B0;
    case 171u: goto L_088989B8;
    case 172u: goto L_088989C0;
    case 173u: goto L_088989C8;
    case 174u: goto L_088989D4;
    case 175u: goto L_08898A08;
    case 176u: goto L_08898A18;
    case 177u: goto L_08898A1C;
    case 178u: goto L_08898A48;
    case 179u: goto L_08898A4C;
    case 180u: goto L_08898A58;
    case 181u: goto L_08898A64;
    case 182u: goto L_08898A6C;
    case 183u: goto L_08898A74;
    case 184u: goto L_08898A7C;
    case 185u: goto L_08898A94;
    case 186u: goto L_08898AA0;
    case 187u: goto L_08898AA4;
    case 188u: goto L_08898AAC;
    case 189u: goto L_08898AB0;
    case 190u: goto L_08898AB4;
    case 191u: goto L_08898ABC;
    case 192u: goto L_08898AC8;
    case 193u: goto L_08898AD4;
    case 194u: goto L_08898ADC;
    case 195u: goto L_08898AE4;
    case 196u: goto L_08898AEC;
    case 197u: goto L_08898AF4;
    case 198u: goto L_08898AFC;
    case 199u: goto L_08898B24;
    case 200u: goto L_08898B2C;
    case 201u: goto L_08898B34;
    case 202u: goto L_08898B40;
    case 203u: goto L_08898B48;
    case 204u: goto L_08898B50;
    case 205u: goto L_08898B58;
    case 206u: goto L_08898B60;
    case 207u: goto L_08898B68;
    case 208u: goto L_08898B70;
    case 209u: goto L_08898B98;
    case 210u: goto L_08898BA0;
    case 211u: goto L_08898BA8;
    case 212u: goto L_08898BB4;
    case 213u: goto L_08898BB8;
    case 214u: goto L_08898BC0;
    case 215u: goto L_08898BCC;
    case 216u: goto L_08898BD4;
    case 217u: goto L_08898BEC;
    case 218u: goto L_08898BF8;
    case 219u: goto L_08898C00;
    case 220u: goto L_08898C0C;
    case 221u: goto L_08898C14;
    case 222u: goto L_08898C20;
    case 223u: goto L_08898C24;
    case 224u: goto L_08898C30;
    case 225u: goto L_08898C50;
    case 226u: goto L_08898C58;
    case 227u: goto L_08898C5C;
    case 228u: goto L_08898C64;
    case 229u: goto L_08898C70;
    case 230u: goto L_08898C80;
    case 231u: goto L_08898C88;
    case 232u: goto L_08898C90;
    case 233u: goto L_08898CB4;
    case 234u: goto L_08898CBC;
    case 235u: goto L_08898CC4;
    case 236u: goto L_08898CD0;
    case 237u: goto L_08898CE0;
    case 238u: goto L_08898CE8;
    case 239u: goto L_08898CF0;
    case 240u: goto L_08898CF8;
    case 241u: goto L_08898D00;
    case 242u: goto L_08898D08;
    case 243u: goto L_08898D10;
    case 244u: goto L_08898D30;
    case 245u: goto L_08898D3C;
    case 246u: goto L_08898D90;
    case 247u: goto L_08898DA0;
    case 248u: goto L_08898DC0;
    case 249u: goto L_08898DDC;
    case 250u: goto L_08898DE4;
    case 251u: goto L_08898DF0;
    case 252u: goto L_08898DF8;
    case 253u: goto L_08898E10;
    case 254u: goto L_08898E2C;
    case 255u: goto L_08898E34;
    case 256u: goto L_08898E38;
    case 257u: goto L_08898E40;
    case 258u: goto L_0889909C;
    case 259u: goto L_088990D4;
    case 260u: goto L_088990DC;
    case 261u: goto L_088990F8;
    case 262u: goto L_08899104;
    case 263u: goto L_08899108;
    case 264u: goto L_08899110;
    case 265u: goto L_08899114;
    case 266u: goto L_08899118;
    case 267u: goto L_08899120;
    case 268u: goto L_08899128;
    case 269u: goto L_08899154;
    case 270u: goto L_08899160;
    case 271u: goto L_08899168;
    case 272u: goto L_08899170;
    case 273u: goto L_08899178;
    case 274u: goto L_08899180;
    case 275u: goto L_08899188;
    case 276u: goto L_088991B0;
    case 277u: goto L_088991B8;
    case 278u: goto L_088991C0;
    case 279u: goto L_088991C8;
    case 280u: goto L_088991D0;
    case 281u: goto L_088991D8;
    case 282u: goto L_088991E0;
    case 283u: goto L_088991E8;
    case 284u: goto L_088991F0;
    case 285u: goto L_088991F8;
    case 286u: goto L_08899220;
    case 287u: goto L_08899228;
    case 288u: goto L_08899230;
    case 289u: goto L_08899238;
    case 290u: goto L_0889924C;
    case 291u: goto L_0889926C;
    case 292u: goto L_08899274;
    case 293u: goto L_0889928C;
    case 294u: goto L_08899290;
    case 295u: goto L_088992A4;
    case 296u: goto L_088992AC;
    case 297u: goto L_088992C0;
    case 298u: goto L_088992CC;
    case 299u: goto L_088992E0;
    case 300u: goto L_088992E8;
    case 301u: goto L_088992F0;
    case 302u: goto L_088992FC;
    case 303u: goto L_08899304;
    case 304u: goto L_08899314;
    case 305u: goto L_088993DC;
    case 306u: goto L_088993F0;
    case 307u: goto L_08899400;
    case 308u: goto L_08899404;
    case 309u: goto L_0889940C;
    case 310u: goto L_08899410;
    case 311u: goto L_08899420;
    case 312u: goto L_08899430;
    case 313u: goto L_08899438;
    case 314u: goto L_08899444;
    case 315u: goto L_0889944C;
    case 316u: goto L_08899454;
    case 317u: goto L_0889945C;
    case 318u: goto L_08899464;
    case 319u: goto L_08899474;
    case 320u: goto L_0889947C;
    case 321u: goto L_08899484;
    case 322u: goto L_088994A4;
    case 323u: goto L_088994B4;
    case 324u: goto L_088994BC;
    case 325u: goto L_088994C8;
    case 326u: goto L_088994D0;
    case 327u: goto L_088994D8;
    case 328u: goto L_088994E0;
    case 329u: goto L_088994E8;
    case 330u: goto L_088994F4;
    case 331u: goto L_088994FC;
    case 332u: goto L_08899510;
    case 333u: goto L_08899514;
    case 334u: goto L_08899520;
    case 335u: goto L_08899528;
    case 336u: goto L_08899530;
    case 337u: goto L_08899544;
    case 338u: goto L_08899548;
    case 339u: goto L_08899554;
    case 340u: goto L_0889955C;
    case 341u: goto L_08899564;
    case 342u: goto L_0889956C;
    case 343u: goto L_08899584;
    case 344u: goto L_08899594;
    case 345u: goto L_088995A4;
    case 346u: goto L_088995B0;
    case 347u: goto L_088995B8;
    case 348u: goto L_088995E4;
    case 349u: goto L_08899614;
    case 350u: goto L_0889961C;
    case 351u: goto L_08899630;
    case 352u: goto L_08899638;
    case 353u: goto L_08899648;
    case 354u: goto L_08899650;
    case 355u: goto L_0889965C;
    case 356u: goto L_0889966C;
    case 357u: goto L_08899670;
    case 358u: goto L_08899690;
    case 359u: goto L_088996D4;
    case 360u: goto L_088996D8;
    case 361u: goto L_088996E8;
    case 362u: goto L_088996F4;
    case 363u: goto L_08899704;
    case 364u: goto L_08899708;
    case 365u: goto L_08899710;
    case 366u: goto L_0889971C;
    case 367u: goto L_08899724;
    case 368u: goto L_08899728;
    case 369u: goto L_08899754;
    case 370u: goto L_0889977C;
    case 371u: goto L_088997A0;
    case 372u: goto L_088997A8;
    case 373u: goto L_088997B4;
    case 374u: goto L_088997BC;
    case 375u: goto L_088997C8;
    case 376u: goto L_088997DC;
    case 377u: goto L_088997EC;
    case 378u: goto L_088997F4;
    case 379u: goto L_08899808;
    case 380u: goto L_08899810;
    case 381u: goto L_0889981C;
    case 382u: goto L_08899824;
    case 383u: goto L_08899840;
    case 384u: goto L_08899850;
    case 385u: goto L_0889986C;
    case 386u: goto L_08899874;
    case 387u: goto L_0889987C;
    case 388u: goto L_08899890;
    case 389u: goto L_088998AC;
    case 390u: goto L_088998FC;
    case 391u: goto L_0889990C;
    case 392u: goto L_08899914;
    case 393u: goto L_0889991C;
    case 394u: goto L_08899928;
    case 395u: goto L_08899930;
    case 396u: goto L_08899938;
    case 397u: goto L_08899940;
    case 398u: goto L_08899944;
    case 399u: goto L_08899970;
    case 400u: goto L_0889997C;
    case 401u: goto L_0889998C;
    case 402u: goto L_08899998;
    case 403u: goto L_088999A8;
    case 404u: goto L_088999B4;
    case 405u: goto L_088999C8;
    case 406u: goto L_088999D4;
    case 407u: goto L_088999E8;
    case 408u: goto L_088999EC;
    case 409u: goto L_088999F8;
    case 410u: goto L_08899A04;
    case 411u: goto L_08899A0C;
    case 412u: goto L_08899A14;
    case 413u: goto L_08899A1C;
    case 414u: goto L_08899A34;
    case 415u: goto L_08899A40;
    case 416u: goto L_08899A48;
    case 417u: goto L_08899A50;
    case 418u: goto L_08899A64;
    case 419u: goto L_08899A70;
    case 420u: goto L_08899A7C;
    case 421u: goto L_08899A84;
    case 422u: goto L_08899A8C;
    case 423u: goto L_08899A94;
    case 424u: goto L_08899A9C;
    case 425u: goto L_08899AAC;
    case 426u: goto L_08899AB8;
    case 427u: goto L_08899AC0;
    case 428u: goto L_08899ACC;
    case 429u: goto L_08899AD4;
    case 430u: goto L_08899ADC;
    case 431u: goto L_08899BF0;
    case 432u: goto L_08899C20;
    case 433u: goto L_08899C24;
    case 434u: goto L_08899C2C;
    case 435u: goto L_08899C34;
    case 436u: goto L_08899C3C;
    case 437u: goto L_08899C68;
    case 438u: goto L_08899C6C;
    case 439u: goto L_08899C7C;
    case 440u: goto L_08899C84;
    case 441u: goto L_08899C98;
    case 442u: goto L_08899CE8;
    case 443u: goto L_08899CF4;
    case 444u: goto L_08899D04;
    case 445u: goto L_08899D24;
    case 446u: goto L_08899D2C;
    case 447u: goto L_08899D30;
    case 448u: goto L_08899D4C;
    case 449u: goto L_08899D54;
    case 450u: goto L_08899D58;
    case 451u: goto L_08899D60;
    case 452u: goto L_08899D7C;
    case 453u: goto L_08899D80;
    case 454u: goto L_08899D8C;
    case 455u: goto L_08899D9C;
    case 456u: goto L_08899DAC;
    case 457u: goto L_08899DC4;
    case 458u: goto L_08899DD8;
    case 459u: goto L_08899DE8;
    case 460u: goto L_08899DF8;
    case 461u: goto L_08899DFC;
    case 462u: goto L_08899E30;
    case 463u: goto L_08899E3C;
    case 464u: goto L_08899E84;
    case 465u: goto L_08899E98;
    case 466u: goto L_08899EA4;
    case 467u: goto L_08899ED0;
    case 468u: goto L_08899EE0;
    case 469u: goto L_08899EE4;
    case 470u: goto L_08899EF0;
    case 471u: goto L_08899F00;
    case 472u: goto L_08899F0C;
    case 473u: goto L_08899F18;
    case 474u: goto L_08899F4C;
    case 475u: goto L_08899F5C;
    case 476u: goto L_08899F78;
    case 477u: goto L_08899F8C;
    case 478u: goto L_08899FA8;
    case 479u: goto L_08899FB0;
    case 480u: goto L_08899FB4;
    case 481u: goto L_08899FD0;
    case 482u: goto L_08899FD8;
    case 483u: goto L_08899FF0;
    case 484u: goto L_08899FF8;
    case 485u: goto L_0889A03C;
    case 486u: goto L_0889A048;
    case 487u: goto L_0889A064;
    case 488u: goto L_0889A068;
    case 489u: goto L_0889A07C;
    case 490u: goto L_0889A088;
    case 491u: goto L_0889A090;
    case 492u: goto L_0889A098;
    case 493u: goto L_0889A09C;
    case 494u: goto L_0889A0C4;
    case 495u: goto L_0889A0D0;
    case 496u: goto L_0889A0D4;
    case 497u: goto L_0889A104;
    case 498u: goto L_0889A110;
    case 499u: goto L_0889A118;
    case 500u: goto L_0889A120;
    case 501u: goto L_0889A130;
    case 502u: goto L_0889A138;
    case 503u: goto L_0889A13C;
    case 504u: goto L_0889A16C;
    case 505u: goto L_0889A174;
    case 506u: goto L_0889A180;
    case 507u: goto L_0889A18C;
    case 508u: goto L_0889A194;
    case 509u: goto L_0889A19C;
    case 510u: goto L_0889A1A4;
    case 511u: goto L_0889A1B0;
    case 512u: goto L_0889A1BC;
    case 513u: goto L_0889A1C4;
    case 514u: goto L_0889A1CC;
    case 515u: goto L_0889A1D4;
    case 516u: goto L_0889A1E0;
    case 517u: goto L_0889A1EC;
    case 518u: goto L_0889A1F4;
    case 519u: goto L_0889A1FC;
    case 520u: goto L_0889A204;
    case 521u: goto L_0889A20C;
    case 522u: goto L_0889A250;
    case 523u: goto L_0889A254;
    case 524u: goto L_0889A284;
    case 525u: goto L_0889A290;
    case 526u: goto L_0889A298;
    case 527u: goto L_0889A29C;
    case 528u: goto L_0889A2A8;
    case 529u: goto L_0889A2B4;
    case 530u: goto L_0889A2E4;
    case 531u: goto L_0889A2EC;
    case 532u: goto L_0889A2F8;
    case 533u: goto L_0889A30C;
    case 534u: goto L_0889A314;
    case 535u: goto L_0889A324;
    case 536u: goto L_0889A330;
    case 537u: goto L_0889A33C;
    case 538u: goto L_0889A344;
    case 539u: goto L_0889A350;
    case 540u: goto L_0889A358;
    case 541u: goto L_0889A364;
    case 542u: goto L_0889A36C;
    case 543u: goto L_0889A380;
    case 544u: goto L_0889A388;
    case 545u: goto L_0889A390;
    case 546u: goto L_0889A394;
    case 547u: goto L_0889A3A8;
    case 548u: goto L_0889A3B0;
    case 549u: goto L_0889A3B8;
    case 550u: goto L_0889A3C0;
    case 551u: goto L_0889A3CC;
    case 552u: goto L_0889A3D4;
    case 553u: goto L_0889A3DC;
    case 554u: goto L_0889A3EC;
    case 555u: goto L_0889A3F4;
    case 556u: goto L_0889A3FC;
    case 557u: goto L_0889A42C;
    case 558u: goto L_0889A454;
    case 559u: goto L_0889A464;
    case 560u: goto L_0889A470;
    case 561u: goto L_0889A474;
    case 562u: goto L_0889A47C;
    case 563u: goto L_0889A480;
    case 564u: goto L_0889A488;
    case 565u: goto L_0889A48C;
    case 566u: goto L_0889A494;
    case 567u: goto L_0889A498;
    case 568u: goto L_0889A4A0;
    case 569u: goto L_0889A4A4;
    case 570u: goto L_0889A4AC;
    case 571u: goto L_0889A4B0;
    case 572u: goto L_0889A4B8;
    case 573u: goto L_0889A4BC;
    case 574u: goto L_0889A4C4;
    case 575u: goto L_0889A4CC;
    case 576u: goto L_0889A4D4;
    case 577u: goto L_0889A4E4;
    case 578u: goto L_0889A4EC;
    case 579u: goto L_0889A4FC;
    case 580u: goto L_0889A504;
    case 581u: goto L_0889A50C;
    case 582u: goto L_0889A514;
    case 583u: goto L_0889A51C;
    case 584u: goto L_0889A524;
    case 585u: goto L_0889A52C;
    case 586u: goto L_0889A534;
    case 587u: goto L_0889A54C;
    case 588u: goto L_0889A554;
    case 589u: goto L_0889A55C;
    case 590u: goto L_0889A564;
    case 591u: goto L_0889A56C;
    case 592u: goto L_0889A574;
    case 593u: goto L_0889A57C;
    case 594u: goto L_0889A584;
    case 595u: goto L_0889A58C;
    case 596u: goto L_0889A594;
    case 597u: goto L_0889A59C;
    case 598u: goto L_0889A5A4;
    case 599u: goto L_0889A5AC;
    case 600u: goto L_0889A5B4;
    case 601u: goto L_0889A5BC;
    case 602u: goto L_0889A5C4;
    case 603u: goto L_0889A5CC;
    case 604u: goto L_0889A604;
    case 605u: goto L_0889A60C;
    case 606u: goto L_0889A614;
    case 607u: goto L_0889A628;
    case 608u: goto L_0889A640;
    case 609u: goto L_0889A654;
    case 610u: goto L_0889A668;
    case 611u: goto L_0889A67C;
    case 612u: goto L_0889A690;
    case 613u: goto L_0889A6A4;
    case 614u: goto L_0889A6B8;
    case 615u: goto L_0889A6CC;
    case 616u: goto L_0889A6D4;
    case 617u: goto L_0889A6DC;
    case 618u: goto L_0889A6E4;
    case 619u: goto L_0889A700;
    case 620u: goto L_0889A708;
    case 621u: goto L_0889A710;
    case 622u: goto L_0889A718;
    case 623u: goto L_0889A724;
    case 624u: goto L_0889A72C;
    case 625u: goto L_0889A738;
    case 626u: goto L_0889A748;
    case 627u: goto L_0889A754;
    case 628u: goto L_0889A764;
    case 629u: goto L_0889A77C;
    case 630u: goto L_0889A784;
    case 631u: goto L_0889A788;
    case 632u: goto L_0889A798;
    case 633u: goto L_0889A7C4;
    case 634u: goto L_0889A7CC;
    case 635u: goto L_0889A7D8;
    case 636u: goto L_0889A7E0;
    case 637u: goto L_0889A7F4;
    case 638u: goto L_0889A7FC;
    case 639u: goto L_0889A808;
    case 640u: goto L_0889A810;
    case 641u: goto L_0889A828;
    case 642u: goto L_0889A830;
    case 643u: goto L_0889A838;
    case 644u: goto L_0889A840;
    case 645u: goto L_0889A848;
    case 646u: goto L_0889A850;
    case 647u: goto L_0889A868;
    case 648u: goto L_0889A870;
    case 649u: goto L_0889A87C;
    case 650u: goto L_0889A884;
    case 651u: goto L_0889A8A4;
    case 652u: goto L_0889A8AC;
    case 653u: goto L_0889A8B0;
    case 654u: goto L_0889A8CC;
    case 655u: goto L_0889A8D4;
    case 656u: goto L_0889A8E0;
    case 657u: goto L_0889A8EC;
    case 658u: goto L_0889A8F0;
    case 659u: goto L_0889A8FC;
    case 660u: goto L_0889A910;
    case 661u: goto L_0889A914;
    case 662u: goto L_0889A920;
    case 663u: goto L_0889A928;
    case 664u: goto L_0889A930;
    case 665u: goto L_0889A934;
    case 666u: goto L_0889A964;
    case 667u: goto L_0889A96C;
    case 668u: goto L_0889A974;
    case 669u: goto L_0889A97C;
    case 670u: goto L_0889A984;
    case 671u: goto L_0889A98C;
    case 672u: goto L_0889A998;
    case 673u: goto L_0889A9A0;
    case 674u: goto L_0889A9AC;
    case 675u: goto L_0889A9B8;
    case 676u: goto L_0889A9C0;
    case 677u: goto L_0889A9C8;
    case 678u: goto L_0889A9D0;
    case 679u: goto L_0889A9D4;
    case 680u: goto L_0889A9DC;
    case 681u: goto L_0889A9E4;
    case 682u: goto L_0889A9F0;
    case 683u: goto L_0889AA1C;
    case 684u: goto L_0889AA24;
    case 685u: goto L_0889AA2C;
    case 686u: goto L_0889AA38;
    case 687u: goto L_0889AA48;
    case 688u: goto L_0889AA5C;
    case 689u: goto L_0889AA60;
    case 690u: goto L_0889AA78;
    case 691u: goto L_0889AA84;
    case 692u: goto L_0889AA88;
    case 693u: goto L_0889AA90;
    case 694u: goto L_0889AA94;
    case 695u: goto L_0889AAA0;
    case 696u: goto L_0889AAB0;
    case 697u: goto L_0889AAB8;
    case 698u: goto L_0889AAE0;
    case 699u: goto L_0889AAE8;
    case 700u: goto L_0889AAF0;
    case 701u: goto L_0889AB00;
    case 702u: goto L_0889AB08;
    case 703u: goto L_0889AB10;
    case 704u: goto L_0889AB18;
    case 705u: goto L_0889AB34;
    case 706u: goto L_0889AB3C;
    case 707u: goto L_0889AB48;
    case 708u: goto L_0889AB58;
    case 709u: goto L_0889AB60;
    case 710u: goto L_0889AB6C;
    case 711u: goto L_0889AB80;
    case 712u: goto L_0889AB8C;
    case 713u: goto L_0889AB94;
    case 714u: goto L_0889ABA8;
    case 715u: goto L_0889ABB8;
    case 716u: goto L_0889ABBC;
    case 717u: goto L_0889ABC4;
    case 718u: goto L_0889ABDC;
    case 719u: goto L_0889AC00;
    case 720u: goto L_0889AC0C;
    case 721u: goto L_0889AC10;
    case 722u: goto L_0889AC20;
    case 723u: goto L_0889AC30;
    case 724u: goto L_0889AC34;
    case 725u: goto L_0889AC50;
    case 726u: goto L_0889ACB0;
    case 727u: goto L_0889ADA4;
    case 728u: goto L_0889ADC4;
    case 729u: goto L_0889ADCC;
    case 730u: goto L_0889ADF0;
    case 731u: goto L_0889AE18;
    case 732u: goto L_0889AE2C;
    case 733u: goto L_0889AE38;
    case 734u: goto L_0889AE64;
    case 735u: goto L_0889AE84;
    case 736u: goto L_0889AEA0;
    case 737u: goto L_0889AEE0;
    case 738u: goto L_0889AEF0;
    case 739u: goto L_0889AFAC;
    case 740u: goto L_0889AFD8;
    case 741u: goto L_0889AFE0;
    case 742u: goto L_0889AFEC;
    case 743u: goto L_0889AFFC;
    case 744u: goto L_0889B010;
    case 745u: goto L_0889B024;
    case 746u: goto L_0889B03C;
    case 747u: goto L_0889B048;
    case 748u: goto L_0889B05C;
    case 749u: goto L_0889B060;
    case 750u: goto L_0889B064;
    case 751u: goto L_0889B084;
    case 752u: goto L_0889B08C;
    case 753u: goto L_0889B0A0;
    case 754u: goto L_0889B0AC;
    case 755u: goto L_0889B0B4;
    case 756u: goto L_0889B0B8;
    case 757u: goto L_0889B0D0;
    case 758u: goto L_0889B0EC;
    case 759u: goto L_0889B0F4;
    case 760u: goto L_0889B0F8;
    case 761u: goto L_0889B110;
    case 762u: goto L_0889B128;
    case 763u: goto L_0889B140;
    case 764u: goto L_0889B158;
    case 765u: goto L_0889B160;
    case 766u: goto L_0889B164;
    case 767u: goto L_0889B16C;
    case 768u: goto L_0889B180;
    case 769u: goto L_0889B188;
    case 770u: goto L_0889B1A4;
    case 771u: goto L_0889B1AC;
    case 772u: goto L_0889B1BC;
    case 773u: goto L_0889B1C8;
    case 774u: goto L_0889B1D4;
    case 775u: goto L_0889B1D8;
    case 776u: goto L_0889B1E8;
    case 777u: goto L_0889B1FC;
    case 778u: goto L_0889B200;
    case 779u: goto L_0889B204;
    case 780u: goto L_0889B214;
    case 781u: goto L_0889B22C;
    case 782u: goto L_0889B23C;
    case 783u: goto L_0889B2A0;
    case 784u: goto L_0889B2EC;
    case 785u: goto L_0889B2F4;
    case 786u: goto L_0889B30C;
    case 787u: goto L_0889B310;
    case 788u: goto L_0889B318;
    case 789u: goto L_0889B31C;
    case 790u: goto L_0889B328;
    case 791u: goto L_0889B32C;
    case 792u: goto L_0889B33C;
    case 793u: goto L_0889B340;
    case 794u: goto L_0889B34C;
    case 795u: goto L_0889B350;
    case 796u: goto L_0889B358;
    case 797u: goto L_0889B384;
    case 798u: goto L_0889B3A0;
    case 799u: goto L_0889B3B0;
    case 800u: goto L_0889B3C0;
    case 801u: goto L_0889B3C8;
    case 802u: goto L_0889B3E4;
    case 803u: goto L_0889B3F4;
    case 804u: goto L_0889B404;
    case 805u: goto L_0889B40C;
    case 806u: goto L_0889B428;
    case 807u: goto L_0889B438;
    case 808u: goto L_0889B448;
    case 809u: goto L_0889B450;
    case 810u: goto L_0889B458;
    case 811u: goto L_0889B460;
    case 812u: goto L_0889B480;
    case 813u: goto L_0889B484;
    case 814u: goto L_0889B49C;
    case 815u: goto L_0889B4A4;
    case 816u: goto L_0889B4AC;
    case 817u: goto L_0889B4B4;
    case 818u: goto L_0889B4BC;
    case 819u: goto L_0889B4C4;
    case 820u: goto L_0889B4CC;
    case 821u: goto L_0889B4EC;
    case 822u: goto L_0889B500;
    case 823u: goto L_0889B560;
    case 824u: goto L_0889B57C;
    case 825u: goto L_0889B584;
    case 826u: goto L_0889B594;
    case 827u: goto L_0889B59C;
    case 828u: goto L_0889B5A8;
    case 829u: goto L_0889B5B0;
    case 830u: goto L_0889B5BC;
    case 831u: goto L_0889B5CC;
    case 832u: goto L_0889B5D4;
    case 833u: goto L_0889B5DC;
    case 834u: goto L_0889B5F4;
    case 835u: goto L_0889B618;
    case 836u: goto L_0889B620;
    case 837u: goto L_0889B62C;
    case 838u: goto L_0889B63C;
    case 839u: goto L_0889B64C;
    case 840u: goto L_0889B654;
    case 841u: goto L_0889B670;
    case 842u: goto L_0889B680;
    case 843u: goto L_0889B688;
    case 844u: goto L_0889B694;
    case 845u: goto L_0889B69C;
    case 846u: goto L_0889B6A0;
    case 847u: goto L_0889B72C;
    case 848u: goto L_0889B748;
    case 849u: goto L_0889B758;
    case 850u: goto L_0889B770;
    case 851u: goto L_0889B77C;
    case 852u: goto L_0889B788;
    case 853u: goto L_0889B790;
    case 854u: goto L_0889B794;
    case 855u: goto L_0889B79C;
    case 856u: goto L_0889B7A4;
    case 857u: goto L_0889B7AC;
    case 858u: goto L_0889B7BC;
    case 859u: goto L_0889B7C8;
    case 860u: goto L_0889B810;
    case 861u: goto L_0889B834;
    case 862u: goto L_0889B83C;
    case 863u: goto L_0889B840;
    case 864u: goto L_0889B864;
    case 865u: goto L_0889B86C;
    case 866u: goto L_0889B880;
    case 867u: goto L_0889B888;
    case 868u: goto L_0889B8A8;
    case 869u: goto L_0889B8B4;
    case 870u: goto L_0889B8C8;
    case 871u: goto L_0889B8D8;
    case 872u: goto L_0889B8DC;
    case 873u: goto L_0889B8E4;
    case 874u: goto L_0889B8EC;
    case 875u: goto L_0889B8F4;
    case 876u: goto L_0889B8FC;
    case 877u: goto L_0889B918;
    case 878u: goto L_0889B920;
    case 879u: goto L_0889B928;
    case 880u: goto L_0889B938;
    case 881u: goto L_0889B940;
    case 882u: goto L_0889B948;
    case 883u: goto L_0889B950;
    case 884u: goto L_0889B958;
    case 885u: goto L_0889B96C;
    case 886u: goto L_0889B974;
    case 887u: goto L_0889B98C;
    case 888u: goto L_0889B994;
    case 889u: goto L_0889B9A4;
    case 890u: goto L_0889B9B4;
    case 891u: goto L_0889BBC4;
    case 892u: goto L_0889BBCC;
    case 893u: goto L_0889BBDC;
    case 894u: goto L_0889BBE4;
    case 895u: goto L_0889BBEC;
    case 896u: goto L_0889BC00;
    case 897u: goto L_0889BC08;
    case 898u: goto L_0889BC10;
    case 899u: goto L_0889BC20;
    case 900u: goto L_0889BC2C;
    case 901u: goto L_0889BC3C;
    case 902u: goto L_0889BCCC;
    case 903u: goto L_0889BCF0;
    case 904u: goto L_0889BD00;
    case 905u: goto L_0889BD04;
    case 906u: goto L_0889BD10;
    case 907u: goto L_0889BD1C;
    case 908u: goto L_0889BD24;
    case 909u: goto L_0889BE74;
    case 910u: goto L_0889BE7C;
    case 911u: goto L_0889BF50;
    case 912u: goto L_0889BF58;
    case 913u: goto L_0889BF60;
    case 914u: goto L_0889BF74;
    case 915u: goto L_0889BF7C;
    case 916u: goto L_0889BFA0;
    case 917u: goto L_0889BFA8;
    case 918u: goto L_0889BFB0;
    case 919u: goto L_0889BFD8;
    case 920u: goto L_0889BFF0;
    case 921u: goto L_0889BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08898000:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08898048;
      }
      goto L_08898018;
    }
L_08898018:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08898074;
      }
      goto L_08898028;
    }
L_08898028:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_0889802C;
L_0889802C:
    ctx.set_gpr(31, 0x08898034u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.pc = 0x08B0DC84u;
    return;
L_08898034:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08898060;
      }
      goto L_0889803C;
    }
L_0889803C:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    ctx.set_gpr(4, 0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08898060;
      }
      goto L_08898048;
    }
L_08898048:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08898060:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[12]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[11]));
    goto L_08898048;
L_08898074:
    ctx.set_gpr(31, 0x0889807Cu);
    // nop
    ctx.pc = 0x08B0DF84u;
    return;
L_0889807C:
    ctx.set_gpr(5, ctx.gpr[2] & 32u);
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_0889802C;
    }
    goto L_08898088;
L_08898088:
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8084)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[7] == ctx.gpr[6]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_088980A4;
    }
    goto L_0889809C;
L_0889809C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08898048;
L_088980A4:
    ctx.set_gpr(31, 0x088980ACu);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.pc = 0x08B0DC5Cu;
    return;
L_088980AC:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8084), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_0889809C;
L_088980C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(27076));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08898230;
      }
      goto L_088980F0;
    }
L_088980F0:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(8712));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08898104u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08898104u) goto L_08898104;
    return;
L_08898104:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08898110u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    goto L_08899BF0;
L_08898110:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08898148;
      }
      goto L_0889811C;
    }
L_0889811C:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08898124;
L_08898124:
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_0889812C;
L_0889812C:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_08898148:
    ctx.set_gpr(19, 2248u << 16u);
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-32016));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0889815Cu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 802u, 0x08897B6Cu>(ctx, &aot_mem) && ctx.pc == 0x0889815Cu) goto L_0889815C;
    return;
L_0889815C:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4660)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08898170u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.pc = 0x08B0DC74u;
    return;
L_08898170:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(17, ctx.gpr[18] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08898190;
      }
      goto L_0889817C;
    }
L_0889817C:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4664)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    ctx.set_gpr(7, 2227u << 16u);
      if (branch_taken) {
          goto L_088982AC;
      }
      goto L_08898190;
    }
L_08898190:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08898194;
L_08898194:
    ctx.set_gpr(20, 2245u << 16u);
    ctx.set_gpr(18, ctx.gpr[20] + static_cast<std::uint32_t>(8648));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.set_gpr(8, 2225u << 16u);
      if (branch_taken) {
          goto L_08898294;
      }
      goto L_088981A8;
    }
L_088981A8:
    ctx.set_gpr(31, 0x088981B0u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(-32016));
    goto L_088982C0;
L_088981B0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088981C8u);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08899690;
L_088981C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08898248;
      }
      goto L_088981D4;
    }
L_088981D4:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088981E8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08899690;
L_088981E8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08898204u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    goto L_08899690;
L_08898204:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08898288;
      }
      goto L_0889820C;
    }
L_0889820C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.set_gpr(11, 2225u << 16u);
      if (branch_taken) {
          goto L_0889824C;
      }
      goto L_08898214;
    }
L_08898214:
    ctx.set_gpr(31, 0x0889821Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    goto L_088995E4;
L_0889821C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08898124;
    }
    goto L_08898224;
L_08898224:
    ctx.set_gpr(12, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[12] + static_cast<std::uint32_t>(27204));
    ctx.set_gpr(4, 0u + 0u);
    goto L_08898230;
L_08898230:
    ctx.set_gpr(31, 0x08898238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 887u, 0x08897F30u>(ctx, &aot_mem) && ctx.pc == 0x08898238u) goto L_08898238;
    return;
L_08898238:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_0889812C;
L_08898248:
    ctx.set_gpr(11, 2225u << 16u);
    goto L_0889824C;
L_0889824C:
    ctx.set_gpr(4, ctx.gpr[11] + static_cast<std::uint32_t>(27168));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0889825Cu);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 912u, 0x08883BDCu>(ctx, &aot_mem) && ctx.pc == 0x0889825Cu) goto L_0889825C;
    return;
L_0889825C:
    ctx.set_gpr(10, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[10] + static_cast<std::uint32_t>(27248));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08898274u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 892u, 0x08897F68u>(ctx, &aot_mem) && ctx.pc == 0x08898274u) goto L_08898274;
    return;
L_08898274:
    ctx.set_gpr(9, ctx.gpr[20] + static_cast<std::uint32_t>(8648));
    ctx.set_gpr(31, 0x08898280u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(56)));
    goto L_088995E4;
L_08898280:
    // nop
    goto L_08898238;
L_08898288:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    goto L_0889820C;
L_08898294:
    ctx.set_gpr(7, ctx.gpr[19] + static_cast<std::uint32_t>(-32016));
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(27120));
    ctx.set_gpr(31, 0x088982A4u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 892u, 0x08897F68u>(ctx, &aot_mem) && ctx.pc == 0x088982A4u) goto L_088982A4;
    return;
L_088982A4:
    // nop
    goto L_08898238;
L_088982AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4772)));
    ctx.set_gpr(31, 0x088982B8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = 0x08B0DC4Cu;
    return;
L_088982B8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08898194;
L_088982C0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(117));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08898378;
      }
      goto L_088982D0;
    }
L_088982D0:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08898348;
      }
      goto L_088982D8;
    }
L_088982D8:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[11];
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(109));
      if (branch_taken) {
          goto L_0889831C;
      }
      goto L_088982E0;
    }
L_088982E0:
    if (ctx.gpr[3] == ctx.gpr[24]) {
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
        goto L_088982F4;
    }
    goto L_088982E8;
L_088982E8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_088982EC;
L_088982EC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088982F4:
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(115));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[25];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088982EC;
      }
      goto L_08898300;
    }
L_08898300:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    goto L_0889830C;
L_0889830C:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
        goto L_088982EC;
    }
    goto L_08898314;
L_08898314:
    // nop
    goto L_088982EC;
L_0889831C:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(111));
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[12];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088982EC;
      }
      goto L_0889832C;
    }
L_0889832C:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(115));
    { const bool branch_taken = ctx.gpr[15] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_088982EC;
      }
      goto L_0889833C;
    }
L_0889833C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(116));
    goto L_0889830C;
L_08898348:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(105));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088982EC;
      }
      goto L_08898358;
    }
L_08898358:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(115));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_088982EC;
      }
      goto L_08898368;
    }
L_08898368:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(99));
    goto L_0889830C;
L_08898378:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(109));
    if (ctx.gpr[2] != ctx.gpr[5]) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
        goto L_088982EC;
    }
    goto L_08898388;
L_08898388:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(100));
    goto L_0889830C;
L_08898398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(27300));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08898648;
      }
      goto L_088983C4;
    }
L_088983C4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, 2248u << 16u);
      if (branch_taken) {
          goto L_08898658;
      }
      goto L_088983CC;
    }
L_088983CC:
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(-31712));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    goto L_088983D8;
L_088983D8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(128))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(256))))));
    if (ctx.gpr[5] == 0u) ctx.set_gpr(17, ctx.gpr[9]);
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(384))))));
    if (ctx.gpr[7] == 0u) ctx.set_gpr(17, ctx.gpr[4]);
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(512))))));
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(640))))));
    if (ctx.gpr[6] == 0u) ctx.set_gpr(17, ctx.gpr[3]);
    ctx.set_gpr(24, ctx.gpr[9] + static_cast<std::uint32_t>(384));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(768))))));
    ctx.set_gpr(19, ctx.gpr[9] + static_cast<std::uint32_t>(512));
    if (ctx.gpr[25] == 0u) ctx.set_gpr(17, ctx.gpr[24]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(896))))));
    ctx.set_gpr(15, ctx.gpr[9] + static_cast<std::uint32_t>(640));
    if (ctx.gpr[20] == 0u) ctx.set_gpr(17, ctx.gpr[19]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1024))))));
    ctx.set_gpr(13, ctx.gpr[9] + static_cast<std::uint32_t>(768));
    if (ctx.gpr[16] == 0u) ctx.set_gpr(17, ctx.gpr[15]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1152))))));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(896));
    if (ctx.gpr[14] == 0u) ctx.set_gpr(17, ctx.gpr[13]);
    ctx.set_gpr(5, ctx.gpr[9] + static_cast<std::uint32_t>(1024));
    if (ctx.gpr[12] == 0u) ctx.set_gpr(17, ctx.gpr[8]);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(6, ctx.gpr[9] + static_cast<std::uint32_t>(1152));
    if (ctx.gpr[11] == 0u) ctx.set_gpr(17, ctx.gpr[5]);
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[10]) < 40 ? 1u : 0u);
    if (ctx.gpr[7] == 0u) ctx.set_gpr(17, ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1280));
      if (branch_taken) {
          goto L_088983D8;
      }
      goto L_0889845C;
    }
L_0889845C:
    ctx.set_gpr(9, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(5, ctx.gpr[9] + static_cast<std::uint32_t>(27336));
      if (branch_taken) {
          goto L_08898644;
      }
      goto L_08898468;
    }
L_08898468:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08898474u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    goto L_08899BF0;
L_08898474:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(6, 2248u << 16u);
      if (branch_taken) {
          goto L_088985FC;
      }
      goto L_08898480;
    }
L_08898480:
    ctx.set_gpr(20, 2248u << 16u);
    ctx.set_gpr(16, ctx.gpr[20] + static_cast<std::uint32_t>(-32016));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08898494u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 802u, 0x08897B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08898494u) goto L_08898494;
    return;
L_08898494:
    ctx.set_gpr(12, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[12] + static_cast<std::uint32_t>(27384));
    ctx.set_gpr(31, 0x088984A4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 912u, 0x08883BDCu>(ctx, &aot_mem) && ctx.pc == 0x088984A4u) goto L_088984A4;
    return;
L_088984A4:
    ctx.set_gpr(31, 0x088984ACu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_088980C4;
L_088984AC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(11, ctx.gpr[8] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_088985A0;
      }
      goto L_088984C8;
    }
L_088984C8:
    ctx.set_gpr(13, 2227u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4660)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088984DCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DC74u;
    return;
L_088984DC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(19, ctx.gpr[17] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088984FC;
      }
      goto L_088984E8;
    }
L_088984E8:
    ctx.set_gpr(24, 2227u << 16u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(4664)));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[14];
    ctx.set_gpr(25, 2227u << 16u);
      if (branch_taken) {
          goto L_088985E8;
      }
      goto L_088984FC;
    }
L_088984FC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08898500;
L_08898500:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.set_gpr(18, 2225u << 16u);
        goto L_088985C4;
    }
    goto L_0889850C;
L_0889850C:
    ctx.set_gpr(31, 0x08898514u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(-32016));
    goto L_088982C0;
L_08898514:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08898520;
L_08898520:
    ctx.set_gpr(31, 0x08898528u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08898528u) goto L_08898528;
    return;
L_08898528:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(14, 0u + 0u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, ctx.gpr[4] + static_cast<std::uint32_t>(2047));
    ctx.set_gpr(16, ctx.gpr[24] < static_cast<std::uint32_t>(2047) ? 1u : 0u);
    ctx.set_gpr(13, ctx.gpr[5] + ctx.gpr[16]);
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 31u));
    ctx.set_gpr(15, ctx.gpr[25] >> 21u);
    ctx.set_gpr(8, ctx.gpr[24] + ctx.gpr[15]);
    ctx.set_gpr(12, ctx.gpr[8] < ctx.gpr[15] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[13] + ctx.gpr[14]);
    ctx.set_gpr(11, ctx.gpr[2] + ctx.gpr[12]);
    ctx.set_gpr(9, ctx.gpr[8] >> 11u);
    ctx.set_gpr(10, ctx.gpr[11] << 21u);
    ctx.set_gpr(7, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088985A0;
L_088985A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088985C4:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(27424));
    ctx.set_gpr(31, 0x088985D0u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 887u, 0x08897F30u>(ctx, &aot_mem) && ctx.pc == 0x088985D0u) goto L_088985D0;
    return;
L_088985D0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088985E0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088985E0u) goto L_088985E0;
    return;
L_088985E0:
    ctx.set_gpr(4, 0u + 0u);
    goto L_088985A0;
L_088985E8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(4772)));
    ctx.set_gpr(31, 0x088985F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = 0x08B0DC4Cu;
    return;
L_088985F4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08898500;
L_088985FC:
    ctx.set_gpr(19, ctx.gpr[6] + static_cast<std::uint32_t>(-32016));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0889860Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 802u, 0x08897B6Cu>(ctx, &aot_mem) && ctx.pc == 0x0889860Cu) goto L_0889860C;
    return;
L_0889860C:
    ctx.set_gpr(31, 0x08898614u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_088982C0;
L_08898614:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08898520;
L_08898644:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08898648;
L_08898648:
    ctx.set_gpr(31, 0x08898650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 887u, 0x08897F30u>(ctx, &aot_mem) && ctx.pc == 0x08898650u) goto L_08898650;
    return;
L_08898650:
    ctx.set_gpr(4, 0u + 0u);
    goto L_088985A0;
L_08898658:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(27460));
    goto L_08898644;
L_08898664:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088989C8;
      }
      goto L_08898688;
    }
L_08898688:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_088989C0;
      }
      goto L_08898690;
    }
L_08898690:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_088989A8;
      }
      goto L_08898698;
    }
L_08898698:
    ctx.set_gpr(4, 2248u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-31712));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    goto L_088986A8;
L_088986A8:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[10] == ctx.gpr[7]) {
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(2))))));
        goto L_08898998;
    }
    goto L_088986B4;
L_088986B4:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(128))))));
    goto L_088986B8;
L_088986B8:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[7];
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08898984;
      }
      goto L_088986C0;
    }
L_088986C0:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(256))))));
    goto L_088986C4;
L_088986C4:
    { const bool branch_taken = ctx.gpr[14] == ctx.gpr[7];
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_08898970;
      }
      goto L_088986CC;
    }
L_088986CC:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(384))))));
    goto L_088986D0;
L_088986D0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[7];
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(384));
      if (branch_taken) {
          goto L_0889895C;
      }
      goto L_088986D8;
    }
L_088986D8:
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(512))))));
    goto L_088986DC;
L_088986DC:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[7];
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_08898948;
      }
      goto L_088986E4;
    }
L_088986E4:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(5));
    goto L_088986E8;
L_088986E8:
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[8]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_088986A8;
      }
      goto L_088986F4;
    }
L_088986F4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088986F8;
L_088986F8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08898720;
      }
      goto L_08898704;
    }
L_08898704:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08898724;
      }
      goto L_08898714;
    }
L_08898714:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_08898744;
    }
    goto L_0889871C;
L_0889871C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08898720;
L_08898720:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08898724;
L_08898724:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08898744:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[5] << 11u);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[12]);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? ctx.gpr[7] : ctx.gpr[5]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[25]);
      if (branch_taken) {
          goto L_08898938;
      }
      goto L_08898774;
    }
L_08898774:
    if (ctx.gpr[11] == ctx.gpr[17]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_0889892C;
    }
    goto L_0889877C;
L_0889877C:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    goto L_08898780;
L_08898780:
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 31u));
    ctx.set_gpr(13, ctx.gpr[7] + ctx.gpr[10]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 31u));
    ctx.set_gpr(19, ctx.gpr[24] + ctx.gpr[8]);
    ctx.set_gpr(20, ctx.gpr[13] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[20]);
    ctx.set_gpr(14, ctx.gpr[17] << 11u);
    ctx.set_gpr(15, ctx.gpr[13] >> 21u);
    ctx.set_gpr(9, ctx.gpr[14] | ctx.gpr[15]);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[13] << 11u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, ctx.gpr[10] + 0u);
      if (branch_taken) {
          goto L_08898924;
      }
      goto L_088987B4;
    }
L_088987B4:
    if (ctx.gpr[11] == ctx.gpr[9]) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_088988F0;
    }
    goto L_088987BC;
L_088987BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    goto L_088987C0;
L_088987C0:
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[4];
    ctx.set_gpr(6, ctx.gpr[12] << 11u);
      if (branch_taken) {
          goto L_088987E4;
      }
      goto L_088987CC;
    }
L_088987CC:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088987DCu);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08899690;
L_088987DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08898720;
      }
      goto L_088987E4;
    }
L_088987E4:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4664)));
    if (ctx.gpr[10] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
        goto L_088988A8;
    }
    goto L_088987F4;
L_088987F4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[13];
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0889888C;
      }
      goto L_0889880C;
    }
L_0889880C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08898810;
L_08898810:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0889881Cu);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.pc = 0x08B0DC1Cu;
    return;
L_0889881C:
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[15];
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08898870;
      }
      goto L_08898828;
    }
L_08898828:
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    goto L_0889882C;
L_0889882C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08898720;
      }
      goto L_08898834;
    }
L_08898834:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(13, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8084), ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[19]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), 0u);
    goto L_08898720;
L_08898870:
    ctx.set_gpr(31, 0x08898878u);
    // nop
    ctx.pc = 0x08B0DF84u;
    return;
L_08898878:
    ctx.set_gpr(17, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0889882C;
      }
      goto L_08898884;
    }
L_08898884:
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    goto L_0889882C;
L_0889888C:
    ctx.set_gpr(31, 0x08898894u);
    // nop
    ctx.pc = 0x08B0DF84u;
    return;
L_08898894:
    ctx.set_gpr(14, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0889882C;
      }
      goto L_088988A0;
    }
L_088988A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08898810;
L_088988A8:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_088988D4;
      }
      goto L_088988BC;
    }
L_088988BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088988C0;
L_088988C0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088988CCu);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.pc = 0x08B0DC3Cu;
    return;
L_088988CC:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0889882C;
L_088988D4:
    ctx.set_gpr(31, 0x088988DCu);
    // nop
    ctx.pc = 0x08B0DF84u;
    return;
L_088988DC:
    ctx.set_gpr(24, ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-999));
      if (branch_taken) {
          goto L_0889882C;
      }
      goto L_088988E8;
    }
L_088988E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088988C0;
L_088988F0:
    ctx.set_gpr(11, ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
        goto L_088987C0;
    }
    goto L_088988FC;
L_088988FC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(7, ctx.gpr[3] << 11u);
    ctx.set_gpr(6, ctx.gpr[8] - ctx.gpr[6]);
    ctx.set_gpr(12, ctx.gpr[25] + ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(31, 0x08898918u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08898918u) goto L_08898918;
    return;
L_08898918:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    goto L_088987BC;
L_08898924:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_088988FC;
L_0889892C:
    ctx.set_gpr(10, ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
        goto L_08898780;
    }
    goto L_08898938;
L_08898938:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    goto L_08898780;
L_08898948:
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    if (ctx.gpr[20] != ctx.gpr[9]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(5));
        goto L_088986E8;
    }
    goto L_08898954;
L_08898954:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088986F8;
L_0889895C:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    if (ctx.gpr[17] != ctx.gpr[9]) {
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(512))))));
        goto L_088986DC;
    }
    goto L_08898968;
L_08898968:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088986F8;
L_08898970:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    if (ctx.gpr[15] != ctx.gpr[9]) {
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(384))))));
        goto L_088986D0;
    }
    goto L_0889897C;
L_0889897C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088986F8;
L_08898984:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    if (ctx.gpr[13] != ctx.gpr[9]) {
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(256))))));
        goto L_088986C4;
    }
    goto L_08898990;
L_08898990:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088986F8;
L_08898998:
    if (ctx.gpr[11] != ctx.gpr[9]) {
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(128))))));
        goto L_088986B8;
    }
    goto L_088989A0;
L_088989A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_088986F8;
L_088989A8:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(27528));
    goto L_088989B0;
L_088989B0:
    ctx.set_gpr(31, 0x088989B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 887u, 0x08897F30u>(ctx, &aot_mem) && ctx.pc == 0x088989B8u) goto L_088989B8;
    return;
L_088989B8:
    ctx.set_gpr(7, 0u + 0u);
    goto L_08898720;
L_088989C0:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(27496));
    goto L_088989B0;
L_088989C8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(27564));
    goto L_088989B0;
L_088989D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08898BC0;
      }
      goto L_08898A08;
    }
L_08898A08:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
      if (branch_taken) {
          goto L_08898A4C;
      }
      goto L_08898A18;
    }
L_08898A18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08898A1C;
L_08898A1C:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08898A48:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    goto L_08898A4C;
L_08898A4C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[6] != ctx.gpr[5]) {
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), 0u);
        goto L_08898BB8;
    }
    goto L_08898A58;
L_08898A58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08898A64u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.pc = 0x08B0DC5Cu;
    return;
L_08898A64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(23, 2245u << 16u);
      if (branch_taken) {
          goto L_08898BB4;
      }
      goto L_08898A6C;
    }
L_08898A6C:
    ctx.set_gpr(31, 0x08898A74u);
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(8072));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 640u, 0x088A3CFCu>(ctx, &aot_mem) && ctx.pc == 0x08898A74u) goto L_08898A74;
    return;
L_08898A74:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
        goto L_08898A48;
    }
    goto L_08898A7C;
L_08898A7C:
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-31712));
    goto L_08898A94;
L_08898A94:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[17] == ctx.gpr[20]) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
        goto L_08898B40;
    }
    goto L_08898AA0;
L_08898AA0:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128))))));
    goto L_08898AA4;
L_08898AA4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[20];
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08898AC8;
      }
      goto L_08898AAC;
    }
L_08898AAC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    goto L_08898AB0;
L_08898AB0:
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[19]) < 40 ? 1u : 0u);
    goto L_08898AB4;
L_08898AB4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_08898A94;
      }
      goto L_08898ABC;
    }
L_08898ABC:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8072), 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    goto L_08898A48;
L_08898AC8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
        goto L_08898AB0;
    }
    goto L_08898AD4;
L_08898AD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08898B2C;
      }
      goto L_08898ADC;
    }
L_08898ADC:
    if (ctx.gpr[2] != ctx.gpr[22]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
        goto L_08898AB0;
    }
    goto L_08898AE4;
L_08898AE4:
    ctx.set_gpr(31, 0x08898AECu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 898u, 0x08897FF4u>(ctx, &aot_mem) && ctx.pc == 0x08898AECu) goto L_08898AEC;
    return;
L_08898AEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08898AB0;
      }
      goto L_08898AF4;
    }
L_08898AF4:
    ctx.set_gpr(31, 0x08898AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 438u, 0x088A2404u>(ctx, &aot_mem) && ctx.pc == 0x08898AFCu) goto L_08898AFC;
    return;
L_08898AFC:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.set_gpr(11, 2245u << 16u);
    ctx.set_gpr(13, ctx.gpr[14] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08898B24u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8084), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 445u, 0x088A25BCu>(ctx, &aot_mem) && ctx.pc == 0x08898B24u) goto L_08898B24;
    return;
L_08898B24:
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[19]) < 40 ? 1u : 0u);
    goto L_08898AB4;
L_08898B2C:
    if (ctx.gpr[2] != ctx.gpr[30]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
        goto L_08898AB0;
    }
    goto L_08898B34;
L_08898B34:
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[15]));
    goto L_08898AAC;
L_08898B40:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128))))));
        goto L_08898AA4;
    }
    goto L_08898B48;
L_08898B48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08898BA0;
      }
      goto L_08898B50;
    }
L_08898B50:
    if (ctx.gpr[2] != ctx.gpr[22]) {
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128))))));
        goto L_08898AA4;
    }
    goto L_08898B58;
L_08898B58:
    ctx.set_gpr(31, 0x08898B60u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 898u, 0x08897FF4u>(ctx, &aot_mem) && ctx.pc == 0x08898B60u) goto L_08898B60;
    return;
L_08898B60:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128))))));
        goto L_08898AA4;
    }
    goto L_08898B68;
L_08898B68:
    ctx.set_gpr(31, 0x08898B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 438u, 0x088A2404u>(ctx, &aot_mem) && ctx.pc == 0x08898B70u) goto L_08898B70;
    return;
L_08898B70:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08898B98u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8084), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 445u, 0x088A25BCu>(ctx, &aot_mem) && ctx.pc == 0x08898B98u) goto L_08898B98;
    return;
L_08898B98:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128))))));
    goto L_08898AA4;
L_08898BA0:
    if (ctx.gpr[2] != ctx.gpr[30]) {
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128))))));
        goto L_08898AA4;
    }
    goto L_08898BA8;
L_08898BA8:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[10]));
    goto L_08898AA0;
L_08898BB4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), 0u);
    goto L_08898BB8;
L_08898BB8:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_08898A18;
L_08898BC0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x08898BCCu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(27588));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 887u, 0x08897F30u>(ctx, &aot_mem) && ctx.pc == 0x08898BCCu) goto L_08898BCC;
    return;
L_08898BCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08898A1C;
L_08898BD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08898C24;
      }
      goto L_08898BEC;
    }
L_08898BEC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(203));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[5]) < 204 ? 1u : 0u);
      if (branch_taken) {
          goto L_08898D08;
      }
      goto L_08898BF8;
    }
L_08898BF8:
    if (ctx.gpr[7] == 0u) {
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(205));
        goto L_08898CE0;
    }
    goto L_08898C00;
L_08898C00:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(201));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[5]) < 202 ? 1u : 0u);
      if (branch_taken) {
          goto L_08898C90;
      }
      goto L_08898C0C;
    }
L_08898C0C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08898C80;
      }
      goto L_08898C14;
    }
L_08898C14:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(200));
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
        goto L_08898C30;
    }
    goto L_08898C20;
L_08898C20:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_08898C24;
L_08898C24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08898C30:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(2048));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.hi);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08898C70;
      }
      goto L_08898C50;
    }
L_08898C50:
    if (ctx.gpr[5] == ctx.gpr[9]) {
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_08898C64;
    }
    goto L_08898C58;
L_08898C58:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 0u));
    goto L_08898C5C;
L_08898C5C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08898C20;
L_08898C64:
    ctx.set_gpr(5, ctx.gpr[14] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 0u));
        goto L_08898C5C;
    }
    goto L_08898C70;
L_08898C70:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 0u));
    goto L_08898C5C;
L_08898C80:
    ctx.set_gpr(31, 0x08898C88u);
    // nop
    goto L_088980C4;
L_08898C88:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 0u));
    goto L_08898C5C;
L_08898C90:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(2048));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.hi);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    // nop
      if (branch_taken) {
          goto L_08898CD0;
      }
      goto L_08898CB4;
    }
L_08898CB4:
    if (ctx.gpr[5] == ctx.gpr[9]) {
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08898CC4;
    }
    goto L_08898CBC;
L_08898CBC:
    ctx.set_gpr(3, ctx.gpr[8] + 0u);
    goto L_08898C20;
L_08898CC4:
    ctx.set_gpr(7, ctx.gpr[9] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.set_gpr(3, ctx.gpr[8] + 0u);
        goto L_08898C20;
    }
    goto L_08898CD0;
L_08898CD0:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[8] + 0u);
    goto L_08898C20;
L_08898CE0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[5]) < 205 ? 1u : 0u);
      if (branch_taken) {
          goto L_08898D08;
      }
      goto L_08898CE8;
    }
L_08898CE8:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(299));
      if (branch_taken) {
          goto L_08898C80;
      }
      goto L_08898CF0;
    }
L_08898CF0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(400));
      if (branch_taken) {
          goto L_08898D00;
      }
      goto L_08898CF8;
    }
L_08898CF8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[12];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08898C24;
      }
      goto L_08898D00;
    }
L_08898D00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08898C20;
L_08898D08:
    ctx.set_gpr(31, 0x08898D10u);
    // nop
    goto L_088980C4;
L_08898D10:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08898C20;
L_08898D30:
    ctx.set_gpr(3, 2227u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4772), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08898D3C:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(27612));
    ctx.set_gpr(8, ctx.gpr[6] + static_cast<std::uint32_t>(8608));
    ctx.set_gpr(4, rt.memory().aot_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(5))))));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store_word_left(ctx.gpr[8] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(3, 2227u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4656)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(4668));
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(8348), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08898D90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08898DF8;
      }
      goto L_08898DA0;
    }
L_08898DA0:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[10] ^ 92u);
    ctx.set_gpr(3, ctx.gpr[10] ^ 47u);
    ctx.set_gpr(7, 0u < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(8, 0u < ctx.gpr[9] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[7] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(4, 2245u << 16u);
      if (branch_taken) {
          goto L_08898DF0;
      }
      goto L_08898DC0;
    }
L_08898DC0:
    ctx.set_gpr(13, 2225u << 16u);
    ctx.set_gpr(11, ctx.gpr[4] + static_cast<std::uint32_t>(8348));
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(27620));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(1))))));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08898DDC;
L_08898DDC:
    ctx.set_gpr(31, 0x08898DE4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8348));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08898DE4u) goto L_08898DE4;
    return;
L_08898DE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08898DF0:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8348), static_cast<std::uint8_t>(0u));
    goto L_08898DDC;
L_08898DF8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(8348), static_cast<std::uint8_t>(0u));
    goto L_08898DE4;
L_08898E10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8608));
      if (branch_taken) {
          goto L_08898E40;
      }
      goto L_08898E2C;
    }
L_08898E2C:
    ctx.set_gpr(31, 0x08898E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08898E34u) goto L_08898E34;
    return;
L_08898E34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08898E38;
L_08898E38:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08898E40:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(27612));
    ctx.set_gpr(4, rt.memory().aot_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(5))))));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store_word_left(ctx.gpr[8] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08898E38;
L_0889909C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(22, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[22] + static_cast<std::uint32_t>(8072));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x088990D4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 640u, 0x088A3CFCu>(ctx, &aot_mem) && ctx.pc == 0x088990D4u) goto L_088990D4;
    return;
L_088990D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08899128;
      }
      goto L_088990DC;
    }
L_088990DC:
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(-31712));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(3));
    goto L_088990F8;
L_088990F8:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[16] == ctx.gpr[20]) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
        goto L_088991C8;
    }
    goto L_08899104;
L_08899104:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(128))))));
    goto L_08899108;
L_08899108:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[20];
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08899154;
      }
      goto L_08899110;
    }
L_08899110:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    goto L_08899114;
L_08899114:
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[19]) < 40 ? 1u : 0u);
    goto L_08899118;
L_08899118:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_088990F8;
      }
      goto L_08899120;
    }
L_08899120:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8072), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08899128;
L_08899128:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08899154:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
        goto L_08899114;
    }
    goto L_08899160;
L_08899160:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088991B8;
      }
      goto L_08899168;
    }
L_08899168:
    if (ctx.gpr[2] != ctx.gpr[21]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
        goto L_08899114;
    }
    goto L_08899170;
L_08899170:
    ctx.set_gpr(31, 0x08899178u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 898u, 0x08897FF4u>(ctx, &aot_mem) && ctx.pc == 0x08899178u) goto L_08899178;
    return;
L_08899178:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08899114;
      }
      goto L_08899180;
    }
L_08899180:
    ctx.set_gpr(31, 0x08899188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 438u, 0x088A2404u>(ctx, &aot_mem) && ctx.pc == 0x08899188u) goto L_08899188;
    return;
L_08899188:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x088991B0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8084), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 445u, 0x088A25BCu>(ctx, &aot_mem) && ctx.pc == 0x088991B0u) goto L_088991B0;
    return;
L_088991B0:
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[19]) < 40 ? 1u : 0u);
    goto L_08899118;
L_088991B8:
    if (ctx.gpr[2] == ctx.gpr[23]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[30]));
        goto L_08899110;
    }
    goto L_088991C0;
L_088991C0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    goto L_08899114;
L_088991C8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(128))))));
        goto L_08899108;
    }
    goto L_088991D0;
L_088991D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08899228;
      }
      goto L_088991D8;
    }
L_088991D8:
    if (ctx.gpr[2] != ctx.gpr[21]) {
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(128))))));
        goto L_08899108;
    }
    goto L_088991E0;
L_088991E0:
    ctx.set_gpr(31, 0x088991E8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 898u, 0x08897FF4u>(ctx, &aot_mem) && ctx.pc == 0x088991E8u) goto L_088991E8;
    return;
L_088991E8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(128))))));
        goto L_08899108;
    }
    goto L_088991F0;
L_088991F0:
    ctx.set_gpr(31, 0x088991F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 438u, 0x088A2404u>(ctx, &aot_mem) && ctx.pc == 0x088991F8u) goto L_088991F8;
    return;
L_088991F8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08899220u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8084), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 445u, 0x088A25BCu>(ctx, &aot_mem) && ctx.pc == 0x08899220u) goto L_08899220;
    return;
L_08899220:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(128))))));
    goto L_08899108;
L_08899228:
    if (ctx.gpr[2] == ctx.gpr[23]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[30]));
        goto L_08899104;
    }
    goto L_08899230;
L_08899230:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(128))))));
    goto L_08899108;
L_08899238:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8064), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8068), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889924C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08899290;
      }
      goto L_0889926C;
    }
L_0889926C:
    ctx.set_gpr(31, 0x08899274u);
    // nop
    goto L_08899BF0;
L_08899274:
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(-32016));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_088992A4;
      }
      goto L_0889928C;
    }
L_0889928C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08899290;
L_08899290:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088992A4:
    ctx.set_gpr(31, 0x088992ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 802u, 0x08897B6Cu>(ctx, &aot_mem) && ctx.pc == 0x088992ACu) goto L_088992AC;
    return;
L_088992AC:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4660)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088992C0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0DC74u;
    return;
L_088992C0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08899290;
      }
      goto L_088992CC;
    }
L_088992CC:
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4664)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088992F0;
      }
      goto L_088992E0;
    }
L_088992E0:
    ctx.set_gpr(31, 0x088992E8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088995E4;
L_088992E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08899290;
L_088992F0:
    ctx.set_gpr(8, 2227u << 16u);
    ctx.set_gpr(31, 0x088992FCu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4772)));
    ctx.pc = 0x08B0DC4Cu;
    return;
L_088992FC:
    // nop
    goto L_088992E0;
L_08899304:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08899314u);
    // nop
    goto L_088980C4;
L_08899314:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088993DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08899420;
      }
      goto L_088993F0;
    }
L_088993F0:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08899454;
      }
      goto L_08899400;
    }
L_08899400:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_08899404;
L_08899404:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08899430;
      }
      goto L_0889940C;
    }
L_0889940C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08899410;
L_08899410:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08899420u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08899420u) goto L_08899420;
    return;
L_08899420:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08899430:
    ctx.set_gpr(31, 0x08899438u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_088995E4;
L_08899438:
    ctx.set_gpr(6, 2225u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(27624));
      if (branch_taken) {
          goto L_0889940C;
      }
      goto L_08899444;
    }
L_08899444:
    ctx.set_gpr(31, 0x0889944Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 912u, 0x08883BDCu>(ctx, &aot_mem) && ctx.pc == 0x0889944Cu) goto L_0889944C;
    return;
L_0889944C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08899410;
L_08899454:
    ctx.set_gpr(31, 0x0889945Cu);
    // nop
    goto L_088989D4;
L_0889945C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_08899404;
L_08899464:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088994E8;
      }
      goto L_08899474;
    }
L_08899474:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088994B4;
      }
      goto L_0889947C;
    }
L_0889947C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_08899484;
L_08899484:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(9, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[10]) ? ctx.gpr[3] : ctx.gpr[10]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[8]) > static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[8] : ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_088994A4;
L_088994A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088994B4:
    if (ctx.gpr[6] == ctx.gpr[3]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_088994E0;
    }
    goto L_088994BC;
L_088994BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[6] == ctx.gpr[4]) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
        goto L_088994D0;
    }
    goto L_088994C8;
L_088994C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_08899484;
L_088994D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[5]);
    goto L_088994D8;
L_088994D8:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_08899484;
L_088994E0:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[5]);
    goto L_088994D8;
L_088994E8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x088994F4u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(27564));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 887u, 0x08897F30u>(ctx, &aot_mem) && ctx.pc == 0x088994F4u) goto L_088994F4;
    return;
L_088994F4:
    ctx.set_gpr(3, 0u + 0u);
    goto L_088994A4;
L_088994FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(27564));
      if (branch_taken) {
          goto L_08899520;
      }
      goto L_08899510;
    }
L_08899510:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08899514;
L_08899514:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08899520:
    ctx.set_gpr(31, 0x08899528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 887u, 0x08897F30u>(ctx, &aot_mem) && ctx.pc == 0x08899528u) goto L_08899528;
    return;
L_08899528:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08899514;
L_08899530:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(27564));
      if (branch_taken) {
          goto L_08899554;
      }
      goto L_08899544;
    }
L_08899544:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    goto L_08899548;
L_08899548:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08899554:
    ctx.set_gpr(31, 0x0889955Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 887u, 0x08897F30u>(ctx, &aot_mem) && ctx.pc == 0x0889955Cu) goto L_0889955C;
    return;
L_0889955C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08899548;
L_08899564:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2048));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889956C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(27564));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_088995B0;
      }
      goto L_08899584;
    }
L_08899584:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_088995A4;
      }
      goto L_08899594;
    }
L_08899594:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088995A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[3] << 11u);
    goto L_08899594;
L_088995B0:
    ctx.set_gpr(31, 0x088995B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 887u, 0x08897F30u>(ctx, &aot_mem) && ctx.pc == 0x088995B8u) goto L_088995B8;
    return;
L_088995B8:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08899594;
L_088995E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(2, 32770u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[2] | 803u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08899614;
L_08899614:
    ctx.set_gpr(31, 0x0889961Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = 0x08B0DC34u;
    return;
L_0889961C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(27648));
      if (branch_taken) {
          goto L_0889966C;
      }
      goto L_08899630;
    }
L_08899630:
    ctx.set_gpr(31, 0x08899638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 912u, 0x08883BDCu>(ctx, &aot_mem) && ctx.pc == 0x08899638u) goto L_08899638;
    return;
L_08899638:
    ctx.set_gpr(3, 32770u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | 803u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08899670;
      }
      goto L_08899648;
    }
L_08899648:
    ctx.set_gpr(31, 0x08899650u);
    // nop
    ctx.pc = 0x08B0DD34u;
    return;
L_08899650:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 6001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08899614;
      }
      goto L_0889965C;
    }
L_0889965C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(27684));
    ctx.set_gpr(31, 0x0889966Cu);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 887u, 0x08897F30u>(ctx, &aot_mem) && ctx.pc == 0x0889966Cu) goto L_0889966C;
    return;
L_0889966C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08899670;
L_08899670:
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
L_08899690:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08899850;
      }
      goto L_088996D4;
    }
L_088996D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    goto L_088996D8;
L_088996D8:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088996E8u);
    ctx.set_gpr(8, ctx.gpr[22] + 0u);
    ctx.pc = 0x08B0DC7Cu;
    return;
L_088996E8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0889971C;
      }
      goto L_088996F4;
    }
L_088996F4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.set_gpr(24, 32770u << 16u);
      if (branch_taken) {
          goto L_08899754;
      }
      goto L_08899704;
    }
L_08899704:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
    goto L_08899708;
L_08899708:
    ctx.set_gpr(31, 0x08899710u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DD34u;
    return;
L_08899710:
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[19]) < 1001 ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
        goto L_088996D8;
    }
    goto L_0889971C;
L_0889971C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08899724;
L_08899724:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08899728;
L_08899728:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08899754:
    ctx.set_gpr(15, 32769u << 16u);
    ctx.set_gpr(13, ctx.gpr[24] | 803u);
    ctx.set_gpr(14, ctx.gpr[15] | 9u);
    ctx.set_gpr(10, ctx.gpr[2] ^ ctx.gpr[14]);
    ctx.set_gpr(11, ctx.gpr[2] ^ ctx.gpr[13]);
    ctx.set_gpr(8, ctx.gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08899708;
      }
      goto L_0889977C;
    }
L_0889977C:
    ctx.set_gpr(25, 578u << 16u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(27720));
    ctx.set_gpr(5, ctx.gpr[25] | 22563u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x088997A0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08B0DC0Cu;
    return;
L_088997A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088997B4;
      }
      goto L_088997A8;
    }
L_088997A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_088997B4;
L_088997B4:
    if (static_cast<std::int32_t>(ctx.gpr[3]) <= 0) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(100));
        goto L_08899708;
    }
    goto L_088997BC;
L_088997BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x088997C8u);
    ctx.set_gpr(16, 2227u << 16u);
    goto L_088995E4;
L_088997C8:
    ctx.set_gpr(4, 2248u << 16u);
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(-32016));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088997DCu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 802u, 0x08897B6Cu>(ctx, &aot_mem) && ctx.pc == 0x088997DCu) goto L_088997DC;
    return;
L_088997DC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4660)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088997ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DC74u;
    return;
L_088997EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08899824;
      }
      goto L_088997F4;
    }
L_088997F4:
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4664)));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.set_gpr(8, 2227u << 16u);
      if (branch_taken) {
          goto L_08899810;
      }
      goto L_08899808;
    }
L_08899808:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    goto L_088996D4;
L_08899810:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4772)));
    ctx.set_gpr(31, 0x0889981Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = 0x08B0DC4Cu;
    return;
L_0889981C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    goto L_088996D4;
L_08899824:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    ctx.set_gpr(18, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(27728));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08899840u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 892u, 0x08897F68u>(ctx, &aot_mem) && ctx.pc == 0x08899840u) goto L_08899840;
    return;
L_08899840:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08899728;
L_08899850:
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8080)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[16];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08899728;
      }
      goto L_0889986C;
    }
L_0889986C:
    ctx.set_gpr(31, 0x08899874u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B0DF8Cu;
    return;
L_08899874:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
        goto L_088996D8;
    }
    goto L_0889987C;
L_0889987C:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8080), ctx.gpr[16]);
    goto L_08899724;
L_08899890:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8832));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8832), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088998AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(8896));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4096));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    ctx.set_gpr(31, 0x088998FCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088998FCu) goto L_088998FC;
    return;
L_088998FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8832)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08899AD4;
      }
      goto L_0889990C;
    }
L_0889990C:
    ctx.set_gpr(31, 0x08899914u);
    // nop
    goto L_08899FF8;
L_08899914:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08899944;
      }
      goto L_0889991C;
    }
L_0889991C:
    ctx.set_gpr(5, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(27784));
      if (branch_taken) {
          goto L_08899938;
      }
      goto L_08899928;
    }
L_08899928:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
      if (branch_taken) {
          goto L_08899970;
      }
      goto L_08899930;
    }
L_08899930:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(27832));
    goto L_08899938;
L_08899938:
    ctx.set_gpr(31, 0x08899940u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 912u, 0x08883BDCu>(ctx, &aot_mem) && ctx.pc == 0x08899940u) goto L_08899940;
    return;
L_08899940:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08899944;
L_08899944:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08899970:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0889997Cu);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889997Cu) goto L_0889997C;
    return;
L_0889997C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x0889998Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889998Cu) goto L_0889998C;
    return;
L_0889998C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08899998u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 802u, 0x08897B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08899998u) goto L_08899998;
    return;
L_08899998:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088999A8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(420));
    ctx.pc = 0x08B0DC74u;
    return;
L_088999A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(23, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08899A9C;
      }
      goto L_088999B4;
    }
L_088999B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088999C8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.pc = 0x08B0DC7Cu;
    return;
L_088999C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088999EC;
      }
      goto L_088999D4;
    }
L_088999D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x088999E8u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = 0x08B0DC7Cu;
    return;
L_088999E8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088999EC;
L_088999EC:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08899AB8;
      }
      goto L_088999F8;
    }
L_088999F8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(0));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08899A04;
L_08899A04:
    ctx.set_gpr(31, 0x08899A0Cu);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.pc = 0x08B0DC1Cu;
    return;
L_08899A0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08899A94;
      }
      goto L_08899A14;
    }
L_08899A14:
    ctx.set_gpr(31, 0x08899A1Cu);
    ctx.set_gpr(16, ctx.gpr[22] + static_cast<std::uint32_t>(9));
    ctx.pc = 0x08B0DC34u;
    return;
L_08899A1C:
    { const std::uint32_t dividend = ctx.gpr[19]; const std::uint32_t divisor = ctx.gpr[16]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.pc = 0x08899A30u; rt.stop("Allegrex BREAK code 7 at 0x08899A30"); return;
        goto L_08899A34;
    }
    goto L_08899A34;
L_08899A34:
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(31, 0x08899A40u);
    ctx.set_gpr(17, ctx.lo);
    goto L_08899C98;
L_08899A40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
      if (branch_taken) {
          goto L_08899A70;
      }
      goto L_08899A48;
    }
L_08899A48:
    ctx.set_gpr(31, 0x08899A50u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08899E3C;
L_08899A50:
    ctx.set_gpr(13, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.gpr[17] << 3u);
    if (ctx.gpr[16] == 0u) {
    ctx.pc = 0x08899A60u; rt.stop("Allegrex BREAK code 7 at 0x08899A60"); return;
        goto L_08899A64;
    }
    goto L_08899A64;
L_08899A64:
    ctx.set_gpr(11, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[12] + ctx.gpr[11]);
    goto L_08899944;
L_08899A70:
    ctx.set_gpr(10, 2225u << 16u);
    ctx.set_gpr(31, 0x08899A7Cu);
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(27876));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 912u, 0x08883BDCu>(ctx, &aot_mem) && ctx.pc == 0x08899A7Cu) goto L_08899A7C;
    return;
L_08899A7C:
    ctx.set_gpr(9, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[9] + static_cast<std::uint32_t>(27912));
    goto L_08899A84;
L_08899A84:
    ctx.set_gpr(31, 0x08899A8Cu);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 887u, 0x08897F30u>(ctx, &aot_mem) && ctx.pc == 0x08899A8Cu) goto L_08899A8C;
    return;
L_08899A8C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08899944;
L_08899A94:
    ctx.set_gpr(31, 0x08899A9Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.pc = 0x08B0DC34u;
    return;
L_08899A9C:
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08899AACu);
    ctx.set_gpr(4, ctx.gpr[8] + static_cast<std::uint32_t>(27964));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 912u, 0x08883BDCu>(ctx, &aot_mem) && ctx.pc == 0x08899AACu) goto L_08899AAC;
    return;
L_08899AAC:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(28004));
    goto L_08899A84;
L_08899AB8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08899A04;
      }
      goto L_08899AC0;
    }
L_08899AC0:
    ctx.set_gpr(4, ctx.gpr[2] < static_cast<std::uint32_t>(4097) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08899A04;
      }
      goto L_08899ACC;
    }
L_08899ACC:
    // nop
    goto L_088999F8;
L_08899AD4:
    ctx.set_gpr(31, 0x08899ADCu);
    // nop
    goto L_08899890;
L_08899ADC:
    // nop
    goto L_0889990C;
L_08899BF0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8832)));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(8832));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08899C2C;
      }
      goto L_08899C20;
    }
L_08899C20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08899C24;
L_08899C24:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08899C2C:
    ctx.set_gpr(31, 0x08899C34u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_0889A20C;
L_08899C34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08899C24;
L_08899C3C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8832)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(8832));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08899C7C;
      }
      goto L_08899C68;
    }
L_08899C68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08899C6C;
L_08899C6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u < ctx.gpr[4] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08899C7C:
    ctx.set_gpr(31, 0x08899C84u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_0889A20C;
L_08899C84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08899C6C;
L_08899C98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    ctx.set_gpr(30, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08899DD8;
      }
      goto L_08899CE8;
    }
L_08899CE8:
    ctx.set_gpr(3, ctx.gpr[22] << 3u);
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(92));
    goto L_08899CF4;
L_08899CF4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(47));
      if (branch_taken) {
          goto L_08899E30;
      }
      goto L_08899D04;
    }
L_08899D04:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(2, ctx.gpr[4] ^ 10u);
    ctx.set_gpr(11, ctx.gpr[4] ^ 13u);
    ctx.set_gpr(9, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[9] | ctx.gpr[10]);
    if (ctx.gpr[8] != 0u) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
        goto L_08899D30;
    }
    goto L_08899D24;
L_08899D24:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08899DC4;
      }
      goto L_08899D2C;
    }
L_08899D2C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    goto L_08899D30;
L_08899D30:
    ctx.set_gpr(16, ctx.gpr[4] ^ 10u);
    ctx.set_gpr(15, ctx.gpr[4] ^ 13u);
    ctx.set_gpr(13, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(14, ctx.gpr[15] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[14]);
    if (ctx.gpr[12] != 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08899D58;
    }
    goto L_08899D4C;
L_08899D4C:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-1))))));
        goto L_08899D60;
    }
    goto L_08899D54;
L_08899D54:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08899D58;
L_08899D58:
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[17]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-1))))));
    goto L_08899D60;
L_08899D60:
    ctx.set_gpr(7, ctx.gpr[8] ^ 13u);
    ctx.set_gpr(3, ctx.gpr[8] ^ 10u);
    ctx.set_gpr(25, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(24, ctx.gpr[25] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(16, ctx.gpr[17] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08899D80;
      }
      goto L_08899D7C;
    }
L_08899D7C:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
    goto L_08899D80;
L_08899D80:
    ctx.set_gpr(5, ctx.gpr[20] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08899DFC;
      }
      goto L_08899D8C;
    }
L_08899D8C:
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08899D9Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08899D9Cu) goto L_08899D9C;
    return;
L_08899D9C:
    ctx.set_gpr(6, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-1))))));
    if (ctx.gpr[9] != 0u) {
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_08899DAC;
    }
    goto L_08899DAC;
L_08899DAC:
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[22];
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08899DD8;
      }
      goto L_08899DC4;
    }
L_08899DC4:
    ctx.set_gpr(11, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(5, ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_08899CF4;
      }
      goto L_08899DD8;
    }
L_08899DD8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8832)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(8832));
      if (branch_taken) {
          goto L_08899DF8;
      }
      goto L_08899DE8;
    }
L_08899DE8:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8832), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    goto L_08899DF8;
L_08899DF8:
    ctx.set_gpr(3, ctx.gpr[21] + 0u);
    goto L_08899DFC;
L_08899DFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08899E30:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(47));
    goto L_08899D04;
L_08899E3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[30]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(30, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[20]);
    ctx.set_gpr(20, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    ctx.set_gpr(31, 0x08899E84u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08899E84u) goto L_08899E84;
    return;
L_08899E84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(21, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[16] : ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), 0u);
      if (branch_taken) {
          goto L_08899EF0;
      }
      goto L_08899E98;
    }
L_08899E98:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(23, ctx.gpr[3] + static_cast<std::uint32_t>(8832));
    ctx.set_gpr(17, ctx.gpr[30] + 0u);
    goto L_08899EA4;
L_08899EA4:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.gpr[9] << 3u);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(18, ctx.gpr[30] + ctx.gpr[4]);
    ctx.set_gpr(31, 0x08899ED0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 802u, 0x08897B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08899ED0u) goto L_08899ED0;
    return;
L_08899ED0:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08899F4C;
      }
      goto L_08899EE0;
    }
L_08899EE0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08899EE4;
L_08899EE4:
    ctx.set_gpr(22, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08899EA4;
      }
      goto L_08899EF0;
    }
L_08899EF0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(20, 2225u << 16u);
    ctx.set_gpr(31, 0x08899F00u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(28052));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 912u, 0x08883BDCu>(ctx, &aot_mem) && ctx.pc == 0x08899F00u) goto L_08899F00;
    return;
L_08899F00:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(21, 2225u << 16u);
      if (branch_taken) {
          goto L_08899F18;
      }
      goto L_08899F0C;
    }
L_08899F0C:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(28076));
    ctx.set_gpr(31, 0x08899F18u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 918u, 0x08883C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08899F18u) goto L_08899F18;
    return;
L_08899F18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08899F4C:
    ctx.set_gpr(12, 2227u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4660)));
    ctx.set_gpr(31, 0x08899F5Cu);
    ctx.set_gpr(22, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08B0DC74u;
    return;
L_08899F5C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08899FD8;
      }
      goto L_08899F78;
    }
L_08899F78:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08899F8Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[5]);
    ctx.pc = 0x08B0DC7Cu;
    return;
L_08899F8C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08899FB4;
      }
      goto L_08899FA8;
    }
L_08899FA8:
    ctx.set_gpr(31, 0x08899FB0u);
    // nop
    ctx.pc = 0x08B0DC7Cu;
    return;
L_08899FB0:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08899FB4;
L_08899FB4:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(16, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28120));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08899FD0u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 912u, 0x08883BDCu>(ctx, &aot_mem) && ctx.pc == 0x08899FD0u) goto L_08899FD0;
    return;
L_08899FD0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08899EE4;
L_08899FD8:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(15, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[15] + static_cast<std::uint32_t>(28172));
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08899FF0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[13]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 912u, 0x08883BDCu>(ctx, &aot_mem) && ctx.pc == 0x08899FF0u) goto L_08899FF0;
    return;
L_08899FF0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08899EE4;
L_08899FF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(8832));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8832)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[22]);
    ctx.set_gpr(22, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889A13C;
      }
      goto L_0889A03C;
    }
L_0889A03C:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0889A120;
      }
      goto L_0889A048;
    }
L_0889A048:
    ctx.set_gpr(4, ctx.gpr[21] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    ctx.set_gpr(30, 2225u << 16u);
    ctx.set_gpr(23, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[21] & 1u);
      if (branch_taken) {
          goto L_0889A1FC;
      }
      goto L_0889A064;
    }
L_0889A064:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_0889A068;
L_0889A068:
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(2, ctx.gpr[6] << 3u);
    ctx.set_gpr(16, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0889A07Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 802u, 0x08897B6Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A07Cu) goto L_0889A07C;
    return;
L_0889A07C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A1CC;
      }
      goto L_0889A088;
    }
L_0889A088:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[18] < ctx.gpr[21] ? 1u : 0u);
    goto L_0889A090;
L_0889A090:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0889A120;
      }
      goto L_0889A098;
    }
L_0889A098:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    goto L_0889A09C;
L_0889A09C:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.gpr[11] << 3u);
    ctx.set_gpr(10, ctx.lo);
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(16, ctx.gpr[19] + ctx.gpr[8]);
    ctx.set_gpr(31, 0x0889A0C4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 802u, 0x08897B6Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A0C4u) goto L_0889A0C4;
    return;
L_0889A0C4:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A19C;
      }
      goto L_0889A0D0;
    }
L_0889A0D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    goto L_0889A0D4;
L_0889A0D4:
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(24, ctx.gpr[4] << 3u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, ctx.lo);
    ctx.set_gpr(15, ctx.gpr[24] + ctx.gpr[25]);
    ctx.set_gpr(16, ctx.gpr[19] + ctx.gpr[15]);
    ctx.set_gpr(31, 0x0889A104u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 802u, 0x08897B6Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A104u) goto L_0889A104;
    return;
L_0889A104:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A16C;
      }
      goto L_0889A110;
    }
L_0889A110:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[18] < ctx.gpr[21] ? 1u : 0u);
    goto L_0889A118;
L_0889A118:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0889A098;
      }
      goto L_0889A120;
    }
L_0889A120:
    ctx.set_gpr(17, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28276));
    ctx.set_gpr(31, 0x0889A130u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 918u, 0x08883C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A130u) goto L_0889A130;
    return;
L_0889A130:
    ctx.set_gpr(31, 0x0889A138u);
    // nop
    goto L_08899890;
L_0889A138:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0889A13C;
L_0889A13C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A16C:
    ctx.set_gpr(31, 0x0889A174u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0DC34u;
    return;
L_0889A174:
    ctx.set_gpr(4, ctx.gpr[30] + static_cast<std::uint32_t>(28208));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_0889A18C;
      }
      goto L_0889A180;
    }
L_0889A180:
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(28244));
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0889A18C;
L_0889A18C:
    ctx.set_gpr(31, 0x0889A194u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 918u, 0x08883C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A194u) goto L_0889A194;
    return;
L_0889A194:
    ctx.set_gpr(5, ctx.gpr[18] < ctx.gpr[21] ? 1u : 0u);
    goto L_0889A118;
L_0889A19C:
    ctx.set_gpr(31, 0x0889A1A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0DC34u;
    return;
L_0889A1A4:
    ctx.set_gpr(4, ctx.gpr[30] + static_cast<std::uint32_t>(28208));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_0889A1BC;
      }
      goto L_0889A1B0;
    }
L_0889A1B0:
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(28244));
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0889A1BC;
L_0889A1BC:
    ctx.set_gpr(31, 0x0889A1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 918u, 0x08883C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A1C4u) goto L_0889A1C4;
    return;
L_0889A1C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    goto L_0889A0D4;
L_0889A1CC:
    ctx.set_gpr(31, 0x0889A1D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0DC34u;
    return;
L_0889A1D4:
    ctx.set_gpr(4, ctx.gpr[30] + static_cast<std::uint32_t>(28208));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_0889A1EC;
      }
      goto L_0889A1E0;
    }
L_0889A1E0:
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(28244));
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0889A1EC;
L_0889A1EC:
    ctx.set_gpr(31, 0x0889A1F4u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 918u, 0x08883C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A1F4u) goto L_0889A1F4;
    return;
L_0889A1F4:
    ctx.set_gpr(5, ctx.gpr[18] < ctx.gpr[21] ? 1u : 0u);
    goto L_0889A090;
L_0889A1FC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
        goto L_0889A09C;
    }
    goto L_0889A204;
L_0889A204:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_0889A068;
L_0889A20C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.set_gpr(30, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.set_gpr(21, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889A2A8;
      }
      goto L_0889A250;
    }
L_0889A250:
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    goto L_0889A254;
L_0889A254:
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(8832));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.gpr[5] << 3u);
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(31, 0x0889A284u);
    ctx.set_gpr(16, ctx.gpr[23] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0889A284u) goto L_0889A284;
    return;
L_0889A284:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0889A290u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0889A290u) goto L_0889A290;
    return;
L_0889A290:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0889A2E4;
      }
      goto L_0889A298;
    }
L_0889A298:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0889A29C;
L_0889A29C:
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0889A254;
      }
      goto L_0889A2A8;
    }
L_0889A2A8:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_0889A2B4;
L_0889A2B4:
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
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A2E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0889A390;
      }
      goto L_0889A2EC;
    }
L_0889A2EC:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[19] & 3u);
      if (branch_taken) {
          goto L_0889A3A8;
      }
      goto L_0889A2F8;
    }
L_0889A2F8:
    ctx.set_gpr(17, ctx.gpr[22] + ctx.gpr[18]);
    ctx.set_gpr(15, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x0889A30Cu);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
    goto L_0889A3FC;
L_0889A30C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_0889A29C;
    }
    goto L_0889A314;
L_0889A314:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[24] == 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_0889A394;
    }
    goto L_0889A324;
L_0889A324:
    ctx.set_gpr(17, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[22]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_0889A330;
L_0889A330:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x0889A33Cu);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_0889A3FC;
L_0889A33C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_0889A29C;
    }
    goto L_0889A344;
L_0889A344:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(31, 0x0889A350u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    goto L_0889A3FC;
L_0889A350:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_0889A29C;
    }
    goto L_0889A358;
L_0889A358:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(31, 0x0889A364u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    goto L_0889A3FC;
L_0889A364:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_0889A29C;
    }
    goto L_0889A36C;
L_0889A36C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0889A380u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0889A3FC;
L_0889A380:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0889A298;
      }
      goto L_0889A388;
    }
L_0889A388:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_0889A330;
    }
    goto L_0889A390;
L_0889A390:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889A394;
L_0889A394:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_0889A2B4;
L_0889A3A8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889A324;
      }
      goto L_0889A3B0;
    }
L_0889A3B0:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889A2F8;
      }
      goto L_0889A3B8;
    }
L_0889A3B8:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(14, ctx.gpr[22] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0889A3DC;
      }
      goto L_0889A3C0;
    }
L_0889A3C0:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x0889A3CCu);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_0889A3FC;
L_0889A3CC:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_0889A29C;
    }
    goto L_0889A3D4;
L_0889A3D4:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, ctx.gpr[22] + ctx.gpr[18]);
    goto L_0889A3DC;
L_0889A3DC:
    ctx.set_gpr(13, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x0889A3ECu);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0))))));
    goto L_0889A3FC;
L_0889A3EC:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_0889A29C;
    }
    goto L_0889A3F4;
L_0889A3F4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0889A2F8;
L_0889A3FC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(47));
    ctx.set_gpr(10, ctx.gpr[2] ^ 92u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    ctx.set_gpr(7, ctx.gpr[8] ^ 92u);
    if (ctx.gpr[10] != 0u) ctx.set_gpr(9, ctx.gpr[2]);
    if (ctx.gpr[7] == 0u) ctx.set_gpr(8, ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[8] ^ ctx.gpr[9]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    if (ctx.gpr[3] == 0u) ctx.set_gpr(2, 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A42C:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12992)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12992), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889A534;
      }
      goto L_0889A454;
    }
L_0889A454:
    ctx.set_gpr(4, 2248u << 16u);
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(-26592));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_0889A464;
L_0889A464:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0889A5BC;
      }
      goto L_0889A470;
    }
L_0889A470:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80))))));
    goto L_0889A474;
L_0889A474:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0889A5AC;
      }
      goto L_0889A47C;
    }
L_0889A47C:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(160))))));
    goto L_0889A480;
L_0889A480:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_0889A59C;
      }
      goto L_0889A488;
    }
L_0889A488:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(240))))));
    goto L_0889A48C;
L_0889A48C:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_0889A58C;
      }
      goto L_0889A494;
    }
L_0889A494:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(320))))));
    goto L_0889A498;
L_0889A498:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_0889A57C;
      }
      goto L_0889A4A0;
    }
L_0889A4A0:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(400))))));
    goto L_0889A4A4;
L_0889A4A4:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(400));
      if (branch_taken) {
          goto L_0889A56C;
      }
      goto L_0889A4AC;
    }
L_0889A4AC:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(480))))));
    goto L_0889A4B0;
L_0889A4B0:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(480));
      if (branch_taken) {
          goto L_0889A55C;
      }
      goto L_0889A4B8;
    }
L_0889A4B8:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(560))))));
    goto L_0889A4BC;
L_0889A4BC:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(560));
      if (branch_taken) {
          goto L_0889A54C;
      }
      goto L_0889A4C4;
    }
L_0889A4C4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    goto L_0889A4CC;
L_0889A4CC:
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_0889A464;
      }
      goto L_0889A4D4;
    }
L_0889A4D4:
    ctx.set_gpr(18, 2248u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24032)));
    ctx.set_gpr(31, 0x0889A4E4u);
    ctx.set_gpr(16, 2248u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 230u, 0x0889D3C4u>(ctx, &aot_mem) && ctx.pc == 0x0889A4E4u) goto L_0889A4E4;
    return;
L_0889A4E4:
    ctx.set_gpr(31, 0x0889A4ECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24028)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 38u, 0x0889C6B4u>(ctx, &aot_mem) && ctx.pc == 0x0889A4ECu) goto L_0889A4EC;
    return;
L_0889A4EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24032)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0889A4FCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 233u, 0x0889D3E0u>(ctx, &aot_mem) && ctx.pc == 0x0889A4FCu) goto L_0889A4FC;
    return;
L_0889A4FC:
    ctx.set_gpr(31, 0x0889A504u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24028)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 12u, 0x0889C50Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A504u) goto L_0889A504;
    return;
L_0889A504:
    ctx.set_gpr(31, 0x0889A50Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-24032)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 203u, 0x0889D27Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A50Cu) goto L_0889A50C;
    return;
L_0889A50C:
    ctx.set_gpr(31, 0x0889A514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 421u, 0x0889DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A514u) goto L_0889A514;
    return;
L_0889A514:
    ctx.set_gpr(31, 0x0889A51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 305u, 0x0889D858u>(ctx, &aot_mem) && ctx.pc == 0x0889A51Cu) goto L_0889A51C;
    return;
L_0889A51C:
    ctx.set_gpr(31, 0x0889A524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 1u, 0x0889C000u>(ctx, &aot_mem) && ctx.pc == 0x0889A524u) goto L_0889A524;
    return;
L_0889A524:
    ctx.set_gpr(31, 0x0889A52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 190u, 0x0889D17Cu>(ctx, &aot_mem) && ctx.pc == 0x0889A52Cu) goto L_0889A52C;
    return;
L_0889A52C:
    ctx.set_gpr(31, 0x0889A534u);
    // nop
    goto L_0889BBEC;
L_0889A534:
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
L_0889A54C:
    ctx.set_gpr(31, 0x0889A554u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_0889A9F0;
L_0889A554:
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    goto L_0889A4CC;
L_0889A55C:
    ctx.set_gpr(31, 0x0889A564u);
    // nop
    goto L_0889A9F0;
L_0889A564:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(560))))));
    goto L_0889A4BC;
L_0889A56C:
    ctx.set_gpr(31, 0x0889A574u);
    // nop
    goto L_0889A9F0;
L_0889A574:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(480))))));
    goto L_0889A4B0;
L_0889A57C:
    ctx.set_gpr(31, 0x0889A584u);
    // nop
    goto L_0889A9F0;
L_0889A584:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(400))))));
    goto L_0889A4A4;
L_0889A58C:
    ctx.set_gpr(31, 0x0889A594u);
    // nop
    goto L_0889A9F0;
L_0889A594:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(320))))));
    goto L_0889A498;
L_0889A59C:
    ctx.set_gpr(31, 0x0889A5A4u);
    // nop
    goto L_0889A9F0;
L_0889A5A4:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(240))))));
    goto L_0889A48C;
L_0889A5AC:
    ctx.set_gpr(31, 0x0889A5B4u);
    // nop
    goto L_0889A9F0;
L_0889A5B4:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(160))))));
    goto L_0889A480;
L_0889A5BC:
    ctx.set_gpr(31, 0x0889A5C4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0889A9F0;
L_0889A5C4:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(80))))));
    goto L_0889A474;
L_0889A5CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0889A9E4;
      }
      goto L_0889A604;
    }
L_0889A604:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0889A9D0;
      }
      goto L_0889A60C;
    }
L_0889A60C:
    ctx.set_gpr(31, 0x0889A614u);
    ctx.set_gpr(18, 0u + 0u);
    goto L_0889BC10;
L_0889A614:
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-26592));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_0889A628;
L_0889A628:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0889A9C8;
      }
      goto L_0889A640;
    }
L_0889A640:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0889A9C8;
      }
      goto L_0889A654;
    }
L_0889A654:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0889A9C8;
      }
      goto L_0889A668;
    }
L_0889A668:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0889A9C8;
      }
      goto L_0889A67C;
    }
L_0889A67C:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0889A9C8;
      }
      goto L_0889A690;
    }
L_0889A690:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0889A9C8;
      }
      goto L_0889A6A4;
    }
L_0889A6A4:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0889A9C8;
      }
      goto L_0889A6B8;
    }
L_0889A6B8:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0889A9C8;
      }
      goto L_0889A6CC;
    }
L_0889A6CC:
    if (ctx.gpr[7] != 0u) {
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_0889A628;
    }
    goto L_0889A6D4;
L_0889A6D4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(20, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0889A928;
      }
      goto L_0889A6DC;
    }
L_0889A6DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0889A8AC;
      }
      goto L_0889A6E4;
    }
L_0889A6E4:
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[22] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0889A9B8;
      }
      goto L_0889A700;
    }
L_0889A700:
    ctx.set_gpr(31, 0x0889A708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 342u, 0x0889DA40u>(ctx, &aot_mem) && ctx.pc == 0x0889A708u) goto L_0889A708;
    return;
L_0889A708:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889A9AC;
      }
      goto L_0889A710;
    }
L_0889A710:
    ctx.set_gpr(31, 0x0889A718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 426u, 0x0889DEE4u>(ctx, &aot_mem) && ctx.pc == 0x0889A718u) goto L_0889A718;
    return;
L_0889A718:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889A9A0;
      }
      goto L_0889A724;
    }
L_0889A724:
    ctx.set_gpr(31, 0x0889A72Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 459u, 0x0889E0B0u>(ctx, &aot_mem) && ctx.pc == 0x0889A72Cu) goto L_0889A72C;
    return;
L_0889A72C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889A98C;
      }
      goto L_0889A738;
    }
L_0889A738:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(31, 0x0889A748u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x0889A748u) goto L_0889A748;
    return;
L_0889A748:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889A96C;
      }
      goto L_0889A754;
    }
L_0889A754:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0889A764u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 377u, 0x0889DC74u>(ctx, &aot_mem) && ctx.pc == 0x0889A764u) goto L_0889A764;
    return;
L_0889A764:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(19, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0889A77Cu);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 371u, 0x0889DC30u>(ctx, &aot_mem) && ctx.pc == 0x0889A77Cu) goto L_0889A77C;
    return;
L_0889A77C:
    if (ctx.gpr[19] == 0u) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
        goto L_0889A8B0;
    }
    goto L_0889A784;
L_0889A784:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0889A788;
L_0889A788:
    ctx.set_gpr(19, ctx.gpr[17] << 2u);
    ctx.set_gpr(23, ctx.gpr[2] << 2u);
    ctx.set_gpr(31, 0x0889A798u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 342u, 0x0889DA40u>(ctx, &aot_mem) && ctx.pc == 0x0889A798u) goto L_0889A798;
    return;
L_0889A798:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[19] + ctx.gpr[30]);
    ctx.set_gpr(24, ctx.gpr[23] + ctx.gpr[25]);
    ctx.set_gpr(30, ctx.gpr[19] + ctx.gpr[9]);
    ctx.set_gpr(21, ctx.gpr[23] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889A9AC;
      }
      goto L_0889A7C4;
    }
L_0889A7C4:
    ctx.set_gpr(31, 0x0889A7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 426u, 0x0889DEE4u>(ctx, &aot_mem) && ctx.pc == 0x0889A7CCu) goto L_0889A7CC;
    return;
L_0889A7CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889A9A0;
      }
      goto L_0889A7D8;
    }
L_0889A7D8:
    ctx.set_gpr(31, 0x0889A7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 459u, 0x0889E0B0u>(ctx, &aot_mem) && ctx.pc == 0x0889A7E0u) goto L_0889A7E0;
    return;
L_0889A7E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889A98C;
      }
      goto L_0889A7F4;
    }
L_0889A7F4:
    ctx.set_gpr(31, 0x0889A7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x0889A7FCu) goto L_0889A7FC;
    return;
L_0889A7FC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889A96C;
      }
      goto L_0889A808;
    }
L_0889A808:
    ctx.set_gpr(31, 0x0889A810u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 377u, 0x0889DC74u>(ctx, &aot_mem) && ctx.pc == 0x0889A810u) goto L_0889A810;
    return;
L_0889A810:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[19] + ctx.gpr[11]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0889A828u);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 371u, 0x0889DC30u>(ctx, &aot_mem) && ctx.pc == 0x0889A828u) goto L_0889A828;
    return;
L_0889A828:
    ctx.set_gpr(31, 0x0889A830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 342u, 0x0889DA40u>(ctx, &aot_mem) && ctx.pc == 0x0889A830u) goto L_0889A830;
    return;
L_0889A830:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889A9AC;
      }
      goto L_0889A838;
    }
L_0889A838:
    ctx.set_gpr(31, 0x0889A840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 426u, 0x0889DEE4u>(ctx, &aot_mem) && ctx.pc == 0x0889A840u) goto L_0889A840;
    return;
L_0889A840:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889A9A0;
      }
      goto L_0889A848;
    }
L_0889A848:
    ctx.set_gpr(31, 0x0889A850u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 459u, 0x0889E0B0u>(ctx, &aot_mem) && ctx.pc == 0x0889A850u) goto L_0889A850;
    return;
L_0889A850:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889A98C;
      }
      goto L_0889A868;
    }
L_0889A868:
    ctx.set_gpr(31, 0x0889A870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x0889A870u) goto L_0889A870;
    return;
L_0889A870:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0889A96C;
      }
      goto L_0889A87C;
    }
L_0889A87C:
    ctx.set_gpr(31, 0x0889A884u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 377u, 0x0889DC74u>(ctx, &aot_mem) && ctx.pc == 0x0889A884u) goto L_0889A884;
    return;
L_0889A884:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, ctx.gpr[23] + ctx.gpr[14]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    ctx.set_gpr(31, 0x0889A8A4u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 371u, 0x0889DC30u>(ctx, &aot_mem) && ctx.pc == 0x0889A8A4u) goto L_0889A8A4;
    return;
L_0889A8A4:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889A788;
      }
      goto L_0889A8AC;
    }
L_0889A8AC:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_0889A8B0;
L_0889A8B0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12996)));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0889A964;
      }
      goto L_0889A8CC;
    }
L_0889A8CC:
    ctx.set_gpr(31, 0x0889A8D4u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_0889AFAC;
L_0889A8D4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(31, 0x0889A8E0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0889B188;
L_0889A8E0:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0889A914;
      }
      goto L_0889A8EC;
    }
L_0889A8EC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0889A8F0;
L_0889A8F0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0889A8FCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    goto L_0889AC50;
L_0889A8FC:
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0889A8F0;
      }
      goto L_0889A910;
    }
L_0889A910:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0889A914;
L_0889A914:
    ctx.set_gpr(5, 0u | 44100u);
    ctx.set_gpr(31, 0x0889A920u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_0889ABDC;
L_0889A920:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0889A928;
L_0889A928:
    ctx.set_gpr(31, 0x0889A930u);
    // nop
    goto L_0889BC2C;
L_0889A930:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    goto L_0889A934;
L_0889A934:
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
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889A964:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0889A8CC;
L_0889A96C:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(28400));
    goto L_0889A974;
L_0889A974:
    ctx.set_gpr(31, 0x0889A97Cu);
    // nop
    goto L_0889BCCC;
L_0889A97C:
    ctx.set_gpr(31, 0x0889A984u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0889A9F0;
L_0889A984:
    ctx.set_gpr(20, 0u + 0u);
    goto L_0889A928;
L_0889A98C:
    ctx.set_gpr(18, 2225u << 16u);
    ctx.set_gpr(31, 0x0889A998u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(28444));
    goto L_0889BCCC;
L_0889A998:
    ctx.set_gpr(20, 0u + 0u);
    goto L_0889A928;
L_0889A9A0:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(28492));
    goto L_0889A974;
L_0889A9AC:
    ctx.set_gpr(20, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(28540));
    goto L_0889A974;
L_0889A9B8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889A788;
      }
      goto L_0889A9C0;
    }
L_0889A9C0:
    // nop
    goto L_0889A700;
L_0889A9C8:
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    goto L_0889A6D4;
L_0889A9D0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28348));
    goto L_0889A9D4;
L_0889A9D4:
    ctx.set_gpr(31, 0x0889A9DCu);
    // nop
    goto L_0889BCCC;
L_0889A9DC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0889A934;
L_0889A9E4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28588));
    goto L_0889A9D4;
L_0889A9F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889AAB8;
      }
      goto L_0889AA1C;
    }
L_0889AA1C:
    ctx.set_gpr(31, 0x0889AA24u);
    ctx.set_gpr(19, 0u + 0u);
    goto L_0889BC10;
L_0889AA24:
    ctx.set_gpr(31, 0x0889AA2Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0889AB18;
L_0889AA2C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(3, 2248u << 16u);
      if (branch_taken) {
          goto L_0889AAA0;
      }
      goto L_0889AA38;
    }
L_0889AA38:
    ctx.set_gpr(22, ctx.gpr[3] + static_cast<std::uint32_t>(-24028));
    ctx.set_gpr(21, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(20, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(17, ctx.gpr[19] << 2u);
    goto L_0889AA48;
L_0889AA48:
    ctx.set_gpr(16, ctx.gpr[17] + ctx.gpr[21]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0889AB08;
      }
      goto L_0889AA5C;
    }
L_0889AA5C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    goto L_0889AA60;
L_0889AA60:
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[20]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[8] << 2u);
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[22]);
    ctx.set_gpr(31, 0x0889AA78u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 30u, 0x0889C664u>(ctx, &aot_mem) && ctx.pc == 0x0889AA78u) goto L_0889AA78;
    return;
L_0889AA78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0889AAF0;
      }
      goto L_0889AA84;
    }
L_0889AA84:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0889AA88;
L_0889AA88:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(4, ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_0889AAE0;
      }
      goto L_0889AA90;
    }
L_0889AA90:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    goto L_0889AA94;
L_0889AA94:
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(17, ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_0889AA48;
      }
      goto L_0889AAA0;
    }
L_0889AAA0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0889AAB0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889AAB0u) goto L_0889AAB0;
    return;
L_0889AAB0:
    ctx.set_gpr(31, 0x0889AAB8u);
    // nop
    goto L_0889BC2C;
L_0889AAB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_0889AAE0:
    ctx.set_gpr(31, 0x0889AAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 445u, 0x0889DFCCu>(ctx, &aot_mem) && ctx.pc == 0x0889AAE8u) goto L_0889AAE8;
    return;
L_0889AAE8:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    goto L_0889AA94;
L_0889AAF0:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x0889AB00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889AB00u) goto L_0889AB00;
    return;
L_0889AB00:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0889AA88;
L_0889AB08:
    ctx.set_gpr(31, 0x0889AB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 363u, 0x0889DBB4u>(ctx, &aot_mem) && ctx.pc == 0x0889AB10u) goto L_0889AB10;
    return;
L_0889AB10:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    goto L_0889AA60;
L_0889AB18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889ABC4;
      }
      goto L_0889AB34;
    }
L_0889AB34:
    ctx.set_gpr(31, 0x0889AB3Cu);
    // nop
    goto L_0889BC10;
L_0889AB3C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889ABBC;
      }
      goto L_0889AB48;
    }
L_0889AB48:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0889AB80;
      }
      goto L_0889AB58;
    }
L_0889AB58:
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0889AB60;
L_0889AB60:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0889AB6Cu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 392u, 0x0889DD30u>(ctx, &aot_mem) && ctx.pc == 0x0889AB6Cu) goto L_0889AB6C;
    return;
L_0889AB6C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0889AB60;
    }
    goto L_0889AB80;
L_0889AB80:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0889ABB8;
      }
      goto L_0889AB8C;
    }
L_0889AB8C:
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0889AB94;
L_0889AB94:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x0889ABA8u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889ABA8u) goto L_0889ABA8;
    return;
L_0889ABA8:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0889AB94;
    }
    goto L_0889ABB8;
L_0889ABB8:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0889ABBC;
L_0889ABBC:
    ctx.set_gpr(31, 0x0889ABC4u);
    // nop
    goto L_0889BC2C;
L_0889ABC4:
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
L_0889ABDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889AC34;
      }
      goto L_0889AC00;
    }
L_0889AC00:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0889AC30;
      }
      goto L_0889AC0C;
    }
L_0889AC0C:
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_0889AC10;
L_0889AC10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0889AC20u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 399u, 0x0889DD7Cu>(ctx, &aot_mem) && ctx.pc == 0x0889AC20u) goto L_0889AC20;
    return;
L_0889AC20:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889AC10;
      }
      goto L_0889AC30;
    }
L_0889AC30:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    goto L_0889AC34;
L_0889AC34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0889AC50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(3, 2248u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(8, 2227u << 16u);
    ctx.set_gpr(7, 32896u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(2, 26214u << 16u);
    ctx.set_gpr(21, ctx.gpr[3] + static_cast<std::uint32_t>(-24028));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(9, ctx.gpr[8] + static_cast<std::uint32_t>(4776));
    ctx.set_gpr(11, ctx.gpr[7] | 32897u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(12, ctx.gpr[2] | 26215u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(19, ctx.gpr[20] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_0889ADCC;
      }
      goto L_0889ACB0;
    }
L_0889ACB0:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[7] ^ 2u);
    if (ctx.gpr[2] == 0u) ctx.set_gpr(10, ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[10] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(16, ctx.gpr[13] << 2u);
    ctx.set_gpr(25, ctx.gpr[16] + ctx.gpr[21]);
    ctx.set_gpr(8, ctx.gpr[15] << 2u);
    ctx.set_gpr(24, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(15));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.gpr[14] - ctx.gpr[15]);
    ctx.set_gpr(16, ctx.gpr[7] << 2u);
    ctx.set_gpr(10, ctx.gpr[16] + ctx.gpr[9]);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(25, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[25] << 1u);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[8]) * static_cast<std::uint64_t>(ctx.gpr[11]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(15, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(24, ctx.gpr[15] >> 7u);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 31u));
    ctx.set_gpr(14, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(13, ctx.gpr[14] << 2u);
    ctx.set_gpr(16, ctx.gpr[13] + ctx.gpr[14]);
    ctx.set_gpr(7, ctx.gpr[16] << 1u);
    ctx.set_gpr(9, ctx.hi);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[7]) * static_cast<std::uint64_t>(ctx.gpr[11]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 2u));
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(25, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(14, ctx.hi);
    ctx.set_gpr(15, ctx.gpr[25] << 1u);
    ctx.set_gpr(13, ctx.gpr[24] - ctx.gpr[15]);
    ctx.set_gpr(24, ctx.gpr[14] >> 7u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 31u));
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[13]) < 5 ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[11] ^ 1u);
    ctx.set_gpr(7, ctx.gpr[16] + ctx.gpr[10]);
    ctx.set_gpr(9, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 2u));
    ctx.set_gpr(11, ctx.gpr[2] - ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[11] << 2u);
    ctx.set_gpr(25, ctx.gpr[3] + ctx.gpr[11]);
    ctx.set_gpr(15, ctx.gpr[25] << 1u);
    ctx.set_gpr(14, ctx.gpr[24] - ctx.gpr[15]);
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[14]) < 5 ? 1u : 0u);
    ctx.set_gpr(12, ctx.gpr[13] ^ 1u);
    ctx.set_gpr(31, 0x0889ADA4u);
    ctx.set_gpr(16, ctx.gpr[11] + ctx.gpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 41u, 0x0889C6D0u>(ctx, &aot_mem) && ctx.pc == 0x0889ADA4u) goto L_0889ADA4;
    return;
L_0889ADA4:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, ctx.gpr[10] << 2u);
    ctx.set_gpr(6, ctx.gpr[9] + ctx.gpr[21]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0889ADC4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 41u, 0x0889C6D0u>(ctx, &aot_mem) && ctx.pc == 0x0889ADC4u) goto L_0889ADC4;
    return;
L_0889ADC4:
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    goto L_0889ADCC;
L_0889ADCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_0889ADF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < -14 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889AE84;
      }
      goto L_0889AE18;
    }
L_0889AE18:
    ctx.set_gpr(9, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[4]);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[6]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_0889AEA0;
      }
      goto L_0889AE2C;
    }
L_0889AE2C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-15));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    goto L_0889AE38;
L_0889AE38:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(24, 2248u << 16u);
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(17, ctx.gpr[24] + static_cast<std::uint32_t>(-24028));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(16, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(10, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x0889AE64u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 41u, 0x0889C6D0u>(ctx, &aot_mem) && ctx.pc == 0x0889AE64u) goto L_0889AE64;
    return;
L_0889AE64:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[11] << 2u);
    ctx.set_gpr(18, ctx.gpr[9] + ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0889AE84u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 41u, 0x0889C6D0u>(ctx, &aot_mem) && ctx.pc == 0x0889AE84u) goto L_0889AE84;
    return;
L_0889AE84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0889AEA0:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(3, 2227u << 16u);
    ctx.set_gpr(11, ctx.gpr[12] - ctx.gpr[8]);
    ctx.set_gpr(10, ctx.gpr[3] + static_cast<std::uint32_t>(4776));
    ctx.set_gpr(9, ctx.gpr[11] << 2u);
    ctx.set_gpr(2, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[10]);
    ctx.set_gpr(7, 32896u << 16u);
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(4, 26214u << 16u);
    ctx.set_gpr(9, ctx.gpr[5] << 2u);
    ctx.set_gpr(10, ctx.gpr[7] | 32897u);
    ctx.set_gpr(11, ctx.gpr[4] | 26215u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(4, ctx.gpr[9] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_0889AEF0;
      }
      goto L_0889AEE0;
    }
L_0889AEE0:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    goto L_0889AE38;
L_0889AEF0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[5] << 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[9] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(15, ctx.gpr[2] << 2u);
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[2]);
    ctx.set_gpr(13, ctx.gpr[14] << 1u);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[13]) * static_cast<std::uint64_t>(ctx.gpr[10]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(12, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(14, ctx.gpr[12] >> 7u);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 31u));
    ctx.set_gpr(25, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(24, ctx.gpr[25] << 2u);
    ctx.set_gpr(19, ctx.gpr[24] + ctx.gpr[25]);
    ctx.set_gpr(5, ctx.gpr[19] << 1u);
    ctx.set_gpr(17, ctx.hi);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[5]) * static_cast<std::uint64_t>(ctx.gpr[10]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.set_gpr(12, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(15, ctx.gpr[12] << 2u);
    ctx.set_gpr(8, ctx.gpr[15] + ctx.gpr[12]);
    ctx.set_gpr(13, ctx.hi);
    ctx.set_gpr(16, ctx.gpr[13] >> 7u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[8] << 1u);
    ctx.set_gpr(6, ctx.gpr[14] - ctx.gpr[3]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    ctx.set_gpr(10, ctx.hi);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    ctx.set_gpr(13, ctx.gpr[24] - ctx.gpr[25]);
    ctx.set_gpr(19, ctx.gpr[13] << 2u);
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[13]);
    ctx.set_gpr(15, ctx.gpr[17] << 1u);
    ctx.set_gpr(14, ctx.gpr[16] - ctx.gpr[15]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[14]) < 5 ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[7] ^ 1u);
    ctx.set_gpr(6, ctx.gpr[8] ^ 1u);
    ctx.set_gpr(7, ctx.gpr[12] + ctx.gpr[4]);
    ctx.set_gpr(19, ctx.gpr[13] + ctx.gpr[6]);
    goto L_0889AE38;
L_0889AFAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889B05C;
      }
      goto L_0889AFD8;
    }
L_0889AFD8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0889B060;
      }
      goto L_0889AFE0;
    }
L_0889AFE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0889B064;
      }
      goto L_0889AFEC;
    }
L_0889AFEC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_0889B064;
      }
      goto L_0889AFFC;
    }
L_0889AFFC:
    ctx.set_gpr(4, 2248u << 16u);
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(21, ctx.gpr[4] + static_cast<std::uint32_t>(-24028));
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    goto L_0889B010;
L_0889B010:
    ctx.set_gpr(16, ctx.gpr[19] << 2u);
    ctx.set_gpr(6, ctx.gpr[16] + ctx.gpr[20]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x0889B024u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 16u, 0x0889C558u>(ctx, &aot_mem) && ctx.pc == 0x0889B024u) goto L_0889B024;
    return;
L_0889B024:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[16] + ctx.gpr[29]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0889B03Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0889AC50;
L_0889B03C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889B084;
      }
      goto L_0889B048;
    }
L_0889B048:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889B010;
      }
      goto L_0889B05C;
    }
L_0889B05C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0889B060;
L_0889B060:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_0889B064;
L_0889B064:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_0889B084:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.set_gpr(8, 0u - ctx.gpr[19]);
      if (branch_taken) {
          goto L_0889B160;
      }
      goto L_0889B08C;
    }
L_0889B08C:
    ctx.set_gpr(3, ctx.gpr[8] & 3u);
    ctx.set_gpr(21, ctx.gpr[22] + static_cast<std::uint32_t>(-24028));
    ctx.set_gpr(20, ctx.gpr[18] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_0889B0F4;
      }
      goto L_0889B0A0;
    }
L_0889B0A0:
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889B0D0;
      }
      goto L_0889B0AC;
    }
L_0889B0AC:
    if (ctx.gpr[10] != 0u) {
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
        goto L_0889B16C;
    }
    goto L_0889B0B4;
L_0889B0B4:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    goto L_0889B0B8;
L_0889B0B8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(14, ctx.gpr[15] << 2u);
    ctx.set_gpr(13, ctx.gpr[14] + ctx.gpr[21]);
    ctx.set_gpr(31, 0x0889B0D0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 30u, 0x0889C664u>(ctx, &aot_mem) && ctx.pc == 0x0889B0D0u) goto L_0889B0D0;
    return;
L_0889B0D0:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(19, ctx.gpr[22] << 2u);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[21]);
    ctx.set_gpr(31, 0x0889B0ECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 30u, 0x0889C664u>(ctx, &aot_mem) && ctx.pc == 0x0889B0ECu) goto L_0889B0EC;
    return;
L_0889B0EC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0889B164;
      }
      goto L_0889B0F4;
    }
L_0889B0F4:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    goto L_0889B0F8;
L_0889B0F8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(12, ctx.gpr[13] << 2u);
    ctx.set_gpr(11, ctx.gpr[12] + ctx.gpr[21]);
    ctx.set_gpr(31, 0x0889B110u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 30u, 0x0889C664u>(ctx, &aot_mem) && ctx.pc == 0x0889B110u) goto L_0889B110;
    return;
L_0889B110:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(10, ctx.gpr[2] << 2u);
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[21]);
    ctx.set_gpr(31, 0x0889B128u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 30u, 0x0889C664u>(ctx, &aot_mem) && ctx.pc == 0x0889B128u) goto L_0889B128;
    return;
L_0889B128:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[8] << 2u);
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[21]);
    ctx.set_gpr(31, 0x0889B140u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 30u, 0x0889C664u>(ctx, &aot_mem) && ctx.pc == 0x0889B140u) goto L_0889B140;
    return;
L_0889B140:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, ctx.gpr[3] << 2u);
    ctx.set_gpr(24, ctx.gpr[25] + ctx.gpr[21]);
    ctx.set_gpr(31, 0x0889B158u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 30u, 0x0889C664u>(ctx, &aot_mem) && ctx.pc == 0x0889B158u) goto L_0889B158;
    return;
L_0889B158:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
        goto L_0889B0F8;
    }
    goto L_0889B160;
L_0889B160:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0889B164;
L_0889B164:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_0889B05C;
L_0889B16C:
    ctx.set_gpr(16, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(11, ctx.gpr[12] << 2u);
    ctx.set_gpr(2, ctx.gpr[11] + ctx.gpr[21]);
    ctx.set_gpr(31, 0x0889B180u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 30u, 0x0889C664u>(ctx, &aot_mem) && ctx.pc == 0x0889B180u) goto L_0889B180;
    return;
L_0889B180:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    goto L_0889B0B8;
L_0889B188:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0889B1FC;
      }
      goto L_0889B1A4;
    }
L_0889B1A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0889B200;
      }
      goto L_0889B1AC;
    }
L_0889B1AC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B200;
      }
      goto L_0889B1BC;
    }
L_0889B1BC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0889B204;
      }
      goto L_0889B1C8;
    }
L_0889B1C8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0889B200;
      }
      goto L_0889B1D4;
    }
L_0889B1D4:
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    goto L_0889B1D8;
L_0889B1D8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0889B1E8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0889AC50;
L_0889B1E8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889B1D8;
      }
      goto L_0889B1FC;
    }
L_0889B1FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0889B200;
L_0889B200:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0889B204;
L_0889B204:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B214:
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13000), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B22C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889B23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 236u, 0x0889D3F8u>(ctx, &aot_mem) && ctx.pc == 0x0889B23Cu) goto L_0889B23C;
    return;
L_0889B23C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B2A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.set_gpr(7, 2248u << 16u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(2, 2248u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.set_gpr(21, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-24024), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24020), ctx.gpr[6]);
    ctx.set_gpr(31, 0x0889B2ECu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24016), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 447u, 0x0889DFDCu>(ctx, &aot_mem) && ctx.pc == 0x0889B2ECu) goto L_0889B2EC;
    return;
L_0889B2EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889B358;
      }
      goto L_0889B2F4;
    }
L_0889B2F4:
    ctx.set_gpr(4, 2248u << 16u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(23, 2225u << 16u);
    ctx.set_gpr(19, ctx.gpr[4] + static_cast<std::uint32_t>(-26592));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[20] & 1u);
      if (branch_taken) {
          goto L_0889B450;
      }
      goto L_0889B30C;
    }
L_0889B30C:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-26592))))));
    goto L_0889B310;
L_0889B310:
    if (ctx.gpr[6] == ctx.gpr[22]) {
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
        goto L_0889B40C;
    }
    goto L_0889B318;
L_0889B318:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0889B31C;
L_0889B31C:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0889B358;
      }
      goto L_0889B328;
    }
L_0889B328:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    goto L_0889B32C;
L_0889B32C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[22];
    ctx.set_gpr(18, ctx.gpr[19] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0889B3C8;
      }
      goto L_0889B33C;
    }
L_0889B33C:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80))))));
    goto L_0889B340;
L_0889B340:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const bool branch_taken = ctx.gpr[14] == ctx.gpr[22];
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_0889B384;
      }
      goto L_0889B34C;
    }
L_0889B34C:
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    goto L_0889B350;
L_0889B350:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
        goto L_0889B32C;
    }
    goto L_0889B358;
L_0889B358:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B384:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.set_gpr(31, 0x0889B3A0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[15]);
    goto L_0889A9F0;
L_0889B3A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0889B3B0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    goto L_0889A5CC;
L_0889B3B0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0889B3C0u);
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(28640));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 40u, 0x08814470u>(ctx, &aot_mem) && ctx.pc == 0x0889B3C0u) goto L_0889B3C0;
    return;
L_0889B3C0:
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    goto L_0889B350;
L_0889B3C8:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    ctx.set_gpr(31, 0x0889B3E4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    goto L_0889A9F0;
L_0889B3E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0889B3F4u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    goto L_0889A5CC;
L_0889B3F4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0889B404u);
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(28640));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 40u, 0x08814470u>(ctx, &aot_mem) && ctx.pc == 0x0889B404u) goto L_0889B404;
    return;
L_0889B404:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80))))));
    goto L_0889B340;
L_0889B40C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.set_gpr(31, 0x0889B428u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    goto L_0889A9F0;
L_0889B428:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0889B438u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    goto L_0889A5CC;
L_0889B438:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0889B448u);
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(28640));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 40u, 0x08814470u>(ctx, &aot_mem) && ctx.pc == 0x0889B448u) goto L_0889B448;
    return;
L_0889B448:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0889B31C;
L_0889B450:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
        goto L_0889B32C;
    }
    goto L_0889B458;
L_0889B458:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-26592))))));
    goto L_0889B310;
L_0889B460:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12992)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4900)));
      if (branch_taken) {
          goto L_0889B49C;
      }
      goto L_0889B480;
    }
L_0889B480:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12992)));
    goto L_0889B484;
L_0889B484:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12992), ctx.gpr[10]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B49C:
    ctx.set_gpr(31, 0x0889B4A4u);
    // nop
    goto L_0889BBCC;
L_0889B4A4:
    ctx.set_gpr(31, 0x0889B4ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 182u, 0x0889D0CCu>(ctx, &aot_mem) && ctx.pc == 0x0889B4ACu) goto L_0889B4AC;
    return;
L_0889B4AC:
    ctx.set_gpr(31, 0x0889B4B4u);
    // nop
    goto L_0889BFB0;
L_0889B4B4:
    ctx.set_gpr(31, 0x0889B4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D800u>(ctx, &aot_mem) && ctx.pc == 0x0889B4BCu) goto L_0889B4BC;
    return;
L_0889B4BC:
    ctx.set_gpr(31, 0x0889B4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 417u, 0x0889DE4Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B4C4u) goto L_0889B4C4;
    return;
L_0889B4C4:
    ctx.set_gpr(31, 0x0889B4CCu);
    ctx.set_gpr(4, 0u + 0u);
    goto L_0889B7C8;
L_0889B4CC:
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12996)));
    ctx.set_gpr(7, 2248u << 16u);
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(-24032));
    ctx.set_gpr(4, ctx.gpr[8] << 2u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(31, 0x0889B4ECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 218u, 0x0889D338u>(ctx, &aot_mem) && ctx.pc == 0x0889B4ECu) goto L_0889B4EC;
    return;
L_0889B4EC:
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-26592));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0889B500u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2560));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889B500u) goto L_0889B500;
    return;
L_0889B500:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12992)));
    goto L_0889B484;
L_0889B560:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889B5DC;
      }
      goto L_0889B57C;
    }
L_0889B57C:
    ctx.set_gpr(31, 0x0889B584u);
    // nop
    goto L_0889BC10;
L_0889B584:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889B5D4;
      }
      goto L_0889B594;
    }
L_0889B594:
    ctx.set_gpr(31, 0x0889B59Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0889AB18;
L_0889B59C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0889B5CC;
      }
      goto L_0889B5A8;
    }
L_0889B5A8:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0889B5B0;
L_0889B5B0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0889B5BCu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 383u, 0x0889DCB8u>(ctx, &aot_mem) && ctx.pc == 0x0889B5BCu) goto L_0889B5BC;
    return;
L_0889B5BC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0889B5B0;
    }
    goto L_0889B5CC;
L_0889B5CC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0889B5D4;
L_0889B5D4:
    ctx.set_gpr(31, 0x0889B5DCu);
    // nop
    goto L_0889BC2C;
L_0889B5DC:
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
L_0889B5F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889B654;
      }
      goto L_0889B618;
    }
L_0889B618:
    ctx.set_gpr(31, 0x0889B620u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_0889BC10;
L_0889B620:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889B64C;
      }
      goto L_0889B62C;
    }
L_0889B62C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0889B63Cu);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 405u, 0x0889DDC0u>(ctx, &aot_mem) && ctx.pc == 0x0889B63Cu) goto L_0889B63C;
    return;
L_0889B63C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889B62C;
      }
      goto L_0889B64C;
    }
L_0889B64C:
    ctx.set_gpr(31, 0x0889B654u);
    // nop
    goto L_0889BC2C;
L_0889B654:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0889B670:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0889B688;
      }
      goto L_0889B680;
    }
L_0889B680:
    ctx.set_gpr(31, 0x0889B688u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 415u, 0x0889DE3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B688u) goto L_0889B688;
    return;
L_0889B688:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B694:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0889B6A0;
      }
      goto L_0889B69C;
    }
L_0889B69C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_0889B6A0;
L_0889B6A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B72C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0889B748u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889B748u) goto L_0889B748;
    return;
L_0889B748:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B758:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x0889B770u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 416u, 0x0889DE44u>(ctx, &aot_mem) && ctx.pc == 0x0889B770u) goto L_0889B770;
    return;
L_0889B770:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B77C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889B79C;
      }
      goto L_0889B788;
    }
L_0889B788:
    ctx.set_gpr(31, 0x0889B790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 175u, 0x0889D07Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B790u) goto L_0889B790;
    return;
L_0889B790:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889B794;
L_0889B794:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B79C:
    ctx.set_gpr(31, 0x0889B7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 168u, 0x0889D034u>(ctx, &aot_mem) && ctx.pc == 0x0889B7A4u) goto L_0889B7A4;
    return;
L_0889B7A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889B794;
L_0889B7AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889B7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 167u, 0x0889CFE4u>(ctx, &aot_mem) && ctx.pc == 0x0889B7BCu) goto L_0889B7BC;
    return;
L_0889B7BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B7C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(6, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 2248u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(13000)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-24032));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[19] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[19] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889B810u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 197u, 0x0889D1D0u>(ctx, &aot_mem) && ctx.pc == 0x0889B810u) goto L_0889B810;
    return;
L_0889B810:
    ctx.set_gpr(5, 2248u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, ctx.gpr[5] + static_cast<std::uint32_t>(-24012));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28676));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[20] + ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0889B864;
      }
      goto L_0889B834;
    }
L_0889B834:
    ctx.set_gpr(31, 0x0889B83Cu);
    // nop
    goto L_0889BCCC;
L_0889B83C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0889B840;
L_0889B840:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_0889B864:
    ctx.set_gpr(31, 0x0889B86Cu);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 215u, 0x0889D308u>(ctx, &aot_mem) && ctx.pc == 0x0889B86Cu) goto L_0889B86C;
    return;
L_0889B86C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(21, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889B8A8;
      }
      goto L_0889B880;
    }
L_0889B880:
    ctx.set_gpr(31, 0x0889B888u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 215u, 0x0889D308u>(ctx, &aot_mem) && ctx.pc == 0x0889B888u) goto L_0889B888;
    return;
L_0889B888:
    ctx.set_gpr(8, 2248u << 16u);
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(-24028));
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[22]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(20, ctx.gpr[17] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889B8F4;
      }
      goto L_0889B8A8;
    }
L_0889B8A8:
    ctx.set_gpr(12, 2225u << 16u);
    ctx.set_gpr(31, 0x0889B8B4u);
    ctx.set_gpr(4, ctx.gpr[12] + static_cast<std::uint32_t>(28728));
    goto L_0889BCCC;
L_0889B8B4:
    ctx.set_gpr(11, 2248u << 16u);
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(-24028));
    ctx.set_gpr(18, ctx.gpr[17] + ctx.gpr[10]);
    ctx.set_gpr(31, 0x0889B8C8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 38u, 0x0889C6B4u>(ctx, &aot_mem) && ctx.pc == 0x0889B8C8u) goto L_0889B8C8;
    return;
L_0889B8C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0889B8D8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 233u, 0x0889D3E0u>(ctx, &aot_mem) && ctx.pc == 0x0889B8D8u) goto L_0889B8D8;
    return;
L_0889B8D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_0889B8DC;
L_0889B8DC:
    ctx.set_gpr(31, 0x0889B8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 12u, 0x0889C50Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B8E4u) goto L_0889B8E4;
    return;
L_0889B8E4:
    ctx.set_gpr(31, 0x0889B8ECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 203u, 0x0889D27Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B8ECu) goto L_0889B8EC;
    return;
L_0889B8EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0889B840;
L_0889B8F4:
    ctx.set_gpr(31, 0x0889B8FCu);
    // nop
    goto L_0889BF58;
L_0889B8FC:
    ctx.set_gpr(4, 2186u << 16u);
    ctx.set_gpr(9, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-18088));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(28776));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889B940;
      }
      goto L_0889B918;
    }
L_0889B918:
    ctx.set_gpr(31, 0x0889B920u);
    // nop
    goto L_0889BCCC;
L_0889B920:
    ctx.set_gpr(31, 0x0889B928u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 38u, 0x0889C6B4u>(ctx, &aot_mem) && ctx.pc == 0x0889B928u) goto L_0889B928;
    return;
L_0889B928:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0889B938u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 233u, 0x0889D3E0u>(ctx, &aot_mem) && ctx.pc == 0x0889B938u) goto L_0889B938;
    return;
L_0889B938:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_0889B8DC;
L_0889B940:
    ctx.set_gpr(31, 0x0889B948u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 233u, 0x0889D3E0u>(ctx, &aot_mem) && ctx.pc == 0x0889B948u) goto L_0889B948;
    return;
L_0889B948:
    ctx.set_gpr(31, 0x0889B950u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 34u, 0x0889C690u>(ctx, &aot_mem) && ctx.pc == 0x0889B950u) goto L_0889B950;
    return;
L_0889B950:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0889B840;
L_0889B958:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0889B96Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 424u, 0x088A2324u>(ctx, &aot_mem) && ctx.pc == 0x0889B96Cu) goto L_0889B96C;
    return;
L_0889B96C:
    ctx.set_gpr(31, 0x0889B974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 311u, 0x0889D900u>(ctx, &aot_mem) && ctx.pc == 0x0889B974u) goto L_0889B974;
    return;
L_0889B974:
    ctx.set_gpr(3, 2248u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-24028));
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(31, 0x0889B98Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 6u, 0x0889C488u>(ctx, &aot_mem) && ctx.pc == 0x0889B98Cu) goto L_0889B98C;
    return;
L_0889B98C:
    ctx.set_gpr(31, 0x0889B994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 431u, 0x088A237Cu>(ctx, &aot_mem) && ctx.pc == 0x0889B994u) goto L_0889B994;
    return;
L_0889B994:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889B9A4:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(-32767));
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(-32767));
    goto L_0889B9B4;
L_0889B9B4:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[9] : ctx.gpr[13]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[10] : ctx.gpr[12]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[9] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[8] : ctx.gpr[11]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[7] : ctx.gpr[13]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[8] : ctx.gpr[12]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[7] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[9] : ctx.gpr[13]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[10] : ctx.gpr[12]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[9] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[8] : ctx.gpr[11]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[7] : ctx.gpr[13]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[8] : ctx.gpr[12]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[7] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[9] : ctx.gpr[13]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[10] : ctx.gpr[12]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[9] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[8] : ctx.gpr[11]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[7] : ctx.gpr[13]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[8] : ctx.gpr[12]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[7] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[9] : ctx.gpr[13]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[10] : ctx.gpr[12]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[9] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[8] : ctx.gpr[11]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[7] : ctx.gpr[13]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[8] : ctx.gpr[12]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[7] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[9] : ctx.gpr[13]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[10] : ctx.gpr[12]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[9] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[8] : ctx.gpr[11]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[7] : ctx.gpr[13]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[8] : ctx.gpr[12]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[7] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[9] : ctx.gpr[13]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[10] : ctx.gpr[12]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[9] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[8] : ctx.gpr[11]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[7] : ctx.gpr[13]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[8] : ctx.gpr[12]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[7] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[9] : ctx.gpr[13]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[10] : ctx.gpr[12]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[9] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[8] : ctx.gpr[11]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[7] : ctx.gpr[13]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[8] : ctx.gpr[12]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[7] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[9] : ctx.gpr[13]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[10]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[10] : ctx.gpr[12]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[9] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[8] : ctx.gpr[11]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[7] : ctx.gpr[13]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) > static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[8] : ctx.gpr[12]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[7]) > static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[7] : ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889B9B4;
      }
      goto L_0889BBC4;
    }
L_0889BBC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889BBCC:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13016)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889BBE4;
      }
      goto L_0889BBDC;
    }
L_0889BBDC:
    ctx.set_gpr(5, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(13008), 0u);
    goto L_0889BBE4;
L_0889BBE4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13016), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889BBEC:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(13016)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(13016), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889BC08;
      }
      goto L_0889BC00;
    }
L_0889BC00:
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13008), 0u);
    goto L_0889BC08;
L_0889BC08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889BC10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889BC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 424u, 0x088A2324u>(ctx, &aot_mem) && ctx.pc == 0x0889BC20u) goto L_0889BC20;
    return;
L_0889BC20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889BC2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889BC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 431u, 0x088A237Cu>(ctx, &aot_mem) && ctx.pc == 0x0889BC3Cu) goto L_0889BC3C;
    return;
L_0889BC3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889BCCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2248u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-24004));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889BCF0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0889BCF0u) goto L_0889BCF0;
    return;
L_0889BCF0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13020)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0889BD10;
      }
      goto L_0889BD00;
    }
L_0889BD00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0889BD04;
L_0889BD04:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889BD10:
    ctx.set_gpr(6, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0889BD1Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(13024)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889BD1Cu) goto L_0889BD1C;
    return;
L_0889BD1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0889BD04;
L_0889BD24:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(13, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(10, ctx.gpr[12] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(11, ctx.gpr[13] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(14, ctx.gpr[24] + ctx.gpr[25]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, ctx.gpr[9] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14))))));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[25]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.set_gpr(14, ctx.gpr[8] + ctx.gpr[24]);
    ctx.set_gpr(15, ctx.gpr[25] + ctx.gpr[3]);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    ctx.set_gpr(10, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[15]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(13, ctx.gpr[9] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[24]);
    ctx.set_gpr(10, ctx.gpr[12] + ctx.gpr[8]);
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[13]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[13] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[14]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(26))))));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28))))));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30))))));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(15, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> (ctx.gpr[6] & 31u)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.set_gpr(13, ctx.gpr[24] + ctx.gpr[25]);
    ctx.set_gpr(10, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[11] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[15]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889BD24;
      }
      goto L_0889BE74;
    }
L_0889BE74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889BE7C:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> (ctx.gpr[6] & 31u)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> (ctx.gpr[6] & 31u)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[12]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(26))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[24]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> (ctx.gpr[6] & 31u)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28))))));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[15]);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> (ctx.gpr[6] & 31u)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[11]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[6] & 31u)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> (ctx.gpr[6] & 31u)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0889BE7C;
      }
      goto L_0889BF50;
    }
L_0889BF50:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889BF58:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_0889BFA0;
      }
      goto L_0889BF60;
    }
L_0889BF60:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(13060))))));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(13060));
      if (branch_taken) {
          goto L_0889BFA8;
      }
      goto L_0889BF74;
    }
L_0889BF74:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_0889BFA0;
      }
      goto L_0889BF7C;
    }
L_0889BF7C:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), ctx.gpr[8]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0889BFA0;
L_0889BFA0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889BFA8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0889BF74;
L_0889BFB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13056)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(13060));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(408));
      if (branch_taken) {
          goto L_0889BFF0;
      }
      goto L_0889BFD8;
    }
L_0889BFD8:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(13056), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889BFF0:
    ctx.set_gpr(31, 0x0889BFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889BFF8u) goto L_0889BFF8;
    return;
L_0889BFF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13056)));
    goto L_0889BFD8;
}

void recomp_unit_0037(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0037_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_37(Runtime &runtime) {
    runtime.register_generated_unit(37u, 0x08898000u, 16384u, &recomp_unit_0037, &recomp_unit_0037_entry);
    runtime.register_function(0x08898000u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898018u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898028u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889802Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898034u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889803Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898048u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898060u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898074u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889807Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898088u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889809Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088980A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088980ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088980C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088980F0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898104u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898110u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889811Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898124u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889812Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898148u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889815Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898170u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889817Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898190u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898194u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088981A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088981B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088981C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088981D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088981E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898204u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889820Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898214u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889821Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898224u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898230u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898238u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898248u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889824Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889825Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898274u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898280u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898288u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898294u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088982A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088982ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088982B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088982C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088982D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088982D8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088982E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088982E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088982ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088982F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898300u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889830Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898314u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889831Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889832Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889833Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898348u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898358u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898368u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898378u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898388u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898398u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088983C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088983CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088983D8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889845Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898468u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898474u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898480u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898494u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088984A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088984ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088984C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088984DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088984E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088984FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898500u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889850Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898514u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898520u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898528u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088985A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088985C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088985D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088985E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088985E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088985F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088985FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889860Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898614u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898644u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898648u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898650u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898658u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898664u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898688u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898690u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898698u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986D8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986E4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898704u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898714u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889871Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898720u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898724u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898744u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898774u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889877Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898780u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088987B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088987BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088987C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088987CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088987DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088987E4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088987F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889880Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898810u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889881Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898828u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889882Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898834u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898870u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898878u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898884u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889888Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898894u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088988A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088988A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088988BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088988C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088988CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088988D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088988DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088988E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088988F0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088988FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898918u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898924u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889892Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898938u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898948u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898954u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889895Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898968u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898970u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889897Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898984u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898990u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898998u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088989A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088989A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088989B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088989B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088989C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088989C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088989D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A08u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A18u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A1Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A48u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A4Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A58u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A64u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A6Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A74u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A7Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A94u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AA0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AB0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AB4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898ABCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AC8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AD4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898ADCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AE4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AF4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AFCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B24u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B2Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B34u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B40u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B48u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B50u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B58u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B60u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B68u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B70u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B98u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898BA0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898BA8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898BB4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898BB8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898BC0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898BCCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898BD4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898BECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898BF8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C00u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C0Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C14u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C20u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C24u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C30u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C50u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C58u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C5Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C64u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C70u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C80u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C88u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C90u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CB4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CBCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CC4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CD0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CE0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CE8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CF8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D00u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D08u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D10u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D30u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D3Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D90u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DA0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DC0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DDCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DE4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DF8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E10u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E2Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E34u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E38u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E40u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889909Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088990D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088990DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088990F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899104u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899108u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899110u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899114u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899118u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899120u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899128u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899154u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899160u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899168u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899170u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899178u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899180u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899188u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991D8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991F0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899220u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899228u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899230u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899238u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889924Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889926Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899274u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889928Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899290u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992F0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899304u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899314u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088993DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088993F0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899400u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899404u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889940Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899410u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899420u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899430u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899438u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899444u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889944Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899454u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889945Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899464u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899474u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889947Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899484u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994D8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899510u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899514u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899520u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899528u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899530u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899544u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899548u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899554u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889955Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899564u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889956Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899584u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899594u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995E4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899614u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889961Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899630u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899638u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899648u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899650u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889965Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889966Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899670u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899690u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088996D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088996D8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088996E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088996F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899704u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899708u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899710u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889971Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899724u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899728u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899754u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889977Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088997A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088997A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088997B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088997BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088997C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088997DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088997ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088997F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899808u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899810u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889981Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899824u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899840u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899850u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889986Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899874u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889987Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899890u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088998ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088998FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889990Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899914u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889991Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899928u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899930u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899938u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899940u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899944u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899970u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889997Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889998Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899998u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088999A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088999B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088999C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088999D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088999E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088999ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088999F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A04u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A0Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A14u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A1Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A34u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A40u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A48u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A50u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A64u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A70u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A7Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A84u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A8Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A94u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A9Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899AACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899AB8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899AC0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899ACCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899AD4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899ADCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899BF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899C20u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899C24u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899C2Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899C34u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899C3Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899C68u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899C6Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899C7Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899C84u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899C98u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899CE8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899CF4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D04u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D24u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D2Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D30u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D4Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D54u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D58u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D60u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D7Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D80u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D8Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D9Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899DACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899DC4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899DD8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899DE8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899DF8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899DFCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899E30u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899E3Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899E84u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899E98u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899EA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899ED0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899EE0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899EE4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899EF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899F00u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899F0Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899F18u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899F4Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899F5Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899F78u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899F8Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899FA8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899FB0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899FB4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899FD0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899FD8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899FF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899FF8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A03Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A048u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A064u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A068u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A07Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A088u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A090u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A098u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A09Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A0C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A0D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A0D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A104u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A110u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A118u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A120u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A130u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A138u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A13Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A16Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A174u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A180u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A18Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A194u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A19Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A204u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A20Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A250u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A254u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A284u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A290u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A298u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A29Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A2A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A2B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A2E4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A2ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A2F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A30Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A314u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A324u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A330u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A33Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A344u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A350u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A358u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A364u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A36Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A380u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A388u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A390u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A394u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A42Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A454u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A464u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A470u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A474u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A47Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A480u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A488u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A48Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A494u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A498u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A4A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A4A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A4ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A4B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A4B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A4BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A4C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A4CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A4D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A4E4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A4ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A4FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A504u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A50Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A514u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A51Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A524u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A52Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A534u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A54Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A554u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A55Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A564u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A56Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A574u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A57Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A584u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A58Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A594u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A59Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A5A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A5ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A5B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A5BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A5C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A5CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A604u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A60Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A614u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A628u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A640u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A654u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A668u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A67Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A690u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A6A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A6B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A6CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A6D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A6DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A6E4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A700u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A708u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A710u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A718u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A724u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A72Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A738u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A748u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A754u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A764u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A77Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A784u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A788u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A798u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A7C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A7CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A7D8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A7E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A7F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A7FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A808u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A810u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A828u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A830u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A838u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A840u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A848u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A850u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A868u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A870u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A87Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A884u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A8A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A8ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A8B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A8CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A8D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A8E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A8ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A8F0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A8FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A910u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A914u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A920u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A928u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A930u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A934u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A964u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A96Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A974u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A97Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A984u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A98Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A998u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9E4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9F0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA1Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA24u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA2Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA38u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA48u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA5Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA60u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA78u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA84u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA88u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA90u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA94u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AAA0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AAB0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AAB8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AAE0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AAE8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AAF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB00u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB08u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB10u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB18u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB34u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB3Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB48u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB58u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB60u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB6Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB80u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB8Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB94u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ABA8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ABB8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ABBCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ABC4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ABDCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AC00u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AC0Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AC10u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AC20u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AC30u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AC34u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AC50u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ACB0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ADA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ADC4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ADCCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ADF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AE18u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AE2Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AE38u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AE64u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AE84u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AEA0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AEE0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AEF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AFACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AFD8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AFE0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AFECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AFFCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B010u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B024u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B03Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B048u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B05Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B060u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B064u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B084u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B08Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B0A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B0ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B0B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B0B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B0D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B0ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B0F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B0F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B110u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B128u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B140u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B158u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B160u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B164u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B16Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B180u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B188u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B1A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B1ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B1BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B1C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B1D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B1D8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B1E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B1FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B200u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B204u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B214u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B22Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B23Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B2A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B2ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B2F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B30Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B310u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B318u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B31Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B328u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B32Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B33Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B340u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B34Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B350u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B358u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B384u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B3A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B3B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B3C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B3C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B3E4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B3F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B404u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B40Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B428u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B438u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B448u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B450u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B458u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B460u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B480u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B484u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B49Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B4A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B4ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B4B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B4BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B4C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B4CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B4ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B500u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B560u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B57Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B584u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B594u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B59Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B5A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B5B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B5BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B5CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B5D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B5DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B5F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B618u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B620u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B62Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B63Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B64Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B654u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B670u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B680u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B688u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B694u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B69Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B6A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B72Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B748u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B758u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B770u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B77Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B788u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B790u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B794u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B79Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B7A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B7ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B7BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B7C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B810u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B834u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B83Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B840u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B864u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B86Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B880u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B888u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8D8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8E4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B918u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B920u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B928u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B938u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B940u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B948u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B950u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B958u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B96Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B974u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B98Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B994u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B9A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B9B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BBC4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BBCCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BBDCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BBE4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BBECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BC00u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BC08u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BC10u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BC20u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BC2Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BC3Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BCCCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BCF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BD00u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BD04u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BD10u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BD1Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BD24u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BE74u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BE7Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF50u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF58u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF60u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF74u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF7Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BFA0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BFA8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BFB0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BFD8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BFF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BFF8u, &recomp_unit_0037, "recomp_unit_0037");
}
} // namespace psprecomp
