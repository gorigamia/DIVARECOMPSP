#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0073[4095] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0,
    0, 7, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0,
    0, 23, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0,
    0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 49, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 61, 0,
    0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 72, 73, 0, 74,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 88, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94,
    0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 0,
    102, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 112, 113, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0,
    0, 128, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 148, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0,
    0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0,
    171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 0,
    0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 188,
    0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0,
    0, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 0, 201, 202, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 209, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0,
    0, 214, 215, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0,
    0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0,
    239, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0,
    0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 257,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 261,
    0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 0, 0, 270, 0, 0,
    0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0,
    0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 296, 0,
    0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 299, 300, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 309, 310, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0,
    0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321,
    0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 326, 327, 0, 328, 0, 0, 0, 0,
    329, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    337, 338, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 353,
    0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0,
    0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 371, 0, 372, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 377, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    380, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0,
    390, 0, 0, 0, 0, 391, 0, 0, 392, 0, 393, 394, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0,
    398, 0, 399, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0,
    0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415,
    0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 422, 423, 0, 0, 0, 0, 0,
    424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 427, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 432,
    0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0,
    446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0,
    452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 460, 461, 0, 462, 0, 463, 0, 0, 464,
    0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0,
    471, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0,
    477, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 482, 0, 483, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0,
    0, 0, 486, 0, 487, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 493, 494, 0, 0, 495, 0, 496, 0,
    0, 0, 0, 0, 497, 0, 498, 0, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513,
    0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 522, 0,
    0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 526, 527, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 532, 0, 533, 0,
    534, 0, 535, 0, 536, 0, 537, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 542, 0, 543, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 548, 0, 549, 0, 0, 550, 0,
    551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 0, 558,
    0, 0, 559, 560, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 0,
    571, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 577,
    0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 0, 585,
    0, 586, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 592, 593, 0, 0, 594, 0, 595, 0, 0, 0, 0,
    0, 596, 0, 597, 0, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 606, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0,
    0, 0, 0, 614, 0, 615, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0,
    0, 622, 0, 0, 623, 0, 0, 624, 0, 0, 625, 626, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 631, 0, 632, 0, 633,
    0, 634, 0, 635, 0, 636, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 641, 0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 647, 0, 648, 0, 0, 649, 0, 650,
    0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 655, 0, 0, 656, 0, 0, 657, 0, 0, 658,
    659, 0, 0, 660, 0, 661, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 664, 0, 665, 0, 666, 0, 667, 0, 668, 0, 669, 0, 0, 670, 0, 671,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 676, 0, 677, 0,
    0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 680, 0, 681, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684,
    0, 685, 0, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 0, 691, 692, 0, 0, 693, 0, 694, 0,
    0, 0, 0, 0, 695, 0, 696, 0, 0, 697, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 0, 711,
    0, 712, 0, 0, 0, 0, 713, 0, 714, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 719, 0,
    720, 0, 0, 0, 721, 0, 0, 722, 0, 0, 723, 0, 0, 724, 725, 0, 0, 726, 0, 727, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 730, 0,
    731, 0, 732, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    737, 0, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 740, 0, 0, 0, 0, 741, 0, 742, 0, 0, 743, 0, 0, 0, 0, 744, 0, 0,
    745, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 751, 0, 0,
    752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0,
    0, 759, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 765, 0,
    0, 766, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 769, 0, 770, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 779, 0,
    0, 0, 0, 780, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 784, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 787,
    0, 0, 0, 788, 789, 0, 0, 0, 790, 791, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 793, 0, 794, 0, 0, 795, 0, 796, 0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 802, 0,
    0, 0, 0, 803, 0, 804, 0, 0, 0, 805, 0, 806, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 808, 0, 809, 810, 0, 811, 0,
    0, 0, 812, 0, 0, 0, 813, 814, 0, 0, 0, 815, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 0, 824, 825, 0,
    0, 826, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 829, 0, 0, 0, 830, 0, 0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 0,
    833, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 836, 0, 0, 0, 0, 837, 0, 0, 838, 839, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0,
    841, 0, 0, 0, 842, 843, 0, 844, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0,
    848, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 850, 0, 0, 851, 0, 0, 0, 852, 0, 0, 853, 0, 854, 0, 0, 855, 0, 0, 0, 856, 0,
    0, 0, 857, 0, 0, 858, 0, 0, 859, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 861, 0, 0, 862, 0, 0, 0, 863, 0, 0, 864, 0,
    0, 0, 0, 0, 865, 0, 866, 0, 0, 867, 0, 0, 868, 0, 869, 870, 0, 0, 0, 0, 0, 0, 0, 871, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 876, 0, 877, 0, 0, 878, 879,
    0, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 884, 0, 0, 885, 0, 0, 886, 0, 0, 0, 0, 0, 0, 887, 0, 888, 0, 0, 889, 0, 0, 0, 0, 0, 0, 890, 0, 0,
    0, 0, 891, 0, 892, 0, 0, 893, 0, 0, 0, 894, 895, 0, 0, 0, 896, 0, 0, 897, 0, 0, 898, 0, 0, 899, 0, 900, 0, 901, 902, 0,
    903, 0, 904, 0, 0, 905, 0, 0, 906, 0, 0, 0, 0, 0, 907, 0, 908, 0, 0, 0, 0, 0, 0, 909, 0, 0, 910, 0, 911, 0, 0, 912,
    0, 0, 0, 0, 913, 0, 914, 0, 0, 0, 0, 0, 0, 915, 0, 916, 0, 0, 0, 0, 0, 0, 917, 0, 0, 918, 0, 919, 0, 0, 920, 0,
    0, 0, 0, 921, 0, 0, 922, 0, 923, 924, 0, 0, 0, 0, 0, 0, 925, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 926, 0, 0, 0, 927, 0, 0, 928, 0, 0, 0, 0, 0, 0, 0, 929,
    0, 0, 0, 0, 0, 0, 930, 0, 0, 0, 0, 0, 931, 0, 932, 933, 0, 0, 0, 0, 934, 0, 935, 0, 0, 0, 0, 0, 0, 0, 936, 0,
    937, 938, 0, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940, 0, 0, 941, 0, 0, 0, 942, 0, 943, 0, 0, 0,
    0, 944, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 945, 0, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 0, 0, 0, 947, 0, 948,
    949, 950, 0, 0, 0, 0, 951, 0, 952, 0, 0, 0, 0, 0, 0, 0, 0, 0, 953, 0, 0, 0, 0, 0, 0, 0, 954, 0, 0, 0, 0, 0,
    0, 0, 955, 0, 956, 957, 958, 0, 0, 0, 0, 959, 0, 0, 0, 960, 0, 0, 961, 0, 0, 0, 0, 0, 0, 0, 962, 0, 0, 0, 963,
};
void recomp_unit_0073_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08928004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0073[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08928004;
    case 2u: goto L_08928018;
    case 3u: goto L_08928034;
    case 4u: goto L_08928038;
    case 5u: goto L_0892806C;
    case 6u: goto L_08928078;
    case 7u: goto L_08928088;
    case 8u: goto L_0892808C;
    case 9u: goto L_08928094;
    case 10u: goto L_089280D0;
    case 11u: goto L_089280D8;
    case 12u: goto L_089280E0;
    case 13u: goto L_089280F4;
    case 14u: goto L_08928114;
    case 15u: goto L_08928120;
    case 16u: goto L_08928128;
    case 17u: goto L_08928134;
    case 18u: goto L_08928140;
    case 19u: goto L_08928150;
    case 20u: goto L_08928154;
    case 21u: goto L_08928164;
    case 22u: goto L_0892817C;
    case 23u: goto L_08928188;
    case 24u: goto L_0892818C;
    case 25u: goto L_089281B0;
    case 26u: goto L_089281D8;
    case 27u: goto L_089281EC;
    case 28u: goto L_089281FC;
    case 29u: goto L_08928208;
    case 30u: goto L_08928218;
    case 31u: goto L_08928224;
    case 32u: goto L_08928234;
    case 33u: goto L_0892824C;
    case 34u: goto L_08928264;
    case 35u: goto L_08928270;
    case 36u: goto L_089282A4;
    case 37u: goto L_089282CC;
    case 38u: goto L_089282D4;
    case 39u: goto L_089282D8;
    case 40u: goto L_089282E4;
    case 41u: goto L_08928304;
    case 42u: goto L_0892832C;
    case 43u: goto L_08928350;
    case 44u: goto L_0892836C;
    case 45u: goto L_08928380;
    case 46u: goto L_089283AC;
    case 47u: goto L_089283B8;
    case 48u: goto L_089283C4;
    case 49u: goto L_089283CC;
    case 50u: goto L_089283D0;
    case 51u: goto L_089283E4;
    case 52u: goto L_08928414;
    case 53u: goto L_08928420;
    case 54u: goto L_0892842C;
    case 55u: goto L_0892843C;
    case 56u: goto L_08928448;
    case 57u: goto L_08928450;
    case 58u: goto L_0892845C;
    case 59u: goto L_08928464;
    case 60u: goto L_08928478;
    case 61u: goto L_0892847C;
    case 62u: goto L_08928494;
    case 63u: goto L_089284A0;
    case 64u: goto L_089284C4;
    case 65u: goto L_089284D4;
    case 66u: goto L_089284E0;
    case 67u: goto L_08928508;
    case 68u: goto L_08928510;
    case 69u: goto L_0892852C;
    case 70u: goto L_08928560;
    case 71u: goto L_08928568;
    case 72u: goto L_08928574;
    case 73u: goto L_08928578;
    case 74u: goto L_08928580;
    case 75u: goto L_08928588;
    case 76u: goto L_089285A8;
    case 77u: goto L_089285B8;
    case 78u: goto L_089285C4;
    case 79u: goto L_089285D0;
    case 80u: goto L_089285E4;
    case 81u: goto L_089285F4;
    case 82u: goto L_08928618;
    case 83u: goto L_08928628;
    case 84u: goto L_08928654;
    case 85u: goto L_0892865C;
    case 86u: goto L_0892866C;
    case 87u: goto L_08928688;
    case 88u: goto L_08928694;
    case 89u: goto L_08928698;
    case 90u: goto L_089286A8;
    case 91u: goto L_089286C4;
    case 92u: goto L_089286D8;
    case 93u: goto L_089286EC;
    case 94u: goto L_08928700;
    case 95u: goto L_0892870C;
    case 96u: goto L_08928724;
    case 97u: goto L_0892873C;
    case 98u: goto L_08928750;
    case 99u: goto L_0892875C;
    case 100u: goto L_0892876C;
    case 101u: goto L_08928774;
    case 102u: goto L_08928784;
    case 103u: goto L_08928798;
    case 104u: goto L_089287A0;
    case 105u: goto L_089287B8;
    case 106u: goto L_089287C8;
    case 107u: goto L_089287D8;
    case 108u: goto L_089287E4;
    case 109u: goto L_089287EC;
    case 110u: goto L_089287F4;
    case 111u: goto L_0892880C;
    case 112u: goto L_08928820;
    case 113u: goto L_08928824;
    case 114u: goto L_08928830;
    case 115u: goto L_0892883C;
    case 116u: goto L_0892884C;
    case 117u: goto L_08928858;
    case 118u: goto L_08928860;
    case 119u: goto L_0892886C;
    case 120u: goto L_08928874;
    case 121u: goto L_08928888;
    case 122u: goto L_089288AC;
    case 123u: goto L_089288C0;
    case 124u: goto L_089288D8;
    case 125u: goto L_089288DC;
    case 126u: goto L_089288E4;
    case 127u: goto L_089288FC;
    case 128u: goto L_08928908;
    case 129u: goto L_08928910;
    case 130u: goto L_0892891C;
    case 131u: goto L_08928928;
    case 132u: goto L_08928944;
    case 133u: goto L_08928950;
    case 134u: goto L_08928964;
    case 135u: goto L_08928974;
    case 136u: goto L_08928980;
    case 137u: goto L_089289A0;
    case 138u: goto L_089289B8;
    case 139u: goto L_089289DC;
    case 140u: goto L_089289E8;
    case 141u: goto L_089289F8;
    case 142u: goto L_08928A04;
    case 143u: goto L_08928A20;
    case 144u: goto L_08928A2C;
    case 145u: goto L_08928A40;
    case 146u: goto L_08928A50;
    case 147u: goto L_08928A60;
    case 148u: goto L_08928A64;
    case 149u: goto L_08928A70;
    case 150u: goto L_08928A90;
    case 151u: goto L_08928AAC;
    case 152u: goto L_08928ABC;
    case 153u: goto L_08928AD4;
    case 154u: goto L_08928AEC;
    case 155u: goto L_08928AFC;
    case 156u: goto L_08928B14;
    case 157u: goto L_08928B24;
    case 158u: goto L_08928B38;
    case 159u: goto L_08928B58;
    case 160u: goto L_08928B68;
    case 161u: goto L_08928B70;
    case 162u: goto L_08928B88;
    case 163u: goto L_08928B90;
    case 164u: goto L_08928BA4;
    case 165u: goto L_08928BAC;
    case 166u: goto L_08928BC4;
    case 167u: goto L_08928BCC;
    case 168u: goto L_08928BDC;
    case 169u: goto L_08928BE4;
    case 170u: goto L_08928BFC;
    case 171u: goto L_08928C04;
    case 172u: goto L_08928C18;
    case 173u: goto L_08928C20;
    case 174u: goto L_08928C38;
    case 175u: goto L_08928C40;
    case 176u: goto L_08928C54;
    case 177u: goto L_08928C5C;
    case 178u: goto L_08928C70;
    case 179u: goto L_08928C78;
    case 180u: goto L_08928C90;
    case 181u: goto L_08928C98;
    case 182u: goto L_08928CAC;
    case 183u: goto L_08928CB4;
    case 184u: goto L_08928CC8;
    case 185u: goto L_08928CD0;
    case 186u: goto L_08928CE8;
    case 187u: goto L_08928CF0;
    case 188u: goto L_08928D00;
    case 189u: goto L_08928D08;
    case 190u: goto L_08928D1C;
    case 191u: goto L_08928D24;
    case 192u: goto L_08928D3C;
    case 193u: goto L_08928D44;
    case 194u: goto L_08928D58;
    case 195u: goto L_08928D60;
    case 196u: goto L_08928D74;
    case 197u: goto L_08928D7C;
    case 198u: goto L_08928D94;
    case 199u: goto L_08928D9C;
    case 200u: goto L_08928DA8;
    case 201u: goto L_08928DB4;
    case 202u: goto L_08928DB8;
    case 203u: goto L_08928DBC;
    case 204u: goto L_08928DD4;
    case 205u: goto L_08928DEC;
    case 206u: goto L_08928DFC;
    case 207u: goto L_08928E28;
    case 208u: goto L_08928E3C;
    case 209u: goto L_08928E4C;
    case 210u: goto L_08928E50;
    case 211u: goto L_08928E5C;
    case 212u: goto L_08928E6C;
    case 213u: goto L_08928E78;
    case 214u: goto L_08928E88;
    case 215u: goto L_08928E8C;
    case 216u: goto L_08928E90;
    case 217u: goto L_08928EB0;
    case 218u: goto L_08928EE0;
    case 219u: goto L_08928EEC;
    case 220u: goto L_08928EFC;
    case 221u: goto L_08928F20;
    case 222u: goto L_08928F38;
    case 223u: goto L_08928F58;
    case 224u: goto L_08928F64;
    case 225u: goto L_08928F88;
    case 226u: goto L_08928F9C;
    case 227u: goto L_08928FB4;
    case 228u: goto L_08928FC4;
    case 229u: goto L_08928FE4;
    case 230u: goto L_08929020;
    case 231u: goto L_08929030;
    case 232u: goto L_08929040;
    case 233u: goto L_08929068;
    case 234u: goto L_08929088;
    case 235u: goto L_08929098;
    case 236u: goto L_089290BC;
    case 237u: goto L_089290F0;
    case 238u: goto L_089290FC;
    case 239u: goto L_08929104;
    case 240u: goto L_08929110;
    case 241u: goto L_08929120;
    case 242u: goto L_08929130;
    case 243u: goto L_08929150;
    case 244u: goto L_08929174;
    case 245u: goto L_08929184;
    case 246u: goto L_0892919C;
    case 247u: goto L_089291A4;
    case 248u: goto L_089291B8;
    case 249u: goto L_089291D4;
    case 250u: goto L_089291E8;
    case 251u: goto L_08929208;
    case 252u: goto L_08929224;
    case 253u: goto L_08929230;
    case 254u: goto L_0892923C;
    case 255u: goto L_0892925C;
    case 256u: goto L_0892927C;
    case 257u: goto L_08929280;
    case 258u: goto L_08929294;
    case 259u: goto L_089292E4;
    case 260u: goto L_089292F0;
    case 261u: goto L_08929300;
    case 262u: goto L_0892930C;
    case 263u: goto L_08929318;
    case 264u: goto L_0892932C;
    case 265u: goto L_08929338;
    case 266u: goto L_08929340;
    case 267u: goto L_08929354;
    case 268u: goto L_08929364;
    case 269u: goto L_0892936C;
    case 270u: goto L_08929378;
    case 271u: goto L_08929390;
    case 272u: goto L_089293A8;
    case 273u: goto L_089293B0;
    case 274u: goto L_089293C0;
    case 275u: goto L_089293E8;
    case 276u: goto L_089293F4;
    case 277u: goto L_0892940C;
    case 278u: goto L_0892941C;
    case 279u: goto L_0892942C;
    case 280u: goto L_08929434;
    case 281u: goto L_0892944C;
    case 282u: goto L_08929458;
    case 283u: goto L_08929464;
    case 284u: goto L_08929470;
    case 285u: goto L_0892947C;
    case 286u: goto L_08929488;
    case 287u: goto L_08929494;
    case 288u: goto L_089294A0;
    case 289u: goto L_089294AC;
    case 290u: goto L_089294B8;
    case 291u: goto L_089294C4;
    case 292u: goto L_089294D0;
    case 293u: goto L_089294DC;
    case 294u: goto L_089294E8;
    case 295u: goto L_089294F4;
    case 296u: goto L_089294FC;
    case 297u: goto L_08929510;
    case 298u: goto L_08929518;
    case 299u: goto L_08929534;
    case 300u: goto L_08929538;
    case 301u: goto L_08929540;
    case 302u: goto L_0892955C;
    case 303u: goto L_08929568;
    case 304u: goto L_08929588;
    case 305u: goto L_089295A0;
    case 306u: goto L_089295C8;
    case 307u: goto L_089295D4;
    case 308u: goto L_089295E8;
    case 309u: goto L_089295F4;
    case 310u: goto L_089295F8;
    case 311u: goto L_08929624;
    case 312u: goto L_08929660;
    case 313u: goto L_0892966C;
    case 314u: goto L_0892967C;
    case 315u: goto L_08929688;
    case 316u: goto L_08929694;
    case 317u: goto L_089296AC;
    case 318u: goto L_089296C8;
    case 319u: goto L_089296D4;
    case 320u: goto L_089296F0;
    case 321u: goto L_08929700;
    case 322u: goto L_08929718;
    case 323u: goto L_0892972C;
    case 324u: goto L_08929750;
    case 325u: goto L_08929758;
    case 326u: goto L_08929764;
    case 327u: goto L_08929768;
    case 328u: goto L_08929770;
    case 329u: goto L_08929784;
    case 330u: goto L_08929790;
    case 331u: goto L_089297A4;
    case 332u: goto L_089297B4;
    case 333u: goto L_089297C0;
    case 334u: goto L_089297CC;
    case 335u: goto L_089297D8;
    case 336u: goto L_089297E4;
    case 337u: goto L_08929804;
    case 338u: goto L_08929808;
    case 339u: goto L_0892980C;
    case 340u: goto L_08929814;
    case 341u: goto L_08929838;
    case 342u: goto L_08929844;
    case 343u: goto L_0892985C;
    case 344u: goto L_08929864;
    case 345u: goto L_08929884;
    case 346u: goto L_0892989C;
    case 347u: goto L_089298A4;
    case 348u: goto L_089298B0;
    case 349u: goto L_089298BC;
    case 350u: goto L_089298C8;
    case 351u: goto L_089298DC;
    case 352u: goto L_089298E8;
    case 353u: goto L_08929900;
    case 354u: goto L_0892990C;
    case 355u: goto L_08929940;
    case 356u: goto L_0892994C;
    case 357u: goto L_08929958;
    case 358u: goto L_08929960;
    case 359u: goto L_08929984;
    case 360u: goto L_08929990;
    case 361u: goto L_0892999C;
    case 362u: goto L_089299A8;
    case 363u: goto L_089299B4;
    case 364u: goto L_089299D0;
    case 365u: goto L_089299DC;
    case 366u: goto L_089299F8;
    case 367u: goto L_08929A08;
    case 368u: goto L_08929A24;
    case 369u: goto L_08929A54;
    case 370u: goto L_08929A64;
    case 371u: goto L_08929A88;
    case 372u: goto L_08929A90;
    case 373u: goto L_08929A9C;
    case 374u: goto L_08929AB0;
    case 375u: goto L_08929ABC;
    case 376u: goto L_08929AC8;
    case 377u: goto L_08929AD0;
    case 378u: goto L_08929AD8;
    case 379u: goto L_08929AEC;
    case 380u: goto L_08929B04;
    case 381u: goto L_08929B10;
    case 382u: goto L_08929B1C;
    case 383u: goto L_08929B28;
    case 384u: goto L_08929B34;
    case 385u: goto L_08929B3C;
    case 386u: goto L_08929B44;
    case 387u: goto L_08929B50;
    case 388u: goto L_08929B64;
    case 389u: goto L_08929B78;
    case 390u: goto L_08929B84;
    case 391u: goto L_08929B98;
    case 392u: goto L_08929BA4;
    case 393u: goto L_08929BAC;
    case 394u: goto L_08929BB0;
    case 395u: goto L_08929BB4;
    case 396u: goto L_08929BD4;
    case 397u: goto L_08929BE8;
    case 398u: goto L_08929C04;
    case 399u: goto L_08929C0C;
    case 400u: goto L_08929C10;
    case 401u: goto L_08929C20;
    case 402u: goto L_08929C40;
    case 403u: goto L_08929C50;
    case 404u: goto L_08929C6C;
    case 405u: goto L_08929C7C;
    case 406u: goto L_08929C94;
    case 407u: goto L_08929CAC;
    case 408u: goto L_08929CC0;
    case 409u: goto L_08929CE4;
    case 410u: goto L_08929CF4;
    case 411u: goto L_08929D14;
    case 412u: goto L_08929D30;
    case 413u: goto L_08929D48;
    case 414u: goto L_08929D70;
    case 415u: goto L_08929D80;
    case 416u: goto L_08929DA0;
    case 417u: goto L_08929DAC;
    case 418u: goto L_08929DB4;
    case 419u: goto L_08929DBC;
    case 420u: goto L_08929DC4;
    case 421u: goto L_08929DE0;
    case 422u: goto L_08929DE8;
    case 423u: goto L_08929DEC;
    case 424u: goto L_08929E04;
    case 425u: goto L_08929E2C;
    case 426u: goto L_08929E3C;
    case 427u: goto L_08929E44;
    case 428u: goto L_08929E4C;
    case 429u: goto L_08929E54;
    case 430u: goto L_08929E74;
    case 431u: goto L_08929E7C;
    case 432u: goto L_08929E80;
    case 433u: goto L_08929E9C;
    case 434u: goto L_08929EAC;
    case 435u: goto L_08929EBC;
    case 436u: goto L_08929ED4;
    case 437u: goto L_08929EDC;
    case 438u: goto L_08929EE8;
    case 439u: goto L_08929EFC;
    case 440u: goto L_08929F10;
    case 441u: goto L_08929F20;
    case 442u: goto L_08929F30;
    case 443u: goto L_08929F48;
    case 444u: goto L_08929F60;
    case 445u: goto L_08929F74;
    case 446u: goto L_08929F84;
    case 447u: goto L_08929F94;
    case 448u: goto L_08929FB4;
    case 449u: goto L_08929FC4;
    case 450u: goto L_08929FD4;
    case 451u: goto L_08929FE8;
    case 452u: goto L_0892A004;
    case 453u: goto L_0892A014;
    case 454u: goto L_0892A024;
    case 455u: goto L_0892A03C;
    case 456u: goto L_0892A054;
    case 457u: goto L_0892A068;
    case 458u: goto L_0892A0C8;
    case 459u: goto L_0892A0D4;
    case 460u: goto L_0892A0E0;
    case 461u: goto L_0892A0E4;
    case 462u: goto L_0892A0EC;
    case 463u: goto L_0892A0F4;
    case 464u: goto L_0892A100;
    case 465u: goto L_0892A10C;
    case 466u: goto L_0892A12C;
    case 467u: goto L_0892A134;
    case 468u: goto L_0892A158;
    case 469u: goto L_0892A174;
    case 470u: goto L_0892A17C;
    case 471u: goto L_0892A184;
    case 472u: goto L_0892A190;
    case 473u: goto L_0892A198;
    case 474u: goto L_0892A1CC;
    case 475u: goto L_0892A1D4;
    case 476u: goto L_0892A1FC;
    case 477u: goto L_0892A204;
    case 478u: goto L_0892A20C;
    case 479u: goto L_0892A214;
    case 480u: goto L_0892A234;
    case 481u: goto L_0892A23C;
    case 482u: goto L_0892A250;
    case 483u: goto L_0892A258;
    case 484u: goto L_0892A264;
    case 485u: goto L_0892A26C;
    case 486u: goto L_0892A28C;
    case 487u: goto L_0892A294;
    case 488u: goto L_0892A2A8;
    case 489u: goto L_0892A2B0;
    case 490u: goto L_0892A2C0;
    case 491u: goto L_0892A2CC;
    case 492u: goto L_0892A2D8;
    case 493u: goto L_0892A2E4;
    case 494u: goto L_0892A2E8;
    case 495u: goto L_0892A2F4;
    case 496u: goto L_0892A2FC;
    case 497u: goto L_0892A314;
    case 498u: goto L_0892A31C;
    case 499u: goto L_0892A328;
    case 500u: goto L_0892A330;
    case 501u: goto L_0892A338;
    case 502u: goto L_0892A340;
    case 503u: goto L_0892A348;
    case 504u: goto L_0892A350;
    case 505u: goto L_0892A35C;
    case 506u: goto L_0892A364;
    case 507u: goto L_0892A398;
    case 508u: goto L_0892A3A0;
    case 509u: goto L_0892A3C8;
    case 510u: goto L_0892A3D0;
    case 511u: goto L_0892A3D8;
    case 512u: goto L_0892A3E0;
    case 513u: goto L_0892A400;
    case 514u: goto L_0892A408;
    case 515u: goto L_0892A41C;
    case 516u: goto L_0892A424;
    case 517u: goto L_0892A430;
    case 518u: goto L_0892A438;
    case 519u: goto L_0892A458;
    case 520u: goto L_0892A460;
    case 521u: goto L_0892A474;
    case 522u: goto L_0892A47C;
    case 523u: goto L_0892A48C;
    case 524u: goto L_0892A498;
    case 525u: goto L_0892A4A4;
    case 526u: goto L_0892A4B0;
    case 527u: goto L_0892A4B4;
    case 528u: goto L_0892A4C0;
    case 529u: goto L_0892A4C8;
    case 530u: goto L_0892A4E0;
    case 531u: goto L_0892A4E8;
    case 532u: goto L_0892A4F4;
    case 533u: goto L_0892A4FC;
    case 534u: goto L_0892A504;
    case 535u: goto L_0892A50C;
    case 536u: goto L_0892A514;
    case 537u: goto L_0892A51C;
    case 538u: goto L_0892A528;
    case 539u: goto L_0892A530;
    case 540u: goto L_0892A564;
    case 541u: goto L_0892A56C;
    case 542u: goto L_0892A594;
    case 543u: goto L_0892A59C;
    case 544u: goto L_0892A5A4;
    case 545u: goto L_0892A5AC;
    case 546u: goto L_0892A5CC;
    case 547u: goto L_0892A5D4;
    case 548u: goto L_0892A5E8;
    case 549u: goto L_0892A5F0;
    case 550u: goto L_0892A5FC;
    case 551u: goto L_0892A604;
    case 552u: goto L_0892A62C;
    case 553u: goto L_0892A634;
    case 554u: goto L_0892A650;
    case 555u: goto L_0892A658;
    case 556u: goto L_0892A668;
    case 557u: goto L_0892A674;
    case 558u: goto L_0892A680;
    case 559u: goto L_0892A68C;
    case 560u: goto L_0892A690;
    case 561u: goto L_0892A69C;
    case 562u: goto L_0892A6A4;
    case 563u: goto L_0892A6BC;
    case 564u: goto L_0892A6C4;
    case 565u: goto L_0892A6D0;
    case 566u: goto L_0892A6D8;
    case 567u: goto L_0892A6E0;
    case 568u: goto L_0892A6E8;
    case 569u: goto L_0892A6F0;
    case 570u: goto L_0892A6F8;
    case 571u: goto L_0892A704;
    case 572u: goto L_0892A70C;
    case 573u: goto L_0892A740;
    case 574u: goto L_0892A748;
    case 575u: goto L_0892A770;
    case 576u: goto L_0892A778;
    case 577u: goto L_0892A780;
    case 578u: goto L_0892A788;
    case 579u: goto L_0892A7A8;
    case 580u: goto L_0892A7B0;
    case 581u: goto L_0892A7C4;
    case 582u: goto L_0892A7CC;
    case 583u: goto L_0892A7D8;
    case 584u: goto L_0892A7E0;
    case 585u: goto L_0892A800;
    case 586u: goto L_0892A808;
    case 587u: goto L_0892A81C;
    case 588u: goto L_0892A824;
    case 589u: goto L_0892A834;
    case 590u: goto L_0892A840;
    case 591u: goto L_0892A84C;
    case 592u: goto L_0892A858;
    case 593u: goto L_0892A85C;
    case 594u: goto L_0892A868;
    case 595u: goto L_0892A870;
    case 596u: goto L_0892A888;
    case 597u: goto L_0892A890;
    case 598u: goto L_0892A89C;
    case 599u: goto L_0892A8A4;
    case 600u: goto L_0892A8AC;
    case 601u: goto L_0892A8B4;
    case 602u: goto L_0892A8BC;
    case 603u: goto L_0892A8C4;
    case 604u: goto L_0892A8D0;
    case 605u: goto L_0892A8D8;
    case 606u: goto L_0892A90C;
    case 607u: goto L_0892A914;
    case 608u: goto L_0892A93C;
    case 609u: goto L_0892A944;
    case 610u: goto L_0892A94C;
    case 611u: goto L_0892A954;
    case 612u: goto L_0892A974;
    case 613u: goto L_0892A97C;
    case 614u: goto L_0892A990;
    case 615u: goto L_0892A998;
    case 616u: goto L_0892A9A4;
    case 617u: goto L_0892A9AC;
    case 618u: goto L_0892A9D0;
    case 619u: goto L_0892A9D8;
    case 620u: goto L_0892A9F0;
    case 621u: goto L_0892A9F8;
    case 622u: goto L_0892AA08;
    case 623u: goto L_0892AA14;
    case 624u: goto L_0892AA20;
    case 625u: goto L_0892AA2C;
    case 626u: goto L_0892AA30;
    case 627u: goto L_0892AA3C;
    case 628u: goto L_0892AA44;
    case 629u: goto L_0892AA5C;
    case 630u: goto L_0892AA64;
    case 631u: goto L_0892AA70;
    case 632u: goto L_0892AA78;
    case 633u: goto L_0892AA80;
    case 634u: goto L_0892AA88;
    case 635u: goto L_0892AA90;
    case 636u: goto L_0892AA98;
    case 637u: goto L_0892AAA4;
    case 638u: goto L_0892AAAC;
    case 639u: goto L_0892AAE0;
    case 640u: goto L_0892AAE8;
    case 641u: goto L_0892AB10;
    case 642u: goto L_0892AB18;
    case 643u: goto L_0892AB20;
    case 644u: goto L_0892AB28;
    case 645u: goto L_0892AB48;
    case 646u: goto L_0892AB50;
    case 647u: goto L_0892AB64;
    case 648u: goto L_0892AB6C;
    case 649u: goto L_0892AB78;
    case 650u: goto L_0892AB80;
    case 651u: goto L_0892ABA4;
    case 652u: goto L_0892ABAC;
    case 653u: goto L_0892ABC4;
    case 654u: goto L_0892ABCC;
    case 655u: goto L_0892ABDC;
    case 656u: goto L_0892ABE8;
    case 657u: goto L_0892ABF4;
    case 658u: goto L_0892AC00;
    case 659u: goto L_0892AC04;
    case 660u: goto L_0892AC10;
    case 661u: goto L_0892AC18;
    case 662u: goto L_0892AC30;
    case 663u: goto L_0892AC38;
    case 664u: goto L_0892AC44;
    case 665u: goto L_0892AC4C;
    case 666u: goto L_0892AC54;
    case 667u: goto L_0892AC5C;
    case 668u: goto L_0892AC64;
    case 669u: goto L_0892AC6C;
    case 670u: goto L_0892AC78;
    case 671u: goto L_0892AC80;
    case 672u: goto L_0892ACB4;
    case 673u: goto L_0892ACBC;
    case 674u: goto L_0892ACE4;
    case 675u: goto L_0892ACEC;
    case 676u: goto L_0892ACF4;
    case 677u: goto L_0892ACFC;
    case 678u: goto L_0892AD1C;
    case 679u: goto L_0892AD24;
    case 680u: goto L_0892AD38;
    case 681u: goto L_0892AD40;
    case 682u: goto L_0892AD4C;
    case 683u: goto L_0892AD54;
    case 684u: goto L_0892AD80;
    case 685u: goto L_0892AD88;
    case 686u: goto L_0892ADA8;
    case 687u: goto L_0892ADB0;
    case 688u: goto L_0892ADC0;
    case 689u: goto L_0892ADCC;
    case 690u: goto L_0892ADD8;
    case 691u: goto L_0892ADE4;
    case 692u: goto L_0892ADE8;
    case 693u: goto L_0892ADF4;
    case 694u: goto L_0892ADFC;
    case 695u: goto L_0892AE14;
    case 696u: goto L_0892AE1C;
    case 697u: goto L_0892AE28;
    case 698u: goto L_0892AE30;
    case 699u: goto L_0892AE38;
    case 700u: goto L_0892AE40;
    case 701u: goto L_0892AE48;
    case 702u: goto L_0892AE50;
    case 703u: goto L_0892AE5C;
    case 704u: goto L_0892AE64;
    case 705u: goto L_0892AE98;
    case 706u: goto L_0892AEA0;
    case 707u: goto L_0892AEC8;
    case 708u: goto L_0892AED0;
    case 709u: goto L_0892AED8;
    case 710u: goto L_0892AEE0;
    case 711u: goto L_0892AF00;
    case 712u: goto L_0892AF08;
    case 713u: goto L_0892AF1C;
    case 714u: goto L_0892AF24;
    case 715u: goto L_0892AF30;
    case 716u: goto L_0892AF38;
    case 717u: goto L_0892AF5C;
    case 718u: goto L_0892AF64;
    case 719u: goto L_0892AF7C;
    case 720u: goto L_0892AF84;
    case 721u: goto L_0892AF94;
    case 722u: goto L_0892AFA0;
    case 723u: goto L_0892AFAC;
    case 724u: goto L_0892AFB8;
    case 725u: goto L_0892AFBC;
    case 726u: goto L_0892AFC8;
    case 727u: goto L_0892AFD0;
    case 728u: goto L_0892AFE8;
    case 729u: goto L_0892AFF0;
    case 730u: goto L_0892AFFC;
    case 731u: goto L_0892B004;
    case 732u: goto L_0892B00C;
    case 733u: goto L_0892B014;
    case 734u: goto L_0892B028;
    case 735u: goto L_0892B044;
    case 736u: goto L_0892B050;
    case 737u: goto L_0892B084;
    case 738u: goto L_0892B0A4;
    case 739u: goto L_0892B0AC;
    case 740u: goto L_0892B0BC;
    case 741u: goto L_0892B0D0;
    case 742u: goto L_0892B0D8;
    case 743u: goto L_0892B0E4;
    case 744u: goto L_0892B0F8;
    case 745u: goto L_0892B104;
    case 746u: goto L_0892B110;
    case 747u: goto L_0892B13C;
    case 748u: goto L_0892B148;
    case 749u: goto L_0892B15C;
    case 750u: goto L_0892B16C;
    case 751u: goto L_0892B178;
    case 752u: goto L_0892B184;
    case 753u: goto L_0892B198;
    case 754u: goto L_0892B1AC;
    case 755u: goto L_0892B1CC;
    case 756u: goto L_0892B1D8;
    case 757u: goto L_0892B1E8;
    case 758u: goto L_0892B1F8;
    case 759u: goto L_0892B208;
    case 760u: goto L_0892B224;
    case 761u: goto L_0892B234;
    case 762u: goto L_0892B248;
    case 763u: goto L_0892B250;
    case 764u: goto L_0892B264;
    case 765u: goto L_0892B27C;
    case 766u: goto L_0892B288;
    case 767u: goto L_0892B29C;
    case 768u: goto L_0892B2AC;
    case 769u: goto L_0892B2B8;
    case 770u: goto L_0892B2C0;
    case 771u: goto L_0892B2CC;
    case 772u: goto L_0892B30C;
    case 773u: goto L_0892B31C;
    case 774u: goto L_0892B330;
    case 775u: goto L_0892B33C;
    case 776u: goto L_0892B348;
    case 777u: goto L_0892B360;
    case 778u: goto L_0892B374;
    case 779u: goto L_0892B37C;
    case 780u: goto L_0892B390;
    case 781u: goto L_0892B39C;
    case 782u: goto L_0892B3AC;
    case 783u: goto L_0892B3C4;
    case 784u: goto L_0892B3D0;
    case 785u: goto L_0892B3E0;
    case 786u: goto L_0892B3F0;
    case 787u: goto L_0892B400;
    case 788u: goto L_0892B410;
    case 789u: goto L_0892B414;
    case 790u: goto L_0892B424;
    case 791u: goto L_0892B428;
    case 792u: goto L_0892B444;
    case 793u: goto L_0892B488;
    case 794u: goto L_0892B490;
    case 795u: goto L_0892B49C;
    case 796u: goto L_0892B4A4;
    case 797u: goto L_0892B4AC;
    case 798u: goto L_0892B4C4;
    case 799u: goto L_0892B4D4;
    case 800u: goto L_0892B4E0;
    case 801u: goto L_0892B4F0;
    case 802u: goto L_0892B4FC;
    case 803u: goto L_0892B510;
    case 804u: goto L_0892B518;
    case 805u: goto L_0892B528;
    case 806u: goto L_0892B530;
    case 807u: goto L_0892B550;
    case 808u: goto L_0892B568;
    case 809u: goto L_0892B570;
    case 810u: goto L_0892B574;
    case 811u: goto L_0892B57C;
    case 812u: goto L_0892B58C;
    case 813u: goto L_0892B59C;
    case 814u: goto L_0892B5A0;
    case 815u: goto L_0892B5B0;
    case 816u: goto L_0892B5B4;
    case 817u: goto L_0892B5DC;
    case 818u: goto L_0892B61C;
    case 819u: goto L_0892B624;
    case 820u: goto L_0892B62C;
    case 821u: goto L_0892B644;
    case 822u: goto L_0892B654;
    case 823u: goto L_0892B664;
    case 824u: goto L_0892B678;
    case 825u: goto L_0892B67C;
    case 826u: goto L_0892B688;
    case 827u: goto L_0892B694;
    case 828u: goto L_0892B6B4;
    case 829u: goto L_0892B6C0;
    case 830u: goto L_0892B6D0;
    case 831u: goto L_0892B6DC;
    case 832u: goto L_0892B6F8;
    case 833u: goto L_0892B704;
    case 834u: goto L_0892B714;
    case 835u: goto L_0892B724;
    case 836u: goto L_0892B730;
    case 837u: goto L_0892B744;
    case 838u: goto L_0892B750;
    case 839u: goto L_0892B754;
    case 840u: goto L_0892B778;
    case 841u: goto L_0892B784;
    case 842u: goto L_0892B794;
    case 843u: goto L_0892B798;
    case 844u: goto L_0892B7A0;
    case 845u: goto L_0892B7CC;
    case 846u: goto L_0892B7D8;
    case 847u: goto L_0892B7F8;
    case 848u: goto L_0892B804;
    case 849u: goto L_0892B814;
    case 850u: goto L_0892B830;
    case 851u: goto L_0892B83C;
    case 852u: goto L_0892B84C;
    case 853u: goto L_0892B858;
    case 854u: goto L_0892B860;
    case 855u: goto L_0892B86C;
    case 856u: goto L_0892B87C;
    case 857u: goto L_0892B88C;
    case 858u: goto L_0892B898;
    case 859u: goto L_0892B8A4;
    case 860u: goto L_0892B8BC;
    case 861u: goto L_0892B8D4;
    case 862u: goto L_0892B8E0;
    case 863u: goto L_0892B8F0;
    case 864u: goto L_0892B8FC;
    case 865u: goto L_0892B914;
    case 866u: goto L_0892B91C;
    case 867u: goto L_0892B928;
    case 868u: goto L_0892B934;
    case 869u: goto L_0892B93C;
    case 870u: goto L_0892B940;
    case 871u: goto L_0892B960;
    case 872u: goto L_0892B994;
    case 873u: goto L_0892B99C;
    case 874u: goto L_0892B9B0;
    case 875u: goto L_0892B9D0;
    case 876u: goto L_0892B9E8;
    case 877u: goto L_0892B9F0;
    case 878u: goto L_0892B9FC;
    case 879u: goto L_0892BA00;
    case 880u: goto L_0892BA0C;
    case 881u: goto L_0892BA34;
    case 882u: goto L_0892BA50;
    case 883u: goto L_0892BA60;
    case 884u: goto L_0892BA94;
    case 885u: goto L_0892BAA0;
    case 886u: goto L_0892BAAC;
    case 887u: goto L_0892BAC8;
    case 888u: goto L_0892BAD0;
    case 889u: goto L_0892BADC;
    case 890u: goto L_0892BAF8;
    case 891u: goto L_0892BB0C;
    case 892u: goto L_0892BB14;
    case 893u: goto L_0892BB20;
    case 894u: goto L_0892BB30;
    case 895u: goto L_0892BB34;
    case 896u: goto L_0892BB44;
    case 897u: goto L_0892BB50;
    case 898u: goto L_0892BB5C;
    case 899u: goto L_0892BB68;
    case 900u: goto L_0892BB70;
    case 901u: goto L_0892BB78;
    case 902u: goto L_0892BB7C;
    case 903u: goto L_0892BB84;
    case 904u: goto L_0892BB8C;
    case 905u: goto L_0892BB98;
    case 906u: goto L_0892BBA4;
    case 907u: goto L_0892BBBC;
    case 908u: goto L_0892BBC4;
    case 909u: goto L_0892BBE0;
    case 910u: goto L_0892BBEC;
    case 911u: goto L_0892BBF4;
    case 912u: goto L_0892BC00;
    case 913u: goto L_0892BC14;
    case 914u: goto L_0892BC1C;
    case 915u: goto L_0892BC38;
    case 916u: goto L_0892BC40;
    case 917u: goto L_0892BC5C;
    case 918u: goto L_0892BC68;
    case 919u: goto L_0892BC70;
    case 920u: goto L_0892BC7C;
    case 921u: goto L_0892BC90;
    case 922u: goto L_0892BC9C;
    case 923u: goto L_0892BCA4;
    case 924u: goto L_0892BCA8;
    case 925u: goto L_0892BCC4;
    case 926u: goto L_0892BD44;
    case 927u: goto L_0892BD54;
    case 928u: goto L_0892BD60;
    case 929u: goto L_0892BD80;
    case 930u: goto L_0892BD9C;
    case 931u: goto L_0892BDB4;
    case 932u: goto L_0892BDBC;
    case 933u: goto L_0892BDC0;
    case 934u: goto L_0892BDD4;
    case 935u: goto L_0892BDDC;
    case 936u: goto L_0892BDFC;
    case 937u: goto L_0892BE04;
    case 938u: goto L_0892BE08;
    case 939u: goto L_0892BE14;
    case 940u: goto L_0892BE50;
    case 941u: goto L_0892BE5C;
    case 942u: goto L_0892BE6C;
    case 943u: goto L_0892BE74;
    case 944u: goto L_0892BE88;
    case 945u: goto L_0892BEB8;
    case 946u: goto L_0892BED8;
    case 947u: goto L_0892BEF8;
    case 948u: goto L_0892BF00;
    case 949u: goto L_0892BF04;
    case 950u: goto L_0892BF08;
    case 951u: goto L_0892BF1C;
    case 952u: goto L_0892BF24;
    case 953u: goto L_0892BF4C;
    case 954u: goto L_0892BF6C;
    case 955u: goto L_0892BF8C;
    case 956u: goto L_0892BF94;
    case 957u: goto L_0892BF98;
    case 958u: goto L_0892BF9C;
    case 959u: goto L_0892BFB0;
    case 960u: goto L_0892BFC0;
    case 961u: goto L_0892BFCC;
    case 962u: goto L_0892BFEC;
    case 963u: goto L_0892BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08928004:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08928018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x08928018u) goto L_08928018;
    return;
L_08928018:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928034u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928034u) goto L_08928034;
    return;
L_08928034:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08928038;
L_08928038:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892806C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928088;
      }
      goto L_08928078;
    }
L_08928078:
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892808C;
      }
      goto L_08928088;
    }
L_08928088:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892808C;
L_0892808C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928094:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089280D8;
      }
      goto L_089280D0;
    }
L_089280D0:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_089280D8;
L_089280D8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928188;
      }
      goto L_089280E0;
    }
L_089280E0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089280F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089280F4u) goto L_089280F4;
    return;
L_089280F4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08928140;
      }
      goto L_08928114;
    }
L_08928114:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928188;
      }
      goto L_08928120;
    }
L_08928120:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08928188;
      }
      goto L_08928128;
    }
L_08928128:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928188;
      }
      goto L_08928134;
    }
L_08928134:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928188;
      }
      goto L_08928140;
    }
L_08928140:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928154;
      }
      goto L_08928150;
    }
L_08928150:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08928154;
L_08928154:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089280F4;
      }
      goto L_08928164;
    }
L_08928164:
    ctx.set_gpr(5, ctx.gpr[17] << 1u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892817Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892817Cu) goto L_0892817C;
    return;
L_0892817C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892818C;
      }
      goto L_08928188;
    }
L_08928188:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0892818C;
L_0892818C:
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
L_089281B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089281D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 797u, 0x0892784Cu>(ctx, &aot_mem) && ctx.pc == 0x089281D8u) goto L_089281D8;
    return;
L_089281D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089281FC;
      }
      goto L_089281EC;
    }
L_089281EC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089281FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089281FCu) goto L_089281FC;
    return;
L_089281FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08928234;
      }
      goto L_08928208;
    }
L_08928208:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928224;
      }
      goto L_08928218;
    }
L_08928218:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928234;
      }
      goto L_08928224;
    }
L_08928224:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08928234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08928234u) goto L_08928234;
    return;
L_08928234:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928264;
      }
      goto L_0892824C;
    }
L_0892824C:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11524)));
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08928264;
L_08928264:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892824C;
      }
      goto L_08928270;
    }
L_08928270:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(16, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089282D8;
      }
      goto L_089282A4;
    }
L_089282A4:
    ctx.set_gpr(3, ctx.gpr[18] - ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089282CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089282CCu) goto L_089282CC;
    return;
L_089282CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089282E4;
      }
      goto L_089282D4;
    }
L_089282D4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    goto L_089282D8;
L_089282D8:
    ctx.set_gpr(3, ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089282A4;
      }
      goto L_089282E4;
    }
L_089282E4:
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
L_08928304:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0892832Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 482u, 0x088DA7E8u>(ctx, &aot_mem) && ctx.pc == 0x0892832Cu) goto L_0892832C;
    return;
L_0892832C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928350u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928350u) goto L_08928350;
    return;
L_08928350:
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
L_0892836C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928380:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11520));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089283ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x089283ACu) goto L_089283AC;
    return;
L_089283AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089283CC;
      }
      goto L_089283B8;
    }
L_089283B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089283C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089283C4u) goto L_089283C4;
    return;
L_089283C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089283D0;
      }
      goto L_089283CC;
    }
L_089283CC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089283D0;
L_089283D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089283E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11520));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08928414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08928414u) goto L_08928414;
    return;
L_08928414:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892842C;
      }
      goto L_08928420;
    }
L_08928420:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892847C;
      }
      goto L_0892842C;
    }
L_0892842C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928464;
      }
      goto L_0892843C;
    }
L_0892843C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08928448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08928448u) goto L_08928448;
    return;
L_08928448:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892845C;
      }
      goto L_08928450;
    }
L_08928450:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892845Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0892845Cu) goto L_0892845C;
    return;
L_0892845C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08928464;
L_08928464:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08928478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08928478u) goto L_08928478;
    return;
L_08928478:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0892847C;
L_0892847C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928494:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089284A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089284C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089284C4u) goto L_089284C4;
    return;
L_089284C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089284D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089284E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08928508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x08928508u) goto L_08928508;
    return;
L_08928508:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928580;
      }
      goto L_08928510;
    }
L_08928510:
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30796)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928578;
      }
      goto L_0892852C;
    }
L_0892852C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30796)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928560u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928560u) goto L_08928560;
    return;
L_08928560:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928574;
      }
      goto L_08928568;
    }
L_08928568:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928588;
      }
      goto L_08928574;
    }
L_08928574:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08928578;
L_08928578:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0892852C;
      }
      goto L_08928580;
    }
L_08928580:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30780)));
    goto L_08928588;
L_08928588:
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
L_089285A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089285B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 215u, 0x0893CDCCu>(ctx, &aot_mem) && ctx.pc == 0x089285B8u) goto L_089285B8;
    return;
L_089285B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089285C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089285C4u) goto L_089285C4;
    return;
L_089285C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089285D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 730u, 0x088EFFA4u>(ctx, &aot_mem) && ctx.pc == 0x089285D0u) goto L_089285D0;
    return;
L_089285D0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30796));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089285E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089285E4u) goto L_089285E4;
    return;
L_089285E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089285F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30780), 0u);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30796));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08928618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08928618u) goto L_08928618;
    return;
L_08928618:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928628:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(45)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892865C;
      }
      goto L_08928654;
    }
L_08928654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928A70;
      }
      goto L_0892865C;
    }
L_0892865C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928698;
      }
      goto L_0892866C;
    }
L_0892866C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32496));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928688:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928698;
      }
      goto L_08928694;
    }
L_08928694:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08928698;
L_08928698:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892870C;
      }
      goto L_089286A8;
    }
L_089286A8:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32460));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089286C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892870C;
      }
      goto L_089286D8;
    }
L_089286D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892870C;
      }
      goto L_089286EC;
    }
L_089286EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892870C;
      }
      goto L_08928700;
    }
L_08928700:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0892870C;
L_0892870C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(512));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892873C;
      }
      goto L_08928724;
    }
L_08928724:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928724;
      }
      goto L_0892873C;
    }
L_0892873C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x08928750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 247u, 0x0891D1E8u>(ctx, &aot_mem) && ctx.pc == 0x08928750u) goto L_08928750;
    return;
L_08928750:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x0892875Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 305u, 0x0891D534u>(ctx, &aot_mem) && ctx.pc == 0x0892875Cu) goto L_0892875C;
    return;
L_0892875C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928910;
      }
      goto L_0892876C;
    }
L_0892876C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928784;
      }
      goto L_08928774;
    }
L_08928774:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089287A0;
      }
      goto L_08928784;
    }
L_08928784:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(31, 0x08928798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 307u, 0x0891D564u>(ctx, &aot_mem) && ctx.pc == 0x08928798u) goto L_08928798;
    return;
L_08928798:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928910;
      }
      goto L_089287A0;
    }
L_089287A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089287B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x089287B8u) goto L_089287B8;
    return;
L_089287B8:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089287C8u);
    // nop
    goto L_089284E0;
L_089287C8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089287D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089287D8u) goto L_089287D8;
    return;
L_089287D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892891C;
      }
      goto L_089287E4;
    }
L_089287E4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08928824;
      }
      goto L_089287EC;
    }
L_089287EC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892880C;
      }
      goto L_089287F4;
    }
L_089287F4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892880Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892880Cu) goto L_0892880C;
    return;
L_0892880C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928820u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928820u) goto L_08928820;
    return;
L_08928820:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08928824;
L_08928824:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892883C;
      }
      goto L_08928830;
    }
L_08928830:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928888;
      }
      goto L_0892883C;
    }
L_0892883C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928874;
      }
      goto L_0892884C;
    }
L_0892884C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08928858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08928858u) goto L_08928858;
    return;
L_08928858:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892886C;
      }
      goto L_08928860;
    }
L_08928860:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892886Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0892886Cu) goto L_0892886C;
    return;
L_0892886C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08928874;
L_08928874:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08928888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08928888u) goto L_08928888;
    return;
L_08928888:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089288ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089288ACu) goto L_089288AC;
    return;
L_089288AC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089288DC;
      }
      goto L_089288C0;
    }
L_089288C0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089288DC;
      }
      goto L_089288D8;
    }
L_089288D8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089288DC;
L_089288DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928908;
      }
      goto L_089288E4;
    }
L_089288E4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928908;
      }
      goto L_089288FC;
    }
L_089288FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08928908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08928908u) goto L_08928908;
    return;
L_08928908:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892891C;
      }
      goto L_08928910;
    }
L_08928910:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892876C;
      }
      goto L_0892891C;
    }
L_0892891C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08928980;
      }
      goto L_08928928;
    }
L_08928928:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11512));
    ctx.set_gpr(31, 0x08928944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 446u, 0x08955E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08928944u) goto L_08928944;
    return;
L_08928944:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928974;
      }
      goto L_08928950;
    }
L_08928950:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928964u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928964u) goto L_08928964;
    return;
L_08928964:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08928974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08928974u) goto L_08928974;
    return;
L_08928974:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928A70;
      }
      goto L_08928980;
    }
L_08928980:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089289A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089289A0u) goto L_089289A0;
    return;
L_089289A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089289B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089289B8u) goto L_089289B8;
    return;
L_089289B8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089289DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089289DCu) goto L_089289DC;
    return;
L_089289DC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928A40;
      }
      goto L_089289E8;
    }
L_089289E8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089289F8u);
    // nop
    goto L_08928DFC;
L_089289F8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08928A40;
      }
      goto L_08928A04;
    }
L_08928A04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928A20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928A20u) goto L_08928A20;
    return;
L_08928A20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08928A40;
      }
      goto L_08928A2C;
    }
L_08928A2C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08928A40u);
    // nop
    goto L_08928DFC;
L_08928A40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08928A60;
      }
      goto L_08928A50;
    }
L_08928A50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928A64;
      }
      goto L_08928A60;
    }
L_08928A60:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    goto L_08928A64;
L_08928A64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + 0u);
    goto L_08928A70;
L_08928A70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(560));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928A90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928B24;
      }
      goto L_08928AAC;
    }
L_08928AAC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928ABCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928ABCu) goto L_08928ABC;
    return;
L_08928ABC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928AD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928AD4u) goto L_08928AD4;
    return;
L_08928AD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928AECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928AECu) goto L_08928AEC;
    return;
L_08928AEC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08928AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08928AFCu) goto L_08928AFC;
    return;
L_08928AFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08928B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08928B14u) goto L_08928B14;
    return;
L_08928B14:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    goto L_08928B24;
L_08928B24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928B38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08928B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 228u, 0x0891D098u>(ctx, &aot_mem) && ctx.pc == 0x08928B58u) goto L_08928B58;
    return;
L_08928B58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32696));
    ctx.set_gpr(31, 0x08928B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08928B68u) goto L_08928B68;
    return;
L_08928B68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928B90;
      }
      goto L_08928B70;
    }
L_08928B70:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928B88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928B88u) goto L_08928B88;
    return;
L_08928B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928DA8;
      }
      goto L_08928B90;
    }
L_08928B90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11484));
    ctx.set_gpr(31, 0x08928BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08928BA4u) goto L_08928BA4;
    return;
L_08928BA4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928BCC;
      }
      goto L_08928BAC;
    }
L_08928BAC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928BC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928BC4u) goto L_08928BC4;
    return;
L_08928BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928DA8;
      }
      goto L_08928BCC;
    }
L_08928BCC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32680));
    ctx.set_gpr(31, 0x08928BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08928BDCu) goto L_08928BDC;
    return;
L_08928BDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928C04;
      }
      goto L_08928BE4;
    }
L_08928BE4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928BFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928BFCu) goto L_08928BFC;
    return;
L_08928BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928DA8;
      }
      goto L_08928C04;
    }
L_08928C04:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11480));
    ctx.set_gpr(31, 0x08928C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08928C18u) goto L_08928C18;
    return;
L_08928C18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928C40;
      }
      goto L_08928C20;
    }
L_08928C20:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928C38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928C38u) goto L_08928C38;
    return;
L_08928C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928DA8;
      }
      goto L_08928C40;
    }
L_08928C40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11476));
    ctx.set_gpr(31, 0x08928C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08928C54u) goto L_08928C54;
    return;
L_08928C54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928C78;
      }
      goto L_08928C5C;
    }
L_08928C5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11472));
    ctx.set_gpr(31, 0x08928C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08928C70u) goto L_08928C70;
    return;
L_08928C70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928C98;
      }
      goto L_08928C78;
    }
L_08928C78:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928C90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928C90u) goto L_08928C90;
    return;
L_08928C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928DA8;
      }
      goto L_08928C98;
    }
L_08928C98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11468));
    ctx.set_gpr(31, 0x08928CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08928CACu) goto L_08928CAC;
    return;
L_08928CAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928CD0;
      }
      goto L_08928CB4;
    }
L_08928CB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11464));
    ctx.set_gpr(31, 0x08928CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08928CC8u) goto L_08928CC8;
    return;
L_08928CC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928CF0;
      }
      goto L_08928CD0;
    }
L_08928CD0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928CE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928CE8u) goto L_08928CE8;
    return;
L_08928CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928DA8;
      }
      goto L_08928CF0;
    }
L_08928CF0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32676));
    ctx.set_gpr(31, 0x08928D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08928D00u) goto L_08928D00;
    return;
L_08928D00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928D24;
      }
      goto L_08928D08;
    }
L_08928D08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11460));
    ctx.set_gpr(31, 0x08928D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08928D1Cu) goto L_08928D1C;
    return;
L_08928D1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928D44;
      }
      goto L_08928D24;
    }
L_08928D24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928D3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928D3Cu) goto L_08928D3C;
    return;
L_08928D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928DA8;
      }
      goto L_08928D44;
    }
L_08928D44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11456));
    ctx.set_gpr(31, 0x08928D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08928D58u) goto L_08928D58;
    return;
L_08928D58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928D7C;
      }
      goto L_08928D60;
    }
L_08928D60:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11452));
    ctx.set_gpr(31, 0x08928D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08928D74u) goto L_08928D74;
    return;
L_08928D74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928D9C;
      }
      goto L_08928D7C;
    }
L_08928D7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928D94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928D94u) goto L_08928D94;
    return;
L_08928D94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928DA8;
      }
      goto L_08928D9C;
    }
L_08928D9C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928DBC;
      }
      goto L_08928DA8;
    }
L_08928DA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08928DB8;
      }
      goto L_08928DB4;
    }
L_08928DB4:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08928DB8;
L_08928DB8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08928DBC;
L_08928DBC:
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
L_08928DD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928DECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928DECu) goto L_08928DEC;
    return;
L_08928DEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928DFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928E90;
      }
      goto L_08928E28;
    }
L_08928E28:
    ctx.set_gpr(1, 16u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 1u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928E4C;
      }
      goto L_08928E3C;
    }
L_08928E3C:
    ctx.set_gpr(2, 16u << 16u);
    ctx.set_gpr(16, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928E50;
      }
      goto L_08928E4C;
    }
L_08928E4C:
    ctx.set_gpr(16, ctx.gpr[17] << 1u);
    goto L_08928E50;
L_08928E50:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928E78;
      }
      goto L_08928E5C;
    }
L_08928E5C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08928E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 12u, 0x08948114u>(ctx, &aot_mem) && ctx.pc == 0x08928E6Cu) goto L_08928E6C;
    return;
L_08928E6C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928E8C;
      }
      goto L_08928E78;
    }
L_08928E78:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08928E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x08928E88u) goto L_08928E88;
    return;
L_08928E88:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_08928E8C;
L_08928E8C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    goto L_08928E90;
L_08928E90:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
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
L_08928EB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928EEC;
      }
      goto L_08928EE0;
    }
L_08928EE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928FC4;
      }
      goto L_08928EEC;
    }
L_08928EEC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08928F64;
      }
      goto L_08928EFC;
    }
L_08928EFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928F20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928F20u) goto L_08928F20;
    return;
L_08928F20:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(16, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08928F58;
      }
      goto L_08928F38;
    }
L_08928F38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08928F58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08928F58u) goto L_08928F58;
    return;
L_08928F58:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928FC4;
      }
      goto L_08928F64;
    }
L_08928F64:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[17]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F9C;
      }
      goto L_08928F88;
    }
L_08928F88:
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(16, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    goto L_08928F9C;
L_08928F9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08928FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08928FB4u) goto L_08928FB4;
    return;
L_08928FB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08928FC4;
L_08928FC4:
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
L_08928FE4:
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
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929030;
      }
      goto L_08929020;
    }
L_08929020:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x08929030u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929030u) goto L_08929030;
    return;
L_08929030:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08929068;
      }
      goto L_08929040;
    }
L_08929040:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929068u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929068u) goto L_08929068;
    return;
L_08929068:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929088u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929088u) goto L_08929088;
    return;
L_08929088:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x08929098u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929098u) goto L_08929098;
    return;
L_08929098:
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
L_089290BC:
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
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089290FC;
      }
      goto L_089290F0;
    }
L_089290F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089291E8;
      }
      goto L_089290FC;
    }
L_089290FC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929110;
      }
      goto L_08929104;
    }
L_08929104:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089291E8;
      }
      goto L_08929110;
    }
L_08929110:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08929184;
      }
      goto L_08929120;
    }
L_08929120:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08929150;
      }
      goto L_08929130;
    }
L_08929130:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929150u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929150u) goto L_08929150;
    return;
L_08929150:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929174u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929174u) goto L_08929174;
    return;
L_08929174:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089291E8;
      }
      goto L_08929184;
    }
L_08929184:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089291A4;
      }
      goto L_0892919C;
    }
L_0892919C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_089291A4;
L_089291A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089291B8u);
    // nop
    goto L_08928DFC;
L_089291B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089291D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089291D4u) goto L_089291D4;
    return;
L_089291D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.lo);
    goto L_089291E8;
L_089291E8:
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
L_08929208:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929230;
      }
      goto L_08929224;
    }
L_08929224:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929280;
      }
      goto L_08929230;
    }
L_08929230:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892927C;
      }
      goto L_0892923C;
    }
L_0892923C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892925Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892925Cu) goto L_0892925C;
    return;
L_0892925C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892927Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892927Cu) goto L_0892927C;
    return;
L_0892927C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08929280;
L_08929280:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929294:
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
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089292F0;
      }
      goto L_089292E4;
    }
L_089292E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089295F8;
      }
      goto L_089292F0;
    }
L_089292F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892930C;
      }
      goto L_08929300;
    }
L_08929300:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929318;
      }
      goto L_0892930C;
    }
L_0892930C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_08929318;
L_08929318:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.set_gpr(20, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929338;
      }
      goto L_0892932C;
    }
L_0892932C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089295F8;
      }
      goto L_08929338;
    }
L_08929338:
    ctx.set_gpr(31, 0x08929340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08929340u) goto L_08929340;
    return;
L_08929340:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089295E8;
      }
      goto L_08929354;
    }
L_08929354:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929538;
      }
      goto L_08929364;
    }
L_08929364:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08929378;
      }
      goto L_0892936C;
    }
L_0892936C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929538;
      }
      goto L_08929378;
    }
L_08929378:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089293A8;
      }
      goto L_08929390;
    }
L_08929390:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929538;
      }
      goto L_089293A8;
    }
L_089293A8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089293E8;
      }
      goto L_089293B0;
    }
L_089293B0:
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089293E8;
      }
      goto L_089293C0;
    }
L_089293C0:
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
          goto L_08929538;
      }
      goto L_089293E8;
    }
L_089293E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08929538;
      }
      goto L_089293F4;
    }
L_089293F4:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892941C;
      }
      goto L_0892940C;
    }
L_0892940C:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0892941C;
L_0892941C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x0892942Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0892942Cu) goto L_0892942C;
    return;
L_0892942C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_08929434;
    }
L_08929434:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_0892944C;
    }
L_0892944C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(117));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_08929458;
    }
L_08929458:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(111));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_08929464;
    }
L_08929464:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(120));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_08929470;
    }
L_08929470:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(105));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_0892947C;
    }
L_0892947C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(110));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_08929488;
    }
L_08929488:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(101));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_08929494;
    }
L_08929494:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(102));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_089294A0;
    }
L_089294A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(103));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_089294AC;
    }
L_089294AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(115));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_089294B8;
    }
L_089294B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(83));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_089294C4;
    }
L_089294C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(99));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_089294D0;
    }
L_089294D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(67));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_089294DC;
    }
L_089294DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(93));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_089294E8;
    }
L_089294E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(112));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089294FC;
      }
      goto L_089294F4;
    }
L_089294F4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0892940C;
      }
      goto L_089294FC;
    }
L_089294FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(31, 0x08929510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 447u, 0x08811C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08929510u) goto L_08929510;
    return;
L_08929510:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929534;
      }
      goto L_08929518;
    }
L_08929518:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08929534;
L_08929534:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    goto L_08929538;
L_08929538:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929364;
      }
      goto L_08929540;
    }
L_08929540:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11448));
    ctx.set_gpr(31, 0x0892955Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0892955Cu) goto L_0892955C;
    return;
L_0892955C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089295A0;
      }
      goto L_08929568;
    }
L_08929568:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08929588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08929588u) goto L_08929588;
    return;
L_08929588:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089295E8;
      }
      goto L_089295A0;
    }
L_089295A0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089295C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x089295C8u) goto L_089295C8;
    return;
L_089295C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089295F4;
      }
      goto L_089295D4;
    }
L_089295D4:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_089295E8;
L_089295E8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929354;
      }
      goto L_089295F4;
    }
L_089295F4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_089295F8;
L_089295F8:
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
L_08929624:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16464));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16424), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16440), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16444), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16448), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16452), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16456), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16460), ctx.gpr[11]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892966C;
      }
      goto L_08929660;
    }
L_08929660:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929700;
      }
      goto L_0892966C;
    }
L_0892966C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929688;
      }
      goto L_0892967C;
    }
L_0892967C:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929694;
      }
      goto L_08929688;
    }
L_08929688:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_08929694;
L_08929694:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(16464));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16424)));
    ctx.set_gpr(31, 0x089296ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1u, 0x0881C004u>(ctx, &aot_mem) && ctx.pc == 0x089296ACu) goto L_089296AC;
    return;
L_089296AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089296D4;
      }
      goto L_089296C8;
    }
L_089296C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089296D4u);
    // nop
    goto L_08928DFC;
L_089296D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089296F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089296F0u) goto L_089296F0;
    return;
L_089296F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08929700;
L_08929700:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16464));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929718:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929770;
      }
      goto L_0892972C;
    }
L_0892972C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929750u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929750u) goto L_08929750;
    return;
L_08929750:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929764;
      }
      goto L_08929758;
    }
L_08929758:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929768;
      }
      goto L_08929764;
    }
L_08929764:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08929768;
L_08929768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089297A4;
      }
      goto L_08929770;
    }
L_08929770:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929790;
      }
      goto L_08929784;
    }
L_08929784:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089297A4;
      }
      goto L_08929790;
    }
L_08929790:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-1)));
    goto L_089297A4;
L_089297A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089297B4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089297CC;
      }
      goto L_089297C0;
    }
L_089297C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892980C;
      }
      goto L_089297CC;
    }
L_089297CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089297E4;
      }
      goto L_089297D8;
    }
L_089297D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892980C;
      }
      goto L_089297E4;
    }
L_089297E4:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08929808;
      }
      goto L_08929804;
    }
L_08929804:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08929808;
L_08929808:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    goto L_0892980C;
L_0892980C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929844;
      }
      goto L_08929838;
    }
L_08929838:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929884;
      }
      goto L_08929844;
    }
L_08929844:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929864;
      }
      goto L_0892985C;
    }
L_0892985C:
    ctx.set_gpr(31, 0x08929864u);
    // nop
    goto L_08928DFC;
L_08929864:
    ctx.set_gpr(2, ctx.gpr[16] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    goto L_08929884;
L_08929884:
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
L_0892989C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089298B0;
      }
      goto L_089298A4;
    }
L_089298A4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929958;
      }
      goto L_089298B0;
    }
L_089298B0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089298C8;
      }
      goto L_089298BC;
    }
L_089298BC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929958;
      }
      goto L_089298C8;
    }
L_089298C8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089298E8;
      }
      goto L_089298DC;
    }
L_089298DC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929958;
      }
      goto L_089298E8;
    }
L_089298E8:
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929940;
      }
      goto L_08929900;
    }
L_08929900:
    ctx.set_gpr(6, ctx.gpr[7] - ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929940;
      }
      goto L_0892990C;
    }
L_0892990C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892994C;
      }
      goto L_08929940;
    }
L_08929940:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892990C;
      }
      goto L_0892994C;
    }
L_0892994C:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    goto L_08929958;
L_08929958:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929960:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929990;
      }
      goto L_08929984;
    }
L_08929984:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929A08;
      }
      goto L_08929990;
    }
L_08929990:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089299A8;
      }
      goto L_0892999C;
    }
L_0892999C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929A08;
      }
      goto L_089299A8;
    }
L_089299A8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089299B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089299B4u) goto L_089299B4;
    return;
L_089299B4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089299DC;
      }
      goto L_089299D0;
    }
L_089299D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089299DCu);
    // nop
    goto L_08928DFC;
L_089299DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089299F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089299F8u) goto L_089299F8;
    return;
L_089299F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08929A08;
L_08929A08:
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
L_08929A24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929B1C;
      }
      goto L_08929A54;
    }
L_08929A54:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929A64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929A64u) goto L_08929A64;
    return;
L_08929A64:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929A88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929A88u) goto L_08929A88;
    return;
L_08929A88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929A9C;
      }
      goto L_08929A90;
    }
L_08929A90:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BB4;
      }
      goto L_08929A9C;
    }
L_08929A9C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929AB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929AB0u) goto L_08929AB0;
    return;
L_08929AB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08929B04;
      }
      goto L_08929ABC;
    }
L_08929ABC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08929AEC;
      }
      goto L_08929AC8;
    }
L_08929AC8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929AD8;
      }
      goto L_08929AD0;
    }
L_08929AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929B10;
      }
      goto L_08929AD8;
    }
L_08929AD8:
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[17]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BB4;
      }
      goto L_08929AEC;
    }
L_08929AEC:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[17] ^ ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BB4;
      }
      goto L_08929B04;
    }
L_08929B04:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BB4;
      }
      goto L_08929B10;
    }
L_08929B10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BB4;
      }
      goto L_08929B1C;
    }
L_08929B1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08929B64;
      }
      goto L_08929B28;
    }
L_08929B28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08929B50;
      }
      goto L_08929B34;
    }
L_08929B34:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929B44;
      }
      goto L_08929B3C;
    }
L_08929B3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929B78;
      }
      goto L_08929B44;
    }
L_08929B44:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929B84;
      }
      goto L_08929B50;
    }
L_08929B50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929B84;
      }
      goto L_08929B64;
    }
L_08929B64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929B84;
      }
      goto L_08929B78;
    }
L_08929B78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BB4;
      }
      goto L_08929B84;
    }
L_08929B84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BA4;
      }
      goto L_08929B98;
    }
L_08929B98:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929BB0;
      }
      goto L_08929BA4;
    }
L_08929BA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08929BB0;
      }
      goto L_08929BAC;
    }
L_08929BAC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    goto L_08929BB0;
L_08929BB0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08929BB4;
L_08929BB4:
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
L_08929BD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929C0C;
      }
      goto L_08929BE8;
    }
L_08929BE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929C04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929C04u) goto L_08929C04;
    return;
L_08929C04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929C10;
      }
      goto L_08929C0C;
    }
L_08929C0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08929C10;
L_08929C10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929C20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08929C40u);
    // nop
    goto L_08929C50;
L_08929C40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929C6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929C6Cu) goto L_08929C6C;
    return;
L_08929C6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929C7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08929C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08929C94u) goto L_08929C94;
    return;
L_08929C94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929CACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929CACu) goto L_08929CAC;
    return;
L_08929CAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929CC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929CE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929CE4u) goto L_08929CE4;
    return;
L_08929CE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929CF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08929D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08929D14u) goto L_08929D14;
    return;
L_08929D14:
    ctx.set_gpr(6, ctx.gpr[16] & 65535u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929D30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929D30u) goto L_08929D30;
    return;
L_08929D30:
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
L_08929D48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] & 65535u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929D70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929D70u) goto L_08929D70;
    return;
L_08929D70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929D80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929DB4;
      }
      goto L_08929DA0;
    }
L_08929DA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08929DACu);
    // nop
    goto L_08929C7C;
L_08929DAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929DEC;
      }
      goto L_08929DB4;
    }
L_08929DB4:
    ctx.set_gpr(31, 0x08929DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 523u, 0x0892E3F4u>(ctx, &aot_mem) && ctx.pc == 0x08929DBCu) goto L_08929DBC;
    return;
L_08929DBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929DE8;
      }
      goto L_08929DC4;
    }
L_08929DC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929DE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929DE0u) goto L_08929DE0;
    return;
L_08929DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929DEC;
      }
      goto L_08929DE8;
    }
L_08929DE8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08929DEC;
L_08929DEC:
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
L_08929E04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929E44;
      }
      goto L_08929E2C;
    }
L_08929E2C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08929E3Cu);
    // nop
    goto L_08929CF4;
L_08929E3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E80;
      }
      goto L_08929E44;
    }
L_08929E44:
    ctx.set_gpr(31, 0x08929E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 523u, 0x0892E3F4u>(ctx, &aot_mem) && ctx.pc == 0x08929E4Cu) goto L_08929E4C;
    return;
L_08929E4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E7C;
      }
      goto L_08929E54;
    }
L_08929E54:
    ctx.set_gpr(7, ctx.gpr[16] & 65535u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929E74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929E74u) goto L_08929E74;
    return;
L_08929E74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08929E80;
      }
      goto L_08929E7C;
    }
L_08929E7C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08929E80;
L_08929E80:
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
L_08929E9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08929EACu);
    // nop
    goto L_08929E04;
L_08929EAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929EBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929EFC;
      }
      goto L_08929ED4;
    }
L_08929ED4:
    ctx.set_gpr(31, 0x08929EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 523u, 0x0892E3F4u>(ctx, &aot_mem) && ctx.pc == 0x08929EDCu) goto L_08929EDC;
    return;
L_08929EDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08929EFC;
      }
      goto L_08929EE8;
    }
L_08929EE8:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929EFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929EFCu) goto L_08929EFC;
    return;
L_08929EFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929F10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08929F20u);
    // nop
    goto L_08929EBC;
L_08929F20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929F30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08929F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 523u, 0x0892E3F4u>(ctx, &aot_mem) && ctx.pc == 0x08929F48u) goto L_08929F48;
    return;
L_08929F48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08929F60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929F60u) goto L_08929F60;
    return;
L_08929F60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929F74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08929F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 523u, 0x0892E3F4u>(ctx, &aot_mem) && ctx.pc == 0x08929F84u) goto L_08929F84;
    return;
L_08929F84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929F94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08929FB4u);
    // nop
    goto L_08929F30;
L_08929FB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08929FC4u);
    // nop
    goto L_08929C20;
L_08929FC4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08929FD4u);
    // nop
    goto L_08929F30;
L_08929FD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08929FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08929FE8u) goto L_08929FE8;
    return;
L_08929FE8:
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
L_0892A004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0892A014u);
    // nop
    goto L_08929EBC;
L_0892A014:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A024:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0892A03Cu);
    // nop
    goto L_08929F74;
L_0892A03C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A054u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A054u) goto L_0892A054;
    return;
L_0892A054:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A068:
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
    ctx.set_gpr(30, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[9]);
    ctx.set_gpr(16, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, 0u < ctx.gpr[20] ? 1u : 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A0D4;
      }
      goto L_0892A0C8;
    }
L_0892A0C8:
    ctx.set_gpr(30, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A0E4;
      }
      goto L_0892A0D4;
    }
L_0892A0D4:
    ctx.set_gpr(1, ctx.gpr[30] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A0E4;
      }
      goto L_0892A0E0;
    }
L_0892A0E0:
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(8));
    goto L_0892A0E4;
L_0892A0E4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A134;
      }
      goto L_0892A0EC;
    }
L_0892A0EC:
    ctx.set_gpr(31, 0x0892A0F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0892A0F4u) goto L_0892A0F4;
    return;
L_0892A0F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0892A100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0892A100u) goto L_0892A100;
    return;
L_0892A100:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892A10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem) && ctx.pc == 0x0892A10Cu) goto L_0892A10C;
    return;
L_0892A10C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[28] + static_cast<std::uint32_t>(-32680));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A12Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A12Cu) goto L_0892A12C;
    return;
L_0892A12C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B050;
      }
      goto L_0892A134;
    }
L_0892A134:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[21] < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[30] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AE40;
      }
      goto L_0892A158;
    }
L_0892A158:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32532));
    ctx.set_gpr(3, ctx.gpr[30] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A330;
      }
      goto L_0892A17C;
    }
L_0892A17C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A258;
      }
      goto L_0892A184;
    }
L_0892A184:
    ctx.set_gpr(1, ctx.gpr[20] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A20C;
      }
      goto L_0892A190;
    }
L_0892A190:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A1D4;
      }
      goto L_0892A198;
    }
L_0892A198:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A1CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A1CCu) goto L_0892A1CC;
    return;
L_0892A1CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A258;
      }
      goto L_0892A1D4;
    }
L_0892A1D4:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0892A1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A1FCu) goto L_0892A1FC;
    return;
L_0892A1FC:
    ctx.set_gpr(31, 0x0892A204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A204u) goto L_0892A204;
    return;
L_0892A204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A258;
      }
      goto L_0892A20C;
    }
L_0892A20C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A23C;
      }
      goto L_0892A214;
    }
L_0892A214:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A234u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A234u) goto L_0892A234;
    return;
L_0892A234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A258;
      }
      goto L_0892A23C;
    }
L_0892A23C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0892A250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A250u) goto L_0892A250;
    return;
L_0892A250:
    ctx.set_gpr(31, 0x0892A258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A258u) goto L_0892A258;
    return;
L_0892A258:
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A2E8;
      }
      goto L_0892A264;
    }
L_0892A264:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A294;
      }
      goto L_0892A26C;
    }
L_0892A26C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11420));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A28Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A28Cu) goto L_0892A28C;
    return;
L_0892A28C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A2B0;
      }
      goto L_0892A294;
    }
L_0892A294:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11420));
    ctx.set_gpr(31, 0x0892A2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A2A8u) goto L_0892A2A8;
    return;
L_0892A2A8:
    ctx.set_gpr(31, 0x0892A2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A2B0u) goto L_0892A2B0;
    return;
L_0892A2B0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, 0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A2E4;
      }
      goto L_0892A2C0;
    }
L_0892A2C0:
    ctx.set_gpr(1, ctx.gpr[16] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A2D8;
      }
      goto L_0892A2CC;
    }
L_0892A2CC:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A2E4;
      }
      goto L_0892A2D8;
    }
L_0892A2D8:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A2F4;
      }
      goto L_0892A2E4;
    }
L_0892A2E4:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_0892A2E8;
L_0892A2E8:
    ctx.set_gpr(2, ctx.gpr[30] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A264;
      }
      goto L_0892A2F4;
    }
L_0892A2F4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A31C;
      }
      goto L_0892A2FC;
    }
L_0892A2FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A314u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A314u) goto L_0892A314;
    return;
L_0892A314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A330;
      }
      goto L_0892A31C;
    }
L_0892A31C:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0892A328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A328u) goto L_0892A328;
    return;
L_0892A328:
    ctx.set_gpr(31, 0x0892A330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A330u) goto L_0892A330;
    return;
L_0892A330:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A17C;
      }
      goto L_0892A338;
    }
L_0892A338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B00C;
      }
      goto L_0892A340;
    }
L_0892A340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A4FC;
      }
      goto L_0892A348;
    }
L_0892A348:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A424;
      }
      goto L_0892A350;
    }
L_0892A350:
    ctx.set_gpr(1, ctx.gpr[20] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A3D8;
      }
      goto L_0892A35C;
    }
L_0892A35C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A3A0;
      }
      goto L_0892A364;
    }
L_0892A364:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A398u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A398u) goto L_0892A398;
    return;
L_0892A398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A424;
      }
      goto L_0892A3A0;
    }
L_0892A3A0:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0892A3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A3C8u) goto L_0892A3C8;
    return;
L_0892A3C8:
    ctx.set_gpr(31, 0x0892A3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A3D0u) goto L_0892A3D0;
    return;
L_0892A3D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A424;
      }
      goto L_0892A3D8;
    }
L_0892A3D8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A408;
      }
      goto L_0892A3E0;
    }
L_0892A3E0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A400u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A400u) goto L_0892A400;
    return;
L_0892A400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A424;
      }
      goto L_0892A408;
    }
L_0892A408:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0892A41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A41Cu) goto L_0892A41C;
    return;
L_0892A41C:
    ctx.set_gpr(31, 0x0892A424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A424u) goto L_0892A424;
    return;
L_0892A424:
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A4B4;
      }
      goto L_0892A430;
    }
L_0892A430:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A460;
      }
      goto L_0892A438;
    }
L_0892A438:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11412));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A458u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A458u) goto L_0892A458;
    return;
L_0892A458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A47C;
      }
      goto L_0892A460;
    }
L_0892A460:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11412));
    ctx.set_gpr(31, 0x0892A474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A474u) goto L_0892A474;
    return;
L_0892A474:
    ctx.set_gpr(31, 0x0892A47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A47Cu) goto L_0892A47C;
    return;
L_0892A47C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(1, 0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A4B0;
      }
      goto L_0892A48C;
    }
L_0892A48C:
    ctx.set_gpr(1, ctx.gpr[16] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A4A4;
      }
      goto L_0892A498;
    }
L_0892A498:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A4B0;
      }
      goto L_0892A4A4;
    }
L_0892A4A4:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A4C0;
      }
      goto L_0892A4B0;
    }
L_0892A4B0:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_0892A4B4;
L_0892A4B4:
    ctx.set_gpr(2, ctx.gpr[30] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A430;
      }
      goto L_0892A4C0;
    }
L_0892A4C0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A4E8;
      }
      goto L_0892A4C8;
    }
L_0892A4C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A4E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A4E0u) goto L_0892A4E0;
    return;
L_0892A4E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A4FC;
      }
      goto L_0892A4E8;
    }
L_0892A4E8:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0892A4F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A4F4u) goto L_0892A4F4;
    return;
L_0892A4F4:
    ctx.set_gpr(31, 0x0892A4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A4FCu) goto L_0892A4FC;
    return;
L_0892A4FC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A348;
      }
      goto L_0892A504;
    }
L_0892A504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B00C;
      }
      goto L_0892A50C;
    }
L_0892A50C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A6D8;
      }
      goto L_0892A514;
    }
L_0892A514:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A5F0;
      }
      goto L_0892A51C;
    }
L_0892A51C:
    ctx.set_gpr(1, ctx.gpr[20] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A5A4;
      }
      goto L_0892A528;
    }
L_0892A528:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A56C;
      }
      goto L_0892A530;
    }
L_0892A530:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A564u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A564u) goto L_0892A564;
    return;
L_0892A564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A5F0;
      }
      goto L_0892A56C;
    }
L_0892A56C:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0892A594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A594u) goto L_0892A594;
    return;
L_0892A594:
    ctx.set_gpr(31, 0x0892A59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A59Cu) goto L_0892A59C;
    return;
L_0892A59C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A5F0;
      }
      goto L_0892A5A4;
    }
L_0892A5A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A5D4;
      }
      goto L_0892A5AC;
    }
L_0892A5AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A5CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A5CCu) goto L_0892A5CC;
    return;
L_0892A5CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A5F0;
      }
      goto L_0892A5D4;
    }
L_0892A5D4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0892A5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A5E8u) goto L_0892A5E8;
    return;
L_0892A5E8:
    ctx.set_gpr(31, 0x0892A5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A5F0u) goto L_0892A5F0;
    return;
L_0892A5F0:
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A690;
      }
      goto L_0892A5FC;
    }
L_0892A5FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A634;
      }
      goto L_0892A604;
    }
L_0892A604:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] << 8u);
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11404));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A62Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A62Cu) goto L_0892A62C;
    return;
L_0892A62C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A658;
      }
      goto L_0892A634;
    }
L_0892A634:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] << 8u);
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11404));
    ctx.set_gpr(31, 0x0892A650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A650u) goto L_0892A650;
    return;
L_0892A650:
    ctx.set_gpr(31, 0x0892A658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A658u) goto L_0892A658;
    return;
L_0892A658:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(1, 0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A68C;
      }
      goto L_0892A668;
    }
L_0892A668:
    ctx.set_gpr(1, ctx.gpr[16] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A680;
      }
      goto L_0892A674;
    }
L_0892A674:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A68C;
      }
      goto L_0892A680;
    }
L_0892A680:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A69C;
      }
      goto L_0892A68C;
    }
L_0892A68C:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_0892A690;
L_0892A690:
    ctx.set_gpr(2, ctx.gpr[30] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A5FC;
      }
      goto L_0892A69C;
    }
L_0892A69C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A6C4;
      }
      goto L_0892A6A4;
    }
L_0892A6A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A6BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A6BCu) goto L_0892A6BC;
    return;
L_0892A6BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A6D8;
      }
      goto L_0892A6C4;
    }
L_0892A6C4:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0892A6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A6D0u) goto L_0892A6D0;
    return;
L_0892A6D0:
    ctx.set_gpr(31, 0x0892A6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A6D8u) goto L_0892A6D8;
    return;
L_0892A6D8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A514;
      }
      goto L_0892A6E0;
    }
L_0892A6E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B00C;
      }
      goto L_0892A6E8;
    }
L_0892A6E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A8A4;
      }
      goto L_0892A6F0;
    }
L_0892A6F0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A7CC;
      }
      goto L_0892A6F8;
    }
L_0892A6F8:
    ctx.set_gpr(1, ctx.gpr[20] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A780;
      }
      goto L_0892A704;
    }
L_0892A704:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A748;
      }
      goto L_0892A70C;
    }
L_0892A70C:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A740u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A740u) goto L_0892A740;
    return;
L_0892A740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A7CC;
      }
      goto L_0892A748;
    }
L_0892A748:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0892A770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A770u) goto L_0892A770;
    return;
L_0892A770:
    ctx.set_gpr(31, 0x0892A778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A778u) goto L_0892A778;
    return;
L_0892A778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A7CC;
      }
      goto L_0892A780;
    }
L_0892A780:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A7B0;
      }
      goto L_0892A788;
    }
L_0892A788:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A7A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A7A8u) goto L_0892A7A8;
    return;
L_0892A7A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A7CC;
      }
      goto L_0892A7B0;
    }
L_0892A7B0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0892A7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A7C4u) goto L_0892A7C4;
    return;
L_0892A7C4:
    ctx.set_gpr(31, 0x0892A7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A7CCu) goto L_0892A7CC;
    return;
L_0892A7CC:
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A85C;
      }
      goto L_0892A7D8;
    }
L_0892A7D8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A808;
      }
      goto L_0892A7E0;
    }
L_0892A7E0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11396));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A800u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A800u) goto L_0892A800;
    return;
L_0892A800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A824;
      }
      goto L_0892A808;
    }
L_0892A808:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11396));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0892A81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A81Cu) goto L_0892A81C;
    return;
L_0892A81C:
    ctx.set_gpr(31, 0x0892A824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A824u) goto L_0892A824;
    return;
L_0892A824:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(1, 0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A858;
      }
      goto L_0892A834;
    }
L_0892A834:
    ctx.set_gpr(1, ctx.gpr[16] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A84C;
      }
      goto L_0892A840;
    }
L_0892A840:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A858;
      }
      goto L_0892A84C;
    }
L_0892A84C:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A868;
      }
      goto L_0892A858;
    }
L_0892A858:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_0892A85C;
L_0892A85C:
    ctx.set_gpr(2, ctx.gpr[30] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A7D8;
      }
      goto L_0892A868;
    }
L_0892A868:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A890;
      }
      goto L_0892A870;
    }
L_0892A870:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A888u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A888u) goto L_0892A888;
    return;
L_0892A888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A8A4;
      }
      goto L_0892A890;
    }
L_0892A890:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0892A89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A89Cu) goto L_0892A89C;
    return;
L_0892A89C:
    ctx.set_gpr(31, 0x0892A8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A8A4u) goto L_0892A8A4;
    return;
L_0892A8A4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A6F0;
      }
      goto L_0892A8AC;
    }
L_0892A8AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B00C;
      }
      goto L_0892A8B4;
    }
L_0892A8B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AA78;
      }
      goto L_0892A8BC;
    }
L_0892A8BC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A998;
      }
      goto L_0892A8C4;
    }
L_0892A8C4:
    ctx.set_gpr(1, ctx.gpr[20] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A94C;
      }
      goto L_0892A8D0;
    }
L_0892A8D0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A914;
      }
      goto L_0892A8D8;
    }
L_0892A8D8:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A90Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A90Cu) goto L_0892A90C;
    return;
L_0892A90C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A998;
      }
      goto L_0892A914;
    }
L_0892A914:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0892A93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A93Cu) goto L_0892A93C;
    return;
L_0892A93C:
    ctx.set_gpr(31, 0x0892A944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A944u) goto L_0892A944;
    return;
L_0892A944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A998;
      }
      goto L_0892A94C;
    }
L_0892A94C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A97C;
      }
      goto L_0892A954;
    }
L_0892A954:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A974u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A974u) goto L_0892A974;
    return;
L_0892A974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A998;
      }
      goto L_0892A97C;
    }
L_0892A97C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0892A990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A990u) goto L_0892A990;
    return;
L_0892A990:
    ctx.set_gpr(31, 0x0892A998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A998u) goto L_0892A998;
    return;
L_0892A998:
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AA30;
      }
      goto L_0892A9A4;
    }
L_0892A9A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A9D8;
      }
      goto L_0892A9AC;
    }
L_0892A9AC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11388));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892A9D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A9D0u) goto L_0892A9D0;
    return;
L_0892A9D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A9F8;
      }
      goto L_0892A9D8;
    }
L_0892A9D8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11388));
    ctx.set_gpr(31, 0x0892A9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892A9F0u) goto L_0892A9F0;
    return;
L_0892A9F0:
    ctx.set_gpr(31, 0x0892A9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892A9F8u) goto L_0892A9F8;
    return;
L_0892A9F8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(1, 0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AA2C;
      }
      goto L_0892AA08;
    }
L_0892AA08:
    ctx.set_gpr(1, ctx.gpr[16] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AA20;
      }
      goto L_0892AA14;
    }
L_0892AA14:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AA2C;
      }
      goto L_0892AA20;
    }
L_0892AA20:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AA3C;
      }
      goto L_0892AA2C;
    }
L_0892AA2C:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_0892AA30;
L_0892AA30:
    ctx.set_gpr(2, ctx.gpr[30] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A9A4;
      }
      goto L_0892AA3C;
    }
L_0892AA3C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AA64;
      }
      goto L_0892AA44;
    }
L_0892AA44:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892AA5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AA5Cu) goto L_0892AA5C;
    return;
L_0892AA5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AA78;
      }
      goto L_0892AA64;
    }
L_0892AA64:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0892AA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892AA70u) goto L_0892AA70;
    return;
L_0892AA70:
    ctx.set_gpr(31, 0x0892AA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892AA78u) goto L_0892AA78;
    return;
L_0892AA78:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A8BC;
      }
      goto L_0892AA80;
    }
L_0892AA80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B00C;
      }
      goto L_0892AA88;
    }
L_0892AA88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AC4C;
      }
      goto L_0892AA90;
    }
L_0892AA90:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AB6C;
      }
      goto L_0892AA98;
    }
L_0892AA98:
    ctx.set_gpr(1, ctx.gpr[20] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AB20;
      }
      goto L_0892AAA4;
    }
L_0892AAA4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AAE8;
      }
      goto L_0892AAAC;
    }
L_0892AAAC:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892AAE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AAE0u) goto L_0892AAE0;
    return;
L_0892AAE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AB6C;
      }
      goto L_0892AAE8;
    }
L_0892AAE8:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0892AB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892AB10u) goto L_0892AB10;
    return;
L_0892AB10:
    ctx.set_gpr(31, 0x0892AB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892AB18u) goto L_0892AB18;
    return;
L_0892AB18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AB6C;
      }
      goto L_0892AB20;
    }
L_0892AB20:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AB50;
      }
      goto L_0892AB28;
    }
L_0892AB28:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892AB48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AB48u) goto L_0892AB48;
    return;
L_0892AB48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AB6C;
      }
      goto L_0892AB50;
    }
L_0892AB50:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0892AB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892AB64u) goto L_0892AB64;
    return;
L_0892AB64:
    ctx.set_gpr(31, 0x0892AB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892AB6Cu) goto L_0892AB6C;
    return;
L_0892AB6C:
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AC04;
      }
      goto L_0892AB78;
    }
L_0892AB78:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ABAC;
      }
      goto L_0892AB80;
    }
L_0892AB80:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11380));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892ABA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892ABA4u) goto L_0892ABA4;
    return;
L_0892ABA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ABCC;
      }
      goto L_0892ABAC;
    }
L_0892ABAC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11380));
    ctx.set_gpr(31, 0x0892ABC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892ABC4u) goto L_0892ABC4;
    return;
L_0892ABC4:
    ctx.set_gpr(31, 0x0892ABCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892ABCCu) goto L_0892ABCC;
    return;
L_0892ABCC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(1, 0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AC00;
      }
      goto L_0892ABDC;
    }
L_0892ABDC:
    ctx.set_gpr(1, ctx.gpr[16] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892ABF4;
      }
      goto L_0892ABE8;
    }
L_0892ABE8:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AC00;
      }
      goto L_0892ABF4;
    }
L_0892ABF4:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AC10;
      }
      goto L_0892AC00;
    }
L_0892AC00:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_0892AC04;
L_0892AC04:
    ctx.set_gpr(2, ctx.gpr[30] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AB78;
      }
      goto L_0892AC10;
    }
L_0892AC10:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AC38;
      }
      goto L_0892AC18;
    }
L_0892AC18:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892AC30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AC30u) goto L_0892AC30;
    return;
L_0892AC30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AC4C;
      }
      goto L_0892AC38;
    }
L_0892AC38:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0892AC44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892AC44u) goto L_0892AC44;
    return;
L_0892AC44:
    ctx.set_gpr(31, 0x0892AC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892AC4Cu) goto L_0892AC4C;
    return;
L_0892AC4C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AA90;
      }
      goto L_0892AC54;
    }
L_0892AC54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B00C;
      }
      goto L_0892AC5C;
    }
L_0892AC5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AE30;
      }
      goto L_0892AC64;
    }
L_0892AC64:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD40;
      }
      goto L_0892AC6C;
    }
L_0892AC6C:
    ctx.set_gpr(1, ctx.gpr[20] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ACF4;
      }
      goto L_0892AC78;
    }
L_0892AC78:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ACBC;
      }
      goto L_0892AC80;
    }
L_0892AC80:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892ACB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892ACB4u) goto L_0892ACB4;
    return;
L_0892ACB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD40;
      }
      goto L_0892ACBC;
    }
L_0892ACBC:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0892ACE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892ACE4u) goto L_0892ACE4;
    return;
L_0892ACE4:
    ctx.set_gpr(31, 0x0892ACECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892ACECu) goto L_0892ACEC;
    return;
L_0892ACEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD40;
      }
      goto L_0892ACF4;
    }
L_0892ACF4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD24;
      }
      goto L_0892ACFC;
    }
L_0892ACFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892AD1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AD1Cu) goto L_0892AD1C;
    return;
L_0892AD1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD40;
      }
      goto L_0892AD24;
    }
L_0892AD24:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0892AD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892AD38u) goto L_0892AD38;
    return;
L_0892AD38:
    ctx.set_gpr(31, 0x0892AD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892AD40u) goto L_0892AD40;
    return;
L_0892AD40:
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ADE8;
      }
      goto L_0892AD4C;
    }
L_0892AD4C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD88;
      }
      goto L_0892AD54;
    }
L_0892AD54:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[2] << 8u);
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11372));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892AD80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AD80u) goto L_0892AD80;
    return;
L_0892AD80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ADB0;
      }
      goto L_0892AD88;
    }
L_0892AD88:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[2] << 8u);
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11372));
    ctx.set_gpr(31, 0x0892ADA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892ADA8u) goto L_0892ADA8;
    return;
L_0892ADA8:
    ctx.set_gpr(31, 0x0892ADB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892ADB0u) goto L_0892ADB0;
    return;
L_0892ADB0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(1, 0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892ADE4;
      }
      goto L_0892ADC0;
    }
L_0892ADC0:
    ctx.set_gpr(1, ctx.gpr[16] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892ADD8;
      }
      goto L_0892ADCC;
    }
L_0892ADCC:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892ADE4;
      }
      goto L_0892ADD8;
    }
L_0892ADD8:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ADF4;
      }
      goto L_0892ADE4;
    }
L_0892ADE4:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_0892ADE8;
L_0892ADE8:
    ctx.set_gpr(2, ctx.gpr[30] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD4C;
      }
      goto L_0892ADF4;
    }
L_0892ADF4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AE1C;
      }
      goto L_0892ADFC;
    }
L_0892ADFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892AE14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AE14u) goto L_0892AE14;
    return;
L_0892AE14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AE30;
      }
      goto L_0892AE1C;
    }
L_0892AE1C:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0892AE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892AE28u) goto L_0892AE28;
    return;
L_0892AE28:
    ctx.set_gpr(31, 0x0892AE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892AE30u) goto L_0892AE30;
    return;
L_0892AE30:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AC64;
      }
      goto L_0892AE38;
    }
L_0892AE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B00C;
      }
      goto L_0892AE40;
    }
L_0892AE40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B004;
      }
      goto L_0892AE48;
    }
L_0892AE48:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF24;
      }
      goto L_0892AE50;
    }
L_0892AE50:
    ctx.set_gpr(1, ctx.gpr[20] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AED8;
      }
      goto L_0892AE5C;
    }
L_0892AE5C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AEA0;
      }
      goto L_0892AE64;
    }
L_0892AE64:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892AE98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AE98u) goto L_0892AE98;
    return;
L_0892AE98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF24;
      }
      goto L_0892AEA0;
    }
L_0892AEA0:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[19] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0892AEC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892AEC8u) goto L_0892AEC8;
    return;
L_0892AEC8:
    ctx.set_gpr(31, 0x0892AED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892AED0u) goto L_0892AED0;
    return;
L_0892AED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF24;
      }
      goto L_0892AED8;
    }
L_0892AED8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF08;
      }
      goto L_0892AEE0;
    }
L_0892AEE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892AF00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AF00u) goto L_0892AF00;
    return;
L_0892AF00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF24;
      }
      goto L_0892AF08;
    }
L_0892AF08:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0892AF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892AF1Cu) goto L_0892AF1C;
    return;
L_0892AF1C:
    ctx.set_gpr(31, 0x0892AF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892AF24u) goto L_0892AF24;
    return;
L_0892AF24:
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AFBC;
      }
      goto L_0892AF30;
    }
L_0892AF30:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF64;
      }
      goto L_0892AF38;
    }
L_0892AF38:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11364));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892AF5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AF5Cu) goto L_0892AF5C;
    return;
L_0892AF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF84;
      }
      goto L_0892AF64;
    }
L_0892AF64:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11364));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0892AF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892AF7Cu) goto L_0892AF7C;
    return;
L_0892AF7C:
    ctx.set_gpr(31, 0x0892AF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892AF84u) goto L_0892AF84;
    return;
L_0892AF84:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(1, 0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AFB8;
      }
      goto L_0892AF94;
    }
L_0892AF94:
    ctx.set_gpr(1, ctx.gpr[16] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AFAC;
      }
      goto L_0892AFA0;
    }
L_0892AFA0:
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AFB8;
      }
      goto L_0892AFAC;
    }
L_0892AFAC:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AFC8;
      }
      goto L_0892AFB8;
    }
L_0892AFB8:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_0892AFBC;
L_0892AFBC:
    ctx.set_gpr(2, ctx.gpr[30] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AF30;
      }
      goto L_0892AFC8;
    }
L_0892AFC8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AFF0;
      }
      goto L_0892AFD0;
    }
L_0892AFD0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892AFE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AFE8u) goto L_0892AFE8;
    return;
L_0892AFE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B004;
      }
      goto L_0892AFF0;
    }
L_0892AFF0:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(31, 0x0892AFFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0892AFFCu) goto L_0892AFFC;
    return;
L_0892AFFC:
    ctx.set_gpr(31, 0x0892B004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0892B004u) goto L_0892B004;
    return;
L_0892B004:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892AE48;
      }
      goto L_0892B00C;
    }
L_0892B00C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B050;
      }
      goto L_0892B014;
    }
L_0892B014:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892B028u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892B028u) goto L_0892B028;
    return;
L_0892B028:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B050;
      }
      goto L_0892B044;
    }
L_0892B044:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0892B050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0892B050u) goto L_0892B050;
    return;
L_0892B050:
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
L_0892B084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0AC;
      }
      goto L_0892B0A4;
    }
L_0892B0A4:
    ctx.set_gpr(31, 0x0892B0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 902u, 0x089834ECu>(ctx, &aot_mem) && ctx.pc == 0x0892B0ACu) goto L_0892B0AC;
    return;
L_0892B0AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892B0BC;
    }
L_0892B0BC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892B0D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892B0D0u) goto L_0892B0D0;
    return;
L_0892B0D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0E4;
      }
      goto L_0892B0D8;
    }
L_0892B0D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892B0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 487u, 0x0881201Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B0E4u) goto L_0892B0E4;
    return;
L_0892B0E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B0F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B104:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B148;
      }
      goto L_0892B13C;
    }
L_0892B13C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0892B148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B148u) goto L_0892B148;
    return;
L_0892B148:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892B184;
      }
      goto L_0892B15C;
    }
L_0892B15C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B178;
      }
      goto L_0892B16C;
    }
L_0892B16C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B184;
      }
      goto L_0892B178;
    }
L_0892B178:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0892B184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B184u) goto L_0892B184;
    return;
L_0892B184:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892B198u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892B198u) goto L_0892B198;
    return;
L_0892B198:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B1AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892B1D8;
      }
      goto L_0892B1CC;
    }
L_0892B1CC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B1E8;
      }
      goto L_0892B1D8;
    }
L_0892B1D8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0892B1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B1E8u) goto L_0892B1E8;
    return;
L_0892B1E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_0892B208;
      }
      goto L_0892B1F8;
    }
L_0892B1F8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0892B208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B208u) goto L_0892B208;
    return;
L_0892B208:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B224:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B234:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0892B250;
      }
      goto L_0892B248;
    }
L_0892B248:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_0892B250;
L_0892B250:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B27C;
      }
      goto L_0892B264;
    }
L_0892B264:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11356)));
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0892B27C;
L_0892B27C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B264;
      }
      goto L_0892B288;
    }
L_0892B288:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B2AC;
      }
      goto L_0892B29C;
    }
L_0892B29C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8));
    goto L_0892B2AC;
L_0892B2AC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B29C;
      }
      goto L_0892B2B8;
    }
L_0892B2B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B2C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B2CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0892B348;
      }
      goto L_0892B30C;
    }
L_0892B30C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892B330;
      }
      goto L_0892B31C;
    }
L_0892B31C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B428;
      }
      goto L_0892B330;
    }
L_0892B330:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892B348;
      }
      goto L_0892B33C;
    }
L_0892B33C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B428;
      }
      goto L_0892B348;
    }
L_0892B348:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892B360u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892B360u) goto L_0892B360;
    return;
L_0892B360:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0892B37C;
      }
      goto L_0892B374;
    }
L_0892B374:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_0892B37C;
L_0892B37C:
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(9, ctx.gpr[4] + ctx.gpr[3]);
    goto L_0892B390;
L_0892B390:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0892B3E0;
      }
      goto L_0892B39C;
    }
L_0892B39C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892B3C4;
      }
      goto L_0892B3AC;
    }
L_0892B3AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(7, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B424;
      }
      goto L_0892B3C4;
    }
L_0892B3C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892B3F0;
      }
      goto L_0892B3D0;
    }
L_0892B3D0:
    ctx.set_gpr(7, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B424;
      }
      goto L_0892B3E0;
    }
L_0892B3E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892B424;
      }
      goto L_0892B3F0;
    }
L_0892B3F0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B410;
      }
      goto L_0892B400;
    }
L_0892B400:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B414;
      }
      goto L_0892B410;
    }
L_0892B410:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8));
    goto L_0892B414;
L_0892B414:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B390;
      }
      goto L_0892B424;
    }
L_0892B424:
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    goto L_0892B428;
L_0892B428:
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
L_0892B444:
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
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0892B490;
      }
      goto L_0892B488;
    }
L_0892B488:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_0892B490;
L_0892B490:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0892B4A4;
      }
      goto L_0892B49C;
    }
L_0892B49C:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_0892B4A4;
L_0892B4A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5B0;
      }
      goto L_0892B4AC;
    }
L_0892B4AC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892B4C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892B4C4u) goto L_0892B4C4;
    return;
L_0892B4C4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    goto L_0892B4D4;
L_0892B4D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0892B528;
      }
      goto L_0892B4E0;
    }
L_0892B4E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892B4FC;
      }
      goto L_0892B4F0;
    }
L_0892B4F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892B510;
      }
      goto L_0892B4FC;
    }
L_0892B4FC:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5B4;
      }
      goto L_0892B510;
    }
L_0892B510:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0892B57C;
      }
      goto L_0892B518;
    }
L_0892B518:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5B4;
      }
      goto L_0892B528;
    }
L_0892B528:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B57C;
      }
      goto L_0892B530;
    }
L_0892B530:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B570;
      }
      goto L_0892B550;
    }
L_0892B550:
    ctx.set_gpr(5, ctx.gpr[17] << 1u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892B568u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892B568u) goto L_0892B568;
    return;
L_0892B568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B574;
      }
      goto L_0892B570;
    }
L_0892B570:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892B574;
L_0892B574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5B4;
      }
      goto L_0892B57C;
    }
L_0892B57C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B59C;
      }
      goto L_0892B58C;
    }
L_0892B58C:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5A0;
      }
      goto L_0892B59C;
    }
L_0892B59C:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_0892B5A0;
L_0892B5A0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B4D4;
      }
      goto L_0892B5B0;
    }
L_0892B5B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0892B5B4;
L_0892B5B4:
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
L_0892B5DC:
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
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0892B624;
      }
      goto L_0892B61C;
    }
L_0892B61C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_0892B624;
L_0892B624:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B750;
      }
      goto L_0892B62C;
    }
L_0892B62C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892B644u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892B644u) goto L_0892B644;
    return;
L_0892B644:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    goto L_0892B654;
L_0892B654:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B678;
      }
      goto L_0892B664;
    }
L_0892B664:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B67C;
      }
      goto L_0892B678;
    }
L_0892B678:
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_0892B67C;
L_0892B67C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0892B714;
      }
      goto L_0892B688;
    }
L_0892B688:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0892B6D0;
      }
      goto L_0892B694;
    }
L_0892B694:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892B6C0;
      }
      goto L_0892B6B4;
    }
L_0892B6B4:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B750;
      }
      goto L_0892B6C0;
    }
L_0892B6C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B750;
      }
      goto L_0892B6D0;
    }
L_0892B6D0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892B730;
      }
      goto L_0892B6DC;
    }
L_0892B6DC:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892B704;
      }
      goto L_0892B6F8;
    }
L_0892B6F8:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B730;
      }
      goto L_0892B704;
    }
L_0892B704:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B730;
      }
      goto L_0892B714;
    }
L_0892B714:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0892B730;
      }
      goto L_0892B724;
    }
L_0892B724:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B754;
      }
      goto L_0892B730;
    }
L_0892B730:
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B654;
      }
      goto L_0892B744;
    }
L_0892B744:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B754;
      }
      goto L_0892B750;
    }
L_0892B750:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892B754;
L_0892B754:
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
L_0892B778:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B794;
      }
      goto L_0892B784;
    }
L_0892B784:
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B798;
      }
      goto L_0892B794;
    }
L_0892B794:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892B798;
L_0892B798:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B7A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B7D8;
      }
      goto L_0892B7CC;
    }
L_0892B7CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0892B7D8;
L_0892B7D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0892B7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B7F8u) goto L_0892B7F8;
    return;
L_0892B7F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892B804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 630u, 0x088F7540u>(ctx, &aot_mem) && ctx.pc == 0x0892B804u) goto L_0892B804;
    return;
L_0892B804:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892B814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B814u) goto L_0892B814;
    return;
L_0892B814:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B83C;
      }
      goto L_0892B830;
    }
L_0892B830:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0892B83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B83Cu) goto L_0892B83C;
    return;
L_0892B83C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B86C;
      }
      goto L_0892B84C;
    }
L_0892B84C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B860;
      }
      goto L_0892B858;
    }
L_0892B858:
    ctx.set_gpr(31, 0x0892B860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892B860u) goto L_0892B860;
    return;
L_0892B860:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B940;
      }
      goto L_0892B86C;
    }
L_0892B86C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892B8A4;
      }
      goto L_0892B87C;
    }
L_0892B87C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B898;
      }
      goto L_0892B88C;
    }
L_0892B88C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B8A4;
      }
      goto L_0892B898;
    }
L_0892B898:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0892B8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B8A4u) goto L_0892B8A4;
    return;
L_0892B8A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B8D4;
      }
      goto L_0892B8BC;
    }
L_0892B8BC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11352)));
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0892B8D4;
L_0892B8D4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B8BC;
      }
      goto L_0892B8E0;
    }
L_0892B8E0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B91C;
      }
      goto L_0892B8F0;
    }
L_0892B8F0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B914;
      }
      goto L_0892B8FC;
    }
L_0892B8FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892B914u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892B914u) goto L_0892B914;
    return;
L_0892B914:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_0892B91C;
L_0892B91C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B8F0;
      }
      goto L_0892B928;
    }
L_0892B928:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B93C;
      }
      goto L_0892B934;
    }
L_0892B934:
    ctx.set_gpr(31, 0x0892B93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892B93Cu) goto L_0892B93C;
    return;
L_0892B93C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892B940;
L_0892B940:
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
L_0892B960:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BA0C;
      }
      goto L_0892B994;
    }
L_0892B994:
    ctx.set_gpr(31, 0x0892B99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x0892B99Cu) goto L_0892B99C;
    return;
L_0892B99C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BA00;
      }
      goto L_0892B9B0;
    }
L_0892B9B0:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892B9D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892B9D0u) goto L_0892B9D0;
    return;
L_0892B9D0:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892B9E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892B9E8u) goto L_0892B9E8;
    return;
L_0892B9E8:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892B9FC;
      }
      goto L_0892B9F0;
    }
L_0892B9F0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BA0C;
      }
      goto L_0892B9FC;
    }
L_0892B9FC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0892BA00;
L_0892BA00:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B9B0;
      }
      goto L_0892BA0C;
    }
L_0892BA0C:
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
L_0892BA34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x0892BA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892BA50u) goto L_0892BA50;
    return;
L_0892BA50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BA60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(284)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BAA0;
      }
      goto L_0892BA94;
    }
L_0892BA94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0892BAA0;
L_0892BAA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892BAC8;
      }
      goto L_0892BAAC;
    }
L_0892BAAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB34;
      }
      goto L_0892BAC8;
    }
L_0892BAC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB34;
      }
      goto L_0892BAD0;
    }
L_0892BAD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892BB34;
      }
      goto L_0892BADC;
    }
L_0892BADC:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB20;
      }
      goto L_0892BAF8;
    }
L_0892BAF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB14;
      }
      goto L_0892BB0C;
    }
L_0892BB0C:
    ctx.set_gpr(31, 0x0892BB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892BB14u) goto L_0892BB14;
    return;
L_0892BB14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BCA8;
      }
      goto L_0892BB20;
    }
L_0892BB20:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892BB30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BB30u) goto L_0892BB30;
    return;
L_0892BB30:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0892BB34;
L_0892BB34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892BB5C;
      }
      goto L_0892BB44;
    }
L_0892BB44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892BB5C;
      }
      goto L_0892BB50;
    }
L_0892BB50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0892BB68;
      }
      goto L_0892BB5C;
    }
L_0892BB5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB7C;
      }
      goto L_0892BB68;
    }
L_0892BB68:
    ctx.set_gpr(31, 0x0892BB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0892BB70u) goto L_0892BB70;
    return;
L_0892BB70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB7C;
      }
      goto L_0892BB78;
    }
L_0892BB78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    goto L_0892BB7C;
L_0892BB7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB98;
      }
      goto L_0892BB84;
    }
L_0892BB84:
    ctx.set_gpr(31, 0x0892BB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 221u, 0x0893CE2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892BB8Cu) goto L_0892BB8C;
    return;
L_0892BB8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0892BB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0892BB98u) goto L_0892BB98;
    return;
L_0892BB98:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC1C;
      }
      goto L_0892BBA4;
    }
L_0892BBA4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892BBBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BBBCu) goto L_0892BBBC;
    return;
L_0892BBBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC00;
      }
      goto L_0892BBC4;
    }
L_0892BBC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0892BBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 131u, 0x08910840u>(ctx, &aot_mem) && ctx.pc == 0x0892BBE0u) goto L_0892BBE0;
    return;
L_0892BBE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BBF4;
      }
      goto L_0892BBEC;
    }
L_0892BBEC:
    ctx.set_gpr(31, 0x0892BBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892BBF4u) goto L_0892BBF4;
    return;
L_0892BBF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BCA8;
      }
      goto L_0892BC00;
    }
L_0892BC00:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892BC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 131u, 0x08910840u>(ctx, &aot_mem) && ctx.pc == 0x0892BC14u) goto L_0892BC14;
    return;
L_0892BC14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC90;
      }
      goto L_0892BC1C;
    }
L_0892BC1C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892BC38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BC38u) goto L_0892BC38;
    return;
L_0892BC38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC7C;
      }
      goto L_0892BC40;
    }
L_0892BC40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0892BC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 131u, 0x08910840u>(ctx, &aot_mem) && ctx.pc == 0x0892BC5Cu) goto L_0892BC5C;
    return;
L_0892BC5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC70;
      }
      goto L_0892BC68;
    }
L_0892BC68:
    ctx.set_gpr(31, 0x0892BC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892BC70u) goto L_0892BC70;
    return;
L_0892BC70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BCA8;
      }
      goto L_0892BC7C;
    }
L_0892BC7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0892BC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 131u, 0x08910840u>(ctx, &aot_mem) && ctx.pc == 0x0892BC90u) goto L_0892BC90;
    return;
L_0892BC90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BCA4;
      }
      goto L_0892BC9C;
    }
L_0892BC9C:
    ctx.set_gpr(31, 0x0892BCA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0892BCA4u) goto L_0892BCA4;
    return;
L_0892BCA4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0892BCA8;
L_0892BCA8:
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
L_0892BCC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x0892BD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892BD44u) goto L_0892BD44;
    return;
L_0892BD44:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BD80;
      }
      goto L_0892BD54;
    }
L_0892BD54:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BD80;
      }
      goto L_0892BD60;
    }
L_0892BD60:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892BD80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BD80u) goto L_0892BD80;
    return;
L_0892BD80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF08;
      }
      goto L_0892BD9C;
    }
L_0892BD9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BDBC;
      }
      goto L_0892BDB4;
    }
L_0892BDB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BDC0;
      }
      goto L_0892BDBC;
    }
L_0892BDBC:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_0892BDC0;
L_0892BDC0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x0892BDD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892BDD4u) goto L_0892BDD4;
    return;
L_0892BDD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BE74;
      }
      goto L_0892BDDC;
    }
L_0892BDDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(23, ctx.gpr[3] - ctx.gpr[23]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BE04;
      }
      goto L_0892BDFC;
    }
L_0892BDFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BE08;
      }
      goto L_0892BE04;
    }
L_0892BE04:
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    goto L_0892BE08;
L_0892BE08:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BE5C;
      }
      goto L_0892BE14;
    }
L_0892BE14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[30] + ctx.gpr[19]);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892BE50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BE50u) goto L_0892BE50;
    return;
L_0892BE50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    goto L_0892BE5C;
L_0892BE5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BE14;
      }
      goto L_0892BE6C;
    }
L_0892BE6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BE88;
      }
      goto L_0892BE74;
    }
L_0892BE74:
    ctx.set_gpr(4, ctx.gpr[30] + ctx.gpr[19]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0892BE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0892BE88u) goto L_0892BE88;
    return;
L_0892BE88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(19, ctx.hi);
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF08;
      }
      goto L_0892BEB8;
    }
L_0892BEB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892BED8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BED8u) goto L_0892BED8;
    return;
L_0892BED8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(22, ctx.gpr[22] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(18, ctx.gpr[3] - ctx.gpr[22]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF00;
      }
      goto L_0892BEF8;
    }
L_0892BEF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF04;
      }
      goto L_0892BF00;
    }
L_0892BF00:
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    goto L_0892BF04;
L_0892BF04:
    ctx.set_gpr(20, ctx.gpr[18] + 0u);
    goto L_0892BF08;
L_0892BF08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BD9C;
      }
      goto L_0892BF1C;
    }
L_0892BF1C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BFFC;
      }
      goto L_0892BF24;
    }
L_0892BF24:
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(16, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[19]);
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF9C;
      }
      goto L_0892BF4C;
    }
L_0892BF4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892BF6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BF6Cu) goto L_0892BF6C;
    return;
L_0892BF6C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(22, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(18, ctx.gpr[2] - ctx.gpr[22]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF94;
      }
      goto L_0892BF8C;
    }
L_0892BF8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF98;
      }
      goto L_0892BF94;
    }
L_0892BF94:
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    goto L_0892BF98;
L_0892BF98:
    ctx.set_gpr(20, ctx.gpr[18] + 0u);
    goto L_0892BF9C;
L_0892BF9C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x0892BFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892BFB0u) goto L_0892BFB0;
    return;
L_0892BFB0:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BFEC;
      }
      goto L_0892BFC0;
    }
L_0892BFC0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BFEC;
      }
      goto L_0892BFCC;
    }
L_0892BFCC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0892BFECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BFECu) goto L_0892BFEC;
    return;
L_0892BFEC:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(308), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(312), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(300), ctx.gpr[20]);
    goto L_0892BFFC;
L_0892BFFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x0892C000u; return;
}

void recomp_unit_0073(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0073_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_73(Runtime &runtime) {
    runtime.register_generated_unit(73u, 0x08928000u, 16384u, &recomp_unit_0073, &recomp_unit_0073_entry);
    runtime.register_function(0x08928004u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928018u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928034u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928038u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892806Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928078u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928088u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892808Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928094u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928114u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928120u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928128u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928134u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928140u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928150u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928154u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928164u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892817Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928188u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892818Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928208u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928218u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928224u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928234u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892824Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928264u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928270u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928304u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892832Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928350u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892836Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928380u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928414u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928420u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892842Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892843Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928448u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928450u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892845Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928464u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928478u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892847Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928494u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928508u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928510u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892852Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928560u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928568u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928574u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928578u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928580u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928588u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928618u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928628u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928654u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892865Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892866Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928688u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928694u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928698u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089286A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089286C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089286D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089286ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928700u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892870Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928724u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892873Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928750u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892875Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892876Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928774u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928784u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928798u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892880Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928820u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928824u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928830u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892883Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892884Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928858u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928860u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892886Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928874u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928888u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928908u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928910u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892891Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928928u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928944u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928950u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928964u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928974u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928980u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928ABCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BCCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929020u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929030u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929040u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929068u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929088u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929098u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929104u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929110u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929120u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929130u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929150u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929174u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929184u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892919Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929208u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929224u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929230u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892923Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892925Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892927Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929280u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929294u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929300u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892930Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929318u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892932Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929338u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929340u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929354u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929364u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892936Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929378u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929390u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892940Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892941Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892942Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929434u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892944Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929458u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929464u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929470u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892947Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929488u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929494u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929510u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929518u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929534u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929538u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929540u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892955Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929568u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929588u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929624u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929660u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892966Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892967Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929688u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929694u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929700u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929718u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892972Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929750u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929758u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929764u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929768u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929770u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929784u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929790u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929804u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929808u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892980Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929814u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929838u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929844u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892985Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929864u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929884u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892989Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929900u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892990Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929940u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892994Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929958u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929960u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929984u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929990u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892999Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929ABCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929EACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929EBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929ED4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929EDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929EE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929EFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A004u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A014u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A024u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A03Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A054u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A068u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A100u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A10Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A12Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A134u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A158u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A174u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A17Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A184u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A190u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A198u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A204u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A20Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A214u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A234u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A23Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A250u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A258u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A264u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A26Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A28Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A294u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A314u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A31Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A328u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A330u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A338u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A340u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A348u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A350u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A35Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A364u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A398u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A400u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A408u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A41Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A424u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A430u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A438u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A458u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A460u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A474u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A47Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A48Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A498u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A504u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A50Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A514u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A51Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A528u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A530u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A564u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A56Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A594u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A59Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A604u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A62Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A634u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A650u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A658u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A668u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A674u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A680u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A68Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A690u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A69Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A704u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A70Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A740u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A748u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A770u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A778u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A780u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A788u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A800u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A808u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A81Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A824u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A834u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A840u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A84Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A858u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A85Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A868u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A870u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A888u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A890u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A89Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A90Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A914u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A93Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A944u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A94Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A954u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A974u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A97Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A990u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A998u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABCCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ACFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADCCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AEA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AEC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AED0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AED8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AEE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B004u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B00Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B014u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B028u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B044u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B050u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B084u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B104u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B110u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B13Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B148u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B15Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B16Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B178u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B184u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B198u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B1ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B1CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B1D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B1E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B1F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B208u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B224u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B234u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B248u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B250u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B264u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B27Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B288u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B29Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B30Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B31Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B330u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B33Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B348u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B360u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B374u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B37Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B390u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B39Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B400u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B410u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B414u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B424u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B428u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B444u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B488u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B490u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B49Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B510u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B518u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B528u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B530u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B550u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B568u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B570u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B574u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B57Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B58Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B59Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B61Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B624u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B62Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B644u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B654u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B664u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B678u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B67Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B688u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B694u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B704u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B714u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B724u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B730u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B744u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B750u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B754u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B778u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B784u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B794u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B798u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B804u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B814u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B830u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B83Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B84Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B858u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B860u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B86Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B87Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B88Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B898u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B914u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B91Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B928u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B934u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B93Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B940u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B960u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B994u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B99Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BADCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BCA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BCA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BCC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BED8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFCCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFFCu, &recomp_unit_0073, "recomp_unit_0073");
}
} // namespace psprecomp
