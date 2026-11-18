#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0104[4092] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 5, 0, 0, 6, 0, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 10, 0, 11, 12, 0, 0, 13, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    17, 0, 18, 19, 0, 0, 20, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 26, 0, 0, 27,
    0, 28, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 33, 0, 0, 34, 0, 35, 36, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 40, 0, 0, 0, 41, 0, 42, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 45, 0, 46, 47, 0, 0, 0, 48, 0, 49, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64,
    0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78,
    0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0,
    0, 89, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0,
    0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110,
    0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147,
    0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0,
    0, 153, 0, 0, 154, 0, 0, 155, 0, 156, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 160, 161, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 164, 165, 0, 166, 0, 0, 0, 0, 167, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 173, 174, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 178, 0, 179, 180, 0, 181, 182, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 189,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 0,
    0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0,
    0, 0, 212, 0, 0, 0, 0, 0, 213, 214, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 219, 0, 0, 220, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 0,
    228, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 235, 0,
    0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 239, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254,
    0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0,
    0, 259, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268,
    0, 0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274,
    0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0,
    285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 292, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 296,
    0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0,
    303, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0,
    325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0,
    0, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0,
    337, 0, 0, 338, 0, 0, 339, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0,
    0, 344, 345, 0, 0, 0, 346, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351,
    352, 0, 0, 0, 353, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    358, 359, 0, 0, 0, 360, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 366, 0, 0, 0, 367, 368, 0, 0, 369, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 390, 391, 0, 0, 0, 392, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0,
    0, 0, 397, 398, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403,
    0, 0, 0, 404, 405, 0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 412, 0, 0, 0, 413, 414, 0, 0, 415, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421,
    0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 429,
    0, 0, 0, 0, 430, 0, 431, 0, 432, 433, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0,
    440, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0,
    0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0,
    0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0,
    0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 464, 0, 465, 0, 466, 467, 0, 0, 468, 0, 0, 469, 0,
    0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 478,
    0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0,
    484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 489, 0,
    0, 490, 491, 0, 0, 0, 492, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0,
    496, 0, 0, 497, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 504, 0, 0, 505,
    506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0,
    0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0,
    0, 0, 515, 0, 516, 517, 0, 0, 518, 519, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 529, 0, 0, 530, 0,
    0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 535, 536, 0, 0, 537, 538, 0, 0,
    539, 0, 0, 0, 0, 0, 0, 0, 540, 541, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 545, 546, 0, 0, 547, 548, 0, 0,
    0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0,
    0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 561, 0, 0, 562, 0, 563, 0, 0, 564, 0, 565, 0,
    0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 570, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0,
    0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0,
    0, 580, 0, 581, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0,
    0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0,
    0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0,
    0, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0,
    613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0,
    0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 0,
    0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0,
    634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 639, 0, 0, 0, 640, 0, 0, 0, 641, 0,
    0, 0, 0, 642, 643, 0, 0, 644, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    649, 0, 0, 650, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 656, 0,
    0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 659, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662,
    0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0,
    0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675,
    0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 679, 0, 680, 681, 0, 0, 0, 682, 683, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0,
    692, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0,
    704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709,
    0, 0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0,
    0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 0,
    725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0,
    730, 0, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0,
    0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738,
    0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0, 743, 0, 0, 744,
    0, 0, 745, 0, 746, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0,
    0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0,
    761, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0,
    0, 0, 767, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0,
    772, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 0, 0, 778, 0, 0, 0,
    0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 782, 0, 0, 0, 783, 0, 0, 0, 0, 0, 784, 0,
    0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 0,
    790, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0,
    0, 798, 0, 0, 799, 0, 0, 0, 0, 800, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 0, 0, 0, 804,
    0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 0, 807, 0, 0, 0, 0, 808, 0, 0, 809, 0, 810, 0, 0, 0, 0,
    0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0,
    0, 0, 0, 817, 0, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0,
    0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 827, 0, 828, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0,
    0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 835, 0, 0, 836, 0,
    837, 0, 0, 838, 0, 0, 839, 0, 0, 0, 840, 0, 0, 841, 0, 0, 842, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 844,
    0, 0, 0, 845, 0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 0, 849,
};
void recomp_unit_0104_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089A4000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0104[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089A4000;
    case 2u: goto L_089A401C;
    case 3u: goto L_089A4038;
    case 4u: goto L_089A4040;
    case 5u: goto L_089A4044;
    case 6u: goto L_089A4050;
    case 7u: goto L_089A4058;
    case 8u: goto L_089A405C;
    case 9u: goto L_089A4080;
    case 10u: goto L_089A409C;
    case 11u: goto L_089A40A4;
    case 12u: goto L_089A40A8;
    case 13u: goto L_089A40B4;
    case 14u: goto L_089A40BC;
    case 15u: goto L_089A40C0;
    case 16u: goto L_089A40E4;
    case 17u: goto L_089A4100;
    case 18u: goto L_089A4108;
    case 19u: goto L_089A410C;
    case 20u: goto L_089A4118;
    case 21u: goto L_089A4120;
    case 22u: goto L_089A4124;
    case 23u: goto L_089A4148;
    case 24u: goto L_089A4164;
    case 25u: goto L_089A416C;
    case 26u: goto L_089A4170;
    case 27u: goto L_089A417C;
    case 28u: goto L_089A4184;
    case 29u: goto L_089A4188;
    case 30u: goto L_089A41AC;
    case 31u: goto L_089A41C8;
    case 32u: goto L_089A41D0;
    case 33u: goto L_089A41D4;
    case 34u: goto L_089A41E0;
    case 35u: goto L_089A41E8;
    case 36u: goto L_089A41EC;
    case 37u: goto L_089A4210;
    case 38u: goto L_089A4228;
    case 39u: goto L_089A4230;
    case 40u: goto L_089A4234;
    case 41u: goto L_089A4244;
    case 42u: goto L_089A424C;
    case 43u: goto L_089A4250;
    case 44u: goto L_089A4274;
    case 45u: goto L_089A428C;
    case 46u: goto L_089A4294;
    case 47u: goto L_089A4298;
    case 48u: goto L_089A42A8;
    case 49u: goto L_089A42B0;
    case 50u: goto L_089A42B4;
    case 51u: goto L_089A42D8;
    case 52u: goto L_089A42F0;
    case 53u: goto L_089A4308;
    case 54u: goto L_089A4320;
    case 55u: goto L_089A4338;
    case 56u: goto L_089A4350;
    case 57u: goto L_089A4368;
    case 58u: goto L_089A4380;
    case 59u: goto L_089A4398;
    case 60u: goto L_089A43B0;
    case 61u: goto L_089A43C8;
    case 62u: goto L_089A43E0;
    case 63u: goto L_089A43EC;
    case 64u: goto L_089A43FC;
    case 65u: goto L_089A4404;
    case 66u: goto L_089A4454;
    case 67u: goto L_089A445C;
    case 68u: goto L_089A4484;
    case 69u: goto L_089A4490;
    case 70u: goto L_089A449C;
    case 71u: goto L_089A44A8;
    case 72u: goto L_089A44B4;
    case 73u: goto L_089A44C0;
    case 74u: goto L_089A44CC;
    case 75u: goto L_089A44D8;
    case 76u: goto L_089A44E4;
    case 77u: goto L_089A44F0;
    case 78u: goto L_089A44FC;
    case 79u: goto L_089A4508;
    case 80u: goto L_089A4514;
    case 81u: goto L_089A4520;
    case 82u: goto L_089A452C;
    case 83u: goto L_089A4538;
    case 84u: goto L_089A4544;
    case 85u: goto L_089A4550;
    case 86u: goto L_089A455C;
    case 87u: goto L_089A456C;
    case 88u: goto L_089A4578;
    case 89u: goto L_089A4584;
    case 90u: goto L_089A4590;
    case 91u: goto L_089A4598;
    case 92u: goto L_089A45A4;
    case 93u: goto L_089A45B0;
    case 94u: goto L_089A45BC;
    case 95u: goto L_089A45C8;
    case 96u: goto L_089A45D4;
    case 97u: goto L_089A45E0;
    case 98u: goto L_089A45EC;
    case 99u: goto L_089A45F8;
    case 100u: goto L_089A4604;
    case 101u: goto L_089A4610;
    case 102u: goto L_089A461C;
    case 103u: goto L_089A4628;
    case 104u: goto L_089A4634;
    case 105u: goto L_089A4640;
    case 106u: goto L_089A464C;
    case 107u: goto L_089A4658;
    case 108u: goto L_089A4664;
    case 109u: goto L_089A4670;
    case 110u: goto L_089A467C;
    case 111u: goto L_089A4688;
    case 112u: goto L_089A4694;
    case 113u: goto L_089A46A0;
    case 114u: goto L_089A46AC;
    case 115u: goto L_089A46B4;
    case 116u: goto L_089A46BC;
    case 117u: goto L_089A46CC;
    case 118u: goto L_089A46D8;
    case 119u: goto L_089A46EC;
    case 120u: goto L_089A4700;
    case 121u: goto L_089A4720;
    case 122u: goto L_089A4730;
    case 123u: goto L_089A4740;
    case 124u: goto L_089A4750;
    case 125u: goto L_089A4760;
    case 126u: goto L_089A4778;
    case 127u: goto L_089A4794;
    case 128u: goto L_089A47B0;
    case 129u: goto L_089A47D0;
    case 130u: goto L_089A47EC;
    case 131u: goto L_089A4808;
    case 132u: goto L_089A482C;
    case 133u: goto L_089A483C;
    case 134u: goto L_089A484C;
    case 135u: goto L_089A4860;
    case 136u: goto L_089A487C;
    case 137u: goto L_089A4898;
    case 138u: goto L_089A48B4;
    case 139u: goto L_089A48C8;
    case 140u: goto L_089A48DC;
    case 141u: goto L_089A48F0;
    case 142u: goto L_089A490C;
    case 143u: goto L_089A4928;
    case 144u: goto L_089A4944;
    case 145u: goto L_089A4954;
    case 146u: goto L_089A4968;
    case 147u: goto L_089A497C;
    case 148u: goto L_089A498C;
    case 149u: goto L_089A49A8;
    case 150u: goto L_089A49BC;
    case 151u: goto L_089A49EC;
    case 152u: goto L_089A49F8;
    case 153u: goto L_089A4A04;
    case 154u: goto L_089A4A10;
    case 155u: goto L_089A4A1C;
    case 156u: goto L_089A4A24;
    case 157u: goto L_089A4A30;
    case 158u: goto L_089A4A38;
    case 159u: goto L_089A4A44;
    case 160u: goto L_089A4A50;
    case 161u: goto L_089A4A54;
    case 162u: goto L_089A4A5C;
    case 163u: goto L_089A4A78;
    case 164u: goto L_089A4A88;
    case 165u: goto L_089A4A8C;
    case 166u: goto L_089A4A94;
    case 167u: goto L_089A4AA8;
    case 168u: goto L_089A4AAC;
    case 169u: goto L_089A4AB4;
    case 170u: goto L_089A4AD4;
    case 171u: goto L_089A4ADC;
    case 172u: goto L_089A4AF8;
    case 173u: goto L_089A4B10;
    case 174u: goto L_089A4B14;
    case 175u: goto L_089A4B1C;
    case 176u: goto L_089A4B30;
    case 177u: goto L_089A4B44;
    case 178u: goto L_089A4B48;
    case 179u: goto L_089A4B50;
    case 180u: goto L_089A4B54;
    case 181u: goto L_089A4B5C;
    case 182u: goto L_089A4B60;
    case 183u: goto L_089A4B7C;
    case 184u: goto L_089A4B94;
    case 185u: goto L_089A4BB4;
    case 186u: goto L_089A4BC4;
    case 187u: goto L_089A4BD8;
    case 188u: goto L_089A4BE4;
    case 189u: goto L_089A4BFC;
    case 190u: goto L_089A4C10;
    case 191u: goto L_089A4C38;
    case 192u: goto L_089A4C4C;
    case 193u: goto L_089A4C58;
    case 194u: goto L_089A4C68;
    case 195u: goto L_089A4C70;
    case 196u: goto L_089A4C8C;
    case 197u: goto L_089A4C94;
    case 198u: goto L_089A4C9C;
    case 199u: goto L_089A4CA4;
    case 200u: goto L_089A4CC0;
    case 201u: goto L_089A4CC8;
    case 202u: goto L_089A4CE4;
    case 203u: goto L_089A4D00;
    case 204u: goto L_089A4D1C;
    case 205u: goto L_089A4D28;
    case 206u: goto L_089A4D38;
    case 207u: goto L_089A4D44;
    case 208u: goto L_089A4D4C;
    case 209u: goto L_089A4D58;
    case 210u: goto L_089A4D60;
    case 211u: goto L_089A4D74;
    case 212u: goto L_089A4D88;
    case 213u: goto L_089A4DA0;
    case 214u: goto L_089A4DA4;
    case 215u: goto L_089A4DAC;
    case 216u: goto L_089A4DC4;
    case 217u: goto L_089A4DD0;
    case 218u: goto L_089A4DE4;
    case 219u: goto L_089A4DE8;
    case 220u: goto L_089A4DF4;
    case 221u: goto L_089A4E0C;
    case 222u: goto L_089A4E1C;
    case 223u: goto L_089A4E2C;
    case 224u: goto L_089A4E50;
    case 225u: goto L_089A4E58;
    case 226u: goto L_089A4E68;
    case 227u: goto L_089A4E74;
    case 228u: goto L_089A4E80;
    case 229u: goto L_089A4E90;
    case 230u: goto L_089A4E98;
    case 231u: goto L_089A4EA4;
    case 232u: goto L_089A4EC0;
    case 233u: goto L_089A4ED8;
    case 234u: goto L_089A4EE4;
    case 235u: goto L_089A4EF8;
    case 236u: goto L_089A4F04;
    case 237u: goto L_089A4F14;
    case 238u: goto L_089A4F24;
    case 239u: goto L_089A4F30;
    case 240u: goto L_089A4F34;
    case 241u: goto L_089A4F50;
    case 242u: goto L_089A4F60;
    case 243u: goto L_089A4FA4;
    case 244u: goto L_089A4FBC;
    case 245u: goto L_089A4FD4;
    case 246u: goto L_089A4FEC;
    case 247u: goto L_089A4FF8;
    case 248u: goto L_089A500C;
    case 249u: goto L_089A5020;
    case 250u: goto L_089A5028;
    case 251u: goto L_089A503C;
    case 252u: goto L_089A5060;
    case 253u: goto L_089A506C;
    case 254u: goto L_089A507C;
    case 255u: goto L_089A508C;
    case 256u: goto L_089A50C8;
    case 257u: goto L_089A50E0;
    case 258u: goto L_089A50EC;
    case 259u: goto L_089A5104;
    case 260u: goto L_089A5110;
    case 261u: goto L_089A5124;
    case 262u: goto L_089A5138;
    case 263u: goto L_089A5140;
    case 264u: goto L_089A5154;
    case 265u: goto L_089A5174;
    case 266u: goto L_089A51A0;
    case 267u: goto L_089A51AC;
    case 268u: goto L_089A51FC;
    case 269u: goto L_089A5208;
    case 270u: goto L_089A5218;
    case 271u: goto L_089A5224;
    case 272u: goto L_089A522C;
    case 273u: goto L_089A5270;
    case 274u: goto L_089A527C;
    case 275u: goto L_089A5288;
    case 276u: goto L_089A5294;
    case 277u: goto L_089A52A4;
    case 278u: goto L_089A52AC;
    case 279u: goto L_089A52B8;
    case 280u: goto L_089A52C4;
    case 281u: goto L_089A52D0;
    case 282u: goto L_089A52DC;
    case 283u: goto L_089A52E8;
    case 284u: goto L_089A52F4;
    case 285u: goto L_089A5300;
    case 286u: goto L_089A530C;
    case 287u: goto L_089A5318;
    case 288u: goto L_089A5324;
    case 289u: goto L_089A5330;
    case 290u: goto L_089A533C;
    case 291u: goto L_089A5348;
    case 292u: goto L_089A5350;
    case 293u: goto L_089A5358;
    case 294u: goto L_089A5364;
    case 295u: goto L_089A5370;
    case 296u: goto L_089A537C;
    case 297u: goto L_089A5388;
    case 298u: goto L_089A5390;
    case 299u: goto L_089A53A8;
    case 300u: goto L_089A53C4;
    case 301u: goto L_089A53DC;
    case 302u: goto L_089A53F8;
    case 303u: goto L_089A5400;
    case 304u: goto L_089A540C;
    case 305u: goto L_089A5418;
    case 306u: goto L_089A5424;
    case 307u: goto L_089A5430;
    case 308u: goto L_089A5438;
    case 309u: goto L_089A5450;
    case 310u: goto L_089A546C;
    case 311u: goto L_089A5484;
    case 312u: goto L_089A54A0;
    case 313u: goto L_089A54A8;
    case 314u: goto L_089A54B4;
    case 315u: goto L_089A54C0;
    case 316u: goto L_089A54CC;
    case 317u: goto L_089A54D8;
    case 318u: goto L_089A54E0;
    case 319u: goto L_089A54F8;
    case 320u: goto L_089A5510;
    case 321u: goto L_089A552C;
    case 322u: goto L_089A5548;
    case 323u: goto L_089A5550;
    case 324u: goto L_089A5578;
    case 325u: goto L_089A5580;
    case 326u: goto L_089A5588;
    case 327u: goto L_089A55DC;
    case 328u: goto L_089A55F8;
    case 329u: goto L_089A5608;
    case 330u: goto L_089A5614;
    case 331u: goto L_089A5624;
    case 332u: goto L_089A5648;
    case 333u: goto L_089A5650;
    case 334u: goto L_089A5694;
    case 335u: goto L_089A56A0;
    case 336u: goto L_089A56F4;
    case 337u: goto L_089A5700;
    case 338u: goto L_089A570C;
    case 339u: goto L_089A5718;
    case 340u: goto L_089A5720;
    case 341u: goto L_089A572C;
    case 342u: goto L_089A5738;
    case 343u: goto L_089A5774;
    case 344u: goto L_089A5784;
    case 345u: goto L_089A5788;
    case 346u: goto L_089A5798;
    case 347u: goto L_089A57A0;
    case 348u: goto L_089A57AC;
    case 349u: goto L_089A57B8;
    case 350u: goto L_089A57EC;
    case 351u: goto L_089A57FC;
    case 352u: goto L_089A5800;
    case 353u: goto L_089A5810;
    case 354u: goto L_089A5818;
    case 355u: goto L_089A5824;
    case 356u: goto L_089A5830;
    case 357u: goto L_089A5870;
    case 358u: goto L_089A5880;
    case 359u: goto L_089A5884;
    case 360u: goto L_089A5894;
    case 361u: goto L_089A589C;
    case 362u: goto L_089A58A8;
    case 363u: goto L_089A58B4;
    case 364u: goto L_089A5918;
    case 365u: goto L_089A5928;
    case 366u: goto L_089A592C;
    case 367u: goto L_089A593C;
    case 368u: goto L_089A5940;
    case 369u: goto L_089A594C;
    case 370u: goto L_089A5950;
    case 371u: goto L_089A595C;
    case 372u: goto L_089A5978;
    case 373u: goto L_089A59E8;
    case 374u: goto L_089A5A04;
    case 375u: goto L_089A5A14;
    case 376u: goto L_089A5A20;
    case 377u: goto L_089A5A30;
    case 378u: goto L_089A5A54;
    case 379u: goto L_089A5A5C;
    case 380u: goto L_089A5AA0;
    case 381u: goto L_089A5AAC;
    case 382u: goto L_089A5B00;
    case 383u: goto L_089A5B0C;
    case 384u: goto L_089A5B18;
    case 385u: goto L_089A5B24;
    case 386u: goto L_089A5B2C;
    case 387u: goto L_089A5B38;
    case 388u: goto L_089A5B44;
    case 389u: goto L_089A5B80;
    case 390u: goto L_089A5B90;
    case 391u: goto L_089A5B94;
    case 392u: goto L_089A5BA4;
    case 393u: goto L_089A5BAC;
    case 394u: goto L_089A5BB8;
    case 395u: goto L_089A5BC4;
    case 396u: goto L_089A5BF8;
    case 397u: goto L_089A5C08;
    case 398u: goto L_089A5C0C;
    case 399u: goto L_089A5C1C;
    case 400u: goto L_089A5C24;
    case 401u: goto L_089A5C30;
    case 402u: goto L_089A5C3C;
    case 403u: goto L_089A5C7C;
    case 404u: goto L_089A5C8C;
    case 405u: goto L_089A5C90;
    case 406u: goto L_089A5CA0;
    case 407u: goto L_089A5CA8;
    case 408u: goto L_089A5CB4;
    case 409u: goto L_089A5CC0;
    case 410u: goto L_089A5D1C;
    case 411u: goto L_089A5D2C;
    case 412u: goto L_089A5D30;
    case 413u: goto L_089A5D40;
    case 414u: goto L_089A5D44;
    case 415u: goto L_089A5D50;
    case 416u: goto L_089A5D54;
    case 417u: goto L_089A5D60;
    case 418u: goto L_089A5D7C;
    case 419u: goto L_089A5DB4;
    case 420u: goto L_089A5DCC;
    case 421u: goto L_089A5DFC;
    case 422u: goto L_089A5E04;
    case 423u: goto L_089A5E14;
    case 424u: goto L_089A5E2C;
    case 425u: goto L_089A5E44;
    case 426u: goto L_089A5E50;
    case 427u: goto L_089A5E5C;
    case 428u: goto L_089A5E70;
    case 429u: goto L_089A5E7C;
    case 430u: goto L_089A5E90;
    case 431u: goto L_089A5E98;
    case 432u: goto L_089A5EA0;
    case 433u: goto L_089A5EA4;
    case 434u: goto L_089A5EB0;
    case 435u: goto L_089A5EBC;
    case 436u: goto L_089A5EC8;
    case 437u: goto L_089A5ED0;
    case 438u: goto L_089A5EE4;
    case 439u: goto L_089A5EF4;
    case 440u: goto L_089A5F00;
    case 441u: goto L_089A5F08;
    case 442u: goto L_089A5F20;
    case 443u: goto L_089A5F3C;
    case 444u: goto L_089A5F54;
    case 445u: goto L_089A5F60;
    case 446u: goto L_089A5F6C;
    case 447u: goto L_089A5F88;
    case 448u: goto L_089A5F94;
    case 449u: goto L_089A5FB0;
    case 450u: goto L_089A5FC8;
    case 451u: goto L_089A5FCC;
    case 452u: goto L_089A5FD8;
    case 453u: goto L_089A5FF4;
    case 454u: goto L_089A6018;
    case 455u: goto L_089A6020;
    case 456u: goto L_089A6030;
    case 457u: goto L_089A6038;
    case 458u: goto L_089A6050;
    case 459u: goto L_089A605C;
    case 460u: goto L_089A6068;
    case 461u: goto L_089A6084;
    case 462u: goto L_089A60AC;
    case 463u: goto L_089A60B8;
    case 464u: goto L_089A60CC;
    case 465u: goto L_089A60D4;
    case 466u: goto L_089A60DC;
    case 467u: goto L_089A60E0;
    case 468u: goto L_089A60EC;
    case 469u: goto L_089A60F8;
    case 470u: goto L_089A6104;
    case 471u: goto L_089A610C;
    case 472u: goto L_089A611C;
    case 473u: goto L_089A6128;
    case 474u: goto L_089A6130;
    case 475u: goto L_089A6148;
    case 476u: goto L_089A615C;
    case 477u: goto L_089A6164;
    case 478u: goto L_089A617C;
    case 479u: goto L_089A6188;
    case 480u: goto L_089A6194;
    case 481u: goto L_089A61B0;
    case 482u: goto L_089A61D0;
    case 483u: goto L_089A61E4;
    case 484u: goto L_089A6200;
    case 485u: goto L_089A6210;
    case 486u: goto L_089A6244;
    case 487u: goto L_089A625C;
    case 488u: goto L_089A6270;
    case 489u: goto L_089A6278;
    case 490u: goto L_089A6284;
    case 491u: goto L_089A6288;
    case 492u: goto L_089A6298;
    case 493u: goto L_089A629C;
    case 494u: goto L_089A62BC;
    case 495u: goto L_089A62F0;
    case 496u: goto L_089A6300;
    case 497u: goto L_089A630C;
    case 498u: goto L_089A6318;
    case 499u: goto L_089A6328;
    case 500u: goto L_089A633C;
    case 501u: goto L_089A6344;
    case 502u: goto L_089A6358;
    case 503u: goto L_089A6368;
    case 504u: goto L_089A6370;
    case 505u: goto L_089A637C;
    case 506u: goto L_089A6380;
    case 507u: goto L_089A639C;
    case 508u: goto L_089A63C4;
    case 509u: goto L_089A63D4;
    case 510u: goto L_089A63F8;
    case 511u: goto L_089A6404;
    case 512u: goto L_089A641C;
    case 513u: goto L_089A6434;
    case 514u: goto L_089A6470;
    case 515u: goto L_089A6488;
    case 516u: goto L_089A6490;
    case 517u: goto L_089A6494;
    case 518u: goto L_089A64A0;
    case 519u: goto L_089A64A4;
    case 520u: goto L_089A64B0;
    case 521u: goto L_089A64C4;
    case 522u: goto L_089A64D8;
    case 523u: goto L_089A64EC;
    case 524u: goto L_089A6514;
    case 525u: goto L_089A6528;
    case 526u: goto L_089A653C;
    case 527u: goto L_089A6554;
    case 528u: goto L_089A6564;
    case 529u: goto L_089A656C;
    case 530u: goto L_089A6578;
    case 531u: goto L_089A6588;
    case 532u: goto L_089A65AC;
    case 533u: goto L_089A65C0;
    case 534u: goto L_089A65D8;
    case 535u: goto L_089A65E0;
    case 536u: goto L_089A65E4;
    case 537u: goto L_089A65F0;
    case 538u: goto L_089A65F4;
    case 539u: goto L_089A6600;
    case 540u: goto L_089A6620;
    case 541u: goto L_089A6624;
    case 542u: goto L_089A662C;
    case 543u: goto L_089A6640;
    case 544u: goto L_089A6658;
    case 545u: goto L_089A6660;
    case 546u: goto L_089A6664;
    case 547u: goto L_089A6670;
    case 548u: goto L_089A6674;
    case 549u: goto L_089A6690;
    case 550u: goto L_089A66B4;
    case 551u: goto L_089A66C4;
    case 552u: goto L_089A66D8;
    case 553u: goto L_089A6720;
    case 554u: goto L_089A6734;
    case 555u: goto L_089A674C;
    case 556u: goto L_089A6770;
    case 557u: goto L_089A6788;
    case 558u: goto L_089A67A0;
    case 559u: goto L_089A67B4;
    case 560u: goto L_089A67C0;
    case 561u: goto L_089A67D0;
    case 562u: goto L_089A67DC;
    case 563u: goto L_089A67E4;
    case 564u: goto L_089A67F0;
    case 565u: goto L_089A67F8;
    case 566u: goto L_089A680C;
    case 567u: goto L_089A6820;
    case 568u: goto L_089A6830;
    case 569u: goto L_089A6848;
    case 570u: goto L_089A684C;
    case 571u: goto L_089A6854;
    case 572u: goto L_089A686C;
    case 573u: goto L_089A6878;
    case 574u: goto L_089A6888;
    case 575u: goto L_089A68A4;
    case 576u: goto L_089A68BC;
    case 577u: goto L_089A68C8;
    case 578u: goto L_089A68D4;
    case 579u: goto L_089A68F0;
    case 580u: goto L_089A6904;
    case 581u: goto L_089A690C;
    case 582u: goto L_089A6918;
    case 583u: goto L_089A6924;
    case 584u: goto L_089A6954;
    case 585u: goto L_089A6964;
    case 586u: goto L_089A6990;
    case 587u: goto L_089A6998;
    case 588u: goto L_089A69A4;
    case 589u: goto L_089A69B4;
    case 590u: goto L_089A69CC;
    case 591u: goto L_089A69D8;
    case 592u: goto L_089A69F0;
    case 593u: goto L_089A6A08;
    case 594u: goto L_089A6A24;
    case 595u: goto L_089A6A5C;
    case 596u: goto L_089A6A6C;
    case 597u: goto L_089A6A88;
    case 598u: goto L_089A6AA8;
    case 599u: goto L_089A6AC0;
    case 600u: goto L_089A6AE0;
    case 601u: goto L_089A6B14;
    case 602u: goto L_089A6B20;
    case 603u: goto L_089A6B34;
    case 604u: goto L_089A6B40;
    case 605u: goto L_089A6B50;
    case 606u: goto L_089A6B68;
    case 607u: goto L_089A6B70;
    case 608u: goto L_089A6B84;
    case 609u: goto L_089A6BA0;
    case 610u: goto L_089A6BAC;
    case 611u: goto L_089A6BD0;
    case 612u: goto L_089A6BE8;
    case 613u: goto L_089A6C00;
    case 614u: goto L_089A6C18;
    case 615u: goto L_089A6C30;
    case 616u: goto L_089A6C48;
    case 617u: goto L_089A6C60;
    case 618u: goto L_089A6C78;
    case 619u: goto L_089A6C90;
    case 620u: goto L_089A6CA8;
    case 621u: goto L_089A6CC0;
    case 622u: goto L_089A6CD8;
    case 623u: goto L_089A6CF0;
    case 624u: goto L_089A6D08;
    case 625u: goto L_089A6D20;
    case 626u: goto L_089A6D34;
    case 627u: goto L_089A6D40;
    case 628u: goto L_089A6D60;
    case 629u: goto L_089A6D70;
    case 630u: goto L_089A6D98;
    case 631u: goto L_089A6DB0;
    case 632u: goto L_089A6DEC;
    case 633u: goto L_089A6DF8;
    case 634u: goto L_089A6E00;
    case 635u: goto L_089A6E18;
    case 636u: goto L_089A6E28;
    case 637u: goto L_089A6E44;
    case 638u: goto L_089A6E50;
    case 639u: goto L_089A6E58;
    case 640u: goto L_089A6E68;
    case 641u: goto L_089A6E78;
    case 642u: goto L_089A6E8C;
    case 643u: goto L_089A6E90;
    case 644u: goto L_089A6E9C;
    case 645u: goto L_089A6EA8;
    case 646u: goto L_089A6EB0;
    case 647u: goto L_089A6EC8;
    case 648u: goto L_089A6ED8;
    case 649u: goto L_089A6F00;
    case 650u: goto L_089A6F0C;
    case 651u: goto L_089A6F14;
    case 652u: goto L_089A6F24;
    case 653u: goto L_089A6F4C;
    case 654u: goto L_089A6F58;
    case 655u: goto L_089A6F60;
    case 656u: goto L_089A6F78;
    case 657u: goto L_089A6F88;
    case 658u: goto L_089A6FB0;
    case 659u: goto L_089A6FBC;
    case 660u: goto L_089A6FC4;
    case 661u: goto L_089A6FD4;
    case 662u: goto L_089A6FFC;
    case 663u: goto L_089A7008;
    case 664u: goto L_089A7010;
    case 665u: goto L_089A7038;
    case 666u: goto L_089A704C;
    case 667u: goto L_089A709C;
    case 668u: goto L_089A70A8;
    case 669u: goto L_089A70B4;
    case 670u: goto L_089A70C0;
    case 671u: goto L_089A70C8;
    case 672u: goto L_089A70E0;
    case 673u: goto L_089A7104;
    case 674u: goto L_089A7154;
    case 675u: goto L_089A717C;
    case 676u: goto L_089A7190;
    case 677u: goto L_089A719C;
    case 678u: goto L_089A71A8;
    case 679u: goto L_089A71BC;
    case 680u: goto L_089A71C4;
    case 681u: goto L_089A71C8;
    case 682u: goto L_089A71D8;
    case 683u: goto L_089A71DC;
    case 684u: goto L_089A7204;
    case 685u: goto L_089A7214;
    case 686u: goto L_089A722C;
    case 687u: goto L_089A7234;
    case 688u: goto L_089A7244;
    case 689u: goto L_089A7254;
    case 690u: goto L_089A7268;
    case 691u: goto L_089A7270;
    case 692u: goto L_089A7280;
    case 693u: goto L_089A7290;
    case 694u: goto L_089A72A4;
    case 695u: goto L_089A72AC;
    case 696u: goto L_089A72BC;
    case 697u: goto L_089A72CC;
    case 698u: goto L_089A72E0;
    case 699u: goto L_089A72F0;
    case 700u: goto L_089A7320;
    case 701u: goto L_089A7330;
    case 702u: goto L_089A7348;
    case 703u: goto L_089A7370;
    case 704u: goto L_089A7380;
    case 705u: goto L_089A7394;
    case 706u: goto L_089A73AC;
    case 707u: goto L_089A73BC;
    case 708u: goto L_089A73D4;
    case 709u: goto L_089A73FC;
    case 710u: goto L_089A740C;
    case 711u: goto L_089A7420;
    case 712u: goto L_089A743C;
    case 713u: goto L_089A744C;
    case 714u: goto L_089A7464;
    case 715u: goto L_089A748C;
    case 716u: goto L_089A749C;
    case 717u: goto L_089A74B0;
    case 718u: goto L_089A74E4;
    case 719u: goto L_089A74F4;
    case 720u: goto L_089A750C;
    case 721u: goto L_089A7534;
    case 722u: goto L_089A7544;
    case 723u: goto L_089A7558;
    case 724u: goto L_089A7570;
    case 725u: goto L_089A7580;
    case 726u: goto L_089A7598;
    case 727u: goto L_089A75C0;
    case 728u: goto L_089A75D0;
    case 729u: goto L_089A75E4;
    case 730u: goto L_089A7600;
    case 731u: goto L_089A7610;
    case 732u: goto L_089A7628;
    case 733u: goto L_089A7650;
    case 734u: goto L_089A7660;
    case 735u: goto L_089A7674;
    case 736u: goto L_089A7688;
    case 737u: goto L_089A7698;
    case 738u: goto L_089A76FC;
    case 739u: goto L_089A7708;
    case 740u: goto L_089A7744;
    case 741u: goto L_089A7760;
    case 742u: goto L_089A7768;
    case 743u: goto L_089A7770;
    case 744u: goto L_089A777C;
    case 745u: goto L_089A7788;
    case 746u: goto L_089A7790;
    case 747u: goto L_089A7798;
    case 748u: goto L_089A77A8;
    case 749u: goto L_089A77C8;
    case 750u: goto L_089A77E4;
    case 751u: goto L_089A7820;
    case 752u: goto L_089A782C;
    case 753u: goto L_089A7838;
    case 754u: goto L_089A784C;
    case 755u: goto L_089A7870;
    case 756u: goto L_089A788C;
    case 757u: goto L_089A78A4;
    case 758u: goto L_089A78B4;
    case 759u: goto L_089A78CC;
    case 760u: goto L_089A78F0;
    case 761u: goto L_089A7900;
    case 762u: goto L_089A7914;
    case 763u: goto L_089A792C;
    case 764u: goto L_089A793C;
    case 765u: goto L_089A7954;
    case 766u: goto L_089A7978;
    case 767u: goto L_089A7988;
    case 768u: goto L_089A799C;
    case 769u: goto L_089A79B4;
    case 770u: goto L_089A79C4;
    case 771u: goto L_089A79DC;
    case 772u: goto L_089A7A00;
    case 773u: goto L_089A7A10;
    case 774u: goto L_089A7A24;
    case 775u: goto L_089A7A30;
    case 776u: goto L_089A7A48;
    case 777u: goto L_089A7A58;
    case 778u: goto L_089A7A70;
    case 779u: goto L_089A7A94;
    case 780u: goto L_089A7AA4;
    case 781u: goto L_089A7AB8;
    case 782u: goto L_089A7AD0;
    case 783u: goto L_089A7AE0;
    case 784u: goto L_089A7AF8;
    case 785u: goto L_089A7B1C;
    case 786u: goto L_089A7B2C;
    case 787u: goto L_089A7B40;
    case 788u: goto L_089A7B58;
    case 789u: goto L_089A7B68;
    case 790u: goto L_089A7B80;
    case 791u: goto L_089A7BA4;
    case 792u: goto L_089A7BB4;
    case 793u: goto L_089A7BC8;
    case 794u: goto L_089A7BD4;
    case 795u: goto L_089A7BE0;
    case 796u: goto L_089A7BEC;
    case 797u: goto L_089A7BF8;
    case 798u: goto L_089A7C04;
    case 799u: goto L_089A7C10;
    case 800u: goto L_089A7C24;
    case 801u: goto L_089A7C38;
    case 802u: goto L_089A7C54;
    case 803u: goto L_089A7C64;
    case 804u: goto L_089A7C7C;
    case 805u: goto L_089A7CA0;
    case 806u: goto L_089A7CB0;
    case 807u: goto L_089A7CC4;
    case 808u: goto L_089A7CD8;
    case 809u: goto L_089A7CE4;
    case 810u: goto L_089A7CEC;
    case 811u: goto L_089A7D08;
    case 812u: goto L_089A7D18;
    case 813u: goto L_089A7D30;
    case 814u: goto L_089A7D54;
    case 815u: goto L_089A7D64;
    case 816u: goto L_089A7D78;
    case 817u: goto L_089A7D8C;
    case 818u: goto L_089A7D98;
    case 819u: goto L_089A7DA0;
    case 820u: goto L_089A7DBC;
    case 821u: goto L_089A7DCC;
    case 822u: goto L_089A7DE4;
    case 823u: goto L_089A7E08;
    case 824u: goto L_089A7E18;
    case 825u: goto L_089A7E2C;
    case 826u: goto L_089A7E40;
    case 827u: goto L_089A7E4C;
    case 828u: goto L_089A7E54;
    case 829u: goto L_089A7E68;
    case 830u: goto L_089A7E78;
    case 831u: goto L_089A7E90;
    case 832u: goto L_089A7EB4;
    case 833u: goto L_089A7EC4;
    case 834u: goto L_089A7ED8;
    case 835u: goto L_089A7EEC;
    case 836u: goto L_089A7EF8;
    case 837u: goto L_089A7F00;
    case 838u: goto L_089A7F0C;
    case 839u: goto L_089A7F18;
    case 840u: goto L_089A7F28;
    case 841u: goto L_089A7F34;
    case 842u: goto L_089A7F40;
    case 843u: goto L_089A7F58;
    case 844u: goto L_089A7F7C;
    case 845u: goto L_089A7F8C;
    case 846u: goto L_089A7FA4;
    case 847u: goto L_089A7FC8;
    case 848u: goto L_089A7FD8;
    case 849u: goto L_089A7FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089A4000:
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43FC;
      }
      goto L_089A401C;
    }
L_089A401C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] >> 2u);
    ctx.set_gpr(4, ctx.gpr[6] >> 3u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4040;
      }
      goto L_089A4038;
    }
L_089A4038:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4044;
      }
      goto L_089A4040;
    }
L_089A4040:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_089A4044;
L_089A4044:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4058;
      }
      goto L_089A4050;
    }
L_089A4050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A405C;
      }
      goto L_089A4058;
    }
L_089A4058:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A405C;
L_089A405C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43FC;
      }
      goto L_089A4080;
    }
L_089A4080:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] >> 2u);
    ctx.set_gpr(4, ctx.gpr[6] >> 2u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A40A4;
      }
      goto L_089A409C;
    }
L_089A409C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A40A8;
      }
      goto L_089A40A4;
    }
L_089A40A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_089A40A8;
L_089A40A8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A40BC;
      }
      goto L_089A40B4;
    }
L_089A40B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A40C0;
      }
      goto L_089A40BC;
    }
L_089A40BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A40C0;
L_089A40C0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43FC;
      }
      goto L_089A40E4;
    }
L_089A40E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] >> 2u);
    ctx.set_gpr(4, ctx.gpr[6] >> 3u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4108;
      }
      goto L_089A4100;
    }
L_089A4100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A410C;
      }
      goto L_089A4108;
    }
L_089A4108:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_089A410C;
L_089A410C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4120;
      }
      goto L_089A4118;
    }
L_089A4118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4124;
      }
      goto L_089A4120;
    }
L_089A4120:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A4124;
L_089A4124:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43FC;
      }
      goto L_089A4148;
    }
L_089A4148:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] >> 2u);
    ctx.set_gpr(4, ctx.gpr[6] >> 2u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A416C;
      }
      goto L_089A4164;
    }
L_089A4164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4170;
      }
      goto L_089A416C;
    }
L_089A416C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_089A4170;
L_089A4170:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4184;
      }
      goto L_089A417C;
    }
L_089A417C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4188;
      }
      goto L_089A4184;
    }
L_089A4184:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A4188;
L_089A4188:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43FC;
      }
      goto L_089A41AC;
    }
L_089A41AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] >> 2u);
    ctx.set_gpr(4, ctx.gpr[6] >> 2u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A41D0;
      }
      goto L_089A41C8;
    }
L_089A41C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A41D4;
      }
      goto L_089A41D0;
    }
L_089A41D0:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_089A41D4;
L_089A41D4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A41E8;
      }
      goto L_089A41E0;
    }
L_089A41E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A41EC;
      }
      goto L_089A41E8;
    }
L_089A41E8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A41EC;
L_089A41EC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43FC;
      }
      goto L_089A4210;
    }
L_089A4210:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] >> 2u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4230;
      }
      goto L_089A4228;
    }
L_089A4228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4234;
      }
      goto L_089A4230;
    }
L_089A4230:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_089A4234;
L_089A4234:
    ctx.set_gpr(2, ctx.gpr[6] >> 2u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A424C;
      }
      goto L_089A4244;
    }
L_089A4244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4250;
      }
      goto L_089A424C;
    }
L_089A424C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089A4250;
L_089A4250:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43FC;
      }
      goto L_089A4274;
    }
L_089A4274:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] >> 2u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4294;
      }
      goto L_089A428C;
    }
L_089A428C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4298;
      }
      goto L_089A4294;
    }
L_089A4294:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_089A4298;
L_089A4298:
    ctx.set_gpr(2, ctx.gpr[6] >> 2u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A42B0;
      }
      goto L_089A42A8;
    }
L_089A42A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A42B4;
      }
      goto L_089A42B0;
    }
L_089A42B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089A42B4;
L_089A42B4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43FC;
      }
      goto L_089A42D8;
    }
L_089A42D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43EC;
      }
      goto L_089A42F0;
    }
L_089A42F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43EC;
      }
      goto L_089A4308;
    }
L_089A4308:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43EC;
      }
      goto L_089A4320;
    }
L_089A4320:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43EC;
      }
      goto L_089A4338;
    }
L_089A4338:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43EC;
      }
      goto L_089A4350;
    }
L_089A4350:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43EC;
      }
      goto L_089A4368;
    }
L_089A4368:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43EC;
      }
      goto L_089A4380;
    }
L_089A4380:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43EC;
      }
      goto L_089A4398;
    }
L_089A4398:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43EC;
      }
      goto L_089A43B0;
    }
L_089A43B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43EC;
      }
      goto L_089A43C8;
    }
L_089A43C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43EC;
      }
      goto L_089A43E0;
    }
L_089A43E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A43FC;
      }
      goto L_089A43EC;
    }
L_089A43EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089A43FC;
L_089A43FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4404:
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
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(17, ctx.gpr[10] + 0u);
    ctx.set_gpr(16, ctx.gpr[11] + 0u);
    ctx.set_gpr(31, 0x089A4454u);
    // nop
    goto L_089A4F50;
L_089A4454:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A445C;
    }
L_089A445C:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(41));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A49A8;
      }
      goto L_089A4484;
    }
L_089A4484:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A498C;
      }
      goto L_089A4490;
    }
L_089A4490:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(38));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A497C;
      }
      goto L_089A449C;
    }
L_089A449C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(39));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A4968;
      }
      goto L_089A44A8;
    }
L_089A44A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(37));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A4954;
      }
      goto L_089A44B4;
    }
L_089A44B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A4944;
      }
      goto L_089A44C0;
    }
L_089A44C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(33));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A4928;
      }
      goto L_089A44CC;
    }
L_089A44CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A490C;
      }
      goto L_089A44D8;
    }
L_089A44D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(31));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A48F0;
      }
      goto L_089A44E4;
    }
L_089A44E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A48DC;
      }
      goto L_089A44F0;
    }
L_089A44F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(29));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A48C8;
      }
      goto L_089A44FC;
    }
L_089A44FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(44));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A48B4;
      }
      goto L_089A4508;
    }
L_089A4508:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A4898;
      }
      goto L_089A4514;
    }
L_089A4514:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A4898;
      }
      goto L_089A4520;
    }
L_089A4520:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A487C;
      }
      goto L_089A452C;
    }
L_089A452C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A487C;
      }
      goto L_089A4538;
    }
L_089A4538:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A487C;
      }
      goto L_089A4544;
    }
L_089A4544:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(21));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A4860;
      }
      goto L_089A4550;
    }
L_089A4550:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A4860;
      }
      goto L_089A455C;
    }
L_089A455C:
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | 2u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A484C;
      }
      goto L_089A456C;
    }
L_089A456C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A483C;
      }
      goto L_089A4578;
    }
L_089A4578:
    ctx.set_gpr(3, ctx.gpr[4] | 1u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A483C;
      }
      goto L_089A4584;
    }
L_089A4584:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A482C;
      }
      goto L_089A4590;
    }
L_089A4590:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A482C;
      }
      goto L_089A4598;
    }
L_089A4598:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A4808;
      }
      goto L_089A45A4;
    }
L_089A45A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A47EC;
      }
      goto L_089A45B0;
    }
L_089A45B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A47D0;
      }
      goto L_089A45BC;
    }
L_089A45BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(22));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A47D0;
      }
      goto L_089A45C8;
    }
L_089A45C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A47B0;
      }
      goto L_089A45D4;
    }
L_089A45D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(35));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A4794;
      }
      goto L_089A45E0;
    }
L_089A45E0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A4794;
      }
      goto L_089A45EC;
    }
L_089A45EC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A4778;
      }
      goto L_089A45F8;
    }
L_089A45F8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A4760;
      }
      goto L_089A4604;
    }
L_089A4604:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A4750;
      }
      goto L_089A4610;
    }
L_089A4610:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A4750;
      }
      goto L_089A461C;
    }
L_089A461C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(19));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A4740;
      }
      goto L_089A4628;
    }
L_089A4628:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(18));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A4730;
      }
      goto L_089A4634;
    }
L_089A4634:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(27));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A4730;
      }
      goto L_089A4640;
    }
L_089A4640:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(17));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A4720;
      }
      goto L_089A464C;
    }
L_089A464C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(26));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A4720;
      }
      goto L_089A4658;
    }
L_089A4658:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A4700;
      }
      goto L_089A4664;
    }
L_089A4664:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A46EC;
      }
      goto L_089A4670;
    }
L_089A4670:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A46EC;
      }
      goto L_089A467C;
    }
L_089A467C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(25));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A46D8;
      }
      goto L_089A4688;
    }
L_089A4688:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A46D8;
      }
      goto L_089A4694;
    }
L_089A4694:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A46CC;
      }
      goto L_089A46A0;
    }
L_089A46A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(23));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A46BC;
      }
      goto L_089A46AC;
    }
L_089A46AC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A46BC;
      }
      goto L_089A46B4;
    }
L_089A46B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A46BC;
    }
L_089A46BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A46CC;
    }
L_089A46CC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A46D8;
    }
L_089A46D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A46EC;
    }
L_089A46EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4700;
    }
L_089A4700:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4720;
    }
L_089A4720:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4730;
    }
L_089A4730:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4740;
    }
L_089A4740:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4750;
    }
L_089A4750:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4760;
    }
L_089A4760:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4778;
    }
L_089A4778:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4794;
    }
L_089A4794:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A47B0;
    }
L_089A47B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A47D0;
    }
L_089A47D0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A47EC;
    }
L_089A47EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4808;
    }
L_089A4808:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A482C;
    }
L_089A482C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A483C;
    }
L_089A483C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A484C;
    }
L_089A484C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4860;
    }
L_089A4860:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A487C;
    }
L_089A487C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4898;
    }
L_089A4898:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A48B4;
    }
L_089A48B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A48C8;
    }
L_089A48C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A48DC;
    }
L_089A48DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A48F0;
    }
L_089A48F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A490C;
    }
L_089A490C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4928;
    }
L_089A4928:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4944;
    }
L_089A4944:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4954;
    }
L_089A4954:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A4968;
    }
L_089A4968:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A497C;
    }
L_089A497C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A498C;
    }
L_089A498C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A49BC;
      }
      goto L_089A49A8;
    }
L_089A49A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_089A49BC;
L_089A49BC:
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
L_089A49EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A4A44;
      }
      goto L_089A49F8;
    }
L_089A49F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A4A38;
      }
      goto L_089A4A04;
    }
L_089A4A04:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A4A30;
      }
      goto L_089A4A10;
    }
L_089A4A10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A4A24;
      }
      goto L_089A4A1C;
    }
L_089A4A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4A50;
      }
      goto L_089A4A24;
    }
L_089A4A24:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4A54;
      }
      goto L_089A4A30;
    }
L_089A4A30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4A54;
      }
      goto L_089A4A38;
    }
L_089A4A38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4A54;
      }
      goto L_089A4A44;
    }
L_089A4A44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4A54;
      }
      goto L_089A4A50;
    }
L_089A4A50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_089A4A54;
L_089A4A54:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4A5C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-42));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4A8C;
      }
      goto L_089A4A78;
    }
L_089A4A78:
    ctx.set_gpr(3, ctx.gpr[5] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] & 27u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4A8C;
      }
      goto L_089A4A88;
    }
L_089A4A88:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_089A4A8C;
L_089A4A8C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4AAC;
      }
      goto L_089A4A94;
    }
L_089A4A94:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4AAC;
      }
      goto L_089A4AA8;
    }
L_089A4AA8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089A4AAC;
L_089A4AAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4AB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089A4AD4u);
    // nop
    goto L_089A4B7C;
L_089A4AD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4B60;
      }
      goto L_089A4ADC;
    }
L_089A4ADC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(24) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4B14;
      }
      goto L_089A4AF8;
    }
L_089A4AF8:
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, 152u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32725u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4B14;
      }
      goto L_089A4B10;
    }
L_089A4B10:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    goto L_089A4B14;
L_089A4B14:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4B54;
      }
      goto L_089A4B1C;
    }
L_089A4B1C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-34));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4B48;
      }
      goto L_089A4B30;
    }
L_089A4B30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] & 7939u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4B48;
      }
      goto L_089A4B44;
    }
L_089A4B44:
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    goto L_089A4B48;
L_089A4B48:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4B54;
      }
      goto L_089A4B50;
    }
L_089A4B50:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089A4B54;
L_089A4B54:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4B60;
      }
      goto L_089A4B5C;
    }
L_089A4B5C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_089A4B60;
L_089A4B60:
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
L_089A4B7C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    ctx.set_gpr(2, ctx.gpr[4] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4B94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A4BFC;
      }
      goto L_089A4BB4;
    }
L_089A4BB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A4BFC;
      }
      goto L_089A4BC4;
    }
L_089A4BC4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30856)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A4BD8u);
    // nop
    goto L_089A6210;
L_089A4BD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4BFC;
      }
      goto L_089A4BE4;
    }
L_089A4BE4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A4BFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4BFCu) goto L_089A4BFC;
    return;
L_089A4BFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4C10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A4CE4;
      }
      goto L_089A4C38;
    }
L_089A4C38:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30856)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A4C4Cu);
    // nop
    goto L_089A6210;
L_089A4C4C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4CE4;
      }
      goto L_089A4C58;
    }
L_089A4C58:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A4C94;
      }
      goto L_089A4C68;
    }
L_089A4C68:
    ctx.set_gpr(31, 0x089A4C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 559u, 0x089A2744u>(ctx, &aot_mem) && ctx.pc == 0x089A4C70u) goto L_089A4C70;
    return;
L_089A4C70:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A4C8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4C8Cu) goto L_089A4C8C;
    return;
L_089A4C8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4CE4;
      }
      goto L_089A4C94;
    }
L_089A4C94:
    ctx.set_gpr(31, 0x089A4C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 559u, 0x089A2744u>(ctx, &aot_mem) && ctx.pc == 0x089A4C9Cu) goto L_089A4C9C;
    return;
L_089A4C9C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A4CE4;
      }
      goto L_089A4CA4;
    }
L_089A4CA4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A4CC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4CC0u) goto L_089A4CC0;
    return;
L_089A4CC0:
    ctx.set_gpr(31, 0x089A4CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 559u, 0x089A2744u>(ctx, &aot_mem) && ctx.pc == 0x089A4CC8u) goto L_089A4CC8;
    return;
L_089A4CC8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A4CE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4CE4u) goto L_089A4CE4;
    return;
L_089A4CE4:
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
L_089A4D00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089A4D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 438u, 0x08945F0Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4D1Cu) goto L_089A4D1C;
    return;
L_089A4D1C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4DE8;
      }
      goto L_089A4D28;
    }
L_089A4D28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4D60;
      }
      goto L_089A4D38;
    }
L_089A4D38:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089A4D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089A4D44u) goto L_089A4D44;
    return;
L_089A4D44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4D58;
      }
      goto L_089A4D4C;
    }
L_089A4D4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A4D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089A4D58u) goto L_089A4D58;
    return;
L_089A4D58:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089A4D60;
L_089A4D60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A4D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089A4D74u) goto L_089A4D74;
    return;
L_089A4D74:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4DA4;
      }
      goto L_089A4D88;
    }
L_089A4D88:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4DA4;
      }
      goto L_089A4DA0;
    }
L_089A4DA0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A4DA4;
L_089A4DA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4DD0;
      }
      goto L_089A4DAC;
    }
L_089A4DAC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4DD0;
      }
      goto L_089A4DC4;
    }
L_089A4DC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A4DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4DD0u) goto L_089A4DD0;
    return;
L_089A4DD0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x089A4DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089A4DE4u) goto L_089A4DE4;
    return;
L_089A4DE4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    goto L_089A4DE8;
L_089A4DE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089A4DF4u);
    // nop
    goto L_089A4E2C;
L_089A4DF4:
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
L_089A4E0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089A4E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 439u, 0x08945F14u>(ctx, &aot_mem) && ctx.pc == 0x089A4E1Cu) goto L_089A4E1C;
    return;
L_089A4E1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4E2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089A4E58;
      }
      goto L_089A4E50;
    }
L_089A4E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4E68;
      }
      goto L_089A4E58;
    }
L_089A4E58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(16, ctx.lo);
    goto L_089A4E68;
L_089A4E68:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089A4E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 560u, 0x089A2750u>(ctx, &aot_mem) && ctx.pc == 0x089A4E74u) goto L_089A4E74;
    return;
L_089A4E74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4F34;
      }
      goto L_089A4E80;
    }
L_089A4E80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4F34;
      }
      goto L_089A4E90;
    }
L_089A4E90:
    ctx.set_gpr(31, 0x089A4E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A4E98u) goto L_089A4E98;
    return;
L_089A4E98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A4EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A4EA4u) goto L_089A4EA4;
    return;
L_089A4EA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A4EC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4EC0u) goto L_089A4EC0;
    return;
L_089A4EC0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4F14;
      }
      goto L_089A4ED8;
    }
L_089A4ED8:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A4EF8;
      }
      goto L_089A4EE4;
    }
L_089A4EE4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089A4EF8;
L_089A4EF8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4EE4;
      }
      goto L_089A4F04;
    }
L_089A4F04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089A4F14;
L_089A4F14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A4ED8;
      }
      goto L_089A4F24;
    }
L_089A4F24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089A4F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089A4F30u) goto L_089A4F30;
    return;
L_089A4F30:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    goto L_089A4F34;
L_089A4F34:
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
L_089A4F50:
    ctx.set_gpr(2, ctx.gpr[4] ^ 32768u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A4F60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A4FA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4FA4u) goto L_089A4FA4;
    return;
L_089A4FA4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A4FBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4FBCu) goto L_089A4FBC;
    return;
L_089A4FBC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A4FD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4FD4u) goto L_089A4FD4;
    return;
L_089A4FD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A4FECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A4FECu) goto L_089A4FEC;
    return;
L_089A4FEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A5028;
      }
      goto L_089A4FF8;
    }
L_089A4FF8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A500Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A500Cu) goto L_089A500C;
    return;
L_089A500C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089A5020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089A5020u) goto L_089A5020;
    return;
L_089A5020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A503C;
      }
      goto L_089A5028;
    }
L_089A5028:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A503Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 560u, 0x089A2750u>(ctx, &aot_mem) && ctx.pc == 0x089A503Cu) goto L_089A503C;
    return;
L_089A503C:
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
L_089A5060:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A506C:
    ctx.set_gpr(3, ctx.gpr[5] & 65535u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A507C:
    ctx.set_gpr(3, ctx.gpr[5] & 65535u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A508C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A50C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A50C8u) goto L_089A50C8;
    return;
L_089A50C8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A50E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A50E0u) goto L_089A50E0;
    return;
L_089A50E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089A50ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 558u, 0x089A2734u>(ctx, &aot_mem) && ctx.pc == 0x089A50ECu) goto L_089A50EC;
    return;
L_089A50EC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A5104u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A5104u) goto L_089A5104;
    return;
L_089A5104:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A5140;
      }
      goto L_089A5110;
    }
L_089A5110:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A5124u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A5124u) goto L_089A5124;
    return;
L_089A5124:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089A5138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089A5138u) goto L_089A5138;
    return;
L_089A5138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5154;
      }
      goto L_089A5140;
    }
L_089A5140:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089A5154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 560u, 0x089A2750u>(ctx, &aot_mem) && ctx.pc == 0x089A5154u) goto L_089A5154;
    return;
L_089A5154:
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
L_089A5174:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    ctx.set_gpr(6, ctx.gpr[8] << 1u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[8] << 3u);
    ctx.set_gpr(11, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5218;
      }
      goto L_089A51A0;
    }
L_089A51A0:
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A51FC;
      }
      goto L_089A51AC;
    }
L_089A51AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    goto L_089A51FC;
L_089A51FC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A51AC;
      }
      goto L_089A5208;
    }
L_089A5208:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    goto L_089A5218;
L_089A5218:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A51A0;
      }
      goto L_089A5224;
    }
L_089A5224:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A522C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A5270;
    }
L_089A5270:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(45));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A527C;
    }
L_089A527C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(43));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A54A8;
      }
      goto L_089A5288;
    }
L_089A5288:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(42));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A54A8;
      }
      goto L_089A5294;
    }
L_089A5294:
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(9, ctx.gpr[4] | 1u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_089A5400;
      }
      goto L_089A52A4;
    }
L_089A52A4:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5400;
      }
      goto L_089A52AC;
    }
L_089A52AC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(34));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A52B8;
    }
L_089A52B8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(13));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A52C4;
    }
L_089A52C4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(21));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A52D0;
    }
L_089A52D0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A52DC;
    }
L_089A52DC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(35));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A52E8;
    }
L_089A52E8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A52F4;
    }
L_089A52F4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(22));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A5300;
    }
L_089A5300:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A530C;
    }
L_089A530C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A5318;
    }
L_089A5318:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A5324;
    }
L_089A5324:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(25));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A5330;
    }
L_089A5330:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A533C;
    }
L_089A533C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(23));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A5348;
    }
L_089A5348:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5358;
      }
      goto L_089A5350;
    }
L_089A5350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A5358;
    }
L_089A5358:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A53DC;
      }
      goto L_089A5364;
    }
L_089A5364:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A53C4;
      }
      goto L_089A5370;
    }
L_089A5370:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A53A8;
      }
      goto L_089A537C;
    }
L_089A537C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A5390;
      }
      goto L_089A5388;
    }
L_089A5388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A53F8;
      }
      goto L_089A5390;
    }
L_089A5390:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5400;
      }
      goto L_089A53A8;
    }
L_089A53A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5400;
      }
      goto L_089A53C4;
    }
L_089A53C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5400;
      }
      goto L_089A53DC;
    }
L_089A53DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5400;
      }
      goto L_089A53F8;
    }
L_089A53F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A5400;
    }
L_089A5400:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A5484;
      }
      goto L_089A540C;
    }
L_089A540C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A546C;
      }
      goto L_089A5418;
    }
L_089A5418:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A5450;
      }
      goto L_089A5424;
    }
L_089A5424:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A5438;
      }
      goto L_089A5430;
    }
L_089A5430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A54A0;
      }
      goto L_089A5438;
    }
L_089A5438:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A5450;
    }
L_089A5450:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A546C;
    }
L_089A546C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A5484;
    }
L_089A5484:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A54A0;
    }
L_089A54A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A54A8;
    }
L_089A54A8:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_089A552C;
      }
      goto L_089A54B4;
    }
L_089A54B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A5510;
      }
      goto L_089A54C0;
    }
L_089A54C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089A54F8;
      }
      goto L_089A54CC;
    }
L_089A54CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A54E0;
      }
      goto L_089A54D8;
    }
L_089A54D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A54E0;
    }
L_089A54E0:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A54F8;
    }
L_089A54F8:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A5510;
    }
L_089A5510:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A552C;
    }
L_089A552C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5548;
      }
      goto L_089A5548;
    }
L_089A5548:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5550:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5588;
      }
      goto L_089A5578;
    }
L_089A5578:
    ctx.set_gpr(31, 0x089A5580u);
    // nop
    goto L_089A5174;
L_089A5580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A595C;
      }
      goto L_089A5588;
    }
L_089A5588:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089A55DCu);
    // nop
    goto L_089A522C;
L_089A55DC:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[9] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5608;
      }
      goto L_089A55F8;
    }
L_089A55F8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5650;
      }
      goto L_089A5608;
    }
L_089A5608:
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A595C;
      }
      goto L_089A5614;
    }
L_089A5614:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A595C;
      }
      goto L_089A5624;
    }
L_089A5624:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[2] >> 1u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089A5648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089A5648u) goto L_089A5648;
    return;
L_089A5648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A595C;
      }
      goto L_089A5650;
    }
L_089A5650:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(11, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const std::uint32_t dividend = ctx.gpr[11]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(10, ctx.lo);
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(15, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5950;
      }
      goto L_089A5694;
    }
L_089A5694:
    ctx.set_gpr(14, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5940;
      }
      goto L_089A56A0;
    }
L_089A56A0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[14] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(8, ctx.gpr[17] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A589C;
      }
      goto L_089A56F4;
    }
L_089A56F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A5818;
      }
      goto L_089A5700;
    }
L_089A5700:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A57A0;
      }
      goto L_089A570C;
    }
L_089A570C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A5720;
      }
      goto L_089A5718;
    }
L_089A5718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A593C;
      }
      goto L_089A5720;
    }
L_089A5720:
    ctx.set_gpr(13, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5788;
      }
      goto L_089A572C;
    }
L_089A572C:
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5774;
      }
      goto L_089A5738;
    }
L_089A5738:
    ctx.set_gpr(18, ctx.gpr[7] + ctx.gpr[12]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[13]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(2));
    goto L_089A5774;
L_089A5774:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5738;
      }
      goto L_089A5784;
    }
L_089A5784:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_089A5788;
L_089A5788:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[13] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A572C;
      }
      goto L_089A5798;
    }
L_089A5798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A593C;
      }
      goto L_089A57A0;
    }
L_089A57A0:
    ctx.set_gpr(13, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5800;
      }
      goto L_089A57AC;
    }
L_089A57AC:
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A57EC;
      }
      goto L_089A57B8;
    }
L_089A57B8:
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[12]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[13]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[12] + ctx.gpr[8]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_089A57EC;
L_089A57EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A57B8;
      }
      goto L_089A57FC;
    }
L_089A57FC:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_089A5800;
L_089A5800:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[13] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A57AC;
      }
      goto L_089A5810;
    }
L_089A5810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A593C;
      }
      goto L_089A5818;
    }
L_089A5818:
    ctx.set_gpr(13, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5884;
      }
      goto L_089A5824;
    }
L_089A5824:
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5870;
      }
      goto L_089A5830;
    }
L_089A5830:
    ctx.set_gpr(18, ctx.gpr[7] + ctx.gpr[12]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[13]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[12] << 1u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_089A5870;
L_089A5870:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5830;
      }
      goto L_089A5880;
    }
L_089A5880:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_089A5884;
L_089A5884:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[13] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5824;
      }
      goto L_089A5894;
    }
L_089A5894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A593C;
      }
      goto L_089A589C;
    }
L_089A589C:
    ctx.set_gpr(13, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A592C;
      }
      goto L_089A58A8;
    }
L_089A58A8:
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5918;
      }
      goto L_089A58B4;
    }
L_089A58B4:
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[12]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[13]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[12] << 1u);
    ctx.set_gpr(24, ctx.gpr[4] >> 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(18, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[18] << 1u);
    ctx.set_gpr(18, ctx.gpr[8] + ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(24, ctx.gpr[8] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(18, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[18] << 1u);
    ctx.set_gpr(18, ctx.gpr[24] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_089A5918;
L_089A5918:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A58B4;
      }
      goto L_089A5928;
    }
L_089A5928:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_089A592C;
L_089A592C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[13] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A58A8;
      }
      goto L_089A593C;
    }
L_089A593C:
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    goto L_089A5940;
L_089A5940:
    ctx.set_gpr(3, ctx.gpr[14] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A56A0;
      }
      goto L_089A594C;
    }
L_089A594C:
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    goto L_089A5950;
L_089A5950:
    ctx.set_gpr(3, ctx.gpr[15] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5694;
      }
      goto L_089A595C;
    }
L_089A595C:
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
L_089A5978:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089A59E8u);
    // nop
    goto L_089A522C;
L_089A59E8:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[9] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5A14;
      }
      goto L_089A5A04;
    }
L_089A5A04:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5A5C;
      }
      goto L_089A5A14;
    }
L_089A5A14:
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5D60;
      }
      goto L_089A5A20;
    }
L_089A5A20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5D60;
      }
      goto L_089A5A30;
    }
L_089A5A30:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[2] >> 1u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089A5A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089A5A54u) goto L_089A5A54;
    return;
L_089A5A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5D60;
      }
      goto L_089A5A5C;
    }
L_089A5A5C:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(9, ctx.lo);
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(14, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5D54;
      }
      goto L_089A5AA0;
    }
L_089A5AA0:
    ctx.set_gpr(13, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5D44;
      }
      goto L_089A5AAC;
    }
L_089A5AAC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[13] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A5CA8;
      }
      goto L_089A5B00;
    }
L_089A5B00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A5C24;
      }
      goto L_089A5B0C;
    }
L_089A5B0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A5BAC;
      }
      goto L_089A5B18;
    }
L_089A5B18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A5B2C;
      }
      goto L_089A5B24;
    }
L_089A5B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5D40;
      }
      goto L_089A5B2C;
    }
L_089A5B2C:
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5B94;
      }
      goto L_089A5B38;
    }
L_089A5B38:
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5B80;
      }
      goto L_089A5B44;
    }
L_089A5B44:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[11] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[6] + ctx.gpr[11]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[12]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[15] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(2));
    goto L_089A5B80;
L_089A5B80:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[11] < ctx.gpr[15] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5B44;
      }
      goto L_089A5B90;
    }
L_089A5B90:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_089A5B94;
L_089A5B94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5B38;
      }
      goto L_089A5BA4;
    }
L_089A5BA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5D40;
      }
      goto L_089A5BAC;
    }
L_089A5BAC:
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5C0C;
      }
      goto L_089A5BB8;
    }
L_089A5BB8:
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5BF8;
      }
      goto L_089A5BC4;
    }
L_089A5BC4:
    ctx.set_gpr(18, ctx.gpr[11] + ctx.gpr[7]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[6] + ctx.gpr[11]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[12]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[15] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_089A5BF8;
L_089A5BF8:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[11] < ctx.gpr[15] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5BC4;
      }
      goto L_089A5C08;
    }
L_089A5C08:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_089A5C0C;
L_089A5C0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5BB8;
      }
      goto L_089A5C1C;
    }
L_089A5C1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5D40;
      }
      goto L_089A5C24;
    }
L_089A5C24:
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5C90;
      }
      goto L_089A5C30;
    }
L_089A5C30:
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5C7C;
      }
      goto L_089A5C3C;
    }
L_089A5C3C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(15, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[11] << 1u);
    ctx.set_gpr(3, ctx.gpr[15] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[6] + ctx.gpr[11]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[12]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[15] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_089A5C7C;
L_089A5C7C:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[11] < ctx.gpr[15] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5C3C;
      }
      goto L_089A5C8C;
    }
L_089A5C8C:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_089A5C90;
L_089A5C90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5C30;
      }
      goto L_089A5CA0;
    }
L_089A5CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5D40;
      }
      goto L_089A5CA8;
    }
L_089A5CA8:
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5D30;
      }
      goto L_089A5CB4;
    }
L_089A5CB4:
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5D1C;
      }
      goto L_089A5CC0;
    }
L_089A5CC0:
    ctx.set_gpr(3, ctx.gpr[11] << 1u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(15, ctx.lo);
    ctx.set_gpr(24, ctx.gpr[15] << 1u);
    ctx.set_gpr(15, ctx.gpr[7] + ctx.gpr[24]);
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[3]);
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[15] << 16u);
    ctx.set_gpr(15, ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(15, ctx.gpr[15] + ctx.gpr[24]);
    ctx.set_gpr(3, ctx.gpr[15] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] | ctx.gpr[3]);
    ctx.set_gpr(15, ctx.gpr[6] + ctx.gpr[11]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[12]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[15] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_089A5D1C;
L_089A5D1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[11] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5CC0;
      }
      goto L_089A5D2C;
    }
L_089A5D2C:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_089A5D30;
L_089A5D30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[12] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5CB4;
      }
      goto L_089A5D40;
    }
L_089A5D40:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_089A5D44;
L_089A5D44:
    ctx.set_gpr(3, ctx.gpr[13] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5AAC;
      }
      goto L_089A5D50;
    }
L_089A5D50:
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    goto L_089A5D54;
L_089A5D54:
    ctx.set_gpr(3, ctx.gpr[14] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A5AA0;
      }
      goto L_089A5D60;
    }
L_089A5D60:
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
L_089A5D7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A5DB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A5DB4u) goto L_089A5DB4;
    return;
L_089A5DB4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A5DCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A5DCCu) goto L_089A5DCC;
    return;
L_089A5DCC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
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
L_089A5DFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5E04:
    ctx.set_gpr(3, ctx.gpr[5] & 65535u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A5E14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x089A5E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x089A5E2Cu) goto L_089A5E2C;
    return;
L_089A5E2C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32524));
    ctx.set_gpr(31, 0x089A5E44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 549u, 0x0895655Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5E44u) goto L_089A5E44;
    return;
L_089A5E44:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5E5C;
      }
      goto L_089A5E50;
    }
L_089A5E50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A5E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A5E5Cu) goto L_089A5E5C;
    return;
L_089A5E5C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29892));
    ctx.set_gpr(31, 0x089A5E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 890u, 0x08943EA0u>(ctx, &aot_mem) && ctx.pc == 0x089A5E70u) goto L_089A5E70;
    return;
L_089A5E70:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5EA0;
      }
      goto L_089A5E7C;
    }
L_089A5E7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29332)));
    ctx.set_gpr(31, 0x089A5E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5E90u) goto L_089A5E90;
    return;
L_089A5E90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5EA0;
      }
      goto L_089A5E98;
    }
L_089A5E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5EA4;
      }
      goto L_089A5EA0;
    }
L_089A5EA0:
    ctx.set_gpr(17, 0u + 0u);
    goto L_089A5EA4;
L_089A5EA4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5EBC;
      }
      goto L_089A5EB0;
    }
L_089A5EB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089A5EBC;
L_089A5EBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5ED0;
      }
      goto L_089A5EC8;
    }
L_089A5EC8:
    ctx.set_gpr(31, 0x089A5ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A5ED0u) goto L_089A5ED0;
    return;
L_089A5ED0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16348));
    ctx.set_gpr(31, 0x089A5EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x089A5EE4u) goto L_089A5EE4;
    return;
L_089A5EE4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089A5EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 247u, 0x08910FFCu>(ctx, &aot_mem) && ctx.pc == 0x089A5EF4u) goto L_089A5EF4;
    return;
L_089A5EF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5F08;
      }
      goto L_089A5F00;
    }
L_089A5F00:
    ctx.set_gpr(31, 0x089A5F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A5F08u) goto L_089A5F08;
    return;
L_089A5F08:
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
L_089A5F20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x089A5F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x089A5F3Cu) goto L_089A5F3C;
    return;
L_089A5F3C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32524));
    ctx.set_gpr(31, 0x089A5F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 549u, 0x0895655Cu>(ctx, &aot_mem) && ctx.pc == 0x089A5F54u) goto L_089A5F54;
    return;
L_089A5F54:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5F6C;
      }
      goto L_089A5F60;
    }
L_089A5F60:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089A5F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A5F6Cu) goto L_089A5F6C;
    return;
L_089A5F6C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32236)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089A5F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 443u, 0x08949ECCu>(ctx, &aot_mem) && ctx.pc == 0x089A5F88u) goto L_089A5F88;
    return;
L_089A5F88:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A5FCC;
      }
      goto L_089A5F94;
    }
L_089A5F94:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089A5FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 240u, 0x08910F60u>(ctx, &aot_mem) && ctx.pc == 0x089A5FB0u) goto L_089A5FB0;
    return;
L_089A5FB0:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32236)));
    ctx.set_gpr(31, 0x089A5FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 443u, 0x08949ECCu>(ctx, &aot_mem) && ctx.pc == 0x089A5FC8u) goto L_089A5FC8;
    return;
L_089A5FC8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_089A5FCC;
L_089A5FCC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A5F94;
      }
      goto L_089A5FD8;
    }
L_089A5FD8:
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
L_089A5FF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32224)));
    ctx.set_gpr(31, 0x089A6018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6018u) goto L_089A6018;
    return;
L_089A6018:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6130;
      }
      goto L_089A6020;
    }
L_089A6020:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-32224)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089A6130;
      }
      goto L_089A6030;
    }
L_089A6030:
    ctx.set_gpr(31, 0x089A6038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x089A6038u) goto L_089A6038;
    return;
L_089A6038:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32524));
    ctx.set_gpr(31, 0x089A6050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 549u, 0x0895655Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6050u) goto L_089A6050;
    return;
L_089A6050:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6068;
      }
      goto L_089A605C;
    }
L_089A605C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A6068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A6068u) goto L_089A6068;
    return;
L_089A6068:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32236)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089A6084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 443u, 0x08949ECCu>(ctx, &aot_mem) && ctx.pc == 0x089A6084u) goto L_089A6084;
    return;
L_089A6084:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089A60ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 890u, 0x08943EA0u>(ctx, &aot_mem) && ctx.pc == 0x089A60ACu) goto L_089A60AC;
    return;
L_089A60AC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A60DC;
      }
      goto L_089A60B8;
    }
L_089A60B8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32224)));
    ctx.set_gpr(31, 0x089A60CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089A60CCu) goto L_089A60CC;
    return;
L_089A60CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A60DC;
      }
      goto L_089A60D4;
    }
L_089A60D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A60E0;
      }
      goto L_089A60DC;
    }
L_089A60DC:
    ctx.set_gpr(17, 0u + 0u);
    goto L_089A60E0;
L_089A60E0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A60F8;
      }
      goto L_089A60EC;
    }
L_089A60EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089A60F8;
L_089A60F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A610C;
      }
      goto L_089A6104;
    }
L_089A6104:
    ctx.set_gpr(31, 0x089A610Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A610Cu) goto L_089A610C;
    return;
L_089A610C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x089A611Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 355u, 0x08949938u>(ctx, &aot_mem) && ctx.pc == 0x089A611Cu) goto L_089A611C;
    return;
L_089A611C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6130;
      }
      goto L_089A6128;
    }
L_089A6128:
    ctx.set_gpr(31, 0x089A6130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A6130u) goto L_089A6130;
    return;
L_089A6130:
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
L_089A6148:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x089A615Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 533u, 0x08992E7Cu>(ctx, &aot_mem) && ctx.pc == 0x089A615Cu) goto L_089A615C;
    return;
L_089A615C:
    ctx.set_gpr(31, 0x089A6164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x089A6164u) goto L_089A6164;
    return;
L_089A6164:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32524));
    ctx.set_gpr(31, 0x089A617Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 549u, 0x0895655Cu>(ctx, &aot_mem) && ctx.pc == 0x089A617Cu) goto L_089A617C;
    return;
L_089A617C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6194;
      }
      goto L_089A6188;
    }
L_089A6188:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A6194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089A6194u) goto L_089A6194;
    return;
L_089A6194:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32236)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089A61B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 443u, 0x08949ECCu>(ctx, &aot_mem) && ctx.pc == 0x089A61B0u) goto L_089A61B0;
    return;
L_089A61B0:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30832));
    ctx.set_gpr(31, 0x089A61D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089A61D0u) goto L_089A61D0;
    return;
L_089A61D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A61E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30832));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089A6200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089A6200u) goto L_089A6200;
    return;
L_089A6200:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6210:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-30832)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6288;
      }
      goto L_089A6244;
    }
L_089A6244:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6284;
      }
      goto L_089A625C;
    }
L_089A625C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A6270u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6270u) goto L_089A6270;
    return;
L_089A6270:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A6284;
      }
      goto L_089A6278;
    }
L_089A6278:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A629C;
      }
      goto L_089A6284;
    }
L_089A6284:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089A6288;
L_089A6288:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6244;
      }
      goto L_089A6298;
    }
L_089A6298:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089A629C;
L_089A629C:
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
L_089A62BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A62F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A62F0u) goto L_089A62F0;
    return;
L_089A62F0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A6300u);
    // nop
    goto L_089A65AC;
L_089A6300:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6318;
      }
      goto L_089A630C;
    }
L_089A630C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6380;
      }
      goto L_089A6318;
    }
L_089A6318:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x089A6328u);
    // nop
    goto L_089A6210;
L_089A6328:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x089A633Cu);
    // nop
    goto L_089A65AC;
L_089A633C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A637C;
      }
      goto L_089A6344;
    }
L_089A6344:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A6358u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6358u) goto L_089A6358;
    return;
L_089A6358:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A6368u);
    // nop
    goto L_089A65AC;
L_089A6368:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A637C;
      }
      goto L_089A6370;
    }
L_089A6370:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6380;
      }
      goto L_089A637C;
    }
L_089A637C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089A6380;
L_089A6380:
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
L_089A639C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A63C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A63C4u) goto L_089A63C4;
    return;
L_089A63C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A63D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089A63F8u);
    // nop
    goto L_089A6210;
L_089A63F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A641C;
      }
      goto L_089A6404;
    }
L_089A6404:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A641Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A641Cu) goto L_089A641C;
    return;
L_089A641C:
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
L_089A6434:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6494;
      }
      goto L_089A6470;
    }
L_089A6470:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A6490;
      }
      goto L_089A6488;
    }
L_089A6488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A64A4;
      }
      goto L_089A6490;
    }
L_089A6490:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089A6494;
L_089A6494:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6470;
      }
      goto L_089A64A0;
    }
L_089A64A0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    goto L_089A64A4;
L_089A64A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A6554;
      }
      goto L_089A64B0;
    }
L_089A64B0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A64D8;
      }
      goto L_089A64C4;
    }
L_089A64C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A64EC;
      }
      goto L_089A64D8;
    }
L_089A64D8:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089A64ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A64ECu) goto L_089A64EC;
    return;
L_089A64EC:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6528;
      }
      goto L_089A6514;
    }
L_089A6514:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A653C;
      }
      goto L_089A6528;
    }
L_089A6528:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089A653Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A653Cu) goto L_089A653C;
    return;
L_089A653C:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6588;
      }
      goto L_089A6554;
    }
L_089A6554:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6588;
      }
      goto L_089A6564;
    }
L_089A6564:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A6588;
      }
      goto L_089A656C;
    }
L_089A656C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6588;
      }
      goto L_089A6578;
    }
L_089A6578:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_089A6588;
L_089A6588:
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
L_089A65AC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A65E4;
      }
      goto L_089A65C0;
    }
L_089A65C0:
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A65E0;
      }
      goto L_089A65D8;
    }
L_089A65D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A65F4;
      }
      goto L_089A65E0;
    }
L_089A65E0:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089A65E4;
L_089A65E4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A65C0;
      }
      goto L_089A65F0;
    }
L_089A65F0:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    goto L_089A65F4;
L_089A65F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A6620;
      }
      goto L_089A6600;
    }
L_089A6600:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6624;
      }
      goto L_089A6620;
    }
L_089A6620:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089A6624;
L_089A6624:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A662C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6664;
      }
      goto L_089A6640;
    }
L_089A6640:
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A6660;
      }
      goto L_089A6658;
    }
L_089A6658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6674;
      }
      goto L_089A6660;
    }
L_089A6660:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089A6664;
L_089A6664:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6640;
      }
      goto L_089A6670;
    }
L_089A6670:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    goto L_089A6674;
L_089A6674:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6690:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A66B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A66B4u) goto L_089A66B4;
    return;
L_089A66B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A66C4u);
    // nop
    goto L_089A662C;
L_089A66C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A66D8:
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
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A6720u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6720u) goto L_089A6720;
    return;
L_089A6720:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28884));
    ctx.set_gpr(31, 0x089A6734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x089A6734u) goto L_089A6734;
    return;
L_089A6734:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A674Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A674Cu) goto L_089A674C;
    return;
L_089A674C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A6770u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6770u) goto L_089A6770;
    return;
L_089A6770:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A6788u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6788u) goto L_089A6788;
    return;
L_089A6788:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A67A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A67A0u) goto L_089A67A0;
    return;
L_089A67A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A67C0;
      }
      goto L_089A67B4;
    }
L_089A67B4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A680C;
      }
      goto L_089A67C0;
    }
L_089A67C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A67F8;
      }
      goto L_089A67D0;
    }
L_089A67D0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089A67DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089A67DCu) goto L_089A67DC;
    return;
L_089A67DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A67F0;
      }
      goto L_089A67E4;
    }
L_089A67E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A67F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089A67F0u) goto L_089A67F0;
    return;
L_089A67F0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089A67F8;
L_089A67F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A680Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089A680Cu) goto L_089A680C;
    return;
L_089A680C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089A6820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 139u, 0x089A0894u>(ctx, &aot_mem) && ctx.pc == 0x089A6820u) goto L_089A6820;
    return;
L_089A6820:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A684C;
      }
      goto L_089A6830;
    }
L_089A6830:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A684C;
      }
      goto L_089A6848;
    }
L_089A6848:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089A684C;
L_089A684C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6878;
      }
      goto L_089A6854;
    }
L_089A6854:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6878;
      }
      goto L_089A686C;
    }
L_089A686C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A6878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6878u) goto L_089A6878;
    return;
L_089A6878:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089A6888u);
    // nop
    goto L_089A6690;
L_089A6888:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A68A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A68A4u) goto L_089A68A4;
    return;
L_089A68A4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A68BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A68BCu) goto L_089A68BC;
    return;
L_089A68BC:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x089A68C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 225u, 0x0893CE6Cu>(ctx, &aot_mem) && ctx.pc == 0x089A68C8u) goto L_089A68C8;
    return;
L_089A68C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089A68D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089A68D4u) goto L_089A68D4;
    return;
L_089A68D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A68F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A68F0u) goto L_089A68F0;
    return;
L_089A68F0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x089A6904u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6904u) goto L_089A6904;
    return;
L_089A6904:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6924;
      }
      goto L_089A690C;
    }
L_089A690C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6924;
      }
      goto L_089A6918;
    }
L_089A6918:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089A6924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089A6924u) goto L_089A6924;
    return;
L_089A6924:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[3]));
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
L_089A6954:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32120)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6964:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A6990u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6990u) goto L_089A6990;
    return;
L_089A6990:
    ctx.set_gpr(31, 0x089A6998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 703u, 0x0898B27Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6998u) goto L_089A6998;
    return;
L_089A6998:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A69A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 414u, 0x08941DB0u>(ctx, &aot_mem) && ctx.pc == 0x089A69A4u) goto L_089A69A4;
    return;
L_089A69A4:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089A69B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x089A69B4u) goto L_089A69B4;
    return;
L_089A69B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A69CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A69CCu) goto L_089A69CC;
    return;
L_089A69CC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089A69D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 85u, 0x088DC6D0u>(ctx, &aot_mem) && ctx.pc == 0x089A69D8u) goto L_089A69D8;
    return;
L_089A69D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A69F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A69F0u) goto L_089A69F0;
    return;
L_089A69F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A6A08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6A08u) goto L_089A6A08;
    return;
L_089A6A08:
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
L_089A6A24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089A6A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 410u, 0x08A7A62Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6A5Cu) goto L_089A6A5C;
    return;
L_089A6A5C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A6AA8;
      }
      goto L_089A6A6C;
    }
L_089A6A6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A6A88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6A88u) goto L_089A6A88;
    return;
L_089A6A88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089A6AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 408u, 0x08A7A5ACu>(ctx, &aot_mem) && ctx.pc == 0x089A6AA8u) goto L_089A6AA8;
    return;
L_089A6AA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089A6AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 407u, 0x08A7A56Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6AC0u) goto L_089A6AC0;
    return;
L_089A6AC0:
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
L_089A6AE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089A6B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 410u, 0x08A7A62Cu>(ctx, &aot_mem) && ctx.pc == 0x089A6B14u) goto L_089A6B14;
    return;
L_089A6B14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A6B40;
      }
      goto L_089A6B20;
    }
L_089A6B20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089A6B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 409u, 0x08A7A5ECu>(ctx, &aot_mem) && ctx.pc == 0x089A6B34u) goto L_089A6B34;
    return;
L_089A6B34:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x089A6B40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6B40u) goto L_089A6B40;
    return;
L_089A6B40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089A6B70;
      }
      goto L_089A6B50;
    }
L_089A6B50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A6B68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6B68u) goto L_089A6B68;
    return;
L_089A6B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6B84;
      }
      goto L_089A6B70;
    }
L_089A6B70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089A6B84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089A6B84u) goto L_089A6B84;
    return;
L_089A6B84:
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
L_089A6BA0:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6BAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23004));
    ctx.set_gpr(31, 0x089A6BD0u);
    // nop
    goto L_089A6434;
L_089A6BD0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22968));
    ctx.set_gpr(31, 0x089A6BE8u);
    // nop
    goto L_089A6434;
L_089A6BE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22932));
    ctx.set_gpr(31, 0x089A6C00u);
    // nop
    goto L_089A6434;
L_089A6C00:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22896));
    ctx.set_gpr(31, 0x089A6C18u);
    // nop
    goto L_089A6434;
L_089A6C18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22724));
    ctx.set_gpr(31, 0x089A6C30u);
    // nop
    goto L_089A6434;
L_089A6C30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22552));
    ctx.set_gpr(31, 0x089A6C48u);
    // nop
    goto L_089A6434;
L_089A6C48:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22404));
    ctx.set_gpr(31, 0x089A6C60u);
    // nop
    goto L_089A6434;
L_089A6C60:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22020));
    ctx.set_gpr(31, 0x089A6C78u);
    // nop
    goto L_089A6434;
L_089A6C78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22020));
    ctx.set_gpr(31, 0x089A6C90u);
    // nop
    goto L_089A6434;
L_089A6C90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(6, 2203u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-21900));
    ctx.set_gpr(31, 0x089A6CA8u);
    // nop
    goto L_089A6434;
L_089A6CA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28056));
    ctx.set_gpr(31, 0x089A6CC0u);
    // nop
    goto L_089A6A24;
L_089A6CC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(105));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28512));
    ctx.set_gpr(31, 0x089A6CD8u);
    // nop
    goto L_089A6A24;
L_089A6CD8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(106));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28336));
    ctx.set_gpr(31, 0x089A6CF0u);
    // nop
    goto L_089A6A24;
L_089A6CF0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(102));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28160));
    ctx.set_gpr(31, 0x089A6D08u);
    // nop
    goto L_089A6A24;
L_089A6D08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(103));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28336));
    ctx.set_gpr(31, 0x089A6D20u);
    // nop
    goto L_089A6A24;
L_089A6D20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6D34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6D40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089A6D60u);
    // nop
    goto L_089A5D7C;
L_089A6D60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6D70:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6D98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6DEC;
      }
      goto L_089A6DB0;
    }
L_089A6DB0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] & 65280u);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 255u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_089A6DEC;
L_089A6DEC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6DB0;
      }
      goto L_089A6DF8;
    }
L_089A6DF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6E00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A6E58;
      }
      goto L_089A6E18;
    }
L_089A6E18:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6E44;
      }
      goto L_089A6E28;
    }
L_089A6E28:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_089A6E44;
L_089A6E44:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6E28;
      }
      goto L_089A6E50;
    }
L_089A6E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6EA8;
      }
      goto L_089A6E58;
    }
L_089A6E58:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6E9C;
      }
      goto L_089A6E68;
    }
L_089A6E68:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6E8C;
      }
      goto L_089A6E78;
    }
L_089A6E78:
    ctx.set_gpr(3, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6E90;
      }
      goto L_089A6E8C;
    }
L_089A6E8C:
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    goto L_089A6E90;
L_089A6E90:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_089A6E9C;
L_089A6E9C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6E68;
      }
      goto L_089A6EA8;
    }
L_089A6EA8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6EB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A6F14;
      }
      goto L_089A6EC8;
    }
L_089A6EC8:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F00;
      }
      goto L_089A6ED8;
    }
L_089A6ED8:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    goto L_089A6F00;
L_089A6F00:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6ED8;
      }
      goto L_089A6F0C;
    }
L_089A6F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F58;
      }
      goto L_089A6F14;
    }
L_089A6F14:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F4C;
      }
      goto L_089A6F24;
    }
L_089A6F24:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    goto L_089A6F4C;
L_089A6F4C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F24;
      }
      goto L_089A6F58;
    }
L_089A6F58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A6F60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089A6FC4;
      }
      goto L_089A6F78;
    }
L_089A6F78:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6FB0;
      }
      goto L_089A6F88;
    }
L_089A6F88:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    goto L_089A6FB0;
L_089A6FB0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6F88;
      }
      goto L_089A6FBC;
    }
L_089A6FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7008;
      }
      goto L_089A6FC4;
    }
L_089A6FC4:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A6FFC;
      }
      goto L_089A6FD4;
    }
L_089A6FD4:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    goto L_089A6FFC;
L_089A6FFC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A6FD4;
      }
      goto L_089A7008;
    }
L_089A7008:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A7010:
    ctx.set_gpr(3, 255u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[4] & 65280u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A7038:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A704C:
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
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A70B4;
      }
      goto L_089A709C;
    }
L_089A709C:
    ctx.set_gpr(2, ctx.gpr[21] >> 24u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A70B4;
      }
      goto L_089A70A8;
    }
L_089A70A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A71DC;
      }
      goto L_089A70B4;
    }
L_089A70B4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A71C8;
      }
      goto L_089A70C0;
    }
L_089A70C0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7154;
      }
      goto L_089A70C8;
    }
L_089A70C8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x089A70E0u);
    // nop
    goto L_089A7010;
L_089A70E0:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(45));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(41));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(37));
    ctx.set_gpr(31, 0x089A7104u);
    // nop
    goto L_089A7010;
L_089A7104:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A717C;
      }
      goto L_089A7154;
    }
L_089A7154:
    ctx.set_gpr(4, (ctx.gpr[21] >> 24u) & 0x000000FFu);
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 24u) & 0x000000FFu);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    goto L_089A717C;
L_089A717C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A71C4;
      }
      goto L_089A7190;
    }
L_089A7190:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A71A8;
      }
      goto L_089A719C;
    }
L_089A719C:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A71C4;
      }
      goto L_089A71A8;
    }
L_089A71A8:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A71C4;
      }
      goto L_089A71BC;
    }
L_089A71BC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A71D8;
      }
      goto L_089A71C4;
    }
L_089A71C4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089A71C8;
L_089A71C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A70C0;
      }
      goto L_089A71D8;
    }
L_089A71D8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_089A71DC;
L_089A71DC:
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
L_089A7204:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A72AC;
      }
      goto L_089A7214;
    }
L_089A7214:
    ctx.set_gpr(4, ctx.gpr[4] & 65535u);
    ctx.set_gpr(3, ctx.gpr[5] & 65535u);
    ctx.set_gpr(3, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7234;
      }
      goto L_089A722C;
    }
L_089A722C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7270;
      }
      goto L_089A7234;
    }
L_089A7234:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7254;
      }
      goto L_089A7244;
    }
L_089A7244:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A72E0;
      }
      goto L_089A7254;
    }
L_089A7254:
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089A7268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A7268u) goto L_089A7268;
    return;
L_089A7268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A72E0;
      }
      goto L_089A7270;
    }
L_089A7270:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7290;
      }
      goto L_089A7280;
    }
L_089A7280:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A72E0;
      }
      goto L_089A7290;
    }
L_089A7290:
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x089A72A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A72A4u) goto L_089A72A4;
    return;
L_089A72A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A72E0;
      }
      goto L_089A72AC;
    }
L_089A72AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A72CC;
      }
      goto L_089A72BC;
    }
L_089A72BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A72E0;
      }
      goto L_089A72CC;
    }
L_089A72CC:
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089A72E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089A72E0u) goto L_089A72E0;
    return;
L_089A72E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A72F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(10, (ctx.gpr[2] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(2, ctx.gpr[4] & 65280u);
    ctx.set_gpr(11, (ctx.gpr[2] >> 8u) & 0x0000FFFFu);
    ctx.set_gpr(2, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A7330;
      }
      goto L_089A7320;
    }
L_089A7320:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7348;
      }
      goto L_089A7330;
    }
L_089A7330:
    ctx.set_gpr(4, ctx.gpr[10] >> 1u);
    ctx.set_gpr(3, ctx.gpr[10] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A7348;
L_089A7348:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7380;
      }
      goto L_089A7370;
    }
L_089A7370:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7394;
      }
      goto L_089A7380;
    }
L_089A7380:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089A7394;
L_089A7394:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(10, ctx.gpr[3] << 11u);
    ctx.set_gpr(3, 17020u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A73BC;
      }
      goto L_089A73AC;
    }
L_089A73AC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A73D4;
      }
      goto L_089A73BC;
    }
L_089A73BC:
    ctx.set_gpr(4, ctx.gpr[11] >> 1u);
    ctx.set_gpr(3, ctx.gpr[11] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A73D4;
L_089A73D4:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A740C;
      }
      goto L_089A73FC;
    }
L_089A73FC:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7420;
      }
      goto L_089A740C;
    }
L_089A740C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089A7420;
L_089A7420:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(4, ctx.gpr[10] | ctx.gpr[3]);
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A744C;
      }
      goto L_089A743C;
    }
L_089A743C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7464;
      }
      goto L_089A744C;
    }
L_089A744C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A7464;
L_089A7464:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A749C;
      }
      goto L_089A748C;
    }
L_089A748C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A74B0;
      }
      goto L_089A749C;
    }
L_089A749C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A74B0;
L_089A74B0:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(10, (ctx.gpr[2] >> 16u) & 0x0000FFFFu);
    ctx.set_gpr(2, ctx.gpr[5] & 65280u);
    ctx.set_gpr(11, (ctx.gpr[2] >> 8u) & 0x0000FFFFu);
    ctx.set_gpr(2, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A74F4;
      }
      goto L_089A74E4;
    }
L_089A74E4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A750C;
      }
      goto L_089A74F4;
    }
L_089A74F4:
    ctx.set_gpr(5, ctx.gpr[10] >> 1u);
    ctx.set_gpr(3, ctx.gpr[10] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A750C;
L_089A750C:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7544;
      }
      goto L_089A7534;
    }
L_089A7534:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7558;
      }
      goto L_089A7544;
    }
L_089A7544:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    goto L_089A7558;
L_089A7558:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(10, ctx.gpr[3] << 11u);
    ctx.set_gpr(3, 17020u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A7580;
      }
      goto L_089A7570;
    }
L_089A7570:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7598;
      }
      goto L_089A7580;
    }
L_089A7580:
    ctx.set_gpr(5, ctx.gpr[11] >> 1u);
    ctx.set_gpr(3, ctx.gpr[11] & 1u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A7598;
L_089A7598:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A75D0;
      }
      goto L_089A75C0;
    }
L_089A75C0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A75E4;
      }
      goto L_089A75D0;
    }
L_089A75D0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    goto L_089A75E4;
L_089A75E4:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(5, ctx.gpr[10] | ctx.gpr[3]);
    ctx.set_gpr(3, 16888u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A7610;
      }
      goto L_089A7600;
    }
L_089A7600:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7628;
      }
      goto L_089A7610;
    }
L_089A7610:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_089A7628;
L_089A7628:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7660;
      }
      goto L_089A7650;
    }
L_089A7650:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7674;
      }
      goto L_089A7660;
    }
L_089A7660:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A7674;
L_089A7674:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[2] & 65535u);
    ctx.set_gpr(31, 0x089A7688u);
    // nop
    goto L_089A7204;
L_089A7688:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089A7698:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(3, 32767u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 62u, 0x089A8480u>(ctx, &aot_mem); return;
      }
      goto L_089A76FC;
    }
L_089A76FC:
    ctx.set_gpr(18, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 60u, 0x089A8470u>(ctx, &aot_mem); return;
      }
      goto L_089A7708;
    }
L_089A7708:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(71)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x089A7744u);
    // nop
    goto L_089A72F0;
L_089A7744:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7770;
      }
      goto L_089A7760;
    }
L_089A7760:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089A7770;
      }
      goto L_089A7768;
    }
L_089A7768:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089A7770;
L_089A7770:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7790;
      }
      goto L_089A777C;
    }
L_089A777C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7790;
      }
      goto L_089A7788;
    }
L_089A7788:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_089A7790;
L_089A7790:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7C24;
      }
      goto L_089A7798;
    }
L_089A7798:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089A784C;
      }
      goto L_089A77A8;
    }
L_089A77A8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x089A77C8u);
    // nop
    goto L_089A7010;
L_089A77C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(121));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(117));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(113));
    ctx.set_gpr(31, 0x089A77E4u);
    // nop
    goto L_089A7010;
L_089A77E4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(121)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, (ctx.gpr[2] >> 1u) & 0x000000FFu);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(117)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, (ctx.gpr[2] >> 1u) & 0x000000FFu);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(7, (ctx.gpr[2] >> 1u) & 0x000000FFu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x089A7820u);
    // nop
    goto L_089A7038;
L_089A7820:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 48u, 0x089A8398u>(ctx, &aot_mem); return;
      }
      goto L_089A782C;
    }
L_089A782C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 48u, 0x089A8398u>(ctx, &aot_mem); return;
      }
      goto L_089A7838;
    }
L_089A7838:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 48u, 0x089A8398u>(ctx, &aot_mem); return;
      }
      goto L_089A784C;
    }
L_089A784C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x089A7870u);
    // nop
    goto L_089A7010;
L_089A7870:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(101));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(97));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x089A788Cu);
    // nop
    goto L_089A7010;
L_089A788C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(101)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A78B4;
      }
      goto L_089A78A4;
    }
L_089A78A4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A78CC;
      }
      goto L_089A78B4;
    }
L_089A78B4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A78CC;
L_089A78CC:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7900;
      }
      goto L_089A78F0;
    }
L_089A78F0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7914;
      }
      goto L_089A7900;
    }
L_089A7900:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A7914;
L_089A7914:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A793C;
      }
      goto L_089A792C;
    }
L_089A792C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7954;
      }
      goto L_089A793C;
    }
L_089A793C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A7954;
L_089A7954:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7988;
      }
      goto L_089A7978;
    }
L_089A7978:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A799C;
      }
      goto L_089A7988;
    }
L_089A7988:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A799C;
L_089A799C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A79C4;
      }
      goto L_089A79B4;
    }
L_089A79B4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A79DC;
      }
      goto L_089A79C4;
    }
L_089A79C4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A79DC;
L_089A79DC:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7A10;
      }
      goto L_089A7A00;
    }
L_089A7A00:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7A24;
      }
      goto L_089A7A10;
    }
L_089A7A10:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A7A24;
L_089A7A24:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x089A7A30u);
    // nop
    goto L_089A7038;
L_089A7A30:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(101)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A7A58;
      }
      goto L_089A7A48;
    }
L_089A7A48:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7A70;
      }
      goto L_089A7A58;
    }
L_089A7A58:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A7A70;
L_089A7A70:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7AA4;
      }
      goto L_089A7A94;
    }
L_089A7A94:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7AB8;
      }
      goto L_089A7AA4;
    }
L_089A7AA4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A7AB8;
L_089A7AB8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A7AE0;
      }
      goto L_089A7AD0;
    }
L_089A7AD0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7AF8;
      }
      goto L_089A7AE0;
    }
L_089A7AE0:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A7AF8;
L_089A7AF8:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7B2C;
      }
      goto L_089A7B1C;
    }
L_089A7B1C:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7B40;
      }
      goto L_089A7B2C;
    }
L_089A7B2C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A7B40;
L_089A7B40:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A7B68;
      }
      goto L_089A7B58;
    }
L_089A7B58:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7B80;
      }
      goto L_089A7B68;
    }
L_089A7B68:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A7B80;
L_089A7B80:
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7BB4;
      }
      goto L_089A7BA4;
    }
L_089A7BA4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7BC8;
      }
      goto L_089A7BB4;
    }
L_089A7BB4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_089A7BC8;
L_089A7BC8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x089A7BD4u);
    // nop
    goto L_089A7038;
L_089A7BD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7BF8;
      }
      goto L_089A7BE0;
    }
L_089A7BE0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7BF8;
      }
      goto L_089A7BEC;
    }
L_089A7BEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089A7BF8;
L_089A7BF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 48u, 0x089A8398u>(ctx, &aot_mem); return;
      }
      goto L_089A7C04;
    }
L_089A7C04:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 48u, 0x089A8398u>(ctx, &aot_mem); return;
      }
      goto L_089A7C10;
    }
L_089A7C10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 48u, 0x089A8398u>(ctx, &aot_mem); return;
      }
      goto L_089A7C24;
    }
L_089A7C24:
    ctx.set_gpr(4, (ctx.gpr[4] >> 24u) & 0x000000FFu);
    ctx.set_gpr(5, (ctx.gpr[5] >> 24u) & 0x000000FFu);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(71)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7F58;
      }
      goto L_089A7C38;
    }
L_089A7C38:
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A7C64;
      }
      goto L_089A7C54;
    }
L_089A7C54:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7C7C;
      }
      goto L_089A7C64;
    }
L_089A7C64:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A7C7C;
L_089A7C7C:
    ctx.set_gpr(5, 16544u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7CB0;
      }
      goto L_089A7CA0;
    }
L_089A7CA0:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7CC4;
      }
      goto L_089A7CB0;
    }
L_089A7CB0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A7CC4;
L_089A7CC4:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7CEC;
      }
      goto L_089A7CD8;
    }
L_089A7CD8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7CEC;
      }
      goto L_089A7CE4;
    }
L_089A7CE4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_089A7CEC;
L_089A7CEC:
    ctx.set_gpr(5, ctx.gpr[4] << 1u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A7D18;
      }
      goto L_089A7D08;
    }
L_089A7D08:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7D30;
      }
      goto L_089A7D18;
    }
L_089A7D18:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A7D30;
L_089A7D30:
    ctx.set_gpr(5, 16544u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7D64;
      }
      goto L_089A7D54;
    }
L_089A7D54:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7D78;
      }
      goto L_089A7D64;
    }
L_089A7D64:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A7D78;
L_089A7D78:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7DA0;
      }
      goto L_089A7D8C;
    }
L_089A7D8C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7DA0;
      }
      goto L_089A7D98;
    }
L_089A7D98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_089A7DA0;
L_089A7DA0:
    ctx.set_gpr(6, ctx.gpr[4] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A7DCC;
      }
      goto L_089A7DBC;
    }
L_089A7DBC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7DE4;
      }
      goto L_089A7DCC;
    }
L_089A7DCC:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A7DE4;
L_089A7DE4:
    ctx.set_gpr(5, 16544u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7E18;
      }
      goto L_089A7E08;
    }
L_089A7E08:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7E2C;
      }
      goto L_089A7E18;
    }
L_089A7E18:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A7E2C;
L_089A7E2C:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7E54;
      }
      goto L_089A7E40;
    }
L_089A7E40:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7E54;
      }
      goto L_089A7E4C;
    }
L_089A7E4C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_089A7E54;
L_089A7E54:
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A7E78;
      }
      goto L_089A7E68;
    }
L_089A7E68:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7E90;
      }
      goto L_089A7E78;
    }
L_089A7E78:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A7E90;
L_089A7E90:
    ctx.set_gpr(3, 16544u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(3, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7EC4;
      }
      goto L_089A7EB4;
    }
L_089A7EB4:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7ED8;
      }
      goto L_089A7EC4;
    }
L_089A7EC4:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    goto L_089A7ED8;
L_089A7ED8:
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7F00;
      }
      goto L_089A7EEC;
    }
L_089A7EEC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7F00;
      }
      goto L_089A7EF8;
    }
L_089A7EF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_089A7F00;
L_089A7F00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7F28;
      }
      goto L_089A7F0C;
    }
L_089A7F0C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089A7F28;
      }
      goto L_089A7F18;
    }
L_089A7F18:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16324)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_089A7F28;
L_089A7F28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 48u, 0x089A8398u>(ctx, &aot_mem); return;
      }
      goto L_089A7F34;
    }
L_089A7F34:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 48u, 0x089A8398u>(ctx, &aot_mem); return;
      }
      goto L_089A7F40;
    }
L_089A7F40:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16320)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 48u, 0x089A8398u>(ctx, &aot_mem); return;
      }
      goto L_089A7F58;
    }
L_089A7F58:
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(5, ctx.gpr[4] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_089A7F8C;
      }
      goto L_089A7F7C;
    }
L_089A7F7C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7FA4;
      }
      goto L_089A7F8C;
    }
L_089A7F8C:
    ctx.set_gpr(6, ctx.gpr[5] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089A7FA4;
L_089A7FA4:
    ctx.set_gpr(5, 16608u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(5, 20224u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089A7FD8;
      }
      goto L_089A7FC8;
    }
L_089A7FC8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089A7FEC;
      }
      goto L_089A7FD8;
    }
L_089A7FD8:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    goto L_089A7FEC;
L_089A7FEC:
    ctx.set_gpr(5, ctx.gpr[5] & 255u);
    ctx.set_gpr(6, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 3u, 0x089A8014u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 1u, 0x089A8000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0104(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0104_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_104(Runtime &runtime) {
    runtime.register_generated_unit(104u, 0x089A4000u, 16384u, &recomp_unit_0104, &recomp_unit_0104_entry);
    runtime.register_function(0x089A4000u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A401Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4038u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4040u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4044u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4050u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4058u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A405Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4080u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A409Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A40E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4100u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4108u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A410Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4118u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4120u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4124u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4148u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4164u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A416Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4170u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A417Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4184u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4188u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A41ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4210u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4228u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4230u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4234u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4244u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A424Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4250u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4274u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A428Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4294u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4298u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A42F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4308u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4320u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4338u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4350u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4368u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4380u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4398u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A43B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A43C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A43E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A43ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A43FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4404u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4454u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A445Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4484u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4490u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A449Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A44A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A44B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A44C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A44CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A44D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A44E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A44F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A44FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4508u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4514u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4520u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A452Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4538u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4544u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4550u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A455Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A456Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4578u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4584u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4590u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4598u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A45F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4604u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4610u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A461Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4628u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4634u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4640u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A464Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4658u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4664u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4670u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A467Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4688u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4694u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A46ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4700u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4720u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4730u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4740u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4750u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4760u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4778u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4794u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A47ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4808u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A482Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A483Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A484Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4860u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A487Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4898u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A48B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A48C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A48DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A48F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A490Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4928u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4944u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4954u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4968u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A497Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A498Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A49F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A04u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A10u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A54u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A5Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A78u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A8Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4A94u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AA8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4ADCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4AF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B10u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B14u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B48u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B54u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B5Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4B94u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BD8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4BFCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C10u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C4Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C70u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C8Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C94u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4C9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CC0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CC8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4CE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D28u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D4Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D74u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4D88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DA0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DD0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DE8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4DF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E0Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E2Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E74u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E80u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4E98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4EA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4EC0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4ED8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4EE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4EF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F04u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F14u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F34u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4F60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4FA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4FBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4FD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4FECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A4FF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A500Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5020u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5028u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A503Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5060u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A506Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A507Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A508Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A50C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A50E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A50ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5104u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5110u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5124u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5138u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5140u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5154u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5174u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A51FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5208u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5218u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5224u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A522Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5270u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A527Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5288u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5294u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A52F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5300u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A530Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5318u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5324u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5330u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A533Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5348u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5350u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5358u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5364u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5370u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A537Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5388u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5390u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A53F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5400u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A540Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5418u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5424u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5430u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5438u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5450u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A546Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5484u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A54F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5510u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A552Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5548u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5550u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5578u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5580u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5588u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A55DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A55F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5608u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5614u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5624u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5648u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5650u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5694u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A56A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A56F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5700u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A570Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5718u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5720u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A572Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5738u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5774u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5784u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5788u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5798u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A57A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A57ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A57B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A57ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A57FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5800u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5810u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5818u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5824u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5830u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5870u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5880u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5884u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5894u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A589Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A58A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A58B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5918u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5928u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A592Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A593Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5940u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A594Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5950u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A595Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5978u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A59E8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5A04u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5A14u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5A20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5A30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5A54u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5A5Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5AA0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5AACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5B00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5B0Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5B18u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5B24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5B2Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5B38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5B44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5B80u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5B90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5B94u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5BA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5BACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5BB8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5BC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5BF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5C08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5C0Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5C1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5C24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5C30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5C3Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5C7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5C8Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5C90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5CA0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5CA8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5CB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5CC0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5D1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5D2Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5D30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5D40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5D44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5D50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5D54u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5D60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5D7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5DB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5DCCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5DFCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5E04u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5E14u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5E2Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5E44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5E50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5E5Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5E70u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5E7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5E90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5E98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5EA0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5EA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5EB0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5EBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5EC8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5ED0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5EE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5EF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5F00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5F08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5F20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5F3Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5F54u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5F60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5F6Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5F88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5F94u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5FB0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5FC8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5FCCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5FD8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A5FF4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6018u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6020u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6030u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6038u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6050u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A605Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6068u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6084u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A60ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A60B8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A60CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A60D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A60DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A60E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A60ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A60F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6104u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A610Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A611Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6128u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6130u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6148u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A615Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6164u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A617Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6188u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6194u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A61B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A61D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A61E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6200u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6210u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6244u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A625Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6270u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6278u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6284u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6288u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6298u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A629Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A62BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A62F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6300u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A630Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6318u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6328u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A633Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6344u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6358u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6368u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6370u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A637Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6380u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A639Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A63F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6404u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A641Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6434u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6470u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6488u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6490u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6494u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A64ECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6514u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6528u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A653Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6554u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6564u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A656Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6578u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6588u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A65F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6600u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6620u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6624u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A662Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6640u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6658u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6660u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6664u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6670u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6674u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6690u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A66B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A66C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A66D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6720u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6734u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A674Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6770u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6788u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A67A0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A67B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A67C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A67D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A67DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A67E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A67F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A67F8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A680Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6820u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6830u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6848u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A684Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6854u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A686Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6878u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6888u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A68F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6904u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A690Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6918u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6924u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6954u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6964u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6990u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6998u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A69F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A5Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A6Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6A88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6AA8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6AC0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6AE0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B14u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B34u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B70u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6B84u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BA0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BD0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6BE8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C18u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C48u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C78u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6C90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CA8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CC0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CD8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6CF0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D20u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D34u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D70u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6D98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6DB0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6DECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6DF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E18u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E28u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E44u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E50u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E78u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E8Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6E9Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EA8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EB0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6EC8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6ED8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F0Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F14u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F4Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F60u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F78u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6F88u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FB0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A6FFCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7008u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7010u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7038u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A704Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A709Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A70E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7104u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7154u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A717Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7190u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A719Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A71A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A71BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A71C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A71C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A71D8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A71DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7204u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7214u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A722Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7234u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7244u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7254u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7268u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7270u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7280u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7290u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A72A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A72ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A72BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A72CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A72E0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A72F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7320u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7330u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7348u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7370u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7380u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7394u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A73ACu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A73BCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A73D4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A73FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A740Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7420u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A743Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A744Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7464u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A748Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A749Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A74B0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A74E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A74F4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A750Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7534u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7544u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7558u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7570u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7580u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7598u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A75C0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A75D0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A75E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7600u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7610u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7628u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7650u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7660u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7674u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7688u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7698u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A76FCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7708u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7744u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7760u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7768u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7770u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A777Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7788u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7790u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7798u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A77A8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A77C8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A77E4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7820u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A782Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7838u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A784Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7870u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A788Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A78A4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A78B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A78CCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A78F0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7900u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7914u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A792Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A793Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7954u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7978u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7988u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A799Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A79B4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A79C4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A79DCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A10u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A48u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A70u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7A94u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7AA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7AB8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7AD0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7AE0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7AF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B1Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B2Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7B80u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7BA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7BB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7BC8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7BD4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7BE0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7BECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7BF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C04u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C10u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C24u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C38u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C54u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C64u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7C7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7CA0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7CB0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7CC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7CD8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7CE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7CECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7D08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7D18u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7D30u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7D54u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7D64u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7D78u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7D8Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7D98u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7DA0u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7DBCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7DCCu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7DE4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E08u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E18u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E2Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E4Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E54u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E68u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E78u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7E90u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7EB4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7EC4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7ED8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7EECu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7EF8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7F00u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7F0Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7F18u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7F28u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7F34u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7F40u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7F58u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7F7Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7F8Cu, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7FA4u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7FC8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7FD8u, &recomp_unit_0104, "recomp_unit_0104");
    runtime.register_function(0x089A7FECu, &recomp_unit_0104, "recomp_unit_0104");
}
} // namespace psprecomp
