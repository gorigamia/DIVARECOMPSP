#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0007[4089] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 6, 7, 0, 8, 9, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 54, 0, 55, 0, 0, 56, 57, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 63, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 67, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0,
    0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 85, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0,
    0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0,
    0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 104, 0, 0,
    0, 105, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0,
    120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127,
    128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0,
    0, 143, 0, 0, 0, 144, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0,
    156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163,
    0, 164, 0, 0, 165, 0, 166, 0, 167, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172,
    0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0,
    0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 208, 209, 0,
    210, 0, 211, 0, 212, 0, 0, 213, 214, 0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 231, 232, 0, 0, 233, 234, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 238, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0, 0, 242,
    0, 243, 0, 0, 0, 0, 0, 0, 244, 245, 0, 246, 0, 247, 0, 248, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 251, 252, 0, 253, 0, 0,
    254, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 261, 0, 262, 0, 0, 263, 0, 264, 265, 0, 266,
    0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0,
    0, 276, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0,
    0, 284, 0, 285, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 291, 0, 0, 292, 0, 0, 293, 0, 294, 0, 295,
    0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    302, 0, 303, 0, 304, 0, 0, 305, 0, 306, 0, 307, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0,
    314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0,
    328, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0,
    0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0,
    0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 349,
    0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 357, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 0, 361, 0, 362, 0, 0, 363, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0,
    0, 0, 377, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0, 0, 0,
    0, 386, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 393,
    0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 401, 0, 402, 0,
    0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0,
    0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 418,
    0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 426, 0, 427,
    0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 435, 0, 0,
    0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0,
    0, 444, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 452,
    0, 453, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461,
    0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0,
    0, 0, 470, 0, 471, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476,
    0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0,
    482, 0, 0, 0, 483, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0,
    0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 496, 0, 0, 0, 0, 497, 0, 0,
    0, 498, 0, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0,
    506, 0, 0, 507, 0, 508, 0, 509, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 517, 0, 0, 0, 0, 518, 0,
    519, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 525, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 532,
    0, 533, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 540, 0, 541, 0,
    542, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 545, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0,
    550, 0, 0, 0, 0, 0, 551, 0, 552, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 558,
    0, 559, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 566, 0, 567,
    0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0,
    0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 582, 0, 583, 0, 0, 0, 0,
    584, 0, 585, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 592, 0,
    593, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 600, 0, 601, 0,
    0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0,
    0, 0, 610, 0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0,
    618, 0, 619, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 626, 0, 627, 628, 0, 629, 630, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 633,
    0, 0, 0, 634, 635, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 639, 0, 640, 0, 0, 0, 641, 642, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0,
    0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 657, 0,
    0, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0,
    0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 664, 665, 0, 0, 666, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0,
    0, 0, 0, 0, 670, 671, 0, 0, 672, 0, 0, 0, 673, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 677,
    0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 683, 0, 0, 0, 0, 684, 0, 685, 0, 686, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689,
    0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 0, 696, 0, 0, 0,
    0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 0, 0,
    0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 705, 0, 0, 706, 0, 0, 0, 707,
    0, 0, 708, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 721, 0,
    0, 722, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0,
    0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 732, 0, 0,
    733, 0, 734, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 739,
    0, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0,
    0, 745, 0, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 0, 0, 750, 0, 751, 0, 0,
    0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 757, 0,
    0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0,
    0, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0,
    0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 775, 0,
    0, 0, 776, 777, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 782, 0, 0, 0,
    0, 0, 783, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0,
    0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0, 0, 795,
    0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 0,
    801, 802, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 0, 0, 805, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 810, 0, 0, 0, 811, 0, 812, 0,
    0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 816, 0, 817, 0, 0, 818, 0, 0, 0, 819, 0, 0,
    0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 0,
    0, 826, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 829, 0, 0, 830, 0, 0, 831, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0,
    0, 833, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 835, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0,
    0, 839, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 841, 0, 0, 0, 842, 0, 0, 0, 843, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0,
    0, 845, 0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0,
    0, 851, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 853, 0, 0, 0, 854, 0, 0, 0, 855, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0,
    0, 857, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 859, 0, 0, 0, 860, 0, 0, 0, 861, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0,
    0, 863, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 865, 0, 0, 0, 866, 0, 0, 867, 0, 0, 868, 0, 0, 0, 0, 0, 869, 0, 0,
    0, 0, 0, 870, 0, 0, 0, 0, 0, 871, 0, 0, 0, 0, 0, 872, 0, 0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 0, 0, 875, 0, 0,
    0, 0, 0, 876, 0, 0, 0, 0, 0, 877, 0, 0, 0, 0, 0, 878, 0, 0, 0, 879, 0, 0, 880, 0, 0, 881, 0, 0, 0, 0, 882, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0, 884, 0, 885, 0, 0, 886, 0, 0, 887, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 891, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 892, 893, 0, 0, 894, 0, 0, 0, 895, 0, 0, 896, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 897, 0, 0, 898, 899, 0, 900, 0, 0, 901, 902, 0, 903, 0, 0, 904, 905, 0, 0, 906,
};
void recomp_unit_0007_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08820000u;
        entry_id = (entry_delta < 16356u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0007[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08820000;
    case 2u: goto L_08820004;
    case 3u: goto L_08820020;
    case 4u: goto L_08820030;
    case 5u: goto L_08820038;
    case 6u: goto L_08820040;
    case 7u: goto L_08820044;
    case 8u: goto L_0882004C;
    case 9u: goto L_08820050;
    case 10u: goto L_0882005C;
    case 11u: goto L_0882006C;
    case 12u: goto L_08820074;
    case 13u: goto L_0882007C;
    case 14u: goto L_088200B4;
    case 15u: goto L_088200C4;
    case 16u: goto L_088200D4;
    case 17u: goto L_088200F8;
    case 18u: goto L_08820104;
    case 19u: goto L_08820120;
    case 20u: goto L_0882015C;
    case 21u: goto L_08820168;
    case 22u: goto L_0882018C;
    case 23u: goto L_0882019C;
    case 24u: goto L_088201A4;
    case 25u: goto L_088201A8;
    case 26u: goto L_088201C4;
    case 27u: goto L_088201DC;
    case 28u: goto L_08820200;
    case 29u: goto L_0882020C;
    case 30u: goto L_08820218;
    case 31u: goto L_08820220;
    case 32u: goto L_0882022C;
    case 33u: goto L_08820238;
    case 34u: goto L_08820244;
    case 35u: goto L_08820254;
    case 36u: goto L_0882025C;
    case 37u: goto L_08820270;
    case 38u: goto L_08820280;
    case 39u: goto L_088202A4;
    case 40u: goto L_088202B8;
    case 41u: goto L_088202CC;
    case 42u: goto L_088202E4;
    case 43u: goto L_088202EC;
    case 44u: goto L_08820300;
    case 45u: goto L_0882031C;
    case 46u: goto L_0882032C;
    case 47u: goto L_0882033C;
    case 48u: goto L_08820360;
    case 49u: goto L_08820378;
    case 50u: goto L_0882039C;
    case 51u: goto L_088203B0;
    case 52u: goto L_088203BC;
    case 53u: goto L_088203CC;
    case 54u: goto L_088203D0;
    case 55u: goto L_088203D8;
    case 56u: goto L_088203E4;
    case 57u: goto L_088203E8;
    case 58u: goto L_088203FC;
    case 59u: goto L_08820414;
    case 60u: goto L_08820420;
    case 61u: goto L_08820430;
    case 62u: goto L_0882043C;
    case 63u: goto L_08820448;
    case 64u: goto L_0882044C;
    case 65u: goto L_08820460;
    case 66u: goto L_08820488;
    case 67u: goto L_0882048C;
    case 68u: goto L_08820494;
    case 69u: goto L_088204A4;
    case 70u: goto L_088204B4;
    case 71u: goto L_088204B8;
    case 72u: goto L_088204D4;
    case 73u: goto L_088204EC;
    case 74u: goto L_088204FC;
    case 75u: goto L_08820534;
    case 76u: goto L_0882053C;
    case 77u: goto L_08820544;
    case 78u: goto L_08820558;
    case 79u: goto L_08820564;
    case 80u: goto L_08820570;
    case 81u: goto L_08820588;
    case 82u: goto L_08820590;
    case 83u: goto L_088205A4;
    case 84u: goto L_088205B0;
    case 85u: goto L_088205C8;
    case 86u: goto L_088205CC;
    case 87u: goto L_088205DC;
    case 88u: goto L_088205EC;
    case 89u: goto L_088205F4;
    case 90u: goto L_08820608;
    case 91u: goto L_08820618;
    case 92u: goto L_0882062C;
    case 93u: goto L_08820640;
    case 94u: goto L_08820650;
    case 95u: goto L_08820664;
    case 96u: goto L_08820674;
    case 97u: goto L_08820684;
    case 98u: goto L_08820698;
    case 99u: goto L_088206A4;
    case 100u: goto L_088206C0;
    case 101u: goto L_088206D0;
    case 102u: goto L_088206E0;
    case 103u: goto L_088206F0;
    case 104u: goto L_088206F4;
    case 105u: goto L_08820704;
    case 106u: goto L_08820718;
    case 107u: goto L_08820724;
    case 108u: goto L_08820730;
    case 109u: goto L_08820748;
    case 110u: goto L_08820760;
    case 111u: goto L_08820780;
    case 112u: goto L_0882078C;
    case 113u: goto L_08820798;
    case 114u: goto L_088207B0;
    case 115u: goto L_088207B4;
    case 116u: goto L_088207C4;
    case 117u: goto L_088207D4;
    case 118u: goto L_088207DC;
    case 119u: goto L_088207EC;
    case 120u: goto L_08820800;
    case 121u: goto L_0882080C;
    case 122u: goto L_08820818;
    case 123u: goto L_08820838;
    case 124u: goto L_0882084C;
    case 125u: goto L_08820858;
    case 126u: goto L_08820864;
    case 127u: goto L_0882087C;
    case 128u: goto L_08820880;
    case 129u: goto L_08820890;
    case 130u: goto L_088208A0;
    case 131u: goto L_088208A8;
    case 132u: goto L_088208BC;
    case 133u: goto L_088208CC;
    case 134u: goto L_088208E0;
    case 135u: goto L_088208F4;
    case 136u: goto L_08820904;
    case 137u: goto L_0882091C;
    case 138u: goto L_08820930;
    case 139u: goto L_0882093C;
    case 140u: goto L_08820948;
    case 141u: goto L_08820964;
    case 142u: goto L_08820974;
    case 143u: goto L_08820984;
    case 144u: goto L_08820994;
    case 145u: goto L_08820998;
    case 146u: goto L_088209AC;
    case 147u: goto L_088209B8;
    case 148u: goto L_088209D0;
    case 149u: goto L_088209E8;
    case 150u: goto L_08820A10;
    case 151u: goto L_08820A38;
    case 152u: goto L_08820A44;
    case 153u: goto L_08820A54;
    case 154u: goto L_08820A5C;
    case 155u: goto L_08820A68;
    case 156u: goto L_08820A80;
    case 157u: goto L_08820A8C;
    case 158u: goto L_08820AAC;
    case 159u: goto L_08820AB4;
    case 160u: goto L_08820AC0;
    case 161u: goto L_08820ACC;
    case 162u: goto L_08820AE8;
    case 163u: goto L_08820AFC;
    case 164u: goto L_08820B04;
    case 165u: goto L_08820B10;
    case 166u: goto L_08820B18;
    case 167u: goto L_08820B20;
    case 168u: goto L_08820B24;
    case 169u: goto L_08820B40;
    case 170u: goto L_08820B64;
    case 171u: goto L_08820B6C;
    case 172u: goto L_08820B7C;
    case 173u: goto L_08820B94;
    case 174u: goto L_08820BA8;
    case 175u: goto L_08820BB0;
    case 176u: goto L_08820BB8;
    case 177u: goto L_08820BC0;
    case 178u: goto L_08820BD0;
    case 179u: goto L_08820BF4;
    case 180u: goto L_08820C0C;
    case 181u: goto L_08820C18;
    case 182u: goto L_08820C24;
    case 183u: goto L_08820C30;
    case 184u: goto L_08820C94;
    case 185u: goto L_08820CA0;
    case 186u: goto L_08820CAC;
    case 187u: goto L_08820CB4;
    case 188u: goto L_08820CC4;
    case 189u: goto L_08820CF8;
    case 190u: goto L_08820D04;
    case 191u: goto L_08820D1C;
    case 192u: goto L_08820D3C;
    case 193u: goto L_08820D4C;
    case 194u: goto L_08820D60;
    case 195u: goto L_08820D80;
    case 196u: goto L_08820D90;
    case 197u: goto L_08820DA4;
    case 198u: goto L_08820DBC;
    case 199u: goto L_08820DD4;
    case 200u: goto L_08820DDC;
    case 201u: goto L_08820DF0;
    case 202u: goto L_08820E10;
    case 203u: goto L_08820E28;
    case 204u: goto L_08820E40;
    case 205u: goto L_08820E54;
    case 206u: goto L_08820E5C;
    case 207u: goto L_08820E64;
    case 208u: goto L_08820E74;
    case 209u: goto L_08820E78;
    case 210u: goto L_08820E80;
    case 211u: goto L_08820E88;
    case 212u: goto L_08820E90;
    case 213u: goto L_08820E9C;
    case 214u: goto L_08820EA0;
    case 215u: goto L_08820EA8;
    case 216u: goto L_08820EB8;
    case 217u: goto L_08820EC0;
    case 218u: goto L_08820EC8;
    case 219u: goto L_08820ED0;
    case 220u: goto L_08820ED8;
    case 221u: goto L_08820EE0;
    case 222u: goto L_08820F08;
    case 223u: goto L_08820F10;
    case 224u: goto L_08820F1C;
    case 225u: goto L_08820F24;
    case 226u: goto L_08820F2C;
    case 227u: goto L_08820F34;
    case 228u: goto L_08820F44;
    case 229u: goto L_08820F50;
    case 230u: goto L_08820F5C;
    case 231u: goto L_08820F64;
    case 232u: goto L_08820F68;
    case 233u: goto L_08820F74;
    case 234u: goto L_08820F78;
    case 235u: goto L_08820FAC;
    case 236u: goto L_08820FBC;
    case 237u: goto L_08820FC8;
    case 238u: goto L_08820FCC;
    case 239u: goto L_08820FDC;
    case 240u: goto L_08820FE4;
    case 241u: goto L_08820FEC;
    case 242u: goto L_08820FFC;
    case 243u: goto L_08821004;
    case 244u: goto L_08821020;
    case 245u: goto L_08821024;
    case 246u: goto L_0882102C;
    case 247u: goto L_08821034;
    case 248u: goto L_0882103C;
    case 249u: goto L_0882104C;
    case 250u: goto L_08821054;
    case 251u: goto L_08821068;
    case 252u: goto L_0882106C;
    case 253u: goto L_08821074;
    case 254u: goto L_08821080;
    case 255u: goto L_08821088;
    case 256u: goto L_08821098;
    case 257u: goto L_088210A8;
    case 258u: goto L_088210B0;
    case 259u: goto L_088210BC;
    case 260u: goto L_088210C4;
    case 261u: goto L_088210D4;
    case 262u: goto L_088210DC;
    case 263u: goto L_088210E8;
    case 264u: goto L_088210F0;
    case 265u: goto L_088210F4;
    case 266u: goto L_088210FC;
    case 267u: goto L_08821108;
    case 268u: goto L_08821110;
    case 269u: goto L_08821130;
    case 270u: goto L_0882113C;
    case 271u: goto L_08821148;
    case 272u: goto L_08821154;
    case 273u: goto L_08821160;
    case 274u: goto L_08821168;
    case 275u: goto L_08821178;
    case 276u: goto L_08821184;
    case 277u: goto L_08821198;
    case 278u: goto L_088211A4;
    case 279u: goto L_088211B0;
    case 280u: goto L_088211BC;
    case 281u: goto L_088211D0;
    case 282u: goto L_088211D4;
    case 283u: goto L_088211EC;
    case 284u: goto L_08821204;
    case 285u: goto L_0882120C;
    case 286u: goto L_0882121C;
    case 287u: goto L_08821224;
    case 288u: goto L_0882122C;
    case 289u: goto L_0882123C;
    case 290u: goto L_0882124C;
    case 291u: goto L_08821254;
    case 292u: goto L_08821260;
    case 293u: goto L_0882126C;
    case 294u: goto L_08821274;
    case 295u: goto L_0882127C;
    case 296u: goto L_08821284;
    case 297u: goto L_08821294;
    case 298u: goto L_088212B4;
    case 299u: goto L_088212C0;
    case 300u: goto L_088212D4;
    case 301u: goto L_088212F0;
    case 302u: goto L_08821300;
    case 303u: goto L_08821308;
    case 304u: goto L_08821310;
    case 305u: goto L_0882131C;
    case 306u: goto L_08821324;
    case 307u: goto L_0882132C;
    case 308u: goto L_08821334;
    case 309u: goto L_08821344;
    case 310u: goto L_08821354;
    case 311u: goto L_0882135C;
    case 312u: goto L_08821364;
    case 313u: goto L_08821370;
    case 314u: goto L_08821380;
    case 315u: goto L_088213A8;
    case 316u: goto L_088213B8;
    case 317u: goto L_088213CC;
    case 318u: goto L_088213E8;
    case 319u: goto L_08821410;
    case 320u: goto L_08821420;
    case 321u: goto L_08821434;
    case 322u: goto L_08821450;
    case 323u: goto L_08821464;
    case 324u: goto L_088214B8;
    case 325u: goto L_088214C4;
    case 326u: goto L_088214D0;
    case 327u: goto L_088214E8;
    case 328u: goto L_08821500;
    case 329u: goto L_08821504;
    case 330u: goto L_08821524;
    case 331u: goto L_08821534;
    case 332u: goto L_08821554;
    case 333u: goto L_08821568;
    case 334u: goto L_08821570;
    case 335u: goto L_08821584;
    case 336u: goto L_08821590;
    case 337u: goto L_088215A0;
    case 338u: goto L_088215B4;
    case 339u: goto L_088215C4;
    case 340u: goto L_088215D4;
    case 341u: goto L_088215E4;
    case 342u: goto L_088215F0;
    case 343u: goto L_08821604;
    case 344u: goto L_08821618;
    case 345u: goto L_08821650;
    case 346u: goto L_0882165C;
    case 347u: goto L_08821668;
    case 348u: goto L_08821674;
    case 349u: goto L_0882167C;
    case 350u: goto L_08821684;
    case 351u: goto L_08821698;
    case 352u: goto L_088216A0;
    case 353u: goto L_088216B4;
    case 354u: goto L_088216BC;
    case 355u: goto L_088216D0;
    case 356u: goto L_088216F4;
    case 357u: goto L_088216F8;
    case 358u: goto L_08821728;
    case 359u: goto L_08821758;
    case 360u: goto L_08821774;
    case 361u: goto L_08821790;
    case 362u: goto L_08821798;
    case 363u: goto L_088217A4;
    case 364u: goto L_088217B8;
    case 365u: goto L_088217C0;
    case 366u: goto L_088217D4;
    case 367u: goto L_088217DC;
    case 368u: goto L_088217F0;
    case 369u: goto L_08821804;
    case 370u: goto L_08821810;
    case 371u: goto L_08821820;
    case 372u: goto L_08821834;
    case 373u: goto L_0882184C;
    case 374u: goto L_08821854;
    case 375u: goto L_08821868;
    case 376u: goto L_08821870;
    case 377u: goto L_08821888;
    case 378u: goto L_08821890;
    case 379u: goto L_088218A4;
    case 380u: goto L_088218AC;
    case 381u: goto L_088218BC;
    case 382u: goto L_088218C4;
    case 383u: goto L_088218DC;
    case 384u: goto L_088218E4;
    case 385u: goto L_088218F0;
    case 386u: goto L_08821904;
    case 387u: goto L_0882191C;
    case 388u: goto L_08821924;
    case 389u: goto L_08821938;
    case 390u: goto L_08821950;
    case 391u: goto L_08821958;
    case 392u: goto L_08821968;
    case 393u: goto L_0882197C;
    case 394u: goto L_08821984;
    case 395u: goto L_08821994;
    case 396u: goto L_088219A0;
    case 397u: goto L_088219B4;
    case 398u: goto L_088219BC;
    case 399u: goto L_088219D4;
    case 400u: goto L_088219DC;
    case 401u: goto L_088219F0;
    case 402u: goto L_088219F8;
    case 403u: goto L_08821A10;
    case 404u: goto L_08821A18;
    case 405u: goto L_08821A28;
    case 406u: goto L_08821A3C;
    case 407u: goto L_08821A44;
    case 408u: goto L_08821A54;
    case 409u: goto L_08821A60;
    case 410u: goto L_08821A74;
    case 411u: goto L_08821A8C;
    case 412u: goto L_08821AA4;
    case 413u: goto L_08821AAC;
    case 414u: goto L_08821AC0;
    case 415u: goto L_08821AC8;
    case 416u: goto L_08821AE0;
    case 417u: goto L_08821AE8;
    case 418u: goto L_08821AFC;
    case 419u: goto L_08821B04;
    case 420u: goto L_08821B1C;
    case 421u: goto L_08821B24;
    case 422u: goto L_08821B38;
    case 423u: goto L_08821B40;
    case 424u: goto L_08821B58;
    case 425u: goto L_08821B60;
    case 426u: goto L_08821B74;
    case 427u: goto L_08821B7C;
    case 428u: goto L_08821B94;
    case 429u: goto L_08821B9C;
    case 430u: goto L_08821BB0;
    case 431u: goto L_08821BB8;
    case 432u: goto L_08821BD0;
    case 433u: goto L_08821BD8;
    case 434u: goto L_08821BEC;
    case 435u: goto L_08821BF4;
    case 436u: goto L_08821C0C;
    case 437u: goto L_08821C14;
    case 438u: goto L_08821C28;
    case 439u: goto L_08821C30;
    case 440u: goto L_08821C48;
    case 441u: goto L_08821C50;
    case 442u: goto L_08821C64;
    case 443u: goto L_08821C6C;
    case 444u: goto L_08821C84;
    case 445u: goto L_08821C8C;
    case 446u: goto L_08821CA0;
    case 447u: goto L_08821CA8;
    case 448u: goto L_08821CC0;
    case 449u: goto L_08821CC8;
    case 450u: goto L_08821CDC;
    case 451u: goto L_08821CE4;
    case 452u: goto L_08821CFC;
    case 453u: goto L_08821D04;
    case 454u: goto L_08821D18;
    case 455u: goto L_08821D20;
    case 456u: goto L_08821D38;
    case 457u: goto L_08821D40;
    case 458u: goto L_08821D54;
    case 459u: goto L_08821D5C;
    case 460u: goto L_08821D74;
    case 461u: goto L_08821D7C;
    case 462u: goto L_08821D90;
    case 463u: goto L_08821D98;
    case 464u: goto L_08821DB0;
    case 465u: goto L_08821DB8;
    case 466u: goto L_08821DCC;
    case 467u: goto L_08821DD4;
    case 468u: goto L_08821DEC;
    case 469u: goto L_08821DF4;
    case 470u: goto L_08821E08;
    case 471u: goto L_08821E10;
    case 472u: goto L_08821E24;
    case 473u: goto L_08821E2C;
    case 474u: goto L_08821E4C;
    case 475u: goto L_08821E74;
    case 476u: goto L_08821E7C;
    case 477u: goto L_08821E8C;
    case 478u: goto L_08821EA4;
    case 479u: goto L_08821ED4;
    case 480u: goto L_08821EDC;
    case 481u: goto L_08821EEC;
    case 482u: goto L_08821F00;
    case 483u: goto L_08821F10;
    case 484u: goto L_08821F1C;
    case 485u: goto L_08821F24;
    case 486u: goto L_08821F34;
    case 487u: goto L_08821F48;
    case 488u: goto L_08821F54;
    case 489u: goto L_08821F64;
    case 490u: goto L_08821F78;
    case 491u: goto L_08821F90;
    case 492u: goto L_08821F98;
    case 493u: goto L_08821FAC;
    case 494u: goto L_08821FB8;
    case 495u: goto L_08821FDC;
    case 496u: goto L_08821FE0;
    case 497u: goto L_08821FF4;
    case 498u: goto L_08822004;
    case 499u: goto L_08822014;
    case 500u: goto L_08822020;
    case 501u: goto L_0882202C;
    case 502u: goto L_08822038;
    case 503u: goto L_08822044;
    case 504u: goto L_08822058;
    case 505u: goto L_08822078;
    case 506u: goto L_08822080;
    case 507u: goto L_0882208C;
    case 508u: goto L_08822094;
    case 509u: goto L_0882209C;
    case 510u: goto L_088220A8;
    case 511u: goto L_088220B4;
    case 512u: goto L_08822108;
    case 513u: goto L_08822128;
    case 514u: goto L_08822144;
    case 515u: goto L_08822150;
    case 516u: goto L_0882215C;
    case 517u: goto L_08822164;
    case 518u: goto L_08822178;
    case 519u: goto L_08822180;
    case 520u: goto L_08822194;
    case 521u: goto L_088221A0;
    case 522u: goto L_088221AC;
    case 523u: goto L_088221C0;
    case 524u: goto L_088221DC;
    case 525u: goto L_08822204;
    case 526u: goto L_08822218;
    case 527u: goto L_08822224;
    case 528u: goto L_08822234;
    case 529u: goto L_08822248;
    case 530u: goto L_08822260;
    case 531u: goto L_08822268;
    case 532u: goto L_0882227C;
    case 533u: goto L_08822284;
    case 534u: goto L_0882229C;
    case 535u: goto L_088222A4;
    case 536u: goto L_088222B8;
    case 537u: goto L_088222C0;
    case 538u: goto L_088222D0;
    case 539u: goto L_088222D8;
    case 540u: goto L_088222F0;
    case 541u: goto L_088222F8;
    case 542u: goto L_08822300;
    case 543u: goto L_08822310;
    case 544u: goto L_08822324;
    case 545u: goto L_0882232C;
    case 546u: goto L_08822338;
    case 547u: goto L_0882234C;
    case 548u: goto L_08822364;
    case 549u: goto L_0882236C;
    case 550u: goto L_08822380;
    case 551u: goto L_08822398;
    case 552u: goto L_088223A0;
    case 553u: goto L_088223A8;
    case 554u: goto L_088223B8;
    case 555u: goto L_088223CC;
    case 556u: goto L_088223DC;
    case 557u: goto L_088223E4;
    case 558u: goto L_088223FC;
    case 559u: goto L_08822404;
    case 560u: goto L_08822418;
    case 561u: goto L_08822420;
    case 562u: goto L_08822438;
    case 563u: goto L_08822440;
    case 564u: goto L_08822454;
    case 565u: goto L_0882245C;
    case 566u: goto L_08822474;
    case 567u: goto L_0882247C;
    case 568u: goto L_08822490;
    case 569u: goto L_08822498;
    case 570u: goto L_088224B0;
    case 571u: goto L_088224B8;
    case 572u: goto L_088224CC;
    case 573u: goto L_088224D4;
    case 574u: goto L_088224EC;
    case 575u: goto L_088224F4;
    case 576u: goto L_08822508;
    case 577u: goto L_08822510;
    case 578u: goto L_08822528;
    case 579u: goto L_08822530;
    case 580u: goto L_08822544;
    case 581u: goto L_0882254C;
    case 582u: goto L_08822564;
    case 583u: goto L_0882256C;
    case 584u: goto L_08822580;
    case 585u: goto L_08822588;
    case 586u: goto L_088225A0;
    case 587u: goto L_088225A8;
    case 588u: goto L_088225BC;
    case 589u: goto L_088225C4;
    case 590u: goto L_088225DC;
    case 591u: goto L_088225E4;
    case 592u: goto L_088225F8;
    case 593u: goto L_08822600;
    case 594u: goto L_08822618;
    case 595u: goto L_08822620;
    case 596u: goto L_08822634;
    case 597u: goto L_0882263C;
    case 598u: goto L_08822654;
    case 599u: goto L_0882265C;
    case 600u: goto L_08822670;
    case 601u: goto L_08822678;
    case 602u: goto L_08822690;
    case 603u: goto L_08822698;
    case 604u: goto L_088226AC;
    case 605u: goto L_088226B4;
    case 606u: goto L_088226CC;
    case 607u: goto L_088226D4;
    case 608u: goto L_088226E8;
    case 609u: goto L_088226F0;
    case 610u: goto L_08822708;
    case 611u: goto L_08822710;
    case 612u: goto L_08822724;
    case 613u: goto L_0882272C;
    case 614u: goto L_08822744;
    case 615u: goto L_0882274C;
    case 616u: goto L_08822760;
    case 617u: goto L_08822768;
    case 618u: goto L_08822780;
    case 619u: goto L_08822788;
    case 620u: goto L_0882279C;
    case 621u: goto L_088227A4;
    case 622u: goto L_088227B8;
    case 623u: goto L_088227C8;
    case 624u: goto L_088227E4;
    case 625u: goto L_08822828;
    case 626u: goto L_0882282C;
    case 627u: goto L_08822834;
    case 628u: goto L_08822838;
    case 629u: goto L_08822840;
    case 630u: goto L_08822844;
    case 631u: goto L_0882285C;
    case 632u: goto L_08822864;
    case 633u: goto L_0882287C;
    case 634u: goto L_0882288C;
    case 635u: goto L_08822890;
    case 636u: goto L_08822898;
    case 637u: goto L_088228B0;
    case 638u: goto L_088228C0;
    case 639u: goto L_088228C4;
    case 640u: goto L_088228CC;
    case 641u: goto L_088228DC;
    case 642u: goto L_088228E0;
    case 643u: goto L_0882290C;
    case 644u: goto L_08822938;
    case 645u: goto L_08822940;
    case 646u: goto L_08822948;
    case 647u: goto L_08822958;
    case 648u: goto L_08822968;
    case 649u: goto L_08822978;
    case 650u: goto L_08822988;
    case 651u: goto L_08822998;
    case 652u: goto L_088229A8;
    case 653u: goto L_088229B8;
    case 654u: goto L_088229C8;
    case 655u: goto L_088229D8;
    case 656u: goto L_088229E8;
    case 657u: goto L_088229F8;
    case 658u: goto L_08822A14;
    case 659u: goto L_08822A24;
    case 660u: goto L_08822A40;
    case 661u: goto L_08822A50;
    case 662u: goto L_08822A6C;
    case 663u: goto L_08822A8C;
    case 664u: goto L_08822AA8;
    case 665u: goto L_08822AAC;
    case 666u: goto L_08822AB8;
    case 667u: goto L_08822AC8;
    case 668u: goto L_08822AD4;
    case 669u: goto L_08822AF4;
    case 670u: goto L_08822B10;
    case 671u: goto L_08822B14;
    case 672u: goto L_08822B20;
    case 673u: goto L_08822B30;
    case 674u: goto L_08822B3C;
    case 675u: goto L_08822B5C;
    case 676u: goto L_08822B78;
    case 677u: goto L_08822B7C;
    case 678u: goto L_08822B88;
    case 679u: goto L_08822B98;
    case 680u: goto L_08822BA8;
    case 681u: goto L_08822BB4;
    case 682u: goto L_08822BD8;
    case 683u: goto L_08822C0C;
    case 684u: goto L_08822C20;
    case 685u: goto L_08822C28;
    case 686u: goto L_08822C30;
    case 687u: goto L_08822C40;
    case 688u: goto L_08822C50;
    case 689u: goto L_08822C7C;
    case 690u: goto L_08822C84;
    case 691u: goto L_08822C98;
    case 692u: goto L_08822CB0;
    case 693u: goto L_08822CCC;
    case 694u: goto L_08822CD8;
    case 695u: goto L_08822CE4;
    case 696u: goto L_08822CF0;
    case 697u: goto L_08822D08;
    case 698u: goto L_08822D1C;
    case 699u: goto L_08822D34;
    case 700u: goto L_08822D48;
    case 701u: goto L_08822D5C;
    case 702u: goto L_08822D70;
    case 703u: goto L_08822D8C;
    case 704u: goto L_08822DD4;
    case 705u: goto L_08822DE0;
    case 706u: goto L_08822DEC;
    case 707u: goto L_08822DFC;
    case 708u: goto L_08822E08;
    case 709u: goto L_08822E14;
    case 710u: goto L_08822E20;
    case 711u: goto L_08822E2C;
    case 712u: goto L_08822E34;
    case 713u: goto L_08822E5C;
    case 714u: goto L_08822E8C;
    case 715u: goto L_08822EB4;
    case 716u: goto L_08822ECC;
    case 717u: goto L_08822ED8;
    case 718u: goto L_08822F40;
    case 719u: goto L_08822F4C;
    case 720u: goto L_08822F5C;
    case 721u: goto L_08822F78;
    case 722u: goto L_08822F84;
    case 723u: goto L_08822F90;
    case 724u: goto L_08822FB0;
    case 725u: goto L_08822FC8;
    case 726u: goto L_08822FD4;
    case 727u: goto L_08822FE4;
    case 728u: goto L_08822FF0;
    case 729u: goto L_0882300C;
    case 730u: goto L_08823064;
    case 731u: goto L_0882306C;
    case 732u: goto L_08823074;
    case 733u: goto L_08823080;
    case 734u: goto L_08823088;
    case 735u: goto L_08823094;
    case 736u: goto L_088230B4;
    case 737u: goto L_088230CC;
    case 738u: goto L_088230E4;
    case 739u: goto L_088230FC;
    case 740u: goto L_08823114;
    case 741u: goto L_08823124;
    case 742u: goto L_0882313C;
    case 743u: goto L_08823154;
    case 744u: goto L_0882316C;
    case 745u: goto L_08823184;
    case 746u: goto L_08823194;
    case 747u: goto L_088231AC;
    case 748u: goto L_088231C4;
    case 749u: goto L_088231D4;
    case 750u: goto L_088231EC;
    case 751u: goto L_088231F4;
    case 752u: goto L_08823214;
    case 753u: goto L_08823220;
    case 754u: goto L_08823234;
    case 755u: goto L_0882324C;
    case 756u: goto L_08823264;
    case 757u: goto L_08823278;
    case 758u: goto L_08823290;
    case 759u: goto L_088232A8;
    case 760u: goto L_088232B8;
    case 761u: goto L_088232C8;
    case 762u: goto L_088232DC;
    case 763u: goto L_088232F4;
    case 764u: goto L_0882330C;
    case 765u: goto L_08823320;
    case 766u: goto L_08823338;
    case 767u: goto L_08823350;
    case 768u: goto L_08823360;
    case 769u: goto L_08823370;
    case 770u: goto L_08823384;
    case 771u: goto L_0882339C;
    case 772u: goto L_088233B4;
    case 773u: goto L_088233C8;
    case 774u: goto L_088233E0;
    case 775u: goto L_088233F8;
    case 776u: goto L_08823408;
    case 777u: goto L_0882340C;
    case 778u: goto L_08823418;
    case 779u: goto L_0882342C;
    case 780u: goto L_08823444;
    case 781u: goto L_0882345C;
    case 782u: goto L_08823470;
    case 783u: goto L_08823488;
    case 784u: goto L_088234A0;
    case 785u: goto L_088234B0;
    case 786u: goto L_088234C0;
    case 787u: goto L_088234D4;
    case 788u: goto L_088234EC;
    case 789u: goto L_08823504;
    case 790u: goto L_08823518;
    case 791u: goto L_08823530;
    case 792u: goto L_08823548;
    case 793u: goto L_08823558;
    case 794u: goto L_08823568;
    case 795u: goto L_0882357C;
    case 796u: goto L_08823594;
    case 797u: goto L_088235AC;
    case 798u: goto L_088235C0;
    case 799u: goto L_088235D8;
    case 800u: goto L_088235F0;
    case 801u: goto L_08823600;
    case 802u: goto L_08823604;
    case 803u: goto L_08823610;
    case 804u: goto L_08823620;
    case 805u: goto L_08823638;
    case 806u: goto L_08823640;
    case 807u: goto L_0882366C;
    case 808u: goto L_08823794;
    case 809u: goto L_088237DC;
    case 810u: goto L_088237E0;
    case 811u: goto L_088237F0;
    case 812u: goto L_088237F8;
    case 813u: goto L_08823810;
    case 814u: goto L_08823838;
    case 815u: goto L_08823844;
    case 816u: goto L_08823850;
    case 817u: goto L_08823858;
    case 818u: goto L_08823864;
    case 819u: goto L_08823874;
    case 820u: goto L_08823884;
    case 821u: goto L_0882389C;
    case 822u: goto L_088238B4;
    case 823u: goto L_088238CC;
    case 824u: goto L_088238DC;
    case 825u: goto L_088238EC;
    case 826u: goto L_08823904;
    case 827u: goto L_0882391C;
    case 828u: goto L_08823934;
    case 829u: goto L_0882393C;
    case 830u: goto L_08823948;
    case 831u: goto L_08823954;
    case 832u: goto L_0882396C;
    case 833u: goto L_08823984;
    case 834u: goto L_0882399C;
    case 835u: goto L_088239B4;
    case 836u: goto L_088239C4;
    case 837u: goto L_088239D4;
    case 838u: goto L_088239EC;
    case 839u: goto L_08823A04;
    case 840u: goto L_08823A1C;
    case 841u: goto L_08823A34;
    case 842u: goto L_08823A44;
    case 843u: goto L_08823A54;
    case 844u: goto L_08823A6C;
    case 845u: goto L_08823A84;
    case 846u: goto L_08823A9C;
    case 847u: goto L_08823AB4;
    case 848u: goto L_08823AC4;
    case 849u: goto L_08823AD4;
    case 850u: goto L_08823AEC;
    case 851u: goto L_08823B04;
    case 852u: goto L_08823B1C;
    case 853u: goto L_08823B34;
    case 854u: goto L_08823B44;
    case 855u: goto L_08823B54;
    case 856u: goto L_08823B6C;
    case 857u: goto L_08823B84;
    case 858u: goto L_08823B9C;
    case 859u: goto L_08823BB4;
    case 860u: goto L_08823BC4;
    case 861u: goto L_08823BD4;
    case 862u: goto L_08823BEC;
    case 863u: goto L_08823C04;
    case 864u: goto L_08823C1C;
    case 865u: goto L_08823C34;
    case 866u: goto L_08823C44;
    case 867u: goto L_08823C50;
    case 868u: goto L_08823C5C;
    case 869u: goto L_08823C74;
    case 870u: goto L_08823C8C;
    case 871u: goto L_08823CA4;
    case 872u: goto L_08823CBC;
    case 873u: goto L_08823CCC;
    case 874u: goto L_08823CDC;
    case 875u: goto L_08823CF4;
    case 876u: goto L_08823D0C;
    case 877u: goto L_08823D24;
    case 878u: goto L_08823D3C;
    case 879u: goto L_08823D4C;
    case 880u: goto L_08823D58;
    case 881u: goto L_08823D64;
    case 882u: goto L_08823D78;
    case 883u: goto L_08823DC4;
    case 884u: goto L_08823DD0;
    case 885u: goto L_08823DD8;
    case 886u: goto L_08823DE4;
    case 887u: goto L_08823DF0;
    case 888u: goto L_08823E1C;
    case 889u: goto L_08823E30;
    case 890u: goto L_08823E5C;
    case 891u: goto L_08823E68;
    case 892u: goto L_08823F40;
    case 893u: goto L_08823F44;
    case 894u: goto L_08823F50;
    case 895u: goto L_08823F60;
    case 896u: goto L_08823F6C;
    case 897u: goto L_08823F94;
    case 898u: goto L_08823FA0;
    case 899u: goto L_08823FA4;
    case 900u: goto L_08823FAC;
    case 901u: goto L_08823FB8;
    case 902u: goto L_08823FBC;
    case 903u: goto L_08823FC4;
    case 904u: goto L_08823FD0;
    case 905u: goto L_08823FD4;
    case 906u: goto L_08823FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08820000:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_08820004;
L_08820004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08820020u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 707u, 0x0881EEFCu>(ctx, &aot_mem) && ctx.pc == 0x08820020u) goto L_08820020;
    return;
L_08820020:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_0882005C;
      }
      goto L_08820030;
    }
L_08820030:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882005C;
      }
      goto L_08820038;
    }
L_08820038:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0882006C;
      }
      goto L_08820040;
    }
L_08820040:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08820044;
L_08820044:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 32767u << 16u);
      if (branch_taken) {
          goto L_088200C4;
      }
      goto L_0882004C;
    }
L_0882004C:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    goto L_08820050;
L_08820050:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882005C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882006C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882005C;
      }
      goto L_08820074;
    }
L_08820074:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08820044;
    }
    goto L_0882007C;
L_0882007C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, ~(0u | ctx.gpr[5]));
    ctx.set_gpr(6, ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] >> (ctx.gpr[5] & 31u));
    ctx.set_gpr(7, ctx.gpr[5] & 32u);
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] >> (ctx.gpr[5] & 31u));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    if (ctx.gpr[7] != 0u) ctx.set_gpr(2, ctx.gpr[3]);
      if (branch_taken) {
          goto L_08820050;
      }
      goto L_088200B4;
    }
L_088200B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088200C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 32768u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088200D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.set_gpr(31, 0x088200F8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 678u, 0x0881EC18u>(ctx, &aot_mem) && ctx.pc == 0x088200F8u) goto L_088200F8;
    return;
L_088200F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820104:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08820120u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 707u, 0x0881EEFCu>(ctx, &aot_mem) && ctx.pc == 0x08820120u) goto L_08820120;
    return;
L_08820120:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, (ctx.gpr[8] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    ctx.set_gpr(7, ctx.gpr[3] << 2u);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] >> 30u);
    ctx.set_gpr(8, 0u < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[7] | ctx.gpr[2]);
    ctx.set_gpr(31, 0x0882015Cu);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 673u, 0x0881EBA4u>(ctx, &aot_mem) && ctx.pc == 0x0882015Cu) goto L_0882015C;
    return;
L_0882015C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820168:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882019C;
      }
      goto L_0882018C;
    }
L_0882018C:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4016));
    ctx.set_gpr(31, 0x0882019Cu);
    // nop
    goto L_08820B40;
L_0882019C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088201A8;
      }
      goto L_088201A4;
    }
L_088201A4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_088201A8;
L_088201A8:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(236), static_cast<std::uint8_t>(ctx.gpr[16]));
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
L_088201C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(9, 2226u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4052));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    goto L_088201DC;
L_088201DC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    // nop
      if (branch_taken) {
          goto L_088201DC;
      }
      goto L_08820200;
    }
L_08820200:
    ctx.set_gpr(1, ctx.gpr[6] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820218;
      }
      goto L_0882020C;
    }
L_0882020C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882022C;
      }
      goto L_08820218;
    }
L_08820218:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882022C;
      }
      goto L_08820220;
    }
L_08820220:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820270;
      }
      goto L_0882022C;
    }
L_0882022C:
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820244;
      }
      goto L_08820238;
    }
L_08820238:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820270;
      }
      goto L_08820244;
    }
L_08820244:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882025C;
      }
      goto L_08820254;
    }
L_08820254:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[5]);
    goto L_0882025C;
L_0882025C:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[29]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08820270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08820270u) goto L_08820270;
    return;
L_08820270:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820280:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088202A4u);
    // nop
    goto L_0882123C;
L_088202A4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, 0u | 32769u);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088202EC;
      }
      goto L_088202B8;
    }
L_088202B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u | 32768u);
    ctx.set_gpr(31, 0x088202CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088202CCu) goto L_088202CC;
    return;
L_088202CC:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088202E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088202E4u) goto L_088202E4;
    return;
L_088202E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820300;
      }
      goto L_088202EC;
    }
L_088202EC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08820300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08820300u) goto L_08820300;
    return;
L_08820300:
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
L_0882031C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0882032Cu);
    // nop
    goto L_088212F0;
L_0882032C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882033C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08820360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 246u, 0x08835150u>(ctx, &aot_mem) && ctx.pc == 0x08820360u) goto L_08820360;
    return;
L_08820360:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(3, ctx.gpr[3] & 32u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088203BC;
      }
      goto L_0882039C;
    }
L_0882039C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[3] & 768u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(768));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088203D0;
      }
      goto L_088203B0;
    }
L_088203B0:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088203D0;
      }
      goto L_088203BC;
    }
L_088203BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] & 2048u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088203D0;
      }
      goto L_088203CC;
    }
L_088203CC:
    ctx.set_gpr(7, 0u + 0u);
    goto L_088203D0;
L_088203D0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088203E8;
      }
      goto L_088203D8;
    }
L_088203D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(31, 0x088203E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 246u, 0x08835150u>(ctx, &aot_mem) && ctx.pc == 0x088203E4u) goto L_088203E4;
    return;
L_088203E4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    goto L_088203E8;
L_088203E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088203FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820420;
      }
      goto L_08820414;
    }
L_08820414:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882044C;
      }
      goto L_08820420;
    }
L_08820420:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(31, 0x08820430u);
    // nop
    goto L_08821110;
L_08820430:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820448;
      }
      goto L_0882043C;
    }
L_0882043C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08820448u);
    // nop
    goto L_088204D4;
L_08820448:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0882044C;
L_0882044C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820460:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882048C;
      }
      goto L_08820488;
    }
L_08820488:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0882048C;
L_0882048C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088204B8;
      }
      goto L_08820494;
    }
L_08820494:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088204A4u);
    // nop
    goto L_08820A10;
L_088204A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(31, 0x088204B4u);
    // nop
    goto L_088211EC;
L_088204B4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_088204B8;
L_088204B8:
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
L_088204D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x088204ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088204ECu) goto L_088204EC;
    return;
L_088204EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088204FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882053C;
      }
      goto L_08820534;
    }
L_08820534:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820544;
      }
      goto L_0882053C;
    }
L_0882053C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088209E8;
      }
      goto L_08820544;
    }
L_08820544:
    ctx.set_gpr(5, ctx.gpr[17] & 16384u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088205F4;
      }
      goto L_08820558;
    }
L_08820558:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088205A4;
      }
      goto L_08820564;
    }
L_08820564:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088205F4;
      }
      goto L_08820570;
    }
L_08820570:
    ctx.set_gpr(20, ctx.gpr[16] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088205F4;
      }
      goto L_08820588;
    }
L_08820588:
    ctx.set_gpr(31, 0x08820590u);
    // nop
    goto L_088212F0;
L_08820590:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088205F4;
      }
      goto L_088205A4;
    }
L_088205A4:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088205CC;
      }
      goto L_088205B0;
    }
L_088205B0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088205C8u);
    // nop
    goto L_088204FC;
L_088205C8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_088205CC;
L_088205CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088205B0;
      }
      goto L_088205DC;
    }
L_088205DC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x088205ECu);
    // nop
    goto L_088212F0;
L_088205EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    goto L_088205F4;
L_088205F4:
    ctx.set_gpr(4, ctx.gpr[17] & 8192u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882062C;
      }
      goto L_08820608;
    }
L_08820608:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08820618u);
    // nop
    goto L_088212F0;
L_08820618:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-17));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), 0u);
    goto L_0882062C;
L_0882062C:
    ctx.set_gpr(4, ctx.gpr[17] & 256u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820650;
      }
      goto L_08820640;
    }
L_08820640:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16385));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08820650;
L_08820650:
    ctx.set_gpr(4, ctx.gpr[17] & 128u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820704;
      }
      goto L_08820664;
    }
L_08820664:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(31, 0x08820674u);
    // nop
    goto L_088212F0;
L_08820674:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(31, 0x08820684u);
    // nop
    goto L_088212F0;
L_08820684:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(172), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088206F4;
      }
      goto L_08820698;
    }
L_08820698:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088206D0;
      }
      goto L_088206A4;
    }
L_088206A4:
    ctx.set_gpr(20, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088206C0u);
    // nop
    goto L_088212F0;
L_088206C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_088206D0;
L_088206D0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(181)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088206A4;
      }
      goto L_088206E0;
    }
L_088206E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(31, 0x088206F0u);
    // nop
    goto L_088212F0;
L_088206F0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(176), 0u);
    goto L_088206F4;
L_088206F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1025));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_08820704;
L_08820704:
    ctx.set_gpr(4, ctx.gpr[17] & 32u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088207EC;
      }
      goto L_08820718;
    }
L_08820718:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08820780;
      }
      goto L_08820724;
    }
L_08820724:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088207EC;
      }
      goto L_08820730;
    }
L_08820730:
    ctx.set_gpr(20, ctx.gpr[16] << 4u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08820748u);
    // nop
    goto L_088212F0;
L_08820748:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08820760u);
    // nop
    goto L_088212F0;
L_08820760:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088207EC;
      }
      goto L_08820780;
    }
L_08820780:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088207DC;
      }
      goto L_0882078C;
    }
L_0882078C:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088207B4;
      }
      goto L_08820798;
    }
L_08820798:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088207B0u);
    // nop
    goto L_088204FC;
L_088207B0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_088207B4;
L_088207B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820798;
      }
      goto L_088207C4;
    }
L_088207C4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(31, 0x088207D4u);
    // nop
    goto L_088212F0;
L_088207D4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(200), 0u);
    goto L_088207DC;
L_088207DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8193));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_088207EC;
L_088207EC:
    ctx.set_gpr(4, ctx.gpr[17] & 512u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088208A8;
      }
      goto L_08820800;
    }
L_08820800:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0882084C;
      }
      goto L_0882080C;
    }
L_0882080C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088208A8;
      }
      goto L_08820818;
    }
L_08820818:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08820838u);
    // nop
    goto L_088212F0;
L_08820838:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088208A8;
      }
      goto L_0882084C;
    }
L_0882084C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088208A8;
      }
      goto L_08820858;
    }
L_08820858:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820880;
      }
      goto L_08820864;
    }
L_08820864:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0882087Cu);
    // nop
    goto L_088204FC;
L_0882087C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08820880;
L_08820880:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820864;
      }
      goto L_08820890;
    }
L_08820890:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(31, 0x088208A0u);
    // nop
    goto L_088212F0;
L_088208A0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(192), 0u);
    goto L_088208A8;
L_088208A8:
    ctx.set_gpr(4, ctx.gpr[17] & 8u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088208E0;
      }
      goto L_088208BC;
    }
L_088208BC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, 0x088208CCu);
    // nop
    goto L_088212F0;
L_088208CC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(124), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_088208E0;
L_088208E0:
    ctx.set_gpr(4, ctx.gpr[17] & 4096u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882091C;
      }
      goto L_088208F4;
    }
L_088208F4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08820904u);
    // nop
    goto L_0882031C;
L_08820904:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    goto L_0882091C;
L_0882091C:
    ctx.set_gpr(4, ctx.gpr[17] & 64u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088209AC;
      }
      goto L_08820930;
    }
L_08820930:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820998;
      }
      goto L_0882093C;
    }
L_0882093C:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820974;
      }
      goto L_08820948;
    }
L_08820948:
    ctx.set_gpr(20, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08820964u);
    // nop
    goto L_088212F0;
L_08820964:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08820974;
L_08820974:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820948;
      }
      goto L_08820984;
    }
L_08820984:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(31, 0x08820994u);
    // nop
    goto L_088212F0;
L_08820994:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(232), 0u);
    goto L_08820998;
L_08820998:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 65535u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32767u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_088209AC;
L_088209AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088209D0;
      }
      goto L_088209B8;
    }
L_088209B8:
    ctx.set_gpr(4, ~(ctx.gpr[17] | 0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(184), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088209E8;
      }
      goto L_088209D0;
    }
L_088209D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16929));
    ctx.set_gpr(3, ctx.gpr[17] & ctx.gpr[3]);
    ctx.set_gpr(4, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(184), ctx.gpr[3]);
    goto L_088209E8;
L_088209E8:
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
L_08820A10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08820A38u);
    // nop
    goto L_088204FC;
L_08820A38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820A5C;
      }
      goto L_08820A44;
    }
L_08820A44:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(31, 0x08820A54u);
    // nop
    goto L_088212F0;
L_08820A54:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(420), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(416), 0u);
    goto L_08820A5C;
L_08820A5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08820A68u);
    // nop
    goto L_088204D4;
L_08820A68:
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
L_08820A80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820A8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820AB4;
      }
      goto L_08820AAC;
    }
L_08820AAC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820AC0;
      }
      goto L_08820AB4;
    }
L_08820AB4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_08820ACC;
      }
      goto L_08820AC0;
    }
L_08820AC0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820B24;
      }
      goto L_08820ACC;
    }
L_08820ACC:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820B18;
      }
      goto L_08820AE8;
    }
L_08820AE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08820AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08820AFCu) goto L_08820AFC;
    return;
L_08820AFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820B10;
      }
      goto L_08820B04;
    }
L_08820B04:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820B24;
      }
      goto L_08820B10;
    }
L_08820B10:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-5));
    goto L_08820B18;
L_08820B18:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820AE8;
      }
      goto L_08820B20;
    }
L_08820B20:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08820B24;
L_08820B24:
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
L_08820B40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820B6C;
      }
      goto L_08820B64;
    }
L_08820B64:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08820B6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08820B6Cu) goto L_08820B6C;
    return;
L_08820B6C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08820B7Cu);
    // nop
    goto L_08820DA4;
L_08820B7C:
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
L_08820B94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820BB8;
      }
      goto L_08820BA8;
    }
L_08820BA8:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08820BB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08820BB0u) goto L_08820BB0;
    return;
L_08820BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820BC0;
      }
      goto L_08820BB8;
    }
L_08820BB8:
    ctx.set_gpr(31, 0x08820BC0u);
    // nop
    goto L_08820DF0;
L_08820BC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820BD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820CA0;
      }
      goto L_08820BF4;
    }
L_08820BF4:
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[9]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820C30;
      }
      goto L_08820C0C;
    }
L_08820C0C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < 123 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820C30;
      }
      goto L_08820C18;
    }
L_08820C18:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820C94;
      }
      goto L_08820C24;
    }
L_08820C24:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820C94;
      }
      goto L_08820C30;
    }
L_08820C30:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(91));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(5, ctx.gpr[9] & 240u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(3640));
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[5]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(5, ctx.gpr[9] & 15u);
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[5]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820CA0;
      }
      goto L_08820C94;
    }
L_08820C94:
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08820CA0;
L_08820CA0:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820BF4;
      }
      goto L_08820CAC;
    }
L_08820CAC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08820CC4;
      }
      goto L_08820CB4;
    }
L_08820CB4:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820D04;
      }
      goto L_08820CC4;
    }
L_08820CC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08820CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08820CF8u) goto L_08820CF8;
    return;
L_08820CF8:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    goto L_08820D04;
L_08820D04:
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
L_08820D1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08820D3Cu);
    // nop
    goto L_08820BD0;
L_08820D3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08820D4Cu);
    // nop
    goto L_08820B40;
L_08820D4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820D60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08820D80u);
    // nop
    goto L_08820BD0;
L_08820D80:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08820D90u);
    // nop
    goto L_08820B94;
L_08820D90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820DA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08820DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08820DBCu) goto L_08820DBC;
    return;
L_08820DBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4060));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08820DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x08820DD4u) goto L_08820DD4;
    return;
L_08820DD4:
    ctx.set_gpr(31, 0x08820DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 669u, 0x0880F190u>(ctx, &aot_mem) && ctx.pc == 0x08820DDCu) goto L_08820DDC;
    return;
L_08820DDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820DF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08820E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x08820E10u) goto L_08820E10;
    return;
L_08820E10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4080));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08820E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x08820E28u) goto L_08820E28;
    return;
L_08820E28:
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
L_08820E40:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820E54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820E74;
      }
      goto L_08820E5C;
    }
L_08820E5C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820E74;
      }
      goto L_08820E64;
    }
L_08820E64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820E78;
      }
      goto L_08820E74;
    }
L_08820E74:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08820E78;
L_08820E78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820E80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820E9C;
      }
      goto L_08820E88;
    }
L_08820E88:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820E9C;
      }
      goto L_08820E90;
    }
L_08820E90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820EA0;
      }
      goto L_08820E9C;
    }
L_08820E9C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08820EA0;
L_08820EA0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820EA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820FC8;
      }
      goto L_08820EB8;
    }
L_08820EB8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820FC8;
      }
      goto L_08820EC0;
    }
L_08820EC0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820FC8;
      }
      goto L_08820EC8;
    }
L_08820EC8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820FC8;
      }
      goto L_08820ED0;
    }
L_08820ED0:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820FC8;
      }
      goto L_08820ED8;
    }
L_08820ED8:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820FC8;
      }
      goto L_08820EE0;
    }
L_08820EE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820F10;
      }
      goto L_08820F08;
    }
L_08820F08:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08820F10;
L_08820F10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820F24;
      }
      goto L_08820F1C;
    }
L_08820F1C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08820F24;
L_08820F24:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820F34;
      }
      goto L_08820F2C;
    }
L_08820F2C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08820F34;
L_08820F34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08820F50;
      }
      goto L_08820F44;
    }
L_08820F44:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820F68;
      }
      goto L_08820F50;
    }
L_08820F50:
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820F64;
      }
      goto L_08820F5C;
    }
L_08820F5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820F68;
      }
      goto L_08820F64;
    }
L_08820F64:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08820F68;
L_08820F68:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820F78;
      }
      goto L_08820F74;
    }
L_08820F74:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08820F78;
L_08820F78:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08820FBC;
      }
      goto L_08820FAC;
    }
L_08820FAC:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4100));
    ctx.set_gpr(31, 0x08820FBCu);
    // nop
    goto L_08820B94;
L_08820FBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08820FCC;
      }
      goto L_08820FC8;
    }
L_08820FC8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08820FCC;
L_08820FCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08820FDC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821020;
      }
      goto L_08820FE4;
    }
L_08820FE4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821020;
      }
      goto L_08820FEC;
    }
L_08820FEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821020;
      }
      goto L_08820FFC;
    }
L_08820FFC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821020;
      }
      goto L_08821004;
    }
L_08821004:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821024;
      }
      goto L_08821020;
    }
L_08821020:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08821024;
L_08821024:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882102C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821068;
      }
      goto L_08821034;
    }
L_08821034:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821068;
      }
      goto L_0882103C;
    }
L_0882103C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821068;
      }
      goto L_0882104C;
    }
L_0882104C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821068;
      }
      goto L_08821054;
    }
L_08821054:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(68));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882106C;
      }
      goto L_08821068;
    }
L_08821068:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0882106C;
L_0882106C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821074:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821108;
      }
      goto L_08821080;
    }
L_08821080:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821108;
      }
      goto L_08821088;
    }
L_08821088:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821108;
      }
      goto L_08821098;
    }
L_08821098:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088210D4;
      }
      goto L_088210A8;
    }
L_088210A8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088210BC;
      }
      goto L_088210B0;
    }
L_088210B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | 16u);
    goto L_088210BC;
L_088210BC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088210F4;
      }
      goto L_088210C4;
    }
L_088210C4:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(80));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088210F4;
      }
      goto L_088210D4;
    }
L_088210D4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088210E8;
      }
      goto L_088210DC;
    }
L_088210DC:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(80));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | 16u);
    goto L_088210E8;
L_088210E8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088210F4;
      }
      goto L_088210F0;
    }
L_088210F0:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_088210F4;
L_088210F4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821108;
      }
      goto L_088210FC;
    }
L_088210FC:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | 16u);
    goto L_08821108;
L_08821108:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0882113C;
      }
      goto L_08821130;
    }
L_08821130:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(272));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821160;
      }
      goto L_0882113C;
    }
L_0882113C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08821154;
      }
      goto L_08821148;
    }
L_08821148:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(440));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821160;
      }
      goto L_08821154;
    }
L_08821154:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088211D4;
      }
      goto L_08821160;
    }
L_08821160:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088211A4;
      }
      goto L_08821168;
    }
L_08821168:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08821178u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821178u) goto L_08821178;
    return;
L_08821178:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821198;
      }
      goto L_08821184;
    }
L_08821184:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08821198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08821198u) goto L_08821198;
    return;
L_08821198:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088211D4;
      }
      goto L_088211A4;
    }
L_088211A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088211B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 487u, 0x0881201Cu>(ctx, &aot_mem) && ctx.pc == 0x088211B0u) goto L_088211B0;
    return;
L_088211B0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088211D0;
      }
      goto L_088211BC;
    }
L_088211BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088211D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088211D0u) goto L_088211D0;
    return;
L_088211D0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088211D4;
L_088211D4:
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
L_088211EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-464));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882122C;
      }
      goto L_08821204;
    }
L_08821204:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821224;
      }
      goto L_0882120C;
    }
L_0882120C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0882121Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882121Cu) goto L_0882121C;
    return;
L_0882121C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882122C;
      }
      goto L_08821224;
    }
L_08821224:
    ctx.set_gpr(31, 0x0882122Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 489u, 0x08812048u>(ctx, &aot_mem) && ctx.pc == 0x0882122Cu) goto L_0882122C;
    return;
L_0882122C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(464));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882123C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821254;
      }
      goto L_0882124C;
    }
L_0882124C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821260;
      }
      goto L_08821254;
    }
L_08821254:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821284;
      }
      goto L_08821260;
    }
L_08821260:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882127C;
      }
      goto L_0882126C;
    }
L_0882126C:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08821274u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821274u) goto L_08821274;
    return;
L_08821274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821284;
      }
      goto L_0882127C;
    }
L_0882127C:
    ctx.set_gpr(31, 0x08821284u);
    // nop
    goto L_08821294;
L_08821284:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821294:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088212B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 487u, 0x0881201Cu>(ctx, &aot_mem) && ctx.pc == 0x088212B4u) goto L_088212B4;
    return;
L_088212B4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088212D4;
      }
      goto L_088212C0;
    }
L_088212C0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4152));
    ctx.set_gpr(31, 0x088212D4u);
    // nop
    goto L_08820B40;
L_088212D4:
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
L_088212F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821308;
      }
      goto L_08821300;
    }
L_08821300:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821310;
      }
      goto L_08821308;
    }
L_08821308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821334;
      }
      goto L_08821310;
    }
L_08821310:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(400)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882132C;
      }
      goto L_0882131C;
    }
L_0882131C:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08821324u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08821324u) goto L_08821324;
    return;
L_08821324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821334;
      }
      goto L_0882132C;
    }
L_0882132C:
    ctx.set_gpr(31, 0x08821334u);
    // nop
    goto L_08821344;
L_08821334:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882135C;
      }
      goto L_08821354;
    }
L_08821354:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821364;
      }
      goto L_0882135C;
    }
L_0882135C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821370;
      }
      goto L_08821364;
    }
L_08821364:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08821370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 489u, 0x08812048u>(ctx, &aot_mem) && ctx.pc == 0x08821370u) goto L_08821370;
    return;
L_08821370:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821380:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088213B8;
      }
      goto L_088213A8;
    }
L_088213A8:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4168));
    ctx.set_gpr(31, 0x088213B8u);
    // nop
    goto L_08820B40;
L_088213B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088213CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x088213CCu) goto L_088213CC;
    return;
L_088213CC:
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
L_088213E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08821420;
      }
      goto L_08821410;
    }
L_08821410:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4200));
    ctx.set_gpr(31, 0x08821420u);
    // nop
    goto L_08820B40;
L_08821420:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08821434u) goto L_08821434;
    return;
L_08821434:
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
L_08821450:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(392), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(396), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(400), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08821464:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088214B8u);
    // nop
    goto L_08821110;
L_088214B8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088214D0;
      }
      goto L_088214C4;
    }
L_088214C4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088216F8;
      }
      goto L_088214D0;
    }
L_088214D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088214E8u);
    // nop
    goto L_08821450;
L_088214E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08821500u);
    // nop
    goto L_08820E40;
L_08821500:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08821504;
L_08821504:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3892));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[4]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08821534;
      }
      goto L_08821524;
    }
L_08821524:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08821534;
L_08821534:
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3892));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821504;
      }
      goto L_08821554;
    }
L_08821554:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821604;
      }
      goto L_08821568;
    }
L_08821568:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088215A0;
      }
      goto L_08821570;
    }
L_08821570:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3892))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088215A0;
      }
      goto L_08821584;
    }
L_08821584:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088215B4;
      }
      goto L_08821590;
    }
L_08821590:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 57 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088215B4;
      }
      goto L_088215A0;
    }
L_088215A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4232));
    ctx.set_gpr(31, 0x088215B4u);
    // nop
    goto L_08820B40;
L_088215B4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(54));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08821604;
      }
      goto L_088215C4;
    }
L_088215C4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08821604;
      }
      goto L_088215D4;
    }
L_088215D4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(49));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08821604;
      }
      goto L_088215E4;
    }
L_088215E4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(5))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821604;
      }
      goto L_088215F0;
    }
L_088215F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4288));
    ctx.set_gpr(31, 0x08821604u);
    // nop
    goto L_08820B40;
L_08821604:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8192));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821618u);
    // nop
    goto L_0882123C;
L_08821618:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(2, 2178u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(640));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, 2178u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(796));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4352));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08821650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 258u, 0x088395C8u>(ctx, &aot_mem) && ctx.pc == 0x08821650u) goto L_08821650;
    return;
L_08821650:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-6));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088216A0;
      }
      goto L_0882165C;
    }
L_0882165C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08821684;
      }
      goto L_08821668;
    }
L_08821668:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08821684;
      }
      goto L_08821674;
    }
L_08821674:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088216D0;
      }
      goto L_0882167C;
    }
L_0882167C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088216BC;
      }
      goto L_08821684;
    }
L_08821684:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4360));
    ctx.set_gpr(31, 0x08821698u);
    // nop
    goto L_08820B40;
L_08821698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088216D0;
      }
      goto L_088216A0;
    }
L_088216A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4380));
    ctx.set_gpr(31, 0x088216B4u);
    // nop
    goto L_08820B40;
L_088216B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088216D0;
      }
      goto L_088216BC;
    }
L_088216BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4400));
    ctx.set_gpr(31, 0x088216D0u);
    // nop
    goto L_08820B40;
L_088216D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088216F4u);
    // nop
    goto L_08822CB0;
L_088216F4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088216F8;
L_088216F8:
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
L_08821728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821758;
    }
L_08821758:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(19, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08821774u);
    // nop
    goto L_08822C0C;
L_08821774:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(236), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08821790u);
    // nop
    goto L_088201C4;
L_08821790:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821798;
    }
L_08821798:
    ctx.set_gpr(1, ctx.gpr[16] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088217DC;
      }
      goto L_088217A4;
    }
L_088217A4:
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088217B8u);
    // nop
    goto L_088201C4;
L_088217B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088217DC;
      }
      goto L_088217C0;
    }
L_088217C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4420));
    ctx.set_gpr(31, 0x088217D4u);
    // nop
    goto L_08820B40;
L_088217D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_088217DC;
    }
L_088217DC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4436));
    ctx.set_gpr(31, 0x088217F0u);
    // nop
    goto L_08820B40;
L_088217F0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821804u);
    // nop
    goto L_08822C0C;
L_08821804:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08821810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 235u, 0x08829238u>(ctx, &aot_mem) && ctx.pc == 0x08821810u) goto L_08821810;
    return;
L_08821810:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08821820u);
    // nop
    goto L_0882033C;
L_08821820:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 238u, 0x088292B4u>(ctx, &aot_mem) && ctx.pc == 0x08821834u) goto L_08821834;
    return;
L_08821834:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3488));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882184Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x0882184Cu) goto L_0882184C;
    return;
L_0882184C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821870;
      }
      goto L_08821854;
    }
L_08821854:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 322u, 0x088298A8u>(ctx, &aot_mem) && ctx.pc == 0x08821868u) goto L_08821868;
    return;
L_08821868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821870;
    }
L_08821870:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3504));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821888u) goto L_08821888;
    return;
L_08821888:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088218AC;
      }
      goto L_08821890;
    }
L_08821890:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088218A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 405u, 0x08829EB4u>(ctx, &aot_mem) && ctx.pc == 0x088218A4u) goto L_088218A4;
    return;
L_088218A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_088218AC;
    }
L_088218AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x088218BCu);
    // nop
    goto L_08820A8C;
L_088218BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088219BC;
      }
      goto L_088218C4;
    }
L_088218C4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088218DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x088218DCu) goto L_088218DC;
    return;
L_088218DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088218F0;
      }
      goto L_088218E4;
    }
L_088218E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] | 4u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_088218F0;
L_088218F0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 122u, 0x0882C894u>(ctx, &aot_mem) && ctx.pc == 0x08821904u) goto L_08821904;
    return;
L_08821904:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3512));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882191Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x0882191Cu) goto L_0882191C;
    return;
L_0882191C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821938;
      }
      goto L_08821924;
    }
L_08821924:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821938;
    }
L_08821938:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821950u) goto L_08821950;
    return;
L_08821950:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821958;
    }
L_08821958:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821984;
      }
      goto L_08821968;
    }
L_08821968:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4476));
    ctx.set_gpr(31, 0x0882197Cu);
    // nop
    goto L_08820B40;
L_0882197C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821E2C;
      }
      goto L_08821984;
    }
L_08821984:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08821E2C;
      }
      goto L_08821994;
    }
L_08821994:
    ctx.set_gpr(3, ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821E2C;
      }
      goto L_088219A0;
    }
L_088219A0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4504));
    ctx.set_gpr(31, 0x088219B4u);
    // nop
    goto L_08820B40;
L_088219B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821E2C;
      }
      goto L_088219BC;
    }
L_088219BC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3512));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088219D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x088219D4u) goto L_088219D4;
    return;
L_088219D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088219F8;
      }
      goto L_088219DC;
    }
L_088219DC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088219F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 371u, 0x08829C2Cu>(ctx, &aot_mem) && ctx.pc == 0x088219F0u) goto L_088219F0;
    return;
L_088219F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_088219F8;
    }
L_088219F8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821A10u) goto L_08821A10;
    return;
L_08821A10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821A8C;
      }
      goto L_08821A18;
    }
L_08821A18:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821A44;
      }
      goto L_08821A28;
    }
L_08821A28:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4476));
    ctx.set_gpr(31, 0x08821A3Cu);
    // nop
    goto L_08820B40;
L_08821A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821A74;
      }
      goto L_08821A44;
    }
L_08821A44:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08821A74;
      }
      goto L_08821A54;
    }
L_08821A54:
    ctx.set_gpr(3, ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821A74;
      }
      goto L_08821A60;
    }
L_08821A60:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4504));
    ctx.set_gpr(31, 0x08821A74u);
    // nop
    goto L_08820B40;
L_08821A74:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] | 4u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821E2C;
      }
      goto L_08821A8C;
    }
L_08821A8C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821AA4u) goto L_08821AA4;
    return;
L_08821AA4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821AC8;
      }
      goto L_08821AAC;
    }
L_08821AAC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 747u, 0x0882B59Cu>(ctx, &aot_mem) && ctx.pc == 0x08821AC0u) goto L_08821AC0;
    return;
L_08821AC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821AC8;
    }
L_08821AC8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3528));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821AE0u) goto L_08821AE0;
    return;
L_08821AE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821B04;
      }
      goto L_08821AE8;
    }
L_08821AE8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 479u, 0x0882A398u>(ctx, &aot_mem) && ctx.pc == 0x08821AFCu) goto L_08821AFC;
    return;
L_08821AFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821B04;
    }
L_08821B04:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3536));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821B1Cu) goto L_08821B1C;
    return;
L_08821B1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821B40;
      }
      goto L_08821B24;
    }
L_08821B24:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 413u, 0x08829F60u>(ctx, &aot_mem) && ctx.pc == 0x08821B38u) goto L_08821B38;
    return;
L_08821B38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821B40;
    }
L_08821B40:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3544));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821B58u) goto L_08821B58;
    return;
L_08821B58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821B7C;
      }
      goto L_08821B60;
    }
L_08821B60:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 792u, 0x0882B880u>(ctx, &aot_mem) && ctx.pc == 0x08821B74u) goto L_08821B74;
    return;
L_08821B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821B7C;
    }
L_08821B7C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3552));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821B94u) goto L_08821B94;
    return;
L_08821B94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821BB8;
      }
      goto L_08821B9C;
    }
L_08821B9C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 848u, 0x0882BC04u>(ctx, &aot_mem) && ctx.pc == 0x08821BB0u) goto L_08821BB0;
    return;
L_08821BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821BB8;
    }
L_08821BB8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3560));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821BD0u) goto L_08821BD0;
    return;
L_08821BD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821BF4;
      }
      goto L_08821BD8;
    }
L_08821BD8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 871u, 0x0882BD74u>(ctx, &aot_mem) && ctx.pc == 0x08821BECu) goto L_08821BEC;
    return;
L_08821BEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821BF4;
    }
L_08821BF4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3568));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821C0Cu) goto L_08821C0C;
    return;
L_08821C0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821C30;
      }
      goto L_08821C14;
    }
L_08821C14:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 18u, 0x0882C130u>(ctx, &aot_mem) && ctx.pc == 0x08821C28u) goto L_08821C28;
    return;
L_08821C28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821C30;
    }
L_08821C30:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3576));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821C48u) goto L_08821C48;
    return;
L_08821C48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821C6C;
      }
      goto L_08821C50;
    }
L_08821C50:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 825u, 0x0882BA94u>(ctx, &aot_mem) && ctx.pc == 0x08821C64u) goto L_08821C64;
    return;
L_08821C64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821C6C;
    }
L_08821C6C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3584));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821C84u) goto L_08821C84;
    return;
L_08821C84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821CA8;
      }
      goto L_08821C8C;
    }
L_08821C8C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 449u, 0x0882A1A0u>(ctx, &aot_mem) && ctx.pc == 0x08821CA0u) goto L_08821CA0;
    return;
L_08821CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821CA8;
    }
L_08821CA8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3600));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821CC0u) goto L_08821CC0;
    return;
L_08821CC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821CE4;
      }
      goto L_08821CC8;
    }
L_08821CC8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 591u, 0x0882AC18u>(ctx, &aot_mem) && ctx.pc == 0x08821CDCu) goto L_08821CDC;
    return;
L_08821CDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821CE4;
    }
L_08821CE4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3592));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821CFCu) goto L_08821CFC;
    return;
L_08821CFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821D20;
      }
      goto L_08821D04;
    }
L_08821D04:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 650u, 0x0882AF50u>(ctx, &aot_mem) && ctx.pc == 0x08821D18u) goto L_08821D18;
    return;
L_08821D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821D20;
    }
L_08821D20:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3608));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821D38u) goto L_08821D38;
    return;
L_08821D38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821D5C;
      }
      goto L_08821D40;
    }
L_08821D40:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 78u, 0x0882C554u>(ctx, &aot_mem) && ctx.pc == 0x08821D54u) goto L_08821D54;
    return;
L_08821D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821D5C;
    }
L_08821D5C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3616));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821D74u) goto L_08821D74;
    return;
L_08821D74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821D98;
      }
      goto L_08821D7C;
    }
L_08821D7C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 58u, 0x0882C3ECu>(ctx, &aot_mem) && ctx.pc == 0x08821D90u) goto L_08821D90;
    return;
L_08821D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821D98;
    }
L_08821D98:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3624));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821DB0u) goto L_08821DB0;
    return;
L_08821DB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821DD4;
      }
      goto L_08821DB8;
    }
L_08821DB8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 692u, 0x0882B24Cu>(ctx, &aot_mem) && ctx.pc == 0x08821DCCu) goto L_08821DCC;
    return;
L_08821DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821DD4;
    }
L_08821DD4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3632));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821DECu) goto L_08821DEC;
    return;
L_08821DEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821E10;
      }
      goto L_08821DF4;
    }
L_08821DF4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 99u, 0x0882C6CCu>(ctx, &aot_mem) && ctx.pc == 0x08821E08u) goto L_08821E08;
    return;
L_08821E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821E10;
    }
L_08821E10:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 122u, 0x0882C894u>(ctx, &aot_mem) && ctx.pc == 0x08821E24u) goto L_08821E24;
    return;
L_08821E24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088217F0;
      }
      goto L_08821E2C;
    }
L_08821E2C:
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
L_08821E4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 64u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821E7C;
      }
      goto L_08821E74;
    }
L_08821E74:
    ctx.set_gpr(31, 0x08821E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 325u, 0x0882D5E8u>(ctx, &aot_mem) && ctx.pc == 0x08821E7Cu) goto L_08821E7C;
    return;
L_08821E7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08821E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 4u, 0x08824088u>(ctx, &aot_mem) && ctx.pc == 0x08821E8Cu) goto L_08821E8C;
    return;
L_08821E8C:
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
L_08821EA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] & 64u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821EDC;
      }
      goto L_08821ED4;
    }
L_08821ED4:
    ctx.set_gpr(31, 0x08821EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 325u, 0x0882D5E8u>(ctx, &aot_mem) && ctx.pc == 0x08821EDCu) goto L_08821EDC;
    return;
L_08821EDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821F00;
      }
      goto L_08821EEC;
    }
L_08821EEC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4532));
    ctx.set_gpr(31, 0x08821F00u);
    // nop
    goto L_08820B40;
L_08821F00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08821F10;
L_08821F10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822004;
      }
      goto L_08821F1C;
    }
L_08821F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08821FAC;
      }
      goto L_08821F24;
    }
L_08821F24:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08821F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 241u, 0x0882930Cu>(ctx, &aot_mem) && ctx.pc == 0x08821F34u) goto L_08821F34;
    return;
L_08821F34:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821F48u);
    // nop
    goto L_08822C0C;
L_08821F48:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08821F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 235u, 0x08829238u>(ctx, &aot_mem) && ctx.pc == 0x08821F54u) goto L_08821F54;
    return;
L_08821F54:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08821F64u);
    // nop
    goto L_0882033C;
L_08821F64:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 238u, 0x088292B4u>(ctx, &aot_mem) && ctx.pc == 0x08821F78u) goto L_08821F78;
    return;
L_08821F78:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08821F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08821F90u) goto L_08821F90;
    return;
L_08821F90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821FAC;
      }
      goto L_08821F98;
    }
L_08821F98:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4568));
    ctx.set_gpr(31, 0x08821FACu);
    // nop
    goto L_08820B40;
L_08821FAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821F24;
      }
      goto L_08821FB8;
    }
L_08821FB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08821FE0;
      }
      goto L_08821FDC;
    }
L_08821FDC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    goto L_08821FE0;
L_08821FE0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08821FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 238u, 0x088292B4u>(ctx, &aot_mem) && ctx.pc == 0x08821FF4u) goto L_08821FF4;
    return;
L_08821FF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    goto L_08822004;
L_08822004:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08822014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 260u, 0x088395F8u>(ctx, &aot_mem) && ctx.pc == 0x08822014u) goto L_08822014;
    return;
L_08822014:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08822078;
      }
      goto L_08822020;
    }
L_08822020:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822044;
      }
      goto L_0882202C;
    }
L_0882202C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822044;
      }
      goto L_08822038;
    }
L_08822038:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822058;
      }
      goto L_08822044;
    }
L_08822044:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4592));
    ctx.set_gpr(31, 0x08822058u);
    // nop
    goto L_08820B40;
L_08822058:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] | 8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] | 32u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088220B4;
      }
      goto L_08822078;
    }
L_08822078:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088220A8;
      }
      goto L_08822080;
    }
L_08822080:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822094;
      }
      goto L_0882208C;
    }
L_0882208C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882209C;
      }
      goto L_08822094;
    }
L_08822094:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4616));
    goto L_0882209C;
L_0882209C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088220A8u);
    // nop
    goto L_08820B40;
L_088220A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08821F10;
      }
      goto L_088220B4;
    }
L_088220B4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(230)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(200), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(234)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(202), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(231)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(201), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(233)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(203), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(203)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(192)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, ctx.gpr[2] >> 3u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(196), ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822128;
      }
      goto L_08822108;
    }
L_08822108:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(8, ctx.gpr[3] & 255u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08822128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 230u, 0x0882CF98u>(ctx, &aot_mem) && ctx.pc == 0x08822128u) goto L_08822128;
    return;
L_08822128:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(31, 0x08822144u);
    // nop
    goto L_08821380;
L_08822144:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882215C;
      }
      goto L_08822150;
    }
L_08822150:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0882215Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 55u, 0x08824384u>(ctx, &aot_mem) && ctx.pc == 0x0882215Cu) goto L_0882215C;
    return;
L_0882215C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822178;
      }
      goto L_08822164;
    }
L_08822164:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08822178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 169u, 0x0882CB80u>(ctx, &aot_mem) && ctx.pc == 0x08822178u) goto L_08822178;
    return;
L_08822178:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822194;
      }
      goto L_08822180;
    }
L_08822180:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08822194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 169u, 0x0882CB80u>(ctx, &aot_mem) && ctx.pc == 0x08822194u) goto L_08822194;
    return;
L_08822194:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088221A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 279u, 0x0882D270u>(ctx, &aot_mem) && ctx.pc == 0x088221A0u) goto L_088221A0;
    return;
L_088221A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(344)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088221C0;
      }
      goto L_088221AC;
    }
L_088221AC:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088221C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088221C0u) goto L_088221C0;
    return;
L_088221C0:
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
L_088221DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08822204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 241u, 0x0882930Cu>(ctx, &aot_mem) && ctx.pc == 0x08822204u) goto L_08822204;
    return;
L_08822204:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822218u);
    // nop
    goto L_08822C0C;
L_08822218:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08822224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 235u, 0x08829238u>(ctx, &aot_mem) && ctx.pc == 0x08822224u) goto L_08822224;
    return;
L_08822224:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08822234u);
    // nop
    goto L_0882033C;
L_08822234:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 238u, 0x088292B4u>(ctx, &aot_mem) && ctx.pc == 0x08822248u) goto L_08822248;
    return;
L_08822248:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3488));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08822260u) goto L_08822260;
    return;
L_08822260:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822284;
      }
      goto L_08822268;
    }
L_08822268:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882227Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 322u, 0x088298A8u>(ctx, &aot_mem) && ctx.pc == 0x0882227Cu) goto L_0882227C;
    return;
L_0882227C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_08822284;
    }
L_08822284:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3504));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0882229Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x0882229Cu) goto L_0882229C;
    return;
L_0882229C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088222C0;
      }
      goto L_088222A4;
    }
L_088222A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088222B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 405u, 0x08829EB4u>(ctx, &aot_mem) && ctx.pc == 0x088222B8u) goto L_088222B8;
    return;
L_088222B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_088222C0;
    }
L_088222C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x088222D0u);
    // nop
    goto L_08820A8C;
L_088222D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822380;
      }
      goto L_088222D8;
    }
L_088222D8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088222F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x088222F0u) goto L_088222F0;
    return;
L_088222F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882232C;
      }
      goto L_088222F8;
    }
L_088222F8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822310;
      }
      goto L_08822300;
    }
L_08822300:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822338;
      }
      goto L_08822310;
    }
L_08822310:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4636));
    ctx.set_gpr(31, 0x08822324u);
    // nop
    goto L_08820B40;
L_08822324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822338;
      }
      goto L_0882232C;
    }
L_0882232C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] | 8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_08822338;
L_08822338:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882234Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 122u, 0x0882C894u>(ctx, &aot_mem) && ctx.pc == 0x0882234Cu) goto L_0882234C;
    return;
L_0882234C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3512));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08822364u) goto L_08822364;
    return;
L_08822364:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_0882236C;
    }
L_0882236C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_08822380;
    }
L_08822380:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08822398u) goto L_08822398;
    return;
L_08822398:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088223E4;
      }
      goto L_088223A0;
    }
L_088223A0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088223B8;
      }
      goto L_088223A8;
    }
L_088223A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088223CC;
      }
      goto L_088223B8;
    }
L_088223B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4636));
    ctx.set_gpr(31, 0x088223CCu);
    // nop
    goto L_08820B40;
L_088223CC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088223DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 241u, 0x0882930Cu>(ctx, &aot_mem) && ctx.pc == 0x088223DCu) goto L_088223DC;
    return;
L_088223DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_088223E4;
    }
L_088223E4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3512));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088223FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x088223FCu) goto L_088223FC;
    return;
L_088223FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822420;
      }
      goto L_08822404;
    }
L_08822404:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08822418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 371u, 0x08829C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08822418u) goto L_08822418;
    return;
L_08822418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_08822420;
    }
L_08822420:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08822438u) goto L_08822438;
    return;
L_08822438:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882245C;
      }
      goto L_08822440;
    }
L_08822440:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08822454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 747u, 0x0882B59Cu>(ctx, &aot_mem) && ctx.pc == 0x08822454u) goto L_08822454;
    return;
L_08822454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_0882245C;
    }
L_0882245C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3528));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08822474u) goto L_08822474;
    return;
L_08822474:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822498;
      }
      goto L_0882247C;
    }
L_0882247C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08822490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 479u, 0x0882A398u>(ctx, &aot_mem) && ctx.pc == 0x08822490u) goto L_08822490;
    return;
L_08822490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_08822498;
    }
L_08822498:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3536));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088224B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x088224B0u) goto L_088224B0;
    return;
L_088224B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088224D4;
      }
      goto L_088224B8;
    }
L_088224B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088224CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 413u, 0x08829F60u>(ctx, &aot_mem) && ctx.pc == 0x088224CCu) goto L_088224CC;
    return;
L_088224CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_088224D4;
    }
L_088224D4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3544));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088224ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x088224ECu) goto L_088224EC;
    return;
L_088224EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822510;
      }
      goto L_088224F4;
    }
L_088224F4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08822508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 792u, 0x0882B880u>(ctx, &aot_mem) && ctx.pc == 0x08822508u) goto L_08822508;
    return;
L_08822508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_08822510;
    }
L_08822510:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3552));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08822528u) goto L_08822528;
    return;
L_08822528:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882254C;
      }
      goto L_08822530;
    }
L_08822530:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08822544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 848u, 0x0882BC04u>(ctx, &aot_mem) && ctx.pc == 0x08822544u) goto L_08822544;
    return;
L_08822544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_0882254C;
    }
L_0882254C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3560));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08822564u) goto L_08822564;
    return;
L_08822564:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822588;
      }
      goto L_0882256C;
    }
L_0882256C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08822580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 871u, 0x0882BD74u>(ctx, &aot_mem) && ctx.pc == 0x08822580u) goto L_08822580;
    return;
L_08822580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_08822588;
    }
L_08822588:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3568));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088225A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x088225A0u) goto L_088225A0;
    return;
L_088225A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088225C4;
      }
      goto L_088225A8;
    }
L_088225A8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088225BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 18u, 0x0882C130u>(ctx, &aot_mem) && ctx.pc == 0x088225BCu) goto L_088225BC;
    return;
L_088225BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_088225C4;
    }
L_088225C4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3576));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088225DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x088225DCu) goto L_088225DC;
    return;
L_088225DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822600;
      }
      goto L_088225E4;
    }
L_088225E4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088225F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 825u, 0x0882BA94u>(ctx, &aot_mem) && ctx.pc == 0x088225F8u) goto L_088225F8;
    return;
L_088225F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_08822600;
    }
L_08822600:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3584));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08822618u) goto L_08822618;
    return;
L_08822618:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882263C;
      }
      goto L_08822620;
    }
L_08822620:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08822634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 449u, 0x0882A1A0u>(ctx, &aot_mem) && ctx.pc == 0x08822634u) goto L_08822634;
    return;
L_08822634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_0882263C;
    }
L_0882263C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3600));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08822654u) goto L_08822654;
    return;
L_08822654:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822678;
      }
      goto L_0882265C;
    }
L_0882265C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08822670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 591u, 0x0882AC18u>(ctx, &aot_mem) && ctx.pc == 0x08822670u) goto L_08822670;
    return;
L_08822670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_08822678;
    }
L_08822678:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3592));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08822690u) goto L_08822690;
    return;
L_08822690:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088226B4;
      }
      goto L_08822698;
    }
L_08822698:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088226ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 650u, 0x0882AF50u>(ctx, &aot_mem) && ctx.pc == 0x088226ACu) goto L_088226AC;
    return;
L_088226AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_088226B4;
    }
L_088226B4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3608));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088226CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x088226CCu) goto L_088226CC;
    return;
L_088226CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088226F0;
      }
      goto L_088226D4;
    }
L_088226D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088226E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 78u, 0x0882C554u>(ctx, &aot_mem) && ctx.pc == 0x088226E8u) goto L_088226E8;
    return;
L_088226E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_088226F0;
    }
L_088226F0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3616));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08822708u) goto L_08822708;
    return;
L_08822708:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882272C;
      }
      goto L_08822710;
    }
L_08822710:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08822724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 58u, 0x0882C3ECu>(ctx, &aot_mem) && ctx.pc == 0x08822724u) goto L_08822724;
    return;
L_08822724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_0882272C;
    }
L_0882272C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3624));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08822744u) goto L_08822744;
    return;
L_08822744:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822768;
      }
      goto L_0882274C;
    }
L_0882274C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08822760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 692u, 0x0882B24Cu>(ctx, &aot_mem) && ctx.pc == 0x08822760u) goto L_08822760;
    return;
L_08822760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_08822768;
    }
L_08822768:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3632));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08822780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08822780u) goto L_08822780;
    return;
L_08822780:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088227A4;
      }
      goto L_08822788;
    }
L_08822788:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882279Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 99u, 0x0882C6CCu>(ctx, &aot_mem) && ctx.pc == 0x0882279Cu) goto L_0882279C;
    return;
L_0882279C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088227B8;
      }
      goto L_088227A4;
    }
L_088227A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088227B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 122u, 0x0882C894u>(ctx, &aot_mem) && ctx.pc == 0x088227B8u) goto L_088227B8;
    return;
L_088227B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822204;
      }
      goto L_088227C8;
    }
L_088227C8:
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
L_088227E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882282C;
      }
      goto L_08822828;
    }
L_08822828:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_0882282C;
L_0882282C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822838;
      }
      goto L_08822834;
    }
L_08822834:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08822838;
L_08822838:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822844;
      }
      goto L_08822840;
    }
L_08822840:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08822844;
L_08822844:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0882285Cu);
    // nop
    goto L_0882290C;
L_0882285C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822890;
      }
      goto L_08822864;
    }
L_08822864:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0882287Cu);
    // nop
    goto L_088204FC;
L_0882287C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0882288Cu);
    // nop
    goto L_088211EC;
L_0882288C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_08822890;
L_08822890:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088228C4;
      }
      goto L_08822898;
    }
L_08822898:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088228B0u);
    // nop
    goto L_088204FC;
L_088228B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x088228C0u);
    // nop
    goto L_088211EC;
L_088228C0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    goto L_088228C4;
L_088228C4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088228E0;
      }
      goto L_088228CC;
    }
L_088228CC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x088228DCu);
    // nop
    goto L_088211EC;
L_088228DC:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    goto L_088228E0;
L_088228E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_0882290C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822940;
      }
      goto L_08822938;
    }
L_08822938:
    ctx.set_gpr(31, 0x08822940u);
    // nop
    goto L_08820A10;
L_08822940:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822958;
      }
      goto L_08822948;
    }
L_08822948:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08822958u);
    // nop
    goto L_08820A10;
L_08822958:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08822968u);
    // nop
    goto L_088212F0;
L_08822968:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(31, 0x08822978u);
    // nop
    goto L_088212F0;
L_08822978:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(31, 0x08822988u);
    // nop
    goto L_088212F0;
L_08822988:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.set_gpr(31, 0x08822998u);
    // nop
    goto L_088212F0;
L_08822998:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(356)));
    ctx.set_gpr(31, 0x088229A8u);
    // nop
    goto L_088212F0;
L_088229A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(31, 0x088229B8u);
    // nop
    goto L_088212F0;
L_088229B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(31, 0x088229C8u);
    // nop
    goto L_088212F0;
L_088229C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(31, 0x088229D8u);
    // nop
    goto L_088212F0;
L_088229D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(2, ctx.gpr[2] & 4096u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088229F8;
      }
      goto L_088229E8;
    }
L_088229E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x088229F8u);
    // nop
    goto L_0882031C;
L_088229F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4097));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] & 8192u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822A24;
      }
      goto L_08822A14;
    }
L_08822A14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(31, 0x08822A24u);
    // nop
    goto L_088212F0;
L_08822A24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8193));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822A50;
      }
      goto L_08822A40;
    }
L_08822A40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(31, 0x08822A50u);
    // nop
    goto L_088212F0;
L_08822A50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822AC8;
      }
      goto L_08822A6C;
    }
L_08822A6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822AAC;
      }
      goto L_08822A8C;
    }
L_08822A8C:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08822AA8u);
    // nop
    goto L_088212F0;
L_08822AA8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08822AAC;
L_08822AAC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822A8C;
      }
      goto L_08822AB8;
    }
L_08822AB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(31, 0x08822AC8u);
    // nop
    goto L_088212F0;
L_08822AC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822B30;
      }
      goto L_08822AD4;
    }
L_08822AD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822B14;
      }
      goto L_08822AF4;
    }
L_08822AF4:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08822B10u);
    // nop
    goto L_088212F0;
L_08822B10:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08822B14;
L_08822B14:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822AF4;
      }
      goto L_08822B20;
    }
L_08822B20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(31, 0x08822B30u);
    // nop
    goto L_088212F0;
L_08822B30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822B98;
      }
      goto L_08822B3C;
    }
L_08822B3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822B7C;
      }
      goto L_08822B5C;
    }
L_08822B5C:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08822B78u);
    // nop
    goto L_088212F0;
L_08822B78:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08822B7C;
L_08822B7C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822B5C;
      }
      goto L_08822B88;
    }
L_08822B88:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(31, 0x08822B98u);
    // nop
    goto L_088212F0;
L_08822B98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(388)));
    ctx.set_gpr(31, 0x08822BA8u);
    // nop
    goto L_088212F0;
L_08822BA8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08822BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 220u, 0x08839394u>(ctx, &aot_mem) && ctx.pc == 0x08822BB4u) goto L_08822BB4;
    return;
L_08822BB4:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(440));
    ctx.set_gpr(31, 0x08822BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08822BD8u) goto L_08822BD8;
    return;
L_08822BD8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[17]);
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
L_08822C0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822C30;
      }
      goto L_08822C20;
    }
L_08822C20:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08822C28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08822C28u) goto L_08822C28;
    return;
L_08822C28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822C40;
      }
      goto L_08822C30;
    }
L_08822C30:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4660));
    ctx.set_gpr(31, 0x08822C40u);
    // nop
    goto L_08820B40;
L_08822C40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08822C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 257u, 0x08811040u>(ctx, &aot_mem) && ctx.pc == 0x08822C7Cu) goto L_08822C7C;
    return;
L_08822C7C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08822C98;
      }
      goto L_08822C84;
    }
L_08822C84:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4688));
    ctx.set_gpr(31, 0x08822C98u);
    // nop
    goto L_08820B40;
L_08822C98:
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
L_08822CB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822CD8;
      }
      goto L_08822CCC;
    }
L_08822CCC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822CE4;
      }
      goto L_08822CD8;
    }
L_08822CD8:
    ctx.set_gpr(3, 2178u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(11344));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_08822CE4;
L_08822CE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822D1C;
      }
      goto L_08822CF0;
    }
L_08822CF0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4700));
    ctx.set_gpr(31, 0x08822D08u);
    // nop
    goto L_08820B94;
L_08822D08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4768));
    ctx.set_gpr(31, 0x08822D1Cu);
    // nop
    goto L_08820B94;
L_08822D1C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822D34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822D48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] | 4096u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822D5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] | 4096u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822D70:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 16u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08822D8C:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(23, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(230)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822F84;
      }
      goto L_08822DD4;
    }
L_08822DD4:
    ctx.set_gpr(3, ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822F84;
      }
      goto L_08822DE0;
    }
L_08822DE0:
    ctx.set_gpr(3, ctx.gpr[23] & 2u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822ECC;
      }
      goto L_08822DEC;
    }
L_08822DEC:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(231)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08822EB4;
      }
      goto L_08822DFC;
    }
L_08822DFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08822EB4;
      }
      goto L_08822E08;
    }
L_08822E08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08822E8C;
      }
      goto L_08822E14;
    }
L_08822E14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08822E5C;
      }
      goto L_08822E20;
    }
L_08822E20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08822E34;
      }
      goto L_08822E2C;
    }
L_08822E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822F84;
      }
      goto L_08822E34;
    }
L_08822E34:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(3, ctx.gpr[4] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(256), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(256)));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(254), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(252), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822F84;
      }
      goto L_08822E5C;
    }
L_08822E5C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(256), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(256)));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(254), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(252), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822F84;
      }
      goto L_08822E8C;
    }
L_08822E8C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(256), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(256)));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(254), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(252), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822F84;
      }
      goto L_08822EB4;
    }
L_08822EB4:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(256)));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(254), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(252), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822F84;
      }
      goto L_08822ECC;
    }
L_08822ECC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08822F84;
      }
      goto L_08822ED8;
    }
L_08822ED8:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(252), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(254), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 8u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08822F84;
      }
      goto L_08822F40;
    }
L_08822F40:
    ctx.set_gpr(3, ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822F84;
      }
      goto L_08822F4C;
    }
L_08822F4C:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(218)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08822F78;
      }
      goto L_08822F5C;
    }
L_08822F5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08822F78;
L_08822F78:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08822F5C;
      }
      goto L_08822F84;
    }
L_08822F84:
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(258));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    goto L_08822F90;
L_08822F90:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    // nop
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08822F90;
      }
      goto L_08822FB0;
    }
L_08822FB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 96u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 8192u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823DD8;
      }
      goto L_08822FC8;
    }
L_08822FC8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08822FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 71u, 0x088285D4u>(ctx, &aot_mem) && ctx.pc == 0x08822FD4u) goto L_08822FD4;
    return;
L_08822FD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823D58;
      }
      goto L_08822FE4;
    }
L_08822FE4:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_088237F8;
      }
      goto L_08822FF0;
    }
L_08822FF0:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08823064;
      }
      goto L_0882300C;
    }
L_0882300C:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(250)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(254)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823604;
      }
      goto L_08823064;
    }
L_08823064:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08823124;
      }
      goto L_0882306C;
    }
L_0882306C:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088230B4;
      }
      goto L_08823074;
    }
L_08823074:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08823088;
      }
      goto L_08823080;
    }
L_08823080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823194;
      }
      goto L_08823088;
    }
L_08823088:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(31, 0x08823094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08823094u) goto L_08823094;
    return;
L_08823094:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.set_gpr(16, 16368u << 16u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088231AC;
      }
      goto L_088230B4;
    }
L_088230B4:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(16, 16368u << 16u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x088230CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x088230CCu) goto L_088230CC;
    return;
L_088230CC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088230E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x088230E4u) goto L_088230E4;
    return;
L_088230E4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(288)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x088230FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x088230FCu) goto L_088230FC;
    return;
L_088230FC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08823114u) goto L_08823114;
    return;
L_08823114:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088231AC;
      }
      goto L_08823124;
    }
L_08823124:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(16, 16368u << 16u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0882313Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882313Cu) goto L_0882313C;
    return;
L_0882313C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08823154u) goto L_08823154;
    return;
L_08823154:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(288)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x0882316Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882316Cu) goto L_0882316C;
    return;
L_0882316C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08823184u) goto L_08823184;
    return;
L_08823184:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088231AC;
      }
      goto L_08823194;
    }
L_08823194:
    ctx.set_gpr(16, 16368u << 16u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(21, ctx.gpr[16] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_088231AC;
L_088231AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088231C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088231C4u) goto L_088231C4;
    return;
L_088231C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088231D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 219u, 0x0880D210u>(ctx, &aot_mem) && ctx.pc == 0x088231D4u) goto L_088231D4;
    return;
L_088231D4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32536)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32528)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088231ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x088231ECu) goto L_088231EC;
    return;
L_088231EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823214;
      }
      goto L_088231F4;
    }
L_088231F4:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(250)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(254)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882340C;
      }
      goto L_08823214;
    }
L_08823214:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(250)));
    ctx.set_gpr(31, 0x08823220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08823220u) goto L_08823220;
    return;
L_08823220:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08823234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08823234u) goto L_08823234;
    return;
L_08823234:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882324Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882324Cu) goto L_0882324C;
    return;
L_0882324C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08823264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08823264u) goto L_08823264;
    return;
L_08823264:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08823278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08823278u) goto L_08823278;
    return;
L_08823278:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08823290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08823290u) goto L_08823290;
    return;
L_08823290:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088232A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088232A8u) goto L_088232A8;
    return;
L_088232A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088232B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x088232B8u) goto L_088232B8;
    return;
L_088232B8:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(31, 0x088232C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x088232C8u) goto L_088232C8;
    return;
L_088232C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x088232DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x088232DCu) goto L_088232DC;
    return;
L_088232DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088232F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x088232F4u) goto L_088232F4;
    return;
L_088232F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0882330Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x0882330Cu) goto L_0882330C;
    return;
L_0882330C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08823320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08823320u) goto L_08823320;
    return;
L_08823320:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08823338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08823338u) goto L_08823338;
    return;
L_08823338:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08823350u) goto L_08823350;
    return;
L_08823350:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08823360u) goto L_08823360;
    return;
L_08823360:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(254)));
    ctx.set_gpr(31, 0x08823370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08823370u) goto L_08823370;
    return;
L_08823370:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08823384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08823384u) goto L_08823384;
    return;
L_08823384:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882339Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882339Cu) goto L_0882339C;
    return;
L_0882339C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088233B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x088233B4u) goto L_088233B4;
    return;
L_088233B4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x088233C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x088233C8u) goto L_088233C8;
    return;
L_088233C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088233E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088233E0u) goto L_088233E0;
    return;
L_088233E0:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088233F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088233F8u) goto L_088233F8;
    return;
L_088233F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08823408u) goto L_08823408;
    return;
L_08823408:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0882340C;
L_0882340C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(250)));
    ctx.set_gpr(31, 0x08823418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08823418u) goto L_08823418;
    return;
L_08823418:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x0882342Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882342Cu) goto L_0882342C;
    return;
L_0882342C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08823444u) goto L_08823444;
    return;
L_08823444:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0882345Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x0882345Cu) goto L_0882345C;
    return;
L_0882345C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08823470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08823470u) goto L_08823470;
    return;
L_08823470:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08823488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08823488u) goto L_08823488;
    return;
L_08823488:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088234A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088234A0u) goto L_088234A0;
    return;
L_088234A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088234B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x088234B0u) goto L_088234B0;
    return;
L_088234B0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(31, 0x088234C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x088234C0u) goto L_088234C0;
    return;
L_088234C0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x088234D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x088234D4u) goto L_088234D4;
    return;
L_088234D4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088234ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x088234ECu) goto L_088234EC;
    return;
L_088234EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08823504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08823504u) goto L_08823504;
    return;
L_08823504:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08823518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08823518u) goto L_08823518;
    return;
L_08823518:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08823530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08823530u) goto L_08823530;
    return;
L_08823530:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08823548u) goto L_08823548;
    return;
L_08823548:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08823558u) goto L_08823558;
    return;
L_08823558:
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(254)));
    ctx.set_gpr(31, 0x08823568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08823568u) goto L_08823568;
    return;
L_08823568:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x0882357Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0882357Cu) goto L_0882357C;
    return;
L_0882357C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08823594u) goto L_08823594;
    return;
L_08823594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088235ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x088235ACu) goto L_088235AC;
    return;
L_088235AC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x088235C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x088235C0u) goto L_088235C0;
    return;
L_088235C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088235D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088235D8u) goto L_088235D8;
    return;
L_088235D8:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088235F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088235F0u) goto L_088235F0;
    return;
L_088235F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08823600u) goto L_08823600;
    return;
L_08823600:
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    goto L_08823604;
L_08823604:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088237E0;
      }
      goto L_08823610;
    }
L_08823610:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(218)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823794;
      }
      goto L_08823620;
    }
L_08823620:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08823794;
      }
      goto L_08823638;
    }
L_08823638:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882366C;
      }
      goto L_08823640;
    }
L_08823640:
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(8, ctx.gpr[30] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(77)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78)));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088237DC;
      }
      goto L_0882366C;
    }
L_0882366C:
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[30] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[4] - ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, ctx.gpr[16] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(8, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(8, (ctx.gpr[7] >> 8u) & 0x000000FFu);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[4] - ctx.gpr[9]);
    ctx.set_gpr(8, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, ctx.gpr[17] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(8, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(8, (ctx.gpr[7] >> 8u) & 0x000000FFu);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[9]);
    ctx.set_gpr(7, ctx.gpr[4] & 65535u);
    ctx.set_gpr(4, ctx.gpr[5] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(7, ctx.gpr[4] & 65535u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[4]);
    ctx.set_gpr(7, (ctx.gpr[4] >> 8u) & 0x000000FFu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088237DC;
      }
      goto L_08823794;
    }
L_08823794:
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[30] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088237DC;
L_088237DC:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_088237E0;
L_088237E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08823610;
      }
      goto L_088237F0;
    }
L_088237F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823F50;
      }
      goto L_088237F8;
    }
L_088237F8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(231)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08823810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08823810u) goto L_08823810;
    return;
L_08823810:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(17, 16368u << 16u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088238DC;
      }
      goto L_08823838;
    }
L_08823838:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08823874;
      }
      goto L_08823844;
    }
L_08823844:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08823858;
      }
      goto L_08823850;
    }
L_08823850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882393C;
      }
      goto L_08823858;
    }
L_08823858:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(31, 0x08823864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08823864u) goto L_08823864;
    return;
L_08823864:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882393C;
      }
      goto L_08823874;
    }
L_08823874:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(284)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08823884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08823884u) goto L_08823884;
    return;
L_08823884:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882389Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882389Cu) goto L_0882389C;
    return;
L_0882389C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(288)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x088238B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x088238B4u) goto L_088238B4;
    return;
L_088238B4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088238CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x088238CCu) goto L_088238CC;
    return;
L_088238CC:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882393C;
      }
      goto L_088238DC;
    }
L_088238DC:
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(244)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x088238ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x088238ECu) goto L_088238EC;
    return;
L_088238EC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08823904u) goto L_08823904;
    return;
L_08823904:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(288)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x0882391Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0882391Cu) goto L_0882391C;
    return;
L_0882391C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08823934u) goto L_08823934;
    return;
L_08823934:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    goto L_0882393C;
L_0882393C:
    ctx.set_gpr(2, ctx.gpr[23] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823C50;
      }
      goto L_08823948;
    }
L_08823948:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(250)));
    ctx.set_gpr(31, 0x08823954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08823954u) goto L_08823954;
    return;
L_08823954:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0882396Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x0882396Cu) goto L_0882396C;
    return;
L_0882396C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08823984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08823984u) goto L_08823984;
    return;
L_08823984:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0882399Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0882399Cu) goto L_0882399C;
    return;
L_0882399C:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088239B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088239B4u) goto L_088239B4;
    return;
L_088239B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088239C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x088239C4u) goto L_088239C4;
    return;
L_088239C4:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(260), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(31, 0x088239D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x088239D4u) goto L_088239D4;
    return;
L_088239D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088239ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x088239ECu) goto L_088239EC;
    return;
L_088239EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08823A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08823A04u) goto L_08823A04;
    return;
L_08823A04:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08823A1Cu) goto L_08823A1C;
    return;
L_08823A1C:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08823A34u) goto L_08823A34;
    return;
L_08823A34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08823A44u) goto L_08823A44;
    return;
L_08823A44:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(262), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(254)));
    ctx.set_gpr(31, 0x08823A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08823A54u) goto L_08823A54;
    return;
L_08823A54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08823A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08823A6Cu) goto L_08823A6C;
    return;
L_08823A6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08823A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08823A84u) goto L_08823A84;
    return;
L_08823A84:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08823A9Cu) goto L_08823A9C;
    return;
L_08823A9C:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08823AB4u) goto L_08823AB4;
    return;
L_08823AB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08823AC4u) goto L_08823AC4;
    return;
L_08823AC4:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(264), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(250)));
    ctx.set_gpr(31, 0x08823AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08823AD4u) goto L_08823AD4;
    return;
L_08823AD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08823AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08823AECu) goto L_08823AEC;
    return;
L_08823AEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08823B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08823B04u) goto L_08823B04;
    return;
L_08823B04:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08823B1Cu) goto L_08823B1C;
    return;
L_08823B1C:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08823B34u) goto L_08823B34;
    return;
L_08823B34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08823B44u) goto L_08823B44;
    return;
L_08823B44:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(31, 0x08823B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08823B54u) goto L_08823B54;
    return;
L_08823B54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08823B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08823B6Cu) goto L_08823B6C;
    return;
L_08823B6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08823B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08823B84u) goto L_08823B84;
    return;
L_08823B84:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08823B9Cu) goto L_08823B9C;
    return;
L_08823B9C:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08823BB4u) goto L_08823BB4;
    return;
L_08823BB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08823BC4u) goto L_08823BC4;
    return;
L_08823BC4:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(252), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(254)));
    ctx.set_gpr(31, 0x08823BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08823BD4u) goto L_08823BD4;
    return;
L_08823BD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08823BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08823BECu) goto L_08823BEC;
    return;
L_08823BEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08823C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08823C04u) goto L_08823C04;
    return;
L_08823C04:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08823C1Cu) goto L_08823C1C;
    return;
L_08823C1C:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08823C34u) goto L_08823C34;
    return;
L_08823C34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08823C44u) goto L_08823C44;
    return;
L_08823C44:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(254), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823F50;
      }
      goto L_08823C50;
    }
L_08823C50:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(31, 0x08823C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08823C5Cu) goto L_08823C5C;
    return;
L_08823C5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08823C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08823C74u) goto L_08823C74;
    return;
L_08823C74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08823C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08823C8Cu) goto L_08823C8C;
    return;
L_08823C8C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08823CA4u) goto L_08823CA4;
    return;
L_08823CA4:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08823CBCu) goto L_08823CBC;
    return;
L_08823CBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08823CCCu) goto L_08823CCC;
    return;
L_08823CCC:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(266), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(31, 0x08823CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 97u, 0x0883CBC4u>(ctx, &aot_mem) && ctx.pc == 0x08823CDCu) goto L_08823CDC;
    return;
L_08823CDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08823CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08823CF4u) goto L_08823CF4;
    return;
L_08823CF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08823D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08823D0Cu) goto L_08823D0C;
    return;
L_08823D0C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08823D24u) goto L_08823D24;
    return;
L_08823D24:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08823D3Cu) goto L_08823D3C;
    return;
L_08823D3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08823D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 144u, 0x0881CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08823D4Cu) goto L_08823D4C;
    return;
L_08823D4C:
    rt.memory().aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(256), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823F50;
      }
      goto L_08823D58;
    }
L_08823D58:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08823F50;
      }
      goto L_08823D64;
    }
L_08823D64:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823DC4;
      }
      goto L_08823D78;
    }
L_08823D78:
    ctx.set_gpr(3, ctx.gpr[8] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(292)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08823DC4;
L_08823DC4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08823D78;
      }
      goto L_08823DD0;
    }
L_08823DD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823F50;
      }
      goto L_08823DD8;
    }
L_08823DD8:
    ctx.set_gpr(3, ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08823F50;
      }
      goto L_08823DE4;
    }
L_08823DE4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08823F50;
      }
      goto L_08823DF0;
    }
L_08823DF0:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(218)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(250)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(252)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(254)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823F44;
      }
      goto L_08823E1C;
    }
L_08823E1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08823E5C;
      }
      goto L_08823E30;
    }
L_08823E30:
    ctx.set_gpr(3, ctx.gpr[7] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(73)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(74)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08823F40;
      }
      goto L_08823E5C;
    }
L_08823E5C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08823F40;
      }
      goto L_08823E68;
    }
L_08823E68:
    ctx.set_gpr(3, ctx.gpr[7] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[4] - ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[8] & 65535u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(9, ctx.gpr[8] & 65535u);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[4] - ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[8] & 65535u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(73)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(9, ctx.gpr[8] & 65535u);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 8u));
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(328)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[9]);
    ctx.set_gpr(8, ctx.gpr[4] & 65535u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(74)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(8, ctx.gpr[4] & 65535u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08823F40;
L_08823F40:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08823F44;
L_08823F44:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08823E1C;
      }
      goto L_08823F50;
    }
L_08823F50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 3u, 0x08824050u>(ctx, &aot_mem); return;
      }
      goto L_08823F60;
    }
L_08823F60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 3u, 0x08824050u>(ctx, &aot_mem); return;
      }
      goto L_08823F6C;
    }
L_08823F6C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(316)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, ctx.gpr[7] - ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(317)));
    ctx.set_gpr(5, ctx.gpr[7] - ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(318)));
    ctx.set_gpr(4, ctx.gpr[7] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08823FA0;
      }
      goto L_08823F94;
    }
L_08823F94:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08823FA4;
      }
      goto L_08823FA0;
    }
L_08823FA0:
    ctx.set_gpr(6, 0u + 0u);
    goto L_08823FA4;
L_08823FA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08823FB8;
      }
      goto L_08823FAC;
    }
L_08823FAC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08823FBC;
      }
      goto L_08823FB8;
    }
L_08823FB8:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08823FBC;
L_08823FBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08823FD0;
      }
      goto L_08823FC4;
    }
L_08823FC4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08823FD4;
      }
      goto L_08823FD0;
    }
L_08823FD0:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08823FD4;
L_08823FD4:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 2u, 0x0882403Cu>(ctx, &aot_mem); return;
      }
      goto L_08823FE0;
    }
L_08823FE0:
    ctx.set_gpr(9, ctx.gpr[7] & 65535u);
    ctx.set_gpr(8, ctx.gpr[9] << 1u);
    ctx.set_gpr(11, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(10, ctx.gpr[8] + ctx.gpr[11]);
    ctx.set_gpr(9, ctx.gpr[6] & 255u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] >> (ctx.gpr[9] & 31u));
    ctx.pc = 0x08824000u; return;
}

void recomp_unit_0007(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0007_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_7(Runtime &runtime) {
    runtime.register_generated_unit(7u, 0x08820000u, 16384u, &recomp_unit_0007, &recomp_unit_0007_entry);
    runtime.register_function(0x08820000u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820004u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820020u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820030u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820038u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820040u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820044u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882004Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820050u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882005Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882006Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820074u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882007Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088200B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088200C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088200D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088200F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820104u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820120u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882015Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820168u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882018Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882019Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088201A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088201A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088201C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088201DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820200u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882020Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820218u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820220u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882022Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820238u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820244u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820254u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882025Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820270u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820280u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088202ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820300u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882031Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882032Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882033Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820360u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820378u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882039Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088203FCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820414u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820420u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820430u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882043Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820448u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882044Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820460u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820488u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882048Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820494u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088204A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088204B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088204B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088204D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088204ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088204FCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820534u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882053Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820544u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820558u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820564u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820570u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820588u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820590u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088205A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088205B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088205C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088205CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088205DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088205ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088205F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820608u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820618u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882062Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820640u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820650u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820664u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820674u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820684u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820698u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088206A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088206C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088206D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088206E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088206F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088206F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820704u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820718u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820724u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820730u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820748u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820760u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820780u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882078Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820798u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088207B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088207B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088207C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088207D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088207DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088207ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820800u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882080Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820818u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820838u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882084Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820858u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820864u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882087Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820880u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820890u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088208A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088208A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088208BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088208CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088208E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088208F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820904u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882091Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820930u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882093Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820948u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820964u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820974u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820984u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820994u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820998u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088209ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088209B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088209D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088209E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820A10u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820A38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820A44u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820A54u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820A5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820A68u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820A80u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820A8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820AACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820AB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820AC0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820ACCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820AE8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820AFCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B10u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B18u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B20u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B64u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B6Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820B94u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820BA8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820BB0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820BB8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820BC0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820BD0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820BF4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C0Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C18u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C30u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820C94u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820CA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820CACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820CB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820CC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820CF8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D3Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D4Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D60u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D80u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820D90u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820DA4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820DBCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820DD4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820DDCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820DF0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820E10u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820E28u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820E40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820E54u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820E5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820E64u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820E74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820E78u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820E80u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820E88u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820E90u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820E9Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820EA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820EA8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820EB8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820EC0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820EC8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820ED0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820ED8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820EE0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F08u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F10u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F2Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F34u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F44u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F64u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F68u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820F78u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820FACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820FBCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820FC8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820FCCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820FDCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820FE4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820FECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08820FFCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821004u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821020u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821024u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882102Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821034u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882103Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882104Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821054u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821068u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882106Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821074u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821080u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821088u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821098u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088210A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088210B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088210BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088210C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088210D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088210DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088210E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088210F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088210F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088210FCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821108u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821110u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821130u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882113Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821148u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821154u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821160u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821168u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821178u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821184u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821198u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088211A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088211B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088211BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088211D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088211D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088211ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821204u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882120Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882121Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821224u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882122Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882123Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882124Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821254u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821260u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882126Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821274u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882127Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821284u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821294u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088212F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821300u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821308u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821310u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882131Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821324u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882132Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821334u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821344u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821354u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882135Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821364u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821370u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821380u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088213A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088213B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088213CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088213E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821410u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821420u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821434u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821450u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821464u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088214B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088214C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088214D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088214E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821500u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821504u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821524u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821534u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821554u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821568u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821570u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821584u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821590u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088215F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821604u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821618u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821650u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882165Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821668u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821674u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882167Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821684u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821698u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088216A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088216B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088216BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088216D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088216F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088216F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821728u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821758u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821774u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821790u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821798u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088217A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088217B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088217C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088217D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088217DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088217F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821804u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821810u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821820u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821834u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882184Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821854u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821868u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821870u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821888u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821890u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088218F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821904u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882191Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821924u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821938u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821950u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821958u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821968u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882197Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821984u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821994u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088219F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A10u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A18u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A28u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A3Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A44u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A54u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A60u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821A8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821AA4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821AACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821AC0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821AC8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821AE0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821AE8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821AFCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B58u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B60u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B94u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821B9Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821BB0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821BB8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821BD0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821BD8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821BECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821BF4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C0Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C14u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C28u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C30u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C48u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C64u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C6Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C84u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821C8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821CA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821CA8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821CC0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821CC8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821CDCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821CE4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821CFCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D18u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D20u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D38u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D54u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D90u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821D98u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821DB0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821DB8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821DCCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821DD4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821DECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821DF4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E08u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E10u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E2Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E4Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821E8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821EA4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821ED4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821EDCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821EECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F00u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F10u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F34u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F48u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F54u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F64u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F78u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F90u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821F98u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FB8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FDCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FE0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08821FF4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822004u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822014u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822020u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882202Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822038u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822044u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822058u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822078u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822080u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882208Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822094u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882209Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088220A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088220B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822108u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822128u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822144u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822150u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882215Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822164u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822178u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822180u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822194u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088221A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088221ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088221C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088221DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822204u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822218u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822224u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822234u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822248u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822260u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822268u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882227Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822284u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882229Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222D0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088222F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822300u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822310u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822324u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882232Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822338u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882234Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822364u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882236Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822380u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822398u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088223FCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822404u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822418u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822420u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822438u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822440u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822454u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882245Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822474u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882247Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822490u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822498u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088224B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088224B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088224CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088224D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088224ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088224F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822508u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822510u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822528u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822530u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822544u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882254Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822564u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882256Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822580u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822588u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088225A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088225A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088225BCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088225C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088225DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088225E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088225F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822600u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822618u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822620u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822634u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882263Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822654u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882265Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822670u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822678u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822690u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822698u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088226F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822708u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822710u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822724u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882272Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822744u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882274Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822760u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822768u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822780u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822788u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882279Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088227A4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088227B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088227C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088227E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822828u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882282Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822834u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822838u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822840u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822844u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882285Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822864u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882287Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882288Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822890u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822898u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088228B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088228C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088228C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088228CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088228DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088228E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882290Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822938u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822940u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822948u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822958u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822968u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822978u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822988u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822998u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088229A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088229B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088229C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088229D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088229E8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088229F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A14u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A6Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822A8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822AA8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822AACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822AB8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822AC8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822AD4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822AF4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B10u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B14u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B20u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B30u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B3Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B78u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B88u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822B98u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822BA8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822BB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822BD8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822C0Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822C20u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822C28u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822C30u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822C40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822C50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822C7Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822C84u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822C98u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822CB0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822CCCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822CD8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822CE4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822CF0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D08u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D34u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D48u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D70u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822D8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822DD4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822DE0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822DECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822DFCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E08u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E14u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E20u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E2Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E34u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822E8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822EB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822ECCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822ED8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F4Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F78u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F84u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822F90u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822FB0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822FC8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822FD4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822FE4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08822FF0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882300Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823064u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882306Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823074u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823080u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823088u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823094u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088230B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088230CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088230E4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088230FCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823114u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823124u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882313Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823154u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882316Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823184u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823194u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088231ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088231C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088231D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088231ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088231F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823214u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823220u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823234u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882324Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823264u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823278u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823290u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088232A8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088232B8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088232C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088232DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088232F4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882330Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823320u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823338u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823350u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823360u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823370u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823384u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882339Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088233B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088233C8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088233E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088233F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823408u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882340Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823418u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882342Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823444u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882345Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823470u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823488u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088234A0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088234B0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088234C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088234D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088234ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823504u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823518u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823530u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823548u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823558u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823568u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882357Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823594u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088235ACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088235C0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088235D8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088235F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823600u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823604u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823610u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823620u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823638u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823640u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882366Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823794u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088237DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088237E0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088237F0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088237F8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823810u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823838u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823844u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823850u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823858u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823864u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823874u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823884u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882389Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088238B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088238CCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088238DCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088238ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823904u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882391Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823934u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882393Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823948u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823954u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882396Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823984u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x0882399Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239B4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239C4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239D4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x088239ECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A34u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A44u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A54u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A6Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A84u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823A9Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823AB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823AC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823AD4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823AECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B34u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B44u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B54u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B6Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B84u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823B9Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823BB4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823BC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823BD4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823BECu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C04u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C34u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C44u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C74u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823C8Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823CA4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823CBCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823CCCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823CDCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823CF4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823D0Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823D24u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823D3Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823D4Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823D58u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823D64u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823D78u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823DC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823DD0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823DD8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823DE4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823DF0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823E1Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823E30u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823E5Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823E68u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823F40u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823F44u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823F50u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823F60u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823F6Cu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823F94u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FA0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FA4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FACu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FB8u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FBCu, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FC4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FD0u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FD4u, &recomp_unit_0007, "recomp_unit_0007");
    runtime.register_function(0x08823FE0u, &recomp_unit_0007, "recomp_unit_0007");
}
} // namespace psprecomp
