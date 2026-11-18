#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0138[4092] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 25, 0, 0, 26, 0, 0,
    0, 27, 0, 0, 0, 28, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0,
    0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 65,
    0, 0, 66, 0, 0, 67, 68, 0, 0, 0, 69, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74,
    0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 81, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0,
    95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 98, 0, 99, 0, 0, 0, 0, 0, 100, 101, 0, 102, 0, 0, 0, 0, 0, 103, 104, 0, 105, 0,
    0, 0, 0, 0, 106, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0,
    0, 0, 0, 114, 0, 115, 0, 116, 117, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0,
    0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 128, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 136, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0,
    0, 144, 0, 0, 145, 0, 146, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 156, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0,
    0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0,
    0, 172, 0, 173, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0,
    178, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0,
    187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 195, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 202, 203, 0, 0, 204, 0, 0, 205, 0, 0,
    206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 212, 0, 213,
    0, 214, 215, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 221, 0, 222, 0, 223, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229,
    0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0,
    239, 0, 0, 240, 0, 241, 0, 0, 242, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0, 248, 249, 0, 0, 250, 0, 0, 251, 0, 252, 0,
    0, 253, 0, 254, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0,
    0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0,
    0, 0, 0, 274, 0, 275, 0, 0, 276, 0, 0, 277, 0, 278, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 284, 285, 0, 0, 286, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290,
    0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 309, 310, 0, 0, 311,
    0, 0, 312, 0, 0, 313, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0,
    320, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 326, 327, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 332, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0, 346, 0,
    0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 358,
    0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 372,
    0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 381, 0,
    0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 392, 0, 0, 393, 0, 0, 394, 0, 0,
    0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 397, 398, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0,
    0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0,
    0, 408, 0, 409, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 415, 0, 416, 0,
    0, 0, 0, 417, 0, 0, 418, 0, 419, 0, 0, 420, 0, 421, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 430,
    431, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 438, 439, 0,
    0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 446,
    0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0,
    0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0,
    0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 468, 0, 0, 0, 469, 0, 0, 0, 0, 470, 471, 0, 0, 472, 0,
    0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0,
    0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 483, 0, 0, 484, 0, 0,
    0, 485, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0,
    0, 0, 490, 0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 496, 497, 0, 0, 498, 0, 499,
    0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0,
    508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519,
    0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0,
    0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528,
    0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0,
    535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0,
    0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 563, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 570, 0, 0, 571, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0,
    0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581,
    582, 0, 0, 583, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0,
    0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594,
    0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597,
    0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 610,
    0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 617, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624,
    0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0,
    628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0,
    0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653,
    0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 656,
    0, 0, 657, 0, 0, 658, 0, 659, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 664, 0,
    665, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669,
    0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 676, 0, 0, 677, 0, 0, 678, 0, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0,
    0, 0, 684, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0,
    0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0,
    0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0,
    710, 0, 0, 711, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 0, 717, 0,
    0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0,
    723, 0, 724, 725, 0, 0, 726, 0, 0, 0, 0, 727, 0, 728, 0, 729, 730, 0, 0, 731, 0, 0, 0, 0, 732, 0, 733, 0, 734, 735, 0, 736,
    0, 0, 0, 0, 0, 737, 738, 0, 0, 0, 0, 0, 739, 740, 0, 0, 0, 0, 0, 741, 742, 0, 0, 0, 0, 0, 743, 744,
};
void recomp_unit_0138_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A2C000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0138[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A2C000;
    case 2u: goto L_08A2C02C;
    case 3u: goto L_08A2C038;
    case 4u: goto L_08A2C044;
    case 5u: goto L_08A2C05C;
    case 6u: goto L_08A2C070;
    case 7u: goto L_08A2C07C;
    case 8u: goto L_08A2C098;
    case 9u: goto L_08A2C0AC;
    case 10u: goto L_08A2C0BC;
    case 11u: goto L_08A2C0C4;
    case 12u: goto L_08A2C0D4;
    case 13u: goto L_08A2C0EC;
    case 14u: goto L_08A2C0F8;
    case 15u: goto L_08A2C104;
    case 16u: goto L_08A2C128;
    case 17u: goto L_08A2C140;
    case 18u: goto L_08A2C150;
    case 19u: goto L_08A2C198;
    case 20u: goto L_08A2C1A8;
    case 21u: goto L_08A2C1B0;
    case 22u: goto L_08A2C1C0;
    case 23u: goto L_08A2C1D8;
    case 24u: goto L_08A2C1E4;
    case 25u: goto L_08A2C1E8;
    case 26u: goto L_08A2C1F4;
    case 27u: goto L_08A2C204;
    case 28u: goto L_08A2C214;
    case 29u: goto L_08A2C218;
    case 30u: goto L_08A2C244;
    case 31u: goto L_08A2C298;
    case 32u: goto L_08A2C2AC;
    case 33u: goto L_08A2C2C8;
    case 34u: goto L_08A2C2D4;
    case 35u: goto L_08A2C2D8;
    case 36u: goto L_08A2C2E4;
    case 37u: goto L_08A2C2EC;
    case 38u: goto L_08A2C2F8;
    case 39u: goto L_08A2C304;
    case 40u: goto L_08A2C314;
    case 41u: goto L_08A2C328;
    case 42u: goto L_08A2C33C;
    case 43u: goto L_08A2C348;
    case 44u: goto L_08A2C370;
    case 45u: goto L_08A2C394;
    case 46u: goto L_08A2C3A4;
    case 47u: goto L_08A2C3B4;
    case 48u: goto L_08A2C3FC;
    case 49u: goto L_08A2C414;
    case 50u: goto L_08A2C41C;
    case 51u: goto L_08A2C42C;
    case 52u: goto L_08A2C450;
    case 53u: goto L_08A2C464;
    case 54u: goto L_08A2C484;
    case 55u: goto L_08A2C498;
    case 56u: goto L_08A2C4A0;
    case 57u: goto L_08A2C4AC;
    case 58u: goto L_08A2C4B8;
    case 59u: goto L_08A2C4C4;
    case 60u: goto L_08A2C4C8;
    case 61u: goto L_08A2C4D0;
    case 62u: goto L_08A2C4D8;
    case 63u: goto L_08A2C4E8;
    case 64u: goto L_08A2C4F0;
    case 65u: goto L_08A2C4FC;
    case 66u: goto L_08A2C508;
    case 67u: goto L_08A2C514;
    case 68u: goto L_08A2C518;
    case 69u: goto L_08A2C528;
    case 70u: goto L_08A2C52C;
    case 71u: goto L_08A2C53C;
    case 72u: goto L_08A2C550;
    case 73u: goto L_08A2C564;
    case 74u: goto L_08A2C57C;
    case 75u: goto L_08A2C584;
    case 76u: goto L_08A2C594;
    case 77u: goto L_08A2C5B8;
    case 78u: goto L_08A2C5C8;
    case 79u: goto L_08A2C5DC;
    case 80u: goto L_08A2C5E8;
    case 81u: goto L_08A2C5EC;
    case 82u: goto L_08A2C620;
    case 83u: goto L_08A2C640;
    case 84u: goto L_08A2C648;
    case 85u: goto L_08A2C654;
    case 86u: goto L_08A2C660;
    case 87u: goto L_08A2C674;
    case 88u: goto L_08A2C684;
    case 89u: goto L_08A2C6B8;
    case 90u: goto L_08A2C6C0;
    case 91u: goto L_08A2C6C8;
    case 92u: goto L_08A2C6D4;
    case 93u: goto L_08A2C6DC;
    case 94u: goto L_08A2C6E8;
    case 95u: goto L_08A2C700;
    case 96u: goto L_08A2C70C;
    case 97u: goto L_08A2C724;
    case 98u: goto L_08A2C728;
    case 99u: goto L_08A2C730;
    case 100u: goto L_08A2C748;
    case 101u: goto L_08A2C74C;
    case 102u: goto L_08A2C754;
    case 103u: goto L_08A2C76C;
    case 104u: goto L_08A2C770;
    case 105u: goto L_08A2C778;
    case 106u: goto L_08A2C790;
    case 107u: goto L_08A2C794;
    case 108u: goto L_08A2C7A4;
    case 109u: goto L_08A2C7BC;
    case 110u: goto L_08A2C7C4;
    case 111u: goto L_08A2C7D4;
    case 112u: goto L_08A2C7EC;
    case 113u: goto L_08A2C7F8;
    case 114u: goto L_08A2C80C;
    case 115u: goto L_08A2C814;
    case 116u: goto L_08A2C81C;
    case 117u: goto L_08A2C820;
    case 118u: goto L_08A2C828;
    case 119u: goto L_08A2C838;
    case 120u: goto L_08A2C854;
    case 121u: goto L_08A2C86C;
    case 122u: goto L_08A2C878;
    case 123u: goto L_08A2C884;
    case 124u: goto L_08A2C890;
    case 125u: goto L_08A2C8AC;
    case 126u: goto L_08A2C8C0;
    case 127u: goto L_08A2C8C8;
    case 128u: goto L_08A2C8D0;
    case 129u: goto L_08A2C8D4;
    case 130u: goto L_08A2C8E0;
    case 131u: goto L_08A2C8EC;
    case 132u: goto L_08A2C8F8;
    case 133u: goto L_08A2C918;
    case 134u: goto L_08A2C924;
    case 135u: goto L_08A2C930;
    case 136u: goto L_08A2C934;
    case 137u: goto L_08A2C93C;
    case 138u: goto L_08A2C944;
    case 139u: goto L_08A2C950;
    case 140u: goto L_08A2C958;
    case 141u: goto L_08A2C964;
    case 142u: goto L_08A2C96C;
    case 143u: goto L_08A2C978;
    case 144u: goto L_08A2C984;
    case 145u: goto L_08A2C990;
    case 146u: goto L_08A2C998;
    case 147u: goto L_08A2C99C;
    case 148u: goto L_08A2C9BC;
    case 149u: goto L_08A2C9EC;
    case 150u: goto L_08A2C9F8;
    case 151u: goto L_08A2CA14;
    case 152u: goto L_08A2CA20;
    case 153u: goto L_08A2CA2C;
    case 154u: goto L_08A2CA40;
    case 155u: goto L_08A2CA48;
    case 156u: goto L_08A2CA50;
    case 157u: goto L_08A2CA54;
    case 158u: goto L_08A2CA60;
    case 159u: goto L_08A2CA6C;
    case 160u: goto L_08A2CA78;
    case 161u: goto L_08A2CA8C;
    case 162u: goto L_08A2CA94;
    case 163u: goto L_08A2CA9C;
    case 164u: goto L_08A2CAB0;
    case 165u: goto L_08A2CAC0;
    case 166u: goto L_08A2CAC8;
    case 167u: goto L_08A2CAD4;
    case 168u: goto L_08A2CADC;
    case 169u: goto L_08A2CAE8;
    case 170u: goto L_08A2CAF0;
    case 171u: goto L_08A2CAF8;
    case 172u: goto L_08A2CB04;
    case 173u: goto L_08A2CB0C;
    case 174u: goto L_08A2CB10;
    case 175u: goto L_08A2CB30;
    case 176u: goto L_08A2CB64;
    case 177u: goto L_08A2CB78;
    case 178u: goto L_08A2CB80;
    case 179u: goto L_08A2CB88;
    case 180u: goto L_08A2CB9C;
    case 181u: goto L_08A2CBA4;
    case 182u: goto L_08A2CBB8;
    case 183u: goto L_08A2CBC8;
    case 184u: goto L_08A2CBD0;
    case 185u: goto L_08A2CBE8;
    case 186u: goto L_08A2CBF8;
    case 187u: goto L_08A2CC00;
    case 188u: goto L_08A2CC18;
    case 189u: goto L_08A2CC28;
    case 190u: goto L_08A2CC30;
    case 191u: goto L_08A2CC48;
    case 192u: goto L_08A2CC58;
    case 193u: goto L_08A2CC60;
    case 194u: goto L_08A2CC78;
    case 195u: goto L_08A2CC88;
    case 196u: goto L_08A2CC90;
    case 197u: goto L_08A2CC9C;
    case 198u: goto L_08A2CCA8;
    case 199u: goto L_08A2CCB4;
    case 200u: goto L_08A2CCC8;
    case 201u: goto L_08A2CCD0;
    case 202u: goto L_08A2CCD8;
    case 203u: goto L_08A2CCDC;
    case 204u: goto L_08A2CCE8;
    case 205u: goto L_08A2CCF4;
    case 206u: goto L_08A2CD00;
    case 207u: goto L_08A2CD18;
    case 208u: goto L_08A2CD2C;
    case 209u: goto L_08A2CD3C;
    case 210u: goto L_08A2CD54;
    case 211u: goto L_08A2CD60;
    case 212u: goto L_08A2CD74;
    case 213u: goto L_08A2CD7C;
    case 214u: goto L_08A2CD84;
    case 215u: goto L_08A2CD88;
    case 216u: goto L_08A2CD90;
    case 217u: goto L_08A2CDA4;
    case 218u: goto L_08A2CDC4;
    case 219u: goto L_08A2CDD0;
    case 220u: goto L_08A2CDF0;
    case 221u: goto L_08A2CE04;
    case 222u: goto L_08A2CE0C;
    case 223u: goto L_08A2CE14;
    case 224u: goto L_08A2CE18;
    case 225u: goto L_08A2CE24;
    case 226u: goto L_08A2CE30;
    case 227u: goto L_08A2CE44;
    case 228u: goto L_08A2CE64;
    case 229u: goto L_08A2CE7C;
    case 230u: goto L_08A2CE84;
    case 231u: goto L_08A2CE8C;
    case 232u: goto L_08A2CEA8;
    case 233u: goto L_08A2CEC0;
    case 234u: goto L_08A2CED0;
    case 235u: goto L_08A2CED8;
    case 236u: goto L_08A2CEE4;
    case 237u: goto L_08A2CEEC;
    case 238u: goto L_08A2CEF8;
    case 239u: goto L_08A2CF00;
    case 240u: goto L_08A2CF0C;
    case 241u: goto L_08A2CF14;
    case 242u: goto L_08A2CF20;
    case 243u: goto L_08A2CF24;
    case 244u: goto L_08A2CF30;
    case 245u: goto L_08A2CF38;
    case 246u: goto L_08A2CF40;
    case 247u: goto L_08A2CF4C;
    case 248u: goto L_08A2CF54;
    case 249u: goto L_08A2CF58;
    case 250u: goto L_08A2CF64;
    case 251u: goto L_08A2CF70;
    case 252u: goto L_08A2CF78;
    case 253u: goto L_08A2CF84;
    case 254u: goto L_08A2CF8C;
    case 255u: goto L_08A2CF90;
    case 256u: goto L_08A2CFB8;
    case 257u: goto L_08A2CFE4;
    case 258u: goto L_08A2CFF4;
    case 259u: goto L_08A2D018;
    case 260u: goto L_08A2D024;
    case 261u: goto L_08A2D03C;
    case 262u: goto L_08A2D048;
    case 263u: goto L_08A2D050;
    case 264u: goto L_08A2D05C;
    case 265u: goto L_08A2D064;
    case 266u: goto L_08A2D078;
    case 267u: goto L_08A2D08C;
    case 268u: goto L_08A2D098;
    case 269u: goto L_08A2D0A0;
    case 270u: goto L_08A2D0A8;
    case 271u: goto L_08A2D0B8;
    case 272u: goto L_08A2D0E0;
    case 273u: goto L_08A2D0E8;
    case 274u: goto L_08A2D10C;
    case 275u: goto L_08A2D114;
    case 276u: goto L_08A2D120;
    case 277u: goto L_08A2D12C;
    case 278u: goto L_08A2D134;
    case 279u: goto L_08A2D138;
    case 280u: goto L_08A2D154;
    case 281u: goto L_08A2D178;
    case 282u: goto L_08A2D194;
    case 283u: goto L_08A2D1B0;
    case 284u: goto L_08A2D1B8;
    case 285u: goto L_08A2D1BC;
    case 286u: goto L_08A2D1C8;
    case 287u: goto L_08A2D1CC;
    case 288u: goto L_08A2D1DC;
    case 289u: goto L_08A2D1EC;
    case 290u: goto L_08A2D1FC;
    case 291u: goto L_08A2D20C;
    case 292u: goto L_08A2D21C;
    case 293u: goto L_08A2D254;
    case 294u: goto L_08A2D25C;
    case 295u: goto L_08A2D278;
    case 296u: goto L_08A2D28C;
    case 297u: goto L_08A2D29C;
    case 298u: goto L_08A2D2B4;
    case 299u: goto L_08A2D2C4;
    case 300u: goto L_08A2D2F0;
    case 301u: goto L_08A2D34C;
    case 302u: goto L_08A2D354;
    case 303u: goto L_08A2D35C;
    case 304u: goto L_08A2D364;
    case 305u: goto L_08A2D36C;
    case 306u: goto L_08A2D3A8;
    case 307u: goto L_08A2D3D8;
    case 308u: goto L_08A2D3E0;
    case 309u: goto L_08A2D3EC;
    case 310u: goto L_08A2D3F0;
    case 311u: goto L_08A2D3FC;
    case 312u: goto L_08A2D408;
    case 313u: goto L_08A2D414;
    case 314u: goto L_08A2D418;
    case 315u: goto L_08A2D424;
    case 316u: goto L_08A2D440;
    case 317u: goto L_08A2D444;
    case 318u: goto L_08A2D458;
    case 319u: goto L_08A2D464;
    case 320u: goto L_08A2D480;
    case 321u: goto L_08A2D484;
    case 322u: goto L_08A2D498;
    case 323u: goto L_08A2D4A4;
    case 324u: goto L_08A2D4C4;
    case 325u: goto L_08A2D4CC;
    case 326u: goto L_08A2D4D8;
    case 327u: goto L_08A2D4DC;
    case 328u: goto L_08A2D4E8;
    case 329u: goto L_08A2D510;
    case 330u: goto L_08A2D53C;
    case 331u: goto L_08A2D560;
    case 332u: goto L_08A2D564;
    case 333u: goto L_08A2D570;
    case 334u: goto L_08A2D58C;
    case 335u: goto L_08A2D5A8;
    case 336u: goto L_08A2D5B8;
    case 337u: goto L_08A2D5D8;
    case 338u: goto L_08A2D5E4;
    case 339u: goto L_08A2D600;
    case 340u: goto L_08A2D614;
    case 341u: goto L_08A2D628;
    case 342u: goto L_08A2D64C;
    case 343u: goto L_08A2D654;
    case 344u: goto L_08A2D664;
    case 345u: goto L_08A2D66C;
    case 346u: goto L_08A2D678;
    case 347u: goto L_08A2D684;
    case 348u: goto L_08A2D68C;
    case 349u: goto L_08A2D6A8;
    case 350u: goto L_08A2D6BC;
    case 351u: goto L_08A2D6D0;
    case 352u: goto L_08A2D6E8;
    case 353u: goto L_08A2D714;
    case 354u: goto L_08A2D71C;
    case 355u: goto L_08A2D738;
    case 356u: goto L_08A2D75C;
    case 357u: goto L_08A2D774;
    case 358u: goto L_08A2D77C;
    case 359u: goto L_08A2D78C;
    case 360u: goto L_08A2D7A0;
    case 361u: goto L_08A2D7BC;
    case 362u: goto L_08A2D7C4;
    case 363u: goto L_08A2D7CC;
    case 364u: goto L_08A2D7D8;
    case 365u: goto L_08A2D7F0;
    case 366u: goto L_08A2D808;
    case 367u: goto L_08A2D824;
    case 368u: goto L_08A2D82C;
    case 369u: goto L_08A2D844;
    case 370u: goto L_08A2D864;
    case 371u: goto L_08A2D874;
    case 372u: goto L_08A2D87C;
    case 373u: goto L_08A2D888;
    case 374u: goto L_08A2D898;
    case 375u: goto L_08A2D8A0;
    case 376u: goto L_08A2D8AC;
    case 377u: goto L_08A2D8B8;
    case 378u: goto L_08A2D8C0;
    case 379u: goto L_08A2D8DC;
    case 380u: goto L_08A2D8E4;
    case 381u: goto L_08A2D8F8;
    case 382u: goto L_08A2D908;
    case 383u: goto L_08A2D918;
    case 384u: goto L_08A2D93C;
    case 385u: goto L_08A2D940;
    case 386u: goto L_08A2D94C;
    case 387u: goto L_08A2D968;
    case 388u: goto L_08A2D9A0;
    case 389u: goto L_08A2D9AC;
    case 390u: goto L_08A2D9C0;
    case 391u: goto L_08A2D9D8;
    case 392u: goto L_08A2D9DC;
    case 393u: goto L_08A2D9E8;
    case 394u: goto L_08A2D9F4;
    case 395u: goto L_08A2DA14;
    case 396u: goto L_08A2DA2C;
    case 397u: goto L_08A2DA38;
    case 398u: goto L_08A2DA3C;
    case 399u: goto L_08A2DA48;
    case 400u: goto L_08A2DA50;
    case 401u: goto L_08A2DA68;
    case 402u: goto L_08A2DA78;
    case 403u: goto L_08A2DA98;
    case 404u: goto L_08A2DAB8;
    case 405u: goto L_08A2DAC4;
    case 406u: goto L_08A2DAD0;
    case 407u: goto L_08A2DAE4;
    case 408u: goto L_08A2DB04;
    case 409u: goto L_08A2DB0C;
    case 410u: goto L_08A2DB24;
    case 411u: goto L_08A2DB2C;
    case 412u: goto L_08A2DB40;
    case 413u: goto L_08A2DB54;
    case 414u: goto L_08A2DB5C;
    case 415u: goto L_08A2DB70;
    case 416u: goto L_08A2DB78;
    case 417u: goto L_08A2DB8C;
    case 418u: goto L_08A2DB98;
    case 419u: goto L_08A2DBA0;
    case 420u: goto L_08A2DBAC;
    case 421u: goto L_08A2DBB4;
    case 422u: goto L_08A2DBBC;
    case 423u: goto L_08A2DBC8;
    case 424u: goto L_08A2DBF4;
    case 425u: goto L_08A2DC24;
    case 426u: goto L_08A2DC34;
    case 427u: goto L_08A2DC48;
    case 428u: goto L_08A2DC5C;
    case 429u: goto L_08A2DC74;
    case 430u: goto L_08A2DC7C;
    case 431u: goto L_08A2DC80;
    case 432u: goto L_08A2DC8C;
    case 433u: goto L_08A2DC9C;
    case 434u: goto L_08A2DCB0;
    case 435u: goto L_08A2DCBC;
    case 436u: goto L_08A2DCD4;
    case 437u: goto L_08A2DCEC;
    case 438u: goto L_08A2DCF4;
    case 439u: goto L_08A2DCF8;
    case 440u: goto L_08A2DD04;
    case 441u: goto L_08A2DD14;
    case 442u: goto L_08A2DD28;
    case 443u: goto L_08A2DD34;
    case 444u: goto L_08A2DD54;
    case 445u: goto L_08A2DD78;
    case 446u: goto L_08A2DD7C;
    case 447u: goto L_08A2DD88;
    case 448u: goto L_08A2DDA8;
    case 449u: goto L_08A2DDF0;
    case 450u: goto L_08A2DDF8;
    case 451u: goto L_08A2DE08;
    case 452u: goto L_08A2DE14;
    case 453u: goto L_08A2DE24;
    case 454u: goto L_08A2DE38;
    case 455u: goto L_08A2DE4C;
    case 456u: goto L_08A2DE5C;
    case 457u: goto L_08A2DE68;
    case 458u: goto L_08A2DE78;
    case 459u: goto L_08A2DE94;
    case 460u: goto L_08A2DEAC;
    case 461u: goto L_08A2DEB8;
    case 462u: goto L_08A2DEC0;
    case 463u: goto L_08A2DEDC;
    case 464u: goto L_08A2DF00;
    case 465u: goto L_08A2DF18;
    case 466u: goto L_08A2DF24;
    case 467u: goto L_08A2DF40;
    case 468u: goto L_08A2DF44;
    case 469u: goto L_08A2DF54;
    case 470u: goto L_08A2DF68;
    case 471u: goto L_08A2DF6C;
    case 472u: goto L_08A2DF78;
    case 473u: goto L_08A2DF84;
    case 474u: goto L_08A2DF94;
    case 475u: goto L_08A2DFA0;
    case 476u: goto L_08A2DFB0;
    case 477u: goto L_08A2DFE0;
    case 478u: goto L_08A2DFF4;
    case 479u: goto L_08A2E004;
    case 480u: goto L_08A2E03C;
    case 481u: goto L_08A2E04C;
    case 482u: goto L_08A2E058;
    case 483u: goto L_08A2E068;
    case 484u: goto L_08A2E074;
    case 485u: goto L_08A2E084;
    case 486u: goto L_08A2E090;
    case 487u: goto L_08A2E0A4;
    case 488u: goto L_08A2E0CC;
    case 489u: goto L_08A2E0F0;
    case 490u: goto L_08A2E108;
    case 491u: goto L_08A2E114;
    case 492u: goto L_08A2E130;
    case 493u: goto L_08A2E134;
    case 494u: goto L_08A2E140;
    case 495u: goto L_08A2E160;
    case 496u: goto L_08A2E164;
    case 497u: goto L_08A2E168;
    case 498u: goto L_08A2E174;
    case 499u: goto L_08A2E17C;
    case 500u: goto L_08A2E18C;
    case 501u: goto L_08A2E198;
    case 502u: goto L_08A2E1AC;
    case 503u: goto L_08A2E1B8;
    case 504u: goto L_08A2E1C8;
    case 505u: goto L_08A2E1D4;
    case 506u: goto L_08A2E1E4;
    case 507u: goto L_08A2E1F4;
    case 508u: goto L_08A2E200;
    case 509u: goto L_08A2E210;
    case 510u: goto L_08A2E220;
    case 511u: goto L_08A2E22C;
    case 512u: goto L_08A2E234;
    case 513u: goto L_08A2E258;
    case 514u: goto L_08A2E294;
    case 515u: goto L_08A2E2A4;
    case 516u: goto L_08A2E2BC;
    case 517u: goto L_08A2E2D0;
    case 518u: goto L_08A2E2E4;
    case 519u: goto L_08A2E2FC;
    case 520u: goto L_08A2E314;
    case 521u: goto L_08A2E320;
    case 522u: goto L_08A2E354;
    case 523u: goto L_08A2E368;
    case 524u: goto L_08A2E374;
    case 525u: goto L_08A2E38C;
    case 526u: goto L_08A2E3A8;
    case 527u: goto L_08A2E3C0;
    case 528u: goto L_08A2E3FC;
    case 529u: goto L_08A2E420;
    case 530u: goto L_08A2E428;
    case 531u: goto L_08A2E448;
    case 532u: goto L_08A2E450;
    case 533u: goto L_08A2E464;
    case 534u: goto L_08A2E478;
    case 535u: goto L_08A2E480;
    case 536u: goto L_08A2E4A8;
    case 537u: goto L_08A2E4BC;
    case 538u: goto L_08A2E4E8;
    case 539u: goto L_08A2E518;
    case 540u: goto L_08A2E52C;
    case 541u: goto L_08A2E53C;
    case 542u: goto L_08A2E570;
    case 543u: goto L_08A2E5A0;
    case 544u: goto L_08A2E5B0;
    case 545u: goto L_08A2E5C8;
    case 546u: goto L_08A2E5E4;
    case 547u: goto L_08A2E610;
    case 548u: goto L_08A2E630;
    case 549u: goto L_08A2E648;
    case 550u: goto L_08A2E65C;
    case 551u: goto L_08A2E670;
    case 552u: goto L_08A2E688;
    case 553u: goto L_08A2E6A0;
    case 554u: goto L_08A2E6AC;
    case 555u: goto L_08A2E6E0;
    case 556u: goto L_08A2E718;
    case 557u: goto L_08A2E720;
    case 558u: goto L_08A2E72C;
    case 559u: goto L_08A2E744;
    case 560u: goto L_08A2E74C;
    case 561u: goto L_08A2E760;
    case 562u: goto L_08A2E768;
    case 563u: goto L_08A2E778;
    case 564u: goto L_08A2E7A0;
    case 565u: goto L_08A2E7AC;
    case 566u: goto L_08A2E7CC;
    case 567u: goto L_08A2E7EC;
    case 568u: goto L_08A2E818;
    case 569u: goto L_08A2E860;
    case 570u: goto L_08A2E864;
    case 571u: goto L_08A2E870;
    case 572u: goto L_08A2E89C;
    case 573u: goto L_08A2E8B8;
    case 574u: goto L_08A2E8C4;
    case 575u: goto L_08A2E8DC;
    case 576u: goto L_08A2E8E8;
    case 577u: goto L_08A2E904;
    case 578u: goto L_08A2E93C;
    case 579u: goto L_08A2E954;
    case 580u: goto L_08A2E960;
    case 581u: goto L_08A2E97C;
    case 582u: goto L_08A2E980;
    case 583u: goto L_08A2E98C;
    case 584u: goto L_08A2E990;
    case 585u: goto L_08A2E9A8;
    case 586u: goto L_08A2E9F4;
    case 587u: goto L_08A2EA0C;
    case 588u: goto L_08A2EA20;
    case 589u: goto L_08A2EA40;
    case 590u: goto L_08A2EA6C;
    case 591u: goto L_08A2EA7C;
    case 592u: goto L_08A2EAD0;
    case 593u: goto L_08A2EADC;
    case 594u: goto L_08A2EAFC;
    case 595u: goto L_08A2EB18;
    case 596u: goto L_08A2EB54;
    case 597u: goto L_08A2EB7C;
    case 598u: goto L_08A2EB88;
    case 599u: goto L_08A2EBA8;
    case 600u: goto L_08A2EBC4;
    case 601u: goto L_08A2EC04;
    case 602u: goto L_08A2EC2C;
    case 603u: goto L_08A2EC38;
    case 604u: goto L_08A2EC58;
    case 605u: goto L_08A2EC74;
    case 606u: goto L_08A2ECC0;
    case 607u: goto L_08A2ECD0;
    case 608u: goto L_08A2ECD8;
    case 609u: goto L_08A2ECE8;
    case 610u: goto L_08A2ECFC;
    case 611u: goto L_08A2ED1C;
    case 612u: goto L_08A2ED48;
    case 613u: goto L_08A2ED5C;
    case 614u: goto L_08A2ED6C;
    case 615u: goto L_08A2ED9C;
    case 616u: goto L_08A2EDE8;
    case 617u: goto L_08A2EE10;
    case 618u: goto L_08A2EE18;
    case 619u: goto L_08A2EE24;
    case 620u: goto L_08A2EE30;
    case 621u: goto L_08A2EE40;
    case 622u: goto L_08A2EE48;
    case 623u: goto L_08A2EE5C;
    case 624u: goto L_08A2EE7C;
    case 625u: goto L_08A2EEA0;
    case 626u: goto L_08A2EED4;
    case 627u: goto L_08A2EEEC;
    case 628u: goto L_08A2EF00;
    case 629u: goto L_08A2EF14;
    case 630u: goto L_08A2EF2C;
    case 631u: goto L_08A2EF38;
    case 632u: goto L_08A2EF50;
    case 633u: goto L_08A2EF64;
    case 634u: goto L_08A2EF78;
    case 635u: goto L_08A2EF90;
    case 636u: goto L_08A2EFBC;
    case 637u: goto L_08A2F0A8;
    case 638u: goto L_08A2F0C0;
    case 639u: goto L_08A2F0C8;
    case 640u: goto L_08A2F108;
    case 641u: goto L_08A2F120;
    case 642u: goto L_08A2F128;
    case 643u: goto L_08A2F14C;
    case 644u: goto L_08A2F1B4;
    case 645u: goto L_08A2F210;
    case 646u: goto L_08A2F224;
    case 647u: goto L_08A2F28C;
    case 648u: goto L_08A2F2E8;
    case 649u: goto L_08A2F2FC;
    case 650u: goto L_08A2F364;
    case 651u: goto L_08A2F3B8;
    case 652u: goto L_08A2F444;
    case 653u: goto L_08A2F47C;
    case 654u: goto L_08A2F490;
    case 655u: goto L_08A2F4F0;
    case 656u: goto L_08A2F4FC;
    case 657u: goto L_08A2F508;
    case 658u: goto L_08A2F514;
    case 659u: goto L_08A2F51C;
    case 660u: goto L_08A2F530;
    case 661u: goto L_08A2F538;
    case 662u: goto L_08A2F55C;
    case 663u: goto L_08A2F570;
    case 664u: goto L_08A2F578;
    case 665u: goto L_08A2F580;
    case 666u: goto L_08A2F5A4;
    case 667u: goto L_08A2F5B8;
    case 668u: goto L_08A2F620;
    case 669u: goto L_08A2F67C;
    case 670u: goto L_08A2F68C;
    case 671u: goto L_08A2F6A0;
    case 672u: goto L_08A2F6B0;
    case 673u: goto L_08A2F6D0;
    case 674u: goto L_08A2F714;
    case 675u: goto L_08A2F728;
    case 676u: goto L_08A2F788;
    case 677u: goto L_08A2F794;
    case 678u: goto L_08A2F7A0;
    case 679u: goto L_08A2F7AC;
    case 680u: goto L_08A2F7B4;
    case 681u: goto L_08A2F7C8;
    case 682u: goto L_08A2F7D0;
    case 683u: goto L_08A2F7F4;
    case 684u: goto L_08A2F808;
    case 685u: goto L_08A2F810;
    case 686u: goto L_08A2F818;
    case 687u: goto L_08A2F83C;
    case 688u: goto L_08A2F850;
    case 689u: goto L_08A2F8B8;
    case 690u: goto L_08A2F914;
    case 691u: goto L_08A2F924;
    case 692u: goto L_08A2F9EC;
    case 693u: goto L_08A2FA04;
    case 694u: goto L_08A2FA0C;
    case 695u: goto L_08A2FA4C;
    case 696u: goto L_08A2FA64;
    case 697u: goto L_08A2FA6C;
    case 698u: goto L_08A2FA90;
    case 699u: goto L_08A2FAF8;
    case 700u: goto L_08A2FB54;
    case 701u: goto L_08A2FB68;
    case 702u: goto L_08A2FBD0;
    case 703u: goto L_08A2FC2C;
    case 704u: goto L_08A2FC40;
    case 705u: goto L_08A2FCA8;
    case 706u: goto L_08A2FCFC;
    case 707u: goto L_08A2FD74;
    case 708u: goto L_08A2FDA0;
    case 709u: goto L_08A2FDEC;
    case 710u: goto L_08A2FE00;
    case 711u: goto L_08A2FE0C;
    case 712u: goto L_08A2FE20;
    case 713u: goto L_08A2FE28;
    case 714u: goto L_08A2FE3C;
    case 715u: goto L_08A2FE54;
    case 716u: goto L_08A2FE5C;
    case 717u: goto L_08A2FE78;
    case 718u: goto L_08A2FE90;
    case 719u: goto L_08A2FEAC;
    case 720u: goto L_08A2FEB8;
    case 721u: goto L_08A2FEE4;
    case 722u: goto L_08A2FEF8;
    case 723u: goto L_08A2FF00;
    case 724u: goto L_08A2FF08;
    case 725u: goto L_08A2FF0C;
    case 726u: goto L_08A2FF18;
    case 727u: goto L_08A2FF2C;
    case 728u: goto L_08A2FF34;
    case 729u: goto L_08A2FF3C;
    case 730u: goto L_08A2FF40;
    case 731u: goto L_08A2FF4C;
    case 732u: goto L_08A2FF60;
    case 733u: goto L_08A2FF68;
    case 734u: goto L_08A2FF70;
    case 735u: goto L_08A2FF74;
    case 736u: goto L_08A2FF7C;
    case 737u: goto L_08A2FF94;
    case 738u: goto L_08A2FF98;
    case 739u: goto L_08A2FFB0;
    case 740u: goto L_08A2FFB4;
    case 741u: goto L_08A2FFCC;
    case 742u: goto L_08A2FFD0;
    case 743u: goto L_08A2FFE8;
    case 744u: goto L_08A2FFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A2C000:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2C02Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C02Cu) goto L_08A2C02C;
    return;
L_08A2C02C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C044;
      }
      goto L_08A2C038;
    }
L_08A2C038:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C218;
      }
      goto L_08A2C044;
    }
L_08A2C044:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C070;
      }
      goto L_08A2C05C;
    }
L_08A2C05C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2C070u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C070u) goto L_08A2C070;
    return;
L_08A2C070:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C0EC;
      }
      goto L_08A2C07C;
    }
L_08A2C07C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2C098u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C098u) goto L_08A2C098;
    return;
L_08A2C098:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22332)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2C0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 460u, 0x0895DE48u>(ctx, &aot_mem) && ctx.pc == 0x08A2C0ACu) goto L_08A2C0AC;
    return;
L_08A2C0AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C0C4;
      }
      goto L_08A2C0BC;
    }
L_08A2C0BC:
    ctx.set_gpr(31, 0x08A2C0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2C0C4u) goto L_08A2C0C4;
    return;
L_08A2C0C4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A2C0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2C0D4u) goto L_08A2C0D4;
    return;
L_08A2C0D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A2C0EC;
L_08A2C0EC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C07C;
      }
      goto L_08A2C0F8;
    }
L_08A2C0F8:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C1E8;
      }
      goto L_08A2C104;
    }
L_08A2C104:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C1D8;
      }
      goto L_08A2C128;
    }
L_08A2C128:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A2C140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C140u) goto L_08A2C140;
    return;
L_08A2C140:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A2C150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C150u) goto L_08A2C150;
    return;
L_08A2C150:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22348)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2C198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 460u, 0x0895DE48u>(ctx, &aot_mem) && ctx.pc == 0x08A2C198u) goto L_08A2C198;
    return;
L_08A2C198:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C1B0;
      }
      goto L_08A2C1A8;
    }
L_08A2C1A8:
    ctx.set_gpr(31, 0x08A2C1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2C1B0u) goto L_08A2C1B0;
    return;
L_08A2C1B0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A2C1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2C1C0u) goto L_08A2C1C0;
    return;
L_08A2C1C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A2C1D8;
L_08A2C1D8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C128;
      }
      goto L_08A2C1E4;
    }
L_08A2C1E4:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A2C1E8;
L_08A2C1E8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C104;
      }
      goto L_08A2C1F4;
    }
L_08A2C1F4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C214;
      }
      goto L_08A2C204;
    }
L_08A2C204:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2C214u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C214u) goto L_08A2C214;
    return;
L_08A2C214:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A2C218;
L_08A2C218:
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
L_08A2C244:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2C298u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C298u) goto L_08A2C298;
    return;
L_08A2C298:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C2D8;
      }
      goto L_08A2C2AC;
    }
L_08A2C2AC:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2C2D4;
      }
      goto L_08A2C2C8;
    }
L_08A2C2C8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C2E4;
      }
      goto L_08A2C2D4;
    }
L_08A2C2D4:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08A2C2D8;
L_08A2C2D8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C2AC;
      }
      goto L_08A2C2E4;
    }
L_08A2C2E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C2F8;
      }
      goto L_08A2C2EC;
    }
L_08A2C2EC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C5EC;
      }
      goto L_08A2C2F8;
    }
L_08A2C2F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C314;
      }
      goto L_08A2C304;
    }
L_08A2C304:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A2C314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 703u, 0x08A2B954u>(ctx, &aot_mem) && ctx.pc == 0x08A2C314u) goto L_08A2C314;
    return;
L_08A2C314:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C33C;
      }
      goto L_08A2C328;
    }
L_08A2C328:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2C33Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C33Cu) goto L_08A2C33C;
    return;
L_08A2C33C:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C52C;
      }
      goto L_08A2C348;
    }
L_08A2C348:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(30, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[30]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C518;
      }
      goto L_08A2C370;
    }
L_08A2C370:
    ctx.set_gpr(2, ctx.gpr[23] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2C514;
      }
      goto L_08A2C394;
    }
L_08A2C394:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A2C3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C3A4u) goto L_08A2C3A4;
    return;
L_08A2C3A4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A2C3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C3B4u) goto L_08A2C3B4;
    return;
L_08A2C3B4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22348)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2C3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 460u, 0x0895DE48u>(ctx, &aot_mem) && ctx.pc == 0x08A2C3FCu) goto L_08A2C3FC;
    return;
L_08A2C3FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C41C;
      }
      goto L_08A2C414;
    }
L_08A2C414:
    ctx.set_gpr(31, 0x08A2C41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2C41Cu) goto L_08A2C41C;
    return;
L_08A2C41C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08A2C42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2C42Cu) goto L_08A2C42C;
    return;
L_08A2C42C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A2C528;
      }
      goto L_08A2C450;
    }
L_08A2C450:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C4C8;
      }
      goto L_08A2C464;
    }
L_08A2C464:
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C4C4;
      }
      goto L_08A2C484;
    }
L_08A2C484:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C4B8;
      }
      goto L_08A2C498;
    }
L_08A2C498:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2C4B8;
      }
      goto L_08A2C4A0;
    }
L_08A2C4A0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C4B8;
      }
      goto L_08A2C4AC;
    }
L_08A2C4AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A2C4B8;
L_08A2C4B8:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C4D0;
      }
      goto L_08A2C4C4;
    }
L_08A2C4C4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08A2C4C8;
L_08A2C4C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2C464;
      }
      goto L_08A2C4D0;
    }
L_08A2C4D0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C528;
      }
      goto L_08A2C4D8;
    }
L_08A2C4D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C508;
      }
      goto L_08A2C4E8;
    }
L_08A2C4E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2C508;
      }
      goto L_08A2C4F0;
    }
L_08A2C4F0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C508;
      }
      goto L_08A2C4FC;
    }
L_08A2C4FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A2C508;
L_08A2C508:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C528;
      }
      goto L_08A2C514;
    }
L_08A2C514:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08A2C518;
L_08A2C518:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C370;
      }
      goto L_08A2C528;
    }
L_08A2C528:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A2C52C;
L_08A2C52C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C348;
      }
      goto L_08A2C53C;
    }
L_08A2C53C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2C550u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C550u) goto L_08A2C550;
    return;
L_08A2C550:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22332)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A2C564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 460u, 0x0895DE48u>(ctx, &aot_mem) && ctx.pc == 0x08A2C564u) goto L_08A2C564;
    return;
L_08A2C564:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C584;
      }
      goto L_08A2C57C;
    }
L_08A2C57C:
    ctx.set_gpr(31, 0x08A2C584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2C584u) goto L_08A2C584;
    return;
L_08A2C584:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08A2C594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2C594u) goto L_08A2C594;
    return;
L_08A2C594:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C5C8;
      }
      goto L_08A2C5B8;
    }
L_08A2C5B8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2C5C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C5C8u) goto L_08A2C5C8;
    return;
L_08A2C5C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2C5E8;
      }
      goto L_08A2C5DC;
    }
L_08A2C5DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    goto L_08A2C5E8;
L_08A2C5E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A2C5EC;
L_08A2C5EC:
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
L_08A2C620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2C640u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C640u) goto L_08A2C640;
    return;
L_08A2C640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C660;
      }
      goto L_08A2C648;
    }
L_08A2C648:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2C654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 778u, 0x08A2BFE8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C654u) goto L_08A2C654;
    return;
L_08A2C654:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2C660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 429u, 0x08945EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A2C660u) goto L_08A2C660;
    return;
L_08A2C660:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2C674:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2C684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C6C0;
      }
      goto L_08A2C6B8;
    }
L_08A2C6B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C6C8;
      }
      goto L_08A2C6C0;
    }
L_08A2C6C0:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8240));
    goto L_08A2C6C8;
L_08A2C6C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2C6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08A2C6D4u) goto L_08A2C6D4;
    return;
L_08A2C6D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C6E8;
      }
      goto L_08A2C6DC;
    }
L_08A2C6DC:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C99C;
      }
      goto L_08A2C6E8;
    }
L_08A2C6E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2C700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08A2C700u) goto L_08A2C700;
    return;
L_08A2C700:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C728;
      }
      goto L_08A2C70C;
    }
L_08A2C70C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2C724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08A2C724u) goto L_08A2C724;
    return;
L_08A2C724:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08A2C728;
L_08A2C728:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C74C;
      }
      goto L_08A2C730;
    }
L_08A2C730:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2C748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08A2C748u) goto L_08A2C748;
    return;
L_08A2C748:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08A2C74C;
L_08A2C74C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C770;
      }
      goto L_08A2C754;
    }
L_08A2C754:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2C76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08A2C76Cu) goto L_08A2C76C;
    return;
L_08A2C76C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08A2C770;
L_08A2C770:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C794;
      }
      goto L_08A2C778;
    }
L_08A2C778:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2C790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08A2C790u) goto L_08A2C790;
    return;
L_08A2C790:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08A2C794;
L_08A2C794:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27344));
    ctx.set_gpr(31, 0x08A2C7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A2C7A4u) goto L_08A2C7A4;
    return;
L_08A2C7A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27344));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2C7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C7BCu) goto L_08A2C7BC;
    return;
L_08A2C7BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C96C;
      }
      goto L_08A2C7C4;
    }
L_08A2C7C4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22296)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C828;
      }
      goto L_08A2C7D4;
    }
L_08A2C7D4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22568)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20624));
    ctx.set_gpr(31, 0x08A2C7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A2C7ECu) goto L_08A2C7EC;
    return;
L_08A2C7EC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C81C;
      }
      goto L_08A2C7F8;
    }
L_08A2C7F8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08A2C80Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C80Cu) goto L_08A2C80C;
    return;
L_08A2C80C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C81C;
      }
      goto L_08A2C814;
    }
L_08A2C814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C820;
      }
      goto L_08A2C81C;
    }
L_08A2C81C:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08A2C820;
L_08A2C820:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22296), ctx.gpr[19]);
    goto L_08A2C828;
L_08A2C828:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27344));
    ctx.set_gpr(31, 0x08A2C838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A2C838u) goto L_08A2C838;
    return;
L_08A2C838:
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21712));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A2C854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x08A2C854u) goto L_08A2C854;
    return;
L_08A2C854:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28892)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A2C86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08A2C86Cu) goto L_08A2C86C;
    return;
L_08A2C86C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C884;
      }
      goto L_08A2C878;
    }
L_08A2C878:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A2C884;
L_08A2C884:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C958;
      }
      goto L_08A2C890;
    }
L_08A2C890:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22296)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C8D0;
      }
      goto L_08A2C8AC;
    }
L_08A2C8AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22628)));
    ctx.set_gpr(31, 0x08A2C8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C8C0u) goto L_08A2C8C0;
    return;
L_08A2C8C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C8D0;
      }
      goto L_08A2C8C8;
    }
L_08A2C8C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C8D4;
      }
      goto L_08A2C8D0;
    }
L_08A2C8D0:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A2C8D4;
L_08A2C8D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C8EC;
      }
      goto L_08A2C8E0;
    }
L_08A2C8E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A2C8EC;
L_08A2C8EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C944;
      }
      goto L_08A2C8F8;
    }
L_08A2C8F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C924;
      }
      goto L_08A2C918;
    }
L_08A2C918:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A2C924;
L_08A2C924:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C934;
      }
      goto L_08A2C930;
    }
L_08A2C930:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08A2C934;
L_08A2C934:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C944;
      }
      goto L_08A2C93C;
    }
L_08A2C93C:
    ctx.set_gpr(31, 0x08A2C944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2C944u) goto L_08A2C944;
    return;
L_08A2C944:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C958;
      }
      goto L_08A2C950;
    }
L_08A2C950:
    ctx.set_gpr(31, 0x08A2C958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2C958u) goto L_08A2C958;
    return;
L_08A2C958:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C96C;
      }
      goto L_08A2C964;
    }
L_08A2C964:
    ctx.set_gpr(31, 0x08A2C96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2C96Cu) goto L_08A2C96C;
    return;
L_08A2C96C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C984;
      }
      goto L_08A2C978;
    }
L_08A2C978:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A2C984;
L_08A2C984:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C998;
      }
      goto L_08A2C990;
    }
L_08A2C990:
    ctx.set_gpr(31, 0x08A2C998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2C998u) goto L_08A2C998;
    return;
L_08A2C998:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08A2C99C;
L_08A2C99C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2C9BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C9F8;
      }
      goto L_08A2C9EC;
    }
L_08A2C9EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A2C9F8;
L_08A2C9F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A2CA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A2CA14u) goto L_08A2CA14;
    return;
L_08A2CA14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2CAF8;
      }
      goto L_08A2CA20;
    }
L_08A2CA20:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CA50;
      }
      goto L_08A2CA2C;
    }
L_08A2CA2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28888)));
    ctx.set_gpr(31, 0x08A2CA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2CA40u) goto L_08A2CA40;
    return;
L_08A2CA40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CA50;
      }
      goto L_08A2CA48;
    }
L_08A2CA48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CA54;
      }
      goto L_08A2CA50;
    }
L_08A2CA50:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A2CA54;
L_08A2CA54:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CA6C;
      }
      goto L_08A2CA60;
    }
L_08A2CA60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A2CA6C;
L_08A2CA6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CAE8;
      }
      goto L_08A2CA78;
    }
L_08A2CA78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CA94;
      }
      goto L_08A2CA8C;
    }
L_08A2CA8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CA9C;
      }
      goto L_08A2CA94;
    }
L_08A2CA94:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8240));
    goto L_08A2CA9C;
L_08A2CA9C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2CAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08A2CAB0u) goto L_08A2CAB0;
    return;
L_08A2CAB0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CAC8;
      }
      goto L_08A2CAC0;
    }
L_08A2CAC0:
    ctx.set_gpr(31, 0x08A2CAC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2CAC8u) goto L_08A2CAC8;
    return;
L_08A2CAC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CADC;
      }
      goto L_08A2CAD4;
    }
L_08A2CAD4:
    ctx.set_gpr(31, 0x08A2CADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2CADCu) goto L_08A2CADC;
    return;
L_08A2CADC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CB10;
      }
      goto L_08A2CAE8;
    }
L_08A2CAE8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CAF8;
      }
      goto L_08A2CAF0;
    }
L_08A2CAF0:
    ctx.set_gpr(31, 0x08A2CAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2CAF8u) goto L_08A2CAF8;
    return;
L_08A2CAF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CB0C;
      }
      goto L_08A2CB04;
    }
L_08A2CB04:
    ctx.set_gpr(31, 0x08A2CB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2CB0Cu) goto L_08A2CB0C;
    return;
L_08A2CB0C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A2CB10;
L_08A2CB10:
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
L_08A2CB30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A2CBA4;
      }
      goto L_08A2CB64;
    }
L_08A2CB64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CB80;
      }
      goto L_08A2CB78;
    }
L_08A2CB78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CB88;
      }
      goto L_08A2CB80;
    }
L_08A2CB80:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8240));
    goto L_08A2CB88;
L_08A2CB88:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2CB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08A2CB9Cu) goto L_08A2CB9C;
    return;
L_08A2CB9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF90;
      }
      goto L_08A2CBA4;
    }
L_08A2CBA4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2CBB8u);
    // nop
    goto L_08A2C9BC;
L_08A2CBB8:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2CBD0;
      }
      goto L_08A2CBC8;
    }
L_08A2CBC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF90;
      }
      goto L_08A2CBD0;
    }
L_08A2CBD0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2CBE8u);
    // nop
    goto L_08A2C9BC;
L_08A2CBE8:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2CC00;
      }
      goto L_08A2CBF8;
    }
L_08A2CBF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF90;
      }
      goto L_08A2CC00;
    }
L_08A2CC00:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2CC18u);
    // nop
    goto L_08A2C9BC;
L_08A2CC18:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2CC30;
      }
      goto L_08A2CC28;
    }
L_08A2CC28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF90;
      }
      goto L_08A2CC30;
    }
L_08A2CC30:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2CC48u);
    // nop
    goto L_08A2C9BC;
L_08A2CC48:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2CC60;
      }
      goto L_08A2CC58;
    }
L_08A2CC58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF90;
      }
      goto L_08A2CC60;
    }
L_08A2CC60:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2CC78u);
    // nop
    goto L_08A2C9BC;
L_08A2CC78:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2CC90;
      }
      goto L_08A2CC88;
    }
L_08A2CC88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF90;
      }
      goto L_08A2CC90;
    }
L_08A2CC90:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4140), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CCA8;
      }
      goto L_08A2CC9C;
    }
L_08A2CC9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A2CCA8;
L_08A2CCA8:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4140)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CCD8;
      }
      goto L_08A2CCB4;
    }
L_08A2CCB4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26524)));
    ctx.set_gpr(31, 0x08A2CCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2CCC8u) goto L_08A2CCC8;
    return;
L_08A2CCC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CCD8;
      }
      goto L_08A2CCD0;
    }
L_08A2CCD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CCDC;
      }
      goto L_08A2CCD8;
    }
L_08A2CCD8:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08A2CCDC;
L_08A2CCDC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4136), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CCF4;
      }
      goto L_08A2CCE8;
    }
L_08A2CCE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A2CCF4;
L_08A2CCF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4136)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF64;
      }
      goto L_08A2CD00;
    }
L_08A2CD00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29872)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2CD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 399u, 0x08949C18u>(ctx, &aot_mem) && ctx.pc == 0x08A2CD18u) goto L_08A2CD18;
    return;
L_08A2CD18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF64;
      }
      goto L_08A2CD2C;
    }
L_08A2CD2C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22292)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CD90;
      }
      goto L_08A2CD3C;
    }
L_08A2CD3C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22568)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20624));
    ctx.set_gpr(31, 0x08A2CD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A2CD54u) goto L_08A2CD54;
    return;
L_08A2CD54:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CD84;
      }
      goto L_08A2CD60;
    }
L_08A2CD60:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08A2CD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2CD74u) goto L_08A2CD74;
    return;
L_08A2CD74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CD84;
      }
      goto L_08A2CD7C;
    }
L_08A2CD7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CD88;
      }
      goto L_08A2CD84;
    }
L_08A2CD84:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08A2CD88;
L_08A2CD88:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22292), ctx.gpr[19]);
    goto L_08A2CD90;
L_08A2CD90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF58;
      }
      goto L_08A2CDA4;
    }
L_08A2CDA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4132), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CDD0;
      }
      goto L_08A2CDC4;
    }
L_08A2CDC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A2CDD0;
L_08A2CDD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4132)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22292)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CE14;
      }
      goto L_08A2CDF0;
    }
L_08A2CDF0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22628)));
    ctx.set_gpr(31, 0x08A2CE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2CE04u) goto L_08A2CE04;
    return;
L_08A2CE04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CE14;
      }
      goto L_08A2CE0C;
    }
L_08A2CE0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CE18;
      }
      goto L_08A2CE14;
    }
L_08A2CE14:
    ctx.set_gpr(20, 0u + 0u);
    goto L_08A2CE18;
L_08A2CE18:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4128), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CE30;
      }
      goto L_08A2CE24;
    }
L_08A2CE24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A2CE30;
L_08A2CE30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4128)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF24;
      }
      goto L_08A2CE44;
    }
L_08A2CE44:
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4136)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2CF20;
      }
      goto L_08A2CE64;
    }
L_08A2CE64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4132)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(7, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CE84;
      }
      goto L_08A2CE7C;
    }
L_08A2CE7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CE8C;
      }
      goto L_08A2CE84;
    }
L_08A2CE84:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8240));
    goto L_08A2CE8C;
L_08A2CE8C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(21720));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27344));
    ctx.set_gpr(31, 0x08A2CEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2CEA8u) goto L_08A2CEA8;
    return;
L_08A2CEA8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2CEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08A2CEC0u) goto L_08A2CEC0;
    return;
L_08A2CEC0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CED8;
      }
      goto L_08A2CED0;
    }
L_08A2CED0:
    ctx.set_gpr(31, 0x08A2CED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2CED8u) goto L_08A2CED8;
    return;
L_08A2CED8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CEEC;
      }
      goto L_08A2CEE4;
    }
L_08A2CEE4:
    ctx.set_gpr(31, 0x08A2CEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2CEECu) goto L_08A2CEEC;
    return;
L_08A2CEEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF00;
      }
      goto L_08A2CEF8;
    }
L_08A2CEF8:
    ctx.set_gpr(31, 0x08A2CF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2CF00u) goto L_08A2CF00;
    return;
L_08A2CF00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF14;
      }
      goto L_08A2CF0C;
    }
L_08A2CF0C:
    ctx.set_gpr(31, 0x08A2CF14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2CF14u) goto L_08A2CF14;
    return;
L_08A2CF14:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF90;
      }
      goto L_08A2CF20;
    }
L_08A2CF20:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A2CF24;
L_08A2CF24:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CE44;
      }
      goto L_08A2CF30;
    }
L_08A2CF30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF40;
      }
      goto L_08A2CF38;
    }
L_08A2CF38:
    ctx.set_gpr(31, 0x08A2CF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2CF40u) goto L_08A2CF40;
    return;
L_08A2CF40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF54;
      }
      goto L_08A2CF4C;
    }
L_08A2CF4C:
    ctx.set_gpr(31, 0x08A2CF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2CF54u) goto L_08A2CF54;
    return;
L_08A2CF54:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08A2CF58;
L_08A2CF58:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CDA4;
      }
      goto L_08A2CF64;
    }
L_08A2CF64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF78;
      }
      goto L_08A2CF70;
    }
L_08A2CF70:
    ctx.set_gpr(31, 0x08A2CF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2CF78u) goto L_08A2CF78;
    return;
L_08A2CF78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF8C;
      }
      goto L_08A2CF84;
    }
L_08A2CF84:
    ctx.set_gpr(31, 0x08A2CF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2CF8Cu) goto L_08A2CF8C;
    return;
L_08A2CF8C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A2CF90;
L_08A2CF90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CFB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A2CFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08A2CFE4u) goto L_08A2CFE4;
    return;
L_08A2CFE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CFF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A2D018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2D018u) goto L_08A2D018;
    return;
L_08A2D018:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2D024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 695u, 0x08A23AF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2D024u) goto L_08A2D024;
    return;
L_08A2D024:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D064;
      }
      goto L_08A2D03C;
    }
L_08A2D03C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A2D048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D048u) goto L_08A2D048;
    return;
L_08A2D048:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D05C;
      }
      goto L_08A2D050;
    }
L_08A2D050:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2D05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2D05Cu) goto L_08A2D05C;
    return;
L_08A2D05C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08A2D064;
L_08A2D064:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2D078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08A2D078u) goto L_08A2D078;
    return;
L_08A2D078:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D0A0;
      }
      goto L_08A2D08C;
    }
L_08A2D08C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A2D098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2D098u) goto L_08A2D098;
    return;
L_08A2D098:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A2D0A0;
L_08A2D0A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D0B8;
      }
      goto L_08A2D0A8;
    }
L_08A2D0A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A2D0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D0B8u) goto L_08A2D0B8;
    return;
L_08A2D0B8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 2211u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12360));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A2D0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 12u, 0x08910144u>(ctx, &aot_mem) && ctx.pc == 0x08A2D0E0u) goto L_08A2D0E0;
    return;
L_08A2D0E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2D120;
      }
      goto L_08A2D0E8;
    }
L_08A2D0E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D114;
      }
      goto L_08A2D10C;
    }
L_08A2D10C:
    ctx.set_gpr(31, 0x08A2D114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2D114u) goto L_08A2D114;
    return;
L_08A2D114:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D138;
      }
      goto L_08A2D120;
    }
L_08A2D120:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D134;
      }
      goto L_08A2D12C;
    }
L_08A2D12C:
    ctx.set_gpr(31, 0x08A2D134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2D134u) goto L_08A2D134;
    return;
L_08A2D134:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A2D138;
L_08A2D138:
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
L_08A2D154:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(9, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D1BC;
      }
      goto L_08A2D178;
    }
L_08A2D178:
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2D1B8;
      }
      goto L_08A2D194;
    }
L_08A2D194:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    ctx.set_gpr(31, 0x08A2D1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08A2D1B0u) goto L_08A2D1B0;
    return;
L_08A2D1B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D1CC;
      }
      goto L_08A2D1B8;
    }
L_08A2D1B8:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A2D1BC;
L_08A2D1BC:
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D178;
      }
      goto L_08A2D1C8;
    }
L_08A2D1C8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A2D1CC;
L_08A2D1CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D1DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A2D1ECu);
    // nop
    goto L_08A2CFF4;
L_08A2D1EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D1FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A2D20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 428u, 0x08945EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A2D20Cu) goto L_08A2D20C;
    return;
L_08A2D20C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D21C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(21736)));
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(21740)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A2D278;
      }
      goto L_08A2D254;
    }
L_08A2D254:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2D278;
      }
      goto L_08A2D25C;
    }
L_08A2D25C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(21744)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2D2F0;
      }
      goto L_08A2D278;
    }
L_08A2D278:
    ctx.set_gpr(3, ctx.gpr[17] >> 18u);
    ctx.set_gpr(2, ctx.gpr[16] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2D29C;
      }
      goto L_08A2D28C;
    }
L_08A2D28C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D2B4;
      }
      goto L_08A2D29C;
    }
L_08A2D29C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A2D2B4;
L_08A2D2B4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A2D2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A2D2C4u) goto L_08A2D2C4;
    return;
L_08A2D2C4:
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-22288), ctx.gpr[2]);
    ctx.set_gpr(4, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-22284), ctx.gpr[3]);
    ctx.set_gpr(3, 2229u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(21736), ctx.gpr[17]);
    ctx.set_gpr(3, 2229u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(21740), ctx.gpr[16]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, 2229u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(21744), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2D2F0;
L_08A2D2F0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22288)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22284)));
    ctx.set_gpr(4, ctx.gpr[3] << 18u);
    ctx.set_gpr(7, ctx.gpr[5] << 18u);
    ctx.set_gpr(3, ctx.gpr[5] >> 14u);
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
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
L_08A2D34C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D354:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D35C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D364:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D36C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D3F0;
      }
      goto L_08A2D3A8;
    }
L_08A2D3A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D3E0;
      }
      goto L_08A2D3D8;
    }
L_08A2D3D8:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A2D3E0;
L_08A2D3E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2D3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 537u, 0x08A36EA8u>(ctx, &aot_mem) && ctx.pc == 0x08A2D3ECu) goto L_08A2D3EC;
    return;
L_08A2D3EC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A2D3F0;
L_08A2D3F0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D3A8;
      }
      goto L_08A2D3FC;
    }
L_08A2D3FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D418;
      }
      goto L_08A2D408;
    }
L_08A2D408:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2D414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 31u, 0x08A60218u>(ctx, &aot_mem) && ctx.pc == 0x08A2D414u) goto L_08A2D414;
    return;
L_08A2D414:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08A2D418;
L_08A2D418:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D444;
      }
      goto L_08A2D424;
    }
L_08A2D424:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2D440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 31u, 0x08A60218u>(ctx, &aot_mem) && ctx.pc == 0x08A2D440u) goto L_08A2D440;
    return;
L_08A2D440:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A2D444;
L_08A2D444:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D424;
      }
      goto L_08A2D458;
    }
L_08A2D458:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D484;
      }
      goto L_08A2D464;
    }
L_08A2D464:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2D480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 317u, 0x08A69C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2D480u) goto L_08A2D480;
    return;
L_08A2D480:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A2D484;
L_08A2D484:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D464;
      }
      goto L_08A2D498;
    }
L_08A2D498:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D4DC;
      }
      goto L_08A2D4A4;
    }
L_08A2D4A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D4CC;
      }
      goto L_08A2D4C4;
    }
L_08A2D4C4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08A2D4CC;
L_08A2D4CC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2D4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 559u, 0x08A3706Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2D4D8u) goto L_08A2D4D8;
    return;
L_08A2D4D8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A2D4DC;
L_08A2D4DC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D4A4;
      }
      goto L_08A2D4E8;
    }
L_08A2D4E8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08A2D510:
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
          goto L_08A2D564;
      }
      goto L_08A2D53C;
    }
L_08A2D53C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2D560u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2D560u) goto L_08A2D560;
    return;
L_08A2D560:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A2D564;
L_08A2D564:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D53C;
      }
      goto L_08A2D570;
    }
L_08A2D570:
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
L_08A2D58C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A2D614;
      }
      goto L_08A2D5A8;
    }
L_08A2D5A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D5D8;
      }
      goto L_08A2D5B8;
    }
L_08A2D5B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A2D5D8;
L_08A2D5D8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D5B8;
      }
      goto L_08A2D5E4;
    }
L_08A2D5E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2D600u);
    // nop
    goto L_08A2E7EC;
L_08A2D600:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x08A2D614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 472u, 0x0895DF24u>(ctx, &aot_mem) && ctx.pc == 0x08A2D614u) goto L_08A2D614;
    return;
L_08A2D614:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D628:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A2D64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 428u, 0x08945EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A2D64Cu) goto L_08A2D64C;
    return;
L_08A2D64C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D71C;
      }
      goto L_08A2D654;
    }
L_08A2D654:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22276)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D68C;
      }
      goto L_08A2D664;
    }
L_08A2D664:
    ctx.set_gpr(31, 0x08A2D66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 227u, 0x0893CE8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2D66Cu) goto L_08A2D66C;
    return;
L_08A2D66C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A2D678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A2D678u) goto L_08A2D678;
    return;
L_08A2D678:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2D684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 437u, 0x08A22470u>(ctx, &aot_mem) && ctx.pc == 0x08A2D684u) goto L_08A2D684;
    return;
L_08A2D684:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22276), ctx.gpr[2]);
    goto L_08A2D68C;
L_08A2D68C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22276)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D6BC;
      }
      goto L_08A2D6A8;
    }
L_08A2D6A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D6D0;
      }
      goto L_08A2D6BC;
    }
L_08A2D6BC:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2D6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2D6D0u) goto L_08A2D6D0;
    return;
L_08A2D6D0:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08A2D6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D6E8u) goto L_08A2D6E8;
    return;
L_08A2D6E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21748));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A2D714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08A2D714u) goto L_08A2D714;
    return;
L_08A2D714:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08A2D71C;
L_08A2D71C:
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
L_08A2D738:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22276)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7CC;
      }
      goto L_08A2D75C;
    }
L_08A2D75C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A2D774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A2D774u) goto L_08A2D774;
    return;
L_08A2D774:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2D78C;
      }
      goto L_08A2D77C;
    }
L_08A2D77C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2D78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D78Cu) goto L_08A2D78C;
    return;
L_08A2D78C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22276)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7CC;
      }
      goto L_08A2D7A0;
    }
L_08A2D7A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7C4;
      }
      goto L_08A2D7BC;
    }
L_08A2D7BC:
    ctx.set_gpr(31, 0x08A2D7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2D7C4u) goto L_08A2D7C4;
    return;
L_08A2D7C4:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22276), 0u);
    goto L_08A2D7CC;
L_08A2D7CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2D7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 429u, 0x08945EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A2D7D8u) goto L_08A2D7D8;
    return;
L_08A2D7D8:
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
L_08A2D7F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22280)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D82C;
      }
      goto L_08A2D808;
    }
L_08A2D808:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D82C;
      }
      goto L_08A2D824;
    }
L_08A2D824:
    ctx.set_gpr(31, 0x08A2D82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2D82Cu) goto L_08A2D82C;
    return;
L_08A2D82C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22280), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D844:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A2D864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 511u, 0x088C2D50u>(ctx, &aot_mem) && ctx.pc == 0x08A2D864u) goto L_08A2D864;
    return;
L_08A2D864:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2D874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2D874u) goto L_08A2D874;
    return;
L_08A2D874:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D94C;
      }
      goto L_08A2D87C;
    }
L_08A2D87C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D94C;
      }
      goto L_08A2D888;
    }
L_08A2D888:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22280)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D8C0;
      }
      goto L_08A2D898;
    }
L_08A2D898:
    ctx.set_gpr(31, 0x08A2D8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2D8A0u) goto L_08A2D8A0;
    return;
L_08A2D8A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A2D8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A2D8ACu) goto L_08A2D8AC;
    return;
L_08A2D8AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2D8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 162u, 0x088F8E68u>(ctx, &aot_mem) && ctx.pc == 0x08A2D8B8u) goto L_08A2D8B8;
    return;
L_08A2D8B8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22280), ctx.gpr[2]);
    goto L_08A2D8C0;
L_08A2D8C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22280)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A2D8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08A2D8DCu) goto L_08A2D8DC;
    return;
L_08A2D8DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2D94C;
      }
      goto L_08A2D8E4;
    }
L_08A2D8E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22280)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A2D8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D8F8u) goto L_08A2D8F8;
    return;
L_08A2D8F8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22276)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D94C;
      }
      goto L_08A2D908;
    }
L_08A2D908:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D940;
      }
      goto L_08A2D918;
    }
L_08A2D918:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22276)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A2D93Cu);
    // nop
    goto L_08A2D968;
L_08A2D93C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A2D940;
L_08A2D940:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D918;
      }
      goto L_08A2D94C;
    }
L_08A2D94C:
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
L_08A2D968:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DBC8;
      }
      goto L_08A2D9A0;
    }
L_08A2D9A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DBC8;
      }
      goto L_08A2D9AC;
    }
L_08A2D9AC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D9DC;
      }
      goto L_08A2D9C0;
    }
L_08A2D9C0:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A2D9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 12u, 0x08948114u>(ctx, &aot_mem) && ctx.pc == 0x08A2D9D8u) goto L_08A2D9D8;
    return;
L_08A2D9D8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08A2D9DC;
L_08A2D9DC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2D9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 581u, 0x08A5E73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2D9E8u) goto L_08A2D9E8;
    return;
L_08A2D9E8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A2DA50;
      }
      goto L_08A2D9F4;
    }
L_08A2D9F4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2DA14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2DA14u) goto L_08A2DA14;
    return;
L_08A2DA14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2DA2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2DA2Cu) goto L_08A2DA2C;
    return;
L_08A2DA2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A2DA3C;
      }
      goto L_08A2DA38;
    }
L_08A2DA38:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_08A2DA3C;
L_08A2DA3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DA50;
      }
      goto L_08A2DA48;
    }
L_08A2DA48:
    ctx.set_gpr(31, 0x08A2DA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2DA50u) goto L_08A2DA50;
    return;
L_08A2DA50:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(21, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A2DA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2DA68u) goto L_08A2DA68;
    return;
L_08A2DA68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A2DA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2DA78u) goto L_08A2DA78;
    return;
L_08A2DA78:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DBBC;
      }
      goto L_08A2DA98;
    }
L_08A2DA98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2DAB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2DAB8u) goto L_08A2DAB8;
    return;
L_08A2DAB8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A2DAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2DAC4u) goto L_08A2DAC4;
    return;
L_08A2DAC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A2DAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 309u, 0x08A21A48u>(ctx, &aot_mem) && ctx.pc == 0x08A2DAD0u) goto L_08A2DAD0;
    return;
L_08A2DAD0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A2DAE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2DAE4u) goto L_08A2DAE4;
    return;
L_08A2DAE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DB0C;
      }
      goto L_08A2DB04;
    }
L_08A2DB04:
    ctx.set_gpr(31, 0x08A2DB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08A2DB0Cu) goto L_08A2DB0C;
    return;
L_08A2DB0C:
    ctx.set_gpr(22, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DB2C;
      }
      goto L_08A2DB24;
    }
L_08A2DB24:
    ctx.set_gpr(31, 0x08A2DB2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2DB2Cu) goto L_08A2DB2C;
    return;
L_08A2DB2C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A2DB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2DB40u) goto L_08A2DB40;
    return;
L_08A2DB40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DB5C;
      }
      goto L_08A2DB54;
    }
L_08A2DB54:
    ctx.set_gpr(31, 0x08A2DB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08A2DB5Cu) goto L_08A2DB5C;
    return;
L_08A2DB5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DB78;
      }
      goto L_08A2DB70;
    }
L_08A2DB70:
    ctx.set_gpr(31, 0x08A2DB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2DB78u) goto L_08A2DB78;
    return;
L_08A2DB78:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A2DB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2DB8Cu) goto L_08A2DB8C;
    return;
L_08A2DB8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DBA0;
      }
      goto L_08A2DB98;
    }
L_08A2DB98:
    ctx.set_gpr(31, 0x08A2DBA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2DBA0u) goto L_08A2DBA0;
    return;
L_08A2DBA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DBB4;
      }
      goto L_08A2DBAC;
    }
L_08A2DBAC:
    ctx.set_gpr(31, 0x08A2DBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2DBB4u) goto L_08A2DBB4;
    return;
L_08A2DBB4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A2DBBC;
L_08A2DBBC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DA98;
      }
      goto L_08A2DBC8;
    }
L_08A2DBC8:
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
L_08A2DBF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A2DC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2DC24u) goto L_08A2DC24;
    return;
L_08A2DC24:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2DC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2DC34u) goto L_08A2DC34;
    return;
L_08A2DC34:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2DC48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2DC48u) goto L_08A2DC48;
    return;
L_08A2DC48:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DC80;
      }
      goto L_08A2DC5C;
    }
L_08A2DC5C:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DC7C;
      }
      goto L_08A2DC74;
    }
L_08A2DC74:
    ctx.set_gpr(31, 0x08A2DC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2DC7Cu) goto L_08A2DC7C;
    return;
L_08A2DC7C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A2DC80;
L_08A2DC80:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DC5C;
      }
      goto L_08A2DC8C;
    }
L_08A2DC8C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DCB0;
      }
      goto L_08A2DC9C;
    }
L_08A2DC9C:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A2DCB0;
L_08A2DCB0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DC9C;
      }
      goto L_08A2DCBC;
    }
L_08A2DCBC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DCF8;
      }
      goto L_08A2DCD4;
    }
L_08A2DCD4:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DCF4;
      }
      goto L_08A2DCEC;
    }
L_08A2DCEC:
    ctx.set_gpr(31, 0x08A2DCF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2DCF4u) goto L_08A2DCF4;
    return;
L_08A2DCF4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A2DCF8;
L_08A2DCF8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DCD4;
      }
      goto L_08A2DD04;
    }
L_08A2DD04:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DD28;
      }
      goto L_08A2DD14;
    }
L_08A2DD14:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A2DD28;
L_08A2DD28:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DD14;
      }
      goto L_08A2DD34;
    }
L_08A2DD34:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22280)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DD7C;
      }
      goto L_08A2DD54;
    }
L_08A2DD54:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22280)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2DD78u);
    // nop
    goto L_08A2D968;
L_08A2DD78:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A2DD7C;
L_08A2DD7C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DD54;
      }
      goto L_08A2DD88;
    }
L_08A2DD88:
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
L_08A2DDA8:
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
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DE38;
      }
      goto L_08A2DDF0;
    }
L_08A2DDF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2DE24;
      }
      goto L_08A2DDF8;
    }
L_08A2DDF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DE14;
      }
      goto L_08A2DE08;
    }
L_08A2DE08:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DE24;
      }
      goto L_08A2DE14;
    }
L_08A2DE14:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2DE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2DE24u) goto L_08A2DE24;
    return;
L_08A2DE24:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DEC0;
      }
      goto L_08A2DE38;
    }
L_08A2DE38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[21]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2DE78;
      }
      goto L_08A2DE4C;
    }
L_08A2DE4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DE68;
      }
      goto L_08A2DE5C;
    }
L_08A2DE5C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DE78;
      }
      goto L_08A2DE68;
    }
L_08A2DE68:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2DE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2DE78u) goto L_08A2DE78;
    return;
L_08A2DE78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DEAC;
      }
      goto L_08A2DE94;
    }
L_08A2DE94:
    ctx.set_gpr(5, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A2DEAC;
L_08A2DEAC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DE94;
      }
      goto L_08A2DEB8;
    }
L_08A2DEB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A2DEC0;
L_08A2DEC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DF6C;
      }
      goto L_08A2DEDC;
    }
L_08A2DEDC:
    ctx.set_gpr(7, ctx.gpr[5] << 2u);
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2DF18;
      }
      goto L_08A2DF00;
    }
L_08A2DF00:
    ctx.set_gpr(8, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DF44;
      }
      goto L_08A2DF18;
    }
L_08A2DF18:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DF40;
      }
      goto L_08A2DF24;
    }
L_08A2DF24:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DF44;
      }
      goto L_08A2DF40;
    }
L_08A2DF40:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    goto L_08A2DF44;
L_08A2DF44:
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2DF68;
      }
      goto L_08A2DF54;
    }
L_08A2DF54:
    ctx.set_gpr(7, ctx.gpr[18] << 2u);
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    goto L_08A2DF68;
L_08A2DF68:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A2DF6C;
L_08A2DF6C:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DEDC;
      }
      goto L_08A2DF78;
    }
L_08A2DF78:
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2DFB0;
      }
      goto L_08A2DF84;
    }
L_08A2DF84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DFA0;
      }
      goto L_08A2DF94;
    }
L_08A2DF94:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DFB0;
      }
      goto L_08A2DFA0;
    }
L_08A2DFA0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2DFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2DFB0u) goto L_08A2DFB0;
    return;
L_08A2DFB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
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
L_08A2DFE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(31, 0x08A2DFF4u);
    // nop
    goto L_08A2DDA8;
L_08A2DFF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2E068;
      }
      goto L_08A2E03C;
    }
L_08A2E03C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E058;
      }
      goto L_08A2E04C;
    }
L_08A2E04C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E068;
      }
      goto L_08A2E058;
    }
L_08A2E058:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2E068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E068u) goto L_08A2E068;
    return;
L_08A2E068:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2E0A4;
      }
      goto L_08A2E074;
    }
L_08A2E074:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E090;
      }
      goto L_08A2E084;
    }
L_08A2E084:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E0A4;
      }
      goto L_08A2E090;
    }
L_08A2E090:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2E0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E0A4u) goto L_08A2E0A4;
    return;
L_08A2E0A4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E168;
      }
      goto L_08A2E0CC;
    }
L_08A2E0CC:
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[2] << 2u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2E108;
      }
      goto L_08A2E0F0;
    }
L_08A2E0F0:
    ctx.set_gpr(9, ctx.gpr[8] << 2u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E134;
      }
      goto L_08A2E108;
    }
L_08A2E108:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E130;
      }
      goto L_08A2E114;
    }
L_08A2E114:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, ctx.gpr[8] << 2u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E134;
      }
      goto L_08A2E130;
    }
L_08A2E130:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    goto L_08A2E134;
L_08A2E134:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A2E160;
      }
      goto L_08A2E140;
    }
L_08A2E140:
    ctx.set_gpr(9, ctx.gpr[17] << 2u);
    ctx.set_gpr(8, ctx.gpr[4] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E164;
      }
      goto L_08A2E160;
    }
L_08A2E160:
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    goto L_08A2E164;
L_08A2E164:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A2E168;
L_08A2E168:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E0CC;
      }
      goto L_08A2E174;
    }
L_08A2E174:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2E1AC;
      }
      goto L_08A2E17C;
    }
L_08A2E17C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E198;
      }
      goto L_08A2E18C;
    }
L_08A2E18C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E1AC;
      }
      goto L_08A2E198;
    }
L_08A2E198:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2E1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E1ACu) goto L_08A2E1AC;
    return;
L_08A2E1AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2E1E4;
      }
      goto L_08A2E1B8;
    }
L_08A2E1B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E1D4;
      }
      goto L_08A2E1C8;
    }
L_08A2E1C8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E1E4;
      }
      goto L_08A2E1D4;
    }
L_08A2E1D4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2E1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E1E4u) goto L_08A2E1E4;
    return;
L_08A2E1E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E200;
      }
      goto L_08A2E1F4;
    }
L_08A2E1F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A2E200;
L_08A2E200:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A2E210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2E210u) goto L_08A2E210;
    return;
L_08A2E210:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A2E220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2E220u) goto L_08A2E220;
    return;
L_08A2E220:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E234;
      }
      goto L_08A2E22C;
    }
L_08A2E22C:
    ctx.set_gpr(31, 0x08A2E234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A2E234u) goto L_08A2E234;
    return;
L_08A2E234:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
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
L_08A2E258:
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
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E4BC;
      }
      goto L_08A2E294;
    }
L_08A2E294:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2E2FC;
      }
      goto L_08A2E2A4;
    }
L_08A2E2A4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E2D0;
      }
      goto L_08A2E2BC;
    }
L_08A2E2BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E2E4;
      }
      goto L_08A2E2D0;
    }
L_08A2E2D0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2E2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E2E4u) goto L_08A2E2E4;
    return;
L_08A2E2E4:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E4BC;
      }
      goto L_08A2E2FC;
    }
L_08A2E2FC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A2E314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 250u, 0x088C5528u>(ctx, &aot_mem) && ctx.pc == 0x08A2E314u) goto L_08A2E314;
    return;
L_08A2E314:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2E354;
      }
      goto L_08A2E320;
    }
L_08A2E320:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E420;
      }
      goto L_08A2E354;
    }
L_08A2E354:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A2E368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 576u, 0x08A5E6A8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E368u) goto L_08A2E368;
    return;
L_08A2E368:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E4BC;
      }
      goto L_08A2E374;
    }
L_08A2E374:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A2E38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 81u, 0x088D44E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2E38Cu) goto L_08A2E38C;
    return;
L_08A2E38C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A2E3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0071_entry, 71u, 102u, 0x08920800u>(ctx, &aot_mem) && ctx.pc == 0x08A2E3A8u) goto L_08A2E3A8;
    return;
L_08A2E3A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A2E3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x08A2E3C0u) goto L_08A2E3C0;
    return;
L_08A2E3C0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A2E3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2E3FCu) goto L_08A2E3FC;
    return;
L_08A2E3FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2E420u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2E420u) goto L_08A2E420;
    return;
L_08A2E420:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E480;
      }
      goto L_08A2E428;
    }
L_08A2E428:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2E450;
      }
      goto L_08A2E448;
    }
L_08A2E448:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A2E450;
L_08A2E450:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A2E464u);
    // nop
    goto L_08A2E4E8;
L_08A2E464:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2E478u);
    // nop
    goto L_08A2EEA0;
L_08A2E478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E4BC;
      }
      goto L_08A2E480;
    }
L_08A2E480:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A2E4A8u);
    // nop
    goto L_08A2E4E8;
L_08A2E4A8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2E4BCu);
    // nop
    goto L_08A2EEA0;
L_08A2E4BC:
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
L_08A2E4E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E52C;
      }
      goto L_08A2E518;
    }
L_08A2E518:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E53C;
      }
      goto L_08A2E52C;
    }
L_08A2E52C:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2E53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E53Cu) goto L_08A2E53C;
    return;
L_08A2E53C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08A2E570:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E7CC;
      }
      goto L_08A2E5A0;
    }
L_08A2E5A0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2E688;
      }
      goto L_08A2E5B0;
    }
L_08A2E5B0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E5E4;
      }
      goto L_08A2E5C8;
    }
L_08A2E5C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24908)));
    ctx.set_gpr(31, 0x08A2E5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08A2E5E4u) goto L_08A2E5E4;
    return;
L_08A2E5E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A2E610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2E610u) goto L_08A2E610;
    return;
L_08A2E610:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A2E630u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2E630u) goto L_08A2E630;
    return;
L_08A2E630:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E65C;
      }
      goto L_08A2E648;
    }
L_08A2E648:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E670;
      }
      goto L_08A2E65C;
    }
L_08A2E65C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2E670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E670u) goto L_08A2E670;
    return;
L_08A2E670:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E7CC;
      }
      goto L_08A2E688;
    }
L_08A2E688:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A2E6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 250u, 0x088C5528u>(ctx, &aot_mem) && ctx.pc == 0x08A2E6A0u) goto L_08A2E6A0;
    return;
L_08A2E6A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2E7CC;
      }
      goto L_08A2E6AC;
    }
L_08A2E6AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E768;
      }
      goto L_08A2E6E0;
    }
L_08A2E6E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E72C;
      }
      goto L_08A2E718;
    }
L_08A2E718:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A2E72C;
      }
      goto L_08A2E720;
    }
L_08A2E720:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A2E72Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2E72Cu) goto L_08A2E72C;
    return;
L_08A2E72C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2E74C;
      }
      goto L_08A2E744;
    }
L_08A2E744:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A2E74C;
L_08A2E74C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A2E760u);
    // nop
    goto L_08A2EEA0;
L_08A2E760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E7CC;
      }
      goto L_08A2E768;
    }
L_08A2E768:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A2E778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E778u) goto L_08A2E778;
    return;
L_08A2E778:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E7AC;
      }
      goto L_08A2E7A0;
    }
L_08A2E7A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A2E7ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2E7ACu) goto L_08A2E7AC;
    return;
L_08A2E7AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A2E7CCu);
    // nop
    goto L_08A2EEA0;
L_08A2E7CC:
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
L_08A2E7EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E864;
      }
      goto L_08A2E818;
    }
L_08A2E818:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24908)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A2E860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2E860u) goto L_08A2E860;
    return;
L_08A2E860:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A2E864;
L_08A2E864:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E818;
      }
      goto L_08A2E870;
    }
L_08A2E870:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
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
L_08A2E89C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E8C4;
      }
      goto L_08A2E8B8;
    }
L_08A2E8B8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E990;
      }
      goto L_08A2E8C4;
    }
L_08A2E8C4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A2E8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 250u, 0x088C5528u>(ctx, &aot_mem) && ctx.pc == 0x08A2E8DCu) goto L_08A2E8DC;
    return;
L_08A2E8DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A2E98C;
      }
      goto L_08A2E8E8;
    }
L_08A2E8E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A2E904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 657u, 0x088BBCB8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E904u) goto L_08A2E904;
    return;
L_08A2E904:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2E954;
      }
      goto L_08A2E93C;
    }
L_08A2E93C:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E980;
      }
      goto L_08A2E954;
    }
L_08A2E954:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E97C;
      }
      goto L_08A2E960;
    }
L_08A2E960:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E980;
      }
      goto L_08A2E97C;
    }
L_08A2E97C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A2E980;
L_08A2E980:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E990;
      }
      goto L_08A2E98C;
    }
L_08A2E98C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A2E990;
L_08A2E990:
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
L_08A2E9A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A2E9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E9F4u) goto L_08A2E9F4;
    return;
L_08A2E9F4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A2EA0Cu);
    // nop
    goto L_08A2E4E8;
L_08A2EA0C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A2EA20u);
    // nop
    goto L_08A2EEA0;
L_08A2EA20:
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
L_08A2EA40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A2EA6Cu);
    // nop
    goto L_08A2EA7C;
L_08A2EA6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EA7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EADC;
      }
      goto L_08A2EAD0;
    }
L_08A2EAD0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A2EADCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2EADCu) goto L_08A2EADC;
    return;
L_08A2EADC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2EAFCu);
    // nop
    goto L_08A2EEA0;
L_08A2EAFC:
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
L_08A2EB18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2EB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2EB54u) goto L_08A2EB54;
    return;
L_08A2EB54:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EB88;
      }
      goto L_08A2EB7C;
    }
L_08A2EB7C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A2EB88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2EB88u) goto L_08A2EB88;
    return;
L_08A2EB88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2EBA8u);
    // nop
    goto L_08A2EEA0;
L_08A2EBA8:
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
L_08A2EBC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2EC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2EC04u) goto L_08A2EC04;
    return;
L_08A2EC04:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EC38;
      }
      goto L_08A2EC2C;
    }
L_08A2EC2C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A2EC38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2EC38u) goto L_08A2EC38;
    return;
L_08A2EC38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2EC58u);
    // nop
    goto L_08A2EEA0;
L_08A2EC58:
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
L_08A2EC74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A2ECC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2ECC0u) goto L_08A2ECC0;
    return;
L_08A2ECC0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2ECD8;
      }
      goto L_08A2ECD0;
    }
L_08A2ECD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A2ECD8;
L_08A2ECD8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2ECE8u);
    // nop
    goto L_08A2ED1C;
L_08A2ECE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A2ECFCu);
    // nop
    goto L_08A2EEA0;
L_08A2ECFC:
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
L_08A2ED1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ED48;
    }
L_08A2ED48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ED6C;
      }
      goto L_08A2ED5C;
    }
L_08A2ED5C:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2ED6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2ED6Cu) goto L_08A2ED6C;
    return;
L_08A2ED6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
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
L_08A2ED9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2EDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2EDE8u) goto L_08A2EDE8;
    return;
L_08A2EDE8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EE24;
      }
      goto L_08A2EE10;
    }
L_08A2EE10:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A2EE24;
      }
      goto L_08A2EE18;
    }
L_08A2EE18:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A2EE24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2EE24u) goto L_08A2EE24;
    return;
L_08A2EE24:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2EE30u);
    // nop
    goto L_08A2EE7C;
L_08A2EE30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2EE48;
      }
      goto L_08A2EE40;
    }
L_08A2EE40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08A2EE48;
L_08A2EE48:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2EE5Cu);
    // nop
    goto L_08A2EEA0;
L_08A2EE5C:
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
L_08A2EE7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
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
L_08A2EEA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EF2C;
      }
      goto L_08A2EED4;
    }
L_08A2EED4:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EF00;
      }
      goto L_08A2EEEC;
    }
L_08A2EEEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EF14;
      }
      goto L_08A2EF00;
    }
L_08A2EF00:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2EF14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2EF14u) goto L_08A2EF14;
    return;
L_08A2EF14:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08A2EF2C;
L_08A2EF2C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EF90;
      }
      goto L_08A2EF38;
    }
L_08A2EF38:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EF64;
      }
      goto L_08A2EF50;
    }
L_08A2EF50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EF78;
      }
      goto L_08A2EF64;
    }
L_08A2EF64:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A2EF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2EF78u) goto L_08A2EF78;
    return;
L_08A2EF78:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08A2EF90;
L_08A2EF90:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
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
L_08A2EFBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[6] / ctx.fpr[0];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[2] = ctx.fpr[6] / ctx.fpr[0];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[6];
    ctx.set_fpr_bits(12, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.set_gpr(31, 0x08A2F0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F0A8u) goto L_08A2F0A8;
    return;
L_08A2F0A8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32552)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32544)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A2F0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08A2F0C0u) goto L_08A2F0C0;
    return;
L_08A2F0C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F2E8;
      }
      goto L_08A2F0C8;
    }
L_08A2F0C8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.fpr[2] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[3];
    ctx.set_fpr_bits(12, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.set_gpr(31, 0x08A2F108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F108u) goto L_08A2F108;
    return;
L_08A2F108:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32552)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32544)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A2F120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08A2F120u) goto L_08A2F120;
    return;
L_08A2F120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F210;
      }
      goto L_08A2F128;
    }
L_08A2F128:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A2F14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F14Cu) goto L_08A2F14C;
    return;
L_08A2F14C:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A2F1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F1B4u) goto L_08A2F1B4;
    return;
L_08A2F1B4:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F3B8;
      }
      goto L_08A2F210;
    }
L_08A2F210:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A2F224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F224u) goto L_08A2F224;
    return;
L_08A2F224:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A2F28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F28Cu) goto L_08A2F28C;
    return;
L_08A2F28C:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F3B8;
      }
      goto L_08A2F2E8;
    }
L_08A2F2E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A2F2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F2FCu) goto L_08A2F2FC;
    return;
L_08A2F2FC:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2F364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F364u) goto L_08A2F364;
    return;
L_08A2F364:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2F3B8;
L_08A2F3B8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08A2F47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F47Cu) goto L_08A2F47C;
    return;
L_08A2F47C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2F490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2F490u) goto L_08A2F490;
    return;
L_08A2F490:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[5] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[4] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[3] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[5];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[4];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F67C;
      }
      goto L_08A2F4F0;
    }
L_08A2F4F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2F578;
      }
      goto L_08A2F4FC;
    }
L_08A2F4FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2F538;
      }
      goto L_08A2F508;
    }
L_08A2F508:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2F51C;
      }
      goto L_08A2F514;
    }
L_08A2F514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F67C;
      }
      goto L_08A2F51C;
    }
L_08A2F51C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2F530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2F530u) goto L_08A2F530;
    return;
L_08A2F530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F68C;
      }
      goto L_08A2F538;
    }
L_08A2F538:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A2F55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F55Cu) goto L_08A2F55C;
    return;
L_08A2F55C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08A2F570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F570u) goto L_08A2F570;
    return;
L_08A2F570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F68C;
      }
      goto L_08A2F578;
    }
L_08A2F578:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F68C;
      }
      goto L_08A2F580;
    }
L_08A2F580:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2F5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2F5A4u) goto L_08A2F5A4;
    return;
L_08A2F5A4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A2F5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F5B8u) goto L_08A2F5B8;
    return;
L_08A2F5B8:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A2F620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F620u) goto L_08A2F620;
    return;
L_08A2F620:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F68C;
      }
      goto L_08A2F67C;
    }
L_08A2F67C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    goto L_08A2F68C;
L_08A2F68C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A2F6A0u);
    // nop
    goto L_08A2EFBC;
L_08A2F6A0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08A2F6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F6B0u) goto L_08A2F6B0;
    return;
L_08A2F6B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F6D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A2F714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F714u) goto L_08A2F714;
    return;
L_08A2F714:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2F728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2F728u) goto L_08A2F728;
    return;
L_08A2F728:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[5] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[4] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[3] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[5];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[4];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F914;
      }
      goto L_08A2F788;
    }
L_08A2F788:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2F810;
      }
      goto L_08A2F794;
    }
L_08A2F794:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2F7D0;
      }
      goto L_08A2F7A0;
    }
L_08A2F7A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2F7B4;
      }
      goto L_08A2F7AC;
    }
L_08A2F7AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F914;
      }
      goto L_08A2F7B4;
    }
L_08A2F7B4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A2F7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2F7C8u) goto L_08A2F7C8;
    return;
L_08A2F7C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F924;
      }
      goto L_08A2F7D0;
    }
L_08A2F7D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A2F7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F7F4u) goto L_08A2F7F4;
    return;
L_08A2F7F4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08A2F808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F808u) goto L_08A2F808;
    return;
L_08A2F808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F924;
      }
      goto L_08A2F810;
    }
L_08A2F810:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F924;
      }
      goto L_08A2F818;
    }
L_08A2F818:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2F83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2F83Cu) goto L_08A2F83C;
    return;
L_08A2F83C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A2F850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F850u) goto L_08A2F850;
    return;
L_08A2F850:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A2F8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F8B8u) goto L_08A2F8B8;
    return;
L_08A2F8B8:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F924;
      }
      goto L_08A2F914;
    }
L_08A2F914:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    goto L_08A2F924;
L_08A2F924:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[4] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[2] = ctx.fpr[4] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[4];
    ctx.set_fpr_bits(12, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.set_gpr(31, 0x08A2F9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F9ECu) goto L_08A2F9EC;
    return;
L_08A2F9EC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32552)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32544)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A2FA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08A2FA04u) goto L_08A2FA04;
    return;
L_08A2FA04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FC2C;
      }
      goto L_08A2FA0C;
    }
L_08A2FA0C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.fpr[2] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[3];
    ctx.set_fpr_bits(12, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.set_gpr(31, 0x08A2FA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FA4Cu) goto L_08A2FA4C;
    return;
L_08A2FA4C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32552)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32544)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A2FA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08A2FA64u) goto L_08A2FA64;
    return;
L_08A2FA64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FB54;
      }
      goto L_08A2FA6C;
    }
L_08A2FA6C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A2FA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FA90u) goto L_08A2FA90;
    return;
L_08A2FA90:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08A2FAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FAF8u) goto L_08A2FAF8;
    return;
L_08A2FAF8:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FCFC;
      }
      goto L_08A2FB54;
    }
L_08A2FB54:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08A2FB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FB68u) goto L_08A2FB68;
    return;
L_08A2FB68:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A2FBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FBD0u) goto L_08A2FBD0;
    return;
L_08A2FBD0:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FCFC;
      }
      goto L_08A2FC2C;
    }
L_08A2FC2C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A2FC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FC40u) goto L_08A2FC40;
    return;
L_08A2FC40:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08A2FCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FCA8u) goto L_08A2FCA8;
    return;
L_08A2FCA8:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2FCFC;
L_08A2FCFC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A2FD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FD74u) goto L_08A2FD74;
    return;
L_08A2FD74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FDA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A2FDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2FDECu) goto L_08A2FDEC;
    return;
L_08A2FDEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FE0C;
      }
      goto L_08A2FE00;
    }
L_08A2FE00:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FE20;
      }
      goto L_08A2FE0C;
    }
L_08A2FE0C:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A2FE20;
L_08A2FE20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FE5C;
      }
      goto L_08A2FE28;
    }
L_08A2FE28:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2FE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FE3Cu) goto L_08A2FE3C;
    return;
L_08A2FE3C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2FE54u);
    // nop
    goto L_08A2F6D0;
L_08A2FE54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FE78;
      }
      goto L_08A2FE5C;
    }
L_08A2FE5C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A2FE78u);
    // nop
    goto L_08A2F6D0;
L_08A2FE78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08A2FE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FE90u) goto L_08A2FE90;
    return;
L_08A2FE90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FEAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FEB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FF08;
      }
      goto L_08A2FEE4;
    }
L_08A2FEE4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26660)));
    ctx.set_gpr(31, 0x08A2FEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FEF8u) goto L_08A2FEF8;
    return;
L_08A2FEF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FF08;
      }
      goto L_08A2FF00;
    }
L_08A2FF00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FF0C;
      }
      goto L_08A2FF08;
    }
L_08A2FF08:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A2FF0C;
L_08A2FF0C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FF3C;
      }
      goto L_08A2FF18;
    }
L_08A2FF18:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(31, 0x08A2FF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FF2Cu) goto L_08A2FF2C;
    return;
L_08A2FF2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FF3C;
      }
      goto L_08A2FF34;
    }
L_08A2FF34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FF40;
      }
      goto L_08A2FF3C;
    }
L_08A2FF3C:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08A2FF40;
L_08A2FF40:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FF70;
      }
      goto L_08A2FF4C;
    }
L_08A2FF4C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(31, 0x08A2FF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FF60u) goto L_08A2FF60;
    return;
L_08A2FF60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FF70;
      }
      goto L_08A2FF68;
    }
L_08A2FF68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FF74;
      }
      goto L_08A2FF70;
    }
L_08A2FF70:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08A2FF74;
L_08A2FF74:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 5u, 0x08A3002Cu>(ctx, &aot_mem); return;
      }
      goto L_08A2FF7C;
    }
L_08A2FF7C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2FF98;
      }
      goto L_08A2FF94;
    }
L_08A2FF94:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_08A2FF98;
L_08A2FF98:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2FFB4;
      }
      goto L_08A2FFB0;
    }
L_08A2FFB0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_08A2FFB4;
L_08A2FFB4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2FFD0;
      }
      goto L_08A2FFCC;
    }
L_08A2FFCC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_08A2FFD0;
L_08A2FFD0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2FFEC;
      }
      goto L_08A2FFE8;
    }
L_08A2FFE8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_08A2FFEC;
L_08A2FFEC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 3u, 0x08A30008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 2u, 0x08A30004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0138(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0138_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_138(Runtime &runtime) {
    runtime.register_generated_unit(138u, 0x08A2C000u, 16384u, &recomp_unit_0138, &recomp_unit_0138_entry);
    runtime.register_function(0x08A2C000u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C02Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C038u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C044u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C05Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C070u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C07Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C098u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C0ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C0BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C0C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C0D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C0ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C0F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C104u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C128u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C140u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C150u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C198u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C204u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C214u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C218u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C244u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C298u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C304u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C314u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C328u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C33Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C348u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C370u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C394u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C3A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C3B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C3FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C414u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C41Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C42Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C450u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C464u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C484u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C498u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C508u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C514u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C518u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C528u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C52Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C53Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C550u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C564u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C57Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C584u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C594u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C620u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C640u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C648u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C654u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C660u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C674u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C684u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C700u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C70Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C724u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C728u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C730u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C748u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C74Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C754u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C76Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C770u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C778u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C790u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C794u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C7A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C7BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C7C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C7D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C7ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C7F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C80Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C814u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C81Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C820u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C828u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C838u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C854u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C86Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C878u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C884u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C890u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C918u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C924u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C930u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C934u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C93Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C944u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C950u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C958u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C964u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C96Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C978u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C984u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C990u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C998u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C99Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA94u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CADCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAE8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAF0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAF8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB80u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB88u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CBA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CBB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CBC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CBD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CBE8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CBF8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC88u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC90u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCB4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCD8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCDCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCE8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD88u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD90u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDC4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDF0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE44u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CEA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CEC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CED0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CED8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CEE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CEECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CEF8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF70u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF90u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D018u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D024u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D03Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D048u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D050u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D05Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D064u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D078u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D08Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D098u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D10Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D114u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D120u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D12Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D134u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D138u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D154u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D178u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D194u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D20Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D21Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D254u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D25Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D278u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D28Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D29Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D34Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D354u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D35Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D364u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D36Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D408u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D414u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D418u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D424u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D440u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D444u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D458u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D464u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D480u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D484u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D498u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D510u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D53Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D560u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D564u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D570u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D58Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D600u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D614u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D628u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D64Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D654u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D664u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D66Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D678u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D684u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D68Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D714u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D71Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D738u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D75Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D774u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D77Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D78Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D808u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D824u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D82Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D844u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D864u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D874u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D87Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D888u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D898u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D8A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D8ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D8B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D8C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D8DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D8E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D8F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D908u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D918u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D93Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D940u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D94Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D968u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DAB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DAC4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DAD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DAE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB70u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBA0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBB4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBBCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC80u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCBCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCF8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DD04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DD14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DD28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DD34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DD54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DD78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DD7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DD88u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DDA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DDF0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DDF8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE08u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE94u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DEACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DEB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DEC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DEDCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF44u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF94u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DFA0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DFB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DFE0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DFF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E004u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E03Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E04Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E058u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E068u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E074u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E084u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E090u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E0A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E0CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E0F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E108u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E114u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E130u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E134u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E140u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E160u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E164u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E168u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E174u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E17Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E18Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E198u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E1ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E1B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E1C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E1D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E1E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E1F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E200u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E210u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E220u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E22Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E234u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E258u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E294u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E2A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E2BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E2D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E2E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E2FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E314u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E320u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E354u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E368u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E374u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E38Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E420u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E428u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E448u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E450u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E464u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E478u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E480u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E518u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E52Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E53Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E570u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E5A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E5B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E5C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E5E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E610u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E630u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E648u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E65Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E670u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E688u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E6A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E6ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E6E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E718u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E720u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E72Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E744u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E74Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E760u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E768u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E778u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E818u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E860u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E864u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E870u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E89Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E8B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E8C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E8DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E8E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E904u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E93Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E954u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E960u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E97Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E980u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E98Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E990u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E9A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E9F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EADCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB88u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBC4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECD8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECE8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED1Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EDE8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EEA0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EED4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EEECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF90u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFBCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F108u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F120u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F128u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F14Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F210u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F224u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F28Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F2E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F2FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F364u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F3B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F444u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F47Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F490u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F4F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F4FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F508u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F514u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F51Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F530u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F538u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F55Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F570u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F578u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F580u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F5A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F5B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F620u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F67Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F68Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F6A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F6B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F6D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F714u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F728u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F788u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F794u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F808u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F810u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F818u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F83Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F850u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F914u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F924u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA90u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FAF8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FCA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FCFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FD74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FDA0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FDECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE90u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FEACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FEB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FEE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FEF8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF08u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF70u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF94u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FFB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FFB4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FFCCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FFD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FFE8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FFECu, &recomp_unit_0138, "recomp_unit_0138");
}
} // namespace psprecomp
