#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0145[4094] = {
    1, 0, 0, 2, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 54, 0, 55, 0, 0, 56,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 86, 0, 0, 87, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91,
    0, 92, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0,
    0, 0, 107, 108, 0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0,
    116, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 136, 137, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0,
    153, 0, 0, 0, 154, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 163, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171,
    0, 0, 0, 0, 0, 0, 172, 0, 173, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 182, 0, 0, 183, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 189, 190,
    0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 194, 195, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 198, 199, 0,
    0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 202, 203, 0, 0, 204, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 209, 210, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    222, 0, 0, 223, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 228, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 231, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 236, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242,
    0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 250, 0,
    0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 256, 0, 0, 0, 257, 0, 0,
    0, 0, 0, 258, 0, 0, 259, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0, 0, 266, 267, 0, 0, 0, 0, 268,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273,
    0, 0, 274, 275, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    281, 282, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0,
    288, 0, 0, 289, 0, 0, 290, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 295, 296, 0, 0, 297, 298, 0, 0,
    0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 304, 0,
    0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 323, 0,
    0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0,
    0, 339, 0, 0, 0, 340, 0, 0, 341, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 346,
    0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0,
    0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 357, 0, 0, 358, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 365, 0,
    366, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 373, 0, 0, 374, 0,
    375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 379, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 0, 390, 0, 0, 391, 0,
    392, 0, 0, 393, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399,
    0, 0, 400, 0, 0, 401, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 405, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0,
    409, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0,
    0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0,
    0, 0, 0, 422, 423, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 427, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0,
    431, 0, 432, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 437, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 440, 441, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0,
    447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0,
    0, 0, 456, 457, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 463, 464, 0, 0,
    0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0,
    473, 0, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 481, 0, 482, 0, 0,
    0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    488, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 496, 0, 497, 0,
    0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 501, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0,
    0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 509, 0, 0, 510, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 514, 0, 515, 0, 0, 0,
    0, 0, 516, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 520, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 524, 0,
    0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 531, 0, 532, 0, 0, 533,
    0, 0, 534, 0, 535, 0, 0, 536, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 540, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 543,
    0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 546, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 552, 0,
    0, 553, 0, 554, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 561, 0, 562, 0, 0,
    563, 0, 0, 564, 0, 565, 0, 0, 566, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 570, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0,
    573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0,
    581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 584, 0, 585, 0, 0, 586, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 590, 0, 591,
    0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 596, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0,
    0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 603, 0, 604, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 0, 0, 607, 608, 0, 609, 0,
    0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 618, 0,
    619, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 624, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 627,
    628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634,
    0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 640, 0, 641, 0, 0, 0,
    0, 0, 642, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 647, 0, 648, 0, 0, 649, 0, 0, 0, 650, 0, 0,
    0, 0, 0, 651, 652, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 655, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 658, 0, 0, 659, 0, 0, 0, 660, 0, 661, 0, 0, 0, 662, 0, 0, 663, 0, 0, 664, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0,
    0, 0, 667, 0, 668, 0, 0, 0, 669, 0, 0, 670, 0, 0, 671, 0, 672, 0, 0, 673, 0, 0, 0, 674, 0, 0, 675, 0, 0, 676, 0, 677,
    678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 682, 0, 0,
    0, 683, 0, 684, 0, 0, 685, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 690, 0, 0, 691, 0, 0,
    0, 0, 692, 0, 693, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0,
    699, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0,
    0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0, 712, 0, 0, 713, 0, 0, 714, 0, 0, 0, 715, 0, 0,
    716, 0, 717, 0, 0, 718, 0, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 722, 0, 0, 0, 723, 0, 0, 724, 0, 0, 725, 0,
    0, 0, 0, 0, 726, 0, 0, 727, 0, 728, 0, 0, 0, 0, 729, 0, 0, 730, 0, 731, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0,
    0, 737, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 743, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 747, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 750, 0, 0, 751, 0, 752,
    0, 0, 753, 0, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0,
    0, 0, 759, 0, 760, 0, 761, 0, 0, 762, 0, 0, 0, 0, 763, 0, 0, 0, 764, 765, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 768,
    0, 769, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 772, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0, 775, 0, 0, 776, 0, 777, 0, 0, 778,
    0, 0, 779, 0, 780, 0, 0, 0, 781, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 785, 0, 0, 0,
    0, 0, 786, 0, 787, 0, 0, 0, 0, 0, 788, 0, 789, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 794, 0,
    0, 795, 0, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 799, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0,
    0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 808, 0, 0,
    0, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 813, 0,
    814, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 818, 0, 819, 0, 0, 820, 0,
    821, 0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 824, 0, 825, 0, 0, 0, 0, 0, 826, 0, 0, 827, 0, 0, 828, 0, 829, 0, 0, 830, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 833, 0, 0, 0, 834,
    0, 0, 0, 0, 0, 835, 836, 0, 837, 0, 0, 0, 0, 0, 838, 0, 0, 839, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0, 0,
    0, 842, 0, 0, 0, 0, 0, 843, 844, 0, 845, 0, 0, 0, 0, 0, 846, 0, 0, 847, 0, 0, 0, 0, 0, 0, 848, 849, 0, 0, 0, 850,
    0, 0, 0, 0, 851, 0, 0, 852, 0, 853, 0, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 857, 0, 0, 858, 0, 0, 859, 0, 860, 0, 0, 861, 0, 862, 0, 0, 863, 0, 864, 0, 0, 0, 865, 0, 0, 0, 0, 0, 866, 867,
    0, 868, 0, 0, 0, 0, 0, 869, 0, 0, 870, 0, 0, 871, 0, 872, 0, 0, 873, 0, 0, 874, 0, 0, 875, 0, 876, 0, 877, 0, 0, 878,
    0, 879, 0, 0, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 883, 0, 884,
    0, 0, 0, 0, 0, 0, 885, 0, 886, 0, 0, 887, 0, 888, 0, 0, 0, 0, 0, 0, 0, 889, 0, 0, 890, 0, 0, 891, 0, 0, 892, 0,
    893, 0, 0, 894, 0, 895, 0, 896, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 898, 0, 0, 899, 0, 900, 0, 0, 0, 901, 0, 0, 0, 0,
    0, 902, 903, 0, 904, 0, 0, 0, 0, 0, 905, 0, 0, 906, 0, 0, 907, 0, 908, 0, 0, 909, 0, 0, 910, 0, 911, 0, 0, 912, 0, 913,
    0, 0, 0, 914, 0, 0, 0, 0, 0, 915, 916, 0, 917, 0, 0, 0, 0, 0, 918, 0, 0, 919, 0, 0, 920, 0, 921, 0, 0, 922, 0, 0,
    0, 0, 923, 0, 0, 924, 0, 925, 0, 926, 0, 0, 0, 0, 927, 0, 928, 0, 0, 0, 0, 929, 0, 0, 0, 0, 0, 930, 931, 0, 932, 0,
    0, 933, 0, 0, 0, 0, 934, 0, 0, 0, 935, 0, 0, 0, 0, 0, 936, 937, 0, 938, 0, 0, 0, 0, 0, 939, 0, 0, 940, 0, 941, 0,
    0, 0, 942, 0, 0, 0, 0, 0, 943, 944, 0, 945, 0, 0, 0, 0, 0, 946, 0, 0, 947, 0, 0, 948, 0, 949, 0, 0, 950, 0, 0, 0,
    0, 0, 951, 0, 952, 0, 0, 953, 0, 954, 0, 0, 0, 0, 0, 0, 0, 0, 955, 0, 956, 0, 0, 0, 0, 957, 0, 958, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 959, 0, 0, 0, 960, 0, 0, 0, 0, 0, 961, 0, 0, 0, 0, 0, 0, 962, 0, 0, 0, 0, 963, 0, 964,
};
void recomp_unit_0145_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A48000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0145[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A48000;
    case 2u: goto L_08A4800C;
    case 3u: goto L_08A48010;
    case 4u: goto L_08A4801C;
    case 5u: goto L_08A48028;
    case 6u: goto L_08A48034;
    case 7u: goto L_08A48040;
    case 8u: goto L_08A48048;
    case 9u: goto L_08A48050;
    case 10u: goto L_08A4805C;
    case 11u: goto L_08A480CC;
    case 12u: goto L_08A480EC;
    case 13u: goto L_08A480FC;
    case 14u: goto L_08A48110;
    case 15u: goto L_08A48124;
    case 16u: goto L_08A4813C;
    case 17u: goto L_08A48150;
    case 18u: goto L_08A4816C;
    case 19u: goto L_08A48180;
    case 20u: goto L_08A48194;
    case 21u: goto L_08A481B4;
    case 22u: goto L_08A481C0;
    case 23u: goto L_08A481C8;
    case 24u: goto L_08A481D4;
    case 25u: goto L_08A48214;
    case 26u: goto L_08A48230;
    case 27u: goto L_08A4823C;
    case 28u: goto L_08A48244;
    case 29u: goto L_08A48250;
    case 30u: goto L_08A48268;
    case 31u: goto L_08A48288;
    case 32u: goto L_08A48298;
    case 33u: goto L_08A482AC;
    case 34u: goto L_08A482C0;
    case 35u: goto L_08A482D4;
    case 36u: goto L_08A482F0;
    case 37u: goto L_08A48308;
    case 38u: goto L_08A48328;
    case 39u: goto L_08A48334;
    case 40u: goto L_08A4833C;
    case 41u: goto L_08A48348;
    case 42u: goto L_08A4834C;
    case 43u: goto L_08A48378;
    case 44u: goto L_08A483B0;
    case 45u: goto L_08A483CC;
    case 46u: goto L_08A483D4;
    case 47u: goto L_08A483F0;
    case 48u: goto L_08A4842C;
    case 49u: goto L_08A48430;
    case 50u: goto L_08A4843C;
    case 51u: goto L_08A48448;
    case 52u: goto L_08A48454;
    case 53u: goto L_08A48460;
    case 54u: goto L_08A48468;
    case 55u: goto L_08A48470;
    case 56u: goto L_08A4847C;
    case 57u: goto L_08A484EC;
    case 58u: goto L_08A4850C;
    case 59u: goto L_08A4851C;
    case 60u: goto L_08A48530;
    case 61u: goto L_08A48544;
    case 62u: goto L_08A4855C;
    case 63u: goto L_08A48570;
    case 64u: goto L_08A4858C;
    case 65u: goto L_08A485A0;
    case 66u: goto L_08A485B4;
    case 67u: goto L_08A485D4;
    case 68u: goto L_08A485E0;
    case 69u: goto L_08A485E8;
    case 70u: goto L_08A485F4;
    case 71u: goto L_08A48634;
    case 72u: goto L_08A48650;
    case 73u: goto L_08A4865C;
    case 74u: goto L_08A48664;
    case 75u: goto L_08A48670;
    case 76u: goto L_08A48688;
    case 77u: goto L_08A486A8;
    case 78u: goto L_08A486B8;
    case 79u: goto L_08A486CC;
    case 80u: goto L_08A486E0;
    case 81u: goto L_08A486F4;
    case 82u: goto L_08A48710;
    case 83u: goto L_08A48728;
    case 84u: goto L_08A48748;
    case 85u: goto L_08A48754;
    case 86u: goto L_08A4875C;
    case 87u: goto L_08A48768;
    case 88u: goto L_08A4876C;
    case 89u: goto L_08A48798;
    case 90u: goto L_08A487F0;
    case 91u: goto L_08A487FC;
    case 92u: goto L_08A48804;
    case 93u: goto L_08A48808;
    case 94u: goto L_08A4881C;
    case 95u: goto L_08A48848;
    case 96u: goto L_08A48858;
    case 97u: goto L_08A48870;
    case 98u: goto L_08A48884;
    case 99u: goto L_08A48894;
    case 100u: goto L_08A488A0;
    case 101u: goto L_08A488B0;
    case 102u: goto L_08A488B4;
    case 103u: goto L_08A488C8;
    case 104u: goto L_08A488DC;
    case 105u: goto L_08A488EC;
    case 106u: goto L_08A488F8;
    case 107u: goto L_08A48908;
    case 108u: goto L_08A4890C;
    case 109u: goto L_08A48914;
    case 110u: goto L_08A4891C;
    case 111u: goto L_08A48930;
    case 112u: goto L_08A48940;
    case 113u: goto L_08A48954;
    case 114u: goto L_08A48964;
    case 115u: goto L_08A48970;
    case 116u: goto L_08A48980;
    case 117u: goto L_08A48984;
    case 118u: goto L_08A4898C;
    case 119u: goto L_08A489C0;
    case 120u: goto L_08A489D8;
    case 121u: goto L_08A489EC;
    case 122u: goto L_08A489F4;
    case 123u: goto L_08A48A08;
    case 124u: goto L_08A48A1C;
    case 125u: goto L_08A48A34;
    case 126u: goto L_08A48A38;
    case 127u: goto L_08A48A44;
    case 128u: goto L_08A48A68;
    case 129u: goto L_08A48AA0;
    case 130u: goto L_08A48ABC;
    case 131u: goto L_08A48ACC;
    case 132u: goto L_08A48AD4;
    case 133u: goto L_08A48AE4;
    case 134u: goto L_08A48AF4;
    case 135u: goto L_08A48B00;
    case 136u: goto L_08A48B20;
    case 137u: goto L_08A48B24;
    case 138u: goto L_08A48B28;
    case 139u: goto L_08A48B34;
    case 140u: goto L_08A48B5C;
    case 141u: goto L_08A48B88;
    case 142u: goto L_08A48BAC;
    case 143u: goto L_08A48BB0;
    case 144u: goto L_08A48BBC;
    case 145u: goto L_08A48BC8;
    case 146u: goto L_08A48BD8;
    case 147u: goto L_08A48BF4;
    case 148u: goto L_08A48C30;
    case 149u: goto L_08A48C4C;
    case 150u: goto L_08A48C58;
    case 151u: goto L_08A48C64;
    case 152u: goto L_08A48C70;
    case 153u: goto L_08A48C80;
    case 154u: goto L_08A48C90;
    case 155u: goto L_08A48C94;
    case 156u: goto L_08A48CA0;
    case 157u: goto L_08A48CC4;
    case 158u: goto L_08A48CE8;
    case 159u: goto L_08A48CF8;
    case 160u: goto L_08A48D3C;
    case 161u: goto L_08A48D48;
    case 162u: goto L_08A48D70;
    case 163u: goto L_08A48D84;
    case 164u: goto L_08A48D8C;
    case 165u: goto L_08A48D98;
    case 166u: goto L_08A48DB4;
    case 167u: goto L_08A48DC4;
    case 168u: goto L_08A48DCC;
    case 169u: goto L_08A48DE0;
    case 170u: goto L_08A48DF4;
    case 171u: goto L_08A48DFC;
    case 172u: goto L_08A48E18;
    case 173u: goto L_08A48E20;
    case 174u: goto L_08A48E24;
    case 175u: goto L_08A48E30;
    case 176u: goto L_08A48E5C;
    case 177u: goto L_08A48E6C;
    case 178u: goto L_08A48E9C;
    case 179u: goto L_08A48EB8;
    case 180u: goto L_08A48ED8;
    case 181u: goto L_08A48F08;
    case 182u: goto L_08A48F14;
    case 183u: goto L_08A48F20;
    case 184u: goto L_08A48F24;
    case 185u: goto L_08A48F30;
    case 186u: goto L_08A48F4C;
    case 187u: goto L_08A48F5C;
    case 188u: goto L_08A48F74;
    case 189u: goto L_08A48F78;
    case 190u: goto L_08A48F7C;
    case 191u: goto L_08A48F88;
    case 192u: goto L_08A48FA0;
    case 193u: goto L_08A48FBC;
    case 194u: goto L_08A48FC0;
    case 195u: goto L_08A48FC4;
    case 196u: goto L_08A48FD0;
    case 197u: goto L_08A48FDC;
    case 198u: goto L_08A48FF4;
    case 199u: goto L_08A48FF8;
    case 200u: goto L_08A49004;
    case 201u: goto L_08A49010;
    case 202u: goto L_08A49028;
    case 203u: goto L_08A4902C;
    case 204u: goto L_08A49038;
    case 205u: goto L_08A4903C;
    case 206u: goto L_08A49048;
    case 207u: goto L_08A49074;
    case 208u: goto L_08A49090;
    case 209u: goto L_08A4909C;
    case 210u: goto L_08A490A0;
    case 211u: goto L_08A490B4;
    case 212u: goto L_08A490BC;
    case 213u: goto L_08A490C8;
    case 214u: goto L_08A490CC;
    case 215u: goto L_08A490E0;
    case 216u: goto L_08A4910C;
    case 217u: goto L_08A49118;
    case 218u: goto L_08A49130;
    case 219u: goto L_08A49138;
    case 220u: goto L_08A49158;
    case 221u: goto L_08A49170;
    case 222u: goto L_08A49180;
    case 223u: goto L_08A4918C;
    case 224u: goto L_08A49190;
    case 225u: goto L_08A491B0;
    case 226u: goto L_08A491D4;
    case 227u: goto L_08A491E0;
    case 228u: goto L_08A491E4;
    case 229u: goto L_08A491F0;
    case 230u: goto L_08A49218;
    case 231u: goto L_08A4921C;
    case 232u: goto L_08A49228;
    case 233u: goto L_08A49234;
    case 234u: goto L_08A49250;
    case 235u: goto L_08A49284;
    case 236u: goto L_08A49290;
    case 237u: goto L_08A49294;
    case 238u: goto L_08A492A0;
    case 239u: goto L_08A492C0;
    case 240u: goto L_08A492CC;
    case 241u: goto L_08A492E4;
    case 242u: goto L_08A492FC;
    case 243u: goto L_08A49304;
    case 244u: goto L_08A49314;
    case 245u: goto L_08A4933C;
    case 246u: goto L_08A4934C;
    case 247u: goto L_08A49358;
    case 248u: goto L_08A49364;
    case 249u: goto L_08A4936C;
    case 250u: goto L_08A49378;
    case 251u: goto L_08A49388;
    case 252u: goto L_08A49394;
    case 253u: goto L_08A493B8;
    case 254u: goto L_08A493D4;
    case 255u: goto L_08A493E0;
    case 256u: goto L_08A493E4;
    case 257u: goto L_08A493F4;
    case 258u: goto L_08A4940C;
    case 259u: goto L_08A49418;
    case 260u: goto L_08A4941C;
    case 261u: goto L_08A49428;
    case 262u: goto L_08A49430;
    case 263u: goto L_08A49444;
    case 264u: goto L_08A49450;
    case 265u: goto L_08A49458;
    case 266u: goto L_08A49464;
    case 267u: goto L_08A49468;
    case 268u: goto L_08A4947C;
    case 269u: goto L_08A494A8;
    case 270u: goto L_08A494C4;
    case 271u: goto L_08A494D4;
    case 272u: goto L_08A494F0;
    case 273u: goto L_08A494FC;
    case 274u: goto L_08A49508;
    case 275u: goto L_08A4950C;
    case 276u: goto L_08A49518;
    case 277u: goto L_08A49530;
    case 278u: goto L_08A4954C;
    case 279u: goto L_08A49558;
    case 280u: goto L_08A49570;
    case 281u: goto L_08A49580;
    case 282u: goto L_08A49584;
    case 283u: goto L_08A49598;
    case 284u: goto L_08A495A4;
    case 285u: goto L_08A495C0;
    case 286u: goto L_08A495E8;
    case 287u: goto L_08A495F4;
    case 288u: goto L_08A49600;
    case 289u: goto L_08A4960C;
    case 290u: goto L_08A49618;
    case 291u: goto L_08A4961C;
    case 292u: goto L_08A49628;
    case 293u: goto L_08A4964C;
    case 294u: goto L_08A49654;
    case 295u: goto L_08A49660;
    case 296u: goto L_08A49664;
    case 297u: goto L_08A49670;
    case 298u: goto L_08A49674;
    case 299u: goto L_08A49690;
    case 300u: goto L_08A496A8;
    case 301u: goto L_08A496BC;
    case 302u: goto L_08A496E8;
    case 303u: goto L_08A496F4;
    case 304u: goto L_08A496F8;
    case 305u: goto L_08A49704;
    case 306u: goto L_08A4972C;
    case 307u: goto L_08A49730;
    case 308u: goto L_08A4973C;
    case 309u: goto L_08A4975C;
    case 310u: goto L_08A49764;
    case 311u: goto L_08A4978C;
    case 312u: goto L_08A4979C;
    case 313u: goto L_08A497B8;
    case 314u: goto L_08A497C0;
    case 315u: goto L_08A497CC;
    case 316u: goto L_08A497DC;
    case 317u: goto L_08A497F4;
    case 318u: goto L_08A49818;
    case 319u: goto L_08A4982C;
    case 320u: goto L_08A4984C;
    case 321u: goto L_08A49858;
    case 322u: goto L_08A49864;
    case 323u: goto L_08A49878;
    case 324u: goto L_08A49894;
    case 325u: goto L_08A498B8;
    case 326u: goto L_08A498CC;
    case 327u: goto L_08A498F0;
    case 328u: goto L_08A498F8;
    case 329u: goto L_08A49914;
    case 330u: goto L_08A49924;
    case 331u: goto L_08A49944;
    case 332u: goto L_08A49948;
    case 333u: goto L_08A49964;
    case 334u: goto L_08A499A8;
    case 335u: goto L_08A499B8;
    case 336u: goto L_08A499D4;
    case 337u: goto L_08A499DC;
    case 338u: goto L_08A499EC;
    case 339u: goto L_08A49A04;
    case 340u: goto L_08A49A14;
    case 341u: goto L_08A49A20;
    case 342u: goto L_08A49A24;
    case 343u: goto L_08A49A44;
    case 344u: goto L_08A49A64;
    case 345u: goto L_08A49A6C;
    case 346u: goto L_08A49A7C;
    case 347u: goto L_08A49A94;
    case 348u: goto L_08A49A9C;
    case 349u: goto L_08A49AB0;
    case 350u: goto L_08A49AC8;
    case 351u: goto L_08A49AEC;
    case 352u: goto L_08A49B04;
    case 353u: goto L_08A49B14;
    case 354u: goto L_08A49B30;
    case 355u: goto L_08A49B3C;
    case 356u: goto L_08A49B54;
    case 357u: goto L_08A49B8C;
    case 358u: goto L_08A49B98;
    case 359u: goto L_08A49BA0;
    case 360u: goto L_08A49BAC;
    case 361u: goto L_08A49BB4;
    case 362u: goto L_08A49BC8;
    case 363u: goto L_08A49BDC;
    case 364u: goto L_08A49BF4;
    case 365u: goto L_08A49BF8;
    case 366u: goto L_08A49C00;
    case 367u: goto L_08A49C18;
    case 368u: goto L_08A49C24;
    case 369u: goto L_08A49C38;
    case 370u: goto L_08A49C48;
    case 371u: goto L_08A49C58;
    case 372u: goto L_08A49C64;
    case 373u: goto L_08A49C6C;
    case 374u: goto L_08A49C78;
    case 375u: goto L_08A49C80;
    case 376u: goto L_08A49C94;
    case 377u: goto L_08A49CA8;
    case 378u: goto L_08A49CC0;
    case 379u: goto L_08A49CC4;
    case 380u: goto L_08A49CCC;
    case 381u: goto L_08A49CE4;
    case 382u: goto L_08A49CF0;
    case 383u: goto L_08A49D10;
    case 384u: goto L_08A49D20;
    case 385u: goto L_08A49D28;
    case 386u: goto L_08A49D34;
    case 387u: goto L_08A49D44;
    case 388u: goto L_08A49D50;
    case 389u: goto L_08A49D5C;
    case 390u: goto L_08A49D6C;
    case 391u: goto L_08A49D78;
    case 392u: goto L_08A49D80;
    case 393u: goto L_08A49D8C;
    case 394u: goto L_08A49D94;
    case 395u: goto L_08A49DA8;
    case 396u: goto L_08A49DC0;
    case 397u: goto L_08A49DCC;
    case 398u: goto L_08A49DD8;
    case 399u: goto L_08A49DFC;
    case 400u: goto L_08A49E08;
    case 401u: goto L_08A49E14;
    case 402u: goto L_08A49E1C;
    case 403u: goto L_08A49E2C;
    case 404u: goto L_08A49E44;
    case 405u: goto L_08A49E48;
    case 406u: goto L_08A49E50;
    case 407u: goto L_08A49E68;
    case 408u: goto L_08A49E74;
    case 409u: goto L_08A49E80;
    case 410u: goto L_08A49E8C;
    case 411u: goto L_08A49E98;
    case 412u: goto L_08A49EB4;
    case 413u: goto L_08A49EE0;
    case 414u: goto L_08A49EF8;
    case 415u: goto L_08A49F14;
    case 416u: goto L_08A49F28;
    case 417u: goto L_08A49F30;
    case 418u: goto L_08A49F48;
    case 419u: goto L_08A49F54;
    case 420u: goto L_08A49F70;
    case 421u: goto L_08A49F78;
    case 422u: goto L_08A49F8C;
    case 423u: goto L_08A49F90;
    case 424u: goto L_08A49F9C;
    case 425u: goto L_08A49FAC;
    case 426u: goto L_08A49FC4;
    case 427u: goto L_08A49FC8;
    case 428u: goto L_08A49FD0;
    case 429u: goto L_08A49FE8;
    case 430u: goto L_08A49FF4;
    case 431u: goto L_08A4A000;
    case 432u: goto L_08A4A008;
    case 433u: goto L_08A4A014;
    case 434u: goto L_08A4A01C;
    case 435u: goto L_08A4A02C;
    case 436u: goto L_08A4A044;
    case 437u: goto L_08A4A048;
    case 438u: goto L_08A4A050;
    case 439u: goto L_08A4A068;
    case 440u: goto L_08A4A074;
    case 441u: goto L_08A4A078;
    case 442u: goto L_08A4A0A0;
    case 443u: goto L_08A4A0BC;
    case 444u: goto L_08A4A0C8;
    case 445u: goto L_08A4A0D4;
    case 446u: goto L_08A4A0F0;
    case 447u: goto L_08A4A100;
    case 448u: goto L_08A4A110;
    case 449u: goto L_08A4A120;
    case 450u: goto L_08A4A12C;
    case 451u: goto L_08A4A134;
    case 452u: goto L_08A4A140;
    case 453u: goto L_08A4A148;
    case 454u: goto L_08A4A15C;
    case 455u: goto L_08A4A170;
    case 456u: goto L_08A4A188;
    case 457u: goto L_08A4A18C;
    case 458u: goto L_08A4A194;
    case 459u: goto L_08A4A1AC;
    case 460u: goto L_08A4A1B8;
    case 461u: goto L_08A4A1D4;
    case 462u: goto L_08A4A1E8;
    case 463u: goto L_08A4A1F0;
    case 464u: goto L_08A4A1F4;
    case 465u: goto L_08A4A20C;
    case 466u: goto L_08A4A228;
    case 467u: goto L_08A4A234;
    case 468u: goto L_08A4A240;
    case 469u: goto L_08A4A24C;
    case 470u: goto L_08A4A254;
    case 471u: goto L_08A4A260;
    case 472u: goto L_08A4A270;
    case 473u: goto L_08A4A280;
    case 474u: goto L_08A4A28C;
    case 475u: goto L_08A4A294;
    case 476u: goto L_08A4A2A0;
    case 477u: goto L_08A4A2A8;
    case 478u: goto L_08A4A2BC;
    case 479u: goto L_08A4A2D0;
    case 480u: goto L_08A4A2E8;
    case 481u: goto L_08A4A2EC;
    case 482u: goto L_08A4A2F4;
    case 483u: goto L_08A4A30C;
    case 484u: goto L_08A4A318;
    case 485u: goto L_08A4A33C;
    case 486u: goto L_08A4A348;
    case 487u: goto L_08A4A354;
    case 488u: goto L_08A4A380;
    case 489u: goto L_08A4A394;
    case 490u: goto L_08A4A3A0;
    case 491u: goto L_08A4A3B0;
    case 492u: goto L_08A4A3BC;
    case 493u: goto L_08A4A3C4;
    case 494u: goto L_08A4A3D4;
    case 495u: goto L_08A4A3EC;
    case 496u: goto L_08A4A3F0;
    case 497u: goto L_08A4A3F8;
    case 498u: goto L_08A4A404;
    case 499u: goto L_08A4A414;
    case 500u: goto L_08A4A42C;
    case 501u: goto L_08A4A430;
    case 502u: goto L_08A4A438;
    case 503u: goto L_08A4A450;
    case 504u: goto L_08A4A45C;
    case 505u: goto L_08A4A464;
    case 506u: goto L_08A4A488;
    case 507u: goto L_08A4A494;
    case 508u: goto L_08A4A4A0;
    case 509u: goto L_08A4A4A8;
    case 510u: goto L_08A4A4B4;
    case 511u: goto L_08A4A4BC;
    case 512u: goto L_08A4A4CC;
    case 513u: goto L_08A4A4E4;
    case 514u: goto L_08A4A4E8;
    case 515u: goto L_08A4A4F0;
    case 516u: goto L_08A4A508;
    case 517u: goto L_08A4A514;
    case 518u: goto L_08A4A524;
    case 519u: goto L_08A4A53C;
    case 520u: goto L_08A4A540;
    case 521u: goto L_08A4A548;
    case 522u: goto L_08A4A560;
    case 523u: goto L_08A4A56C;
    case 524u: goto L_08A4A578;
    case 525u: goto L_08A4A590;
    case 526u: goto L_08A4A5A0;
    case 527u: goto L_08A4A5AC;
    case 528u: goto L_08A4A5B4;
    case 529u: goto L_08A4A5CC;
    case 530u: goto L_08A4A5DC;
    case 531u: goto L_08A4A5E8;
    case 532u: goto L_08A4A5F0;
    case 533u: goto L_08A4A5FC;
    case 534u: goto L_08A4A608;
    case 535u: goto L_08A4A610;
    case 536u: goto L_08A4A61C;
    case 537u: goto L_08A4A624;
    case 538u: goto L_08A4A634;
    case 539u: goto L_08A4A64C;
    case 540u: goto L_08A4A650;
    case 541u: goto L_08A4A658;
    case 542u: goto L_08A4A670;
    case 543u: goto L_08A4A67C;
    case 544u: goto L_08A4A68C;
    case 545u: goto L_08A4A6A4;
    case 546u: goto L_08A4A6A8;
    case 547u: goto L_08A4A6B0;
    case 548u: goto L_08A4A6C8;
    case 549u: goto L_08A4A6D4;
    case 550u: goto L_08A4A6E0;
    case 551u: goto L_08A4A6F0;
    case 552u: goto L_08A4A6F8;
    case 553u: goto L_08A4A704;
    case 554u: goto L_08A4A70C;
    case 555u: goto L_08A4A714;
    case 556u: goto L_08A4A71C;
    case 557u: goto L_08A4A72C;
    case 558u: goto L_08A4A734;
    case 559u: goto L_08A4A750;
    case 560u: goto L_08A4A760;
    case 561u: goto L_08A4A76C;
    case 562u: goto L_08A4A774;
    case 563u: goto L_08A4A780;
    case 564u: goto L_08A4A78C;
    case 565u: goto L_08A4A794;
    case 566u: goto L_08A4A7A0;
    case 567u: goto L_08A4A7A8;
    case 568u: goto L_08A4A7B8;
    case 569u: goto L_08A4A7D0;
    case 570u: goto L_08A4A7D4;
    case 571u: goto L_08A4A7DC;
    case 572u: goto L_08A4A7F4;
    case 573u: goto L_08A4A800;
    case 574u: goto L_08A4A810;
    case 575u: goto L_08A4A828;
    case 576u: goto L_08A4A82C;
    case 577u: goto L_08A4A834;
    case 578u: goto L_08A4A84C;
    case 579u: goto L_08A4A858;
    case 580u: goto L_08A4A864;
    case 581u: goto L_08A4A880;
    case 582u: goto L_08A4A890;
    case 583u: goto L_08A4A8A0;
    case 584u: goto L_08A4A8AC;
    case 585u: goto L_08A4A8B4;
    case 586u: goto L_08A4A8C0;
    case 587u: goto L_08A4A8C8;
    case 588u: goto L_08A4A8D8;
    case 589u: goto L_08A4A8F0;
    case 590u: goto L_08A4A8F4;
    case 591u: goto L_08A4A8FC;
    case 592u: goto L_08A4A914;
    case 593u: goto L_08A4A920;
    case 594u: goto L_08A4A930;
    case 595u: goto L_08A4A948;
    case 596u: goto L_08A4A94C;
    case 597u: goto L_08A4A954;
    case 598u: goto L_08A4A96C;
    case 599u: goto L_08A4A978;
    case 600u: goto L_08A4A984;
    case 601u: goto L_08A4A994;
    case 602u: goto L_08A4A9AC;
    case 603u: goto L_08A4A9B0;
    case 604u: goto L_08A4A9B8;
    case 605u: goto L_08A4A9C4;
    case 606u: goto L_08A4A9D4;
    case 607u: goto L_08A4A9EC;
    case 608u: goto L_08A4A9F0;
    case 609u: goto L_08A4A9F8;
    case 610u: goto L_08A4AA10;
    case 611u: goto L_08A4AA1C;
    case 612u: goto L_08A4AA30;
    case 613u: goto L_08A4AA38;
    case 614u: goto L_08A4AA44;
    case 615u: goto L_08A4AA4C;
    case 616u: goto L_08A4AA5C;
    case 617u: goto L_08A4AA74;
    case 618u: goto L_08A4AA78;
    case 619u: goto L_08A4AA80;
    case 620u: goto L_08A4AA98;
    case 621u: goto L_08A4AAA4;
    case 622u: goto L_08A4AAB4;
    case 623u: goto L_08A4AACC;
    case 624u: goto L_08A4AAD0;
    case 625u: goto L_08A4AAD8;
    case 626u: goto L_08A4AAF0;
    case 627u: goto L_08A4AAFC;
    case 628u: goto L_08A4AB00;
    case 629u: goto L_08A4AB18;
    case 630u: goto L_08A4AB40;
    case 631u: goto L_08A4AB48;
    case 632u: goto L_08A4AB54;
    case 633u: goto L_08A4AB6C;
    case 634u: goto L_08A4AB7C;
    case 635u: goto L_08A4AB88;
    case 636u: goto L_08A4ABAC;
    case 637u: goto L_08A4ABB8;
    case 638u: goto L_08A4ABCC;
    case 639u: goto L_08A4ABE4;
    case 640u: goto L_08A4ABE8;
    case 641u: goto L_08A4ABF0;
    case 642u: goto L_08A4AC08;
    case 643u: goto L_08A4AC14;
    case 644u: goto L_08A4AC20;
    case 645u: goto L_08A4AC34;
    case 646u: goto L_08A4AC4C;
    case 647u: goto L_08A4AC50;
    case 648u: goto L_08A4AC58;
    case 649u: goto L_08A4AC64;
    case 650u: goto L_08A4AC74;
    case 651u: goto L_08A4AC8C;
    case 652u: goto L_08A4AC90;
    case 653u: goto L_08A4AC98;
    case 654u: goto L_08A4ACB0;
    case 655u: goto L_08A4ACBC;
    case 656u: goto L_08A4ACC0;
    case 657u: goto L_08A4ACD8;
    case 658u: goto L_08A4AD08;
    case 659u: goto L_08A4AD14;
    case 660u: goto L_08A4AD24;
    case 661u: goto L_08A4AD2C;
    case 662u: goto L_08A4AD3C;
    case 663u: goto L_08A4AD48;
    case 664u: goto L_08A4AD54;
    case 665u: goto L_08A4AD5C;
    case 666u: goto L_08A4AD68;
    case 667u: goto L_08A4AD88;
    case 668u: goto L_08A4AD90;
    case 669u: goto L_08A4ADA0;
    case 670u: goto L_08A4ADAC;
    case 671u: goto L_08A4ADB8;
    case 672u: goto L_08A4ADC0;
    case 673u: goto L_08A4ADCC;
    case 674u: goto L_08A4ADDC;
    case 675u: goto L_08A4ADE8;
    case 676u: goto L_08A4ADF4;
    case 677u: goto L_08A4ADFC;
    case 678u: goto L_08A4AE00;
    case 679u: goto L_08A4AE1C;
    case 680u: goto L_08A4AE64;
    case 681u: goto L_08A4AE6C;
    case 682u: goto L_08A4AE74;
    case 683u: goto L_08A4AE84;
    case 684u: goto L_08A4AE8C;
    case 685u: goto L_08A4AE98;
    case 686u: goto L_08A4AEAC;
    case 687u: goto L_08A4AEB4;
    case 688u: goto L_08A4AEC8;
    case 689u: goto L_08A4AEDC;
    case 690u: goto L_08A4AEE8;
    case 691u: goto L_08A4AEF4;
    case 692u: goto L_08A4AF08;
    case 693u: goto L_08A4AF10;
    case 694u: goto L_08A4AF24;
    case 695u: goto L_08A4AF2C;
    case 696u: goto L_08A4AF4C;
    case 697u: goto L_08A4AF60;
    case 698u: goto L_08A4AF70;
    case 699u: goto L_08A4AF80;
    case 700u: goto L_08A4AF8C;
    case 701u: goto L_08A4AFA4;
    case 702u: goto L_08A4AFAC;
    case 703u: goto L_08A4AFC0;
    case 704u: goto L_08A4AFD0;
    case 705u: goto L_08A4AFDC;
    case 706u: goto L_08A4AFF4;
    case 707u: goto L_08A4B00C;
    case 708u: goto L_08A4B01C;
    case 709u: goto L_08A4B02C;
    case 710u: goto L_08A4B038;
    case 711u: goto L_08A4B040;
    case 712u: goto L_08A4B04C;
    case 713u: goto L_08A4B058;
    case 714u: goto L_08A4B064;
    case 715u: goto L_08A4B074;
    case 716u: goto L_08A4B080;
    case 717u: goto L_08A4B088;
    case 718u: goto L_08A4B094;
    case 719u: goto L_08A4B0A0;
    case 720u: goto L_08A4B0BC;
    case 721u: goto L_08A4B0C8;
    case 722u: goto L_08A4B0D0;
    case 723u: goto L_08A4B0E0;
    case 724u: goto L_08A4B0EC;
    case 725u: goto L_08A4B0F8;
    case 726u: goto L_08A4B110;
    case 727u: goto L_08A4B11C;
    case 728u: goto L_08A4B124;
    case 729u: goto L_08A4B138;
    case 730u: goto L_08A4B144;
    case 731u: goto L_08A4B14C;
    case 732u: goto L_08A4B150;
    case 733u: goto L_08A4B178;
    case 734u: goto L_08A4B1C4;
    case 735u: goto L_08A4B1D0;
    case 736u: goto L_08A4B1EC;
    case 737u: goto L_08A4B204;
    case 738u: goto L_08A4B220;
    case 739u: goto L_08A4B234;
    case 740u: goto L_08A4B23C;
    case 741u: goto L_08A4B254;
    case 742u: goto L_08A4B25C;
    case 743u: goto L_08A4B284;
    case 744u: goto L_08A4B290;
    case 745u: goto L_08A4B2A0;
    case 746u: goto L_08A4B2B8;
    case 747u: goto L_08A4B2BC;
    case 748u: goto L_08A4B2C4;
    case 749u: goto L_08A4B2DC;
    case 750u: goto L_08A4B2E8;
    case 751u: goto L_08A4B2F4;
    case 752u: goto L_08A4B2FC;
    case 753u: goto L_08A4B308;
    case 754u: goto L_08A4B314;
    case 755u: goto L_08A4B320;
    case 756u: goto L_08A4B33C;
    case 757u: goto L_08A4B354;
    case 758u: goto L_08A4B370;
    case 759u: goto L_08A4B388;
    case 760u: goto L_08A4B390;
    case 761u: goto L_08A4B398;
    case 762u: goto L_08A4B3A4;
    case 763u: goto L_08A4B3B8;
    case 764u: goto L_08A4B3C8;
    case 765u: goto L_08A4B3CC;
    case 766u: goto L_08A4B3E8;
    case 767u: goto L_08A4B3F0;
    case 768u: goto L_08A4B3FC;
    case 769u: goto L_08A4B404;
    case 770u: goto L_08A4B414;
    case 771u: goto L_08A4B42C;
    case 772u: goto L_08A4B430;
    case 773u: goto L_08A4B438;
    case 774u: goto L_08A4B450;
    case 775u: goto L_08A4B45C;
    case 776u: goto L_08A4B468;
    case 777u: goto L_08A4B470;
    case 778u: goto L_08A4B47C;
    case 779u: goto L_08A4B488;
    case 780u: goto L_08A4B490;
    case 781u: goto L_08A4B4A0;
    case 782u: goto L_08A4B4B8;
    case 783u: goto L_08A4B4D4;
    case 784u: goto L_08A4B4E8;
    case 785u: goto L_08A4B4F0;
    case 786u: goto L_08A4B508;
    case 787u: goto L_08A4B510;
    case 788u: goto L_08A4B528;
    case 789u: goto L_08A4B530;
    case 790u: goto L_08A4B544;
    case 791u: goto L_08A4B54C;
    case 792u: goto L_08A4B564;
    case 793u: goto L_08A4B56C;
    case 794u: goto L_08A4B578;
    case 795u: goto L_08A4B584;
    case 796u: goto L_08A4B594;
    case 797u: goto L_08A4B5A0;
    case 798u: goto L_08A4B5BC;
    case 799u: goto L_08A4B5C4;
    case 800u: goto L_08A4B5D4;
    case 801u: goto L_08A4B5F0;
    case 802u: goto L_08A4B604;
    case 803u: goto L_08A4B618;
    case 804u: goto L_08A4B628;
    case 805u: goto L_08A4B630;
    case 806u: goto L_08A4B644;
    case 807u: goto L_08A4B658;
    case 808u: goto L_08A4B674;
    case 809u: goto L_08A4B688;
    case 810u: goto L_08A4B6A0;
    case 811u: goto L_08A4B6B4;
    case 812u: goto L_08A4B6E4;
    case 813u: goto L_08A4B6F8;
    case 814u: goto L_08A4B700;
    case 815u: goto L_08A4B71C;
    case 816u: goto L_08A4B748;
    case 817u: goto L_08A4B758;
    case 818u: goto L_08A4B764;
    case 819u: goto L_08A4B76C;
    case 820u: goto L_08A4B778;
    case 821u: goto L_08A4B780;
    case 822u: goto L_08A4B790;
    case 823u: goto L_08A4B7A8;
    case 824u: goto L_08A4B7AC;
    case 825u: goto L_08A4B7B4;
    case 826u: goto L_08A4B7CC;
    case 827u: goto L_08A4B7D8;
    case 828u: goto L_08A4B7E4;
    case 829u: goto L_08A4B7EC;
    case 830u: goto L_08A4B7F8;
    case 831u: goto L_08A4B820;
    case 832u: goto L_08A4B860;
    case 833u: goto L_08A4B86C;
    case 834u: goto L_08A4B87C;
    case 835u: goto L_08A4B894;
    case 836u: goto L_08A4B898;
    case 837u: goto L_08A4B8A0;
    case 838u: goto L_08A4B8B8;
    case 839u: goto L_08A4B8C4;
    case 840u: goto L_08A4B8CC;
    case 841u: goto L_08A4B8F4;
    case 842u: goto L_08A4B904;
    case 843u: goto L_08A4B91C;
    case 844u: goto L_08A4B920;
    case 845u: goto L_08A4B928;
    case 846u: goto L_08A4B940;
    case 847u: goto L_08A4B94C;
    case 848u: goto L_08A4B968;
    case 849u: goto L_08A4B96C;
    case 850u: goto L_08A4B97C;
    case 851u: goto L_08A4B990;
    case 852u: goto L_08A4B99C;
    case 853u: goto L_08A4B9A4;
    case 854u: goto L_08A4B9B8;
    case 855u: goto L_08A4B9C0;
    case 856u: goto L_08A4B9D8;
    case 857u: goto L_08A4BA08;
    case 858u: goto L_08A4BA14;
    case 859u: goto L_08A4BA20;
    case 860u: goto L_08A4BA28;
    case 861u: goto L_08A4BA34;
    case 862u: goto L_08A4BA3C;
    case 863u: goto L_08A4BA48;
    case 864u: goto L_08A4BA50;
    case 865u: goto L_08A4BA60;
    case 866u: goto L_08A4BA78;
    case 867u: goto L_08A4BA7C;
    case 868u: goto L_08A4BA84;
    case 869u: goto L_08A4BA9C;
    case 870u: goto L_08A4BAA8;
    case 871u: goto L_08A4BAB4;
    case 872u: goto L_08A4BABC;
    case 873u: goto L_08A4BAC8;
    case 874u: goto L_08A4BAD4;
    case 875u: goto L_08A4BAE0;
    case 876u: goto L_08A4BAE8;
    case 877u: goto L_08A4BAF0;
    case 878u: goto L_08A4BAFC;
    case 879u: goto L_08A4BB04;
    case 880u: goto L_08A4BB24;
    case 881u: goto L_08A4BB38;
    case 882u: goto L_08A4BB68;
    case 883u: goto L_08A4BB74;
    case 884u: goto L_08A4BB7C;
    case 885u: goto L_08A4BB98;
    case 886u: goto L_08A4BBA0;
    case 887u: goto L_08A4BBAC;
    case 888u: goto L_08A4BBB4;
    case 889u: goto L_08A4BBD4;
    case 890u: goto L_08A4BBE0;
    case 891u: goto L_08A4BBEC;
    case 892u: goto L_08A4BBF8;
    case 893u: goto L_08A4BC00;
    case 894u: goto L_08A4BC0C;
    case 895u: goto L_08A4BC14;
    case 896u: goto L_08A4BC1C;
    case 897u: goto L_08A4BC3C;
    case 898u: goto L_08A4BC48;
    case 899u: goto L_08A4BC54;
    case 900u: goto L_08A4BC5C;
    case 901u: goto L_08A4BC6C;
    case 902u: goto L_08A4BC84;
    case 903u: goto L_08A4BC88;
    case 904u: goto L_08A4BC90;
    case 905u: goto L_08A4BCA8;
    case 906u: goto L_08A4BCB4;
    case 907u: goto L_08A4BCC0;
    case 908u: goto L_08A4BCC8;
    case 909u: goto L_08A4BCD4;
    case 910u: goto L_08A4BCE0;
    case 911u: goto L_08A4BCE8;
    case 912u: goto L_08A4BCF4;
    case 913u: goto L_08A4BCFC;
    case 914u: goto L_08A4BD0C;
    case 915u: goto L_08A4BD24;
    case 916u: goto L_08A4BD28;
    case 917u: goto L_08A4BD30;
    case 918u: goto L_08A4BD48;
    case 919u: goto L_08A4BD54;
    case 920u: goto L_08A4BD60;
    case 921u: goto L_08A4BD68;
    case 922u: goto L_08A4BD74;
    case 923u: goto L_08A4BD88;
    case 924u: goto L_08A4BD94;
    case 925u: goto L_08A4BD9C;
    case 926u: goto L_08A4BDA4;
    case 927u: goto L_08A4BDB8;
    case 928u: goto L_08A4BDC0;
    case 929u: goto L_08A4BDD4;
    case 930u: goto L_08A4BDEC;
    case 931u: goto L_08A4BDF0;
    case 932u: goto L_08A4BDF8;
    case 933u: goto L_08A4BE04;
    case 934u: goto L_08A4BE18;
    case 935u: goto L_08A4BE28;
    case 936u: goto L_08A4BE40;
    case 937u: goto L_08A4BE44;
    case 938u: goto L_08A4BE4C;
    case 939u: goto L_08A4BE64;
    case 940u: goto L_08A4BE70;
    case 941u: goto L_08A4BE78;
    case 942u: goto L_08A4BE88;
    case 943u: goto L_08A4BEA0;
    case 944u: goto L_08A4BEA4;
    case 945u: goto L_08A4BEAC;
    case 946u: goto L_08A4BEC4;
    case 947u: goto L_08A4BED0;
    case 948u: goto L_08A4BEDC;
    case 949u: goto L_08A4BEE4;
    case 950u: goto L_08A4BEF0;
    case 951u: goto L_08A4BF08;
    case 952u: goto L_08A4BF10;
    case 953u: goto L_08A4BF1C;
    case 954u: goto L_08A4BF24;
    case 955u: goto L_08A4BF48;
    case 956u: goto L_08A4BF50;
    case 957u: goto L_08A4BF64;
    case 958u: goto L_08A4BF6C;
    case 959u: goto L_08A4BF94;
    case 960u: goto L_08A4BFA4;
    case 961u: goto L_08A4BFBC;
    case 962u: goto L_08A4BFD8;
    case 963u: goto L_08A4BFEC;
    case 964u: goto L_08A4BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A48000:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(500));
    ctx.set_gpr(31, 0x08A4800Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 471u, 0x08A4753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4800Cu) goto L_08A4800C;
    return;
L_08A4800C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_08A48010;
L_08A48010:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A48250;
      }
      goto L_08A4801C;
    }
L_08A4801C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A481D4;
      }
      goto L_08A48028;
    }
L_08A48028:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A4805C;
      }
      goto L_08A48034;
    }
L_08A48034:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A4805C;
      }
      goto L_08A48040;
    }
L_08A48040:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48050;
      }
      goto L_08A48048;
    }
L_08A48048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48348;
      }
      goto L_08A48050;
    }
L_08A48050:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4834C;
      }
      goto L_08A4805C;
    }
L_08A4805C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21784)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21780)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21784), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21780), ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A480CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 578u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08A480CCu) goto L_08A480CC;
    return;
L_08A480CC:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A480ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 116u, 0x08A28AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A480ECu) goto L_08A480EC;
    return;
L_08A480EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A480FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 115u, 0x08A28AA8u>(ctx, &aot_mem) && ctx.pc == 0x08A480FCu) goto L_08A480FC;
    return;
L_08A480FC:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A48110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A48110u) goto L_08A48110;
    return;
L_08A48110:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A48124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A48124u) goto L_08A48124;
    return;
L_08A48124:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A4813Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4813Cu) goto L_08A4813C;
    return;
L_08A4813C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A48150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 577u, 0x08A47E24u>(ctx, &aot_mem) && ctx.pc == 0x08A48150u) goto L_08A48150;
    return;
L_08A48150:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A4816Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4816Cu) goto L_08A4816C;
    return;
L_08A4816C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A48180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A48180u) goto L_08A48180;
    return;
L_08A48180:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(31, 0x08A48194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 578u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08A48194u) goto L_08A48194;
    return;
L_08A48194:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A481B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 591u, 0x08A2EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A481B4u) goto L_08A481B4;
    return;
L_08A481B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A481C8;
      }
      goto L_08A481C0;
    }
L_08A481C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4834C;
      }
      goto L_08A481C8;
    }
L_08A481C8:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4834C;
      }
      goto L_08A481D4;
    }
L_08A481D4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788), ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A48214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 577u, 0x08A47E24u>(ctx, &aot_mem) && ctx.pc == 0x08A48214u) goto L_08A48214;
    return;
L_08A48214:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A48230u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48230u) goto L_08A48230;
    return;
L_08A48230:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A48244;
      }
      goto L_08A4823C;
    }
L_08A4823C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4834C;
      }
      goto L_08A48244;
    }
L_08A48244:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4834C;
      }
      goto L_08A48250;
    }
L_08A48250:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A48268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 578u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08A48268u) goto L_08A48268;
    return;
L_08A48268:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A48288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 116u, 0x08A28AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A48288u) goto L_08A48288;
    return;
L_08A48288:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A48298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 115u, 0x08A28AA8u>(ctx, &aot_mem) && ctx.pc == 0x08A48298u) goto L_08A48298;
    return;
L_08A48298:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A482ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A482ACu) goto L_08A482AC;
    return;
L_08A482AC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A482C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A482C0u) goto L_08A482C0;
    return;
L_08A482C0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A482D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 577u, 0x08A47E24u>(ctx, &aot_mem) && ctx.pc == 0x08A482D4u) goto L_08A482D4;
    return;
L_08A482D4:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A482F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A482F0u) goto L_08A482F0;
    return;
L_08A482F0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(31, 0x08A48308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 578u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08A48308u) goto L_08A48308;
    return;
L_08A48308:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A48328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 591u, 0x08A2EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A48328u) goto L_08A48328;
    return;
L_08A48328:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A4833C;
      }
      goto L_08A48334;
    }
L_08A48334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4834C;
      }
      goto L_08A4833C;
    }
L_08A4833C:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4834C;
      }
      goto L_08A48348;
    }
L_08A48348:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A4834C;
L_08A4834C:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
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
L_08A48378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48430;
      }
      goto L_08A483B0;
    }
L_08A483B0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A483CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A483CCu) goto L_08A483CC;
    return;
L_08A483CC:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A48430;
      }
      goto L_08A483D4;
    }
L_08A483D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(576)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A48430;
      }
      goto L_08A483F0;
    }
L_08A483F0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21800)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21796)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21800), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21796), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A4842Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 488u, 0x08A476CCu>(ctx, &aot_mem) && ctx.pc == 0x08A4842Cu) goto L_08A4842C;
    return;
L_08A4842C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_08A48430;
L_08A48430:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A48670;
      }
      goto L_08A4843C;
    }
L_08A4843C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A485F4;
      }
      goto L_08A48448;
    }
L_08A48448:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A4847C;
      }
      goto L_08A48454;
    }
L_08A48454:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A4847C;
      }
      goto L_08A48460;
    }
L_08A48460:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48470;
      }
      goto L_08A48468;
    }
L_08A48468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48768;
      }
      goto L_08A48470;
    }
L_08A48470:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4876C;
      }
      goto L_08A4847C;
    }
L_08A4847C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21784)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21780)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21784), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21780), ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A484ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 578u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08A484ECu) goto L_08A484EC;
    return;
L_08A484EC:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A4850Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 116u, 0x08A28AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A4850Cu) goto L_08A4850C;
    return;
L_08A4850C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A4851Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 115u, 0x08A28AA8u>(ctx, &aot_mem) && ctx.pc == 0x08A4851Cu) goto L_08A4851C;
    return;
L_08A4851C:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A48530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A48530u) goto L_08A48530;
    return;
L_08A48530:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A48544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A48544u) goto L_08A48544;
    return;
L_08A48544:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A4855Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4855Cu) goto L_08A4855C;
    return;
L_08A4855C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A48570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 577u, 0x08A47E24u>(ctx, &aot_mem) && ctx.pc == 0x08A48570u) goto L_08A48570;
    return;
L_08A48570:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A4858Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4858Cu) goto L_08A4858C;
    return;
L_08A4858C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A485A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A485A0u) goto L_08A485A0;
    return;
L_08A485A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(31, 0x08A485B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 578u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08A485B4u) goto L_08A485B4;
    return;
L_08A485B4:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A485D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 591u, 0x08A2EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A485D4u) goto L_08A485D4;
    return;
L_08A485D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A485E8;
      }
      goto L_08A485E0;
    }
L_08A485E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4876C;
      }
      goto L_08A485E8;
    }
L_08A485E8:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4876C;
      }
      goto L_08A485F4;
    }
L_08A485F4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788), ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A48634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 577u, 0x08A47E24u>(ctx, &aot_mem) && ctx.pc == 0x08A48634u) goto L_08A48634;
    return;
L_08A48634:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A48650u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48650u) goto L_08A48650;
    return;
L_08A48650:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A48664;
      }
      goto L_08A4865C;
    }
L_08A4865C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4876C;
      }
      goto L_08A48664;
    }
L_08A48664:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4876C;
      }
      goto L_08A48670;
    }
L_08A48670:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A48688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 578u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08A48688u) goto L_08A48688;
    return;
L_08A48688:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A486A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 116u, 0x08A28AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A486A8u) goto L_08A486A8;
    return;
L_08A486A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A486B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 115u, 0x08A28AA8u>(ctx, &aot_mem) && ctx.pc == 0x08A486B8u) goto L_08A486B8;
    return;
L_08A486B8:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A486CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 611u, 0x08A2ED1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A486CCu) goto L_08A486CC;
    return;
L_08A486CC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A486E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 625u, 0x08A2EEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A486E0u) goto L_08A486E0;
    return;
L_08A486E0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(31, 0x08A486F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 577u, 0x08A47E24u>(ctx, &aot_mem) && ctx.pc == 0x08A486F4u) goto L_08A486F4;
    return;
L_08A486F4:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A48710u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48710u) goto L_08A48710;
    return;
L_08A48710:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(31, 0x08A48728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 578u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08A48728u) goto L_08A48728;
    return;
L_08A48728:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A48748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 591u, 0x08A2EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A48748u) goto L_08A48748;
    return;
L_08A48748:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A4875C;
      }
      goto L_08A48754;
    }
L_08A48754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4876C;
      }
      goto L_08A4875C;
    }
L_08A4875C:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4876C;
      }
      goto L_08A48768;
    }
L_08A48768:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A4876C;
L_08A4876C:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
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
L_08A48798:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21792), ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21788), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A487F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A487F0u) goto L_08A487F0;
    return;
L_08A487F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A48804;
      }
      goto L_08A487FC;
    }
L_08A487FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48808;
      }
      goto L_08A48804;
    }
L_08A48804:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A48808;
L_08A48808:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4881C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A48848u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48848u) goto L_08A48848;
    return;
L_08A48848:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48858:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A48870u);
    // nop
    goto L_08A48ED8;
L_08A48870:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48894;
      }
      goto L_08A48884;
    }
L_08A48884:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A488B4;
      }
      goto L_08A48894;
    }
L_08A48894:
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A488B0;
      }
      goto L_08A488A0;
    }
L_08A488A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A488B4;
      }
      goto L_08A488B0;
    }
L_08A488B0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    goto L_08A488B4;
L_08A488B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A488C8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A488EC;
      }
      goto L_08A488DC;
    }
L_08A488DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4890C;
      }
      goto L_08A488EC;
    }
L_08A488EC:
    ctx.set_gpr(3, ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48908;
      }
      goto L_08A488F8;
    }
L_08A488F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4890C;
      }
      goto L_08A48908;
    }
L_08A48908:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    goto L_08A4890C;
L_08A4890C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48914:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48930;
      }
      goto L_08A4891C;
    }
L_08A4891C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48940;
      }
      goto L_08A48930;
    }
L_08A48930:
    ctx.set_gpr(5, ~(ctx.gpr[5] | 0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_08A48940;
L_08A48940:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48964;
      }
      goto L_08A48954;
    }
L_08A48954:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48984;
      }
      goto L_08A48964;
    }
L_08A48964:
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48980;
      }
      goto L_08A48970;
    }
L_08A48970:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48984;
      }
      goto L_08A48980;
    }
L_08A48980:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    goto L_08A48984;
L_08A48984:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4898C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48A38;
      }
      goto L_08A489C0;
    }
L_08A489C0:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48A34;
      }
      goto L_08A489D8;
    }
L_08A489D8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25092)));
    ctx.set_gpr(31, 0x08A489ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A489ECu) goto L_08A489EC;
    return;
L_08A489EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48A34;
      }
      goto L_08A489F4;
    }
L_08A489F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A48A08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48A08u) goto L_08A48A08;
    return;
L_08A48A08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 240u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 4u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48A34;
      }
      goto L_08A48A1C;
    }
L_08A48A1C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A48A34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48A34u) goto L_08A48A34;
    return;
L_08A48A34:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A48A38;
L_08A48A38:
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A489C0;
      }
      goto L_08A48A44;
    }
L_08A48A44:
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
L_08A48A68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48B28;
      }
      goto L_08A48AA0;
    }
L_08A48AA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A48ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 275u, 0x088BD87Cu>(ctx, &aot_mem) && ctx.pc == 0x08A48ABCu) goto L_08A48ABC;
    return;
L_08A48ABC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A48ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A48ACCu) goto L_08A48ACC;
    return;
L_08A48ACC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48B20;
      }
      goto L_08A48AD4;
    }
L_08A48AD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A48AF4;
      }
      goto L_08A48AE4;
    }
L_08A48AE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48B24;
      }
      goto L_08A48AF4;
    }
L_08A48AF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A48B24;
      }
      goto L_08A48B00;
    }
L_08A48B00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48B24;
      }
      goto L_08A48B20;
    }
L_08A48B20:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A48B24;
L_08A48B24:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A48B28;
L_08A48B28:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48AA0;
      }
      goto L_08A48B34;
    }
L_08A48B34:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_08A48B5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48BB0;
      }
      goto L_08A48B88;
    }
L_08A48B88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A48BACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48BACu) goto L_08A48BAC;
    return;
L_08A48BAC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A48BB0;
L_08A48BB0:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48B88;
      }
      goto L_08A48BBC;
    }
L_08A48BBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48BD8;
      }
      goto L_08A48BC8;
    }
L_08A48BC8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A48BD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48BD8u) goto L_08A48BD8;
    return;
L_08A48BD8:
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
L_08A48BF4:
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
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48C94;
      }
      goto L_08A48C30;
    }
L_08A48C30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48C90;
      }
      goto L_08A48C4C;
    }
L_08A48C4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48C90;
      }
      goto L_08A48C58;
    }
L_08A48C58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48C70;
      }
      goto L_08A48C64;
    }
L_08A48C64:
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48C80;
      }
      goto L_08A48C70;
    }
L_08A48C70:
    ctx.set_gpr(2, ~(ctx.gpr[19] | 0u));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    goto L_08A48C80;
L_08A48C80:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A48C90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48C90u) goto L_08A48C90;
    return;
L_08A48C90:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A48C94;
L_08A48C94:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48C30;
      }
      goto L_08A48CA0;
    }
L_08A48CA0:
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
L_08A48CC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48CE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48CF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A48D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A48D3Cu) goto L_08A48D3C;
    return;
L_08A48D3C:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48E24;
      }
      goto L_08A48D48;
    }
L_08A48D48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A48D70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48D70u) goto L_08A48D70;
    return;
L_08A48D70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26360)));
    ctx.set_gpr(31, 0x08A48D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A48D84u) goto L_08A48D84;
    return;
L_08A48D84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48DCC;
      }
      goto L_08A48D8C;
    }
L_08A48D8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48E20;
      }
      goto L_08A48D98;
    }
L_08A48D98:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A48DB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48DB4u) goto L_08A48DB4;
    return;
L_08A48DB4:
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A48DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 737u, 0x089FFB18u>(ctx, &aot_mem) && ctx.pc == 0x08A48DC4u) goto L_08A48DC4;
    return;
L_08A48DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48E20;
      }
      goto L_08A48DCC;
    }
L_08A48DCC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A48DE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48DE0u) goto L_08A48DE0;
    return;
L_08A48DE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26280)));
    ctx.set_gpr(31, 0x08A48DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A48DF4u) goto L_08A48DF4;
    return;
L_08A48DF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48E20;
      }
      goto L_08A48DFC;
    }
L_08A48DFC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A48E18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48E18u) goto L_08A48E18;
    return;
L_08A48E18:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    goto L_08A48E20;
L_08A48E20:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08A48E24;
L_08A48E24:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48D48;
      }
      goto L_08A48E30;
    }
L_08A48E30:
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
L_08A48E5C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25088)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A48E6C:
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
    ctx.set_gpr(31, 0x08A48E9Cu);
    // nop
    goto L_08A48CE8;
L_08A48E9C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A48EB8u);
    // nop
    goto L_08A48CF8;
L_08A48EB8:
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
L_08A48ED8:
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
    ctx.set_gpr(31, 0x08A48F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 265u, 0x08A593C8u>(ctx, &aot_mem) && ctx.pc == 0x08A48F08u) goto L_08A48F08;
    return;
L_08A48F08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48F20;
      }
      goto L_08A48F14;
    }
L_08A48F14:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48F24;
      }
      goto L_08A48F20;
    }
L_08A48F20:
    ctx.set_gpr(22, 0u + 0u);
    goto L_08A48F24;
L_08A48F24:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4903C;
      }
      goto L_08A48F30;
    }
L_08A48F30:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49038;
      }
      goto L_08A48F4C;
    }
L_08A48F4C:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48F7C;
      }
      goto L_08A48F5C;
    }
L_08A48F5C:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A48F78;
      }
      goto L_08A48F74;
    }
L_08A48F74:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A48F78;
L_08A48F78:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A48F7C;
L_08A48F7C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48F5C;
      }
      goto L_08A48F88;
    }
L_08A48F88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48FC4;
      }
      goto L_08A48FA0;
    }
L_08A48FA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A48FC0;
      }
      goto L_08A48FBC;
    }
L_08A48FBC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A48FC0;
L_08A48FC0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A48FC4;
L_08A48FC4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48FA0;
      }
      goto L_08A48FD0;
    }
L_08A48FD0:
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48FF8;
      }
      goto L_08A48FDC;
    }
L_08A48FDC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A48FF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A48FF4u) goto L_08A48FF4;
    return;
L_08A48FF4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A48FF8;
L_08A48FF8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48FDC;
      }
      goto L_08A49004;
    }
L_08A49004:
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4902C;
      }
      goto L_08A49010;
    }
L_08A49010:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A49028u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A49028u) goto L_08A49028;
    return;
L_08A49028:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A4902C;
L_08A4902C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49010;
      }
      goto L_08A49038;
    }
L_08A49038:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A4903C;
L_08A4903C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A48F30;
      }
      goto L_08A49048;
    }
L_08A49048:
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
L_08A49074:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4909C;
      }
      goto L_08A49090;
    }
L_08A49090:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A490A0;
      }
      goto L_08A4909C;
    }
L_08A4909C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A490A0;
L_08A490A0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A490B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A490B4u) goto L_08A490B4;
    return;
L_08A490B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A490C8;
      }
      goto L_08A490BC;
    }
L_08A490BC:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A490CC;
      }
      goto L_08A490C8;
    }
L_08A490C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A490CC;
L_08A490CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A490E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49118;
      }
      goto L_08A4910C;
    }
L_08A4910C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49190;
      }
      goto L_08A49118;
    }
L_08A49118:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A49130u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A49130u) goto L_08A49130;
    return;
L_08A49130:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4918C;
      }
      goto L_08A49138;
    }
L_08A49138:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A49158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 244u, 0x088C54E4u>(ctx, &aot_mem) && ctx.pc == 0x08A49158u) goto L_08A49158;
    return;
L_08A49158:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A49170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08A49170u) goto L_08A49170;
    return;
L_08A49170:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A49180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 207u, 0x08A58FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A49180u) goto L_08A49180;
    return;
L_08A49180:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49190;
      }
      goto L_08A4918C;
    }
L_08A4918C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A49190;
L_08A49190:
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
L_08A491B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A491E0;
      }
      goto L_08A491D4;
    }
L_08A491D4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A491E4;
      }
      goto L_08A491E0;
    }
L_08A491E0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A491E4;
L_08A491E4:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4921C;
      }
      goto L_08A491F0;
    }
L_08A491F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A49218u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A49218u) goto L_08A49218;
    return;
L_08A49218:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A4921C;
L_08A4921C:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A491F0;
      }
      goto L_08A49228;
    }
L_08A49228:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A49234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 215u, 0x08A59088u>(ctx, &aot_mem) && ctx.pc == 0x08A49234u) goto L_08A49234;
    return;
L_08A49234:
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
L_08A49250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49290;
      }
      goto L_08A49284;
    }
L_08A49284:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49294;
      }
      goto L_08A49290;
    }
L_08A49290:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A49294;
L_08A49294:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49378;
      }
      goto L_08A492A0;
    }
L_08A492A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A492CC;
      }
      goto L_08A492C0;
    }
L_08A492C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A492CC;
L_08A492CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A492E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A492E4u) goto L_08A492E4;
    return;
L_08A492E4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49304;
      }
      goto L_08A492FC;
    }
L_08A492FC:
    ctx.set_gpr(31, 0x08A49304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A49304u) goto L_08A49304;
    return;
L_08A49304:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A49314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A49314u) goto L_08A49314;
    return;
L_08A49314:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A4933Cu);
    // nop
    goto L_08A4947C;
L_08A4933C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49358;
      }
      goto L_08A4934C;
    }
L_08A4934C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A49358;
L_08A49358:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4936C;
      }
      goto L_08A49364;
    }
L_08A49364:
    ctx.set_gpr(31, 0x08A4936Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4936Cu) goto L_08A4936C;
    return;
L_08A4936C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49394;
      }
      goto L_08A49378;
    }
L_08A49378:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49394;
      }
      goto L_08A49388;
    }
L_08A49388:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A49394;
L_08A49394:
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
L_08A493B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A493E0;
      }
      goto L_08A493D4;
    }
L_08A493D4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A493E4;
      }
      goto L_08A493E0;
    }
L_08A493E0:
    ctx.set_gpr(6, 0u + 0u);
    goto L_08A493E4;
L_08A493E4:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4941C;
      }
      goto L_08A493F4;
    }
L_08A493F4:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A49418;
      }
      goto L_08A4940C;
    }
L_08A4940C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49428;
      }
      goto L_08A49418;
    }
L_08A49418:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A4941C;
L_08A4941C:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A493F4;
      }
      goto L_08A49428;
    }
L_08A49428:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49464;
      }
      goto L_08A49430;
    }
L_08A49430:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A49444u);
    // nop
    goto L_08A49250;
L_08A49444:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49458;
      }
      goto L_08A49450;
    }
L_08A49450:
    ctx.set_gpr(31, 0x08A49458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A49458u) goto L_08A49458;
    return;
L_08A49458:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49468;
      }
      goto L_08A49464;
    }
L_08A49464:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A49468;
L_08A49468:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4947C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A494A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A494A8u) goto L_08A494A8;
    return;
L_08A494A8:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22708)));
    ctx.set_gpr(6, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(3, ctx.gpr[17] & ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A495A4;
      }
      goto L_08A494C4;
    }
L_08A494C4:
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A494F0;
      }
      goto L_08A494D4;
    }
L_08A494D4:
    ctx.set_gpr(4, ctx.gpr[9] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08A494F0;
L_08A494F0:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49508;
      }
      goto L_08A494FC;
    }
L_08A494FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4950C;
      }
      goto L_08A49508;
    }
L_08A49508:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A4950C;
L_08A4950C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A494D4;
      }
      goto L_08A49518;
    }
L_08A49518:
    ctx.set_gpr(3, ~(ctx.gpr[10] | 0u));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[6] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A495A4;
      }
      goto L_08A49530;
    }
L_08A49530:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4954Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4954Cu) goto L_08A4954C;
    return;
L_08A4954C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49584;
      }
      goto L_08A49558;
    }
L_08A49558:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A49570u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A49570u) goto L_08A49570;
    return;
L_08A49570:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A49580u);
    // nop
    goto L_08A4947C;
L_08A49580:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A49584;
L_08A49584:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A49598u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A49598u) goto L_08A49598;
    return;
L_08A49598:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49558;
      }
      goto L_08A495A4;
    }
L_08A495A4:
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
L_08A495C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A495E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A495E8u) goto L_08A495E8;
    return;
L_08A495E8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49600;
      }
      goto L_08A495F4;
    }
L_08A495F4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49674;
      }
      goto L_08A49600;
    }
L_08A49600:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49618;
      }
      goto L_08A4960C;
    }
L_08A4960C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4961C;
      }
      goto L_08A49618;
    }
L_08A49618:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A4961C;
L_08A4961C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49664;
      }
      goto L_08A49628;
    }
L_08A49628:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4964Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4964Cu) goto L_08A4964C;
    return;
L_08A4964C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49660;
      }
      goto L_08A49654;
    }
L_08A49654:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49674;
      }
      goto L_08A49660;
    }
L_08A49660:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A49664;
L_08A49664:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49628;
      }
      goto L_08A49670;
    }
L_08A49670:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A49674;
L_08A49674:
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
L_08A49690:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A496A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A496A8u) goto L_08A496A8;
    return;
L_08A496A8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A496BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A496F4;
      }
      goto L_08A496E8;
    }
L_08A496E8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A496F8;
      }
      goto L_08A496F4;
    }
L_08A496F4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A496F8;
L_08A496F8:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49730;
      }
      goto L_08A49704;
    }
L_08A49704:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4972Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4972Cu) goto L_08A4972C;
    return;
L_08A4972C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A49730;
L_08A49730:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49704;
      }
      goto L_08A4973C;
    }
L_08A4973C:
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
L_08A4975C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A49764:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4978Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4978Cu) goto L_08A4978C;
    return;
L_08A4978C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4979C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A497DC;
      }
      goto L_08A497B8;
    }
L_08A497B8:
    ctx.set_gpr(31, 0x08A497C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A497C0u) goto L_08A497C0;
    return;
L_08A497C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A497CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 53u, 0x08A10464u>(ctx, &aot_mem) && ctx.pc == 0x08A497CCu) goto L_08A497CC;
    return;
L_08A497CC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A497DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A497DCu) goto L_08A497DC;
    return;
L_08A497DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A497F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A49818u);
    // nop
    goto L_08A4979C;
L_08A49818:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A4982Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4982Cu) goto L_08A4982C;
    return;
L_08A4982C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 2213u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26780));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A4984Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 12u, 0x08910144u>(ctx, &aot_mem) && ctx.pc == 0x08A4984Cu) goto L_08A4984C;
    return;
L_08A4984C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A49864;
      }
      goto L_08A49858;
    }
L_08A49858:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49878;
      }
      goto L_08A49864;
    }
L_08A49864:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A49878;
L_08A49878:
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
L_08A49894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A498B8u);
    // nop
    goto L_08A4979C;
L_08A498B8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A498CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A498CCu) goto L_08A498CC;
    return;
L_08A498CC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 2213u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26780));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A498F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 12u, 0x08910144u>(ctx, &aot_mem) && ctx.pc == 0x08A498F0u) goto L_08A498F0;
    return;
L_08A498F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A49944;
      }
      goto L_08A498F8;
    }
L_08A498F8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A49914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49914u) goto L_08A49914;
    return;
L_08A49914:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A49924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A49924u) goto L_08A49924;
    return;
L_08A49924:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49948;
      }
      goto L_08A49944;
    }
L_08A49944:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A49948;
L_08A49948:
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
L_08A49964:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 2213u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26780));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A499A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 28u, 0x08910268u>(ctx, &aot_mem) && ctx.pc == 0x08A499A8u) goto L_08A499A8;
    return;
L_08A499A8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A499DC;
      }
      goto L_08A499B8;
    }
L_08A499B8:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A499D4u);
    // nop
    goto L_08A49764;
L_08A499D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49A04;
      }
      goto L_08A499DC;
    }
L_08A499DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.set_gpr(31, 0x08A499ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x08A499ECu) goto L_08A499EC;
    return;
L_08A499EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A49A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 102u, 0x08920800u>(ctx, &aot_mem) && ctx.pc == 0x08A49A04u) goto L_08A49A04;
    return;
L_08A49A04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A49A20;
      }
      goto L_08A49A14;
    }
L_08A49A14:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49A24;
      }
      goto L_08A49A20;
    }
L_08A49A20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A49A24;
L_08A49A24:
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
L_08A49A44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A49A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 428u, 0x08945EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A49A64u) goto L_08A49A64;
    return;
L_08A49A64:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49AB0;
      }
      goto L_08A49A6C;
    }
L_08A49A6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A49A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08A49A7Cu) goto L_08A49A7C;
    return;
L_08A49A7C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49A9C;
      }
      goto L_08A49A94;
    }
L_08A49A94:
    ctx.set_gpr(31, 0x08A49A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A49A9Cu) goto L_08A49A9C;
    return;
L_08A49A9C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A49AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49AB0u) goto L_08A49AB0;
    return;
L_08A49AB0:
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
L_08A49AC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32150))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49B14;
      }
      goto L_08A49AEC;
    }
L_08A49AEC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26896)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22304));
    ctx.set_gpr(31, 0x08A49B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A49B04u) goto L_08A49B04;
    return;
L_08A49B04:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21772), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32150), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08A49B14;
L_08A49B14:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21772)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49B3C;
      }
      goto L_08A49B30;
    }
L_08A49B30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08A49B3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A49B3Cu) goto L_08A49B3C;
    return;
L_08A49B3C:
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
L_08A49B54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49BB4;
      }
      goto L_08A49B8C;
    }
L_08A49B8C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A49B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A49B98u) goto L_08A49B98;
    return;
L_08A49B98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49BAC;
      }
      goto L_08A49BA0;
    }
L_08A49BA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A49BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A49BACu) goto L_08A49BAC;
    return;
L_08A49BAC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A49BB4;
L_08A49BB4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A49BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A49BC8u) goto L_08A49BC8;
    return;
L_08A49BC8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49BF8;
      }
      goto L_08A49BDC;
    }
L_08A49BDC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49BF8;
      }
      goto L_08A49BF4;
    }
L_08A49BF4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A49BF8;
L_08A49BF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49C24;
      }
      goto L_08A49C00;
    }
L_08A49C00:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49C24;
      }
      goto L_08A49C18;
    }
L_08A49C18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A49C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49C24u) goto L_08A49C24;
    return;
L_08A49C24:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A49C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A49C38u) goto L_08A49C38;
    return;
L_08A49C38:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A49C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A49C48u) goto L_08A49C48;
    return;
L_08A49C48:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49C80;
      }
      goto L_08A49C58;
    }
L_08A49C58:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A49C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A49C64u) goto L_08A49C64;
    return;
L_08A49C64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49C78;
      }
      goto L_08A49C6C;
    }
L_08A49C6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A49C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A49C78u) goto L_08A49C78;
    return;
L_08A49C78:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A49C80;
L_08A49C80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A49C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A49C94u) goto L_08A49C94;
    return;
L_08A49C94:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49CC4;
      }
      goto L_08A49CA8;
    }
L_08A49CA8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49CC4;
      }
      goto L_08A49CC0;
    }
L_08A49CC0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A49CC4;
L_08A49CC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49CF0;
      }
      goto L_08A49CCC;
    }
L_08A49CCC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49CF0;
      }
      goto L_08A49CE4;
    }
L_08A49CE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A49CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49CF0u) goto L_08A49CF0;
    return;
L_08A49CF0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A49D10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A49D10u) goto L_08A49D10;
    return;
L_08A49D10:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A49D20u);
    // nop
    goto L_08A4A20C;
L_08A49D20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D34;
      }
      goto L_08A49D28;
    }
L_08A49D28:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A078;
      }
      goto L_08A49D34;
    }
L_08A49D34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08A49D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 230u, 0x08954DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A49D44u) goto L_08A49D44;
    return;
L_08A49D44:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D5C;
      }
      goto L_08A49D50;
    }
L_08A49D50:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49DA8;
      }
      goto L_08A49D5C;
    }
L_08A49D5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D94;
      }
      goto L_08A49D6C;
    }
L_08A49D6C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A49D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A49D78u) goto L_08A49D78;
    return;
L_08A49D78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D8C;
      }
      goto L_08A49D80;
    }
L_08A49D80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A49D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A49D8Cu) goto L_08A49D8C;
    return;
L_08A49D8C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A49D94;
L_08A49D94:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A49DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A49DA8u) goto L_08A49DA8;
    return;
L_08A49DA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A49DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08A49DC0u) goto L_08A49DC0;
    return;
L_08A49DC0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A49DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49DCCu) goto L_08A49DCC;
    return;
L_08A49DCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A49DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A49DD8u) goto L_08A49DD8;
    return;
L_08A49DD8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22324));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A49DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 746u, 0x089533D0u>(ctx, &aot_mem) && ctx.pc == 0x08A49DFCu) goto L_08A49DFC;
    return;
L_08A49DFC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49E80;
      }
      goto L_08A49E08;
    }
L_08A49E08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49E1C;
      }
      goto L_08A49E14;
    }
L_08A49E14:
    ctx.set_gpr(31, 0x08A49E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A49E1Cu) goto L_08A49E1C;
    return;
L_08A49E1C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49E48;
      }
      goto L_08A49E2C;
    }
L_08A49E2C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49E48;
      }
      goto L_08A49E44;
    }
L_08A49E44:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A49E48;
L_08A49E48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49E74;
      }
      goto L_08A49E50;
    }
L_08A49E50:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49E74;
      }
      goto L_08A49E68;
    }
L_08A49E68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A49E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49E74u) goto L_08A49E74;
    return;
L_08A49E74:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A078;
      }
      goto L_08A49E80;
    }
L_08A49E80:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A49E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49E8Cu) goto L_08A49E8C;
    return;
L_08A49E8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A49E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08A49E98u) goto L_08A49E98;
    return;
L_08A49E98:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49F90;
      }
      goto L_08A49EB4;
    }
L_08A49EB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A49EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A49EE0u) goto L_08A49EE0;
    return;
L_08A49EE0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22332));
    ctx.set_gpr(31, 0x08A49EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A49EF8u) goto L_08A49EF8;
    return;
L_08A49EF8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22332));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A49F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49F14u) goto L_08A49F14;
    return;
L_08A49F14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49F30;
      }
      goto L_08A49F28;
    }
L_08A49F28:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A49F30;
L_08A49F30:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A49F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A49F48u) goto L_08A49F48;
    return;
L_08A49F48:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49F78;
      }
      goto L_08A49F54;
    }
L_08A49F54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A49F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 692u, 0x08A5EF68u>(ctx, &aot_mem) && ctx.pc == 0x08A49F70u) goto L_08A49F70;
    return;
L_08A49F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49F8C;
      }
      goto L_08A49F78;
    }
L_08A49F78:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22340));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A49F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 461u, 0x08955FA4u>(ctx, &aot_mem) && ctx.pc == 0x08A49F8Cu) goto L_08A49F8C;
    return;
L_08A49F8C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A49F90;
L_08A49F90:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49EB4;
      }
      goto L_08A49F9C;
    }
L_08A49F9C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49FC8;
      }
      goto L_08A49FAC;
    }
L_08A49FAC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49FC8;
      }
      goto L_08A49FC4;
    }
L_08A49FC4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A49FC8;
L_08A49FC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49FF4;
      }
      goto L_08A49FD0;
    }
L_08A49FD0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49FF4;
      }
      goto L_08A49FE8;
    }
L_08A49FE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A49FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A49FF4u) goto L_08A49FF4;
    return;
L_08A49FF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A008;
      }
      goto L_08A4A000;
    }
L_08A4A000:
    ctx.set_gpr(31, 0x08A4A008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A008u) goto L_08A4A008;
    return;
L_08A4A008:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A01C;
      }
      goto L_08A4A014;
    }
L_08A4A014:
    ctx.set_gpr(31, 0x08A4A01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A01Cu) goto L_08A4A01C;
    return;
L_08A4A01C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A048;
      }
      goto L_08A4A02C;
    }
L_08A4A02C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A048;
      }
      goto L_08A4A044;
    }
L_08A4A044:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A048;
L_08A4A048:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A074;
      }
      goto L_08A4A050;
    }
L_08A4A050:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A074;
      }
      goto L_08A4A068;
    }
L_08A4A068:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4A074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A074u) goto L_08A4A074;
    return;
L_08A4A074:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A078;
L_08A4A078:
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
L_08A4A0A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A0D4;
      }
      goto L_08A4A0BC;
    }
L_08A4A0BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A0D4;
      }
      goto L_08A4A0C8;
    }
L_08A4A0C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A1F4;
      }
      goto L_08A4A0D4;
    }
L_08A4A0D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A4A0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 123u, 0x08A50740u>(ctx, &aot_mem) && ctx.pc == 0x08A4A0F0u) goto L_08A4A0F0;
    return;
L_08A4A0F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A4A1D4;
      }
      goto L_08A4A100;
    }
L_08A4A100:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A4A110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4A110u) goto L_08A4A110;
    return;
L_08A4A110:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A148;
      }
      goto L_08A4A120;
    }
L_08A4A120:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A4A12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A12Cu) goto L_08A4A12C;
    return;
L_08A4A12C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A140;
      }
      goto L_08A4A134;
    }
L_08A4A134:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4A140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4A140u) goto L_08A4A140;
    return;
L_08A4A140:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A4A148;
L_08A4A148:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A4A15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A4A15Cu) goto L_08A4A15C;
    return;
L_08A4A15C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A18C;
      }
      goto L_08A4A170;
    }
L_08A4A170:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A18C;
      }
      goto L_08A4A188;
    }
L_08A4A188:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A18C;
L_08A4A18C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A1B8;
      }
      goto L_08A4A194;
    }
L_08A4A194:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A1B8;
      }
      goto L_08A4A1AC;
    }
L_08A4A1AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4A1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A1B8u) goto L_08A4A1B8;
    return;
L_08A4A1B8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A4A1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4A1D4u) goto L_08A4A1D4;
    return;
L_08A4A1D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A1F0;
      }
      goto L_08A4A1E8;
    }
L_08A4A1E8:
    ctx.set_gpr(31, 0x08A4A1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A1F0u) goto L_08A4A1F0;
    return;
L_08A4A1F0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08A4A1F4;
L_08A4A1F4:
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
L_08A4A20C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A240;
      }
      goto L_08A4A228;
    }
L_08A4A228:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A240;
      }
      goto L_08A4A234;
    }
L_08A4A234:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AB00;
      }
      goto L_08A4A240;
    }
L_08A4A240:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A4A24Cu);
    // nop
    goto L_08A4A0A0;
L_08A4A24C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A260;
      }
      goto L_08A4A254;
    }
L_08A4A254:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AB00;
      }
      goto L_08A4A260;
    }
L_08A4A260:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A4A270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4A270u) goto L_08A4A270;
    return;
L_08A4A270:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A2A8;
      }
      goto L_08A4A280;
    }
L_08A4A280:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A4A28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A4A28Cu) goto L_08A4A28C;
    return;
L_08A4A28C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A2A0;
      }
      goto L_08A4A294;
    }
L_08A4A294:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4A2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4A2A0u) goto L_08A4A2A0;
    return;
L_08A4A2A0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A4A2A8;
L_08A4A2A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A4A2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A4A2BCu) goto L_08A4A2BC;
    return;
L_08A4A2BC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A2EC;
      }
      goto L_08A4A2D0;
    }
L_08A4A2D0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A2EC;
      }
      goto L_08A4A2E8;
    }
L_08A4A2E8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A2EC;
L_08A4A2EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A318;
      }
      goto L_08A4A2F4;
    }
L_08A4A2F4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A318;
      }
      goto L_08A4A30C;
    }
L_08A4A30C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4A318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A318u) goto L_08A4A318;
    return;
L_08A4A318:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22376));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A4A33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4A33Cu) goto L_08A4A33C;
    return;
L_08A4A33C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A4A354;
      }
      goto L_08A4A348;
    }
L_08A4A348:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AB00;
      }
      goto L_08A4A354;
    }
L_08A4A354:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22388));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4A380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4A380u) goto L_08A4A380;
    return;
L_08A4A380:
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A3A0;
      }
      goto L_08A4A394;
    }
L_08A4A394:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4A3A0;
L_08A4A3A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A3BC;
      }
      goto L_08A4A3B0;
    }
L_08A4A3B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4A3BC;
L_08A4A3BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A464;
      }
      goto L_08A4A3C4;
    }
L_08A4A3C4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A3F0;
      }
      goto L_08A4A3D4;
    }
L_08A4A3D4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A3F0;
      }
      goto L_08A4A3EC;
    }
L_08A4A3EC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A3F0;
L_08A4A3F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A404;
      }
      goto L_08A4A3F8;
    }
L_08A4A3F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08A4A404;
L_08A4A404:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A430;
      }
      goto L_08A4A414;
    }
L_08A4A414:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A430;
      }
      goto L_08A4A42C;
    }
L_08A4A42C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A430;
L_08A4A430:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A45C;
      }
      goto L_08A4A438;
    }
L_08A4A438:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A45C;
      }
      goto L_08A4A450;
    }
L_08A4A450:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4A45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A45Cu) goto L_08A4A45C;
    return;
L_08A4A45C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08A4A464;
L_08A4A464:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22400));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4A488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4A488u) goto L_08A4A488;
    return;
L_08A4A488:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A578;
      }
      goto L_08A4A494;
    }
L_08A4A494:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A4A8;
      }
      goto L_08A4A4A0;
    }
L_08A4A4A0:
    ctx.set_gpr(31, 0x08A4A4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A4A8u) goto L_08A4A4A8;
    return;
L_08A4A4A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A4BC;
      }
      goto L_08A4A4B4;
    }
L_08A4A4B4:
    ctx.set_gpr(31, 0x08A4A4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A4BCu) goto L_08A4A4BC;
    return;
L_08A4A4BC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A4E8;
      }
      goto L_08A4A4CC;
    }
L_08A4A4CC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A4E8;
      }
      goto L_08A4A4E4;
    }
L_08A4A4E4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A4E8;
L_08A4A4E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A514;
      }
      goto L_08A4A4F0;
    }
L_08A4A4F0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A514;
      }
      goto L_08A4A508;
    }
L_08A4A508:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4A514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A514u) goto L_08A4A514;
    return;
L_08A4A514:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A540;
      }
      goto L_08A4A524;
    }
L_08A4A524:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A540;
      }
      goto L_08A4A53C;
    }
L_08A4A53C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A540;
L_08A4A540:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A56C;
      }
      goto L_08A4A548;
    }
L_08A4A548:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A56C;
      }
      goto L_08A4A560;
    }
L_08A4A560:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4A56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A56Cu) goto L_08A4A56C;
    return;
L_08A4A56C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AB00;
      }
      goto L_08A4A578;
    }
L_08A4A578:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A4A590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 428u, 0x08A51810u>(ctx, &aot_mem) && ctx.pc == 0x08A4A590u) goto L_08A4A590;
    return;
L_08A4A590:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A4A5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4A5A0u) goto L_08A4A5A0;
    return;
L_08A4A5A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A5B4;
      }
      goto L_08A4A5AC;
    }
L_08A4A5AC:
    ctx.set_gpr(31, 0x08A4A5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A5B4u) goto L_08A4A5B4;
    return;
L_08A4A5B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A4A5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 428u, 0x08A51810u>(ctx, &aot_mem) && ctx.pc == 0x08A4A5CCu) goto L_08A4A5CC;
    return;
L_08A4A5CC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08A4A5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4A5DCu) goto L_08A4A5DC;
    return;
L_08A4A5DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A5F0;
      }
      goto L_08A4A5E8;
    }
L_08A4A5E8:
    ctx.set_gpr(31, 0x08A4A5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A5F0u) goto L_08A4A5F0;
    return;
L_08A4A5F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A6E0;
      }
      goto L_08A4A5FC;
    }
L_08A4A5FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A610;
      }
      goto L_08A4A608;
    }
L_08A4A608:
    ctx.set_gpr(31, 0x08A4A610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A610u) goto L_08A4A610;
    return;
L_08A4A610:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A624;
      }
      goto L_08A4A61C;
    }
L_08A4A61C:
    ctx.set_gpr(31, 0x08A4A624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A624u) goto L_08A4A624;
    return;
L_08A4A624:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A650;
      }
      goto L_08A4A634;
    }
L_08A4A634:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A650;
      }
      goto L_08A4A64C;
    }
L_08A4A64C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A650;
L_08A4A650:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A67C;
      }
      goto L_08A4A658;
    }
L_08A4A658:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A67C;
      }
      goto L_08A4A670;
    }
L_08A4A670:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4A67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A67Cu) goto L_08A4A67C;
    return;
L_08A4A67C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A6A8;
      }
      goto L_08A4A68C;
    }
L_08A4A68C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A6A8;
      }
      goto L_08A4A6A4;
    }
L_08A4A6A4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A6A8;
L_08A4A6A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A6D4;
      }
      goto L_08A4A6B0;
    }
L_08A4A6B0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A6D4;
      }
      goto L_08A4A6C8;
    }
L_08A4A6C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4A6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A6D4u) goto L_08A4A6D4;
    return;
L_08A4A6D4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AB00;
      }
      goto L_08A4A6E0;
    }
L_08A4A6E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A6F8;
      }
      goto L_08A4A6F0;
    }
L_08A4A6F0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4A6F8;
L_08A4A6F8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A70C;
      }
      goto L_08A4A704;
    }
L_08A4A704:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4A70C;
L_08A4A70C:
    ctx.set_gpr(31, 0x08A4A714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 748u, 0x0895B21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A714u) goto L_08A4A714;
    return;
L_08A4A714:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A734;
      }
      goto L_08A4A71C;
    }
L_08A4A71C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A4A72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4A72Cu) goto L_08A4A72C;
    return;
L_08A4A72C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A864;
      }
      goto L_08A4A734;
    }
L_08A4A734:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A4A750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 123u, 0x08A50740u>(ctx, &aot_mem) && ctx.pc == 0x08A4A750u) goto L_08A4A750;
    return;
L_08A4A750:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08A4A760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4A760u) goto L_08A4A760;
    return;
L_08A4A760:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A774;
      }
      goto L_08A4A76C;
    }
L_08A4A76C:
    ctx.set_gpr(31, 0x08A4A774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A774u) goto L_08A4A774;
    return;
L_08A4A774:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A864;
      }
      goto L_08A4A780;
    }
L_08A4A780:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A794;
      }
      goto L_08A4A78C;
    }
L_08A4A78C:
    ctx.set_gpr(31, 0x08A4A794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A794u) goto L_08A4A794;
    return;
L_08A4A794:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A7A8;
      }
      goto L_08A4A7A0;
    }
L_08A4A7A0:
    ctx.set_gpr(31, 0x08A4A7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A7A8u) goto L_08A4A7A8;
    return;
L_08A4A7A8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A7D4;
      }
      goto L_08A4A7B8;
    }
L_08A4A7B8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A7D4;
      }
      goto L_08A4A7D0;
    }
L_08A4A7D0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A7D4;
L_08A4A7D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A800;
      }
      goto L_08A4A7DC;
    }
L_08A4A7DC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A800;
      }
      goto L_08A4A7F4;
    }
L_08A4A7F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4A800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A800u) goto L_08A4A800;
    return;
L_08A4A800:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A82C;
      }
      goto L_08A4A810;
    }
L_08A4A810:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A82C;
      }
      goto L_08A4A828;
    }
L_08A4A828:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A82C;
L_08A4A82C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A858;
      }
      goto L_08A4A834;
    }
L_08A4A834:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A858;
      }
      goto L_08A4A84C;
    }
L_08A4A84C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4A858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A858u) goto L_08A4A858;
    return;
L_08A4A858:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AB00;
      }
      goto L_08A4A864;
    }
L_08A4A864:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A4A880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4A880u) goto L_08A4A880;
    return;
L_08A4A880:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A4A984;
      }
      goto L_08A4A890;
    }
L_08A4A890:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A4A8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4A8A0u) goto L_08A4A8A0;
    return;
L_08A4A8A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A8B4;
      }
      goto L_08A4A8AC;
    }
L_08A4A8AC:
    ctx.set_gpr(31, 0x08A4A8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A8B4u) goto L_08A4A8B4;
    return;
L_08A4A8B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A8C8;
      }
      goto L_08A4A8C0;
    }
L_08A4A8C0:
    ctx.set_gpr(31, 0x08A4A8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4A8C8u) goto L_08A4A8C8;
    return;
L_08A4A8C8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A8F4;
      }
      goto L_08A4A8D8;
    }
L_08A4A8D8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A8F4;
      }
      goto L_08A4A8F0;
    }
L_08A4A8F0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A8F4;
L_08A4A8F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A920;
      }
      goto L_08A4A8FC;
    }
L_08A4A8FC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A920;
      }
      goto L_08A4A914;
    }
L_08A4A914:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4A920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A920u) goto L_08A4A920;
    return;
L_08A4A920:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A94C;
      }
      goto L_08A4A930;
    }
L_08A4A930:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A94C;
      }
      goto L_08A4A948;
    }
L_08A4A948:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A94C;
L_08A4A94C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A978;
      }
      goto L_08A4A954;
    }
L_08A4A954:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A978;
      }
      goto L_08A4A96C;
    }
L_08A4A96C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4A978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4A978u) goto L_08A4A978;
    return;
L_08A4A978:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AB00;
      }
      goto L_08A4A984;
    }
L_08A4A984:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9B0;
      }
      goto L_08A4A994;
    }
L_08A4A994:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9B0;
      }
      goto L_08A4A9AC;
    }
L_08A4A9AC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A9B0;
L_08A4A9B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9C4;
      }
      goto L_08A4A9B8;
    }
L_08A4A9B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08A4A9C4;
L_08A4A9C4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9F0;
      }
      goto L_08A4A9D4;
    }
L_08A4A9D4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9F0;
      }
      goto L_08A4A9EC;
    }
L_08A4A9EC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4A9F0;
L_08A4A9F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AA1C;
      }
      goto L_08A4A9F8;
    }
L_08A4A9F8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AA1C;
      }
      goto L_08A4AA10;
    }
L_08A4AA10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4AA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AA1Cu) goto L_08A4AA1C;
    return;
L_08A4AA1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AA38;
      }
      goto L_08A4AA30;
    }
L_08A4AA30:
    ctx.set_gpr(31, 0x08A4AA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4AA38u) goto L_08A4AA38;
    return;
L_08A4AA38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AA4C;
      }
      goto L_08A4AA44;
    }
L_08A4AA44:
    ctx.set_gpr(31, 0x08A4AA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4AA4Cu) goto L_08A4AA4C;
    return;
L_08A4AA4C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AA78;
      }
      goto L_08A4AA5C;
    }
L_08A4AA5C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AA78;
      }
      goto L_08A4AA74;
    }
L_08A4AA74:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4AA78;
L_08A4AA78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AAA4;
      }
      goto L_08A4AA80;
    }
L_08A4AA80:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AAA4;
      }
      goto L_08A4AA98;
    }
L_08A4AA98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4AAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AAA4u) goto L_08A4AAA4;
    return;
L_08A4AAA4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AAD0;
      }
      goto L_08A4AAB4;
    }
L_08A4AAB4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AAD0;
      }
      goto L_08A4AACC;
    }
L_08A4AACC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4AAD0;
L_08A4AAD0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AAFC;
      }
      goto L_08A4AAD8;
    }
L_08A4AAD8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AAFC;
      }
      goto L_08A4AAF0;
    }
L_08A4AAF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4AAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AAFCu) goto L_08A4AAFC;
    return;
L_08A4AAFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4AB00;
L_08A4AB00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4AB18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A4AB40u);
    // nop
    goto L_08A4A0A0;
L_08A4AB40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AB54;
      }
      goto L_08A4AB48;
    }
L_08A4AB48:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ACC0;
      }
      goto L_08A4AB54;
    }
L_08A4AB54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22408));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A4AB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4AB6Cu) goto L_08A4AB6C;
    return;
L_08A4AB6C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A4AB88;
      }
      goto L_08A4AB7C;
    }
L_08A4AB7C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ACC0;
      }
      goto L_08A4AB88;
    }
L_08A4AB88:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22388));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4ABACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4ABACu) goto L_08A4ABAC;
    return;
L_08A4ABAC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AC20;
      }
      goto L_08A4ABB8;
    }
L_08A4ABB8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ABE8;
      }
      goto L_08A4ABCC;
    }
L_08A4ABCC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ABE8;
      }
      goto L_08A4ABE4;
    }
L_08A4ABE4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4ABE8;
L_08A4ABE8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AC14;
      }
      goto L_08A4ABF0;
    }
L_08A4ABF0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AC14;
      }
      goto L_08A4AC08;
    }
L_08A4AC08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4AC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AC14u) goto L_08A4AC14;
    return;
L_08A4AC14:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ACC0;
      }
      goto L_08A4AC20;
    }
L_08A4AC20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AC50;
      }
      goto L_08A4AC34;
    }
L_08A4AC34:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AC50;
      }
      goto L_08A4AC4C;
    }
L_08A4AC4C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4AC50;
L_08A4AC50:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AC64;
      }
      goto L_08A4AC58;
    }
L_08A4AC58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08A4AC64;
L_08A4AC64:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AC90;
      }
      goto L_08A4AC74;
    }
L_08A4AC74:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AC90;
      }
      goto L_08A4AC8C;
    }
L_08A4AC8C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4AC90;
L_08A4AC90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ACBC;
      }
      goto L_08A4AC98;
    }
L_08A4AC98:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ACBC;
      }
      goto L_08A4ACB0;
    }
L_08A4ACB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4ACBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4ACBCu) goto L_08A4ACBC;
    return;
L_08A4ACBC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A4ACC0;
L_08A4ACC0:
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
L_08A4ACD8:
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
          goto L_08A4AD14;
      }
      goto L_08A4AD08;
    }
L_08A4AD08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4AD14;
L_08A4AD14:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A4AD24u);
    // nop
    goto L_08A4A20C;
L_08A4AD24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD68;
      }
      goto L_08A4AD2C;
    }
L_08A4AD2C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD48;
      }
      goto L_08A4AD3C;
    }
L_08A4AD3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4AD48;
L_08A4AD48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD5C;
      }
      goto L_08A4AD54;
    }
L_08A4AD54:
    ctx.set_gpr(31, 0x08A4AD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4AD5Cu) goto L_08A4AD5C;
    return;
L_08A4AD5C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AE00;
      }
      goto L_08A4AD68;
    }
L_08A4AD68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4AD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 691u, 0x08953010u>(ctx, &aot_mem) && ctx.pc == 0x08A4AD88u) goto L_08A4AD88;
    return;
L_08A4AD88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ADCC;
      }
      goto L_08A4AD90;
    }
L_08A4AD90:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ADAC;
      }
      goto L_08A4ADA0;
    }
L_08A4ADA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4ADAC;
L_08A4ADAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ADC0;
      }
      goto L_08A4ADB8;
    }
L_08A4ADB8:
    ctx.set_gpr(31, 0x08A4ADC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4ADC0u) goto L_08A4ADC0;
    return;
L_08A4ADC0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AE00;
      }
      goto L_08A4ADCC;
    }
L_08A4ADCC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ADE8;
      }
      goto L_08A4ADDC;
    }
L_08A4ADDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4ADE8;
L_08A4ADE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ADFC;
      }
      goto L_08A4ADF4;
    }
L_08A4ADF4:
    ctx.set_gpr(31, 0x08A4ADFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4ADFCu) goto L_08A4ADFC;
    return;
L_08A4ADFC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A4AE00;
L_08A4AE00:
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
L_08A4AE1C:
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08A4AE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AE64u) goto L_08A4AE64;
    return;
L_08A4AE64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AEB4;
      }
      goto L_08A4AE6C;
    }
L_08A4AE6C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AE98;
      }
      goto L_08A4AE74;
    }
L_08A4AE74:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A4AE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AE84u) goto L_08A4AE84;
    return;
L_08A4AE84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AE98;
      }
      goto L_08A4AE8C;
    }
L_08A4AE8C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B150;
      }
      goto L_08A4AE98;
    }
L_08A4AE98:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A4AEACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 615u, 0x0894ACBCu>(ctx, &aot_mem) && ctx.pc == 0x08A4AEACu) goto L_08A4AEAC;
    return;
L_08A4AEAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AFA4;
      }
      goto L_08A4AEB4;
    }
L_08A4AEB4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4AEC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4AEC8u) goto L_08A4AEC8;
    return;
L_08A4AEC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-7448));
    ctx.set_gpr(31, 0x08A4AEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A4AEDCu) goto L_08A4AEDC;
    return;
L_08A4AEDC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AEF4;
      }
      goto L_08A4AEE8;
    }
L_08A4AEE8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B150;
      }
      goto L_08A4AEF4;
    }
L_08A4AEF4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26764)));
    ctx.set_gpr(31, 0x08A4AF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AF08u) goto L_08A4AF08;
    return;
L_08A4AF08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AF4C;
      }
      goto L_08A4AF10;
    }
L_08A4AF10:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26808)));
    ctx.set_gpr(31, 0x08A4AF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AF24u) goto L_08A4AF24;
    return;
L_08A4AF24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AF4C;
      }
      goto L_08A4AF2C;
    }
L_08A4AF2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AFA4;
      }
      goto L_08A4AF4C;
    }
L_08A4AF4C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4AF60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4AF60u) goto L_08A4AF60;
    return;
L_08A4AF60:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4AF70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AF70u) goto L_08A4AF70;
    return;
L_08A4AF70:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AF8C;
      }
      goto L_08A4AF80;
    }
L_08A4AF80:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B150;
      }
      goto L_08A4AF8C;
    }
L_08A4AF8C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A4AFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 798u, 0x089437F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4AFA4u) goto L_08A4AFA4;
    return;
L_08A4AFA4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B14C;
      }
      goto L_08A4AFAC;
    }
L_08A4AFAC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4AFC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4AFC0u) goto L_08A4AFC0;
    return;
L_08A4AFC0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A4AFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4AFD0u) goto L_08A4AFD0;
    return;
L_08A4AFD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4AFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 574u, 0x08A77520u>(ctx, &aot_mem) && ctx.pc == 0x08A4AFDCu) goto L_08A4AFDC;
    return;
L_08A4AFDC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4AFF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4AFF4u) goto L_08A4AFF4;
    return;
L_08A4AFF4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4B00Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B00Cu) goto L_08A4B00C;
    return;
L_08A4B00C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4B01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B01Cu) goto L_08A4B01C;
    return;
L_08A4B01C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B04C;
      }
      goto L_08A4B02C;
    }
L_08A4B02C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B040;
      }
      goto L_08A4B038;
    }
L_08A4B038:
    ctx.set_gpr(31, 0x08A4B040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4B040u) goto L_08A4B040;
    return;
L_08A4B040:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B150;
      }
      goto L_08A4B04C;
    }
L_08A4B04C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B064;
      }
      goto L_08A4B058;
    }
L_08A4B058:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4B064;
L_08A4B064:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A4B074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 127u, 0x08A789F4u>(ctx, &aot_mem) && ctx.pc == 0x08A4B074u) goto L_08A4B074;
    return;
L_08A4B074:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B088;
      }
      goto L_08A4B080;
    }
L_08A4B080:
    ctx.set_gpr(31, 0x08A4B088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4B088u) goto L_08A4B088;
    return;
L_08A4B088:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B0A0;
      }
      goto L_08A4B094;
    }
L_08A4B094:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A4B0A0;
L_08A4B0A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A4B0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 98u, 0x08A787F8u>(ctx, &aot_mem) && ctx.pc == 0x08A4B0BCu) goto L_08A4B0BC;
    return;
L_08A4B0BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B0D0;
      }
      goto L_08A4B0C8;
    }
L_08A4B0C8:
    ctx.set_gpr(31, 0x08A4B0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4B0D0u) goto L_08A4B0D0;
    return;
L_08A4B0D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B124;
      }
      goto L_08A4B0E0;
    }
L_08A4B0E0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A4B0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B0ECu) goto L_08A4B0EC;
    return;
L_08A4B0EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4B0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 436u, 0x08A76864u>(ctx, &aot_mem) && ctx.pc == 0x08A4B0F8u) goto L_08A4B0F8;
    return;
L_08A4B0F8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4B110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4B110u) goto L_08A4B110;
    return;
L_08A4B110:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B124;
      }
      goto L_08A4B11C;
    }
L_08A4B11C:
    ctx.set_gpr(31, 0x08A4B124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4B124u) goto L_08A4B124;
    return;
L_08A4B124:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A4B138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 184u, 0x08A78E70u>(ctx, &aot_mem) && ctx.pc == 0x08A4B138u) goto L_08A4B138;
    return;
L_08A4B138:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B14C;
      }
      goto L_08A4B144;
    }
L_08A4B144:
    ctx.set_gpr(31, 0x08A4B14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4B14Cu) goto L_08A4B14C;
    return;
L_08A4B14C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4B150;
L_08A4B150:
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
L_08A4B178:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
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
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(21, ctx.gpr[9] + 0u);
    ctx.set_gpr(31, 0x08A4B1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B1C4u) goto L_08A4B1C4;
    return;
L_08A4B1C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4B1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4B1D0u) goto L_08A4B1D0;
    return;
L_08A4B1D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A4B1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4B1ECu) goto L_08A4B1EC;
    return;
L_08A4B1EC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22424));
    ctx.set_gpr(31, 0x08A4B204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A4B204u) goto L_08A4B204;
    return;
L_08A4B204:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22424));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4B220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B220u) goto L_08A4B220;
    return;
L_08A4B220:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B23C;
      }
      goto L_08A4B234;
    }
L_08A4B234:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4B23C;
L_08A4B23C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4B254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4B254u) goto L_08A4B254;
    return;
L_08A4B254:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B490;
      }
      goto L_08A4B25C;
    }
L_08A4B25C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A4B284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 782u, 0x0894B8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4B284u) goto L_08A4B284;
    return;
L_08A4B284:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B308;
      }
      goto L_08A4B290;
    }
L_08A4B290:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B2BC;
      }
      goto L_08A4B2A0;
    }
L_08A4B2A0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B2BC;
      }
      goto L_08A4B2B8;
    }
L_08A4B2B8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4B2BC;
L_08A4B2BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B2E8;
      }
      goto L_08A4B2C4;
    }
L_08A4B2C4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B2E8;
      }
      goto L_08A4B2DC;
    }
L_08A4B2DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4B2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B2E8u) goto L_08A4B2E8;
    return;
L_08A4B2E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B2FC;
      }
      goto L_08A4B2F4;
    }
L_08A4B2F4:
    ctx.set_gpr(31, 0x08A4B2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4B2FCu) goto L_08A4B2FC;
    return;
L_08A4B2FC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 129u, 0x08A4C6BCu>(ctx, &aot_mem); return;
      }
      goto L_08A4B308;
    }
L_08A4B308:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A4B314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B314u) goto L_08A4B314;
    return;
L_08A4B314:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4B320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4B320u) goto L_08A4B320;
    return;
L_08A4B320:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4B33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4B33Cu) goto L_08A4B33C;
    return;
L_08A4B33C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22436));
    ctx.set_gpr(31, 0x08A4B354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A4B354u) goto L_08A4B354;
    return;
L_08A4B354:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22436));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4B370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B370u) goto L_08A4B370;
    return;
L_08A4B370:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B390;
      }
      goto L_08A4B388;
    }
L_08A4B388:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4B390;
L_08A4B390:
    ctx.set_gpr(31, 0x08A4B398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 782u, 0x0894B8E8u>(ctx, &aot_mem) && ctx.pc == 0x08A4B398u) goto L_08A4B398;
    return;
L_08A4B398:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B3CC;
      }
      goto L_08A4B3A4;
    }
L_08A4B3A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20392)));
    ctx.set_gpr(31, 0x08A4B3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B3B8u) goto L_08A4B3B8;
    return;
L_08A4B3B8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B3CC;
      }
      goto L_08A4B3C8;
    }
L_08A4B3C8:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A4B3CC;
L_08A4B3CC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4B3E8u);
    // nop
    goto L_08A4AE1C;
L_08A4B3E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B47C;
      }
      goto L_08A4B3F0;
    }
L_08A4B3F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B404;
      }
      goto L_08A4B3FC;
    }
L_08A4B3FC:
    ctx.set_gpr(31, 0x08A4B404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4B404u) goto L_08A4B404;
    return;
L_08A4B404:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B430;
      }
      goto L_08A4B414;
    }
L_08A4B414:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B430;
      }
      goto L_08A4B42C;
    }
L_08A4B42C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4B430;
L_08A4B430:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B45C;
      }
      goto L_08A4B438;
    }
L_08A4B438:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B45C;
      }
      goto L_08A4B450;
    }
L_08A4B450:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4B45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B45Cu) goto L_08A4B45C;
    return;
L_08A4B45C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B470;
      }
      goto L_08A4B468;
    }
L_08A4B468:
    ctx.set_gpr(31, 0x08A4B470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4B470u) goto L_08A4B470;
    return;
L_08A4B470:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 129u, 0x08A4C6BCu>(ctx, &aot_mem); return;
      }
      goto L_08A4B47C;
    }
L_08A4B47C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B490;
      }
      goto L_08A4B488;
    }
L_08A4B488:
    ctx.set_gpr(31, 0x08A4B490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4B490u) goto L_08A4B490;
    return;
L_08A4B490:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A4B4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4B4A0u) goto L_08A4B4A0;
    return;
L_08A4B4A0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22448));
    ctx.set_gpr(31, 0x08A4B4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A4B4B8u) goto L_08A4B4B8;
    return;
L_08A4B4B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22448));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4B4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B4D4u) goto L_08A4B4D4;
    return;
L_08A4B4D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B4F0;
      }
      goto L_08A4B4E8;
    }
L_08A4B4E8:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4B4F0;
L_08A4B4F0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4B508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4B508u) goto L_08A4B508;
    return;
L_08A4B508:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF94;
      }
      goto L_08A4B510;
    }
L_08A4B510:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x08A4B528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B528u) goto L_08A4B528;
    return;
L_08A4B528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BEF0;
      }
      goto L_08A4B530;
    }
L_08A4B530:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08A4B544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B544u) goto L_08A4B544;
    return;
L_08A4B544:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BDA4;
      }
      goto L_08A4B54C;
    }
L_08A4B54C:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29924)));
    ctx.set_gpr(31, 0x08A4B564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B564u) goto L_08A4B564;
    return;
L_08A4B564:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BC1C;
      }
      goto L_08A4B56C;
    }
L_08A4B56C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A4B578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B578u) goto L_08A4B578;
    return;
L_08A4B578:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4B584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4B584u) goto L_08A4B584;
    return;
L_08A4B584:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A4B594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B594u) goto L_08A4B594;
    return;
L_08A4B594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4B5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A4B5A0u) goto L_08A4B5A0;
    return;
L_08A4B5A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B5C4;
      }
      goto L_08A4B5BC;
    }
L_08A4B5BC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4B5C4;
L_08A4B5C4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08A4B5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 746u, 0x089533D0u>(ctx, &aot_mem) && ctx.pc == 0x08A4B5D4u) goto L_08A4B5D4;
    return;
L_08A4B5D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B630;
      }
      goto L_08A4B5F0;
    }
L_08A4B5F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A4B604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 912u, 0x08943FF8u>(ctx, &aot_mem) && ctx.pc == 0x08A4B604u) goto L_08A4B604;
    return;
L_08A4B604:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(31, 0x08A4B618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 615u, 0x0894ACBCu>(ctx, &aot_mem) && ctx.pc == 0x08A4B618u) goto L_08A4B618;
    return;
L_08A4B618:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B630;
      }
      goto L_08A4B628;
    }
L_08A4B628:
    ctx.set_gpr(31, 0x08A4B630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4B630u) goto L_08A4B630;
    return;
L_08A4B630:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4B644u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B644u) goto L_08A4B644;
    return;
L_08A4B644:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6072));
    ctx.set_gpr(31, 0x08A4B658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A4B658u) goto L_08A4B658;
    return;
L_08A4B658:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4B674u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B674u) goto L_08A4B674;
    return;
L_08A4B674:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22456));
    ctx.set_gpr(31, 0x08A4B688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A4B688u) goto L_08A4B688;
    return;
L_08A4B688:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4B6A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B6A0u) goto L_08A4B6A0;
    return;
L_08A4B6A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22464));
    ctx.set_gpr(31, 0x08A4B6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A4B6B4u) goto L_08A4B6B4;
    return;
L_08A4B6B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A4B6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 203u, 0x08940E70u>(ctx, &aot_mem) && ctx.pc == 0x08A4B6E4u) goto L_08A4B6E4;
    return;
L_08A4B6E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26720)));
    ctx.set_gpr(31, 0x08A4B6F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B6F8u) goto L_08A4B6F8;
    return;
L_08A4B6F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B9A4;
      }
      goto L_08A4B700;
    }
L_08A4B700:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B990;
      }
      goto L_08A4B71C;
    }
L_08A4B71C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A4B748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08A4B748u) goto L_08A4B748;
    return;
L_08A4B748:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A4B7F8;
      }
      goto L_08A4B758;
    }
L_08A4B758:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B76C;
      }
      goto L_08A4B764;
    }
L_08A4B764:
    ctx.set_gpr(31, 0x08A4B76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4B76Cu) goto L_08A4B76C;
    return;
L_08A4B76C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B780;
      }
      goto L_08A4B778;
    }
L_08A4B778:
    ctx.set_gpr(31, 0x08A4B780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4B780u) goto L_08A4B780;
    return;
L_08A4B780:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B7AC;
      }
      goto L_08A4B790;
    }
L_08A4B790:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B7AC;
      }
      goto L_08A4B7A8;
    }
L_08A4B7A8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4B7AC;
L_08A4B7AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B7D8;
      }
      goto L_08A4B7B4;
    }
L_08A4B7B4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B7D8;
      }
      goto L_08A4B7CC;
    }
L_08A4B7CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4B7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B7D8u) goto L_08A4B7D8;
    return;
L_08A4B7D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B7EC;
      }
      goto L_08A4B7E4;
    }
L_08A4B7E4:
    ctx.set_gpr(31, 0x08A4B7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4B7ECu) goto L_08A4B7EC;
    return;
L_08A4B7EC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 129u, 0x08A4C6BCu>(ctx, &aot_mem); return;
      }
      goto L_08A4B7F8;
    }
L_08A4B7F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B96C;
      }
      goto L_08A4B820;
    }
L_08A4B820:
    ctx.set_gpr(3, ctx.gpr[30] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A4B860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 709u, 0x08953164u>(ctx, &aot_mem) && ctx.pc == 0x08A4B860u) goto L_08A4B860;
    return;
L_08A4B860:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B8CC;
      }
      goto L_08A4B86C;
    }
L_08A4B86C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B898;
      }
      goto L_08A4B87C;
    }
L_08A4B87C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B898;
      }
      goto L_08A4B894;
    }
L_08A4B894:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4B898;
L_08A4B898:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B94C;
      }
      goto L_08A4B8A0;
    }
L_08A4B8A0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B94C;
      }
      goto L_08A4B8B8;
    }
L_08A4B8B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4B8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B8C4u) goto L_08A4B8C4;
    return;
L_08A4B8C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B94C;
      }
      goto L_08A4B8CC;
    }
L_08A4B8CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4B8F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B8F4u) goto L_08A4B8F4;
    return;
L_08A4B8F4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B920;
      }
      goto L_08A4B904;
    }
L_08A4B904:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B920;
      }
      goto L_08A4B91C;
    }
L_08A4B91C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4B920;
L_08A4B920:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B94C;
      }
      goto L_08A4B928;
    }
L_08A4B928:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B94C;
      }
      goto L_08A4B940;
    }
L_08A4B940:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4B94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B94Cu) goto L_08A4B94C;
    return;
L_08A4B94C:
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A4B968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 607u, 0x08942AACu>(ctx, &aot_mem) && ctx.pc == 0x08A4B968u) goto L_08A4B968;
    return;
L_08A4B968:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_08A4B96C;
L_08A4B96C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B820;
      }
      goto L_08A4B97C;
    }
L_08A4B97C:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    goto L_08A4B990;
L_08A4B990:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B71C;
      }
      goto L_08A4B99C;
    }
L_08A4B99C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BBEC;
      }
      goto L_08A4B9A4;
    }
L_08A4B9A4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08A4B9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4B9B8u) goto L_08A4B9B8;
    return;
L_08A4B9B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BB04;
      }
      goto L_08A4B9C0;
    }
L_08A4B9C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BAF0;
      }
      goto L_08A4B9D8;
    }
L_08A4B9D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A4BA08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 561u, 0x08A4DFA4u>(ctx, &aot_mem) && ctx.pc == 0x08A4BA08u) goto L_08A4BA08;
    return;
L_08A4BA08:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BAC8;
      }
      goto L_08A4BA14;
    }
L_08A4BA14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BA28;
      }
      goto L_08A4BA20;
    }
L_08A4BA20:
    ctx.set_gpr(31, 0x08A4BA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4BA28u) goto L_08A4BA28;
    return;
L_08A4BA28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BA3C;
      }
      goto L_08A4BA34;
    }
L_08A4BA34:
    ctx.set_gpr(31, 0x08A4BA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4BA3Cu) goto L_08A4BA3C;
    return;
L_08A4BA3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BA50;
      }
      goto L_08A4BA48;
    }
L_08A4BA48:
    ctx.set_gpr(31, 0x08A4BA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4BA50u) goto L_08A4BA50;
    return;
L_08A4BA50:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BA7C;
      }
      goto L_08A4BA60;
    }
L_08A4BA60:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BA7C;
      }
      goto L_08A4BA78;
    }
L_08A4BA78:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4BA7C;
L_08A4BA7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BAA8;
      }
      goto L_08A4BA84;
    }
L_08A4BA84:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BAA8;
      }
      goto L_08A4BA9C;
    }
L_08A4BA9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4BAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BAA8u) goto L_08A4BAA8;
    return;
L_08A4BAA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BABC;
      }
      goto L_08A4BAB4;
    }
L_08A4BAB4:
    ctx.set_gpr(31, 0x08A4BABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4BABCu) goto L_08A4BABC;
    return;
L_08A4BABC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 129u, 0x08A4C6BCu>(ctx, &aot_mem); return;
      }
      goto L_08A4BAC8;
    }
L_08A4BAC8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A4BAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4BAD4u) goto L_08A4BAD4;
    return;
L_08A4BAD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BAE8;
      }
      goto L_08A4BAE0;
    }
L_08A4BAE0:
    ctx.set_gpr(31, 0x08A4BAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4BAE8u) goto L_08A4BAE8;
    return;
L_08A4BAE8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08A4BAF0;
L_08A4BAF0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B9D8;
      }
      goto L_08A4BAFC;
    }
L_08A4BAFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BBEC;
      }
      goto L_08A4BB04;
    }
L_08A4BB04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26764)));
    ctx.set_gpr(31, 0x08A4BB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BB24u) goto L_08A4BB24;
    return;
L_08A4BB24:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BBE0;
      }
      goto L_08A4BB38;
    }
L_08A4BB38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(30, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BBAC;
      }
      goto L_08A4BB68;
    }
L_08A4BB68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A4BB74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4BB74u) goto L_08A4BB74;
    return;
L_08A4BB74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BBAC;
      }
      goto L_08A4BB7C;
    }
L_08A4BB7C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x08A4BB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 382u, 0x08941B90u>(ctx, &aot_mem) && ctx.pc == 0x08A4BB98u) goto L_08A4BB98;
    return;
L_08A4BB98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BBAC;
      }
      goto L_08A4BBA0;
    }
L_08A4BBA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4BBAC;
L_08A4BBAC:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BBD4;
      }
      goto L_08A4BBB4;
    }
L_08A4BBB4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4BBD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4BBD4u) goto L_08A4BBD4;
    return;
L_08A4BBD4:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    goto L_08A4BBE0;
L_08A4BBE0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BB38;
      }
      goto L_08A4BBEC;
    }
L_08A4BBEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BC00;
      }
      goto L_08A4BBF8;
    }
L_08A4BBF8:
    ctx.set_gpr(31, 0x08A4BC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4BC00u) goto L_08A4BC00;
    return;
L_08A4BC00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF94;
      }
      goto L_08A4BC0C;
    }
L_08A4BC0C:
    ctx.set_gpr(31, 0x08A4BC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4BC14u) goto L_08A4BC14;
    return;
L_08A4BC14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF94;
      }
      goto L_08A4BC1C;
    }
L_08A4BC1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A4BC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 561u, 0x08A4DFA4u>(ctx, &aot_mem) && ctx.pc == 0x08A4BC3Cu) goto L_08A4BC3C;
    return;
L_08A4BC3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BCD4;
      }
      goto L_08A4BC48;
    }
L_08A4BC48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BC5C;
      }
      goto L_08A4BC54;
    }
L_08A4BC54:
    ctx.set_gpr(31, 0x08A4BC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4BC5Cu) goto L_08A4BC5C;
    return;
L_08A4BC5C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BC88;
      }
      goto L_08A4BC6C;
    }
L_08A4BC6C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BC88;
      }
      goto L_08A4BC84;
    }
L_08A4BC84:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4BC88;
L_08A4BC88:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BCB4;
      }
      goto L_08A4BC90;
    }
L_08A4BC90:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BCB4;
      }
      goto L_08A4BCA8;
    }
L_08A4BCA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4BCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BCB4u) goto L_08A4BCB4;
    return;
L_08A4BCB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BCC8;
      }
      goto L_08A4BCC0;
    }
L_08A4BCC0:
    ctx.set_gpr(31, 0x08A4BCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4BCC8u) goto L_08A4BCC8;
    return;
L_08A4BCC8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 129u, 0x08A4C6BCu>(ctx, &aot_mem); return;
      }
      goto L_08A4BCD4;
    }
L_08A4BCD4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08A4BCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BCE0u) goto L_08A4BCE0;
    return;
L_08A4BCE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BD74;
      }
      goto L_08A4BCE8;
    }
L_08A4BCE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BCFC;
      }
      goto L_08A4BCF4;
    }
L_08A4BCF4:
    ctx.set_gpr(31, 0x08A4BCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4BCFCu) goto L_08A4BCFC;
    return;
L_08A4BCFC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BD28;
      }
      goto L_08A4BD0C;
    }
L_08A4BD0C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BD28;
      }
      goto L_08A4BD24;
    }
L_08A4BD24:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4BD28;
L_08A4BD28:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BD54;
      }
      goto L_08A4BD30;
    }
L_08A4BD30:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BD54;
      }
      goto L_08A4BD48;
    }
L_08A4BD48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4BD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BD54u) goto L_08A4BD54;
    return;
L_08A4BD54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BD68;
      }
      goto L_08A4BD60;
    }
L_08A4BD60:
    ctx.set_gpr(31, 0x08A4BD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4BD68u) goto L_08A4BD68;
    return;
L_08A4BD68:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 129u, 0x08A4C6BCu>(ctx, &aot_mem); return;
      }
      goto L_08A4BD74;
    }
L_08A4BD74:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(31, 0x08A4BD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 615u, 0x0894ACBCu>(ctx, &aot_mem) && ctx.pc == 0x08A4BD88u) goto L_08A4BD88;
    return;
L_08A4BD88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF94;
      }
      goto L_08A4BD94;
    }
L_08A4BD94:
    ctx.set_gpr(31, 0x08A4BD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4BD9Cu) goto L_08A4BD9C;
    return;
L_08A4BD9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF94;
      }
      goto L_08A4BDA4;
    }
L_08A4BDA4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27072)));
    ctx.set_gpr(31, 0x08A4BDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BDB8u) goto L_08A4BDB8;
    return;
L_08A4BDB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BE78;
      }
      goto L_08A4BDC0;
    }
L_08A4BDC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BDF0;
      }
      goto L_08A4BDD4;
    }
L_08A4BDD4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BDF0;
      }
      goto L_08A4BDEC;
    }
L_08A4BDEC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4BDF0;
L_08A4BDF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BE04;
      }
      goto L_08A4BDF8;
    }
L_08A4BDF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08A4BE04;
L_08A4BE04:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08A4BE18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 261u, 0x08959318u>(ctx, &aot_mem) && ctx.pc == 0x08A4BE18u) goto L_08A4BE18;
    return;
L_08A4BE18:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BE44;
      }
      goto L_08A4BE28;
    }
L_08A4BE28:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BE44;
      }
      goto L_08A4BE40;
    }
L_08A4BE40:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4BE44;
L_08A4BE44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF94;
      }
      goto L_08A4BE4C;
    }
L_08A4BE4C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF94;
      }
      goto L_08A4BE64;
    }
L_08A4BE64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4BE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BE70u) goto L_08A4BE70;
    return;
L_08A4BE70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF94;
      }
      goto L_08A4BE78;
    }
L_08A4BE78:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BEA4;
      }
      goto L_08A4BE88;
    }
L_08A4BE88:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BEA4;
      }
      goto L_08A4BEA0;
    }
L_08A4BEA0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4BEA4;
L_08A4BEA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BED0;
      }
      goto L_08A4BEAC;
    }
L_08A4BEAC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BED0;
      }
      goto L_08A4BEC4;
    }
L_08A4BEC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A4BED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BED0u) goto L_08A4BED0;
    return;
L_08A4BED0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BEE4;
      }
      goto L_08A4BEDC;
    }
L_08A4BEDC:
    ctx.set_gpr(31, 0x08A4BEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A4BEE4u) goto L_08A4BEE4;
    return;
L_08A4BEE4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 129u, 0x08A4C6BCu>(ctx, &aot_mem); return;
      }
      goto L_08A4BEF0;
    }
L_08A4BEF0:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26764)));
    ctx.set_gpr(31, 0x08A4BF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BF08u) goto L_08A4BF08;
    return;
L_08A4BF08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF64;
      }
      goto L_08A4BF10;
    }
L_08A4BF10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A4BF1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4BF1Cu) goto L_08A4BF1C;
    return;
L_08A4BF1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF64;
      }
      goto L_08A4BF24;
    }
L_08A4BF24:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08A4BF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 382u, 0x08941B90u>(ctx, &aot_mem) && ctx.pc == 0x08A4BF48u) goto L_08A4BF48;
    return;
L_08A4BF48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF64;
      }
      goto L_08A4BF50;
    }
L_08A4BF50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08A4BF64;
L_08A4BF64:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF94;
      }
      goto L_08A4BF6C;
    }
L_08A4BF6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A4BF94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4BF94u) goto L_08A4BF94;
    return;
L_08A4BF94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08A4BFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 559u, 0x0895A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A4BFA4u) goto L_08A4BFA4;
    return;
L_08A4BFA4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(22476));
    ctx.set_gpr(31, 0x08A4BFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A4BFBCu) goto L_08A4BFBC;
    return;
L_08A4BFBC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(22476));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A4BFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 568u, 0x0895A66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BFD8u) goto L_08A4BFD8;
    return;
L_08A4BFD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BFF4;
      }
      goto L_08A4BFEC;
    }
L_08A4BFEC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A4BFF4;
L_08A4BFF4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(8, ctx.gpr[28] + static_cast<std::uint32_t>(-32596));
    ctx.pc = 0x08A4C000u; return;
}

void recomp_unit_0145(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0145_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_145(Runtime &runtime) {
    runtime.register_generated_unit(145u, 0x08A48000u, 16384u, &recomp_unit_0145, &recomp_unit_0145_entry);
    runtime.register_function(0x08A48000u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4800Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48010u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4801Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48028u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48034u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48040u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48048u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48050u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4805Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48110u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48124u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4813Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48150u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4816Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48180u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48194u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48214u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48230u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4823Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48244u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48250u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48268u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48288u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48298u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A482ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A482C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A482D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A482F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48308u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48328u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48334u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4833Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48348u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4834Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48378u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A483B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A483CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A483D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A483F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4842Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48430u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4843Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48448u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48454u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48460u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48468u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48470u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4847Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A484ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4850Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4851Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48530u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48544u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4855Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48570u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4858Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48634u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48650u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4865Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48664u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48670u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48688u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48710u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48728u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48748u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48754u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4875Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48768u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4876Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48798u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A487F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A487FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48804u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48808u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4881Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48848u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48858u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48870u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48884u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48894u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488DCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48908u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4890Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48914u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4891Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48930u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48940u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48954u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48964u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48970u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48980u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48984u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4898Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A489C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A489D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A489ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A489F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A1Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48AA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48ABCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48ACCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48AD4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48AE4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48AF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B00u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48BACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48BB0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48BBCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48BC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48BD8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48BF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C58u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C64u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C90u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48CA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48CC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48CE8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48CF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D3Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D84u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D98u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DCCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DFCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E18u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E9Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48EB8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48ED8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F7Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FBCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FD0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FDCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49004u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49010u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49028u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4902Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49038u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4903Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49048u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49074u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49090u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4909Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A490A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A490B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A490BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A490C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A490CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A490E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4910Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49118u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49130u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49138u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49158u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49170u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49180u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4918Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49190u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A491B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A491D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A491E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A491E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A491F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49218u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4921Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49228u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49234u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49250u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49284u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49290u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49294u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A492A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A492C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A492CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A492E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A492FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49304u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49314u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4933Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4934Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49358u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49364u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4936Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49378u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49388u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49394u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A493B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A493D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A493E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A493E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A493F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4940Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49418u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4941Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49428u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49430u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49444u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49450u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49458u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49464u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49468u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4947Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A494A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A494C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A494D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A494F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A494FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49508u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4950Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49518u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49530u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4954Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49558u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49570u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49580u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49584u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49598u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A495A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A495C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A495E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A495F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49600u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4960Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49618u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4961Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49628u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4964Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49654u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49660u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49664u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49670u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49674u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49690u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A496A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A496BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A496E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A496F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A496F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49704u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4972Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49730u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4973Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4975Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49764u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4978Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4979Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497DCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49818u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4982Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4984Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49858u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49864u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49878u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49894u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A498B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A498CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A498F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A498F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49914u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49924u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49944u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49948u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49964u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A499A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A499B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A499D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A499DCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A499ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A04u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A64u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A7Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A9Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49AB0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49AC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49AECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B04u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B3Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B98u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49BA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49BACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49BB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49BC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49BDCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49BF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49BF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C00u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C18u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C58u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C64u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CCCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CE4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D50u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DCCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DD8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DFCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E1Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E50u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E98u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F90u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F9Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FD0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FE8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A000u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A008u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A014u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A01Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A02Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A044u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A048u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A050u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A068u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A074u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A078u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A100u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A110u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A120u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A12Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A134u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A140u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A148u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A15Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A170u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A188u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A18Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A194u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A1ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A1B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A1D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A1E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A1F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A1F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A20Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A228u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A234u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A240u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A24Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A254u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A260u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A270u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A280u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A28Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A294u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A30Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A318u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A33Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A348u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A354u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A380u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A394u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A404u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A414u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A42Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A430u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A438u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A450u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A45Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A464u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A488u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A494u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A508u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A514u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A524u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A53Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A540u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A548u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A560u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A56Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A578u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A590u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5DCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A608u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A610u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A61Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A624u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A634u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A64Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A650u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A658u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A670u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A67Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A68Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A704u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A70Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A714u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A71Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A72Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A734u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A750u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A760u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A76Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A774u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A780u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A78Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A794u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7DCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A800u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A810u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A828u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A82Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A834u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A84Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A858u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A864u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A880u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A890u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A914u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A920u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A930u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A948u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A94Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A954u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A96Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A978u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A984u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A994u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA1Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA98u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AACCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAD0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAD8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAFCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB00u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB18u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB40u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB7Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ABACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ABB8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ABCCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ABE4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ABE8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ABF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC50u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC58u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC64u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC90u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC98u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ACB0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ACBCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ACC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ACD8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD3Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD90u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADB8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADCCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADDCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADE8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADFCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE00u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE1Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE64u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE84u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE98u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEDCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEE8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFD0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFDCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B00Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B01Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B02Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B038u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B040u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B04Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B058u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B064u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B074u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B080u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B088u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B094u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B110u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B11Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B124u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B138u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B144u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B14Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B150u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B178u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B1C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B1D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B1ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B204u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B220u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B234u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B23Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B254u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B25Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B284u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B290u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2DCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B308u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B314u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B320u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B33Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B354u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B370u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B388u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B390u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B398u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B404u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B414u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B42Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B430u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B438u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B450u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B45Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B468u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B470u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B47Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B488u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B490u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B508u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B510u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B528u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B530u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B544u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B54Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B564u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B56Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B578u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B584u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B594u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B604u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B618u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B628u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B630u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B644u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B658u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B674u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B688u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B6A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B6B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B6E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B6F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B700u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B71Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B748u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B758u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B764u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B76Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B778u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B780u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B790u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B820u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B860u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B86Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B87Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B894u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B898u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B8A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B8B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B8C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B8CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B8F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B904u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B91Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B920u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B928u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B940u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B94Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B968u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B96Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B97Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B990u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B99Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B9A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B9B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B9C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B9D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA3Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA50u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA7Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA84u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA9Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BABCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAD4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAE8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAFCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB04u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB7Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB98u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBD4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC00u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC0Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC1Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC3Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC84u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC90u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCD4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCE8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCFCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD0Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD9Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDB8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDD4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE04u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE18u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE40u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE64u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BEA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BEA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BEACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BEC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BED0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BEDCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BEE4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BEF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF1Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF50u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF64u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFBCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFD8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFF4u, &recomp_unit_0145, "recomp_unit_0145");
}
} // namespace psprecomp
