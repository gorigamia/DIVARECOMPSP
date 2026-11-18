#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0082[4086] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22,
    0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0,
    0, 30, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0,
    39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45, 46, 0, 0, 47, 0, 48, 0,
    0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0,
    72, 73, 0, 0, 74, 0, 0, 75, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 81, 82, 0, 83, 0, 0, 84,
    0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109,
    0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116,
    0, 0, 0, 0, 0, 117, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 123, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0,
    135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 139, 0, 0, 140, 0, 141, 0, 0, 142, 0,
    0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0,
    149, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0,
    0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 176, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0,
    197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 204, 205, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 218, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225,
    0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0,
    234, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0,
    0, 244, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 251, 0, 252, 0, 0, 0, 0,
    0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259,
    0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0,
    0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0,
    0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0,
    0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0,
    303, 0, 304, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313,
    0, 0, 0, 0, 0, 314, 315, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0,
    0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 331, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339,
    0, 0, 0, 340, 0, 0, 341, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 349, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 355, 0, 0, 356, 0, 357, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 360, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 373, 0, 374, 0, 375,
    0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 379, 0, 0, 380, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383,
    0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 387, 388, 0, 0, 389, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0,
    398, 0, 0, 399, 400, 0, 0, 0, 401, 0, 402, 0, 403, 0, 0, 0, 404, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 410, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0,
    421, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0,
    0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 442,
    0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 448, 0, 0, 0,
    0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 453, 0, 454, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 457,
    0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 0,
    0, 464, 0, 0, 465, 0, 466, 467, 0, 468, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0,
    478, 0, 479, 0, 0, 480, 0, 481, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485,
    0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489,
    0, 0, 490, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 494, 0, 0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0,
    502, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509,
    0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0,
    0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 525, 0, 0,
    526, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 0, 532, 0, 0, 533, 0, 534, 0,
    0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 541,
    0, 542, 0, 0, 543, 0, 544, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0, 556,
    0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 561,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0,
    0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0,
    574, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 581,
    0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0,
    0, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0,
    0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0,
    0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604,
    0, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    613, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 617, 0, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 621, 0, 0, 622, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0,
    0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 629, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 633, 0, 0, 634, 0, 0,
    0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0,
    0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 647, 0, 648, 0, 0, 649, 0,
    0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0,
    0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0,
    0, 0, 658, 0, 0, 0, 0, 0, 659, 660, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 663, 664, 0, 0, 0, 665, 666, 0, 0, 0, 667, 0,
    0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 672, 0,
    673, 0, 0, 674, 0, 0, 0, 675, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 677, 678, 0, 0, 679, 0, 680, 0, 0, 681, 0, 682, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 685, 0, 0, 0, 686, 0, 687, 0, 0, 0, 688, 0, 689, 0, 690, 0,
    691, 692, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 695, 0, 0, 696,
    0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701,
    702, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 707, 0, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0,
    712, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0, 718, 0, 719, 0, 0, 720,
    0, 0, 721, 0, 0, 0, 722, 0, 0, 723, 0, 724, 0, 725, 0, 0, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 729, 0,
    730, 0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 735, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 738,
    739, 0, 0, 740, 741, 0, 0, 742, 0, 0, 0, 743, 0, 0, 744, 0, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0,
    0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 764, 0, 0, 0, 0, 765, 766, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770,
    0, 0, 0, 771, 0, 0, 772, 0, 773, 0, 0, 774, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 778, 0,
    0, 0, 779, 0, 0, 0, 0, 0, 780, 781, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 784, 0, 0, 0, 0, 785, 0, 786, 0, 0, 787, 0,
    0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 0, 0, 792, 0,
    0, 793, 0, 794, 0, 0, 795, 0, 796, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0,
    0, 0, 0, 801, 802, 0, 803, 0, 0, 0, 0, 0, 804, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 810, 0, 0, 811, 0, 0, 812, 0, 0, 813, 0, 0, 814, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0,
    0, 817, 818, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0,
    0, 824, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0, 0, 0, 829, 0, 0, 830, 0, 0, 0,
    831, 0, 0, 832, 0, 833, 0, 0, 834, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 838, 0, 839, 0, 840, 0, 0, 841, 0,
    0, 842, 0, 0, 0, 843, 0, 0, 844, 0, 845, 0, 846, 0, 0, 0, 847, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 849, 850, 0, 851,
    0, 0, 0, 0, 0, 852, 0, 0, 853, 0, 0, 854, 0, 855, 0, 856, 0, 0, 0, 857, 0, 0, 858, 0, 859, 860, 0, 0, 0, 861, 0, 0,
    862, 0, 0, 863, 0, 0, 864, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866,
};
void recomp_unit_0082_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0894C000u;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0082[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0894C000;
    case 2u: goto L_0894C00C;
    case 3u: goto L_0894C018;
    case 4u: goto L_0894C02C;
    case 5u: goto L_0894C034;
    case 6u: goto L_0894C040;
    case 7u: goto L_0894C050;
    case 8u: goto L_0894C064;
    case 9u: goto L_0894C09C;
    case 10u: goto L_0894C0A8;
    case 11u: goto L_0894C0B4;
    case 12u: goto L_0894C0C8;
    case 13u: goto L_0894C0D8;
    case 14u: goto L_0894C104;
    case 15u: goto L_0894C110;
    case 16u: goto L_0894C128;
    case 17u: goto L_0894C130;
    case 18u: goto L_0894C13C;
    case 19u: goto L_0894C144;
    case 20u: goto L_0894C168;
    case 21u: goto L_0894C174;
    case 22u: goto L_0894C17C;
    case 23u: goto L_0894C194;
    case 24u: goto L_0894C19C;
    case 25u: goto L_0894C1A8;
    case 26u: goto L_0894C1B0;
    case 27u: goto L_0894C1C4;
    case 28u: goto L_0894C1E0;
    case 29u: goto L_0894C1F8;
    case 30u: goto L_0894C204;
    case 31u: goto L_0894C214;
    case 32u: goto L_0894C21C;
    case 33u: goto L_0894C228;
    case 34u: goto L_0894C238;
    case 35u: goto L_0894C250;
    case 36u: goto L_0894C25C;
    case 37u: goto L_0894C26C;
    case 38u: goto L_0894C274;
    case 39u: goto L_0894C280;
    case 40u: goto L_0894C290;
    case 41u: goto L_0894C298;
    case 42u: goto L_0894C2B0;
    case 43u: goto L_0894C2C0;
    case 44u: goto L_0894C2D4;
    case 45u: goto L_0894C2E0;
    case 46u: goto L_0894C2E4;
    case 47u: goto L_0894C2F0;
    case 48u: goto L_0894C2F8;
    case 49u: goto L_0894C308;
    case 50u: goto L_0894C314;
    case 51u: goto L_0894C31C;
    case 52u: goto L_0894C32C;
    case 53u: goto L_0894C348;
    case 54u: goto L_0894C368;
    case 55u: goto L_0894C370;
    case 56u: goto L_0894C378;
    case 57u: goto L_0894C394;
    case 58u: goto L_0894C3A0;
    case 59u: goto L_0894C3B0;
    case 60u: goto L_0894C3BC;
    case 61u: goto L_0894C3D8;
    case 62u: goto L_0894C3E8;
    case 63u: goto L_0894C3F4;
    case 64u: goto L_0894C3FC;
    case 65u: goto L_0894C420;
    case 66u: goto L_0894C428;
    case 67u: goto L_0894C434;
    case 68u: goto L_0894C444;
    case 69u: goto L_0894C454;
    case 70u: goto L_0894C468;
    case 71u: goto L_0894C474;
    case 72u: goto L_0894C480;
    case 73u: goto L_0894C484;
    case 74u: goto L_0894C490;
    case 75u: goto L_0894C49C;
    case 76u: goto L_0894C4A0;
    case 77u: goto L_0894C4B0;
    case 78u: goto L_0894C4BC;
    case 79u: goto L_0894C4D0;
    case 80u: goto L_0894C4D8;
    case 81u: goto L_0894C4E4;
    case 82u: goto L_0894C4E8;
    case 83u: goto L_0894C4F0;
    case 84u: goto L_0894C4FC;
    case 85u: goto L_0894C504;
    case 86u: goto L_0894C510;
    case 87u: goto L_0894C520;
    case 88u: goto L_0894C52C;
    case 89u: goto L_0894C530;
    case 90u: goto L_0894C550;
    case 91u: goto L_0894C588;
    case 92u: goto L_0894C590;
    case 93u: goto L_0894C5AC;
    case 94u: goto L_0894C5BC;
    case 95u: goto L_0894C5C8;
    case 96u: goto L_0894C5D0;
    case 97u: goto L_0894C5DC;
    case 98u: goto L_0894C5E8;
    case 99u: goto L_0894C5F8;
    case 100u: goto L_0894C614;
    case 101u: goto L_0894C628;
    case 102u: goto L_0894C63C;
    case 103u: goto L_0894C678;
    case 104u: goto L_0894C68C;
    case 105u: goto L_0894C6A0;
    case 106u: goto L_0894C6D4;
    case 107u: goto L_0894C6E0;
    case 108u: goto L_0894C6F0;
    case 109u: goto L_0894C6FC;
    case 110u: goto L_0894C704;
    case 111u: goto L_0894C710;
    case 112u: goto L_0894C718;
    case 113u: goto L_0894C730;
    case 114u: goto L_0894C754;
    case 115u: goto L_0894C76C;
    case 116u: goto L_0894C77C;
    case 117u: goto L_0894C794;
    case 118u: goto L_0894C798;
    case 119u: goto L_0894C7A0;
    case 120u: goto L_0894C7B8;
    case 121u: goto L_0894C7C4;
    case 122u: goto L_0894C800;
    case 123u: goto L_0894C814;
    case 124u: goto L_0894C818;
    case 125u: goto L_0894C838;
    case 126u: goto L_0894C888;
    case 127u: goto L_0894C890;
    case 128u: goto L_0894C89C;
    case 129u: goto L_0894C8B0;
    case 130u: goto L_0894C8B8;
    case 131u: goto L_0894C8CC;
    case 132u: goto L_0894C8D4;
    case 133u: goto L_0894C8E8;
    case 134u: goto L_0894C8F4;
    case 135u: goto L_0894C900;
    case 136u: goto L_0894C914;
    case 137u: goto L_0894C93C;
    case 138u: goto L_0894C954;
    case 139u: goto L_0894C958;
    case 140u: goto L_0894C964;
    case 141u: goto L_0894C96C;
    case 142u: goto L_0894C978;
    case 143u: goto L_0894C988;
    case 144u: goto L_0894C994;
    case 145u: goto L_0894C9A4;
    case 146u: goto L_0894C9D0;
    case 147u: goto L_0894C9EC;
    case 148u: goto L_0894C9F8;
    case 149u: goto L_0894CA00;
    case 150u: goto L_0894CA08;
    case 151u: goto L_0894CA14;
    case 152u: goto L_0894CA20;
    case 153u: goto L_0894CA30;
    case 154u: goto L_0894CA3C;
    case 155u: goto L_0894CA44;
    case 156u: goto L_0894CA4C;
    case 157u: goto L_0894CA5C;
    case 158u: goto L_0894CA70;
    case 159u: goto L_0894CA98;
    case 160u: goto L_0894CACC;
    case 161u: goto L_0894CAEC;
    case 162u: goto L_0894CB08;
    case 163u: goto L_0894CB14;
    case 164u: goto L_0894CB20;
    case 165u: goto L_0894CB3C;
    case 166u: goto L_0894CB48;
    case 167u: goto L_0894CB58;
    case 168u: goto L_0894CB78;
    case 169u: goto L_0894CB88;
    case 170u: goto L_0894CB9C;
    case 171u: goto L_0894CBAC;
    case 172u: goto L_0894CBB8;
    case 173u: goto L_0894CBD4;
    case 174u: goto L_0894CBE4;
    case 175u: goto L_0894CBEC;
    case 176u: goto L_0894CBF8;
    case 177u: goto L_0894CC10;
    case 178u: goto L_0894CC20;
    case 179u: goto L_0894CC2C;
    case 180u: goto L_0894CC34;
    case 181u: goto L_0894CC38;
    case 182u: goto L_0894CC64;
    case 183u: goto L_0894CC8C;
    case 184u: goto L_0894CCAC;
    case 185u: goto L_0894CCBC;
    case 186u: goto L_0894CCC8;
    case 187u: goto L_0894CCD0;
    case 188u: goto L_0894CCDC;
    case 189u: goto L_0894CCE8;
    case 190u: goto L_0894CCF4;
    case 191u: goto L_0894CD10;
    case 192u: goto L_0894CD1C;
    case 193u: goto L_0894CD28;
    case 194u: goto L_0894CD3C;
    case 195u: goto L_0894CD5C;
    case 196u: goto L_0894CD6C;
    case 197u: goto L_0894CD80;
    case 198u: goto L_0894CD90;
    case 199u: goto L_0894CD9C;
    case 200u: goto L_0894CDB8;
    case 201u: goto L_0894CDC8;
    case 202u: goto L_0894CDD0;
    case 203u: goto L_0894CDDC;
    case 204u: goto L_0894CDF4;
    case 205u: goto L_0894CDF8;
    case 206u: goto L_0894CE18;
    case 207u: goto L_0894CE20;
    case 208u: goto L_0894CE34;
    case 209u: goto L_0894CE3C;
    case 210u: goto L_0894CE48;
    case 211u: goto L_0894CE50;
    case 212u: goto L_0894CE64;
    case 213u: goto L_0894CE6C;
    case 214u: goto L_0894CEB0;
    case 215u: goto L_0894CECC;
    case 216u: goto L_0894CED8;
    case 217u: goto L_0894CEF8;
    case 218u: goto L_0894CF04;
    case 219u: goto L_0894CF10;
    case 220u: goto L_0894CF18;
    case 221u: goto L_0894CF20;
    case 222u: goto L_0894CF30;
    case 223u: goto L_0894CF54;
    case 224u: goto L_0894CF74;
    case 225u: goto L_0894CF7C;
    case 226u: goto L_0894CF84;
    case 227u: goto L_0894CF94;
    case 228u: goto L_0894CFAC;
    case 229u: goto L_0894CFB4;
    case 230u: goto L_0894CFD0;
    case 231u: goto L_0894CFDC;
    case 232u: goto L_0894CFEC;
    case 233u: goto L_0894CFF8;
    case 234u: goto L_0894D000;
    case 235u: goto L_0894D00C;
    case 236u: goto L_0894D014;
    case 237u: goto L_0894D02C;
    case 238u: goto L_0894D040;
    case 239u: goto L_0894D04C;
    case 240u: goto L_0894D054;
    case 241u: goto L_0894D05C;
    case 242u: goto L_0894D068;
    case 243u: goto L_0894D074;
    case 244u: goto L_0894D084;
    case 245u: goto L_0894D090;
    case 246u: goto L_0894D098;
    case 247u: goto L_0894D0A0;
    case 248u: goto L_0894D0B0;
    case 249u: goto L_0894D0C8;
    case 250u: goto L_0894D0E0;
    case 251u: goto L_0894D0E4;
    case 252u: goto L_0894D0EC;
    case 253u: goto L_0894D104;
    case 254u: goto L_0894D110;
    case 255u: goto L_0894D11C;
    case 256u: goto L_0894D138;
    case 257u: goto L_0894D154;
    case 258u: goto L_0894D170;
    case 259u: goto L_0894D17C;
    case 260u: goto L_0894D188;
    case 261u: goto L_0894D194;
    case 262u: goto L_0894D1A8;
    case 263u: goto L_0894D1BC;
    case 264u: goto L_0894D1C4;
    case 265u: goto L_0894D1D0;
    case 266u: goto L_0894D1D8;
    case 267u: goto L_0894D1E8;
    case 268u: goto L_0894D200;
    case 269u: goto L_0894D230;
    case 270u: goto L_0894D26C;
    case 271u: goto L_0894D28C;
    case 272u: goto L_0894D298;
    case 273u: goto L_0894D2A8;
    case 274u: goto L_0894D2F8;
    case 275u: goto L_0894D304;
    case 276u: goto L_0894D310;
    case 277u: goto L_0894D31C;
    case 278u: goto L_0894D330;
    case 279u: goto L_0894D344;
    case 280u: goto L_0894D34C;
    case 281u: goto L_0894D358;
    case 282u: goto L_0894D360;
    case 283u: goto L_0894D370;
    case 284u: goto L_0894D388;
    case 285u: goto L_0894D3B8;
    case 286u: goto L_0894D3F4;
    case 287u: goto L_0894D414;
    case 288u: goto L_0894D420;
    case 289u: goto L_0894D434;
    case 290u: goto L_0894D43C;
    case 291u: goto L_0894D448;
    case 292u: goto L_0894D460;
    case 293u: goto L_0894D468;
    case 294u: goto L_0894D484;
    case 295u: goto L_0894D490;
    case 296u: goto L_0894D4A0;
    case 297u: goto L_0894D4AC;
    case 298u: goto L_0894D4B4;
    case 299u: goto L_0894D4C0;
    case 300u: goto L_0894D4C8;
    case 301u: goto L_0894D4E0;
    case 302u: goto L_0894D4F4;
    case 303u: goto L_0894D500;
    case 304u: goto L_0894D508;
    case 305u: goto L_0894D510;
    case 306u: goto L_0894D51C;
    case 307u: goto L_0894D528;
    case 308u: goto L_0894D538;
    case 309u: goto L_0894D544;
    case 310u: goto L_0894D54C;
    case 311u: goto L_0894D554;
    case 312u: goto L_0894D564;
    case 313u: goto L_0894D57C;
    case 314u: goto L_0894D594;
    case 315u: goto L_0894D598;
    case 316u: goto L_0894D5A0;
    case 317u: goto L_0894D5B8;
    case 318u: goto L_0894D5C4;
    case 319u: goto L_0894D5D0;
    case 320u: goto L_0894D5D8;
    case 321u: goto L_0894D5E8;
    case 322u: goto L_0894D5F4;
    case 323u: goto L_0894D628;
    case 324u: goto L_0894D674;
    case 325u: goto L_0894D68C;
    case 326u: goto L_0894D6AC;
    case 327u: goto L_0894D6B8;
    case 328u: goto L_0894D6C4;
    case 329u: goto L_0894D6D8;
    case 330u: goto L_0894D6F0;
    case 331u: goto L_0894D708;
    case 332u: goto L_0894D710;
    case 333u: goto L_0894D724;
    case 334u: goto L_0894D73C;
    case 335u: goto L_0894D75C;
    case 336u: goto L_0894D76C;
    case 337u: goto L_0894D7A4;
    case 338u: goto L_0894D7F0;
    case 339u: goto L_0894D7FC;
    case 340u: goto L_0894D80C;
    case 341u: goto L_0894D818;
    case 342u: goto L_0894D820;
    case 343u: goto L_0894D82C;
    case 344u: goto L_0894D834;
    case 345u: goto L_0894D848;
    case 346u: goto L_0894D85C;
    case 347u: goto L_0894D874;
    case 348u: goto L_0894D888;
    case 349u: goto L_0894D8A0;
    case 350u: goto L_0894D8A4;
    case 351u: goto L_0894D8AC;
    case 352u: goto L_0894D8C4;
    case 353u: goto L_0894D8D0;
    case 354u: goto L_0894D8D8;
    case 355u: goto L_0894D8E4;
    case 356u: goto L_0894D8F0;
    case 357u: goto L_0894D8F8;
    case 358u: goto L_0894D924;
    case 359u: goto L_0894D92C;
    case 360u: goto L_0894D930;
    case 361u: goto L_0894D938;
    case 362u: goto L_0894D954;
    case 363u: goto L_0894D960;
    case 364u: goto L_0894D96C;
    case 365u: goto L_0894D974;
    case 366u: goto L_0894D990;
    case 367u: goto L_0894D99C;
    case 368u: goto L_0894D9A4;
    case 369u: goto L_0894D9B0;
    case 370u: goto L_0894D9B8;
    case 371u: goto L_0894D9CC;
    case 372u: goto L_0894D9E0;
    case 373u: goto L_0894D9EC;
    case 374u: goto L_0894D9F4;
    case 375u: goto L_0894D9FC;
    case 376u: goto L_0894DA0C;
    case 377u: goto L_0894DA2C;
    case 378u: goto L_0894DA38;
    case 379u: goto L_0894DA40;
    case 380u: goto L_0894DA4C;
    case 381u: goto L_0894DA54;
    case 382u: goto L_0894DA68;
    case 383u: goto L_0894DA7C;
    case 384u: goto L_0894DA88;
    case 385u: goto L_0894DA90;
    case 386u: goto L_0894DA98;
    case 387u: goto L_0894DAA8;
    case 388u: goto L_0894DAAC;
    case 389u: goto L_0894DAB8;
    case 390u: goto L_0894DAC0;
    case 391u: goto L_0894DACC;
    case 392u: goto L_0894DAD8;
    case 393u: goto L_0894DB00;
    case 394u: goto L_0894DB20;
    case 395u: goto L_0894DB28;
    case 396u: goto L_0894DB38;
    case 397u: goto L_0894DB60;
    case 398u: goto L_0894DB80;
    case 399u: goto L_0894DB8C;
    case 400u: goto L_0894DB90;
    case 401u: goto L_0894DBA0;
    case 402u: goto L_0894DBA8;
    case 403u: goto L_0894DBB0;
    case 404u: goto L_0894DBC0;
    case 405u: goto L_0894DBC4;
    case 406u: goto L_0894DBE0;
    case 407u: goto L_0894DC00;
    case 408u: goto L_0894DC10;
    case 409u: goto L_0894DC30;
    case 410u: goto L_0894DC34;
    case 411u: goto L_0894DC48;
    case 412u: goto L_0894DC54;
    case 413u: goto L_0894DC70;
    case 414u: goto L_0894DCA0;
    case 415u: goto L_0894DCAC;
    case 416u: goto L_0894DCB8;
    case 417u: goto L_0894DCC4;
    case 418u: goto L_0894DCD0;
    case 419u: goto L_0894DCDC;
    case 420u: goto L_0894DCE4;
    case 421u: goto L_0894DD00;
    case 422u: goto L_0894DD10;
    case 423u: goto L_0894DD1C;
    case 424u: goto L_0894DD24;
    case 425u: goto L_0894DD34;
    case 426u: goto L_0894DD40;
    case 427u: goto L_0894DD4C;
    case 428u: goto L_0894DD54;
    case 429u: goto L_0894DD74;
    case 430u: goto L_0894DDB8;
    case 431u: goto L_0894DDC4;
    case 432u: goto L_0894DDD0;
    case 433u: goto L_0894DDF4;
    case 434u: goto L_0894DE14;
    case 435u: goto L_0894DE20;
    case 436u: goto L_0894DE2C;
    case 437u: goto L_0894DE38;
    case 438u: goto L_0894DE44;
    case 439u: goto L_0894DE50;
    case 440u: goto L_0894DE68;
    case 441u: goto L_0894DE70;
    case 442u: goto L_0894DE7C;
    case 443u: goto L_0894DE84;
    case 444u: goto L_0894DE90;
    case 445u: goto L_0894DEB4;
    case 446u: goto L_0894DED8;
    case 447u: goto L_0894DEE0;
    case 448u: goto L_0894DEF0;
    case 449u: goto L_0894DF10;
    case 450u: goto L_0894DF28;
    case 451u: goto L_0894DF34;
    case 452u: goto L_0894DF40;
    case 453u: goto L_0894DF48;
    case 454u: goto L_0894DF50;
    case 455u: goto L_0894DF68;
    case 456u: goto L_0894DF70;
    case 457u: goto L_0894DF7C;
    case 458u: goto L_0894DF84;
    case 459u: goto L_0894DF90;
    case 460u: goto L_0894DFB4;
    case 461u: goto L_0894DFD8;
    case 462u: goto L_0894DFE0;
    case 463u: goto L_0894DFF0;
    case 464u: goto L_0894E004;
    case 465u: goto L_0894E010;
    case 466u: goto L_0894E018;
    case 467u: goto L_0894E01C;
    case 468u: goto L_0894E024;
    case 469u: goto L_0894E028;
    case 470u: goto L_0894E03C;
    case 471u: goto L_0894E07C;
    case 472u: goto L_0894E094;
    case 473u: goto L_0894E0A4;
    case 474u: goto L_0894E0BC;
    case 475u: goto L_0894E0D4;
    case 476u: goto L_0894E0E0;
    case 477u: goto L_0894E0F0;
    case 478u: goto L_0894E100;
    case 479u: goto L_0894E108;
    case 480u: goto L_0894E114;
    case 481u: goto L_0894E11C;
    case 482u: goto L_0894E128;
    case 483u: goto L_0894E13C;
    case 484u: goto L_0894E164;
    case 485u: goto L_0894E17C;
    case 486u: goto L_0894E190;
    case 487u: goto L_0894E1A8;
    case 488u: goto L_0894E1D8;
    case 489u: goto L_0894E1FC;
    case 490u: goto L_0894E208;
    case 491u: goto L_0894E214;
    case 492u: goto L_0894E224;
    case 493u: goto L_0894E248;
    case 494u: goto L_0894E284;
    case 495u: goto L_0894E290;
    case 496u: goto L_0894E298;
    case 497u: goto L_0894E2A4;
    case 498u: goto L_0894E2B0;
    case 499u: goto L_0894E2CC;
    case 500u: goto L_0894E2E0;
    case 501u: goto L_0894E2F4;
    case 502u: goto L_0894E300;
    case 503u: goto L_0894E30C;
    case 504u: goto L_0894E314;
    case 505u: goto L_0894E334;
    case 506u: goto L_0894E344;
    case 507u: goto L_0894E350;
    case 508u: goto L_0894E358;
    case 509u: goto L_0894E37C;
    case 510u: goto L_0894E398;
    case 511u: goto L_0894E3B0;
    case 512u: goto L_0894E3B8;
    case 513u: goto L_0894E3C8;
    case 514u: goto L_0894E3D0;
    case 515u: goto L_0894E3E4;
    case 516u: goto L_0894E3F0;
    case 517u: goto L_0894E414;
    case 518u: goto L_0894E420;
    case 519u: goto L_0894E42C;
    case 520u: goto L_0894E43C;
    case 521u: goto L_0894E448;
    case 522u: goto L_0894E458;
    case 523u: goto L_0894E464;
    case 524u: goto L_0894E46C;
    case 525u: goto L_0894E474;
    case 526u: goto L_0894E480;
    case 527u: goto L_0894E4A4;
    case 528u: goto L_0894E4B0;
    case 529u: goto L_0894E4BC;
    case 530u: goto L_0894E4C8;
    case 531u: goto L_0894E4D4;
    case 532u: goto L_0894E4E4;
    case 533u: goto L_0894E4F0;
    case 534u: goto L_0894E4F8;
    case 535u: goto L_0894E50C;
    case 536u: goto L_0894E520;
    case 537u: goto L_0894E544;
    case 538u: goto L_0894E54C;
    case 539u: goto L_0894E55C;
    case 540u: goto L_0894E570;
    case 541u: goto L_0894E57C;
    case 542u: goto L_0894E584;
    case 543u: goto L_0894E590;
    case 544u: goto L_0894E598;
    case 545u: goto L_0894E5A4;
    case 546u: goto L_0894E5AC;
    case 547u: goto L_0894E5C4;
    case 548u: goto L_0894E5E0;
    case 549u: goto L_0894E610;
    case 550u: goto L_0894E624;
    case 551u: goto L_0894E634;
    case 552u: goto L_0894E640;
    case 553u: goto L_0894E648;
    case 554u: goto L_0894E668;
    case 555u: goto L_0894E674;
    case 556u: goto L_0894E67C;
    case 557u: goto L_0894E690;
    case 558u: goto L_0894E6D8;
    case 559u: goto L_0894E6E4;
    case 560u: goto L_0894E6F4;
    case 561u: goto L_0894E6FC;
    case 562u: goto L_0894E724;
    case 563u: goto L_0894E738;
    case 564u: goto L_0894E748;
    case 565u: goto L_0894E778;
    case 566u: goto L_0894E798;
    case 567u: goto L_0894E7B4;
    case 568u: goto L_0894E7C0;
    case 569u: goto L_0894E7CC;
    case 570u: goto L_0894E830;
    case 571u: goto L_0894E844;
    case 572u: goto L_0894E858;
    case 573u: goto L_0894E86C;
    case 574u: goto L_0894E880;
    case 575u: goto L_0894E894;
    case 576u: goto L_0894E89C;
    case 577u: goto L_0894E8B4;
    case 578u: goto L_0894E8D0;
    case 579u: goto L_0894E8E0;
    case 580u: goto L_0894E8F8;
    case 581u: goto L_0894E8FC;
    case 582u: goto L_0894E918;
    case 583u: goto L_0894E970;
    case 584u: goto L_0894E978;
    case 585u: goto L_0894E994;
    case 586u: goto L_0894E9A4;
    case 587u: goto L_0894E9C8;
    case 588u: goto L_0894E9D4;
    case 589u: goto L_0894E9F4;
    case 590u: goto L_0894EA0C;
    case 591u: goto L_0894EA28;
    case 592u: goto L_0894EA98;
    case 593u: goto L_0894EAA4;
    case 594u: goto L_0894EAAC;
    case 595u: goto L_0894EADC;
    case 596u: goto L_0894EB0C;
    case 597u: goto L_0894EB24;
    case 598u: goto L_0894EB3C;
    case 599u: goto L_0894EB54;
    case 600u: goto L_0894EB6C;
    case 601u: goto L_0894EB84;
    case 602u: goto L_0894EBA0;
    case 603u: goto L_0894EBE4;
    case 604u: goto L_0894EBFC;
    case 605u: goto L_0894EC14;
    case 606u: goto L_0894EC20;
    case 607u: goto L_0894EC3C;
    case 608u: goto L_0894EC54;
    case 609u: goto L_0894EC90;
    case 610u: goto L_0894ECB0;
    case 611u: goto L_0894ECC4;
    case 612u: goto L_0894ECD8;
    case 613u: goto L_0894ED00;
    case 614u: goto L_0894ED20;
    case 615u: goto L_0894ED34;
    case 616u: goto L_0894ED48;
    case 617u: goto L_0894ED84;
    case 618u: goto L_0894ED90;
    case 619u: goto L_0894EDA0;
    case 620u: goto L_0894EDAC;
    case 621u: goto L_0894EDB4;
    case 622u: goto L_0894EDC0;
    case 623u: goto L_0894EDC8;
    case 624u: goto L_0894EDDC;
    case 625u: goto L_0894EDF0;
    case 626u: goto L_0894EE08;
    case 627u: goto L_0894EE18;
    case 628u: goto L_0894EE30;
    case 629u: goto L_0894EE34;
    case 630u: goto L_0894EE3C;
    case 631u: goto L_0894EE54;
    case 632u: goto L_0894EE60;
    case 633u: goto L_0894EE68;
    case 634u: goto L_0894EE74;
    case 635u: goto L_0894EE8C;
    case 636u: goto L_0894EEA0;
    case 637u: goto L_0894EEAC;
    case 638u: goto L_0894EEB8;
    case 639u: goto L_0894EEF0;
    case 640u: goto L_0894EF3C;
    case 641u: goto L_0894EF54;
    case 642u: goto L_0894EF74;
    case 643u: goto L_0894EF90;
    case 644u: goto L_0894EFA4;
    case 645u: goto L_0894EFC8;
    case 646u: goto L_0894EFE0;
    case 647u: goto L_0894EFE4;
    case 648u: goto L_0894EFEC;
    case 649u: goto L_0894EFF8;
    case 650u: goto L_0894F01C;
    case 651u: goto L_0894F034;
    case 652u: goto L_0894F04C;
    case 653u: goto L_0894F074;
    case 654u: goto L_0894F090;
    case 655u: goto L_0894F0B0;
    case 656u: goto L_0894F0C8;
    case 657u: goto L_0894F0F4;
    case 658u: goto L_0894F108;
    case 659u: goto L_0894F120;
    case 660u: goto L_0894F124;
    case 661u: goto L_0894F12C;
    case 662u: goto L_0894F144;
    case 663u: goto L_0894F150;
    case 664u: goto L_0894F154;
    case 665u: goto L_0894F164;
    case 666u: goto L_0894F168;
    case 667u: goto L_0894F178;
    case 668u: goto L_0894F184;
    case 669u: goto L_0894F19C;
    case 670u: goto L_0894F1D4;
    case 671u: goto L_0894F1E8;
    case 672u: goto L_0894F1F8;
    case 673u: goto L_0894F200;
    case 674u: goto L_0894F20C;
    case 675u: goto L_0894F21C;
    case 676u: goto L_0894F228;
    case 677u: goto L_0894F24C;
    case 678u: goto L_0894F250;
    case 679u: goto L_0894F25C;
    case 680u: goto L_0894F264;
    case 681u: goto L_0894F270;
    case 682u: goto L_0894F278;
    case 683u: goto L_0894F2A8;
    case 684u: goto L_0894F2B8;
    case 685u: goto L_0894F2C0;
    case 686u: goto L_0894F2D0;
    case 687u: goto L_0894F2D8;
    case 688u: goto L_0894F2E8;
    case 689u: goto L_0894F2F0;
    case 690u: goto L_0894F2F8;
    case 691u: goto L_0894F300;
    case 692u: goto L_0894F304;
    case 693u: goto L_0894F328;
    case 694u: goto L_0894F364;
    case 695u: goto L_0894F370;
    case 696u: goto L_0894F37C;
    case 697u: goto L_0894F394;
    case 698u: goto L_0894F3B0;
    case 699u: goto L_0894F3C0;
    case 700u: goto L_0894F3E4;
    case 701u: goto L_0894F3FC;
    case 702u: goto L_0894F400;
    case 703u: goto L_0894F408;
    case 704u: goto L_0894F414;
    case 705u: goto L_0894F434;
    case 706u: goto L_0894F43C;
    case 707u: goto L_0894F444;
    case 708u: goto L_0894F450;
    case 709u: goto L_0894F460;
    case 710u: goto L_0894F46C;
    case 711u: goto L_0894F474;
    case 712u: goto L_0894F480;
    case 713u: goto L_0894F488;
    case 714u: goto L_0894F49C;
    case 715u: goto L_0894F4B8;
    case 716u: goto L_0894F4D4;
    case 717u: goto L_0894F4E0;
    case 718u: goto L_0894F4E8;
    case 719u: goto L_0894F4F0;
    case 720u: goto L_0894F4FC;
    case 721u: goto L_0894F508;
    case 722u: goto L_0894F518;
    case 723u: goto L_0894F524;
    case 724u: goto L_0894F52C;
    case 725u: goto L_0894F534;
    case 726u: goto L_0894F544;
    case 727u: goto L_0894F55C;
    case 728u: goto L_0894F574;
    case 729u: goto L_0894F578;
    case 730u: goto L_0894F580;
    case 731u: goto L_0894F598;
    case 732u: goto L_0894F5A4;
    case 733u: goto L_0894F5B4;
    case 734u: goto L_0894F5CC;
    case 735u: goto L_0894F5D0;
    case 736u: goto L_0894F5D8;
    case 737u: goto L_0894F5F0;
    case 738u: goto L_0894F5FC;
    case 739u: goto L_0894F600;
    case 740u: goto L_0894F60C;
    case 741u: goto L_0894F610;
    case 742u: goto L_0894F61C;
    case 743u: goto L_0894F62C;
    case 744u: goto L_0894F638;
    case 745u: goto L_0894F644;
    case 746u: goto L_0894F64C;
    case 747u: goto L_0894F684;
    case 748u: goto L_0894F69C;
    case 749u: goto L_0894F6AC;
    case 750u: goto L_0894F6DC;
    case 751u: goto L_0894F6F4;
    case 752u: goto L_0894F72C;
    case 753u: goto L_0894F75C;
    case 754u: goto L_0894F774;
    case 755u: goto L_0894F7AC;
    case 756u: goto L_0894F7F4;
    case 757u: goto L_0894F808;
    case 758u: goto L_0894F81C;
    case 759u: goto L_0894F850;
    case 760u: goto L_0894F864;
    case 761u: goto L_0894F878;
    case 762u: goto L_0894F8B0;
    case 763u: goto L_0894F8C8;
    case 764u: goto L_0894F8DC;
    case 765u: goto L_0894F8F0;
    case 766u: goto L_0894F8F4;
    case 767u: goto L_0894F938;
    case 768u: goto L_0894F94C;
    case 769u: goto L_0894F970;
    case 770u: goto L_0894F97C;
    case 771u: goto L_0894F98C;
    case 772u: goto L_0894F998;
    case 773u: goto L_0894F9A0;
    case 774u: goto L_0894F9AC;
    case 775u: goto L_0894F9B4;
    case 776u: goto L_0894F9CC;
    case 777u: goto L_0894F9E0;
    case 778u: goto L_0894F9F8;
    case 779u: goto L_0894FA08;
    case 780u: goto L_0894FA20;
    case 781u: goto L_0894FA24;
    case 782u: goto L_0894FA2C;
    case 783u: goto L_0894FA44;
    case 784u: goto L_0894FA50;
    case 785u: goto L_0894FA64;
    case 786u: goto L_0894FA6C;
    case 787u: goto L_0894FA78;
    case 788u: goto L_0894FA8C;
    case 789u: goto L_0894FAB4;
    case 790u: goto L_0894FADC;
    case 791u: goto L_0894FAE8;
    case 792u: goto L_0894FAF8;
    case 793u: goto L_0894FB04;
    case 794u: goto L_0894FB0C;
    case 795u: goto L_0894FB18;
    case 796u: goto L_0894FB20;
    case 797u: goto L_0894FB38;
    case 798u: goto L_0894FB4C;
    case 799u: goto L_0894FB64;
    case 800u: goto L_0894FB74;
    case 801u: goto L_0894FB8C;
    case 802u: goto L_0894FB90;
    case 803u: goto L_0894FB98;
    case 804u: goto L_0894FBB0;
    case 805u: goto L_0894FBBC;
    case 806u: goto L_0894FBF0;
    case 807u: goto L_0894FC18;
    case 808u: goto L_0894FC30;
    case 809u: goto L_0894FC48;
    case 810u: goto L_0894FC94;
    case 811u: goto L_0894FCA0;
    case 812u: goto L_0894FCAC;
    case 813u: goto L_0894FCB8;
    case 814u: goto L_0894FCC4;
    case 815u: goto L_0894FCE0;
    case 816u: goto L_0894FCE8;
    case 817u: goto L_0894FD04;
    case 818u: goto L_0894FD08;
    case 819u: goto L_0894FD14;
    case 820u: goto L_0894FD2C;
    case 821u: goto L_0894FD44;
    case 822u: goto L_0894FD58;
    case 823u: goto L_0894FD70;
    case 824u: goto L_0894FD84;
    case 825u: goto L_0894FD8C;
    case 826u: goto L_0894FDA0;
    case 827u: goto L_0894FDC0;
    case 828u: goto L_0894FDC8;
    case 829u: goto L_0894FDE4;
    case 830u: goto L_0894FDF0;
    case 831u: goto L_0894FE00;
    case 832u: goto L_0894FE0C;
    case 833u: goto L_0894FE14;
    case 834u: goto L_0894FE20;
    case 835u: goto L_0894FE28;
    case 836u: goto L_0894FE40;
    case 837u: goto L_0894FE50;
    case 838u: goto L_0894FE5C;
    case 839u: goto L_0894FE64;
    case 840u: goto L_0894FE6C;
    case 841u: goto L_0894FE78;
    case 842u: goto L_0894FE84;
    case 843u: goto L_0894FE94;
    case 844u: goto L_0894FEA0;
    case 845u: goto L_0894FEA8;
    case 846u: goto L_0894FEB0;
    case 847u: goto L_0894FEC0;
    case 848u: goto L_0894FED8;
    case 849u: goto L_0894FEF0;
    case 850u: goto L_0894FEF4;
    case 851u: goto L_0894FEFC;
    case 852u: goto L_0894FF14;
    case 853u: goto L_0894FF20;
    case 854u: goto L_0894FF2C;
    case 855u: goto L_0894FF34;
    case 856u: goto L_0894FF3C;
    case 857u: goto L_0894FF4C;
    case 858u: goto L_0894FF58;
    case 859u: goto L_0894FF60;
    case 860u: goto L_0894FF64;
    case 861u: goto L_0894FF74;
    case 862u: goto L_0894FF80;
    case 863u: goto L_0894FF8C;
    case 864u: goto L_0894FF98;
    case 865u: goto L_0894FFA0;
    case 866u: goto L_0894FFD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0894C000:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894C00Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894C00Cu) goto L_0894C00C;
    return;
L_0894C00C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32660)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C050;
      }
      goto L_0894C018;
    }
L_0894C018:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13316));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894C02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 40u, 0x08814470u>(ctx, &aot_mem) && ctx.pc == 0x0894C02Cu) goto L_0894C02C;
    return;
L_0894C02C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C050;
      }
      goto L_0894C034;
    }
L_0894C034:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32660)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C050;
      }
      goto L_0894C040;
    }
L_0894C040:
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0894C050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 1060u, 0x0881BEC4u>(ctx, &aot_mem) && ctx.pc == 0x0894C050u) goto L_0894C050;
    return;
L_0894C050:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894C064:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894C0A8;
      }
      goto L_0894C09C;
    }
L_0894C09C:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C0B4;
      }
      goto L_0894C0A8;
    }
L_0894C0A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_0894C0B4;
L_0894C0B4:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0894C0C8u);
    // nop
    goto L_0894C0D8;
L_0894C0C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894C0D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31384)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C19C;
      }
      goto L_0894C104;
    }
L_0894C104:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32652)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C19C;
      }
      goto L_0894C110;
    }
L_0894C110:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894C128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 1063u, 0x0881BF28u>(ctx, &aot_mem) && ctx.pc == 0x0894C128u) goto L_0894C128;
    return;
L_0894C128:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894C13C;
      }
      goto L_0894C130;
    }
L_0894C130:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 4096 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894C144;
      }
      goto L_0894C13C;
    }
L_0894C13C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4096));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4111), static_cast<std::uint8_t>(0u));
    goto L_0894C144;
L_0894C144:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31384)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894C168u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894C168u) goto L_0894C168;
    return;
L_0894C168:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32656)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C1C4;
      }
      goto L_0894C174;
    }
L_0894C174:
    ctx.set_gpr(31, 0x0894C17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0894C17Cu) goto L_0894C17C;
    return;
L_0894C17C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894C194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 255u, 0x08811004u>(ctx, &aot_mem) && ctx.pc == 0x0894C194u) goto L_0894C194;
    return;
L_0894C194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C1C4;
      }
      goto L_0894C19C;
    }
L_0894C19C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32656)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C1C4;
      }
      goto L_0894C1A8;
    }
L_0894C1A8:
    ctx.set_gpr(31, 0x0894C1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0894C1B0u) goto L_0894C1B0;
    return;
L_0894C1B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894C1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 731u, 0x0881ABD0u>(ctx, &aot_mem) && ctx.pc == 0x0894C1C4u) goto L_0894C1C4;
    return;
L_0894C1C4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894C1E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31380)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C214;
      }
      goto L_0894C1F8;
    }
L_0894C1F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32664)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C214;
      }
      goto L_0894C204;
    }
L_0894C204:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894C214u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894C214u) goto L_0894C214;
    return;
L_0894C214:
    ctx.set_gpr(31, 0x0894C21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0894C21Cu) goto L_0894C21C;
    return;
L_0894C21C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0894C228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 227u, 0x08810CA4u>(ctx, &aot_mem) && ctx.pc == 0x0894C228u) goto L_0894C228;
    return;
L_0894C228:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894C238:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31384)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C26C;
      }
      goto L_0894C250;
    }
L_0894C250:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32652)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C26C;
      }
      goto L_0894C25C;
    }
L_0894C25C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894C26Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894C26Cu) goto L_0894C26C;
    return;
L_0894C26C:
    ctx.set_gpr(31, 0x0894C274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 442u, 0x08811C60u>(ctx, &aot_mem) && ctx.pc == 0x0894C274u) goto L_0894C274;
    return;
L_0894C274:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0894C280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 227u, 0x08810CA4u>(ctx, &aot_mem) && ctx.pc == 0x0894C280u) goto L_0894C280;
    return;
L_0894C280:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894C290:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894C298:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0894C2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 523u, 0x08902A38u>(ctx, &aot_mem) && ctx.pc == 0x0894C2B0u) goto L_0894C2B0;
    return;
L_0894C2B0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C2E4;
      }
      goto L_0894C2C0;
    }
L_0894C2C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894C2D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894C2D4u) goto L_0894C2D4;
    return;
L_0894C2D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894C2E0u);
    // nop
    goto L_0894EEF0;
L_0894C2E0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    goto L_0894C2E4;
L_0894C2E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C308;
      }
      goto L_0894C2F0;
    }
L_0894C2F0:
    ctx.set_gpr(31, 0x0894C2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894C2F8u) goto L_0894C2F8;
    return;
L_0894C2F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x0894C308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 418u, 0x0891DDBCu>(ctx, &aot_mem) && ctx.pc == 0x0894C308u) goto L_0894C308;
    return;
L_0894C308:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C32C;
      }
      goto L_0894C314;
    }
L_0894C314:
    ctx.set_gpr(31, 0x0894C31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894C31Cu) goto L_0894C31C;
    return;
L_0894C31C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x0894C32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 418u, 0x0891DDBCu>(ctx, &aot_mem) && ctx.pc == 0x0894C32Cu) goto L_0894C32C;
    return;
L_0894C32C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894C348:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0894C368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 517u, 0x089029CCu>(ctx, &aot_mem) && ctx.pc == 0x0894C368u) goto L_0894C368;
    return;
L_0894C368:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C530;
      }
      goto L_0894C370;
    }
L_0894C370:
    ctx.set_gpr(31, 0x0894C378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894C378u) goto L_0894C378;
    return;
L_0894C378:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894C3A0;
      }
      goto L_0894C394;
    }
L_0894C394:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894C3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894C3A0u) goto L_0894C3A0;
    return;
L_0894C3A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x0894C3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x0894C3B0u) goto L_0894C3B0;
    return;
L_0894C3B0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(65)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C444;
      }
      goto L_0894C3BC;
    }
L_0894C3BC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0894C3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 391u, 0x0891DBE0u>(ctx, &aot_mem) && ctx.pc == 0x0894C3D8u) goto L_0894C3D8;
    return;
L_0894C3D8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0894C3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0894C3E8u) goto L_0894C3E8;
    return;
L_0894C3E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C3FC;
      }
      goto L_0894C3F4;
    }
L_0894C3F4:
    ctx.set_gpr(31, 0x0894C3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894C3FCu) goto L_0894C3FC;
    return;
L_0894C3FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894C420u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894C420u) goto L_0894C420;
    return;
L_0894C420:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894C434;
      }
      goto L_0894C428;
    }
L_0894C428:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C484;
      }
      goto L_0894C434;
    }
L_0894C434:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C484;
      }
      goto L_0894C444;
    }
L_0894C444:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0894C454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 455u, 0x0891E160u>(ctx, &aot_mem) && ctx.pc == 0x0894C454u) goto L_0894C454;
    return;
L_0894C454:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894C468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 447u, 0x0891E09Cu>(ctx, &aot_mem) && ctx.pc == 0x0894C468u) goto L_0894C468;
    return;
L_0894C468:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894C474u);
    // nop
    goto L_0894CC64;
L_0894C474:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894C480u);
    // nop
    goto L_0894CA98;
L_0894C480:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0894C484;
L_0894C484:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C530;
      }
      goto L_0894C490;
    }
L_0894C490:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894C530;
      }
      goto L_0894C49C;
    }
L_0894C49C:
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    goto L_0894C4A0;
L_0894C4A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0894C4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 455u, 0x0891E160u>(ctx, &aot_mem) && ctx.pc == 0x0894C4B0u) goto L_0894C4B0;
    return;
L_0894C4B0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C4E4;
      }
      goto L_0894C4BC;
    }
L_0894C4BC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26476)));
    ctx.set_gpr(31, 0x0894C4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0894C4D0u) goto L_0894C4D0;
    return;
L_0894C4D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C4E4;
      }
      goto L_0894C4D8;
    }
L_0894C4D8:
    ctx.set_gpr(3, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C4E8;
      }
      goto L_0894C4E4;
    }
L_0894C4E4:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0894C4E8;
L_0894C4E8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C4FC;
      }
      goto L_0894C4F0;
    }
L_0894C4F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C4A0;
      }
      goto L_0894C4FC;
    }
L_0894C4FC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C52C;
      }
      goto L_0894C504;
    }
L_0894C504:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C520;
      }
      goto L_0894C510;
    }
L_0894C510:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C530;
      }
      goto L_0894C520;
    }
L_0894C520:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C530;
      }
      goto L_0894C52C;
    }
L_0894C52C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    goto L_0894C530;
L_0894C530:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
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
L_0894C550:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894C5E8;
      }
      goto L_0894C588;
    }
L_0894C588:
    ctx.set_gpr(31, 0x0894C590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894C590u) goto L_0894C590;
    return;
L_0894C590:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0894C5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 391u, 0x0891DBE0u>(ctx, &aot_mem) && ctx.pc == 0x0894C5ACu) goto L_0894C5AC;
    return;
L_0894C5AC:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x0894C5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0894C5BCu) goto L_0894C5BC;
    return;
L_0894C5BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C5D0;
      }
      goto L_0894C5C8;
    }
L_0894C5C8:
    ctx.set_gpr(31, 0x0894C5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894C5D0u) goto L_0894C5D0;
    return;
L_0894C5D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894C5E8;
      }
      goto L_0894C5DC;
    }
L_0894C5DC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C818;
      }
      goto L_0894C5E8;
    }
L_0894C5E8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2616));
    ctx.set_gpr(31, 0x0894C5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0894C5F8u) goto L_0894C5F8;
    return;
L_0894C5F8:
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C628;
      }
      goto L_0894C614;
    }
L_0894C614:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C63C;
      }
      goto L_0894C628;
    }
L_0894C628:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0894C63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894C63Cu) goto L_0894C63C;
    return;
L_0894C63C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2632)));
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2628)));
    ctx.set_gpr(3, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C68C;
      }
      goto L_0894C678;
    }
L_0894C678:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C6A0;
      }
      goto L_0894C68C;
    }
L_0894C68C:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0894C6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894C6A0u) goto L_0894C6A0;
    return;
L_0894C6A0:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2624)));
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2620)));
    ctx.set_gpr(3, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2616));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894C6E0;
      }
      goto L_0894C6D4;
    }
L_0894C6D4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C730;
      }
      goto L_0894C6E0;
    }
L_0894C6E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894C718;
      }
      goto L_0894C6F0;
    }
L_0894C6F0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894C6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894C6FCu) goto L_0894C6FC;
    return;
L_0894C6FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C710;
      }
      goto L_0894C704;
    }
L_0894C704:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894C710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894C710u) goto L_0894C710;
    return;
L_0894C710:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894C718;
L_0894C718:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2616));
    ctx.set_gpr(31, 0x0894C730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894C730u) goto L_0894C730;
    return;
L_0894C730:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x0894C754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894C754u) goto L_0894C754;
    return;
L_0894C754:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894C76Cu);
    // nop
    goto L_0894C838;
L_0894C76C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C798;
      }
      goto L_0894C77C;
    }
L_0894C77C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C798;
      }
      goto L_0894C794;
    }
L_0894C794:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0894C798;
L_0894C798:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C7C4;
      }
      goto L_0894C7A0;
    }
L_0894C7A0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894C7C4;
      }
      goto L_0894C7B8;
    }
L_0894C7B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894C7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894C7C4u) goto L_0894C7C4;
    return;
L_0894C7C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(22));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(22));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894C800u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894C800u) goto L_0894C800;
    return;
L_0894C800:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894C814u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894C814u) goto L_0894C814;
    return;
L_0894C814:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_0894C818;
L_0894C818:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894C838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(21, ctx.hi);
    ctx.set_gpr(19, ctx.gpr[21] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894C900;
      }
      goto L_0894C888;
    }
L_0894C888:
    ctx.set_gpr(31, 0x0894C890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0894C890u) goto L_0894C890;
    return;
L_0894C890:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894C89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 472u, 0x088D58ACu>(ctx, &aot_mem) && ctx.pc == 0x0894C89Cu) goto L_0894C89C;
    return;
L_0894C89C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C8B8;
      }
      goto L_0894C8B0;
    }
L_0894C8B0:
    ctx.set_gpr(31, 0x0894C8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x0894C8B8u) goto L_0894C8B8;
    return;
L_0894C8B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C8D4;
      }
      goto L_0894C8CC;
    }
L_0894C8CC:
    ctx.set_gpr(31, 0x0894C8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894C8D4u) goto L_0894C8D4;
    return;
L_0894C8D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0894C8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x0894C8E8u) goto L_0894C8E8;
    return;
L_0894C8E8:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C900;
      }
      goto L_0894C8F4;
    }
L_0894C8F4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0894C900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894C900u) goto L_0894C900;
    return;
L_0894C900:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C958;
      }
      goto L_0894C914;
    }
L_0894C914:
    ctx.set_gpr(6, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894C954;
      }
      goto L_0894C93C;
    }
L_0894C93C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CA70;
      }
      goto L_0894C954;
    }
L_0894C954:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0894C958;
L_0894C958:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894C914;
      }
      goto L_0894C964;
    }
L_0894C964:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0894CA70;
      }
      goto L_0894C96C;
    }
L_0894C96C:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894C9A4;
      }
      goto L_0894C978;
    }
L_0894C978:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894C994;
      }
      goto L_0894C988;
    }
L_0894C988:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894C9A4;
      }
      goto L_0894C994;
    }
L_0894C994:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894C9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894C9A4u) goto L_0894C9A4;
    return;
L_0894C9A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894C9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x0894C9D0u) goto L_0894C9D0;
    return;
L_0894C9D0:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CA00;
      }
      goto L_0894C9EC;
    }
L_0894C9EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894C9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0894C9F8u) goto L_0894C9F8;
    return;
L_0894C9F8:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0894CA00;
L_0894CA00:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CA20;
      }
      goto L_0894CA08;
    }
L_0894CA08:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894CA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0894CA14u) goto L_0894CA14;
    return;
L_0894CA14:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894CA20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0894CA20u) goto L_0894CA20;
    return;
L_0894CA20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CA44;
      }
      goto L_0894CA30;
    }
L_0894CA30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894CA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0894CA3Cu) goto L_0894CA3C;
    return;
L_0894CA3C:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0894CA44;
L_0894CA44:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CA5C;
      }
      goto L_0894CA4C;
    }
L_0894CA4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0894CA5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0894CA5Cu) goto L_0894CA5C;
    return;
L_0894CA5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_0894CA70;
L_0894CA70:
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
L_0894CA98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(31, 0x0894CACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894CACCu) goto L_0894CACC;
    return;
L_0894CACC:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894CAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0894CAECu) goto L_0894CAEC;
    return;
L_0894CAEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894CB08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894CB08u) goto L_0894CB08;
    return;
L_0894CB08:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894CB20;
      }
      goto L_0894CB14;
    }
L_0894CB14:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CC38;
      }
      goto L_0894CB20;
    }
L_0894CB20:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x0894CB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 391u, 0x0891DBE0u>(ctx, &aot_mem) && ctx.pc == 0x0894CB3Cu) goto L_0894CB3C;
    return;
L_0894CB3C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CC20;
      }
      goto L_0894CB48;
    }
L_0894CB48:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0894CB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 423u, 0x0891DE18u>(ctx, &aot_mem) && ctx.pc == 0x0894CB58u) goto L_0894CB58;
    return;
L_0894CB58:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894CB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 433u, 0x0891DF10u>(ctx, &aot_mem) && ctx.pc == 0x0894CB78u) goto L_0894CB78;
    return;
L_0894CB78:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0894CB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 466u, 0x0891E254u>(ctx, &aot_mem) && ctx.pc == 0x0894CB88u) goto L_0894CB88;
    return;
L_0894CB88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894CBEC;
      }
      goto L_0894CB9C;
    }
L_0894CB9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CBB8;
      }
      goto L_0894CBAC;
    }
L_0894CBAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894CBB8;
L_0894CBB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894CBD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894CBD4u) goto L_0894CBD4;
    return;
L_0894CBD4:
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CBEC;
      }
      goto L_0894CBE4;
    }
L_0894CBE4:
    ctx.set_gpr(31, 0x0894CBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894CBECu) goto L_0894CBEC;
    return;
L_0894CBEC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894CBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0894CBF8u) goto L_0894CBF8;
    return;
L_0894CBF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894CC10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894CC10u) goto L_0894CC10;
    return;
L_0894CC10:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0894CC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 418u, 0x0891DDBCu>(ctx, &aot_mem) && ctx.pc == 0x0894CC20u) goto L_0894CC20;
    return;
L_0894CC20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CC34;
      }
      goto L_0894CC2C;
    }
L_0894CC2C:
    ctx.set_gpr(31, 0x0894CC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894CC34u) goto L_0894CC34;
    return;
L_0894CC34:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    goto L_0894CC38;
L_0894CC38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894CC64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(31, 0x0894CC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894CC8Cu) goto L_0894CC8C;
    return;
L_0894CC8C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x0894CCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 391u, 0x0891DBE0u>(ctx, &aot_mem) && ctx.pc == 0x0894CCACu) goto L_0894CCAC;
    return;
L_0894CCAC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x0894CCBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0894CCBCu) goto L_0894CCBC;
    return;
L_0894CCBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CCD0;
      }
      goto L_0894CCC8;
    }
L_0894CCC8:
    ctx.set_gpr(31, 0x0894CCD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894CCD0u) goto L_0894CCD0;
    return;
L_0894CCD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894CCE8;
      }
      goto L_0894CCDC;
    }
L_0894CCDC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CDF8;
      }
      goto L_0894CCE8;
    }
L_0894CCE8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894CCF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0894CCF4u) goto L_0894CCF4;
    return;
L_0894CCF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894CD10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894CD10u) goto L_0894CD10;
    return;
L_0894CD10:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894CD28;
      }
      goto L_0894CD1C;
    }
L_0894CD1C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CDF8;
      }
      goto L_0894CD28;
    }
L_0894CD28:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894CD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 423u, 0x0891DE18u>(ctx, &aot_mem) && ctx.pc == 0x0894CD3Cu) goto L_0894CD3C;
    return;
L_0894CD3C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0894CD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 433u, 0x0891DF10u>(ctx, &aot_mem) && ctx.pc == 0x0894CD5Cu) goto L_0894CD5C;
    return;
L_0894CD5C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x0894CD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 466u, 0x0891E254u>(ctx, &aot_mem) && ctx.pc == 0x0894CD6Cu) goto L_0894CD6C;
    return;
L_0894CD6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894CDD0;
      }
      goto L_0894CD80;
    }
L_0894CD80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CD9C;
      }
      goto L_0894CD90;
    }
L_0894CD90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894CD9C;
L_0894CD9C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894CDB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894CDB8u) goto L_0894CDB8;
    return;
L_0894CDB8:
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CDD0;
      }
      goto L_0894CDC8;
    }
L_0894CDC8:
    ctx.set_gpr(31, 0x0894CDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894CDD0u) goto L_0894CDD0;
    return;
L_0894CDD0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894CDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0894CDDCu) goto L_0894CDDC;
    return;
L_0894CDDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894CDF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894CDF4u) goto L_0894CDF4;
    return;
L_0894CDF4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0894CDF8;
L_0894CDF8:
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
L_0894CE18:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CE34;
      }
      goto L_0894CE20;
    }
L_0894CE20:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    goto L_0894CE34;
L_0894CE34:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CE48;
      }
      goto L_0894CE3C;
    }
L_0894CE3C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    goto L_0894CE48;
L_0894CE48:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CE64;
      }
      goto L_0894CE50;
    }
L_0894CE50:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    goto L_0894CE64;
L_0894CE64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894CE6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
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
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D5D8;
      }
      goto L_0894CEB0;
    }
L_0894CEB0:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CED8;
      }
      goto L_0894CECC;
    }
L_0894CECC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894CED8;
L_0894CED8:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D11C;
      }
      goto L_0894CEF8;
    }
L_0894CEF8:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894CF10;
      }
      goto L_0894CF04;
    }
L_0894CF04:
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D11C;
      }
      goto L_0894CF10;
    }
L_0894CF10:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894CF30;
      }
      goto L_0894CF18;
    }
L_0894CF18:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894CF30;
      }
      goto L_0894CF20;
    }
L_0894CF20:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CF94;
      }
      goto L_0894CF30;
    }
L_0894CF30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0894CF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 417u, 0x0881DCD0u>(ctx, &aot_mem) && ctx.pc == 0x0894CF54u) goto L_0894CF54;
    return;
L_0894CF54:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(30, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0894CF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 527u, 0x0881E2E0u>(ctx, &aot_mem) && ctx.pc == 0x0894CF74u) goto L_0894CF74;
    return;
L_0894CF74:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894CF84;
      }
      goto L_0894CF7C;
    }
L_0894CF7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894CF94;
      }
      goto L_0894CF84;
    }
L_0894CF84:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(30, ctx.gpr[2] + ctx.gpr[30]);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    goto L_0894CF94;
L_0894CF94:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x0894CFACu);
    // nop
    goto L_0894FC48;
L_0894CFAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D110;
      }
      goto L_0894CFB4;
    }
L_0894CFB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2608));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894CFDC;
      }
      goto L_0894CFD0;
    }
L_0894CFD0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D02C;
      }
      goto L_0894CFDC;
    }
L_0894CFDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D014;
      }
      goto L_0894CFEC;
    }
L_0894CFEC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894CFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894CFF8u) goto L_0894CFF8;
    return;
L_0894CFF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D00C;
      }
      goto L_0894D000;
    }
L_0894D000:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894D00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894D00Cu) goto L_0894D00C;
    return;
L_0894D00C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894D014;
L_0894D014:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2608));
    ctx.set_gpr(31, 0x0894D02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894D02Cu) goto L_0894D02C;
    return;
L_0894D02C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D054;
      }
      goto L_0894D040;
    }
L_0894D040:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x0894D04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0894D04Cu) goto L_0894D04C;
    return;
L_0894D04C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0894D054;
L_0894D054:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D074;
      }
      goto L_0894D05C;
    }
L_0894D05C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x0894D068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0894D068u) goto L_0894D068;
    return;
L_0894D068:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894D074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0894D074u) goto L_0894D074;
    return;
L_0894D074:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D098;
      }
      goto L_0894D084;
    }
L_0894D084:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0894D090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0894D090u) goto L_0894D090;
    return;
L_0894D090:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0894D098;
L_0894D098:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D0B0;
      }
      goto L_0894D0A0;
    }
L_0894D0A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0894D0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0894D0B0u) goto L_0894D0B0;
    return;
L_0894D0B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D0E4;
      }
      goto L_0894D0C8;
    }
L_0894D0C8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D0E4;
      }
      goto L_0894D0E0;
    }
L_0894D0E0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0894D0E4;
L_0894D0E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D110;
      }
      goto L_0894D0EC;
    }
L_0894D0EC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D110;
      }
      goto L_0894D104;
    }
L_0894D104:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894D110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894D110u) goto L_0894D110;
    return;
L_0894D110:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D5C4;
      }
      goto L_0894D11C;
    }
L_0894D11C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894D448;
      }
      goto L_0894D138;
    }
L_0894D138:
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D434;
      }
      goto L_0894D154;
    }
L_0894D154:
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D17C;
      }
      goto L_0894D170;
    }
L_0894D170:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894D17C;
L_0894D17C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D194;
      }
      goto L_0894D188;
    }
L_0894D188:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894D194;
L_0894D194:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0894D1A8u);
    // nop
    goto L_0894D628;
L_0894D1A8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D1C4;
      }
      goto L_0894D1BC;
    }
L_0894D1BC:
    ctx.set_gpr(31, 0x0894D1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894D1C4u) goto L_0894D1C4;
    return;
L_0894D1C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D1D8;
      }
      goto L_0894D1D0;
    }
L_0894D1D0:
    ctx.set_gpr(31, 0x0894D1D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894D1D8u) goto L_0894D1D8;
    return;
L_0894D1D8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894D1E8u);
    // nop
    goto L_0894F6AC;
L_0894D1E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894D200u);
    // nop
    goto L_0894F6AC;
L_0894D200:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894D230u);
    // nop
    goto L_0894F72C;
L_0894D230:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D28C;
      }
      goto L_0894D26C;
    }
L_0894D26C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[17] < 0u ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[17] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    goto L_0894D28C;
L_0894D28C:
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D434;
      }
      goto L_0894D298;
    }
L_0894D298:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0894D360;
      }
      goto L_0894D2A8;
    }
L_0894D2A8:
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D304;
      }
      goto L_0894D2F8;
    }
L_0894D2F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894D304;
L_0894D304:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D31C;
      }
      goto L_0894D310;
    }
L_0894D310:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894D31C;
L_0894D31C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x0894D330u);
    // nop
    goto L_0894D628;
L_0894D330:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D34C;
      }
      goto L_0894D344;
    }
L_0894D344:
    ctx.set_gpr(31, 0x0894D34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894D34Cu) goto L_0894D34C;
    return;
L_0894D34C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D360;
      }
      goto L_0894D358;
    }
L_0894D358:
    ctx.set_gpr(31, 0x0894D360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894D360u) goto L_0894D360;
    return;
L_0894D360:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894D370u);
    // nop
    goto L_0894F6AC;
L_0894D370:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894D388u);
    // nop
    goto L_0894F6AC;
L_0894D388:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894D3B8u);
    // nop
    goto L_0894F72C;
L_0894D3B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D414;
      }
      goto L_0894D3F4;
    }
L_0894D3F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[17] < 0u ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[17] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    goto L_0894D414;
L_0894D414:
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D434;
      }
      goto L_0894D420;
    }
L_0894D420:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
    goto L_0894D434;
L_0894D434:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D298;
      }
      goto L_0894D43C;
    }
L_0894D43C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(23, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0894D448;
L_0894D448:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x0894D460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x089505FCu>(ctx, &aot_mem) && ctx.pc == 0x0894D460u) goto L_0894D460;
    return;
L_0894D460:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D5C4;
      }
      goto L_0894D468;
    }
L_0894D468:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2564));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D490;
      }
      goto L_0894D484;
    }
L_0894D484:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D4E0;
      }
      goto L_0894D490;
    }
L_0894D490:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D4C8;
      }
      goto L_0894D4A0;
    }
L_0894D4A0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894D4ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894D4ACu) goto L_0894D4AC;
    return;
L_0894D4AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D4C0;
      }
      goto L_0894D4B4;
    }
L_0894D4B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894D4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894D4C0u) goto L_0894D4C0;
    return;
L_0894D4C0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894D4C8;
L_0894D4C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2564));
    ctx.set_gpr(31, 0x0894D4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894D4E0u) goto L_0894D4E0;
    return;
L_0894D4E0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D508;
      }
      goto L_0894D4F4;
    }
L_0894D4F4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x0894D500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0894D500u) goto L_0894D500;
    return;
L_0894D500:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0894D508;
L_0894D508:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D528;
      }
      goto L_0894D510;
    }
L_0894D510:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x0894D51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0894D51Cu) goto L_0894D51C;
    return;
L_0894D51C:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894D528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0894D528u) goto L_0894D528;
    return;
L_0894D528:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D54C;
      }
      goto L_0894D538;
    }
L_0894D538:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0894D544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0894D544u) goto L_0894D544;
    return;
L_0894D544:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0894D54C;
L_0894D54C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D564;
      }
      goto L_0894D554;
    }
L_0894D554:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0894D564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0894D564u) goto L_0894D564;
    return;
L_0894D564:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D598;
      }
      goto L_0894D57C;
    }
L_0894D57C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D598;
      }
      goto L_0894D594;
    }
L_0894D594:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0894D598;
L_0894D598:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D5C4;
      }
      goto L_0894D5A0;
    }
L_0894D5A0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D5C4;
      }
      goto L_0894D5B8;
    }
L_0894D5B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894D5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894D5C4u) goto L_0894D5C4;
    return;
L_0894D5C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D5D8;
      }
      goto L_0894D5D0;
    }
L_0894D5D0:
    ctx.set_gpr(31, 0x0894D5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894D5D8u) goto L_0894D5D8;
    return;
L_0894D5D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894CEB0;
      }
      goto L_0894D5E8;
    }
L_0894D5E8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0894D5F4u);
    // nop
    goto L_0894F1D4;
L_0894D5F4:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894D628:
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
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894D674u);
    // nop
    goto L_0894F6AC;
L_0894D674:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0894D68Cu);
    // nop
    goto L_0894F6AC;
L_0894D68C:
    ctx.set_gpr(5, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[23] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(1, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D76C;
      }
      goto L_0894D6AC;
    }
L_0894D6AC:
    ctx.set_gpr(1, ctx.gpr[3] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D6C4;
      }
      goto L_0894D6B8;
    }
L_0894D6B8:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D76C;
      }
      goto L_0894D6C4;
    }
L_0894D6C4:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894D6D8u);
    // nop
    goto L_0894F6AC;
L_0894D6D8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0894D6F0u);
    // nop
    goto L_0894F6AC;
L_0894D6F0:
    ctx.set_gpr(5, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[23] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D710;
      }
      goto L_0894D708;
    }
L_0894D708:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D76C;
      }
      goto L_0894D710;
    }
L_0894D710:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894D724u);
    // nop
    goto L_0894F6AC;
L_0894D724:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894D73Cu);
    // nop
    goto L_0894F6AC;
L_0894D73C:
    ctx.set_gpr(4, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894D75Cu);
    // nop
    goto L_0894F72C;
L_0894D75C:
    ctx.set_gpr(4, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(22, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[3]);
    ctx.set_gpr(21, ctx.gpr[2] - ctx.gpr[4]);
    goto L_0894D76C;
L_0894D76C:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
    ctx.set_gpr(3, ctx.gpr[21] + 0u);
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
L_0894D7A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(21, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D7FC;
      }
      goto L_0894D7F0;
    }
L_0894D7F0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D848;
      }
      goto L_0894D7FC;
    }
L_0894D7FC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D834;
      }
      goto L_0894D80C;
    }
L_0894D80C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894D818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894D818u) goto L_0894D818;
    return;
L_0894D818:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D82C;
      }
      goto L_0894D820;
    }
L_0894D820:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894D82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894D82Cu) goto L_0894D82C;
    return;
L_0894D82C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894D834;
L_0894D834:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0894D848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894D848u) goto L_0894D848;
    return;
L_0894D848:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x0894D85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894D85Cu) goto L_0894D85C;
    return;
L_0894D85C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0894D874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 188u, 0x08904C78u>(ctx, &aot_mem) && ctx.pc == 0x0894D874u) goto L_0894D874;
    return;
L_0894D874:
    ctx.set_gpr(21, ctx.gpr[2] & 255u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D8A4;
      }
      goto L_0894D888;
    }
L_0894D888:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D8A4;
      }
      goto L_0894D8A0;
    }
L_0894D8A0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0894D8A4;
L_0894D8A4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D8D0;
      }
      goto L_0894D8AC;
    }
L_0894D8AC:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D8D0;
      }
      goto L_0894D8C4;
    }
L_0894D8C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894D8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894D8D0u) goto L_0894D8D0;
    return;
L_0894D8D0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D924;
      }
      goto L_0894D8D8;
    }
L_0894D8D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894D8F0;
      }
      goto L_0894D8E4;
    }
L_0894D8E4:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D930;
      }
      goto L_0894D8F0;
    }
L_0894D8F0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D930;
      }
      goto L_0894D8F8;
    }
L_0894D8F8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D930;
      }
      goto L_0894D924;
    }
L_0894D924:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D930;
      }
      goto L_0894D92C;
    }
L_0894D92C:
    ctx.set_gpr(18, 0u + 0u);
    goto L_0894D930;
L_0894D930:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DAC0;
      }
      goto L_0894D938;
    }
L_0894D938:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894D954u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894D954u) goto L_0894D954;
    return;
L_0894D954:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DAAC;
      }
      goto L_0894D960;
    }
L_0894D960:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894D974;
      }
      goto L_0894D96C;
    }
L_0894D96C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_0894D974;
L_0894D974:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894D9B8;
      }
      goto L_0894D990;
    }
L_0894D990:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894D99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894D99Cu) goto L_0894D99C;
    return;
L_0894D99C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D9B0;
      }
      goto L_0894D9A4;
    }
L_0894D9A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894D9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894D9B0u) goto L_0894D9B0;
    return;
L_0894D9B0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894D9B8;
L_0894D9B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894D9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894D9CCu) goto L_0894D9CC;
    return;
L_0894D9CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894D9F4;
      }
      goto L_0894D9E0;
    }
L_0894D9E0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0894D9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0894D9ECu) goto L_0894D9EC;
    return;
L_0894D9EC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0894D9F4;
L_0894D9F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DA0C;
      }
      goto L_0894D9FC;
    }
L_0894D9FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0894DA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0894DA0Cu) goto L_0894DA0C;
    return;
L_0894DA0C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894DA54;
      }
      goto L_0894DA2C;
    }
L_0894DA2C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894DA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894DA38u) goto L_0894DA38;
    return;
L_0894DA38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DA4C;
      }
      goto L_0894DA40;
    }
L_0894DA40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894DA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894DA4Cu) goto L_0894DA4C;
    return;
L_0894DA4C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894DA54;
L_0894DA54:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894DA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894DA68u) goto L_0894DA68;
    return;
L_0894DA68:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DA90;
      }
      goto L_0894DA7C;
    }
L_0894DA7C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0894DA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0894DA88u) goto L_0894DA88;
    return;
L_0894DA88:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0894DA90;
L_0894DA90:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DAA8;
      }
      goto L_0894DA98;
    }
L_0894DA98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0894DAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0894DAA8u) goto L_0894DAA8;
    return;
L_0894DAA8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    goto L_0894DAAC;
L_0894DAAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DAC0;
      }
      goto L_0894DAB8;
    }
L_0894DAB8:
    ctx.set_gpr(31, 0x0894DAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894DAC0u) goto L_0894DAC0;
    return;
L_0894DAC0:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DAD8;
      }
      goto L_0894DACC;
    }
L_0894DACC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0894DAD8;
L_0894DAD8:
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
L_0894DB00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(31, 0x0894DB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 541u, 0x08902B98u>(ctx, &aot_mem) && ctx.pc == 0x0894DB20u) goto L_0894DB20;
    return;
L_0894DB20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DBC4;
      }
      goto L_0894DB28;
    }
L_0894DB28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DBC0;
      }
      goto L_0894DB38;
    }
L_0894DB38:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DB90;
      }
      goto L_0894DB60;
    }
L_0894DB60:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894DB8C;
      }
      goto L_0894DB80;
    }
L_0894DB80:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DBA0;
      }
      goto L_0894DB8C;
    }
L_0894DB8C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0894DB90;
L_0894DB90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894DB60;
      }
      goto L_0894DBA0;
    }
L_0894DBA0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DBC0;
      }
      goto L_0894DBA8;
    }
L_0894DBA8:
    ctx.set_gpr(31, 0x0894DBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894DBB0u) goto L_0894DBB0;
    return;
L_0894DBB0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894DBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 443u, 0x0891E054u>(ctx, &aot_mem) && ctx.pc == 0x0894DBC0u) goto L_0894DBC0;
    return;
L_0894DBC0:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_0894DBC4;
L_0894DBC4:
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
L_0894DBE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0894DC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894DC00u) goto L_0894DC00;
    return;
L_0894DC00:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DC34;
      }
      goto L_0894DC10;
    }
L_0894DC10:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894DC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 443u, 0x0891E054u>(ctx, &aot_mem) && ctx.pc == 0x0894DC30u) goto L_0894DC30;
    return;
L_0894DC30:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894DC34;
L_0894DC34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894DC10;
      }
      goto L_0894DC48;
    }
L_0894DC48:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894DC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 550u, 0x08902C54u>(ctx, &aot_mem) && ctx.pc == 0x0894DC54u) goto L_0894DC54;
    return;
L_0894DC54:
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
L_0894DC70:
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
          goto L_0894DCAC;
      }
      goto L_0894DCA0;
    }
L_0894DCA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894DCAC;
L_0894DCAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894DCD0;
      }
      goto L_0894DCB8;
    }
L_0894DCB8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DCD0;
      }
      goto L_0894DCC4;
    }
L_0894DCC4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0894DCD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0894DCD0u) goto L_0894DCD0;
    return;
L_0894DCD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894DD24;
      }
      goto L_0894DCDC;
    }
L_0894DCDC:
    ctx.set_gpr(31, 0x0894DCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894DCE4u) goto L_0894DCE4;
    return;
L_0894DCE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894DD00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 391u, 0x0891DBE0u>(ctx, &aot_mem) && ctx.pc == 0x0894DD00u) goto L_0894DD00;
    return;
L_0894DD00:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x0894DD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0894DD10u) goto L_0894DD10;
    return;
L_0894DD10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DD24;
      }
      goto L_0894DD1C;
    }
L_0894DD1C:
    ctx.set_gpr(31, 0x0894DD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894DD24u) goto L_0894DD24;
    return;
L_0894DD24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DD40;
      }
      goto L_0894DD34;
    }
L_0894DD34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894DD40;
L_0894DD40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DD54;
      }
      goto L_0894DD4C;
    }
L_0894DD4C:
    ctx.set_gpr(31, 0x0894DD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894DD54u) goto L_0894DD54;
    return;
L_0894DD54:
    ctx.set_gpr(2, 0u + 0u);
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
L_0894DD74:
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
    ctx.set_gpr(30, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DDC4;
      }
      goto L_0894DDB8;
    }
L_0894DDB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894E03C;
      }
      goto L_0894DDC4;
    }
L_0894DDC4:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E028;
      }
      goto L_0894DDD0;
    }
L_0894DDD0:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E01C;
      }
      goto L_0894DDF4;
    }
L_0894DDF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DE20;
      }
      goto L_0894DE14;
    }
L_0894DE14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894DE20;
L_0894DE20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0894E004;
      }
      goto L_0894DE2C;
    }
L_0894DE2C:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DF50;
      }
      goto L_0894DE38;
    }
L_0894DE38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DE50;
      }
      goto L_0894DE44;
    }
L_0894DE44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894E004;
      }
      goto L_0894DE50;
    }
L_0894DE50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DEB4;
      }
      goto L_0894DE68;
    }
L_0894DE68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894DEB4;
      }
      goto L_0894DE70;
    }
L_0894DE70:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DEB4;
      }
      goto L_0894DE7C;
    }
L_0894DE7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894DEB4;
      }
      goto L_0894DE84;
    }
L_0894DE84:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DEB4;
      }
      goto L_0894DE90;
    }
L_0894DE90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0894DEB4;
L_0894DEB4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(23, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DEE0;
      }
      goto L_0894DED8;
    }
L_0894DED8:
    ctx.set_gpr(31, 0x0894DEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894DEE0u) goto L_0894DEE0;
    return;
L_0894DEE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0894DEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0894DEF0u) goto L_0894DEF0;
    return;
L_0894DEF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E004;
      }
      goto L_0894DF10;
    }
L_0894DF10:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894DF28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894DF28u) goto L_0894DF28;
    return;
L_0894DF28:
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E004;
      }
      goto L_0894DF34;
    }
L_0894DF34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E024;
      }
      goto L_0894DF40;
    }
L_0894DF40:
    ctx.set_gpr(31, 0x0894DF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894DF48u) goto L_0894DF48;
    return;
L_0894DF48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E024;
      }
      goto L_0894DF50;
    }
L_0894DF50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DFB4;
      }
      goto L_0894DF68;
    }
L_0894DF68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894DFB4;
      }
      goto L_0894DF70;
    }
L_0894DF70:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DFB4;
      }
      goto L_0894DF7C;
    }
L_0894DF7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894DFB4;
      }
      goto L_0894DF84;
    }
L_0894DF84:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DFB4;
      }
      goto L_0894DF90;
    }
L_0894DF90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0894DFB4;
L_0894DFB4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894DFE0;
      }
      goto L_0894DFD8;
    }
L_0894DFD8:
    ctx.set_gpr(31, 0x0894DFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894DFE0u) goto L_0894DFE0;
    return;
L_0894DFE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0894DFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0894DFF0u) goto L_0894DFF0;
    return;
L_0894DFF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_0894E004;
L_0894E004:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E018;
      }
      goto L_0894E010;
    }
L_0894E010:
    ctx.set_gpr(31, 0x0894E018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894E018u) goto L_0894E018;
    return;
L_0894E018:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_0894E01C;
L_0894E01C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0894DDF4;
      }
      goto L_0894E024;
    }
L_0894E024:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0894E028;
L_0894E028:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894DDD0;
      }
      goto L_0894E03C;
    }
L_0894E03C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
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
L_0894E07C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0894E094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894E094u) goto L_0894E094;
    return;
L_0894E094:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894E0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 418u, 0x0891DDBCu>(ctx, &aot_mem) && ctx.pc == 0x0894E0A4u) goto L_0894E0A4;
    return;
L_0894E0A4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894E0BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0894E0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 557u, 0x08902CD4u>(ctx, &aot_mem) && ctx.pc == 0x0894E0D4u) goto L_0894E0D4;
    return;
L_0894E0D4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E128;
      }
      goto L_0894E0E0;
    }
L_0894E0E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0894E128;
      }
      goto L_0894E0F0;
    }
L_0894E0F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E108;
      }
      goto L_0894E100;
    }
L_0894E100:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E11C;
      }
      goto L_0894E108;
    }
L_0894E108:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894E114u);
    // nop
    goto L_0894E13C;
L_0894E114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E128;
      }
      goto L_0894E11C;
    }
L_0894E11C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894E128u);
    // nop
    goto L_0894E248;
L_0894E128:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894E13C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0894E164;
L_0894E164:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894E17Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894E17Cu) goto L_0894E17C;
    return;
L_0894E17C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894E190u);
    // nop
    goto L_0894E248;
L_0894E190:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894E1A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894E1A8u) goto L_0894E1A8;
    return;
L_0894E1A8:
    ctx.set_gpr(4, ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E224;
      }
      goto L_0894E1D8;
    }
L_0894E1D8:
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E224;
      }
      goto L_0894E1FC;
    }
L_0894E1FC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E214;
      }
      goto L_0894E208;
    }
L_0894E208:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E224;
      }
      goto L_0894E214;
    }
L_0894E214:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E164;
      }
      goto L_0894E224;
    }
L_0894E224:
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
L_0894E248:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E290;
      }
      goto L_0894E284;
    }
L_0894E284:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894E290;
L_0894E290:
    ctx.set_gpr(31, 0x0894E298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0894E298u) goto L_0894E298;
    return;
L_0894E298:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894E2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0894E2A4u) goto L_0894E2A4;
    return;
L_0894E2A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894E2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 581u, 0x088E2C84u>(ctx, &aot_mem) && ctx.pc == 0x0894E2B0u) goto L_0894E2B0;
    return;
L_0894E2B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894E2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 95u, 0x089507F0u>(ctx, &aot_mem) && ctx.pc == 0x0894E2CCu) goto L_0894E2CC;
    return;
L_0894E2CC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0894E2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0894E2E0u) goto L_0894E2E0;
    return;
L_0894E2E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E300;
      }
      goto L_0894E2F4;
    }
L_0894E2F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0894E300;
L_0894E300:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E3B8;
      }
      goto L_0894E30C;
    }
L_0894E30C:
    ctx.set_gpr(31, 0x0894E314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894E314u) goto L_0894E314;
    return;
L_0894E314:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894E334u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894E334u) goto L_0894E334;
    return;
L_0894E334:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x0894E344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0894E344u) goto L_0894E344;
    return;
L_0894E344:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E358;
      }
      goto L_0894E350;
    }
L_0894E350:
    ctx.set_gpr(31, 0x0894E358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894E358u) goto L_0894E358;
    return;
L_0894E358:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x0894E37Cu);
    // nop
    goto L_0894F278;
L_0894E37C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x0894E398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 429u, 0x0891DEA0u>(ctx, &aot_mem) && ctx.pc == 0x0894E398u) goto L_0894E398;
    return;
L_0894E398:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894E3B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894E3B0u) goto L_0894E3B0;
    return;
L_0894E3B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E4F8;
      }
      goto L_0894E3B8;
    }
L_0894E3B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E3D0;
      }
      goto L_0894E3C8;
    }
L_0894E3C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E4F8;
      }
      goto L_0894E3D0;
    }
L_0894E3D0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E42C;
      }
      goto L_0894E3E4;
    }
L_0894E3E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894E474;
      }
      goto L_0894E3F0;
    }
L_0894E3F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(1, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E474;
      }
      goto L_0894E414;
    }
L_0894E414:
    ctx.set_gpr(1, ctx.gpr[3] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E42C;
      }
      goto L_0894E420;
    }
L_0894E420:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E474;
      }
      goto L_0894E42C;
    }
L_0894E42C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E448;
      }
      goto L_0894E43C;
    }
L_0894E43C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894E448;
L_0894E448:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0894E458u);
    // nop
    goto L_0894FFD4;
L_0894E458:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E4F8;
      }
      goto L_0894E464;
    }
L_0894E464:
    ctx.set_gpr(31, 0x0894E46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894E46Cu) goto L_0894E46C;
    return;
L_0894E46C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E4F8;
      }
      goto L_0894E474;
    }
L_0894E474:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894E4F8;
      }
      goto L_0894E480;
    }
L_0894E480:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[4] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E4F8;
      }
      goto L_0894E4A4;
    }
L_0894E4A4:
    ctx.set_gpr(1, 0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E4BC;
      }
      goto L_0894E4B0;
    }
L_0894E4B0:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E4F8;
      }
      goto L_0894E4BC;
    }
L_0894E4BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E4D4;
      }
      goto L_0894E4C8;
    }
L_0894E4C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894E4D4;
L_0894E4D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0894E4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 52u, 0x0895045Cu>(ctx, &aot_mem) && ctx.pc == 0x0894E4E4u) goto L_0894E4E4;
    return;
L_0894E4E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E4F8;
      }
      goto L_0894E4F0;
    }
L_0894E4F0:
    ctx.set_gpr(31, 0x0894E4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894E4F8u) goto L_0894E4F8;
    return;
L_0894E4F8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894E570;
      }
      goto L_0894E50C;
    }
L_0894E50C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894E520u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894E520u) goto L_0894E520;
    return;
L_0894E520:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E54C;
      }
      goto L_0894E544;
    }
L_0894E544:
    ctx.set_gpr(31, 0x0894E54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894E54Cu) goto L_0894E54C;
    return;
L_0894E54C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894E55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0894E55Cu) goto L_0894E55C;
    return;
L_0894E55C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_0894E570;
L_0894E570:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E584;
      }
      goto L_0894E57C;
    }
L_0894E57C:
    ctx.set_gpr(31, 0x0894E584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894E584u) goto L_0894E584;
    return;
L_0894E584:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E598;
      }
      goto L_0894E590;
    }
L_0894E590:
    ctx.set_gpr(31, 0x0894E598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894E598u) goto L_0894E598;
    return;
L_0894E598:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E5AC;
      }
      goto L_0894E5A4;
    }
L_0894E5A4:
    ctx.set_gpr(31, 0x0894E5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894E5ACu) goto L_0894E5AC;
    return;
L_0894E5AC:
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
L_0894E5C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E610;
      }
      goto L_0894E5E0;
    }
L_0894E5E0:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0894E610;
L_0894E610:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E5E0;
      }
      goto L_0894E624;
    }
L_0894E624:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E640;
      }
      goto L_0894E634;
    }
L_0894E634:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894E640;
L_0894E640:
    ctx.set_gpr(31, 0x0894E648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894E648u) goto L_0894E648;
    return;
L_0894E648:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0894E668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 433u, 0x0891DF10u>(ctx, &aot_mem) && ctx.pc == 0x0894E668u) goto L_0894E668;
    return;
L_0894E668:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E67C;
      }
      goto L_0894E674;
    }
L_0894E674:
    ctx.set_gpr(31, 0x0894E67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894E67Cu) goto L_0894E67C;
    return;
L_0894E67C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894E690:
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
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(31, 0x0894E6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 584u, 0x08902EC8u>(ctx, &aot_mem) && ctx.pc == 0x0894E6D8u) goto L_0894E6D8;
    return;
L_0894E6D8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(65)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E6FC;
      }
      goto L_0894E6E4;
    }
L_0894E6E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0894E6F4u);
    // nop
    goto L_0894FBF0;
L_0894E6F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E748;
      }
      goto L_0894E6FC;
    }
L_0894E6FC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894E724u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894E724u) goto L_0894E724;
    return;
L_0894E724:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894E738u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894E738u) goto L_0894E738;
    return;
L_0894E738:
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0894E748u);
    // nop
    goto L_0894EEF0;
L_0894E748:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
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
L_0894E778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0894E798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0894E798u) goto L_0894E798;
    return;
L_0894E798:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894E7B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894E7B4u) goto L_0894E7B4;
    return;
L_0894E7B4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894E7CC;
      }
      goto L_0894E7C0;
    }
L_0894E7C0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894E8FC;
      }
      goto L_0894E7CC;
    }
L_0894E7CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1318));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(62));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0894E830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894E830u) goto L_0894E830;
    return;
L_0894E830:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894E844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894E844u) goto L_0894E844;
    return;
L_0894E844:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894E858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894E858u) goto L_0894E858;
    return;
L_0894E858:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894E86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894E86Cu) goto L_0894E86C;
    return;
L_0894E86C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894E880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894E880u) goto L_0894E880;
    return;
L_0894E880:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894E894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894E894u) goto L_0894E894;
    return;
L_0894E894:
    ctx.set_gpr(31, 0x0894E89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894E89Cu) goto L_0894E89C;
    return;
L_0894E89C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894E8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 423u, 0x0891DE18u>(ctx, &aot_mem) && ctx.pc == 0x0894E8B4u) goto L_0894E8B4;
    return;
L_0894E8B4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0894E8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 437u, 0x0891DFA0u>(ctx, &aot_mem) && ctx.pc == 0x0894E8D0u) goto L_0894E8D0;
    return;
L_0894E8D0:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894E8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0894E8E0u) goto L_0894E8E0;
    return;
L_0894E8E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894E8F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894E8F8u) goto L_0894E8F8;
    return;
L_0894E8F8:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_0894E8FC;
L_0894E8FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_0894E918:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(21, ctx.gpr[7] + 0u);
    ctx.set_gpr(20, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894E970u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894E970u) goto L_0894E970;
    return;
L_0894E970:
    ctx.set_gpr(31, 0x0894E978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894E978u) goto L_0894E978;
    return;
L_0894E978:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0894E994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 429u, 0x0891DEA0u>(ctx, &aot_mem) && ctx.pc == 0x0894E994u) goto L_0894E994;
    return;
L_0894E994:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894E9A4u);
    // nop
    goto L_0894FAB4;
L_0894E9A4:
    ctx.set_gpr(8, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[20] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0894E9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 437u, 0x0891DFA0u>(ctx, &aot_mem) && ctx.pc == 0x0894E9C8u) goto L_0894E9C8;
    return;
L_0894E9C8:
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894EA98;
      }
      goto L_0894E9D4;
    }
L_0894E9D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894E9F4u);
    // nop
    goto L_0894FAB4;
L_0894E9F4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0894EA0Cu);
    // nop
    goto L_0894F7AC;
L_0894EA0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x0894EA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0894EA28u) goto L_0894EA28;
    return;
L_0894EA28:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[21] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[21] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894EA98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894EA98u) goto L_0894EA98;
    return;
L_0894EA98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894EAAC;
      }
      goto L_0894EAA4;
    }
L_0894EAA4:
    ctx.set_gpr(31, 0x0894EAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894EAACu) goto L_0894EAAC;
    return;
L_0894EAAC:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_0894EADC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0894EB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894EB0Cu) goto L_0894EB0C;
    return;
L_0894EB0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894EB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894EB24u) goto L_0894EB24;
    return;
L_0894EB24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894EB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894EB3Cu) goto L_0894EB3C;
    return;
L_0894EB3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894EB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894EB54u) goto L_0894EB54;
    return;
L_0894EB54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894EB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894EB6Cu) goto L_0894EB6C;
    return;
L_0894EB6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894EB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894EB84u) goto L_0894EB84;
    return;
L_0894EB84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_0894EBA0:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894EE8C;
      }
      goto L_0894EBE4;
    }
L_0894EBE4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894EBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894EBFCu) goto L_0894EBFC;
    return;
L_0894EBFC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(31, 0x0894EC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0894EC14u) goto L_0894EC14;
    return;
L_0894EC14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894EC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0894EC20u) goto L_0894EC20;
    return;
L_0894EC20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894EC3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894EC3Cu) goto L_0894EC3C;
    return;
L_0894EC3C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894EC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894EC54u) goto L_0894EC54;
    return;
L_0894EC54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(18, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(30, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894EC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894EC90u) goto L_0894EC90;
    return;
L_0894EC90:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(23, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 31u));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894ECC4;
      }
      goto L_0894ECB0;
    }
L_0894ECB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894ECD8;
      }
      goto L_0894ECC4;
    }
L_0894ECC4:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0894ECD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894ECD8u) goto L_0894ECD8;
    return;
L_0894ECD8:
    ctx.set_gpr(3, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894ED00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894ED00u) goto L_0894ED00;
    return;
L_0894ED00:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(23, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 31u));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894ED34;
      }
      goto L_0894ED20;
    }
L_0894ED20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894ED48;
      }
      goto L_0894ED34;
    }
L_0894ED34:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0894ED48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894ED48u) goto L_0894ED48;
    return;
L_0894ED48:
    ctx.set_gpr(3, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[30]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894ED90;
      }
      goto L_0894ED84;
    }
L_0894ED84:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894EDDC;
      }
      goto L_0894ED90;
    }
L_0894ED90:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894EDC8;
      }
      goto L_0894EDA0;
    }
L_0894EDA0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894EDACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894EDACu) goto L_0894EDAC;
    return;
L_0894EDAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894EDC0;
      }
      goto L_0894EDB4;
    }
L_0894EDB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894EDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894EDC0u) goto L_0894EDC0;
    return;
L_0894EDC0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894EDC8;
L_0894EDC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0894EDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894EDDCu) goto L_0894EDDC;
    return;
L_0894EDDC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0894EDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894EDF0u) goto L_0894EDF0;
    return;
L_0894EDF0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894EE08u);
    // nop
    goto L_0894C838;
L_0894EE08:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894EE34;
      }
      goto L_0894EE18;
    }
L_0894EE18:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894EE34;
      }
      goto L_0894EE30;
    }
L_0894EE30:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0894EE34;
L_0894EE34:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894EE60;
      }
      goto L_0894EE3C;
    }
L_0894EE3C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894EE60;
      }
      goto L_0894EE54;
    }
L_0894EE54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894EE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894EE60u) goto L_0894EE60;
    return;
L_0894EE60:
    ctx.set_gpr(31, 0x0894EE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 228u, 0x0893CE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0894EE68u) goto L_0894EE68;
    return;
L_0894EE68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894EE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0894EE74u) goto L_0894EE74;
    return;
L_0894EE74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894EE8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894EE8Cu) goto L_0894EE8C;
    return;
L_0894EE8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(1, ctx.gpr[18] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894EBE4;
      }
      goto L_0894EEA0;
    }
L_0894EEA0:
    ctx.set_gpr(1, 0u < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894EEB8;
      }
      goto L_0894EEAC;
    }
L_0894EEAC:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894EBE4;
      }
      goto L_0894EEB8;
    }
L_0894EEB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_0894EEF0:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0894EF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0894EF3Cu) goto L_0894EF3C;
    return;
L_0894EF3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894EF54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894EF54u) goto L_0894EF54;
    return;
L_0894EF54:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F168;
      }
      goto L_0894EF74;
    }
L_0894EF74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F164;
      }
      goto L_0894EF90;
    }
L_0894EF90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F154;
      }
      goto L_0894EFA4;
    }
L_0894EFA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894EFE4;
      }
      goto L_0894EFC8;
    }
L_0894EFC8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894EFE4;
      }
      goto L_0894EFE0;
    }
L_0894EFE0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0894EFE4;
L_0894EFE4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894EFF8;
      }
      goto L_0894EFEC;
    }
L_0894EFEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_0894EFF8;
L_0894EFF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(22, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0894F01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0894F01Cu) goto L_0894F01C;
    return;
L_0894F01C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894F034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894F034u) goto L_0894F034;
    return;
L_0894F034:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0894F04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894F04Cu) goto L_0894F04C;
    return;
L_0894F04C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(22, ctx.gpr[23] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894F074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894F074u) goto L_0894F074;
    return;
L_0894F074:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894F090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894F090u) goto L_0894F090;
    return;
L_0894F090:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0894F0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0894F0B0u) goto L_0894F0B0;
    return;
L_0894F0B0:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0894F0C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 423u, 0x0891DE18u>(ctx, &aot_mem) && ctx.pc == 0x0894F0C8u) goto L_0894F0C8;
    return;
L_0894F0C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[30] < ctx.gpr[23] ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[30] - ctx.gpr[23]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[2] - 0u);
    ctx.set_gpr(9, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x0894F0F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 437u, 0x0891DFA0u>(ctx, &aot_mem) && ctx.pc == 0x0894F0F4u) goto L_0894F0F4;
    return;
L_0894F0F4:
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F124;
      }
      goto L_0894F108;
    }
L_0894F108:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F124;
      }
      goto L_0894F120;
    }
L_0894F120:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0894F124;
L_0894F124:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F150;
      }
      goto L_0894F12C;
    }
L_0894F12C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894F150;
      }
      goto L_0894F144;
    }
L_0894F144:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894F150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894F150u) goto L_0894F150;
    return;
L_0894F150:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0894F154;
L_0894F154:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894EFA4;
      }
      goto L_0894F164;
    }
L_0894F164:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0894F168;
L_0894F168:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894EF74;
      }
      goto L_0894F178;
    }
L_0894F178:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0894F184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0894F184u) goto L_0894F184;
    return;
L_0894F184:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894F19Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894F19Cu) goto L_0894F19C;
    return;
L_0894F19C:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
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
L_0894F1D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F250;
      }
      goto L_0894F1E8;
    }
L_0894F1E8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F24C;
      }
      goto L_0894F1F8;
    }
L_0894F1F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894F24C;
      }
      goto L_0894F200;
    }
L_0894F200:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F24C;
      }
      goto L_0894F20C;
    }
L_0894F20C:
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[3] - ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894F24C;
      }
      goto L_0894F21C;
    }
L_0894F21C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F24C;
      }
      goto L_0894F228;
    }
L_0894F228:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[10] << 2u);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0894F24C;
L_0894F24C:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_0894F250;
L_0894F250:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0894F264;
      }
      goto L_0894F25C;
    }
L_0894F25C:
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_0894F264;
L_0894F264:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894F1E8;
      }
      goto L_0894F270;
    }
L_0894F270:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894F278:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(17, ctx.gpr[10] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F2B8;
      }
      goto L_0894F2A8;
    }
L_0894F2A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_0894F2B8;
L_0894F2B8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F2D0;
      }
      goto L_0894F2C0;
    }
L_0894F2C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0894F2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0894F2D0u) goto L_0894F2D0;
    return;
L_0894F2D0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F2E8;
      }
      goto L_0894F2D8;
    }
L_0894F2D8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894F2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0894F2E8u) goto L_0894F2E8;
    return;
L_0894F2E8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F2F8;
      }
      goto L_0894F2F0;
    }
L_0894F2F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_0894F2F8;
L_0894F2F8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F304;
      }
      goto L_0894F300;
    }
L_0894F300:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    goto L_0894F304;
L_0894F304:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_0894F328:
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
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0894F364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 232u, 0x0893CEDCu>(ctx, &aot_mem) && ctx.pc == 0x0894F364u) goto L_0894F364;
    return;
L_0894F364:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894F370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0894F370u) goto L_0894F370;
    return;
L_0894F370:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894F37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x0894F37Cu) goto L_0894F37C;
    return;
L_0894F37C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F610;
      }
      goto L_0894F394;
    }
L_0894F394:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F60C;
      }
      goto L_0894F3B0;
    }
L_0894F3B0:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F600;
      }
      goto L_0894F3C0;
    }
L_0894F3C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F400;
      }
      goto L_0894F3E4;
    }
L_0894F3E4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F400;
      }
      goto L_0894F3FC;
    }
L_0894F3FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0894F400;
L_0894F400:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F414;
      }
      goto L_0894F408;
    }
L_0894F408:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_0894F414;
L_0894F414:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2616));
    ctx.set_gpr(31, 0x0894F434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x0894F434u) goto L_0894F434;
    return;
L_0894F434:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894F5A4;
      }
      goto L_0894F43C;
    }
L_0894F43C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894F450;
      }
      goto L_0894F444;
    }
L_0894F444:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F49C;
      }
      goto L_0894F450;
    }
L_0894F450:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894F488;
      }
      goto L_0894F460;
    }
L_0894F460:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894F46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894F46Cu) goto L_0894F46C;
    return;
L_0894F46C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F480;
      }
      goto L_0894F474;
    }
L_0894F474:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894F480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894F480u) goto L_0894F480;
    return;
L_0894F480:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894F488;
L_0894F488:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894F49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894F49Cu) goto L_0894F49C;
    return;
L_0894F49C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894F4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x0894F4B8u) goto L_0894F4B8;
    return;
L_0894F4B8:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F4E8;
      }
      goto L_0894F4D4;
    }
L_0894F4D4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x0894F4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0894F4E0u) goto L_0894F4E0;
    return;
L_0894F4E0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0894F4E8;
L_0894F4E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F508;
      }
      goto L_0894F4F0;
    }
L_0894F4F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x0894F4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0894F4FCu) goto L_0894F4FC;
    return;
L_0894F4FC:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894F508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0894F508u) goto L_0894F508;
    return;
L_0894F508:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F52C;
      }
      goto L_0894F518;
    }
L_0894F518:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894F524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0894F524u) goto L_0894F524;
    return;
L_0894F524:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0894F52C;
L_0894F52C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F544;
      }
      goto L_0894F534;
    }
L_0894F534:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0894F544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0894F544u) goto L_0894F544;
    return;
L_0894F544:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F578;
      }
      goto L_0894F55C;
    }
L_0894F55C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F578;
      }
      goto L_0894F574;
    }
L_0894F574:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0894F578;
L_0894F578:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F5A4;
      }
      goto L_0894F580;
    }
L_0894F580:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894F5A4;
      }
      goto L_0894F598;
    }
L_0894F598:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894F5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894F5A4u) goto L_0894F5A4;
    return;
L_0894F5A4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F5D0;
      }
      goto L_0894F5B4;
    }
L_0894F5B4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F5D0;
      }
      goto L_0894F5CC;
    }
L_0894F5CC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0894F5D0;
L_0894F5D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F5FC;
      }
      goto L_0894F5D8;
    }
L_0894F5D8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894F5FC;
      }
      goto L_0894F5F0;
    }
L_0894F5F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894F5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894F5FCu) goto L_0894F5FC;
    return;
L_0894F5FC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0894F600;
L_0894F600:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894F3C0;
      }
      goto L_0894F60C;
    }
L_0894F60C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0894F610;
L_0894F610:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894F394;
      }
      goto L_0894F61C;
    }
L_0894F61C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F638;
      }
      goto L_0894F62C;
    }
L_0894F62C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894F638;
L_0894F638:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F64C;
      }
      goto L_0894F644;
    }
L_0894F644:
    ctx.set_gpr(31, 0x0894F64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894F64Cu) goto L_0894F64C;
    return;
L_0894F64C:
    ctx.set_gpr(2, 0u + 0u);
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
L_0894F684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894F69Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894F69Cu) goto L_0894F69C;
    return;
L_0894F69C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894F6AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(17, ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894F6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894F6DCu) goto L_0894F6DC;
    return;
L_0894F6DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0894F6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 188u, 0x08904C78u>(ctx, &aot_mem) && ctx.pc == 0x0894F6F4u) goto L_0894F6F4;
    return;
L_0894F6F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
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
L_0894F72C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(17, ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894F75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894F75Cu) goto L_0894F75C;
    return;
L_0894F75C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0894F774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 188u, 0x08904C78u>(ctx, &aot_mem) && ctx.pc == 0x0894F774u) goto L_0894F774;
    return;
L_0894F774:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
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
L_0894F7AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F808;
      }
      goto L_0894F7F4;
    }
L_0894F7F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F81C;
      }
      goto L_0894F808;
    }
L_0894F808:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0894F81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894F81Cu) goto L_0894F81C;
    return;
L_0894F81C:
    ctx.set_gpr(3, ctx.gpr[18] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F864;
      }
      goto L_0894F850;
    }
L_0894F850:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F878;
      }
      goto L_0894F864;
    }
L_0894F864:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0894F878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894F878u) goto L_0894F878;
    return;
L_0894F878:
    ctx.set_gpr(3, ctx.gpr[18] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894F8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894F8B0u) goto L_0894F8B0;
    return;
L_0894F8B0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894F8C8u);
    // nop
    goto L_0894C838;
L_0894F8C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0894F8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0894F8DCu) goto L_0894F8DC;
    return;
L_0894F8DC:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F8F4;
      }
      goto L_0894F8F0;
    }
L_0894F8F0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_0894F8F4;
L_0894F8F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894F938u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894F938u) goto L_0894F938;
    return;
L_0894F938:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894F94Cu);
    // nop
    goto L_0894FAB4;
L_0894F94C:
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2616));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894F97C;
      }
      goto L_0894F970;
    }
L_0894F970:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F9CC;
      }
      goto L_0894F97C;
    }
L_0894F97C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894F9B4;
      }
      goto L_0894F98C;
    }
L_0894F98C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894F998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894F998u) goto L_0894F998;
    return;
L_0894F998:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894F9AC;
      }
      goto L_0894F9A0;
    }
L_0894F9A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894F9ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894F9ACu) goto L_0894F9AC;
    return;
L_0894F9AC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894F9B4;
L_0894F9B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2616));
    ctx.set_gpr(31, 0x0894F9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894F9CCu) goto L_0894F9CC;
    return;
L_0894F9CC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x0894F9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894F9E0u) goto L_0894F9E0;
    return;
L_0894F9E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0894F9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 188u, 0x08904C78u>(ctx, &aot_mem) && ctx.pc == 0x0894F9F8u) goto L_0894F9F8;
    return;
L_0894F9F8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FA24;
      }
      goto L_0894FA08;
    }
L_0894FA08:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FA24;
      }
      goto L_0894FA20;
    }
L_0894FA20:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0894FA24;
L_0894FA24:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FA50;
      }
      goto L_0894FA2C;
    }
L_0894FA2C:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894FA50;
      }
      goto L_0894FA44;
    }
L_0894FA44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894FA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894FA50u) goto L_0894FA50;
    return;
L_0894FA50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FA8C;
      }
      goto L_0894FA64;
    }
L_0894FA64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894FA8C;
      }
      goto L_0894FA6C;
    }
L_0894FA6C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FA8C;
      }
      goto L_0894FA78;
    }
L_0894FA78:
    ctx.set_gpr(4, ctx.gpr[4] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_0894FA8C;
L_0894FA8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894FAB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2616));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894FAE8;
      }
      goto L_0894FADC;
    }
L_0894FADC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FB38;
      }
      goto L_0894FAE8;
    }
L_0894FAE8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894FB20;
      }
      goto L_0894FAF8;
    }
L_0894FAF8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894FB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894FB04u) goto L_0894FB04;
    return;
L_0894FB04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FB18;
      }
      goto L_0894FB0C;
    }
L_0894FB0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894FB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894FB18u) goto L_0894FB18;
    return;
L_0894FB18:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894FB20;
L_0894FB20:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2616));
    ctx.set_gpr(31, 0x0894FB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894FB38u) goto L_0894FB38;
    return;
L_0894FB38:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0894FB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894FB4Cu) goto L_0894FB4C;
    return;
L_0894FB4C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0894FB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 188u, 0x08904C78u>(ctx, &aot_mem) && ctx.pc == 0x0894FB64u) goto L_0894FB64;
    return;
L_0894FB64:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FB90;
      }
      goto L_0894FB74;
    }
L_0894FB74:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FB90;
      }
      goto L_0894FB8C;
    }
L_0894FB8C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0894FB90;
L_0894FB90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FBBC;
      }
      goto L_0894FB98;
    }
L_0894FB98:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894FBBC;
      }
      goto L_0894FBB0;
    }
L_0894FBB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894FBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894FBBCu) goto L_0894FBBC;
    return;
L_0894FBBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
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
L_0894FBF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(17, ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894FC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894FC18u) goto L_0894FC18;
    return;
L_0894FC18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0894FC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 188u, 0x08904C78u>(ctx, &aot_mem) && ctx.pc == 0x0894FC30u) goto L_0894FC30;
    return;
L_0894FC30:
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
L_0894FC48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
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
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FCA0;
      }
      goto L_0894FC94;
    }
L_0894FC94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894FCA0;
L_0894FCA0:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FF64;
      }
      goto L_0894FCAC;
    }
L_0894FCAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0894FCB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0894FCB8u) goto L_0894FCB8;
    return;
L_0894FCB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894FCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 236u, 0x088E52F4u>(ctx, &aot_mem) && ctx.pc == 0x0894FCC4u) goto L_0894FCC4;
    return;
L_0894FCC4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894FD04;
      }
      goto L_0894FCE0;
    }
L_0894FCE0:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894FD04;
      }
      goto L_0894FCE8;
    }
L_0894FCE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FD08;
      }
      goto L_0894FD04;
    }
L_0894FD04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    goto L_0894FD08;
L_0894FD08:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894FD44;
      }
      goto L_0894FD14;
    }
L_0894FD14:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0894FD2Cu);
    // nop
    goto L_0894F6AC;
L_0894FD2C:
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[22] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FD70;
      }
      goto L_0894FD44;
    }
L_0894FD44:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0894FD58u);
    // nop
    goto L_0894F6AC;
L_0894FD58:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + 0u);
    goto L_0894FD70;
L_0894FD70:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FD8C;
      }
      goto L_0894FD84;
    }
L_0894FD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FDA0;
      }
      goto L_0894FD8C;
    }
L_0894FD8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(10, ctx.gpr[2] + ctx.gpr[3]);
    goto L_0894FDA0;
L_0894FDA0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x0894FDC0u);
    // nop
    goto L_0894F278;
L_0894FDC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894FF3C;
      }
      goto L_0894FDC8;
    }
L_0894FDC8:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2520));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894FDF0;
      }
      goto L_0894FDE4;
    }
L_0894FDE4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FE40;
      }
      goto L_0894FDF0;
    }
L_0894FDF0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894FE28;
      }
      goto L_0894FE00;
    }
L_0894FE00:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894FE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894FE0Cu) goto L_0894FE0C;
    return;
L_0894FE0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FE20;
      }
      goto L_0894FE14;
    }
L_0894FE14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894FE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894FE20u) goto L_0894FE20;
    return;
L_0894FE20:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894FE28;
L_0894FE28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2520));
    ctx.set_gpr(31, 0x0894FE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894FE40u) goto L_0894FE40;
    return;
L_0894FE40:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FE64;
      }
      goto L_0894FE50;
    }
L_0894FE50:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0894FE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0894FE5Cu) goto L_0894FE5C;
    return;
L_0894FE5C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0894FE64;
L_0894FE64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FE84;
      }
      goto L_0894FE6C;
    }
L_0894FE6C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0894FE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0894FE78u) goto L_0894FE78;
    return;
L_0894FE78:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894FE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x0894FE84u) goto L_0894FE84;
    return;
L_0894FE84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FEA8;
      }
      goto L_0894FE94;
    }
L_0894FE94:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x0894FEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0894FEA0u) goto L_0894FEA0;
    return;
L_0894FEA0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0894FEA8;
L_0894FEA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FEC0;
      }
      goto L_0894FEB0;
    }
L_0894FEB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0894FEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0894FEC0u) goto L_0894FEC0;
    return;
L_0894FEC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FEF4;
      }
      goto L_0894FED8;
    }
L_0894FED8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FEF4;
      }
      goto L_0894FEF0;
    }
L_0894FEF0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0894FEF4;
L_0894FEF4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FF20;
      }
      goto L_0894FEFC;
    }
L_0894FEFC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894FF20;
      }
      goto L_0894FF14;
    }
L_0894FF14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894FF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894FF20u) goto L_0894FF20;
    return;
L_0894FF20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FF8C;
      }
      goto L_0894FF2C;
    }
L_0894FF2C:
    ctx.set_gpr(31, 0x0894FF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894FF34u) goto L_0894FF34;
    return;
L_0894FF34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FF8C;
      }
      goto L_0894FF3C;
    }
L_0894FF3C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0894FF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0894FF4Cu) goto L_0894FF4C;
    return;
L_0894FF4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FF60;
      }
      goto L_0894FF58;
    }
L_0894FF58:
    ctx.set_gpr(31, 0x0894FF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894FF60u) goto L_0894FF60;
    return;
L_0894FF60:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894FF64;
L_0894FF64:
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894FCAC;
      }
      goto L_0894FF74;
    }
L_0894FF74:
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894FF8C;
      }
      goto L_0894FF80;
    }
L_0894FF80:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894FCAC;
      }
      goto L_0894FF8C;
    }
L_0894FF8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894FFA0;
      }
      goto L_0894FF98;
    }
L_0894FF98:
    ctx.set_gpr(31, 0x0894FFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894FFA0u) goto L_0894FFA0;
    return;
L_0894FFA0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894FFD4:
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
    ctx.pc = 0x08950000u; return;
}

void recomp_unit_0082(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0082_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_82(Runtime &runtime) {
    runtime.register_generated_unit(82u, 0x0894C000u, 16384u, &recomp_unit_0082, &recomp_unit_0082_entry);
    runtime.register_function(0x0894C000u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C00Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C018u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C02Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C034u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C040u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C050u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C064u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C09Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C0A8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C0B4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C0C8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C0D8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C104u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C110u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C128u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C130u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C13Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C144u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C168u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C174u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C17Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C194u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C19Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C1A8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C1B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C1C4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C1E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C1F8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C204u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C214u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C21Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C228u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C238u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C250u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C25Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C26Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C274u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C280u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C290u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C298u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C2B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C2C0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C2D4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C2E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C2E4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C2F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C2F8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C308u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C314u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C31Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C32Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C348u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C368u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C370u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C378u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C394u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C3A0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C3B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C3BCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C3D8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C3E8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C3F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C3FCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C420u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C428u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C434u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C444u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C454u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C468u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C474u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C480u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C484u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C490u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C49Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C4A0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C4B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C4BCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C4D0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C4D8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C4E4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C4E8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C4F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C4FCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C504u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C510u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C520u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C52Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C530u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C550u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C588u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C590u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C5ACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C5BCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C5C8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C5D0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C5DCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C5E8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C5F8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C614u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C628u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C63Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C678u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C68Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C6A0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C6D4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C6E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C6F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C6FCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C704u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C710u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C718u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C730u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C754u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C76Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C77Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C794u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C798u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C7A0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C7B8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C7C4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C800u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C814u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C818u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C838u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C888u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C890u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C89Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C8B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C8B8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C8CCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C8D4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C8E8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C8F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C900u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C914u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C93Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C954u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C958u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C964u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C96Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C978u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C988u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C994u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C9A4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C9D0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C9ECu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894C9F8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CA00u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CA08u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CA14u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CA20u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CA30u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CA3Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CA44u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CA4Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CA5Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CA70u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CA98u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CACCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CAECu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CB08u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CB14u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CB20u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CB3Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CB48u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CB58u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CB78u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CB88u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CB9Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CBACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CBB8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CBD4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CBE4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CBECu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CBF8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CC10u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CC20u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CC2Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CC34u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CC38u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CC64u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CC8Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CCACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CCBCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CCC8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CCD0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CCDCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CCE8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CCF4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CD10u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CD1Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CD28u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CD3Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CD5Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CD6Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CD80u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CD90u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CD9Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CDB8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CDC8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CDD0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CDDCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CDF4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CDF8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CE18u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CE20u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CE34u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CE3Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CE48u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CE50u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CE64u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CE6Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CEB0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CECCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CED8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CEF8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CF04u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CF10u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CF18u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CF20u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CF30u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CF54u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CF74u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CF7Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CF84u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CF94u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CFACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CFB4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CFD0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CFDCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CFECu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894CFF8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D000u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D00Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D014u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D02Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D040u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D04Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D054u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D05Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D068u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D074u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D084u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D090u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D098u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D0A0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D0B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D0C8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D0E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D0E4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D0ECu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D104u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D110u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D11Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D138u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D154u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D170u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D17Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D188u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D194u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D1A8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D1BCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D1C4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D1D0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D1D8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D1E8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D200u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D230u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D26Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D28Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D298u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D2A8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D2F8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D304u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D310u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D31Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D330u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D344u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D34Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D358u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D360u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D370u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D388u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D3B8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D3F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D414u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D420u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D434u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D43Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D448u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D460u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D468u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D484u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D490u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D4A0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D4ACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D4B4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D4C0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D4C8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D4E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D4F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D500u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D508u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D510u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D51Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D528u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D538u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D544u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D54Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D554u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D564u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D57Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D594u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D598u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D5A0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D5B8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D5C4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D5D0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D5D8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D5E8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D5F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D628u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D674u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D68Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D6ACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D6B8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D6C4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D6D8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D6F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D708u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D710u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D724u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D73Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D75Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D76Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D7A4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D7F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D7FCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D80Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D818u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D820u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D82Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D834u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D848u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D85Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D874u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D888u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D8A0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D8A4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D8ACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D8C4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D8D0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D8D8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D8E4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D8F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D8F8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D924u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D92Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D930u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D938u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D954u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D960u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D96Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D974u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D990u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D99Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D9A4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D9B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D9B8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D9CCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D9E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D9ECu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D9F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894D9FCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DA0Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DA2Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DA38u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DA40u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DA4Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DA54u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DA68u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DA7Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DA88u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DA90u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DA98u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DAA8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DAACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DAB8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DAC0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DACCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DAD8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DB00u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DB20u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DB28u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DB38u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DB60u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DB80u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DB8Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DB90u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DBA0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DBA8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DBB0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DBC0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DBC4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DBE0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DC00u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DC10u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DC30u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DC34u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DC48u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DC54u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DC70u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DCA0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DCACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DCB8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DCC4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DCD0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DCDCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DCE4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DD00u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DD10u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DD1Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DD24u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DD34u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DD40u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DD4Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DD54u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DD74u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DDB8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DDC4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DDD0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DDF4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DE14u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DE20u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DE2Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DE38u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DE44u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DE50u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DE68u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DE70u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DE7Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DE84u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DE90u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DEB4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DED8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DEE0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DEF0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DF10u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DF28u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DF34u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DF40u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DF48u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DF50u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DF68u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DF70u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DF7Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DF84u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DF90u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DFB4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DFD8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DFE0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894DFF0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E004u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E010u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E018u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E01Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E024u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E028u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E03Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E07Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E094u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E0A4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E0BCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E0D4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E0E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E0F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E100u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E108u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E114u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E11Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E128u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E13Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E164u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E17Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E190u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E1A8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E1D8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E1FCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E208u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E214u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E224u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E248u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E284u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E290u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E298u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E2A4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E2B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E2CCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E2E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E2F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E300u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E30Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E314u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E334u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E344u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E350u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E358u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E37Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E398u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E3B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E3B8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E3C8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E3D0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E3E4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E3F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E414u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E420u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E42Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E43Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E448u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E458u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E464u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E46Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E474u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E480u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E4A4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E4B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E4BCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E4C8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E4D4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E4E4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E4F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E4F8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E50Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E520u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E544u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E54Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E55Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E570u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E57Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E584u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E590u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E598u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E5A4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E5ACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E5C4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E5E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E610u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E624u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E634u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E640u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E648u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E668u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E674u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E67Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E690u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E6D8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E6E4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E6F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E6FCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E724u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E738u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E748u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E778u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E798u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E7B4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E7C0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E7CCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E830u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E844u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E858u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E86Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E880u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E894u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E89Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E8B4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E8D0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E8E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E8F8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E8FCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E918u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E970u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E978u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E994u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E9A4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E9C8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E9D4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894E9F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EA0Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EA28u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EA98u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EAA4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EAACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EADCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EB0Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EB24u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EB3Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EB54u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EB6Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EB84u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EBA0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EBE4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EBFCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EC14u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EC20u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EC3Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EC54u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EC90u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894ECB0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894ECC4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894ECD8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894ED00u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894ED20u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894ED34u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894ED48u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894ED84u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894ED90u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EDA0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EDACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EDB4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EDC0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EDC8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EDDCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EDF0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EE08u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EE18u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EE30u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EE34u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EE3Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EE54u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EE60u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EE68u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EE74u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EE8Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EEA0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EEACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EEB8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EEF0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EF3Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EF54u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EF74u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EF90u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EFA4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EFC8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EFE0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EFE4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EFECu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894EFF8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F01Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F034u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F04Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F074u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F090u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F0B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F0C8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F0F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F108u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F120u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F124u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F12Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F144u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F150u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F154u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F164u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F168u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F178u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F184u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F19Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F1D4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F1E8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F1F8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F200u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F20Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F21Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F228u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F24Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F250u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F25Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F264u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F270u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F278u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F2A8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F2B8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F2C0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F2D0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F2D8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F2E8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F2F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F2F8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F300u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F304u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F328u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F364u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F370u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F37Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F394u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F3B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F3C0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F3E4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F3FCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F400u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F408u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F414u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F434u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F43Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F444u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F450u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F460u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F46Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F474u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F480u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F488u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F49Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F4B8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F4D4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F4E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F4E8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F4F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F4FCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F508u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F518u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F524u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F52Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F534u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F544u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F55Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F574u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F578u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F580u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F598u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F5A4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F5B4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F5CCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F5D0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F5D8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F5F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F5FCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F600u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F60Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F610u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F61Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F62Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F638u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F644u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F64Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F684u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F69Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F6ACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F6DCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F6F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F72Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F75Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F774u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F7ACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F7F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F808u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F81Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F850u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F864u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F878u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F8B0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F8C8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F8DCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F8F0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F8F4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F938u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F94Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F970u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F97Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F98Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F998u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F9A0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F9ACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F9B4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F9CCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F9E0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894F9F8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FA08u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FA20u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FA24u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FA2Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FA44u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FA50u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FA64u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FA6Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FA78u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FA8Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FAB4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FADCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FAE8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FAF8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FB04u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FB0Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FB18u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FB20u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FB38u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FB4Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FB64u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FB74u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FB8Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FB90u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FB98u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FBB0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FBBCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FBF0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FC18u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FC30u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FC48u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FC94u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FCA0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FCACu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FCB8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FCC4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FCE0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FCE8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FD04u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FD08u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FD14u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FD2Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FD44u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FD58u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FD70u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FD84u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FD8Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FDA0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FDC0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FDC8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FDE4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FDF0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FE00u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FE0Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FE14u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FE20u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FE28u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FE40u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FE50u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FE5Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FE64u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FE6Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FE78u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FE84u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FE94u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FEA0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FEA8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FEB0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FEC0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FED8u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FEF0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FEF4u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FEFCu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FF14u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FF20u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FF2Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FF34u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FF3Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FF4Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FF58u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FF60u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FF64u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FF74u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FF80u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FF8Cu, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FF98u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FFA0u, &recomp_unit_0082, "recomp_unit_0082");
    runtime.register_function(0x0894FFD4u, &recomp_unit_0082, "recomp_unit_0082");
}
} // namespace psprecomp
