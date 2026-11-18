#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0036[4088] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 8, 9, 0, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 14, 15, 0, 16, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0,
    0, 0, 0, 27, 28, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 38, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 0, 60,
    0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 66, 0, 67, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 0,
    72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 81,
    0, 82, 0, 0, 0, 83, 0, 84, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92,
    0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99,
    100, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 107, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 115, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 119, 120, 0, 0, 121, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0,
    130, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 0, 141,
    0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0,
    0, 0, 159, 0, 160, 0, 0, 161, 162, 0, 163, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 0, 170, 0, 171, 0, 172,
    0, 173, 0, 0, 174, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0,
    0, 185, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198,
    0, 199, 200, 0, 201, 202, 0, 203, 204, 0, 205, 206, 0, 207, 208, 0, 209, 210, 0, 211, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 0,
    0, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0,
    232, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 242, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251,
    0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 258, 0, 259, 0, 0, 0, 0, 260,
    0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 264, 0, 265, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0,
    270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285,
    0, 286, 287, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 290, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 305, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0,
    315, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 323, 324, 0, 0, 325, 0, 0, 326, 0, 327, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 0, 336, 0, 337, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 340, 341, 0, 342, 343, 0, 344, 345, 0, 346, 347, 0, 348, 349, 0, 350,
    351, 0, 352, 353, 0, 354, 0, 355, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363,
    0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 382, 383, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0,
    0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 396, 0, 0, 397, 0, 0, 0, 398, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    0, 0, 0, 402, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 412, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416,
    0, 0, 0, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 0, 426, 0, 0, 427, 0, 428, 0, 429, 0,
    430, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0,
    436, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443,
    0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 448, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0,
    451, 0, 0, 452, 453, 0, 0, 0, 0, 454, 0, 0, 0, 455, 456, 0, 457, 0, 0, 458, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0,
    0, 465, 0, 466, 0, 0, 0, 467, 0, 468, 0, 0, 469, 0, 470, 0, 471, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 475,
    0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 479, 0, 480, 0, 0, 0, 0, 0, 481, 482, 0, 0, 0, 0, 0,
    483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 496, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 501, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 507, 0, 0, 0, 0, 508,
    0, 0, 0, 509, 0, 510, 0, 511, 0, 0, 512, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 517, 0, 518, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 524, 0, 0,
    525, 0, 0, 0, 526, 527, 0, 528, 0, 529, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0,
    0, 0, 0, 0, 534, 0, 0, 535, 0, 536, 0, 0, 537, 0, 538, 0, 0, 539, 0, 0, 540, 541, 542, 0, 0, 0, 0, 0, 543, 0, 544, 0,
    545, 0, 546, 0, 547, 0, 0, 548, 549, 0, 0, 0, 0, 550, 0, 0, 0, 551, 552, 0, 553, 0, 0, 554, 555, 0, 556, 0, 0, 0, 0, 0,
    0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 560, 0, 561, 0, 562, 0, 0, 563, 0, 564, 0, 565, 0, 566, 0, 0, 567, 0,
    568, 0, 569, 0, 0, 570, 571, 0, 0, 0, 0, 572, 0, 0, 0, 573, 574, 0, 575, 0, 0, 576, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0,
    0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 585, 586, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 589, 0, 590, 0, 591, 0, 592, 0, 0, 0, 0, 0, 593,
    0, 594, 0, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 597, 0, 598, 0, 599, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 610, 611, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 615,
    0, 616, 0, 0, 0, 0, 617, 0, 618, 0, 619, 620, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 0, 625, 626, 0, 0,
    627, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 631, 0, 0, 632, 633, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 637,
    0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 642, 0, 643, 0, 0, 0, 0,
    0, 644, 0, 0, 645, 0, 646, 0, 0, 647, 648, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0,
    0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0,
    0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 677, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0,
    680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0,
    0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 692, 0, 693, 0, 0, 0,
    0, 694, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 700,
    701, 0, 702, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 705, 706, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 712, 0, 0, 0, 0,
    713, 0, 0, 0, 714, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 718, 0, 719, 0, 0, 720, 0, 721, 0, 722, 0, 0, 0, 723, 0,
    0, 724, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 731, 0, 732, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 735, 0, 736, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0,
    0, 0, 739, 0, 740, 0, 0, 741, 742, 0, 743, 744, 0, 745, 746, 0, 747, 748, 0, 749, 750, 0, 751, 752, 0, 753, 754, 0, 755, 0, 756, 0,
    757, 0, 758, 0, 0, 0, 0, 0, 759, 0, 760, 0, 761, 0, 762, 0, 763, 0, 764, 0, 765, 0, 766, 0, 767, 0, 768, 0, 769, 0, 770, 0,
    771, 0, 772, 0, 773, 0, 774, 0, 775, 0, 0, 0, 0, 776, 0, 0, 777, 0, 778, 0, 0, 0, 779, 0, 0, 780, 0, 0, 0, 781, 0, 0,
    782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0,
    0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 789, 0, 790, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 793, 0,
    794, 0, 0, 0, 795, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    797, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 799, 0, 800, 0, 801, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803,
    0, 0, 0, 0, 0, 804, 0, 0, 0, 805, 806, 0, 0, 807, 0, 0, 808, 0, 809, 0, 0, 810, 0, 0, 811, 0, 0, 812, 0, 0, 813, 0,
    814, 815, 0, 0, 816, 0, 0, 0, 0, 0, 817, 0, 0, 0, 818, 819, 0, 0, 820, 0, 0, 821, 0, 822, 0, 0, 823, 0, 0, 824, 0, 0,
    825, 0, 0, 826, 0, 827, 0, 828, 0, 0, 0, 0, 0, 829, 0, 0, 0, 830, 831, 0, 0, 832, 0, 0, 833, 0, 834, 0, 0, 835, 0, 0,
    836, 0, 0, 837, 0, 0, 838, 0, 839, 840, 0, 0, 841, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 0, 845, 0, 846, 0, 0, 847, 0, 0,
    0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 850, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0,
    856, 857, 0, 0, 0, 0, 0, 858, 0, 859, 0, 860, 0, 861, 0, 862, 0, 0, 863, 0, 864, 0, 0, 865, 0, 866, 0, 867, 0, 868, 0, 869,
    0, 0, 870, 871, 0, 0, 872, 0, 873, 0, 874, 0, 875, 0, 876, 0, 0, 877, 878, 0, 0, 879, 0, 880, 0, 881, 0, 882, 0, 883, 0, 0,
    884, 885, 0, 0, 886, 0, 887, 0, 0, 0, 0, 0, 888, 889, 0, 890, 0, 0, 891, 0, 892, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 893, 0, 0, 0, 0, 0, 894, 895, 0, 0, 0, 0, 0, 896, 0, 0, 897, 0, 898,
};
void recomp_unit_0036_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08894018u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0036[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08894018;
    case 2u: goto L_08894058;
    case 3u: goto L_08894078;
    case 4u: goto L_088940B0;
    case 5u: goto L_088940BC;
    case 6u: goto L_088940D0;
    case 7u: goto L_088940E8;
    case 8u: goto L_088940F4;
    case 9u: goto L_088940F8;
    case 10u: goto L_0889410C;
    case 11u: goto L_08894124;
    case 12u: goto L_0889413C;
    case 13u: goto L_08894158;
    case 14u: goto L_08894160;
    case 15u: goto L_08894164;
    case 16u: goto L_0889416C;
    case 17u: goto L_08894170;
    case 18u: goto L_088941B4;
    case 19u: goto L_088941BC;
    case 20u: goto L_088941C4;
    case 21u: goto L_088941CC;
    case 22u: goto L_088941D8;
    case 23u: goto L_088941EC;
    case 24u: goto L_088941F0;
    case 25u: goto L_08894204;
    case 26u: goto L_0889420C;
    case 27u: goto L_08894224;
    case 28u: goto L_08894228;
    case 29u: goto L_08894234;
    case 30u: goto L_0889423C;
    case 31u: goto L_08894244;
    case 32u: goto L_0889425C;
    case 33u: goto L_08894274;
    case 34u: goto L_08894288;
    case 35u: goto L_0889429C;
    case 36u: goto L_088942A4;
    case 37u: goto L_088942C0;
    case 38u: goto L_088942C4;
    case 39u: goto L_088942CC;
    case 40u: goto L_088942D4;
    case 41u: goto L_088942DC;
    case 42u: goto L_088942F0;
    case 43u: goto L_088942F8;
    case 44u: goto L_08894308;
    case 45u: goto L_08894318;
    case 46u: goto L_08894328;
    case 47u: goto L_08894338;
    case 48u: goto L_08894348;
    case 49u: goto L_08894358;
    case 50u: goto L_08894368;
    case 51u: goto L_08894378;
    case 52u: goto L_08894384;
    case 53u: goto L_088943B8;
    case 54u: goto L_088943C0;
    case 55u: goto L_088943DC;
    case 56u: goto L_088943EC;
    case 57u: goto L_088943F4;
    case 58u: goto L_088943FC;
    case 59u: goto L_08894408;
    case 60u: goto L_08894414;
    case 61u: goto L_08894420;
    case 62u: goto L_08894428;
    case 63u: goto L_0889443C;
    case 64u: goto L_08894448;
    case 65u: goto L_08894454;
    case 66u: goto L_08894458;
    case 67u: goto L_08894460;
    case 68u: goto L_08894470;
    case 69u: goto L_08894478;
    case 70u: goto L_08894480;
    case 71u: goto L_0889448C;
    case 72u: goto L_08894498;
    case 73u: goto L_088944B0;
    case 74u: goto L_088944C0;
    case 75u: goto L_088944C8;
    case 76u: goto L_088944D0;
    case 77u: goto L_088944D8;
    case 78u: goto L_088944F4;
    case 79u: goto L_088944FC;
    case 80u: goto L_08894504;
    case 81u: goto L_08894514;
    case 82u: goto L_0889451C;
    case 83u: goto L_0889452C;
    case 84u: goto L_08894534;
    case 85u: goto L_0889453C;
    case 86u: goto L_08894544;
    case 87u: goto L_08894550;
    case 88u: goto L_0889456C;
    case 89u: goto L_08894574;
    case 90u: goto L_0889457C;
    case 91u: goto L_0889458C;
    case 92u: goto L_08894594;
    case 93u: goto L_088945A4;
    case 94u: goto L_088945AC;
    case 95u: goto L_088945B4;
    case 96u: goto L_088945BC;
    case 97u: goto L_08894778;
    case 98u: goto L_08894784;
    case 99u: goto L_08894794;
    case 100u: goto L_08894798;
    case 101u: goto L_088947A0;
    case 102u: goto L_088947A8;
    case 103u: goto L_088947B0;
    case 104u: goto L_088947BC;
    case 105u: goto L_088947C4;
    case 106u: goto L_088947F0;
    case 107u: goto L_088947F4;
    case 108u: goto L_088947FC;
    case 109u: goto L_08894828;
    case 110u: goto L_08894834;
    case 111u: goto L_08894860;
    case 112u: goto L_08894884;
    case 113u: goto L_088948B0;
    case 114u: goto L_088948C8;
    case 115u: goto L_088948CC;
    case 116u: goto L_088948D8;
    case 117u: goto L_088948E0;
    case 118u: goto L_088948E8;
    case 119u: goto L_08894900;
    case 120u: goto L_08894904;
    case 121u: goto L_08894910;
    case 122u: goto L_08894918;
    case 123u: goto L_0889493C;
    case 124u: goto L_08894950;
    case 125u: goto L_08894958;
    case 126u: goto L_08894960;
    case 127u: goto L_08894974;
    case 128u: goto L_08894988;
    case 129u: goto L_08894990;
    case 130u: goto L_08894998;
    case 131u: goto L_088949A4;
    case 132u: goto L_088949B0;
    case 133u: goto L_088949B8;
    case 134u: goto L_088949CC;
    case 135u: goto L_088949D4;
    case 136u: goto L_088949E4;
    case 137u: goto L_088949EC;
    case 138u: goto L_088949F8;
    case 139u: goto L_08894A04;
    case 140u: goto L_08894A0C;
    case 141u: goto L_08894A14;
    case 142u: goto L_08894A1C;
    case 143u: goto L_08894A24;
    case 144u: goto L_08894A40;
    case 145u: goto L_08894A48;
    case 146u: goto L_08894AB4;
    case 147u: goto L_08894AE8;
    case 148u: goto L_08894B00;
    case 149u: goto L_08894B08;
    case 150u: goto L_08894B2C;
    case 151u: goto L_08894B40;
    case 152u: goto L_08894B4C;
    case 153u: goto L_08894B58;
    case 154u: goto L_08894B64;
    case 155u: goto L_08894B6C;
    case 156u: goto L_08894B7C;
    case 157u: goto L_08894B84;
    case 158u: goto L_08894B8C;
    case 159u: goto L_08894BA0;
    case 160u: goto L_08894BA8;
    case 161u: goto L_08894BB4;
    case 162u: goto L_08894BB8;
    case 163u: goto L_08894BC0;
    case 164u: goto L_08894BC4;
    case 165u: goto L_08894BCC;
    case 166u: goto L_08894BDC;
    case 167u: goto L_08894BE4;
    case 168u: goto L_08894BEC;
    case 169u: goto L_08894BF8;
    case 170u: goto L_08894C04;
    case 171u: goto L_08894C0C;
    case 172u: goto L_08894C14;
    case 173u: goto L_08894C1C;
    case 174u: goto L_08894C28;
    case 175u: goto L_08894C34;
    case 176u: goto L_08894C3C;
    case 177u: goto L_08894C44;
    case 178u: goto L_08894C4C;
    case 179u: goto L_08894C54;
    case 180u: goto L_08894C5C;
    case 181u: goto L_08894C64;
    case 182u: goto L_08894C78;
    case 183u: goto L_08894C84;
    case 184u: goto L_08894C90;
    case 185u: goto L_08894C9C;
    case 186u: goto L_08894CA4;
    case 187u: goto L_08894CB4;
    case 188u: goto L_08894CBC;
    case 189u: goto L_08894CC8;
    case 190u: goto L_08894CD4;
    case 191u: goto L_08894CDC;
    case 192u: goto L_08894CE4;
    case 193u: goto L_08894CEC;
    case 194u: goto L_08894CF4;
    case 195u: goto L_08894CFC;
    case 196u: goto L_08894D68;
    case 197u: goto L_08894D84;
    case 198u: goto L_08894D94;
    case 199u: goto L_08894D9C;
    case 200u: goto L_08894DA0;
    case 201u: goto L_08894DA8;
    case 202u: goto L_08894DAC;
    case 203u: goto L_08894DB4;
    case 204u: goto L_08894DB8;
    case 205u: goto L_08894DC0;
    case 206u: goto L_08894DC4;
    case 207u: goto L_08894DCC;
    case 208u: goto L_08894DD0;
    case 209u: goto L_08894DD8;
    case 210u: goto L_08894DDC;
    case 211u: goto L_08894DE4;
    case 212u: goto L_08894DE8;
    case 213u: goto L_08894DF0;
    case 214u: goto L_08894DF8;
    case 215u: goto L_08894E00;
    case 216u: goto L_08894E08;
    case 217u: goto L_08894E20;
    case 218u: goto L_08894E28;
    case 219u: goto L_08894E30;
    case 220u: goto L_08894E38;
    case 221u: goto L_08894E40;
    case 222u: goto L_08894E48;
    case 223u: goto L_08894E50;
    case 224u: goto L_08894E58;
    case 225u: goto L_08894E60;
    case 226u: goto L_08894E68;
    case 227u: goto L_08894E70;
    case 228u: goto L_08894E78;
    case 229u: goto L_08894E80;
    case 230u: goto L_08894E88;
    case 231u: goto L_08894E90;
    case 232u: goto L_08894E98;
    case 233u: goto L_08894EA0;
    case 234u: goto L_08894EBC;
    case 235u: goto L_08894EC8;
    case 236u: goto L_08894ECC;
    case 237u: goto L_08894ED4;
    case 238u: goto L_08894EEC;
    case 239u: goto L_08894EF4;
    case 240u: goto L_08894EFC;
    case 241u: goto L_08894F18;
    case 242u: goto L_08894F24;
    case 243u: goto L_08894F28;
    case 244u: goto L_08894F30;
    case 245u: goto L_08894F48;
    case 246u: goto L_08894F50;
    case 247u: goto L_0889534C;
    case 248u: goto L_08895368;
    case 249u: goto L_08895374;
    case 250u: goto L_08895384;
    case 251u: goto L_08895394;
    case 252u: goto L_0889539C;
    case 253u: goto L_088953A4;
    case 254u: goto L_088953B8;
    case 255u: goto L_088953C0;
    case 256u: goto L_08895460;
    case 257u: goto L_08895474;
    case 258u: goto L_08895478;
    case 259u: goto L_08895480;
    case 260u: goto L_08895494;
    case 261u: goto L_0889549C;
    case 262u: goto L_088954B8;
    case 263u: goto L_088954C4;
    case 264u: goto L_088954C8;
    case 265u: goto L_088954D0;
    case 266u: goto L_088954E4;
    case 267u: goto L_088954EC;
    case 268u: goto L_088954F4;
    case 269u: goto L_08895510;
    case 270u: goto L_08895518;
    case 271u: goto L_08895530;
    case 272u: goto L_08895540;
    case 273u: goto L_08895554;
    case 274u: goto L_08895568;
    case 275u: goto L_0889557C;
    case 276u: goto L_08895590;
    case 277u: goto L_088955A4;
    case 278u: goto L_088955B8;
    case 279u: goto L_088955D0;
    case 280u: goto L_088955D8;
    case 281u: goto L_088955E0;
    case 282u: goto L_088955EC;
    case 283u: goto L_08895608;
    case 284u: goto L_08895620;
    case 285u: goto L_08895694;
    case 286u: goto L_0889569C;
    case 287u: goto L_088956A0;
    case 288u: goto L_088956B8;
    case 289u: goto L_088956C4;
    case 290u: goto L_088956CC;
    case 291u: goto L_088956D4;
    case 292u: goto L_088956E0;
    case 293u: goto L_088956E8;
    case 294u: goto L_08895728;
    case 295u: goto L_08895738;
    case 296u: goto L_08895740;
    case 297u: goto L_08895798;
    case 298u: goto L_088957A8;
    case 299u: goto L_088957B4;
    case 300u: goto L_088957D4;
    case 301u: goto L_088957D8;
    case 302u: goto L_0889581C;
    case 303u: goto L_08895868;
    case 304u: goto L_0889586C;
    case 305u: goto L_0889589C;
    case 306u: goto L_088958A8;
    case 307u: goto L_088958B0;
    case 308u: goto L_088958B8;
    case 309u: goto L_088958C0;
    case 310u: goto L_088958D8;
    case 311u: goto L_088958F0;
    case 312u: goto L_088958FC;
    case 313u: goto L_08895904;
    case 314u: goto L_08895910;
    case 315u: goto L_08895918;
    case 316u: goto L_08895920;
    case 317u: goto L_08895928;
    case 318u: goto L_08895938;
    case 319u: goto L_08895944;
    case 320u: goto L_08895954;
    case 321u: goto L_08895960;
    case 322u: goto L_088959A8;
    case 323u: goto L_088959B8;
    case 324u: goto L_088959BC;
    case 325u: goto L_088959C8;
    case 326u: goto L_088959D4;
    case 327u: goto L_088959DC;
    case 328u: goto L_088959E4;
    case 329u: goto L_088959F4;
    case 330u: goto L_08895A18;
    case 331u: goto L_08895A3C;
    case 332u: goto L_08895A54;
    case 333u: goto L_08895A64;
    case 334u: goto L_08895A74;
    case 335u: goto L_08895A7C;
    case 336u: goto L_08895A88;
    case 337u: goto L_08895A90;
    case 338u: goto L_08895ABC;
    case 339u: goto L_08895AD0;
    case 340u: goto L_08895AD8;
    case 341u: goto L_08895ADC;
    case 342u: goto L_08895AE4;
    case 343u: goto L_08895AE8;
    case 344u: goto L_08895AF0;
    case 345u: goto L_08895AF4;
    case 346u: goto L_08895AFC;
    case 347u: goto L_08895B00;
    case 348u: goto L_08895B08;
    case 349u: goto L_08895B0C;
    case 350u: goto L_08895B14;
    case 351u: goto L_08895B18;
    case 352u: goto L_08895B20;
    case 353u: goto L_08895B24;
    case 354u: goto L_08895B2C;
    case 355u: goto L_08895B34;
    case 356u: goto L_08895B3C;
    case 357u: goto L_08895B4C;
    case 358u: goto L_08895B58;
    case 359u: goto L_08895B74;
    case 360u: goto L_08895B7C;
    case 361u: goto L_08895B84;
    case 362u: goto L_08895B8C;
    case 363u: goto L_08895B94;
    case 364u: goto L_08895B9C;
    case 365u: goto L_08895BA4;
    case 366u: goto L_08895BAC;
    case 367u: goto L_08895BB4;
    case 368u: goto L_08895BBC;
    case 369u: goto L_08895BC4;
    case 370u: goto L_08895BCC;
    case 371u: goto L_08895BD4;
    case 372u: goto L_08895BDC;
    case 373u: goto L_08895BE4;
    case 374u: goto L_08895BEC;
    case 375u: goto L_08895BF4;
    case 376u: goto L_08895C24;
    case 377u: goto L_08895C2C;
    case 378u: goto L_08895C34;
    case 379u: goto L_08895C40;
    case 380u: goto L_08895C50;
    case 381u: goto L_08895C5C;
    case 382u: goto L_08895C74;
    case 383u: goto L_08895C78;
    case 384u: goto L_08895CA8;
    case 385u: goto L_08895CB4;
    case 386u: goto L_08895CC0;
    case 387u: goto L_08895CD8;
    case 388u: goto L_08895D00;
    case 389u: goto L_08895D0C;
    case 390u: goto L_08895D2C;
    case 391u: goto L_08895D38;
    case 392u: goto L_08895D40;
    case 393u: goto L_08895D54;
    case 394u: goto L_08895D5C;
    case 395u: goto L_08895D68;
    case 396u: goto L_08895D70;
    case 397u: goto L_08895D7C;
    case 398u: goto L_08895D8C;
    case 399u: goto L_08895DCC;
    case 400u: goto L_08895DDC;
    case 401u: goto L_08895E08;
    case 402u: goto L_08895E24;
    case 403u: goto L_08895E28;
    case 404u: goto L_08895E48;
    case 405u: goto L_08895E50;
    case 406u: goto L_08895E58;
    case 407u: goto L_08895E60;
    case 408u: goto L_08895E6C;
    case 409u: goto L_08895E88;
    case 410u: goto L_08895EB4;
    case 411u: goto L_08895EC0;
    case 412u: goto L_08895EC4;
    case 413u: goto L_08895EDC;
    case 414u: goto L_08895EE4;
    case 415u: goto L_08895EFC;
    case 416u: goto L_08895F14;
    case 417u: goto L_08895F28;
    case 418u: goto L_08895F30;
    case 419u: goto L_08895F38;
    case 420u: goto L_08895F40;
    case 421u: goto L_08895F48;
    case 422u: goto L_08895F50;
    case 423u: goto L_08895F58;
    case 424u: goto L_08895F60;
    case 425u: goto L_08895F68;
    case 426u: goto L_08895F74;
    case 427u: goto L_08895F80;
    case 428u: goto L_08895F88;
    case 429u: goto L_08895F90;
    case 430u: goto L_08895F98;
    case 431u: goto L_08895FA0;
    case 432u: goto L_08895FA8;
    case 433u: goto L_08896050;
    case 434u: goto L_08896058;
    case 435u: goto L_08896084;
    case 436u: goto L_08896098;
    case 437u: goto L_088960A0;
    case 438u: goto L_088960B4;
    case 439u: goto L_088960C0;
    case 440u: goto L_088960E0;
    case 441u: goto L_088960E8;
    case 442u: goto L_088960FC;
    case 443u: goto L_08896114;
    case 444u: goto L_08896128;
    case 445u: goto L_0889613C;
    case 446u: goto L_08896150;
    case 447u: goto L_08896164;
    case 448u: goto L_0889616C;
    case 449u: goto L_08896174;
    case 450u: goto L_08896188;
    case 451u: goto L_08896198;
    case 452u: goto L_088961A4;
    case 453u: goto L_088961A8;
    case 454u: goto L_088961BC;
    case 455u: goto L_088961CC;
    case 456u: goto L_088961D0;
    case 457u: goto L_088961D8;
    case 458u: goto L_088961E4;
    case 459u: goto L_088961E8;
    case 460u: goto L_08896200;
    case 461u: goto L_08896230;
    case 462u: goto L_08896254;
    case 463u: goto L_08896278;
    case 464u: goto L_08896288;
    case 465u: goto L_0889629C;
    case 466u: goto L_088962A4;
    case 467u: goto L_088962B4;
    case 468u: goto L_088962BC;
    case 469u: goto L_088962C8;
    case 470u: goto L_088962D0;
    case 471u: goto L_088962D8;
    case 472u: goto L_088962E0;
    case 473u: goto L_088962F0;
    case 474u: goto L_08896304;
    case 475u: goto L_08896314;
    case 476u: goto L_08896328;
    case 477u: goto L_0889634C;
    case 478u: goto L_08896354;
    case 479u: goto L_0889635C;
    case 480u: goto L_08896364;
    case 481u: goto L_0889637C;
    case 482u: goto L_08896380;
    case 483u: goto L_08896398;
    case 484u: goto L_088963A0;
    case 485u: goto L_088963A8;
    case 486u: goto L_088963B0;
    case 487u: goto L_088963B8;
    case 488u: goto L_088963C0;
    case 489u: goto L_088963CC;
    case 490u: goto L_088963DC;
    case 491u: goto L_088963E4;
    case 492u: goto L_088963F8;
    case 493u: goto L_08896400;
    case 494u: goto L_08896430;
    case 495u: goto L_08896438;
    case 496u: goto L_08896440;
    case 497u: goto L_08896448;
    case 498u: goto L_08896454;
    case 499u: goto L_0889647C;
    case 500u: goto L_08896488;
    case 501u: goto L_08896490;
    case 502u: goto L_088964BC;
    case 503u: goto L_088964C8;
    case 504u: goto L_088964D0;
    case 505u: goto L_088964F0;
    case 506u: goto L_088964FC;
    case 507u: goto L_08896500;
    case 508u: goto L_08896514;
    case 509u: goto L_08896524;
    case 510u: goto L_0889652C;
    case 511u: goto L_08896534;
    case 512u: goto L_08896540;
    case 513u: goto L_08896544;
    case 514u: goto L_0889655C;
    case 515u: goto L_08896570;
    case 516u: goto L_08896580;
    case 517u: goto L_08896588;
    case 518u: goto L_08896590;
    case 519u: goto L_088965B8;
    case 520u: goto L_088965C0;
    case 521u: goto L_088965E0;
    case 522u: goto L_088965F0;
    case 523u: goto L_08896604;
    case 524u: goto L_0889660C;
    case 525u: goto L_08896618;
    case 526u: goto L_08896628;
    case 527u: goto L_0889662C;
    case 528u: goto L_08896634;
    case 529u: goto L_0889663C;
    case 530u: goto L_08896648;
    case 531u: goto L_0889665C;
    case 532u: goto L_0889666C;
    case 533u: goto L_08896684;
    case 534u: goto L_088966A8;
    case 535u: goto L_088966B4;
    case 536u: goto L_088966BC;
    case 537u: goto L_088966C8;
    case 538u: goto L_088966D0;
    case 539u: goto L_088966DC;
    case 540u: goto L_088966E8;
    case 541u: goto L_088966EC;
    case 542u: goto L_088966F0;
    case 543u: goto L_08896708;
    case 544u: goto L_08896710;
    case 545u: goto L_08896718;
    case 546u: goto L_08896720;
    case 547u: goto L_08896728;
    case 548u: goto L_08896734;
    case 549u: goto L_08896738;
    case 550u: goto L_0889674C;
    case 551u: goto L_0889675C;
    case 552u: goto L_08896760;
    case 553u: goto L_08896768;
    case 554u: goto L_08896774;
    case 555u: goto L_08896778;
    case 556u: goto L_08896780;
    case 557u: goto L_088967A4;
    case 558u: goto L_088967B4;
    case 559u: goto L_088967C8;
    case 560u: goto L_088967D0;
    case 561u: goto L_088967D8;
    case 562u: goto L_088967E0;
    case 563u: goto L_088967EC;
    case 564u: goto L_088967F4;
    case 565u: goto L_088967FC;
    case 566u: goto L_08896804;
    case 567u: goto L_08896810;
    case 568u: goto L_08896818;
    case 569u: goto L_08896820;
    case 570u: goto L_0889682C;
    case 571u: goto L_08896830;
    case 572u: goto L_08896844;
    case 573u: goto L_08896854;
    case 574u: goto L_08896858;
    case 575u: goto L_08896860;
    case 576u: goto L_0889686C;
    case 577u: goto L_08896870;
    case 578u: goto L_08896878;
    case 579u: goto L_0889689C;
    case 580u: goto L_088968AC;
    case 581u: goto L_088968C0;
    case 582u: goto L_08896900;
    case 583u: goto L_08896968;
    case 584u: goto L_08896988;
    case 585u: goto L_088969B0;
    case 586u: goto L_088969B4;
    case 587u: goto L_088969C4;
    case 588u: goto L_088969E0;
    case 589u: goto L_088969E4;
    case 590u: goto L_088969EC;
    case 591u: goto L_088969F4;
    case 592u: goto L_088969FC;
    case 593u: goto L_08896A14;
    case 594u: goto L_08896A1C;
    case 595u: goto L_08896A30;
    case 596u: goto L_08896A3C;
    case 597u: goto L_08896A4C;
    case 598u: goto L_08896A54;
    case 599u: goto L_08896A5C;
    case 600u: goto L_08896A64;
    case 601u: goto L_08896A78;
    case 602u: goto L_08896A88;
    case 603u: goto L_08896BD0;
    case 604u: goto L_08896BE4;
    case 605u: goto L_08896BEC;
    case 606u: goto L_08896BF4;
    case 607u: goto L_08896C04;
    case 608u: goto L_08896C14;
    case 609u: goto L_08896C4C;
    case 610u: goto L_08896C58;
    case 611u: goto L_08896C5C;
    case 612u: goto L_08896C68;
    case 613u: goto L_08896C80;
    case 614u: goto L_08896C88;
    case 615u: goto L_08896C94;
    case 616u: goto L_08896C9C;
    case 617u: goto L_08896CB0;
    case 618u: goto L_08896CB8;
    case 619u: goto L_08896CC0;
    case 620u: goto L_08896CC4;
    case 621u: goto L_08896CD0;
    case 622u: goto L_08896CE8;
    case 623u: goto L_08896CF4;
    case 624u: goto L_08896CFC;
    case 625u: goto L_08896D08;
    case 626u: goto L_08896D0C;
    case 627u: goto L_08896D18;
    case 628u: goto L_08896D30;
    case 629u: goto L_08896D38;
    case 630u: goto L_08896D44;
    case 631u: goto L_08896D4C;
    case 632u: goto L_08896D58;
    case 633u: goto L_08896D5C;
    case 634u: goto L_08896D68;
    case 635u: goto L_08896D80;
    case 636u: goto L_08896D88;
    case 637u: goto L_08896D94;
    case 638u: goto L_08896D9C;
    case 639u: goto L_08896DA8;
    case 640u: goto L_08896DCC;
    case 641u: goto L_08896DF8;
    case 642u: goto L_08896DFC;
    case 643u: goto L_08896E04;
    case 644u: goto L_08896E1C;
    case 645u: goto L_08896E28;
    case 646u: goto L_08896E30;
    case 647u: goto L_08896E3C;
    case 648u: goto L_08896E40;
    case 649u: goto L_08896E4C;
    case 650u: goto L_08896E64;
    case 651u: goto L_08896E6C;
    case 652u: goto L_08896E78;
    case 653u: goto L_0889700C;
    case 654u: goto L_08897040;
    case 655u: goto L_0889704C;
    case 656u: goto L_08897060;
    case 657u: goto L_08897074;
    case 658u: goto L_08897088;
    case 659u: goto L_0889709C;
    case 660u: goto L_088970B0;
    case 661u: goto L_088970C4;
    case 662u: goto L_088970DC;
    case 663u: goto L_088970EC;
    case 664u: goto L_088970F8;
    case 665u: goto L_08897138;
    case 666u: goto L_08897148;
    case 667u: goto L_08897168;
    case 668u: goto L_08897174;
    case 669u: goto L_088971A8;
    case 670u: goto L_088971B8;
    case 671u: goto L_088971C4;
    case 672u: goto L_08897210;
    case 673u: goto L_08897228;
    case 674u: goto L_08897238;
    case 675u: goto L_08897258;
    case 676u: goto L_08897260;
    case 677u: goto L_08897268;
    case 678u: goto L_08897270;
    case 679u: goto L_08897280;
    case 680u: goto L_08897298;
    case 681u: goto L_088972C0;
    case 682u: goto L_088972C4;
    case 683u: goto L_088972D4;
    case 684u: goto L_088972EC;
    case 685u: goto L_088972F8;
    case 686u: goto L_08897300;
    case 687u: goto L_08897320;
    case 688u: goto L_08897330;
    case 689u: goto L_0889734C;
    case 690u: goto L_0889735C;
    case 691u: goto L_08897378;
    case 692u: goto L_08897380;
    case 693u: goto L_08897388;
    case 694u: goto L_0889739C;
    case 695u: goto L_088973BC;
    case 696u: goto L_088973D4;
    case 697u: goto L_088973DC;
    case 698u: goto L_088973F0;
    case 699u: goto L_088973F8;
    case 700u: goto L_08897414;
    case 701u: goto L_08897418;
    case 702u: goto L_08897420;
    case 703u: goto L_08897428;
    case 704u: goto L_08897430;
    case 705u: goto L_0889744C;
    case 706u: goto L_08897450;
    case 707u: goto L_08897460;
    case 708u: goto L_08897468;
    case 709u: goto L_088974CC;
    case 710u: goto L_088974F0;
    case 711u: goto L_088974F8;
    case 712u: goto L_08897504;
    case 713u: goto L_08897518;
    case 714u: goto L_08897528;
    case 715u: goto L_08897530;
    case 716u: goto L_08897544;
    case 717u: goto L_08897554;
    case 718u: goto L_0889755C;
    case 719u: goto L_08897564;
    case 720u: goto L_08897570;
    case 721u: goto L_08897578;
    case 722u: goto L_08897580;
    case 723u: goto L_08897590;
    case 724u: goto L_0889759C;
    case 725u: goto L_088975AC;
    case 726u: goto L_08897648;
    case 727u: goto L_08897654;
    case 728u: goto L_088976A8;
    case 729u: goto L_088976CC;
    case 730u: goto L_088976EC;
    case 731u: goto L_0889771C;
    case 732u: goto L_08897724;
    case 733u: goto L_0889773C;
    case 734u: goto L_08897754;
    case 735u: goto L_0889775C;
    case 736u: goto L_08897764;
    case 737u: goto L_08897774;
    case 738u: goto L_08897780;
    case 739u: goto L_088977A0;
    case 740u: goto L_088977A8;
    case 741u: goto L_088977B4;
    case 742u: goto L_088977B8;
    case 743u: goto L_088977C0;
    case 744u: goto L_088977C4;
    case 745u: goto L_088977CC;
    case 746u: goto L_088977D0;
    case 747u: goto L_088977D8;
    case 748u: goto L_088977DC;
    case 749u: goto L_088977E4;
    case 750u: goto L_088977E8;
    case 751u: goto L_088977F0;
    case 752u: goto L_088977F4;
    case 753u: goto L_088977FC;
    case 754u: goto L_08897800;
    case 755u: goto L_08897808;
    case 756u: goto L_08897810;
    case 757u: goto L_08897818;
    case 758u: goto L_08897820;
    case 759u: goto L_08897838;
    case 760u: goto L_08897840;
    case 761u: goto L_08897848;
    case 762u: goto L_08897850;
    case 763u: goto L_08897858;
    case 764u: goto L_08897860;
    case 765u: goto L_08897868;
    case 766u: goto L_08897870;
    case 767u: goto L_08897878;
    case 768u: goto L_08897880;
    case 769u: goto L_08897888;
    case 770u: goto L_08897890;
    case 771u: goto L_08897898;
    case 772u: goto L_088978A0;
    case 773u: goto L_088978A8;
    case 774u: goto L_088978B0;
    case 775u: goto L_088978B8;
    case 776u: goto L_088978CC;
    case 777u: goto L_088978D8;
    case 778u: goto L_088978E0;
    case 779u: goto L_088978F0;
    case 780u: goto L_088978FC;
    case 781u: goto L_0889790C;
    case 782u: goto L_08897918;
    case 783u: goto L_08897950;
    case 784u: goto L_08897964;
    case 785u: goto L_08897974;
    case 786u: goto L_08897984;
    case 787u: goto L_0889799C;
    case 788u: goto L_088979C8;
    case 789u: goto L_088979D4;
    case 790u: goto L_088979DC;
    case 791u: goto L_088979F4;
    case 792u: goto L_088979FC;
    case 793u: goto L_08897A10;
    case 794u: goto L_08897A18;
    case 795u: goto L_08897A28;
    case 796u: goto L_08897A30;
    case 797u: goto L_08897B18;
    case 798u: goto L_08897B3C;
    case 799u: goto L_08897B44;
    case 800u: goto L_08897B4C;
    case 801u: goto L_08897B54;
    case 802u: goto L_08897B6C;
    case 803u: goto L_08897B94;
    case 804u: goto L_08897BAC;
    case 805u: goto L_08897BBC;
    case 806u: goto L_08897BC0;
    case 807u: goto L_08897BCC;
    case 808u: goto L_08897BD8;
    case 809u: goto L_08897BE0;
    case 810u: goto L_08897BEC;
    case 811u: goto L_08897BF8;
    case 812u: goto L_08897C04;
    case 813u: goto L_08897C10;
    case 814u: goto L_08897C18;
    case 815u: goto L_08897C1C;
    case 816u: goto L_08897C28;
    case 817u: goto L_08897C40;
    case 818u: goto L_08897C50;
    case 819u: goto L_08897C54;
    case 820u: goto L_08897C60;
    case 821u: goto L_08897C6C;
    case 822u: goto L_08897C74;
    case 823u: goto L_08897C80;
    case 824u: goto L_08897C8C;
    case 825u: goto L_08897C98;
    case 826u: goto L_08897CA4;
    case 827u: goto L_08897CAC;
    case 828u: goto L_08897CB4;
    case 829u: goto L_08897CCC;
    case 830u: goto L_08897CDC;
    case 831u: goto L_08897CE0;
    case 832u: goto L_08897CEC;
    case 833u: goto L_08897CF8;
    case 834u: goto L_08897D00;
    case 835u: goto L_08897D0C;
    case 836u: goto L_08897D18;
    case 837u: goto L_08897D24;
    case 838u: goto L_08897D30;
    case 839u: goto L_08897D38;
    case 840u: goto L_08897D3C;
    case 841u: goto L_08897D48;
    case 842u: goto L_08897D50;
    case 843u: goto L_08897D60;
    case 844u: goto L_08897D68;
    case 845u: goto L_08897D78;
    case 846u: goto L_08897D80;
    case 847u: goto L_08897D8C;
    case 848u: goto L_08897DA0;
    case 849u: goto L_08897DB0;
    case 850u: goto L_08897DC0;
    case 851u: goto L_08897DC4;
    case 852u: goto L_08897DEC;
    case 853u: goto L_08897DF8;
    case 854u: goto L_08897E04;
    case 855u: goto L_08897E10;
    case 856u: goto L_08897E18;
    case 857u: goto L_08897E1C;
    case 858u: goto L_08897E34;
    case 859u: goto L_08897E3C;
    case 860u: goto L_08897E44;
    case 861u: goto L_08897E4C;
    case 862u: goto L_08897E54;
    case 863u: goto L_08897E60;
    case 864u: goto L_08897E68;
    case 865u: goto L_08897E74;
    case 866u: goto L_08897E7C;
    case 867u: goto L_08897E84;
    case 868u: goto L_08897E8C;
    case 869u: goto L_08897E94;
    case 870u: goto L_08897EA0;
    case 871u: goto L_08897EA4;
    case 872u: goto L_08897EB0;
    case 873u: goto L_08897EB8;
    case 874u: goto L_08897EC0;
    case 875u: goto L_08897EC8;
    case 876u: goto L_08897ED0;
    case 877u: goto L_08897EDC;
    case 878u: goto L_08897EE0;
    case 879u: goto L_08897EEC;
    case 880u: goto L_08897EF4;
    case 881u: goto L_08897EFC;
    case 882u: goto L_08897F04;
    case 883u: goto L_08897F0C;
    case 884u: goto L_08897F18;
    case 885u: goto L_08897F1C;
    case 886u: goto L_08897F28;
    case 887u: goto L_08897F30;
    case 888u: goto L_08897F48;
    case 889u: goto L_08897F4C;
    case 890u: goto L_08897F54;
    case 891u: goto L_08897F60;
    case 892u: goto L_08897F68;
    case 893u: goto L_08897FAC;
    case 894u: goto L_08897FC4;
    case 895u: goto L_08897FC8;
    case 896u: goto L_08897FE0;
    case 897u: goto L_08897FEC;
    case 898u: goto L_08897FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08894018:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(11, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(15, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0889416C;
      }
      goto L_08894058;
    }
L_08894058:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(24, ctx.gpr[3] | 65535u);
    ctx.set_gpr(6, ctx.gpr[2] | 32768u);
    ctx.set_gpr(19, 1u << 16u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08894078;
L_08894078:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[14] - ctx.gpr[10]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[25]);
    ctx.set_gpr(14, ctx.lo);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 15u));
    ctx.set_gpr(14, ctx.gpr[3] + ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889416C;
      }
      goto L_088940B0;
    }
L_088940B0:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_08894160;
      }
      goto L_088940BC;
    }
L_088940BC:
    ctx.set_gpr(13, ctx.gpr[9] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[14] - ctx.gpr[9]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(10, ctx.gpr[2] & ctx.gpr[24]);
      if (branch_taken) {
          goto L_088941B4;
      }
      goto L_088940D0;
    }
L_088940D0:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-32768));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889416C;
      }
      goto L_088940E8;
    }
L_088940E8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
        goto L_08894164;
    }
    goto L_088940F4;
L_088940F4:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_088940F8;
L_088940F8:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-32768));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889416C;
      }
      goto L_0889410C;
    }
L_0889410C:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-32768));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889416C;
      }
      goto L_08894124;
    }
L_08894124:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-32768));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889416C;
      }
      goto L_0889413C;
    }
L_0889413C:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889416C;
      }
      goto L_08894158;
    }
L_08894158:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
        goto L_088940F8;
    }
    goto L_08894160;
L_08894160:
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    goto L_08894164;
L_08894164:
    if (ctx.gpr[14] != 0u) {
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08894078;
    }
    goto L_0889416C;
L_0889416C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    goto L_08894170;
L_08894170:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[11]);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[15]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088941B4:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088940F4;
      }
      goto L_088941BC;
    }
L_088941BC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088940D0;
      }
      goto L_088941C4;
    }
L_088941C4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088941F0;
      }
      goto L_088941CC;
    }
L_088941CC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088940F8;
      }
      goto L_088941D8;
    }
L_088941D8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[13] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889416C;
      }
      goto L_088941EC;
    }
L_088941EC:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_088941F0;
L_088941F0:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-32768));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088940D0;
      }
      goto L_08894204;
    }
L_08894204:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    goto L_08894170;
L_0889420C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(24212));
      if (branch_taken) {
          goto L_08894234;
      }
      goto L_08894224;
    }
L_08894224:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_08894228;
L_08894228:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894234:
    ctx.set_gpr(31, 0x0889423Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x0889423Cu) goto L_0889423C;
    return;
L_0889423C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08894228;
L_08894244:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24860)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08894274;
      }
      goto L_0889425C;
    }
L_0889425C:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24860), ctx.gpr[6]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894274:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(23364));
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(31, 0x08894288u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24856), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 472u, 0x0889E870u>(ctx, &aot_mem) && ctx.pc == 0x08894288u) goto L_08894288;
    return;
L_08894288:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(9476));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0889429Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2176));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0889429Cu) goto L_0889429C;
    return;
L_0889429C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24860)));
    goto L_0889425C;
L_088942A4:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24860)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-24860), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088942CC;
      }
      goto L_088942C0;
    }
L_088942C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088942C4;
L_088942C4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088942CC:
    ctx.set_gpr(31, 0x088942D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 474u, 0x0889E8A8u>(ctx, &aot_mem) && ctx.pc == 0x088942D4u) goto L_088942D4;
    return;
L_088942D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088942C4;
L_088942DC:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(9476));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_088942F0;
L_088942F0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08894378;
      }
      goto L_088942F8;
    }
L_088942F8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08894378;
      }
      goto L_08894308;
    }
L_08894308:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08894378;
      }
      goto L_08894318;
    }
L_08894318:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08894378;
      }
      goto L_08894328;
    }
L_08894328:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08894378;
      }
      goto L_08894338;
    }
L_08894338:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08894378;
      }
      goto L_08894348;
    }
L_08894348:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08894378;
      }
      goto L_08894358;
    }
L_08894358:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08894378;
      }
      goto L_08894368;
    }
L_08894368:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_088942F0;
    }
    goto L_08894378;
L_08894378:
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[15];
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_088943B8;
      }
      goto L_08894384;
    }
L_08894384:
    ctx.set_gpr(8, ctx.gpr[4] << 4u);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(3, 32767u << 16u);
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
    ctx.set_gpr(24, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(25, 0u | 44100u);
    ctx.set_gpr(5, ctx.gpr[3] | 65535u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[24] + 0u);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(56), ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(52), ctx.gpr[25]);
    goto L_088943B8;
L_088943B8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088943C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(68));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08894414;
      }
      goto L_088943DC;
    }
L_088943DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[7]) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
        goto L_08894408;
    }
    goto L_088943EC;
L_088943EC:
    ctx.set_gpr(31, 0x088943F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088943F4u) goto L_088943F4;
    return;
L_088943F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088943FC;
L_088943FC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894408:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    goto L_088943EC;
L_08894414:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x08894420u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24252));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x08894420u) goto L_08894420;
    return;
L_08894420:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088943FC;
L_08894428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0889448C;
      }
      goto L_0889443C;
    }
L_0889443C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08894454;
      }
      goto L_08894448;
    }
L_08894448:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894470;
      }
      goto L_08894454;
    }
L_08894454:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24292));
    goto L_08894458;
L_08894458:
    ctx.set_gpr(31, 0x08894460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x08894460u) goto L_08894460;
    return;
L_08894460:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894470:
    ctx.set_gpr(31, 0x08894478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 210u, 0x08892478u>(ctx, &aot_mem) && ctx.pc == 0x08894478u) goto L_08894478;
    return;
L_08894478:
    ctx.set_gpr(31, 0x08894480u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 232u, 0x08892548u>(ctx, &aot_mem) && ctx.pc == 0x08894480u) goto L_08894480;
    return;
L_08894480:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08894460;
L_0889448C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24352));
    goto L_08894458;
L_08894498:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(24392));
      if (branch_taken) {
          goto L_088944C8;
      }
      goto L_088944B0;
    }
L_088944B0:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088944C0;
L_088944C0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088944C8:
    ctx.set_gpr(31, 0x088944D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x088944D0u) goto L_088944D0;
    return;
L_088944D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088944C0;
L_088944D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08894544;
      }
      goto L_088944F4;
    }
L_088944F4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0889453C;
      }
      goto L_088944FC;
    }
L_088944FC:
    ctx.set_gpr(31, 0x08894504u);
    // nop
    goto L_0889420C;
L_08894504:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(24468));
      if (branch_taken) {
          goto L_0889452C;
      }
      goto L_08894514;
    }
L_08894514:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0889451C;
L_0889451C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889452C:
    ctx.set_gpr(31, 0x08894534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x08894534u) goto L_08894534;
    return;
L_08894534:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0889451C;
L_0889453C:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24428));
    goto L_0889452C;
L_08894544:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24544));
    goto L_0889452C;
L_08894550:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088945BC;
      }
      goto L_0889456C;
    }
L_0889456C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_088945B4;
      }
      goto L_08894574;
    }
L_08894574:
    ctx.set_gpr(31, 0x0889457Cu);
    // nop
    goto L_0889420C;
L_0889457C:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(24624));
      if (branch_taken) {
          goto L_088945A4;
      }
      goto L_0889458C;
    }
L_0889458C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08894594;
L_08894594:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088945A4:
    ctx.set_gpr(31, 0x088945ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x088945ACu) goto L_088945AC;
    return;
L_088945AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08894594;
L_088945B4:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24584));
    goto L_088945A4;
L_088945BC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24700));
    goto L_088945A4;
L_08894778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088947B0;
      }
      goto L_08894784;
    }
L_08894784:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088947A0;
      }
      goto L_08894794;
    }
L_08894794:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08894798;
L_08894798:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088947A0:
    ctx.set_gpr(31, 0x088947A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 309u, 0x0889294Cu>(ctx, &aot_mem) && ctx.pc == 0x088947A8u) goto L_088947A8;
    return;
L_088947A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08894798;
L_088947B0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x088947BCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24740));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x088947BCu) goto L_088947BC;
    return;
L_088947BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08894798;
L_088947C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(16, ctx.gpr[10] + 0u);
      if (branch_taken) {
          goto L_08894828;
      }
      goto L_088947F0;
    }
L_088947F0:
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_088947F4;
L_088947F4:
    ctx.set_gpr(31, 0x088947FCu);
    ctx.set_gpr(6, ctx.gpr[16] << 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x088947FCu) goto L_088947FC;
    return;
L_088947FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894828:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    goto L_088947F4;
L_08894834:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[13]) ? ctx.gpr[2] : ctx.gpr[13]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(11, 0u + 0u);
      if (branch_taken) {
          goto L_08894884;
      }
      goto L_08894860;
    }
L_08894860:
    ctx.set_gpr(25, ctx.gpr[4] << 1u);
    ctx.set_gpr(24, ctx.gpr[25] + ctx.gpr[5]);
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[12]);
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08894860;
      }
      goto L_08894884;
    }
L_08894884:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, ctx.gpr[4] - ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(48), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088948B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(24780));
      if (branch_taken) {
          goto L_088948D8;
      }
      goto L_088948C8;
    }
L_088948C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    goto L_088948CC;
L_088948CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088948D8:
    ctx.set_gpr(31, 0x088948E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x088948E0u) goto L_088948E0;
    return;
L_088948E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_088948CC;
L_088948E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(24824));
      if (branch_taken) {
          goto L_08894910;
      }
      goto L_08894900;
    }
L_08894900:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    goto L_08894904;
L_08894904:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894910:
    ctx.set_gpr(31, 0x08894918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x08894918u) goto L_08894918;
    return;
L_08894918:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08894904;
L_0889493C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08894950u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08895918;
L_08894950:
    ctx.set_gpr(31, 0x08894958u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088954F4;
L_08894958:
    ctx.set_gpr(31, 0x08894960u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08895920;
L_08894960:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894974:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08894988u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08895918;
L_08894988:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088949CC;
      }
      goto L_08894990;
    }
L_08894990:
    ctx.set_gpr(31, 0x08894998u);
    // nop
    goto L_08895918;
L_08894998:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08894A14;
      }
      goto L_088949A4;
    }
L_088949A4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
        goto L_088949E4;
    }
    goto L_088949B0;
L_088949B0:
    ctx.set_gpr(31, 0x088949B8u);
    // nop
    goto L_08895920;
L_088949B8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088949CCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(568));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088949CCu) goto L_088949CC;
    return;
L_088949CC:
    ctx.set_gpr(31, 0x088949D4u);
    // nop
    goto L_08895920;
L_088949D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088949E4:
    ctx.set_gpr(31, 0x088949ECu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_08895918;
L_088949EC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894A04;
      }
      goto L_088949F8;
    }
L_088949F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    goto L_08894A04;
L_08894A04:
    ctx.set_gpr(31, 0x08894A0Cu);
    // nop
    goto L_08895920;
L_08894A0C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    goto L_088949B0;
L_08894A14:
    ctx.set_gpr(31, 0x08894A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 754u, 0x08882BFCu>(ctx, &aot_mem) && ctx.pc == 0x08894A1Cu) goto L_08894A1C;
    return;
L_08894A1C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_088949A4;
L_08894A24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08894A40u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08895918;
L_08894A40:
    ctx.set_gpr(31, 0x08894A48u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    goto L_08895920;
L_08894A48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894AB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08894AE8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08895918;
L_08894AE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08894B00u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    goto L_088956E8;
L_08894B00:
    ctx.set_gpr(31, 0x08894B08u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08895920;
L_08894B08:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08894B2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08894B40u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08895918;
L_08894B40:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24868));
      if (branch_taken) {
          goto L_08894B7C;
      }
      goto L_08894B4C;
    }
L_08894B4C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894B64;
      }
      goto L_08894B58;
    }
L_08894B58:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_08894B64;
L_08894B64:
    ctx.set_gpr(31, 0x08894B6Cu);
    // nop
    goto L_08895920;
L_08894B6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894B7C:
    ctx.set_gpr(31, 0x08894B84u);
    // nop
    goto L_08895960;
L_08894B84:
    // nop
    goto L_08894B64;
L_08894B8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08894BA0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08895918;
L_08894BA0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08894C54;
      }
      goto L_08894BA8;
    }
L_08894BA8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894BE4;
      }
      goto L_08894BB4;
    }
L_08894BB4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_08894BB8;
L_08894BB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08894BDC;
      }
      goto L_08894BC0;
    }
L_08894BC0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08894BC4;
L_08894BC4:
    ctx.set_gpr(31, 0x08894BCCu);
    // nop
    goto L_08895920;
L_08894BCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894BDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08894BC0;
L_08894BE4:
    ctx.set_gpr(31, 0x08894BECu);
    // nop
    goto L_08895918;
L_08894BEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894C44;
      }
      goto L_08894BF8;
    }
L_08894BF8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[4] != 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
        goto L_08894C14;
    }
    goto L_08894C04;
L_08894C04:
    ctx.set_gpr(31, 0x08894C0Cu);
    // nop
    goto L_08895920;
L_08894C0C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_08894BB8;
L_08894C14:
    ctx.set_gpr(31, 0x08894C1Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_08895918;
L_08894C1C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894C34;
      }
      goto L_08894C28;
    }
L_08894C28:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    goto L_08894C34;
L_08894C34:
    ctx.set_gpr(31, 0x08894C3Cu);
    // nop
    goto L_08895920;
L_08894C3C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    goto L_08894C04;
L_08894C44:
    ctx.set_gpr(31, 0x08894C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 754u, 0x08882BFCu>(ctx, &aot_mem) && ctx.pc == 0x08894C4Cu) goto L_08894C4C;
    return;
L_08894C4C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_08894BF8;
L_08894C54:
    ctx.set_gpr(31, 0x08894C5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24912));
    goto L_08895960;
L_08894C5C:
    // nop
    goto L_08894BC4;
L_08894C64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08894C78u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08895918;
L_08894C78:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24956));
      if (branch_taken) {
          goto L_08894CF4;
      }
      goto L_08894C84;
    }
L_08894C84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08894CE4;
      }
      goto L_08894C90;
    }
L_08894C90:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[4] != 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
        goto L_08894CB4;
    }
    goto L_08894C9C;
L_08894C9C:
    ctx.set_gpr(31, 0x08894CA4u);
    // nop
    goto L_08895920;
L_08894CA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08894CB4:
    ctx.set_gpr(31, 0x08894CBCu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_08895918;
L_08894CBC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08894CD4;
      }
      goto L_08894CC8;
    }
L_08894CC8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    goto L_08894CD4;
L_08894CD4:
    ctx.set_gpr(31, 0x08894CDCu);
    // nop
    goto L_08895920;
L_08894CDC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    goto L_08894C9C;
L_08894CE4:
    ctx.set_gpr(31, 0x08894CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 754u, 0x08882BFCu>(ctx, &aot_mem) && ctx.pc == 0x08894CECu) goto L_08894CEC;
    return;
L_08894CEC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_08894C90;
L_08894CF4:
    ctx.set_gpr(31, 0x08894CFCu);
    // nop
    goto L_08895960;
L_08894CFC:
    // nop
    goto L_08894C9C;
L_08894D68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08894D84u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08895918;
L_08894D84:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(11908));
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(18176));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_08894D94;
L_08894D94:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08894E90;
      }
      goto L_08894D9C;
    }
L_08894D9C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(568))))));
    goto L_08894DA0;
L_08894DA0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(568));
      if (branch_taken) {
          goto L_08894E80;
      }
      goto L_08894DA8;
    }
L_08894DA8:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1136))))));
    goto L_08894DAC;
L_08894DAC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1136));
      if (branch_taken) {
          goto L_08894E70;
      }
      goto L_08894DB4;
    }
L_08894DB4:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1704))))));
    goto L_08894DB8;
L_08894DB8:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1704));
      if (branch_taken) {
          goto L_08894E60;
      }
      goto L_08894DC0;
    }
L_08894DC0:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2272))))));
    goto L_08894DC4;
L_08894DC4:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2272));
      if (branch_taken) {
          goto L_08894E50;
      }
      goto L_08894DCC;
    }
L_08894DCC:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2840))))));
    goto L_08894DD0;
L_08894DD0:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2840));
      if (branch_taken) {
          goto L_08894E40;
      }
      goto L_08894DD8;
    }
L_08894DD8:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3408))))));
    goto L_08894DDC;
L_08894DDC:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3408));
      if (branch_taken) {
          goto L_08894E30;
      }
      goto L_08894DE4;
    }
L_08894DE4:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3976))))));
    goto L_08894DE8;
L_08894DE8:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3976));
      if (branch_taken) {
          goto L_08894E20;
      }
      goto L_08894DF0;
    }
L_08894DF0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4544));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_08894DF8;
L_08894DF8:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_08894D94;
    }
    goto L_08894E00;
L_08894E00:
    ctx.set_gpr(31, 0x08894E08u);
    // nop
    goto L_08895920;
L_08894E08:
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
L_08894E20:
    ctx.set_gpr(31, 0x08894E28u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4544));
    goto L_08895E88;
L_08894E28:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_08894DF8;
L_08894E30:
    ctx.set_gpr(31, 0x08894E38u);
    // nop
    goto L_08895E88;
L_08894E38:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3976))))));
    goto L_08894DE8;
L_08894E40:
    ctx.set_gpr(31, 0x08894E48u);
    // nop
    goto L_08895E88;
L_08894E48:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3408))))));
    goto L_08894DDC;
L_08894E50:
    ctx.set_gpr(31, 0x08894E58u);
    // nop
    goto L_08895E88;
L_08894E58:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2840))))));
    goto L_08894DD0;
L_08894E60:
    ctx.set_gpr(31, 0x08894E68u);
    // nop
    goto L_08895E88;
L_08894E68:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2272))))));
    goto L_08894DC4;
L_08894E70:
    ctx.set_gpr(31, 0x08894E78u);
    // nop
    goto L_08895E88;
L_08894E78:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1704))))));
    goto L_08894DB8;
L_08894E80:
    ctx.set_gpr(31, 0x08894E88u);
    // nop
    goto L_08895E88;
L_08894E88:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1136))))));
    goto L_08894DAC;
L_08894E90:
    ctx.set_gpr(31, 0x08894E98u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08895E88;
L_08894E98:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(568))))));
    goto L_08894DA0;
L_08894EA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08894EBCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08895918;
L_08894EBC:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25044));
      if (branch_taken) {
          goto L_08894EEC;
      }
      goto L_08894EC8;
    }
L_08894EC8:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_08894ECC;
L_08894ECC:
    ctx.set_gpr(31, 0x08894ED4u);
    // nop
    goto L_08895920;
L_08894ED4:
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
L_08894EEC:
    ctx.set_gpr(31, 0x08894EF4u);
    // nop
    goto L_08895960;
L_08894EF4:
    // nop
    goto L_08894ECC;
L_08894EFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08894F18u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08895918;
L_08894F18:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25088));
      if (branch_taken) {
          goto L_08894F48;
      }
      goto L_08894F24;
    }
L_08894F24:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_08894F28;
L_08894F28:
    ctx.set_gpr(31, 0x08894F30u);
    // nop
    goto L_08895920;
L_08894F30:
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
L_08894F48:
    ctx.set_gpr(31, 0x08894F50u);
    // nop
    goto L_08895960;
L_08894F50:
    // nop
    goto L_08894F28;
L_0889534C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08895368u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08895918;
L_08895368:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25480));
      if (branch_taken) {
          goto L_088953B8;
      }
      goto L_08895374;
    }
L_08895374:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25524));
      if (branch_taken) {
          goto L_08895394;
      }
      goto L_08895384;
    }
L_08895384:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
        goto L_0889539C;
    }
    goto L_08895394;
L_08895394:
    ctx.set_gpr(31, 0x0889539Cu);
    // nop
    goto L_08895960;
L_0889539C:
    ctx.set_gpr(31, 0x088953A4u);
    // nop
    goto L_08895920;
L_088953A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088953B8:
    ctx.set_gpr(31, 0x088953C0u);
    // nop
    goto L_08895960;
L_088953C0:
    // nop
    goto L_0889539C;
L_08895460:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24852)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08895480;
      }
      goto L_08895474;
    }
L_08895474:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08895478;
L_08895478:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08895480:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24848)));
    jump_target = ctx.gpr[6];
    ctx.set_gpr(31, 0x08895494u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24844)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08895494u) goto L_08895494;
    return;
L_08895494:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08895478;
L_0889549C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088954B8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08895918;
L_088954B8:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25612));
      if (branch_taken) {
          goto L_088954E4;
      }
      goto L_088954C4;
    }
L_088954C4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_088954C8;
L_088954C8:
    ctx.set_gpr(31, 0x088954D0u);
    // nop
    goto L_08895920;
L_088954D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088954E4:
    ctx.set_gpr(31, 0x088954ECu);
    // nop
    goto L_08895960;
L_088954EC:
    // nop
    goto L_088954C8;
L_088954F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088956D4;
      }
      goto L_08895510;
    }
L_08895510:
    ctx.set_gpr(31, 0x08895518u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_08895928;
L_08895518:
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(11908));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(18176));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_08895530;
L_08895530:
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(568));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(568));
      if (branch_taken) {
          goto L_088956CC;
      }
      goto L_08895540;
    }
L_08895540:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(568));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(568));
      if (branch_taken) {
          goto L_088956CC;
      }
      goto L_08895554;
    }
L_08895554:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(568));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(568));
      if (branch_taken) {
          goto L_088956CC;
      }
      goto L_08895568;
    }
L_08895568:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(568));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(568));
      if (branch_taken) {
          goto L_088956CC;
      }
      goto L_0889557C;
    }
L_0889557C:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(568));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(568));
      if (branch_taken) {
          goto L_088956CC;
      }
      goto L_08895590;
    }
L_08895590:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(568));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(568));
      if (branch_taken) {
          goto L_088956CC;
      }
      goto L_088955A4;
    }
L_088955A4:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(568));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(568));
      if (branch_taken) {
          goto L_088956CC;
      }
      goto L_088955B8;
    }
L_088955B8:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(568));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(568));
      if (branch_taken) {
          goto L_088956CC;
      }
      goto L_088955D0;
    }
L_088955D0:
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
        goto L_08895530;
    }
    goto L_088955D8;
L_088955D8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(568));
      if (branch_taken) {
          goto L_088956B8;
      }
      goto L_088955E0;
    }
L_088955E0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088955ECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088955ECu) goto L_088955EC;
    return;
L_088955EC:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x08895608u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08895608u) goto L_08895608;
    return;
L_08895608:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[18];
    ctx.set_gpr(31, 0x08895620u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08895620u) goto L_08895620;
    return;
L_08895620:
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(6, 26214u << 16u);
    ctx.set_gpr(25, ctx.gpr[5] << 3u);
    ctx.set_gpr(4, ctx.gpr[6] | 26215u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 31u));
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.set_gpr(18, ctx.hi);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(240), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(272), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(304), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(336), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(368), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(400), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(432), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(496), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(528), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(560), 0u);
    goto L_08895694;
L_08895694:
    ctx.set_gpr(31, 0x0889569Cu);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_08895944;
L_0889569C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088956A0;
L_088956A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088956B8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x088956C4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25656));
    goto L_08895960;
L_088956C4:
    // nop
    goto L_08895694;
L_088956CC:
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    goto L_088955D8;
L_088956D4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x088956E0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25704));
    goto L_08895960;
L_088956E0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088956A0;
L_088956E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08895904;
      }
      goto L_08895728;
    }
L_08895728:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0889586C;
      }
      goto L_08895738;
    }
L_08895738:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(20, 32767u << 16u);
      if (branch_taken) {
          goto L_088958F0;
      }
      goto L_08895740;
    }
L_08895740:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(8, ctx.gpr[20] | 65535u);
    ctx.set_gpr(14, ctx.gpr[10] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 31u));
    ctx.set_gpr(16, ctx.gpr[17] >> 28u);
    ctx.set_gpr(15, ctx.gpr[14] + ctx.gpr[16]);
    ctx.set_gpr(15, (ctx.gpr[15] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(13, ctx.gpr[14] - ctx.gpr[15]);
    ctx.set_gpr(12, ctx.gpr[13] << 5u);
    ctx.set_gpr(11, ctx.gpr[18] + ctx.gpr[12]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(9, ctx.gpr[10] << 5u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[7] ^ ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[9]);
    if (ctx.gpr[5] != 0u) ctx.set_gpr(20, ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08895798u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08895798u) goto L_08895798;
    return;
L_08895798:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_0889581C;
      }
      goto L_088957A8;
    }
L_088957A8:
    ctx.set_gpr(24, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_088958A8;
      }
      goto L_088957B4;
    }
L_088957B4:
    ctx.set_gpr(16, ctx.gpr[19] + ctx.gpr[6]);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(13, ctx.gpr[14] + ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[13]);
      if (branch_taken) {
          goto L_0889581C;
      }
      goto L_088957D4;
    }
L_088957D4:
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[19]);
    goto L_088957D8;
L_088957D8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[12] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(25, ctx.gpr[8] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[25]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(24, ctx.gpr[25] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[24]);
      if (branch_taken) {
          goto L_088957D8;
      }
      goto L_0889581C;
    }
L_0889581C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[21]);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[23]);
    ctx.set_gpr(17, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(13, ctx.gpr[14] >> 28u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[13]);
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(23, ctx.gpr[17] - ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[21];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
      if (branch_taken) {
          goto L_0889589C;
      }
      goto L_08895868;
    }
L_08895868:
    ctx.set_gpr(3, ctx.gpr[20] + 0u);
    goto L_0889586C;
L_0889586C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
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
L_0889589C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08895868;
L_088958A8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088957D4;
      }
      goto L_088958B0;
    }
L_088958B0:
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088957B4;
      }
      goto L_088958B8;
    }
L_088958B8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(11, ctx.gpr[19] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_088958D8;
      }
      goto L_088958C0;
    }
L_088958C0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(11, ctx.gpr[19] + ctx.gpr[6]);
    goto L_088958D8;
L_088958D8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    goto L_088957B4;
L_088958F0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x088958FCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25752));
    goto L_08895960;
L_088958FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_0889586C;
L_08895904:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x08895910u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25796));
    goto L_08895960;
L_08895910:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_0889586C;
L_08895918:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08895920:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08895928:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08895938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 424u, 0x088A2324u>(ctx, &aot_mem) && ctx.pc == 0x08895938u) goto L_08895938;
    return;
L_08895938:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08895944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08895954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 431u, 0x088A237Cu>(ctx, &aot_mem) && ctx.pc == 0x08895954u) goto L_08895954;
    return;
L_08895954:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08895960:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(11652));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.set_gpr(31, 0x088959A8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 645u, 0x0888F2ACu>(ctx, &aot_mem) && ctx.pc == 0x088959A8u) goto L_088959A8;
    return;
L_088959A8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24840)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088959C8;
      }
      goto L_088959B8;
    }
L_088959B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088959BC;
L_088959BC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088959C8:
    ctx.set_gpr(6, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088959D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-24836)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088959D4u) goto L_088959D4;
    return;
L_088959D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088959BC;
L_088959DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(6, 2245u << 16u);
      if (branch_taken) {
          goto L_088959F4;
      }
      goto L_088959E4;
    }
L_088959E4:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-24840), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24836), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088959F4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24840), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24836), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08895A18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(5, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(520)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08895A3Cu);
    // nop
    goto L_08895928;
L_08895A3C:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24832)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(11908));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18176));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08895A74;
      }
      goto L_08895A54;
    }
L_08895A54:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x08895A64u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24832), ctx.gpr[3]);
    goto L_08895944;
L_08895A64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08895A74:
    ctx.set_gpr(31, 0x08895A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08895A7Cu) goto L_08895A7C;
    return;
L_08895A7C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08895A88u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088959DC;
L_08895A88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24832)));
    goto L_08895A54;
L_08895A90:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24832)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-24832), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08895B58;
      }
      goto L_08895ABC;
    }
L_08895ABC:
    ctx.set_gpr(19, 2247u << 16u);
    ctx.set_gpr(16, ctx.gpr[19] + static_cast<std::uint32_t>(11908));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(18176));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_08895AD0;
L_08895AD0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08895BE4;
      }
      goto L_08895AD8;
    }
L_08895AD8:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(568))))));
    goto L_08895ADC;
L_08895ADC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(568));
      if (branch_taken) {
          goto L_08895BD4;
      }
      goto L_08895AE4;
    }
L_08895AE4:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1136))))));
    goto L_08895AE8;
L_08895AE8:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1136));
      if (branch_taken) {
          goto L_08895BC4;
      }
      goto L_08895AF0;
    }
L_08895AF0:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1704))))));
    goto L_08895AF4;
L_08895AF4:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1704));
      if (branch_taken) {
          goto L_08895BB4;
      }
      goto L_08895AFC;
    }
L_08895AFC:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2272))))));
    goto L_08895B00;
L_08895B00:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2272));
      if (branch_taken) {
          goto L_08895BA4;
      }
      goto L_08895B08;
    }
L_08895B08:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2840))))));
    goto L_08895B0C;
L_08895B0C:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2840));
      if (branch_taken) {
          goto L_08895B94;
      }
      goto L_08895B14;
    }
L_08895B14:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3408))))));
    goto L_08895B18;
L_08895B18:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3408));
      if (branch_taken) {
          goto L_08895B84;
      }
      goto L_08895B20;
    }
L_08895B20:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3976))))));
    goto L_08895B24;
L_08895B24:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3976));
      if (branch_taken) {
          goto L_08895B74;
      }
      goto L_08895B2C;
    }
L_08895B2C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4544));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_08895B34;
L_08895B34:
    if (ctx.gpr[13] != 0u) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_08895AD0;
    }
    goto L_08895B3C;
L_08895B3C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(11908));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08895B4Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18176));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08895B4Cu) goto L_08895B4C;
    return;
L_08895B4C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08895B58u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088959DC;
L_08895B58:
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
L_08895B74:
    ctx.set_gpr(31, 0x08895B7Cu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4544));
    goto L_08894974;
L_08895B7C:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_08895B34;
L_08895B84:
    ctx.set_gpr(31, 0x08895B8Cu);
    // nop
    goto L_08894974;
L_08895B8C:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3976))))));
    goto L_08895B24;
L_08895B94:
    ctx.set_gpr(31, 0x08895B9Cu);
    // nop
    goto L_08894974;
L_08895B9C:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3408))))));
    goto L_08895B18;
L_08895BA4:
    ctx.set_gpr(31, 0x08895BACu);
    // nop
    goto L_08894974;
L_08895BAC:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2840))))));
    goto L_08895B0C;
L_08895BB4:
    ctx.set_gpr(31, 0x08895BBCu);
    // nop
    goto L_08894974;
L_08895BBC:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2272))))));
    goto L_08895B00;
L_08895BC4:
    ctx.set_gpr(31, 0x08895BCCu);
    // nop
    goto L_08894974;
L_08895BCC:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1704))))));
    goto L_08895AF4;
L_08895BD4:
    ctx.set_gpr(31, 0x08895BDCu);
    // nop
    goto L_08894974;
L_08895BDC:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1136))))));
    goto L_08895AE8;
L_08895BE4:
    ctx.set_gpr(31, 0x08895BECu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08894974;
L_08895BEC:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(568))))));
    goto L_08895ADC;
L_08895BF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[5] << 5u);
    ctx.set_gpr(17, ctx.gpr[16] + ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08895CC0;
      }
      goto L_08895C24;
    }
L_08895C24:
    ctx.set_gpr(31, 0x08895C2Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 745u, 0x08882B80u>(ctx, &aot_mem) && ctx.pc == 0x08895C2Cu) goto L_08895C2C;
    return;
L_08895C2C:
    ctx.set_gpr(31, 0x08895C34u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08882768u>(ctx, &aot_mem) && ctx.pc == 0x08895C34u) goto L_08895C34;
    return;
L_08895C34:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08895C40u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08895C40u) goto L_08895C40;
    return;
L_08895C40:
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08895CA8;
      }
      goto L_08895C50;
    }
L_08895C50:
    ctx.set_gpr(4, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08895D54;
      }
      goto L_08895C5C;
    }
L_08895C5C:
    ctx.set_gpr(15, ctx.gpr[17] + ctx.gpr[8]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[14]);
      if (branch_taken) {
          goto L_08895CA8;
      }
      goto L_08895C74;
    }
L_08895C74:
    ctx.set_gpr(6, ctx.gpr[8] + ctx.gpr[17]);
    goto L_08895C78;
L_08895C78:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(25, ctx.gpr[4] + ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[25] + ctx.gpr[5]);
    ctx.set_gpr(17, ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08895C78;
      }
      goto L_08895CA8;
    }
L_08895CA8:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.set_gpr(7, 2225u << 16u);
      if (branch_taken) {
          goto L_08895CD8;
      }
      goto L_08895CB4;
    }
L_08895CB4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08895CC0u);
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(25888));
    goto L_08895960;
L_08895CC0:
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
L_08895CD8:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(2048));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(9, ctx.hi);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(31, 0x08895D00u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 652u, 0x08882594u>(ctx, &aot_mem) && ctx.pc == 0x08895D00u) goto L_08895D00;
    return;
L_08895D00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08895D0Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08882D18u>(ctx, &aot_mem) && ctx.pc == 0x08895D0Cu) goto L_08895D0C;
    return;
L_08895D0C:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08895D2Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 817u, 0x088831A0u>(ctx, &aot_mem) && ctx.pc == 0x08895D2Cu) goto L_08895D2C;
    return;
L_08895D2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08895D38u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 722u, 0x088829C0u>(ctx, &aot_mem) && ctx.pc == 0x08895D38u) goto L_08895D38;
    return;
L_08895D38:
    ctx.set_gpr(31, 0x08895D40u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 731u, 0x08882A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08895D40u) goto L_08895D40;
    return;
L_08895D40:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    goto L_08895CC0;
L_08895D54:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, ctx.gpr[8] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08895C78;
      }
      goto L_08895D5C;
    }
L_08895D5C:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08895C5C;
      }
      goto L_08895D68;
    }
L_08895D68:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(12, ctx.gpr[17] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08895D7C;
      }
      goto L_08895D70;
    }
L_08895D70:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[17] + ctx.gpr[8]);
    goto L_08895D7C;
L_08895D7C:
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[11]);
    goto L_08895C5C;
L_08895D8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08895E24;
      }
      goto L_08895DCC;
    }
L_08895DCC:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[9]))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08895E6C;
      }
      goto L_08895DDC;
    }
L_08895DDC:
    ctx.set_gpr(10, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 31u));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(11, ctx.gpr[12] >> 28u);
    ctx.set_gpr(2, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(7, ctx.gpr[10] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08895E58;
      }
      goto L_08895E08;
    }
L_08895E08:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[9]))));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[17];
    ctx.set_gpr(8, ctx.gpr[21] + 0u);
      if (branch_taken) {
          goto L_08895E48;
      }
      goto L_08895E24;
    }
L_08895E24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08895E28;
L_08895E28:
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
L_08895E48:
    ctx.set_gpr(31, 0x08895E50u);
    // nop
    goto L_08894AB4;
L_08895E50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08895E28;
L_08895E58:
    ctx.set_gpr(31, 0x08895E60u);
    // nop
    goto L_08895460;
L_08895E60:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    goto L_08895E08;
L_08895E6C:
    ctx.set_gpr(5, ctx.gpr[3] << 5u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    goto L_08895DDC;
L_08895E88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08895EC0;
      }
      goto L_08895EB4;
    }
L_08895EB4:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[17] == ctx.gpr[3]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_08895EDC;
    }
    goto L_08895EC0;
L_08895EC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08895EC4;
L_08895EC4:
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
L_08895EDC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08895EC0;
      }
      goto L_08895EE4;
    }
L_08895EE4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[5] << 5u);
    ctx.set_gpr(8, ctx.gpr[6] + ctx.gpr[18]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[7] == ctx.gpr[4]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_08895F48;
    }
    goto L_08895EFC;
L_08895EFC:
    ctx.set_gpr(12, ctx.gpr[5] << 5u);
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[18]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08895F38;
      }
      goto L_08895F14;
    }
L_08895F14:
    ctx.set_gpr(15, ctx.gpr[5] << 5u);
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[18]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[13] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08895EC4;
    }
    goto L_08895F28;
L_08895F28:
    ctx.set_gpr(31, 0x08895F30u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08895BF4;
L_08895F30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08895EC4;
L_08895F38:
    ctx.set_gpr(31, 0x08895F40u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08895D8C;
L_08895F40:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08895F14;
L_08895F48:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08895F60;
      }
      goto L_08895F50;
    }
L_08895F50:
    ctx.set_gpr(31, 0x08895F58u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25952));
    goto L_08895960;
L_08895F58:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08895EFC;
L_08895F60:
    ctx.set_gpr(31, 0x08895F68u);
    ctx.set_gpr(19, ctx.gpr[16] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 719u, 0x08882988u>(ctx, &aot_mem) && ctx.pc == 0x08895F68u) goto L_08895F68;
    return;
L_08895F68:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08895FA8;
    }
    goto L_08895F74;
L_08895F74:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08895F98;
      }
      goto L_08895F80;
    }
L_08895F80:
    if (ctx.gpr[2] != ctx.gpr[17]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08895EFC;
    }
    goto L_08895F88;
L_08895F88:
    ctx.set_gpr(31, 0x08895F90u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 727u, 0x08882A10u>(ctx, &aot_mem) && ctx.pc == 0x08895F90u) goto L_08895F90;
    return;
L_08895F90:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    goto L_08895F58;
L_08895F98:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[9];
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08895EFC;
      }
      goto L_08895FA0;
    }
L_08895FA0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08895EFC;
L_08895FA8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    goto L_08895F90;
L_08896050:
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(9, 0u + 0u);
    goto L_08896058;
L_08896058:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(11, ctx.gpr[7] + static_cast<std::uint32_t>(-97));
    ctx.set_gpr(10, ctx.gpr[12] & 255u);
    ctx.set_gpr(4, ctx.gpr[11] & 255u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[7]))));
    ctx.set_gpr(12, ctx.gpr[10] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    ctx.set_gpr(11, ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-48));
      if (branch_taken) {
          goto L_088960A0;
      }
      goto L_08896084;
    }
L_08896084:
    ctx.set_gpr(13, ctx.gpr[7] + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(7, ctx.gpr[13] & 255u);
    ctx.set_gpr(2, ctx.gpr[7] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(-87));
      if (branch_taken) {
          goto L_088960A0;
      }
      goto L_08896098;
    }
L_08896098:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-55));
      if (branch_taken) {
          goto L_088960B4;
      }
      goto L_088960A0;
    }
L_088960A0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[4]);
    goto L_08896058;
L_088960B4:
    ctx.set_gpr(2, ctx.gpr[9] + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088960C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08896304;
      }
      goto L_088960E0;
    }
L_088960E0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, 2247u << 16u);
      if (branch_taken) {
          goto L_088962E0;
      }
      goto L_088960E8;
    }
L_088960E8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(30084));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_088960FC;
L_088960FC:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[7]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088962D8;
      }
      goto L_08896114;
    }
L_08896114:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088962D8;
      }
      goto L_08896128;
    }
L_08896128:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088962D8;
      }
      goto L_0889613C;
    }
L_0889613C:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088962D8;
      }
      goto L_08896150;
    }
L_08896150:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088962D8;
      }
      goto L_08896164;
    }
L_08896164:
    if (ctx.gpr[8] != 0u) {
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_088960FC;
    }
    goto L_0889616C;
L_0889616C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088962A4;
      }
      goto L_08896174;
    }
L_08896174:
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08896188u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(2048));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x08896188u) goto L_08896188;
    return;
L_08896188:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08896198u);
    ctx.set_gpr(19, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08896198u) goto L_08896198;
    return;
L_08896198:
    ctx.set_gpr(18, ctx.gpr[2] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(20, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08896254;
      }
      goto L_088961A4;
    }
L_088961A4:
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_088961A8;
L_088961A8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088961BCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_08896050;
L_088961BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088961D0;
      }
      goto L_088961CC;
    }
L_088961CC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_088961D0;
L_088961D0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088961E8;
      }
      goto L_088961D8;
    }
L_088961D8:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088961E4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 149u, 0x0881879Cu>(ctx, &aot_mem) && ctx.pc == 0x088961E4u) goto L_088961E4;
    return;
L_088961E4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088961E8;
L_088961E8:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    if (ctx.gpr[7] == 0u) {
    ctx.pc = 0x088961FCu; rt.stop("Allegrex BREAK code 7 at 0x088961FC"); return;
        goto L_08896200;
    }
    goto L_08896200;
L_08896200:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(20, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    goto L_08896230;
L_08896230:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896254:
    ctx.set_gpr(5, 2247u << 16u);
    ctx.set_gpr(18, ctx.gpr[5] + static_cast<std::uint32_t>(32324));
    ctx.set_gpr(25, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[25] + static_cast<std::uint32_t>(26024));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08896278u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 634u, 0x0888F1B8u>(ctx, &aot_mem) && ctx.pc == 0x08896278u) goto L_08896278;
    return;
L_08896278:
    ctx.set_gpr(24, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-24828)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(4));
        goto L_088961A8;
    }
    goto L_08896288;
L_08896288:
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-24824)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0889629Cu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889629Cu) goto L_0889629C;
    return;
L_0889629C:
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_088961A8;
L_088962A4:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-24828)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(15, 2245u << 16u);
      if (branch_taken) {
          goto L_088962BC;
      }
      goto L_088962B4;
    }
L_088962B4:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08896230;
L_088962BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(-24824)));
    ctx.set_gpr(14, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[14] + static_cast<std::uint32_t>(26088));
    goto L_088962C8;
L_088962C8:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088962D0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088962D0u) goto L_088962D0;
    return;
L_088962D0:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08896230;
L_088962D8:
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    goto L_0889616C;
L_088962E0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24828)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(5, 0u + 0u);
        goto L_08896230;
    }
    goto L_088962F0;
L_088962F0:
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24824)));
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(26136));
    goto L_088962C8;
L_08896304:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24828)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(5, 0u + 0u);
        goto L_08896230;
    }
    goto L_08896314;
L_08896314:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24824)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(26172));
    goto L_088962C8;
L_08896328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088963CC;
      }
      goto L_0889634C;
    }
L_0889634C:
    ctx.set_gpr(31, 0x08896354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 424u, 0x088A2324u>(ctx, &aot_mem) && ctx.pc == 0x08896354u) goto L_08896354;
    return;
L_08896354:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08896398;
      }
      goto L_0889635C;
    }
L_0889635C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    goto L_08896364;
L_08896364:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[10]) ? ctx.gpr[3] : ctx.gpr[10]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[8]) > static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[8] : ctx.gpr[9]);
    ctx.set_gpr(31, 0x0889637Cu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 431u, 0x088A237Cu>(ctx, &aot_mem) && ctx.pc == 0x0889637Cu) goto L_0889637C;
    return;
L_0889637C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08896380;
L_08896380:
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
L_08896398:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088963C0;
      }
      goto L_088963A0;
    }
L_088963A0:
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_088963B0;
    }
    goto L_088963A8;
L_088963A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08896364;
L_088963B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[18]);
    goto L_088963B8;
L_088963B8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_08896364;
L_088963C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[18]);
    goto L_088963B8;
L_088963CC:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24828)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, 2245u << 16u);
      if (branch_taken) {
          goto L_088963E4;
      }
      goto L_088963DC;
    }
L_088963DC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08896380;
L_088963E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24824)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(26208));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088963F8u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088963F8u) goto L_088963F8;
    return;
L_088963F8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08896380;
L_08896400:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0889665C;
      }
      goto L_08896430;
    }
L_08896430:
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.set_gpr(4, 2245u << 16u);
        goto L_0889663C;
    }
    goto L_08896438;
L_08896438:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(8, 2245u << 16u);
      if (branch_taken) {
          goto L_0889660C;
      }
      goto L_08896440;
    }
L_08896440:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
        goto L_0889647C;
    }
    goto L_08896448;
L_08896448:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[11]));
    goto L_08896454;
L_08896454:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889647C:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[19];
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08896454;
      }
      goto L_08896488;
    }
L_08896488:
    ctx.set_gpr(31, 0x08896490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 424u, 0x088A2324u>(ctx, &aot_mem) && ctx.pc == 0x08896490u) goto L_08896490;
    return;
L_08896490:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(20, ctx.gpr[21] - ctx.gpr[14]);
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[20] : ctx.gpr[16]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[15]);
    ctx.set_gpr(5, ctx.lo);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
      if (branch_taken) {
          goto L_088964D0;
      }
      goto L_088964BC;
    }
L_088964BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088964C8u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 431u, 0x088A237Cu>(ctx, &aot_mem) && ctx.pc == 0x088964C8u) goto L_088964C8;
    return;
L_088964C8:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08896454;
L_088964D0:
    ctx.set_gpr(16, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(21, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x088964F0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088964F0u) goto L_088964F0;
    return;
L_088964F0:
    ctx.set_gpr(19, ctx.gpr[2] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(5, 2247u << 16u);
      if (branch_taken) {
          goto L_088965C0;
      }
      goto L_088964FC;
    }
L_088964FC:
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08896500;
L_08896500:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08896514u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08896050;
L_08896514:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0889652C;
      }
      goto L_08896524;
    }
L_08896524:
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_0889652C;
L_0889652C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08896544;
      }
      goto L_08896534;
    }
L_08896534:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08896540u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 149u, 0x0881879Cu>(ctx, &aot_mem) && ctx.pc == 0x08896540u) goto L_08896540;
    return;
L_08896540:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08896544;
L_08896544:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(10, ctx.gpr[11] - ctx.gpr[12]);
    ctx.set_gpr(31, 0x0889655Cu);
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[10] : ctx.gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 431u, 0x088A237Cu>(ctx, &aot_mem) && ctx.pc == 0x0889655Cu) goto L_0889655C;
    return;
L_0889655C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08896570u);
    ctx.set_gpr(5, ctx.gpr[20] + ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08896570u) goto L_08896570;
    return;
L_08896570:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[8] - ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08896588;
      }
      goto L_08896580;
    }
L_08896580:
    ctx.set_gpr(31, 0x08896588u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08896588u) goto L_08896588;
    return;
L_08896588:
    ctx.set_gpr(31, 0x08896590u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 424u, 0x088A2324u>(ctx, &aot_mem) && ctx.pc == 0x08896590u) goto L_08896590;
    return;
L_08896590:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    ctx.set_gpr(13, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    ctx.set_gpr(31, 0x088965B8u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 431u, 0x088A237Cu>(ctx, &aot_mem) && ctx.pc == 0x088965B8u) goto L_088965B8;
    return;
L_088965B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08896454;
L_088965C0:
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(32324));
    ctx.set_gpr(25, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[25] + static_cast<std::uint32_t>(26024));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088965E0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 634u, 0x0888F1B8u>(ctx, &aot_mem) && ctx.pc == 0x088965E0u) goto L_088965E0;
    return;
L_088965E0:
    ctx.set_gpr(24, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-24828)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(4));
        goto L_08896500;
    }
    goto L_088965F0;
L_088965F0:
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-24824)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08896604u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08896604u) goto L_08896604;
    return;
L_08896604:
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08896500;
L_0889660C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-24828)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, 0u + 0u);
        goto L_08896454;
    }
    goto L_08896618;
L_08896618:
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-24824)));
    ctx.set_gpr(9, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[9] + static_cast<std::uint32_t>(26236));
    goto L_08896628;
L_08896628:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_0889662C;
L_0889662C:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08896634u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08896634u) goto L_08896634;
    return;
L_08896634:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08896454;
L_0889663C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24828)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, 0u + 0u);
        goto L_08896454;
    }
    goto L_08896648;
L_08896648:
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24824)));
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(26272));
    goto L_08896628;
L_0889665C:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24828)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, 0u + 0u);
        goto L_08896454;
    }
    goto L_0889666C;
L_0889666C:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24824)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(26304));
    ctx.set_gpr(6, 0u + 0u);
    goto L_0889662C;
L_08896684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088966F0;
      }
      goto L_088966A8;
    }
L_088966A8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(205));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < 206 ? 1u : 0u);
      if (branch_taken) {
          goto L_08896818;
      }
      goto L_088966B4;
    }
L_088966B4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(301));
      if (branch_taken) {
          goto L_088967D0;
      }
      goto L_088966BC;
    }
L_088966BC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(202));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[5]) < 203 ? 1u : 0u);
      if (branch_taken) {
          goto L_088966EC;
      }
      goto L_088966C8;
    }
L_088966C8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(203));
      if (branch_taken) {
          goto L_08896708;
      }
      goto L_088966D0;
    }
L_088966D0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(200));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_088966F0;
      }
      goto L_088966DC;
    }
L_088966DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(201));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_088966EC;
    }
    goto L_088966E8;
L_088966E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_088966EC;
L_088966EC:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_088966F0;
L_088966F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896708:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[9];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(204));
      if (branch_taken) {
          goto L_08896720;
      }
      goto L_08896710;
    }
L_08896710:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
        goto L_088966EC;
    }
    goto L_08896718;
L_08896718:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_088966F0;
L_08896720:
    ctx.set_gpr(31, 0x08896728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08896728u) goto L_08896728;
    return;
L_08896728:
    ctx.set_gpr(5, ctx.gpr[2] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(18, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08896780;
      }
      goto L_08896734;
    }
L_08896734:
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08896738;
L_08896738:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0889674Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08896050;
L_0889674C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08896760;
      }
      goto L_0889675C;
    }
L_0889675C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08896760;
L_08896760:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08896778;
      }
      goto L_08896768;
    }
L_08896768:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08896774u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 149u, 0x0881879Cu>(ctx, &aot_mem) && ctx.pc == 0x08896774u) goto L_08896774;
    return;
L_08896774:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08896778;
L_08896778:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088966EC;
L_08896780:
    ctx.set_gpr(24, 2247u << 16u);
    ctx.set_gpr(17, ctx.gpr[24] + static_cast<std::uint32_t>(32324));
    ctx.set_gpr(15, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[15] + static_cast<std::uint32_t>(26024));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088967A4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 634u, 0x0888F1B8u>(ctx, &aot_mem) && ctx.pc == 0x088967A4u) goto L_088967A4;
    return;
L_088967A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24828)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(4));
        goto L_08896738;
    }
    goto L_088967B4;
L_088967B4:
    ctx.set_gpr(25, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(-24824)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088967C8u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088967C8u) goto L_088967C8;
    return;
L_088967C8:
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08896738;
L_088967D0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[10];
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[5]) < 302 ? 1u : 0u);
      if (branch_taken) {
          goto L_088966EC;
      }
      goto L_088967D8;
    }
L_088967D8:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(400));
      if (branch_taken) {
          goto L_088967FC;
      }
      goto L_088967E0;
    }
L_088967E0:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(299));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[12];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(300));
      if (branch_taken) {
          goto L_088966EC;
      }
      goto L_088967EC;
    }
L_088967EC:
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
        goto L_088966EC;
    }
    goto L_088967F4;
L_088967F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088966EC;
L_088967FC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[13];
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[5]) < 401 ? 1u : 0u);
      if (branch_taken) {
          goto L_088966EC;
      }
      goto L_08896804;
    }
L_08896804:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(600));
      if (branch_taken) {
          goto L_08896710;
      }
      goto L_08896810;
    }
L_08896810:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(302));
    goto L_088967EC;
L_08896818:
    ctx.set_gpr(31, 0x08896820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08896820u) goto L_08896820;
    return;
L_08896820:
    ctx.set_gpr(17, ctx.gpr[2] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08896878;
      }
      goto L_0889682C;
    }
L_0889682C:
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    goto L_08896830;
L_08896830:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08896844u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_08896050;
L_08896844:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08896858;
      }
      goto L_08896854;
    }
L_08896854:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    goto L_08896858;
L_08896858:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08896870;
      }
      goto L_08896860;
    }
L_08896860:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0889686Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 149u, 0x0881879Cu>(ctx, &aot_mem) && ctx.pc == 0x0889686Cu) goto L_0889686C;
    return;
L_0889686C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08896870;
L_08896870:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_088966EC;
L_08896878:
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(32324));
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(26024));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(31, 0x0889689Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 634u, 0x0888F1B8u>(ctx, &aot_mem) && ctx.pc == 0x0889689Cu) goto L_0889689C;
    return;
L_0889689C:
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24828)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(12));
        goto L_08896830;
    }
    goto L_088968AC;
L_088968AC:
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-24824)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088968C0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088968C0u) goto L_088968C0;
    return;
L_088968C0:
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    goto L_08896830;
L_08896900:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.set_gpr(3, 2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896968:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08896988u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08896988u) goto L_08896988;
    return;
L_08896988:
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(18, ctx.gpr[4] + static_cast<std::uint32_t>(32324));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(26024));
    ctx.set_gpr(3, ctx.gpr[2] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(300));
      if (branch_taken) {
          goto L_08896A14;
      }
      goto L_088969B0;
    }
L_088969B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088969B4;
L_088969B4:
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088969C4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08896050;
L_088969C4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088969E4;
      }
      goto L_088969E0;
    }
L_088969E0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_088969E4;
L_088969E4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088969FC;
      }
      goto L_088969EC;
    }
L_088969EC:
    ctx.set_gpr(31, 0x088969F4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 149u, 0x0881879Cu>(ctx, &aot_mem) && ctx.pc == 0x088969F4u) goto L_088969F4;
    return;
L_088969F4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088969FC;
L_088969FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896A14:
    ctx.set_gpr(31, 0x08896A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 634u, 0x0888F1B8u>(ctx, &aot_mem) && ctx.pc == 0x08896A1Cu) goto L_08896A1C;
    return;
L_08896A1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24828)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_088969B0;
      }
      goto L_08896A30;
    }
L_08896A30:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08896A3Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24824)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08896A3Cu) goto L_08896A3C;
    return;
L_08896A3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088969B4;
L_08896A4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20));
    goto L_08896A54;
L_08896A54:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20));
        goto L_08896A54;
    }
    goto L_08896A5C;
L_08896A5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896A64:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24828), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24824), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896A78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08896A88u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    goto L_08896968;
L_08896A88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896BD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08896C04;
      }
      goto L_08896BE4;
    }
L_08896BE4:
    ctx.set_gpr(31, 0x08896BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 424u, 0x088A2324u>(ctx, &aot_mem) && ctx.pc == 0x08896BECu) goto L_08896BEC;
    return;
L_08896BEC:
    ctx.set_gpr(31, 0x08896BF4u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 431u, 0x088A237Cu>(ctx, &aot_mem) && ctx.pc == 0x08896BF4u) goto L_08896BF4;
    return;
L_08896BF4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
        goto L_08896C14;
    }
    goto L_08896C04;
L_08896C04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896C14:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    goto L_08896C04;
L_08896C4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08896C68;
      }
      goto L_08896C58;
    }
L_08896C58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08896C5C;
L_08896C5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896C68:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24828)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(26332));
      if (branch_taken) {
          goto L_08896C88;
      }
      goto L_08896C80;
    }
L_08896C80:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08896C5C;
L_08896C88:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08896C94u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24824)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08896C94u) goto L_08896C94;
    return;
L_08896C94:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08896C5C;
L_08896C9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08896CD0;
      }
      goto L_08896CB0;
    }
L_08896CB0:
    ctx.set_gpr(31, 0x08896CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 424u, 0x088A2324u>(ctx, &aot_mem) && ctx.pc == 0x08896CB8u) goto L_08896CB8;
    return;
L_08896CB8:
    ctx.set_gpr(31, 0x08896CC0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 431u, 0x088A237Cu>(ctx, &aot_mem) && ctx.pc == 0x08896CC0u) goto L_08896CC0;
    return;
L_08896CC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08896CC4;
L_08896CC4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896CD0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24828)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(26360));
      if (branch_taken) {
          goto L_08896CC0;
      }
      goto L_08896CE8;
    }
L_08896CE8:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08896CF4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24824)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08896CF4u) goto L_08896CF4;
    return;
L_08896CF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08896CC4;
L_08896CFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08896D18;
      }
      goto L_08896D08;
    }
L_08896D08:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    goto L_08896D0C;
L_08896D0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896D18:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24828)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(26360));
      if (branch_taken) {
          goto L_08896D38;
      }
      goto L_08896D30;
    }
L_08896D30:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08896D0C;
L_08896D38:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08896D44u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24824)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08896D44u) goto L_08896D44;
    return;
L_08896D44:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08896D0C;
L_08896D4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08896D68;
      }
      goto L_08896D58;
    }
L_08896D58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08896D5C;
L_08896D5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896D68:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24828)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(26384));
      if (branch_taken) {
          goto L_08896D88;
      }
      goto L_08896D80;
    }
L_08896D80:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08896D5C;
L_08896D88:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08896D94u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24824)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08896D94u) goto L_08896D94;
    return;
L_08896D94:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08896D5C;
L_08896D9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08896E04;
      }
      goto L_08896DA8;
    }
L_08896DA8:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    if (ctx.gpr[5] == 0u) {
    ctx.pc = 0x08896DC8u; rt.stop("Allegrex BREAK code 7 at 0x08896DC8"); return;
        goto L_08896DCC;
    }
    goto L_08896DCC;
L_08896DCC:
    ctx.set_gpr(11, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(10, ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.set_gpr(5, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_08896DF8;
L_08896DF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08896DFC;
L_08896DFC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896E04:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24828)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(26408));
      if (branch_taken) {
          goto L_08896DF8;
      }
      goto L_08896E1C;
    }
L_08896E1C:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08896E28u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24824)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08896E28u) goto L_08896E28;
    return;
L_08896E28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08896DFC;
L_08896E30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08896E4C;
      }
      goto L_08896E3C;
    }
L_08896E3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08896E40;
L_08896E40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08896E4C:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24828)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(26360));
      if (branch_taken) {
          goto L_08896E6C;
      }
      goto L_08896E64;
    }
L_08896E64:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08896E40;
L_08896E6C:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08896E78u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24824)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08896E78u) goto L_08896E78;
    return;
L_08896E78:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08896E40;
L_0889700C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(6, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(32624));
    ctx.set_gpr(7, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_08897040;
L_08897040:
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088970EC;
      }
      goto L_0889704C;
    }
L_0889704C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088970EC;
      }
      goto L_08897060;
    }
L_08897060:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088970EC;
      }
      goto L_08897074;
    }
L_08897074:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088970EC;
      }
      goto L_08897088;
    }
L_08897088:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088970EC;
      }
      goto L_0889709C;
    }
L_0889709C:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088970EC;
      }
      goto L_088970B0;
    }
L_088970B0:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088970EC;
      }
      goto L_088970C4;
    }
L_088970C4:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088970EC;
      }
      goto L_088970DC;
    }
L_088970DC:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[7]) < 16 ? 1u : 0u);
    if (ctx.gpr[13] != 0u) {
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
        goto L_08897040;
    }
    goto L_088970EC;
L_088970EC:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[14];
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08897238;
      }
      goto L_088970F8;
    }
L_088970F8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(7, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088971A8;
      }
      goto L_08897138;
    }
L_08897138:
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(3, ctx.gpr[16] & 3u);
      if (branch_taken) {
          goto L_08897258;
      }
      goto L_08897148;
    }
L_08897148:
    ctx.set_gpr(11, ctx.gpr[7] << 2u);
    ctx.set_gpr(12, ctx.gpr[11] + ctx.gpr[19]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[11] + ctx.gpr[5]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088971A8;
      }
      goto L_08897168;
    }
L_08897168:
    ctx.set_gpr(13, ctx.gpr[7] << 2u);
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[13] + ctx.gpr[19]);
    goto L_08897174;
L_08897174:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[25]);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[24]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08897174;
      }
      goto L_088971A8;
    }
L_088971A8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(47))))));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088971B8u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 603u, 0x0889A5CCu>(ctx, &aot_mem) && ctx.pc == 0x088971B8u) goto L_088971B8;
    return;
L_088971B8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08897238;
      }
      goto L_088971C4;
    }
L_088971C4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-24756)));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), 0u);
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x08897210u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08897210u) goto L_08897210;
    return;
L_08897210:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x08897228u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08897228u) goto L_08897228;
    return;
L_08897228:
    ctx.set_gpr(7, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[18] + 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08897238;
L_08897238:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897258:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08897168;
      }
      goto L_08897260;
    }
L_08897260:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08897148;
      }
      goto L_08897268;
    }
L_08897268:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
      if (branch_taken) {
          goto L_08897280;
      }
      goto L_08897270;
    }
L_08897270:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
    goto L_08897280;
L_08897280:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[19]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08897148;
L_08897298:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[4]) {
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
        goto L_08897380;
    }
    goto L_088972C0;
L_088972C0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    goto L_088972C4;
L_088972C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088972EC;
      }
      goto L_088972D4;
    }
L_088972D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088972EC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0889735C;
      }
      goto L_088972F8;
    }
L_088972F8:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08897300;
L_08897300:
    ctx.set_gpr(11, 32767u << 16u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[11] | 65535u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x08897320u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08897320u) goto L_08897320;
    return;
L_08897320:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08897330u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08897330u) goto L_08897330;
    return;
L_08897330:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x0889734Cu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889734Cu) goto L_0889734C;
    return;
L_0889734C:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45))))));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08897300;
    }
    goto L_0889735C;
L_0889735C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(14, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
      if (branch_taken) {
          goto L_088972D4;
      }
      goto L_08897378;
    }
L_08897378:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    goto L_088972D4;
L_08897380:
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
        goto L_088972C4;
    }
    goto L_08897388;
L_08897388:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    goto L_088972C0;
L_0889739C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24752)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(648)));
      if (branch_taken) {
          goto L_088973D4;
      }
      goto L_088973BC;
    }
L_088973BC:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-24752), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088973D4:
    ctx.set_gpr(31, 0x088973DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 811u, 0x0889B460u>(ctx, &aot_mem) && ctx.pc == 0x088973DCu) goto L_088973DC;
    return;
L_088973DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-24704));
    ctx.set_gpr(31, 0x088973F0u);
    ctx.set_gpr(6, 0u | 32768u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 783u, 0x0889B2A0u>(ctx, &aot_mem) && ctx.pc == 0x088973F0u) goto L_088973F0;
    return;
L_088973F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-24752)));
    goto L_088973BC;
L_088973F8:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24752)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-24752), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08897420;
      }
      goto L_08897414;
    }
L_08897414:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08897418;
L_08897418:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897420:
    ctx.set_gpr(31, 0x08897428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 557u, 0x0889A42Cu>(ctx, &aot_mem) && ctx.pc == 0x08897428u) goto L_08897428;
    return;
L_08897428:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08897418;
L_08897430:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08897460;
      }
      goto L_0889744C;
    }
L_0889744C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08897450;
L_08897450:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897460:
    ctx.set_gpr(31, 0x08897468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 682u, 0x0889A9F0u>(ctx, &aot_mem) && ctx.pc == 0x08897468u) goto L_08897468;
    return;
L_08897468:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08897450;
L_088974CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08897518;
      }
      goto L_088974F0;
    }
L_088974F0:
    ctx.set_gpr(31, 0x088974F8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 704u, 0x0889AB18u>(ctx, &aot_mem) && ctx.pc == 0x088974F8u) goto L_088974F8;
    return;
L_088974F8:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[16]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08897504;
L_08897504:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897518:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(45))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08897554;
      }
      goto L_08897528;
    }
L_08897528:
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08897530;
L_08897530:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x08897544u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08897544u) goto L_08897544;
    return;
L_08897544:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08897530;
    }
    goto L_08897554;
L_08897554:
    ctx.set_gpr(31, 0x0889755Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 823u, 0x0889B560u>(ctx, &aot_mem) && ctx.pc == 0x0889755Cu) goto L_0889755C;
    return;
L_0889755C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08897504;
L_08897564:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08897578;
      }
      goto L_08897570;
    }
L_08897570:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897578:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897580:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08897590u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 834u, 0x0889B5F4u>(ctx, &aot_mem) && ctx.pc == 0x08897590u) goto L_08897590;
    return;
L_08897590:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889759C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088975ACu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 841u, 0x0889B670u>(ctx, &aot_mem) && ctx.pc == 0x088975ACu) goto L_088975AC;
    return;
L_088975AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897648:
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24768), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897654:
    ctx.set_gpr(4, 2245u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24768)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088976A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088976CCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 849u, 0x0889B758u>(ctx, &aot_mem) && ctx.pc == 0x088976CCu) goto L_088976CC;
    return;
L_088976CC:
    ctx.set_gpr(3, 0u | 44100u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088976EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[5] >> 31u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
      if (branch_taken) {
          goto L_08897754;
      }
      goto L_0889771C;
    }
L_0889771C:
    ctx.set_gpr(31, 0x08897724u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 847u, 0x0889B72Cu>(ctx, &aot_mem) && ctx.pc == 0x08897724u) goto L_08897724;
    return;
L_08897724:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[10] >> 31u);
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[8]);
    goto L_0889773C;
L_0889773C:
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
L_08897754:
    ctx.set_gpr(31, 0x0889775Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 847u, 0x0889B72Cu>(ctx, &aot_mem) && ctx.pc == 0x0889775Cu) goto L_0889775C;
    return;
L_0889775C:
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[2]);
    goto L_0889773C;
L_08897764:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08897774u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 847u, 0x0889B72Cu>(ctx, &aot_mem) && ctx.pc == 0x08897774u) goto L_08897774;
    return;
L_08897774:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897780:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088977A0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 483u, 0x0889E964u>(ctx, &aot_mem) && ctx.pc == 0x088977A0u) goto L_088977A0;
    return;
L_088977A0:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(32624));
    goto L_088977A8;
L_088977A8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088978A8;
      }
      goto L_088977B4;
    }
L_088977B4:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    goto L_088977B8;
L_088977B8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08897898;
      }
      goto L_088977C0;
    }
L_088977C0:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(112))))));
    goto L_088977C4;
L_088977C4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08897888;
      }
      goto L_088977CC;
    }
L_088977CC:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(168))))));
    goto L_088977D0;
L_088977D0:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_08897878;
      }
      goto L_088977D8;
    }
L_088977D8:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(224))))));
    goto L_088977DC;
L_088977DC:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_08897868;
      }
      goto L_088977E4;
    }
L_088977E4:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(280))))));
    goto L_088977E8;
L_088977E8:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(280));
      if (branch_taken) {
          goto L_08897858;
      }
      goto L_088977F0;
    }
L_088977F0:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(336))))));
    goto L_088977F4;
L_088977F4:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_08897848;
      }
      goto L_088977FC;
    }
L_088977FC:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(392))))));
    goto L_08897800;
L_08897800:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(392));
      if (branch_taken) {
          goto L_08897838;
      }
      goto L_08897808;
    }
L_08897808:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    goto L_08897810;
L_08897810:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(448));
      if (branch_taken) {
          goto L_088977A8;
      }
      goto L_08897818;
    }
L_08897818:
    ctx.set_gpr(31, 0x08897820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 484u, 0x0889E978u>(ctx, &aot_mem) && ctx.pc == 0x08897820u) goto L_08897820;
    return;
L_08897820:
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
L_08897838:
    ctx.set_gpr(31, 0x08897840u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_08897298;
L_08897840:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    goto L_08897810;
L_08897848:
    ctx.set_gpr(31, 0x08897850u);
    // nop
    goto L_08897298;
L_08897850:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(392))))));
    goto L_08897800;
L_08897858:
    ctx.set_gpr(31, 0x08897860u);
    // nop
    goto L_08897298;
L_08897860:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(336))))));
    goto L_088977F4;
L_08897868:
    ctx.set_gpr(31, 0x08897870u);
    // nop
    goto L_08897298;
L_08897870:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(280))))));
    goto L_088977E8;
L_08897878:
    ctx.set_gpr(31, 0x08897880u);
    // nop
    goto L_08897298;
L_08897880:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(224))))));
    goto L_088977DC;
L_08897888:
    ctx.set_gpr(31, 0x08897890u);
    // nop
    goto L_08897298;
L_08897890:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(168))))));
    goto L_088977D0;
L_08897898:
    ctx.set_gpr(31, 0x088978A0u);
    // nop
    goto L_08897298;
L_088978A0:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(112))))));
    goto L_088977C4;
L_088978A8:
    ctx.set_gpr(31, 0x088978B0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08897298;
L_088978B0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    goto L_088977B8;
L_088978B8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088978CCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(26748));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 918u, 0x08883C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088978CCu) goto L_088978CC;
    return;
L_088978CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088978D8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088978E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088978F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 718u, 0x0889ABDCu>(ctx, &aot_mem) && ctx.pc == 0x088978F0u) goto L_088978F0;
    return;
L_088978F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088978FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0889790Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 844u, 0x0889B694u>(ctx, &aot_mem) && ctx.pc == 0x0889790Cu) goto L_0889790C;
    return;
L_0889790C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897918:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-999));
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? ctx.gpr[5] : ctx.gpr[3]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[4]) > static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[4] : ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08897984;
      }
      goto L_08897950;
    }
L_08897950:
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(652));
    ctx.set_gpr(18, ctx.gpr[5] - ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08897964;
L_08897964:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08897974u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 725u, 0x0889AC50u>(ctx, &aot_mem) && ctx.pc == 0x08897974u) goto L_08897974;
    return;
L_08897974:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08897964;
    }
    goto L_08897984;
L_08897984:
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
L_0889799C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[6]) > static_cast<std::int32_t>(ctx.gpr[3]) ? ctx.gpr[6] : ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[5] << 2u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[4]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.set_gpr(31, 0x088979C8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 730u, 0x0889ADF0u>(ctx, &aot_mem) && ctx.pc == 0x088979C8u) goto L_088979C8;
    return;
L_088979C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088979D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088979DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(26788));
      if (branch_taken) {
          goto L_088979FC;
      }
      goto L_088979F4;
    }
L_088979F4:
    ctx.set_gpr(31, 0x088979FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 918u, 0x08883C3Cu>(ctx, &aot_mem) && ctx.pc == 0x088979FCu) goto L_088979FC;
    return;
L_088979FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897A10:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897A18:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897A28:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897A30:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897B18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08897B3Cu);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 780u, 0x0889B214u>(ctx, &aot_mem) && ctx.pc == 0x08897B3Cu) goto L_08897B3C;
    return;
L_08897B3C:
    ctx.set_gpr(31, 0x08897B44u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 781u, 0x0889B22Cu>(ctx, &aot_mem) && ctx.pc == 0x08897B44u) goto L_08897B44;
    return;
L_08897B44:
    ctx.set_gpr(31, 0x08897B4Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 851u, 0x0889B77Cu>(ctx, &aot_mem) && ctx.pc == 0x08897B4Cu) goto L_08897B4C;
    return;
L_08897B4C:
    ctx.set_gpr(31, 0x08897B54u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 857u, 0x0889B7ACu>(ctx, &aot_mem) && ctx.pc == 0x08897B54u) goto L_08897B54;
    return;
L_08897B54:
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
L_08897B6C:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(31, 0x08897B94u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08897B94u) goto L_08897B94;
    return;
L_08897B94:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) ctx.set_gpr(5, ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08897C18;
      }
      goto L_08897BAC;
    }
L_08897BAC:
    ctx.set_gpr(4, ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[5] & 3u);
      if (branch_taken) {
          goto L_08897EF4;
      }
      goto L_08897BBC;
    }
L_08897BBC:
    ctx.set_gpr(13, ctx.gpr[17] + ctx.gpr[7]);
    goto L_08897BC0;
L_08897BC0:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[6];
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08897D60;
      }
      goto L_08897BCC;
    }
L_08897BCC:
    ctx.set_gpr(14, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(19, 2245u << 16u);
      if (branch_taken) {
          goto L_08897C1C;
      }
      goto L_08897BD8;
    }
L_08897BD8:
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[17]);
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_08897BE0;
L_08897BE0:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[6];
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08897D60;
      }
      goto L_08897BEC;
    }
L_08897BEC:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08897D60;
      }
      goto L_08897BF8;
    }
L_08897BF8:
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08897D60;
      }
      goto L_08897C04;
    }
L_08897C04:
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[6];
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08897D60;
      }
      goto L_08897C10;
    }
L_08897C10:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
        goto L_08897BE0;
    }
    goto L_08897C18;
L_08897C18:
    ctx.set_gpr(19, 2245u << 16u);
    goto L_08897C1C;
L_08897C1C:
    ctx.set_gpr(18, ctx.gpr[19] + static_cast<std::uint32_t>(8348));
    ctx.set_gpr(31, 0x08897C28u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08897C28u) goto L_08897C28;
    return;
L_08897C28:
    ctx.set_gpr(7, ctx.gpr[2] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    if (ctx.gpr[7] == 0u) ctx.set_gpr(5, ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08897CAC;
      }
      goto L_08897C40;
    }
L_08897C40:
    ctx.set_gpr(25, ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.set_gpr(3, ctx.gpr[5] & 3u);
      if (branch_taken) {
          goto L_08897EB8;
      }
      goto L_08897C50;
    }
L_08897C50:
    ctx.set_gpr(12, ctx.gpr[18] + ctx.gpr[7]);
    goto L_08897C54;
L_08897C54:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[6];
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897C60;
    }
L_08897C60:
    ctx.set_gpr(2, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08897CAC;
      }
      goto L_08897C6C;
    }
L_08897C6C:
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[18]);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08897C74;
L_08897C74:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[6];
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897C80;
    }
L_08897C80:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[14] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897C8C;
    }
L_08897C8C:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897C98;
    }
L_08897C98:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897CA4;
    }
L_08897CA4:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_08897C74;
    }
    goto L_08897CAC;
L_08897CAC:
    ctx.set_gpr(31, 0x08897CB4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08897CB4u) goto L_08897CB4;
    return;
L_08897CB4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(16));
    if (ctx.gpr[6] == 0u) ctx.set_gpr(5, ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08897D38;
      }
      goto L_08897CCC;
    }
L_08897CCC:
    ctx.set_gpr(25, ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.set_gpr(3, ctx.gpr[5] & 3u);
      if (branch_taken) {
          goto L_08897E7C;
      }
      goto L_08897CDC;
    }
L_08897CDC:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[7]);
    goto L_08897CE0;
L_08897CE0:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[6];
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897CEC;
    }
L_08897CEC:
    ctx.set_gpr(12, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(2, 2245u << 16u);
      if (branch_taken) {
          goto L_08897D3C;
      }
      goto L_08897CF8;
    }
L_08897CF8:
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[17]);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_08897D00;
L_08897D00:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[6];
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897D0C;
    }
L_08897D0C:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[14] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897D18;
    }
L_08897D18:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897D24;
    }
L_08897D24:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[6];
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897D30;
    }
L_08897D30:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
        goto L_08897D00;
    }
    goto L_08897D38;
L_08897D38:
    ctx.set_gpr(2, 2245u << 16u);
    goto L_08897D3C;
L_08897D3C:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8608));
    ctx.set_gpr(31, 0x08897D48u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08897D48u) goto L_08897D48;
    return;
L_08897D48:
    ctx.set_gpr(31, 0x08897D50u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08897D50u) goto L_08897D50;
    return;
L_08897D50:
    ctx.set_gpr(24, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(8348));
    ctx.set_gpr(31, 0x08897D60u);
    ctx.set_gpr(4, ctx.gpr[24] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08897D60u) goto L_08897D60;
    return;
L_08897D60:
    ctx.set_gpr(31, 0x08897D68u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08897D68u) goto L_08897D68;
    return;
L_08897D68:
    ctx.set_gpr(19, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08897D78u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08897D78u) goto L_08897D78;
    return;
L_08897D78:
    ctx.set_gpr(31, 0x08897D80u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08897D80u) goto L_08897D80;
    return;
L_08897D80:
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08897E18;
      }
      goto L_08897D8C;
    }
L_08897D8C:
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(47));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08897E3C;
      }
      goto L_08897DA0;
    }
L_08897DA0:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[7] == ctx.gpr[9]) {
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
        goto L_08897DB0;
    }
    goto L_08897DB0;
L_08897DB0:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08897E1C;
      }
      goto L_08897DC0;
    }
L_08897DC0:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[5]);
    goto L_08897DC4;
L_08897DC4:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(15, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(13, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[16] + ctx.gpr[15]);
    ctx.set_gpr(7, ctx.gpr[16] + ctx.gpr[14]);
    ctx.set_gpr(8, ctx.gpr[16] + ctx.gpr[13]);
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[9];
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08897E34;
      }
      goto L_08897DEC;
    }
L_08897DEC:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[18] == ctx.gpr[9]) {
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
        goto L_08897DF8;
    }
    goto L_08897DF8;
L_08897DF8:
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[24] == ctx.gpr[9]) {
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
        goto L_08897E04;
    }
    goto L_08897E04;
L_08897E04:
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[19] == ctx.gpr[9]) {
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
        goto L_08897E10;
    }
    goto L_08897E10;
L_08897E10:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[5]);
        goto L_08897DC4;
    }
    goto L_08897E18;
L_08897E18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08897E1C;
L_08897E1C:
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
L_08897E34:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    goto L_08897DEC;
L_08897E3C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08897DC0;
      }
      goto L_08897E44;
    }
L_08897E44:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08897DA0;
      }
      goto L_08897E4C;
    }
L_08897E4C:
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08897E68;
      }
      goto L_08897E54;
    }
L_08897E54:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[4] == ctx.gpr[9]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
        goto L_08897E60;
    }
    goto L_08897E60;
L_08897E60:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[5]);
    goto L_08897E68;
L_08897E68:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[8] == ctx.gpr[9]) {
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
        goto L_08897E74;
    }
    goto L_08897E74;
L_08897E74:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08897DA0;
L_08897E7C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08897CF8;
      }
      goto L_08897E84;
    }
L_08897E84:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08897CDC;
      }
      goto L_08897E8C;
    }
L_08897E8C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(10, ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08897EA4;
      }
      goto L_08897E94;
    }
L_08897E94:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897EA0;
    }
L_08897EA0:
    ctx.set_gpr(10, ctx.gpr[17] + ctx.gpr[7]);
    goto L_08897EA4;
L_08897EA4:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[6];
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897EB0;
    }
L_08897EB0:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[7]);
    goto L_08897CE0;
L_08897EB8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08897C6C;
      }
      goto L_08897EC0;
    }
L_08897EC0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08897C50;
      }
      goto L_08897EC8;
    }
L_08897EC8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08897EE0;
      }
      goto L_08897ED0;
    }
L_08897ED0:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(8348))))));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[6];
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897EDC;
    }
L_08897EDC:
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[18]);
    goto L_08897EE0;
L_08897EE0:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[6];
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08897D48;
      }
      goto L_08897EEC;
    }
L_08897EEC:
    ctx.set_gpr(12, ctx.gpr[18] + ctx.gpr[7]);
    goto L_08897C54;
L_08897EF4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08897BD8;
      }
      goto L_08897EFC;
    }
L_08897EFC:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08897BBC;
      }
      goto L_08897F04;
    }
L_08897F04:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(11, ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08897F1C;
      }
      goto L_08897F0C;
    }
L_08897F0C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08897D60;
      }
      goto L_08897F18;
    }
L_08897F18:
    ctx.set_gpr(11, ctx.gpr[17] + ctx.gpr[7]);
    goto L_08897F1C;
L_08897F1C:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[6];
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08897D60;
      }
      goto L_08897F28;
    }
L_08897F28:
    ctx.set_gpr(13, ctx.gpr[17] + ctx.gpr[7]);
    goto L_08897BC0;
L_08897F30:
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8064)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08897F54;
      }
      goto L_08897F48;
    }
L_08897F48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08897F4C;
L_08897F4C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897F54:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08897F60u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8068)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08897F60u) goto L_08897F60;
    return;
L_08897F60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08897F4C;
L_08897F68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(8088));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.set_gpr(31, 0x08897FACu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1u, 0x0881C004u>(ctx, &aot_mem) && ctx.pc == 0x08897FACu) goto L_08897FAC;
    return;
L_08897FAC:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8064)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08897FE0;
      }
      goto L_08897FC4;
    }
L_08897FC4:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08897FC8;
L_08897FC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08897FE0:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08897FECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8068)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08897FECu) goto L_08897FEC;
    return;
L_08897FEC:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08897FC8;
L_08897FF4:
    ctx.set_gpr(3, 2227u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4664)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.pc = 0x08898000u; return;
}

void recomp_unit_0036(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0036_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_36(Runtime &runtime) {
    runtime.register_generated_unit(36u, 0x08894000u, 16384u, &recomp_unit_0036, &recomp_unit_0036_entry);
    runtime.register_function(0x08894018u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894058u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894078u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088940F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889410Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894124u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889413Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894158u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894160u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894164u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889416Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894170u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088941F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894204u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889420Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894224u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894228u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894234u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889423Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894244u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889425Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894274u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894288u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889429Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088942F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894308u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894318u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894328u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894338u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894348u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894358u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894368u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894378u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894384u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088943FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894408u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894414u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894420u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894428u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889443Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894448u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894454u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894458u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894460u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894470u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894478u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894480u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889448Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894498u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088944FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894504u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894514u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889451Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889452Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894534u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889453Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894544u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894550u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889456Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894574u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889457Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889458Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894594u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088945BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894778u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894784u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894794u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894798u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088947FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894828u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894834u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894860u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894884u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088948B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088948C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088948CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088948D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088948E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088948E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894900u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894904u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894910u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894918u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889493Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894950u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894958u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894960u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894974u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894988u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894990u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894998u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088949F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894A48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894AB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894AE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894B8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894BF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894C9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894CFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894D9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894DF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894E98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894ECCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894ED4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894EFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08894F50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889534Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895368u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895374u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895384u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895394u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889539Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088953C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895460u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895474u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895478u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895480u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895494u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889549Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088954F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895510u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895518u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895530u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895540u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895554u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895568u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889557Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895590u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088955ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895608u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895620u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895694u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889569Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088956E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895728u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895738u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895740u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895798u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088957D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889581Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895868u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889586Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889589Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088958FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895904u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895910u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895918u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895920u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895928u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895938u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895944u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895954u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895960u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088959F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895A90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895ABCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895ADCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AF0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895AFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B20u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895B9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BD4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895BF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895C78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895CD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D2Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D70u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895D8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895DDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895E88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895EFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F90u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895F98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08895FA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896050u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896058u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896084u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896098u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088960FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896114u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896128u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889613Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896150u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896164u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889616Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896174u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896188u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896198u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088961E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896200u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896230u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896254u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896278u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896288u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889629Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088962F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896304u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896314u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896328u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889634Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896354u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889635Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896364u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889637Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896380u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896398u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088963F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896400u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896430u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896438u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896440u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896448u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896454u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889647Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896488u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896490u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088964FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896500u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896514u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896524u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889652Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896534u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896540u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896544u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889655Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896570u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896580u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896588u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896590u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088965F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896604u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889660Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896618u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896628u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889662Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896634u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889663Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896648u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889665Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889666Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896684u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088966F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896708u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896710u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896718u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896720u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896728u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896734u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896738u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889674Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889675Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896760u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896768u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896774u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896778u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896780u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967A4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088967FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896804u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896810u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896818u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896820u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889682Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896830u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896844u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896854u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896858u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896860u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889686Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896870u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896878u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889689Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088968C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896900u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896968u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896988u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088969FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896A88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BE4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896BF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C14u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896C9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CD0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CE8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896CFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D08u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D58u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D5Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D88u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896D9Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DA8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896DFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E64u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08896E78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889700Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897040u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889704Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897060u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897074u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897088u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889709Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088970F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897138u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897148u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897168u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897174u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088971C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897210u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897228u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897238u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897258u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897260u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897268u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897270u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897280u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897298u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088972F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897300u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897320u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897330u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889734Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889735Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897378u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897380u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897388u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889739Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973BCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088973F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897414u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897418u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897420u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897428u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897430u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889744Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897450u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897460u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897468u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088974F8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897504u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897518u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897528u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897530u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897544u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897554u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889755Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897564u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897570u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897578u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897580u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897590u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889759Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088975ACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897648u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897654u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088976ECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889771Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897724u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889773Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897754u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889775Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897764u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897774u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897780u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977B4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977C0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977C4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977D0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977E4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977E8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088977FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897800u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897808u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897810u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897818u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897820u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897838u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897840u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897848u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897850u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897858u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897860u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897868u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897870u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897878u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897880u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897888u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897890u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897898u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978A0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978A8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978B0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978B8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978CCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978D8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978E0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978F0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088978FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889790Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897918u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897950u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897964u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897974u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897984u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x0889799Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979C8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979D4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979DCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979F4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x088979FCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897A30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897B94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BBCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BD8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897BF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C40u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C6Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897C98u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CB4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CCCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897CF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D00u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D24u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D38u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D50u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D78u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D80u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897D8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897DF8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E10u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E34u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E3Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E44u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E74u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E7Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E84u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E8Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897E94u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EA0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EA4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EB0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EB8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EC0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897ED0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EDCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EF4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897EFCu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F04u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F0Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F18u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F1Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F28u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F30u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F48u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F4Cu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F54u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F60u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897F68u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FACu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FC4u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FC8u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FE0u, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FECu, &recomp_unit_0036, "recomp_unit_0036");
    runtime.register_function(0x08897FF4u, &recomp_unit_0036, "recomp_unit_0036");
}
} // namespace psprecomp
