#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0193[4093] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 13, 0, 0, 0, 14, 0, 0, 15, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 40, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47,
    0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 83, 0, 0, 84, 0, 0, 0, 85, 0, 86,
    0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0,
    99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 104,
    0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 129, 0, 0, 130, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 0, 0, 160,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0,
    172, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    185, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0,
    192, 0, 193, 0, 194, 0, 195, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202,
    203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213,
    0, 214, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 219, 0, 0, 220, 0, 0, 0, 0, 221,
    0, 0, 0, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240,
    0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 252, 0, 253,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276,
    0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0,
    0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 290,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 298,
    0, 299, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0,
    309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 0,
    315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 332,
    0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 336, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 341, 0,
    0, 342, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 350,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355,
    0, 356, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 364, 0, 0, 365, 0, 366,
    0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 380, 381, 0, 382, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 386, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 391, 0, 392, 0, 0, 393, 0, 394,
    0, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0,
    412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    419, 0, 0, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429,
    0, 430, 0, 0, 431, 0, 432, 0, 433, 0, 0, 434, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 439, 0, 440, 441, 0, 0, 0, 0,
    442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 445, 0, 446, 0, 0, 0, 0, 447, 0, 448, 0, 449, 0, 450, 0, 0, 451, 0, 452, 0,
    453, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 458, 0, 0, 459, 0, 460, 0, 461,
    0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 465, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0, 0, 471, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 475, 0, 0, 0,
    476, 0, 477, 0, 0, 478, 479, 0, 480, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 485, 0, 0,
    0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490,
    0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    494, 0, 0, 0, 0, 495, 0, 496, 0, 0, 497, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 505, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 510, 0, 0, 0,
    0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 515, 0, 516, 0, 0, 0, 517, 0, 518, 0, 519, 0,
    0, 0, 520, 0, 521, 0, 522, 0, 0, 0, 523, 0, 524, 0, 525, 0, 0, 0, 526, 0, 527, 0, 528, 0, 0, 0, 529, 0, 530, 0, 531, 0,
    0, 0, 532, 533, 0, 534, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0,
    540, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 545, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 550, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 553, 0, 0, 554, 0, 555, 0, 556, 0, 0, 557, 0, 558, 0, 0, 559, 0, 560, 0,
    561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0,
    567, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 571, 0, 572, 0, 573, 0, 0, 574, 0, 575, 0, 0, 576, 0, 0,
    0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 579, 0, 0, 580, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 584, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 591, 0, 592, 0, 0, 0, 593, 0, 594, 0, 595, 0, 596, 0, 0, 0, 0, 0, 597,
    0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0,
    604, 0, 0, 0, 0, 605, 0, 0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615,
    0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 620,
    0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0,
    0, 0, 0, 628, 0, 629, 0, 630, 0, 0, 631, 0, 632, 0, 0, 633, 0, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 0, 0, 0, 639,
    0, 640, 0, 0, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 647, 0, 648, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 650, 0, 651, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 657, 0, 0, 0,
    658, 0, 0, 659, 0, 0, 660, 0, 661, 0, 662, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 666, 0, 0, 0, 667, 0, 668, 0,
    669, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 675, 676, 0, 677, 0, 0, 0,
    0, 0, 678, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0,
    0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 693, 0, 694, 0, 695, 0, 696, 0, 697, 0, 0, 0, 698, 0,
    699, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 0, 705, 0, 706, 0, 707,
    0, 708, 0, 0, 709, 0, 0, 0, 710, 0, 0, 711, 0, 712, 0, 0, 713, 0, 0, 0, 714, 0, 715, 0, 0, 716, 0, 0, 0, 717, 0, 0,
    718, 0, 719, 0, 0, 720, 0, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 724, 0, 0, 0, 725, 0, 0, 726, 0, 727, 0,
    0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 729, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 734,
    0, 735, 0, 0, 736, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0,
    741, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 0, 748, 0, 749,
    0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 760, 0, 0, 761, 0, 762, 0,
    763, 0, 0, 764, 0, 765, 0, 0, 766, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 773, 0, 0, 774, 0, 775, 0, 776, 0, 0, 0,
    777, 0, 778, 0, 779, 0, 0, 0, 780, 0, 781, 0, 782, 0, 0, 0, 783, 0, 784, 0, 785, 0, 0, 0, 786, 0, 0, 787, 0, 0, 0, 0,
    0, 788, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 791, 792, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 794, 0, 0, 795,
    0, 796, 0, 797, 0, 0, 0, 0, 798, 0, 799, 0, 800, 0, 801, 0, 0, 802, 0, 803, 0, 804, 0, 0, 0, 0, 805, 0, 0, 0, 806, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 808, 0, 809, 0, 0, 810, 0, 811, 0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 814, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 815, 816, 0, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0,
    820, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0,
    0, 824, 0, 0, 825, 0, 826, 0, 0, 0, 827, 0, 828, 0, 829, 0, 830, 0, 0, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 833, 0, 834, 0, 835, 0, 0, 836, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 0, 839, 0, 0, 840,
    0, 841, 0, 842, 0, 843, 0, 844, 0, 845, 0, 846, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 850, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 0, 0, 853, 0, 0, 854, 0, 855, 0, 0, 856, 0, 0, 857, 0,
    0, 0, 0, 0, 0, 858, 0, 0, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 861, 0, 0, 862, 0, 0, 863, 0, 864, 865,
    0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 0, 0, 870, 0, 0, 0, 0, 0, 871, 0, 0, 0, 0, 0,
    0, 872, 0, 0, 0, 0, 0, 873, 0, 0, 874, 0, 0, 875, 0, 876, 877, 0, 0, 0, 0, 878, 0, 879, 0, 0, 0, 0, 0, 0, 0, 880,
    0, 881, 0, 0, 0, 882, 0, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 884, 0, 885, 0, 0, 0, 886, 0, 0, 0, 0, 0, 887,
    0, 0, 888, 0, 889, 890, 0, 891, 0, 0, 0, 0, 0, 0, 0, 0, 892, 0, 0, 893, 0, 894, 0, 895, 0, 896, 0, 0, 897, 0, 0, 898,
    0, 899, 0, 900, 0, 901, 0, 902, 0, 903, 0, 904, 0, 905, 0, 906, 0, 0, 0, 907, 0, 0, 908, 0, 909, 0, 0, 0, 0, 910, 0, 0,
    0, 0, 0, 0, 0, 911, 0, 0, 912, 0, 913, 0, 0, 0, 914, 0, 0, 0, 0, 0, 915, 0, 916, 0, 917, 0, 0, 0, 0, 0, 0, 0,
    918, 0, 0, 919, 0, 920, 0, 0, 0, 921, 0, 0, 0, 0, 0, 922, 0, 923, 0, 924, 0, 0, 925, 0, 0, 926, 0, 0, 927, 0, 928, 0,
    929, 0, 0, 930, 0, 931, 0, 0, 932, 0, 933, 0, 0, 934, 0, 935, 0, 0, 936, 0, 0, 937, 0, 0, 938, 0, 939, 940, 941, 0, 0, 0,
    0, 0, 942, 943, 0, 944, 0, 0, 0, 0, 0, 0, 0, 945, 0, 0, 0, 0, 0, 946, 0, 0, 947, 0, 0, 0, 948, 0, 0, 0, 0, 0,
    949, 0, 0, 0, 950, 0, 0, 0, 0, 0, 0, 0, 951, 0, 0, 0, 0, 0, 0, 0, 0, 952, 0, 953, 0, 0, 0, 0, 954,
};
void recomp_unit_0193_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B08000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0193[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B08000;
    case 2u: goto L_08B08008;
    case 3u: goto L_08B0801C;
    case 4u: goto L_08B08044;
    case 5u: goto L_08B0804C;
    case 6u: goto L_08B08058;
    case 7u: goto L_08B08060;
    case 8u: goto L_08B08070;
    case 9u: goto L_08B08088;
    case 10u: goto L_08B08090;
    case 11u: goto L_08B080B4;
    case 12u: goto L_08B080C0;
    case 13u: goto L_08B080C4;
    case 14u: goto L_08B080D4;
    case 15u: goto L_08B080E0;
    case 16u: goto L_08B080E4;
    case 17u: goto L_08B0811C;
    case 18u: goto L_08B08130;
    case 19u: goto L_08B08158;
    case 20u: goto L_08B08160;
    case 21u: goto L_08B0816C;
    case 22u: goto L_08B08174;
    case 23u: goto L_08B08198;
    case 24u: goto L_08B081A0;
    case 25u: goto L_08B081A8;
    case 26u: goto L_08B081B8;
    case 27u: goto L_08B081C0;
    case 28u: goto L_08B081C8;
    case 29u: goto L_08B081DC;
    case 30u: goto L_08B081EC;
    case 31u: goto L_08B08214;
    case 32u: goto L_08B0821C;
    case 33u: goto L_08B08230;
    case 34u: goto L_08B08238;
    case 35u: goto L_08B08240;
    case 36u: goto L_08B0824C;
    case 37u: goto L_08B08254;
    case 38u: goto L_08B0825C;
    case 39u: goto L_08B08270;
    case 40u: goto L_08B08294;
    case 41u: goto L_08B08298;
    case 42u: goto L_08B082AC;
    case 43u: goto L_08B082C4;
    case 44u: goto L_08B082D8;
    case 45u: goto L_08B08334;
    case 46u: goto L_08B08368;
    case 47u: goto L_08B0837C;
    case 48u: goto L_08B0838C;
    case 49u: goto L_08B08398;
    case 50u: goto L_08B083C0;
    case 51u: goto L_08B083CC;
    case 52u: goto L_08B08408;
    case 53u: goto L_08B08410;
    case 54u: goto L_08B08440;
    case 55u: goto L_08B08448;
    case 56u: goto L_08B08458;
    case 57u: goto L_08B08460;
    case 58u: goto L_08B08488;
    case 59u: goto L_08B084BC;
    case 60u: goto L_08B084C4;
    case 61u: goto L_08B084E4;
    case 62u: goto L_08B084EC;
    case 63u: goto L_08B084FC;
    case 64u: goto L_08B08504;
    case 65u: goto L_08B0852C;
    case 66u: goto L_08B08544;
    case 67u: goto L_08B0854C;
    case 68u: goto L_08B0857C;
    case 69u: goto L_08B08584;
    case 70u: goto L_08B08594;
    case 71u: goto L_08B0859C;
    case 72u: goto L_08B085C4;
    case 73u: goto L_08B085F8;
    case 74u: goto L_08B08600;
    case 75u: goto L_08B08628;
    case 76u: goto L_08B08630;
    case 77u: goto L_08B08640;
    case 78u: goto L_08B08648;
    case 79u: goto L_08B08670;
    case 80u: goto L_08B08690;
    case 81u: goto L_08B08698;
    case 82u: goto L_08B086D4;
    case 83u: goto L_08B086D8;
    case 84u: goto L_08B086E4;
    case 85u: goto L_08B086F4;
    case 86u: goto L_08B086FC;
    case 87u: goto L_08B08710;
    case 88u: goto L_08B08718;
    case 89u: goto L_08B0872C;
    case 90u: goto L_08B08734;
    case 91u: goto L_08B08748;
    case 92u: goto L_08B0879C;
    case 93u: goto L_08B087B4;
    case 94u: goto L_08B087C4;
    case 95u: goto L_08B087D0;
    case 96u: goto L_08B087D4;
    case 97u: goto L_08B087DC;
    case 98u: goto L_08B087F0;
    case 99u: goto L_08B08800;
    case 100u: goto L_08B08808;
    case 101u: goto L_08B08858;
    case 102u: goto L_08B08860;
    case 103u: goto L_08B08874;
    case 104u: goto L_08B0887C;
    case 105u: goto L_08B08890;
    case 106u: goto L_08B08898;
    case 107u: goto L_08B088AC;
    case 108u: goto L_08B088DC;
    case 109u: goto L_08B088EC;
    case 110u: goto L_08B0891C;
    case 111u: goto L_08B08924;
    case 112u: goto L_08B08950;
    case 113u: goto L_08B08958;
    case 114u: goto L_08B08980;
    case 115u: goto L_08B08988;
    case 116u: goto L_08B089C4;
    case 117u: goto L_08B089CC;
    case 118u: goto L_08B08A08;
    case 119u: goto L_08B08A10;
    case 120u: goto L_08B08A4C;
    case 121u: goto L_08B08A54;
    case 122u: goto L_08B08A90;
    case 123u: goto L_08B08A98;
    case 124u: goto L_08B08AD4;
    case 125u: goto L_08B08ADC;
    case 126u: goto L_08B08B18;
    case 127u: goto L_08B08B20;
    case 128u: goto L_08B08B58;
    case 129u: goto L_08B08B5C;
    case 130u: goto L_08B08B68;
    case 131u: goto L_08B08B7C;
    case 132u: goto L_08B08B90;
    case 133u: goto L_08B08B98;
    case 134u: goto L_08B08BB0;
    case 135u: goto L_08B08BB8;
    case 136u: goto L_08B08BD8;
    case 137u: goto L_08B08C18;
    case 138u: goto L_08B08C3C;
    case 139u: goto L_08B08C44;
    case 140u: goto L_08B08C4C;
    case 141u: goto L_08B08C54;
    case 142u: goto L_08B08C60;
    case 143u: goto L_08B08C68;
    case 144u: goto L_08B08C94;
    case 145u: goto L_08B08CBC;
    case 146u: goto L_08B08CC4;
    case 147u: goto L_08B08CD4;
    case 148u: goto L_08B08CE8;
    case 149u: goto L_08B08D00;
    case 150u: goto L_08B08D08;
    case 151u: goto L_08B08D24;
    case 152u: goto L_08B08D2C;
    case 153u: goto L_08B08D34;
    case 154u: goto L_08B08D44;
    case 155u: goto L_08B08D4C;
    case 156u: goto L_08B08D54;
    case 157u: goto L_08B08D5C;
    case 158u: goto L_08B08D64;
    case 159u: goto L_08B08D6C;
    case 160u: goto L_08B08D7C;
    case 161u: goto L_08B08D84;
    case 162u: goto L_08B08DAC;
    case 163u: goto L_08B08DB8;
    case 164u: goto L_08B08DDC;
    case 165u: goto L_08B08DE4;
    case 166u: goto L_08B08E04;
    case 167u: goto L_08B08E0C;
    case 168u: goto L_08B08E2C;
    case 169u: goto L_08B08E54;
    case 170u: goto L_08B08E5C;
    case 171u: goto L_08B08E6C;
    case 172u: goto L_08B08E80;
    case 173u: goto L_08B08E88;
    case 174u: goto L_08B08E94;
    case 175u: goto L_08B08EBC;
    case 176u: goto L_08B08EC8;
    case 177u: goto L_08B08EE0;
    case 178u: goto L_08B08F18;
    case 179u: goto L_08B08F20;
    case 180u: goto L_08B08F30;
    case 181u: goto L_08B08F38;
    case 182u: goto L_08B08F48;
    case 183u: goto L_08B08F58;
    case 184u: goto L_08B08F78;
    case 185u: goto L_08B08F80;
    case 186u: goto L_08B08F8C;
    case 187u: goto L_08B08F94;
    case 188u: goto L_08B08FA0;
    case 189u: goto L_08B08FD8;
    case 190u: goto L_08B08FEC;
    case 191u: goto L_08B08FF8;
    case 192u: goto L_08B09000;
    case 193u: goto L_08B09008;
    case 194u: goto L_08B09010;
    case 195u: goto L_08B09018;
    case 196u: goto L_08B09024;
    case 197u: goto L_08B09030;
    case 198u: goto L_08B0903C;
    case 199u: goto L_08B09044;
    case 200u: goto L_08B0904C;
    case 201u: goto L_08B09058;
    case 202u: goto L_08B0907C;
    case 203u: goto L_08B09080;
    case 204u: goto L_08B0908C;
    case 205u: goto L_08B090A0;
    case 206u: goto L_08B090AC;
    case 207u: goto L_08B090B8;
    case 208u: goto L_08B090C0;
    case 209u: goto L_08B090CC;
    case 210u: goto L_08B090D4;
    case 211u: goto L_08B090E0;
    case 212u: goto L_08B090F0;
    case 213u: goto L_08B090FC;
    case 214u: goto L_08B09104;
    case 215u: goto L_08B0910C;
    case 216u: goto L_08B09118;
    case 217u: goto L_08B09134;
    case 218u: goto L_08B09158;
    case 219u: goto L_08B0915C;
    case 220u: goto L_08B09168;
    case 221u: goto L_08B0917C;
    case 222u: goto L_08B09190;
    case 223u: goto L_08B09198;
    case 224u: goto L_08B091A0;
    case 225u: goto L_08B091A8;
    case 226u: goto L_08B091B0;
    case 227u: goto L_08B091C8;
    case 228u: goto L_08B091D0;
    case 229u: goto L_08B091F0;
    case 230u: goto L_08B091F8;
    case 231u: goto L_08B09220;
    case 232u: goto L_08B09228;
    case 233u: goto L_08B09244;
    case 234u: goto L_08B0924C;
    case 235u: goto L_08B0926C;
    case 236u: goto L_08B09274;
    case 237u: goto L_08B092C4;
    case 238u: goto L_08B092CC;
    case 239u: goto L_08B092F4;
    case 240u: goto L_08B092FC;
    case 241u: goto L_08B09310;
    case 242u: goto L_08B09318;
    case 243u: goto L_08B09338;
    case 244u: goto L_08B09340;
    case 245u: goto L_08B09368;
    case 246u: goto L_08B09390;
    case 247u: goto L_08B0939C;
    case 248u: goto L_08B093B8;
    case 249u: goto L_08B093C8;
    case 250u: goto L_08B093D4;
    case 251u: goto L_08B093DC;
    case 252u: goto L_08B093F4;
    case 253u: goto L_08B093FC;
    case 254u: goto L_08B09428;
    case 255u: goto L_08B09458;
    case 256u: goto L_08B09478;
    case 257u: goto L_08B0948C;
    case 258u: goto L_08B094A0;
    case 259u: goto L_08B094AC;
    case 260u: goto L_08B094B4;
    case 261u: goto L_08B094BC;
    case 262u: goto L_08B094C8;
    case 263u: goto L_08B094D0;
    case 264u: goto L_08B094D8;
    case 265u: goto L_08B094F8;
    case 266u: goto L_08B09500;
    case 267u: goto L_08B09528;
    case 268u: goto L_08B09530;
    case 269u: goto L_08B09548;
    case 270u: goto L_08B09550;
    case 271u: goto L_08B0956C;
    case 272u: goto L_08B09574;
    case 273u: goto L_08B09594;
    case 274u: goto L_08B0959C;
    case 275u: goto L_08B095F4;
    case 276u: goto L_08B095FC;
    case 277u: goto L_08B0961C;
    case 278u: goto L_08B09624;
    case 279u: goto L_08B0964C;
    case 280u: goto L_08B09654;
    case 281u: goto L_08B09668;
    case 282u: goto L_08B09670;
    case 283u: goto L_08B09684;
    case 284u: goto L_08B096AC;
    case 285u: goto L_08B096B4;
    case 286u: goto L_08B096C0;
    case 287u: goto L_08B096C8;
    case 288u: goto L_08B096D4;
    case 289u: goto L_08B096F8;
    case 290u: goto L_08B096FC;
    case 291u: goto L_08B09708;
    case 292u: goto L_08B09724;
    case 293u: goto L_08B09734;
    case 294u: goto L_08B09740;
    case 295u: goto L_08B09748;
    case 296u: goto L_08B09760;
    case 297u: goto L_08B09768;
    case 298u: goto L_08B0977C;
    case 299u: goto L_08B09784;
    case 300u: goto L_08B09794;
    case 301u: goto L_08B0979C;
    case 302u: goto L_08B097BC;
    case 303u: goto L_08B097F0;
    case 304u: goto L_08B09810;
    case 305u: goto L_08B09824;
    case 306u: goto L_08B0983C;
    case 307u: goto L_08B0984C;
    case 308u: goto L_08B09874;
    case 309u: goto L_08B09880;
    case 310u: goto L_08B09898;
    case 311u: goto L_08B098D0;
    case 312u: goto L_08B098D8;
    case 313u: goto L_08B098E8;
    case 314u: goto L_08B098F0;
    case 315u: goto L_08B09900;
    case 316u: goto L_08B09910;
    case 317u: goto L_08B09930;
    case 318u: goto L_08B09938;
    case 319u: goto L_08B09944;
    case 320u: goto L_08B0994C;
    case 321u: goto L_08B09958;
    case 322u: goto L_08B09990;
    case 323u: goto L_08B099A4;
    case 324u: goto L_08B099B0;
    case 325u: goto L_08B099B8;
    case 326u: goto L_08B099C0;
    case 327u: goto L_08B099C8;
    case 328u: goto L_08B099D0;
    case 329u: goto L_08B099DC;
    case 330u: goto L_08B099E8;
    case 331u: goto L_08B099F4;
    case 332u: goto L_08B099FC;
    case 333u: goto L_08B09A04;
    case 334u: goto L_08B09A10;
    case 335u: goto L_08B09A34;
    case 336u: goto L_08B09A38;
    case 337u: goto L_08B09A44;
    case 338u: goto L_08B09A58;
    case 339u: goto L_08B09A64;
    case 340u: goto L_08B09A70;
    case 341u: goto L_08B09A78;
    case 342u: goto L_08B09A84;
    case 343u: goto L_08B09A8C;
    case 344u: goto L_08B09A98;
    case 345u: goto L_08B09AA8;
    case 346u: goto L_08B09AB4;
    case 347u: goto L_08B09ABC;
    case 348u: goto L_08B09AD4;
    case 349u: goto L_08B09AF8;
    case 350u: goto L_08B09AFC;
    case 351u: goto L_08B09B08;
    case 352u: goto L_08B09B28;
    case 353u: goto L_08B09B48;
    case 354u: goto L_08B09B64;
    case 355u: goto L_08B09B7C;
    case 356u: goto L_08B09B84;
    case 357u: goto L_08B09B90;
    case 358u: goto L_08B09B98;
    case 359u: goto L_08B09BA4;
    case 360u: goto L_08B09BB8;
    case 361u: goto L_08B09BC4;
    case 362u: goto L_08B09BD8;
    case 363u: goto L_08B09BE0;
    case 364u: goto L_08B09BE8;
    case 365u: goto L_08B09BF4;
    case 366u: goto L_08B09BFC;
    case 367u: goto L_08B09C04;
    case 368u: goto L_08B09C10;
    case 369u: goto L_08B09C1C;
    case 370u: goto L_08B09C30;
    case 371u: goto L_08B09C38;
    case 372u: goto L_08B09C40;
    case 373u: goto L_08B09C4C;
    case 374u: goto L_08B09C54;
    case 375u: goto L_08B09C5C;
    case 376u: goto L_08B09C70;
    case 377u: goto L_08B09C84;
    case 378u: goto L_08B09C98;
    case 379u: goto L_08B09CB4;
    case 380u: goto L_08B09CBC;
    case 381u: goto L_08B09CC0;
    case 382u: goto L_08B09CC8;
    case 383u: goto L_08B09CDC;
    case 384u: goto L_08B09CE8;
    case 385u: goto L_08B09D00;
    case 386u: goto L_08B09D10;
    case 387u: goto L_08B09D14;
    case 388u: goto L_08B09D24;
    case 389u: goto L_08B09D50;
    case 390u: goto L_08B09D58;
    case 391u: goto L_08B09D60;
    case 392u: goto L_08B09D68;
    case 393u: goto L_08B09D74;
    case 394u: goto L_08B09D7C;
    case 395u: goto L_08B09D88;
    case 396u: goto L_08B09D94;
    case 397u: goto L_08B09D9C;
    case 398u: goto L_08B09DA4;
    case 399u: goto L_08B09DAC;
    case 400u: goto L_08B09DB4;
    case 401u: goto L_08B09DC0;
    case 402u: goto L_08B09DCC;
    case 403u: goto L_08B09DD8;
    case 404u: goto L_08B09DF0;
    case 405u: goto L_08B09E08;
    case 406u: goto L_08B09E20;
    case 407u: goto L_08B09E2C;
    case 408u: goto L_08B09E3C;
    case 409u: goto L_08B09E4C;
    case 410u: goto L_08B09E5C;
    case 411u: goto L_08B09E6C;
    case 412u: goto L_08B09E80;
    case 413u: goto L_08B09E88;
    case 414u: goto L_08B09ED4;
    case 415u: goto L_08B09F18;
    case 416u: goto L_08B09F34;
    case 417u: goto L_08B09F40;
    case 418u: goto L_08B09F70;
    case 419u: goto L_08B09F80;
    case 420u: goto L_08B09F90;
    case 421u: goto L_08B09F98;
    case 422u: goto L_08B09FA0;
    case 423u: goto L_08B09FA8;
    case 424u: goto L_08B09FB0;
    case 425u: goto L_08B09FB8;
    case 426u: goto L_08B09FC0;
    case 427u: goto L_08B09FC8;
    case 428u: goto L_08B09FD4;
    case 429u: goto L_08B09FFC;
    case 430u: goto L_08B0A004;
    case 431u: goto L_08B0A010;
    case 432u: goto L_08B0A018;
    case 433u: goto L_08B0A020;
    case 434u: goto L_08B0A02C;
    case 435u: goto L_08B0A034;
    case 436u: goto L_08B0A040;
    case 437u: goto L_08B0A04C;
    case 438u: goto L_08B0A058;
    case 439u: goto L_08B0A060;
    case 440u: goto L_08B0A068;
    case 441u: goto L_08B0A06C;
    case 442u: goto L_08B0A080;
    case 443u: goto L_08B0A09C;
    case 444u: goto L_08B0A0A8;
    case 445u: goto L_08B0A0B0;
    case 446u: goto L_08B0A0B8;
    case 447u: goto L_08B0A0CC;
    case 448u: goto L_08B0A0D4;
    case 449u: goto L_08B0A0DC;
    case 450u: goto L_08B0A0E4;
    case 451u: goto L_08B0A0F0;
    case 452u: goto L_08B0A0F8;
    case 453u: goto L_08B0A100;
    case 454u: goto L_08B0A114;
    case 455u: goto L_08B0A124;
    case 456u: goto L_08B0A150;
    case 457u: goto L_08B0A158;
    case 458u: goto L_08B0A160;
    case 459u: goto L_08B0A16C;
    case 460u: goto L_08B0A174;
    case 461u: goto L_08B0A17C;
    case 462u: goto L_08B0A190;
    case 463u: goto L_08B0A1A0;
    case 464u: goto L_08B0A1CC;
    case 465u: goto L_08B0A1D0;
    case 466u: goto L_08B0A1E4;
    case 467u: goto L_08B0A1EC;
    case 468u: goto L_08B0A21C;
    case 469u: goto L_08B0A224;
    case 470u: goto L_08B0A238;
    case 471u: goto L_08B0A244;
    case 472u: goto L_08B0A24C;
    case 473u: goto L_08B0A25C;
    case 474u: goto L_08B0A264;
    case 475u: goto L_08B0A270;
    case 476u: goto L_08B0A280;
    case 477u: goto L_08B0A288;
    case 478u: goto L_08B0A294;
    case 479u: goto L_08B0A298;
    case 480u: goto L_08B0A2A0;
    case 481u: goto L_08B0A2A4;
    case 482u: goto L_08B0A2B4;
    case 483u: goto L_08B0A2D8;
    case 484u: goto L_08B0A2E0;
    case 485u: goto L_08B0A2F4;
    case 486u: goto L_08B0A30C;
    case 487u: goto L_08B0A338;
    case 488u: goto L_08B0A340;
    case 489u: goto L_08B0A374;
    case 490u: goto L_08B0A37C;
    case 491u: goto L_08B0A39C;
    case 492u: goto L_08B0A3C4;
    case 493u: goto L_08B0A3D4;
    case 494u: goto L_08B0A400;
    case 495u: goto L_08B0A414;
    case 496u: goto L_08B0A41C;
    case 497u: goto L_08B0A428;
    case 498u: goto L_08B0A430;
    case 499u: goto L_08B0A438;
    case 500u: goto L_08B0A444;
    case 501u: goto L_08B0A44C;
    case 502u: goto L_08B0A458;
    case 503u: goto L_08B0A460;
    case 504u: goto L_08B0A468;
    case 505u: goto L_08B0A490;
    case 506u: goto L_08B0A494;
    case 507u: goto L_08B0A4AC;
    case 508u: goto L_08B0A4DC;
    case 509u: goto L_08B0A4E4;
    case 510u: goto L_08B0A4F0;
    case 511u: goto L_08B0A508;
    case 512u: goto L_08B0A530;
    case 513u: goto L_08B0A538;
    case 514u: goto L_08B0A548;
    case 515u: goto L_08B0A550;
    case 516u: goto L_08B0A558;
    case 517u: goto L_08B0A568;
    case 518u: goto L_08B0A570;
    case 519u: goto L_08B0A578;
    case 520u: goto L_08B0A588;
    case 521u: goto L_08B0A590;
    case 522u: goto L_08B0A598;
    case 523u: goto L_08B0A5A8;
    case 524u: goto L_08B0A5B0;
    case 525u: goto L_08B0A5B8;
    case 526u: goto L_08B0A5C8;
    case 527u: goto L_08B0A5D0;
    case 528u: goto L_08B0A5D8;
    case 529u: goto L_08B0A5E8;
    case 530u: goto L_08B0A5F0;
    case 531u: goto L_08B0A5F8;
    case 532u: goto L_08B0A608;
    case 533u: goto L_08B0A60C;
    case 534u: goto L_08B0A614;
    case 535u: goto L_08B0A618;
    case 536u: goto L_08B0A628;
    case 537u: goto L_08B0A64C;
    case 538u: goto L_08B0A654;
    case 539u: goto L_08B0A668;
    case 540u: goto L_08B0A680;
    case 541u: goto L_08B0A6A4;
    case 542u: goto L_08B0A6B4;
    case 543u: goto L_08B0A6D4;
    case 544u: goto L_08B0A6E8;
    case 545u: goto L_08B0A710;
    case 546u: goto L_08B0A714;
    case 547u: goto L_08B0A724;
    case 548u: goto L_08B0A75C;
    case 549u: goto L_08B0A764;
    case 550u: goto L_08B0A76C;
    case 551u: goto L_08B0A798;
    case 552u: goto L_08B0A7AC;
    case 553u: goto L_08B0A7B4;
    case 554u: goto L_08B0A7C0;
    case 555u: goto L_08B0A7C8;
    case 556u: goto L_08B0A7D0;
    case 557u: goto L_08B0A7DC;
    case 558u: goto L_08B0A7E4;
    case 559u: goto L_08B0A7F0;
    case 560u: goto L_08B0A7F8;
    case 561u: goto L_08B0A800;
    case 562u: goto L_08B0A818;
    case 563u: goto L_08B0A828;
    case 564u: goto L_08B0A838;
    case 565u: goto L_08B0A860;
    case 566u: goto L_08B0A878;
    case 567u: goto L_08B0A880;
    case 568u: goto L_08B0A888;
    case 569u: goto L_08B0A8B0;
    case 570u: goto L_08B0A8B8;
    case 571u: goto L_08B0A8C4;
    case 572u: goto L_08B0A8CC;
    case 573u: goto L_08B0A8D4;
    case 574u: goto L_08B0A8E0;
    case 575u: goto L_08B0A8E8;
    case 576u: goto L_08B0A8F4;
    case 577u: goto L_08B0A914;
    case 578u: goto L_08B0A91C;
    case 579u: goto L_08B0A930;
    case 580u: goto L_08B0A93C;
    case 581u: goto L_08B0A940;
    case 582u: goto L_08B0A954;
    case 583u: goto L_08B0A968;
    case 584u: goto L_08B0A994;
    case 585u: goto L_08B0A99C;
    case 586u: goto L_08B0A9A4;
    case 587u: goto L_08B0A9BC;
    case 588u: goto L_08B0AA08;
    case 589u: goto L_08B0AA10;
    case 590u: goto L_08B0AA28;
    case 591u: goto L_08B0AA34;
    case 592u: goto L_08B0AA3C;
    case 593u: goto L_08B0AA4C;
    case 594u: goto L_08B0AA54;
    case 595u: goto L_08B0AA5C;
    case 596u: goto L_08B0AA64;
    case 597u: goto L_08B0AA7C;
    case 598u: goto L_08B0AA8C;
    case 599u: goto L_08B0AAB8;
    case 600u: goto L_08B0AAC0;
    case 601u: goto L_08B0AAC8;
    case 602u: goto L_08B0AAD4;
    case 603u: goto L_08B0AAF0;
    case 604u: goto L_08B0AB00;
    case 605u: goto L_08B0AB14;
    case 606u: goto L_08B0AB20;
    case 607u: goto L_08B0AB28;
    case 608u: goto L_08B0AB30;
    case 609u: goto L_08B0AB38;
    case 610u: goto L_08B0AB40;
    case 611u: goto L_08B0AB48;
    case 612u: goto L_08B0AB50;
    case 613u: goto L_08B0AB5C;
    case 614u: goto L_08B0AB6C;
    case 615u: goto L_08B0AB7C;
    case 616u: goto L_08B0AB88;
    case 617u: goto L_08B0ABC8;
    case 618u: goto L_08B0ABD8;
    case 619u: goto L_08B0ABF0;
    case 620u: goto L_08B0ABFC;
    case 621u: goto L_08B0AC04;
    case 622u: goto L_08B0AC10;
    case 623u: goto L_08B0AC1C;
    case 624u: goto L_08B0AC38;
    case 625u: goto L_08B0AC48;
    case 626u: goto L_08B0AC68;
    case 627u: goto L_08B0AC78;
    case 628u: goto L_08B0AC8C;
    case 629u: goto L_08B0AC94;
    case 630u: goto L_08B0AC9C;
    case 631u: goto L_08B0ACA8;
    case 632u: goto L_08B0ACB0;
    case 633u: goto L_08B0ACBC;
    case 634u: goto L_08B0ACC8;
    case 635u: goto L_08B0ACD0;
    case 636u: goto L_08B0ACD8;
    case 637u: goto L_08B0ACE0;
    case 638u: goto L_08B0ACE8;
    case 639u: goto L_08B0ACFC;
    case 640u: goto L_08B0AD04;
    case 641u: goto L_08B0AD14;
    case 642u: goto L_08B0AD1C;
    case 643u: goto L_08B0AD24;
    case 644u: goto L_08B0AD2C;
    case 645u: goto L_08B0AD34;
    case 646u: goto L_08B0AD3C;
    case 647u: goto L_08B0AD44;
    case 648u: goto L_08B0AD4C;
    case 649u: goto L_08B0AD58;
    case 650u: goto L_08B0AD84;
    case 651u: goto L_08B0AD8C;
    case 652u: goto L_08B0AD94;
    case 653u: goto L_08B0ADA4;
    case 654u: goto L_08B0ADBC;
    case 655u: goto L_08B0ADDC;
    case 656u: goto L_08B0ADE4;
    case 657u: goto L_08B0ADF0;
    case 658u: goto L_08B0AE00;
    case 659u: goto L_08B0AE0C;
    case 660u: goto L_08B0AE18;
    case 661u: goto L_08B0AE20;
    case 662u: goto L_08B0AE28;
    case 663u: goto L_08B0AE30;
    case 664u: goto L_08B0AE48;
    case 665u: goto L_08B0AE58;
    case 666u: goto L_08B0AE60;
    case 667u: goto L_08B0AE70;
    case 668u: goto L_08B0AE78;
    case 669u: goto L_08B0AE80;
    case 670u: goto L_08B0AE90;
    case 671u: goto L_08B0AEA0;
    case 672u: goto L_08B0AEB0;
    case 673u: goto L_08B0AEC0;
    case 674u: goto L_08B0AED8;
    case 675u: goto L_08B0AEE4;
    case 676u: goto L_08B0AEE8;
    case 677u: goto L_08B0AEF0;
    case 678u: goto L_08B0AF08;
    case 679u: goto L_08B0AF14;
    case 680u: goto L_08B0AF2C;
    case 681u: goto L_08B0AF38;
    case 682u: goto L_08B0AF44;
    case 683u: goto L_08B0AF54;
    case 684u: goto L_08B0AF74;
    case 685u: goto L_08B0AFF0;
    case 686u: goto L_08B0AFF8;
    case 687u: goto L_08B0B004;
    case 688u: goto L_08B0B024;
    case 689u: goto L_08B0B02C;
    case 690u: goto L_08B0B034;
    case 691u: goto L_08B0B03C;
    case 692u: goto L_08B0B044;
    case 693u: goto L_08B0B048;
    case 694u: goto L_08B0B050;
    case 695u: goto L_08B0B058;
    case 696u: goto L_08B0B060;
    case 697u: goto L_08B0B068;
    case 698u: goto L_08B0B078;
    case 699u: goto L_08B0B080;
    case 700u: goto L_08B0B084;
    case 701u: goto L_08B0B09C;
    case 702u: goto L_08B0B0C8;
    case 703u: goto L_08B0B0D4;
    case 704u: goto L_08B0B0E0;
    case 705u: goto L_08B0B0EC;
    case 706u: goto L_08B0B0F4;
    case 707u: goto L_08B0B0FC;
    case 708u: goto L_08B0B104;
    case 709u: goto L_08B0B110;
    case 710u: goto L_08B0B120;
    case 711u: goto L_08B0B12C;
    case 712u: goto L_08B0B134;
    case 713u: goto L_08B0B140;
    case 714u: goto L_08B0B150;
    case 715u: goto L_08B0B158;
    case 716u: goto L_08B0B164;
    case 717u: goto L_08B0B174;
    case 718u: goto L_08B0B180;
    case 719u: goto L_08B0B188;
    case 720u: goto L_08B0B194;
    case 721u: goto L_08B0B1A0;
    case 722u: goto L_08B0B1BC;
    case 723u: goto L_08B0B1CC;
    case 724u: goto L_08B0B1D4;
    case 725u: goto L_08B0B1E4;
    case 726u: goto L_08B0B1F0;
    case 727u: goto L_08B0B1F8;
    case 728u: goto L_08B0B204;
    case 729u: goto L_08B0B228;
    case 730u: goto L_08B0B22C;
    case 731u: goto L_08B0B244;
    case 732u: goto L_08B0B268;
    case 733u: goto L_08B0B274;
    case 734u: goto L_08B0B27C;
    case 735u: goto L_08B0B284;
    case 736u: goto L_08B0B290;
    case 737u: goto L_08B0B298;
    case 738u: goto L_08B0B2C8;
    case 739u: goto L_08B0B2D4;
    case 740u: goto L_08B0B2F8;
    case 741u: goto L_08B0B300;
    case 742u: goto L_08B0B320;
    case 743u: goto L_08B0B330;
    case 744u: goto L_08B0B338;
    case 745u: goto L_08B0B350;
    case 746u: goto L_08B0B35C;
    case 747u: goto L_08B0B368;
    case 748u: goto L_08B0B374;
    case 749u: goto L_08B0B37C;
    case 750u: goto L_08B0B384;
    case 751u: goto L_08B0B39C;
    case 752u: goto L_08B0B3A8;
    case 753u: goto L_08B0B3B0;
    case 754u: goto L_08B0B3C4;
    case 755u: goto L_08B0B3DC;
    case 756u: goto L_08B0B404;
    case 757u: goto L_08B0B41C;
    case 758u: goto L_08B0B448;
    case 759u: goto L_08B0B45C;
    case 760u: goto L_08B0B464;
    case 761u: goto L_08B0B470;
    case 762u: goto L_08B0B478;
    case 763u: goto L_08B0B480;
    case 764u: goto L_08B0B48C;
    case 765u: goto L_08B0B494;
    case 766u: goto L_08B0B4A0;
    case 767u: goto L_08B0B4A8;
    case 768u: goto L_08B0B4B0;
    case 769u: goto L_08B0B4D4;
    case 770u: goto L_08B0B4EC;
    case 771u: goto L_08B0B534;
    case 772u: goto L_08B0B548;
    case 773u: goto L_08B0B554;
    case 774u: goto L_08B0B560;
    case 775u: goto L_08B0B568;
    case 776u: goto L_08B0B570;
    case 777u: goto L_08B0B580;
    case 778u: goto L_08B0B588;
    case 779u: goto L_08B0B590;
    case 780u: goto L_08B0B5A0;
    case 781u: goto L_08B0B5A8;
    case 782u: goto L_08B0B5B0;
    case 783u: goto L_08B0B5C0;
    case 784u: goto L_08B0B5C8;
    case 785u: goto L_08B0B5D0;
    case 786u: goto L_08B0B5E0;
    case 787u: goto L_08B0B5EC;
    case 788u: goto L_08B0B604;
    case 789u: goto L_08B0B614;
    case 790u: goto L_08B0B61C;
    case 791u: goto L_08B0B630;
    case 792u: goto L_08B0B634;
    case 793u: goto L_08B0B654;
    case 794u: goto L_08B0B670;
    case 795u: goto L_08B0B67C;
    case 796u: goto L_08B0B684;
    case 797u: goto L_08B0B68C;
    case 798u: goto L_08B0B6A0;
    case 799u: goto L_08B0B6A8;
    case 800u: goto L_08B0B6B0;
    case 801u: goto L_08B0B6B8;
    case 802u: goto L_08B0B6C4;
    case 803u: goto L_08B0B6CC;
    case 804u: goto L_08B0B6D4;
    case 805u: goto L_08B0B6E8;
    case 806u: goto L_08B0B6F8;
    case 807u: goto L_08B0B724;
    case 808u: goto L_08B0B72C;
    case 809u: goto L_08B0B734;
    case 810u: goto L_08B0B740;
    case 811u: goto L_08B0B748;
    case 812u: goto L_08B0B750;
    case 813u: goto L_08B0B764;
    case 814u: goto L_08B0B774;
    case 815u: goto L_08B0B7A0;
    case 816u: goto L_08B0B7A4;
    case 817u: goto L_08B0B7B8;
    case 818u: goto L_08B0B7CC;
    case 819u: goto L_08B0B7F8;
    case 820u: goto L_08B0B800;
    case 821u: goto L_08B0B808;
    case 822u: goto L_08B0B820;
    case 823u: goto L_08B0B86C;
    case 824u: goto L_08B0B884;
    case 825u: goto L_08B0B890;
    case 826u: goto L_08B0B898;
    case 827u: goto L_08B0B8A8;
    case 828u: goto L_08B0B8B0;
    case 829u: goto L_08B0B8B8;
    case 830u: goto L_08B0B8C0;
    case 831u: goto L_08B0B8D8;
    case 832u: goto L_08B0B8E8;
    case 833u: goto L_08B0B914;
    case 834u: goto L_08B0B91C;
    case 835u: goto L_08B0B924;
    case 836u: goto L_08B0B930;
    case 837u: goto L_08B0B94C;
    case 838u: goto L_08B0B95C;
    case 839u: goto L_08B0B970;
    case 840u: goto L_08B0B97C;
    case 841u: goto L_08B0B984;
    case 842u: goto L_08B0B98C;
    case 843u: goto L_08B0B994;
    case 844u: goto L_08B0B99C;
    case 845u: goto L_08B0B9A4;
    case 846u: goto L_08B0B9AC;
    case 847u: goto L_08B0B9B8;
    case 848u: goto L_08B0B9C8;
    case 849u: goto L_08B0B9D8;
    case 850u: goto L_08B0B9E4;
    case 851u: goto L_08B0BA24;
    case 852u: goto L_08B0BA34;
    case 853u: goto L_08B0BA4C;
    case 854u: goto L_08B0BA58;
    case 855u: goto L_08B0BA60;
    case 856u: goto L_08B0BA6C;
    case 857u: goto L_08B0BA78;
    case 858u: goto L_08B0BA94;
    case 859u: goto L_08B0BAA4;
    case 860u: goto L_08B0BAC0;
    case 861u: goto L_08B0BAD8;
    case 862u: goto L_08B0BAE4;
    case 863u: goto L_08B0BAF0;
    case 864u: goto L_08B0BAF8;
    case 865u: goto L_08B0BAFC;
    case 866u: goto L_08B0BB10;
    case 867u: goto L_08B0BB18;
    case 868u: goto L_08B0BB38;
    case 869u: goto L_08B0BB40;
    case 870u: goto L_08B0BB50;
    case 871u: goto L_08B0BB68;
    case 872u: goto L_08B0BB84;
    case 873u: goto L_08B0BB9C;
    case 874u: goto L_08B0BBA8;
    case 875u: goto L_08B0BBB4;
    case 876u: goto L_08B0BBBC;
    case 877u: goto L_08B0BBC0;
    case 878u: goto L_08B0BBD4;
    case 879u: goto L_08B0BBDC;
    case 880u: goto L_08B0BBFC;
    case 881u: goto L_08B0BC04;
    case 882u: goto L_08B0BC14;
    case 883u: goto L_08B0BC2C;
    case 884u: goto L_08B0BC4C;
    case 885u: goto L_08B0BC54;
    case 886u: goto L_08B0BC64;
    case 887u: goto L_08B0BC7C;
    case 888u: goto L_08B0BC88;
    case 889u: goto L_08B0BC90;
    case 890u: goto L_08B0BC94;
    case 891u: goto L_08B0BC9C;
    case 892u: goto L_08B0BCC0;
    case 893u: goto L_08B0BCCC;
    case 894u: goto L_08B0BCD4;
    case 895u: goto L_08B0BCDC;
    case 896u: goto L_08B0BCE4;
    case 897u: goto L_08B0BCF0;
    case 898u: goto L_08B0BCFC;
    case 899u: goto L_08B0BD04;
    case 900u: goto L_08B0BD0C;
    case 901u: goto L_08B0BD14;
    case 902u: goto L_08B0BD1C;
    case 903u: goto L_08B0BD24;
    case 904u: goto L_08B0BD2C;
    case 905u: goto L_08B0BD34;
    case 906u: goto L_08B0BD3C;
    case 907u: goto L_08B0BD4C;
    case 908u: goto L_08B0BD58;
    case 909u: goto L_08B0BD60;
    case 910u: goto L_08B0BD74;
    case 911u: goto L_08B0BD94;
    case 912u: goto L_08B0BDA0;
    case 913u: goto L_08B0BDA8;
    case 914u: goto L_08B0BDB8;
    case 915u: goto L_08B0BDD0;
    case 916u: goto L_08B0BDD8;
    case 917u: goto L_08B0BDE0;
    case 918u: goto L_08B0BE00;
    case 919u: goto L_08B0BE0C;
    case 920u: goto L_08B0BE14;
    case 921u: goto L_08B0BE24;
    case 922u: goto L_08B0BE3C;
    case 923u: goto L_08B0BE44;
    case 924u: goto L_08B0BE4C;
    case 925u: goto L_08B0BE58;
    case 926u: goto L_08B0BE64;
    case 927u: goto L_08B0BE70;
    case 928u: goto L_08B0BE78;
    case 929u: goto L_08B0BE80;
    case 930u: goto L_08B0BE8C;
    case 931u: goto L_08B0BE94;
    case 932u: goto L_08B0BEA0;
    case 933u: goto L_08B0BEA8;
    case 934u: goto L_08B0BEB4;
    case 935u: goto L_08B0BEBC;
    case 936u: goto L_08B0BEC8;
    case 937u: goto L_08B0BED4;
    case 938u: goto L_08B0BEE0;
    case 939u: goto L_08B0BEE8;
    case 940u: goto L_08B0BEEC;
    case 941u: goto L_08B0BEF0;
    case 942u: goto L_08B0BF08;
    case 943u: goto L_08B0BF0C;
    case 944u: goto L_08B0BF14;
    case 945u: goto L_08B0BF34;
    case 946u: goto L_08B0BF4C;
    case 947u: goto L_08B0BF58;
    case 948u: goto L_08B0BF68;
    case 949u: goto L_08B0BF80;
    case 950u: goto L_08B0BF90;
    case 951u: goto L_08B0BFB0;
    case 952u: goto L_08B0BFD4;
    case 953u: goto L_08B0BFDC;
    case 954u: goto L_08B0BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B08000:
    ctx.set_gpr(31, 0x08B08008u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08008u) goto L_08B08008;
    return;
L_08B08008:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B0801Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0801Cu) goto L_08B0801C;
    return;
L_08B0801C:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13884)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13888)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13892)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B08294;
      }
      goto L_08B08044;
    }
L_08B08044:
    ctx.set_gpr(31, 0x08B0804Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0804Cu) goto L_08B0804C;
    return;
L_08B0804C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B08058u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08B08058u) goto L_08B08058;
    return;
L_08B08058:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08158;
      }
      goto L_08B08060;
    }
L_08B08060:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B08070u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 902u, 0x08B07A18u>(ctx, &aot_mem) && ctx.pc == 0x08B08070u) goto L_08B08070;
    return;
L_08B08070:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3588), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
        goto L_08B08090;
    }
    goto L_08B08088;
L_08B08088:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3588), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
    goto L_08B08090;
L_08B08090:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(31, 0x08B080B4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 888u, 0x08B078E8u>(ctx, &aot_mem) && ctx.pc == 0x08B080B4u) goto L_08B080B4;
    return;
L_08B080B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(198));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
        goto L_08B080E4;
    }
    goto L_08B080C0;
L_08B080C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    goto L_08B080C4;
L_08B080C4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B080D4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 888u, 0x08B078E8u>(ctx, &aot_mem) && ctx.pc == 0x08B080D4u) goto L_08B080D4;
    return;
L_08B080D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(198));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
        goto L_08B080C4;
    }
    goto L_08B080E0;
L_08B080E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    goto L_08B080E4;
L_08B080E4:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.gpr[16] >> 31u);
    ctx.set_gpr(2, 10922u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 43691u);
    ctx.set_gpr(5, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3592), ctx.gpr[5]);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3596), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3620), 0u);
    ctx.set_gpr(31, 0x08B0811Cu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0811Cu) goto L_08B0811C;
    return;
L_08B0811C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B08130u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08130u) goto L_08B08130;
    return;
L_08B08130:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13896)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13900)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13904)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B08294;
      }
      goto L_08B08158;
    }
L_08B08158:
    ctx.set_gpr(31, 0x08B08160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B08160u) goto L_08B08160;
    return;
L_08B08160:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0816Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08B0816Cu) goto L_08B0816C;
    return;
L_08B0816C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08238;
      }
      goto L_08B08174;
    }
L_08B08174:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(31, 0x08B08198u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 888u, 0x08B078E8u>(ctx, &aot_mem) && ctx.pc == 0x08B08198u) goto L_08B08198;
    return;
L_08B08198:
    ctx.set_gpr(31, 0x08B081A0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08B081A0u) goto L_08B081A0;
    return;
L_08B081A0:
    ctx.set_gpr(31, 0x08B081A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08B081A8u) goto L_08B081A8;
    return;
L_08B081A8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B081B8u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 364u, 0x0886170Cu>(ctx, &aot_mem) && ctx.pc == 0x08B081B8u) goto L_08B081B8;
    return;
L_08B081B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08214;
      }
      goto L_08B081C0;
    }
L_08B081C0:
    ctx.set_gpr(31, 0x08B081C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B081C8u) goto L_08B081C8;
    return;
L_08B081C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B081DCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B081DCu) goto L_08B081DC;
    return;
L_08B081DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B081ECu);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08B082AC;
L_08B081EC:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13908)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13912)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13916)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B08294;
      }
      goto L_08B08214;
    }
L_08B08214:
    ctx.set_gpr(31, 0x08B0821Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0821Cu) goto L_08B0821C;
    return;
L_08B0821C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B08230u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08230u) goto L_08B08230;
    return;
L_08B08230:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B08298;
      }
      goto L_08B08238;
    }
L_08B08238:
    ctx.set_gpr(31, 0x08B08240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B08240u) goto L_08B08240;
    return;
L_08B08240:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0824Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08B0824Cu) goto L_08B0824C;
    return;
L_08B0824C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08294;
      }
      goto L_08B08254;
    }
L_08B08254:
    ctx.set_gpr(31, 0x08B0825Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0825Cu) goto L_08B0825C;
    return;
L_08B0825C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B08270u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08270u) goto L_08B08270;
    return;
L_08B08270:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13920)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13924)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13928)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B08294;
L_08B08294:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B08298;
L_08B08298:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B082AC:
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(27910));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(200));
    (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 430u, 0x08861AACu>(ctx, &aot_mem); return;
L_08B082C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B082D8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B082D8u) goto L_08B082D8;
    return;
L_08B082D8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(3, 17036u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 15692u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(9, 17026u << 16u);
    ctx.set_gpr(8, 16932u << 16u);
    ctx.set_gpr(7, 17044u << 16u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08B08334u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08B08334u) goto L_08B08334;
    return;
L_08B08334:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13932)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13936)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13940)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08368:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B0837Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0837Cu) goto L_08B0837C;
    return;
L_08B0837C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B0838Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 447u, 0x08A858ECu>(ctx, &aot_mem) && ctx.pc == 0x08B0838Cu) goto L_08B0838C;
    return;
L_08B0838C:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B083C0;
    }
    goto L_08B08398;
L_08B08398:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13944)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13948)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13952)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B083C0;
L_08B083C0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B083CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B08408u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 902u, 0x08B07A18u>(ctx, &aot_mem) && ctx.pc == 0x08B08408u) goto L_08B08408;
    return;
L_08B08408:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08B08410;
L_08B08410:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16932u << 16u);
    ctx.set_gpr(3, 17044u << 16u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 49564u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[21] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[21];
    goto L_08B08440;
L_08B08440:
    ctx.set_gpr(31, 0x08B08448u);
    ctx.set_gpr(20, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08448u) goto L_08B08448;
    return;
L_08B08448:
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B08458u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 549u, 0x08A7E380u>(ctx, &aot_mem) && ctx.pc == 0x08B08458u) goto L_08B08458;
    return;
L_08B08458:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B084E4;
      }
      goto L_08B08460;
    }
L_08B08460:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17036u << 16u);
    ctx.set_gpr(21, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B08488u);
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08488u) goto L_08B08488;
    return;
L_08B08488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3600)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[0];
    ctx.set_gpr(31, 0x08B084BCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B084BCu) goto L_08B084BC;
    return;
L_08B084BC:
    ctx.set_gpr(31, 0x08B084C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B084C4u) goto L_08B084C4;
    return;
L_08B084C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(22));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B084E4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08B084E4u) goto L_08B084E4;
    return;
L_08B084E4:
    ctx.set_gpr(31, 0x08B084ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B084ECu) goto L_08B084EC;
    return;
L_08B084EC:
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(25));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B084FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 549u, 0x08A7E380u>(ctx, &aot_mem) && ctx.pc == 0x08B084FCu) goto L_08B084FC;
    return;
L_08B084FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0857C;
      }
      goto L_08B08504;
    }
L_08B08504:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17036u << 16u);
    ctx.set_gpr(21, ctx.gpr[20] + static_cast<std::uint32_t>(25));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B0852Cu);
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0852Cu) goto L_08B0852C;
    return;
L_08B0852C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x08B08544u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B08544u) goto L_08B08544;
    return;
L_08B08544:
    ctx.set_gpr(31, 0x08B0854Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0854Cu) goto L_08B0854C;
    return;
L_08B0854C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3600)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[0];
    ctx.set_gpr(31, 0x08B0857Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08B0857Cu) goto L_08B0857C;
    return;
L_08B0857C:
    ctx.set_gpr(31, 0x08B08584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08584u) goto L_08B08584;
    return;
L_08B08584:
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(49));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B08594u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 549u, 0x08A7E380u>(ctx, &aot_mem) && ctx.pc == 0x08B08594u) goto L_08B08594;
    return;
L_08B08594:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08628;
      }
      goto L_08B0859C;
    }
L_08B0859C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17036u << 16u);
    ctx.set_gpr(21, ctx.gpr[20] + static_cast<std::uint32_t>(49));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B085C4u);
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B085C4u) goto L_08B085C4;
    return;
L_08B085C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3600)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[0];
    ctx.set_gpr(31, 0x08B085F8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B085F8u) goto L_08B085F8;
    return;
L_08B085F8:
    ctx.set_gpr(31, 0x08B08600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08600u) goto L_08B08600;
    return;
L_08B08600:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 49604u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[22];
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B08628u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08B08628u) goto L_08B08628;
    return;
L_08B08628:
    ctx.set_gpr(31, 0x08B08630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08630u) goto L_08B08630;
    return;
L_08B08630:
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(73));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B08640u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 549u, 0x08A7E380u>(ctx, &aot_mem) && ctx.pc == 0x08B08640u) goto L_08B08640;
    return;
L_08B08640:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08B086D8;
    }
    goto L_08B08648;
L_08B08648:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17036u << 16u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(73));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B08670u);
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08670u) goto L_08B08670;
    return;
L_08B08670:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49604u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08B08690u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B08690u) goto L_08B08690;
    return;
L_08B08690:
    ctx.set_gpr(31, 0x08B08698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08698u) goto L_08B08698;
    return;
L_08B08698:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3600)));
    ctx.set_gpr(2, 49604u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.fpr[1] = ctx.fpr[22] + ctx.fpr[1];
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08B086D4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08B086D4u) goto L_08B086D4;
    return;
L_08B086D4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08B086D8;
L_08B086D8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B08440;
      }
      goto L_08B086E4;
    }
L_08B086E4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08B08410;
      }
      goto L_08B086F4;
    }
L_08B086F4:
    ctx.set_gpr(31, 0x08B086FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B086FCu) goto L_08B086FC;
    return;
L_08B086FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08B08710u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08710u) goto L_08B08710;
    return;
L_08B08710:
    ctx.set_gpr(31, 0x08B08718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08718u) goto L_08B08718;
    return;
L_08B08718:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08B0872Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0872Cu) goto L_08B0872C;
    return;
L_08B0872C:
    ctx.set_gpr(31, 0x08B08734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08734u) goto L_08B08734;
    return;
L_08B08734:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(31, 0x08B08748u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08748u) goto L_08B08748;
    return;
L_08B08748:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13956)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13960)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13964)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0879C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B087B4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B087B4u) goto L_08B087B4;
    return;
L_08B087B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B087C4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 447u, 0x08A858ECu>(ctx, &aot_mem) && ctx.pc == 0x08B087C4u) goto L_08B087C4;
    return;
L_08B087C4:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B088DC;
    }
    goto L_08B087D0;
L_08B087D0:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08B087D4;
L_08B087D4:
    ctx.set_gpr(31, 0x08B087DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B087DCu) goto L_08B087DC;
    return;
L_08B087DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(25));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B087F0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B087F0u) goto L_08B087F0;
    return;
L_08B087F0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B087D4;
      }
      goto L_08B08800;
    }
L_08B08800:
    ctx.set_gpr(31, 0x08B08808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08808u) goto L_08B08808;
    return;
L_08B08808:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17036u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(7, 17026u << 16u);
    ctx.set_gpr(3, 16932u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(2, 17044u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B08858u);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B08858u) goto L_08B08858;
    return;
L_08B08858:
    ctx.set_gpr(31, 0x08B08860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08860u) goto L_08B08860;
    return;
L_08B08860:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08B08874u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08874u) goto L_08B08874;
    return;
L_08B08874:
    ctx.set_gpr(31, 0x08B0887Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0887Cu) goto L_08B0887C;
    return;
L_08B0887C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08B08890u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08890u) goto L_08B08890;
    return;
L_08B08890:
    ctx.set_gpr(31, 0x08B08898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08898u) goto L_08B08898;
    return;
L_08B08898:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(31, 0x08B088ACu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B088ACu) goto L_08B088AC;
    return;
L_08B088AC:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3620), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13968)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13972)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13976)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B088DC;
L_08B088DC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B088EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3588)));
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B0891Cu);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 888u, 0x08B078E8u>(ctx, &aot_mem) && ctx.pc == 0x08B0891Cu) goto L_08B0891C;
    return;
L_08B0891C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
        goto L_08B08950;
    }
    goto L_08B08924;
L_08B08924:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3604), ctx.gpr[2]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13980)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13984)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13988)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B08B58;
      }
      goto L_08B08950;
    }
L_08B08950:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 61 ? 1u : 0u);
        goto L_08B08980;
    }
    goto L_08B08958;
L_08B08958:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13992)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13996)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14000)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B08B58;
      }
      goto L_08B08980;
    }
L_08B08980:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 86 ? 1u : 0u);
        goto L_08B089C4;
    }
    goto L_08B08988;
L_08B08988:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1378));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14004)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14008)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14012)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B08B58;
      }
      goto L_08B089C4;
    }
L_08B089C4:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 110 ? 1u : 0u);
        goto L_08B08A08;
    }
    goto L_08B089CC;
L_08B089CC:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-61));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(624));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14016)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14020)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14024)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B08B58;
      }
      goto L_08B08A08;
    }
L_08B08A08:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 134 ? 1u : 0u);
        goto L_08B08A4C;
    }
    goto L_08B08A10;
L_08B08A10:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-86));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(674));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14028)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14032)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14036)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B08B58;
      }
      goto L_08B08A4C;
    }
L_08B08A4C:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 157 ? 1u : 0u);
        goto L_08B08A90;
    }
    goto L_08B08A54;
L_08B08A54:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-110));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(722));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14040)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14044)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14048)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B08B58;
      }
      goto L_08B08A90;
    }
L_08B08A90:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 181 ? 1u : 0u);
        goto L_08B08AD4;
    }
    goto L_08B08A98;
L_08B08A98:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-134));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(770));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14052)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14056)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14060)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B08B58;
      }
      goto L_08B08AD4;
    }
L_08B08AD4:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 198 ? 1u : 0u);
        goto L_08B08B18;
    }
    goto L_08B08ADC;
L_08B08ADC:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-157));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(816));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14064)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14068)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14072)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B08B58;
      }
      goto L_08B08B18;
    }
L_08B08B18:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B08B5C;
    }
    goto L_08B08B20;
L_08B08B20:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-181));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(864));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3608), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14076)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14080)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14084)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B08B58;
L_08B08B58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B08B5C;
L_08B08B5C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08B68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B08B7Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08B7Cu) goto L_08B08B7C;
    return;
L_08B08B7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B08B90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 365u, 0x08AB1554u>(ctx, &aot_mem) && ctx.pc == 0x08B08B90u) goto L_08B08B90;
    return;
L_08B08B90:
    ctx.set_gpr(31, 0x08B08B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08B98u) goto L_08B08B98;
    return;
L_08B08B98:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B08BB0u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08B08BB0u) goto L_08B08BB0;
    return;
L_08B08BB0:
    ctx.set_gpr(31, 0x08B08BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08BB8u) goto L_08B08BB8;
    return;
L_08B08BB8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B08BD8u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08B08BD8u) goto L_08B08BD8;
    return;
L_08B08BD8:
    ctx.set_gpr(3, 16153u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 39322u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3612), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14088)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14092)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14096)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08C18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3612)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B08CBC;
      }
      goto L_08B08C3C;
    }
L_08B08C3C:
    ctx.set_gpr(31, 0x08B08C44u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3612), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 194u, 0x08848CA8u>(ctx, &aot_mem) && ctx.pc == 0x08B08C44u) goto L_08B08C44;
    return;
L_08B08C44:
    ctx.set_gpr(31, 0x08B08C4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 142u, 0x08AD486Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08C4Cu) goto L_08B08C4C;
    return;
L_08B08C4C:
    ctx.set_gpr(31, 0x08B08C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 194u, 0x08848CA8u>(ctx, &aot_mem) && ctx.pc == 0x08B08C54u) goto L_08B08C54;
    return;
L_08B08C54:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3604)));
    ctx.set_gpr(31, 0x08B08C60u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 172u, 0x08AD49B4u>(ctx, &aot_mem) && ctx.pc == 0x08B08C60u) goto L_08B08C60;
    return;
L_08B08C60:
    ctx.set_gpr(31, 0x08B08C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08C68u) goto L_08B08C68;
    return;
L_08B08C68:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(49));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B08C94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08C94u) goto L_08B08C94;
    return;
L_08B08C94:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14100)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14104)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14108)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B08CC4;
      }
      goto L_08B08CBC;
    }
L_08B08CBC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3612), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B08CC4;
L_08B08CC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08CD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B08CE8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08CE8u) goto L_08B08CE8;
    return;
L_08B08CE8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B08D00u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08B08D00u) goto L_08B08D00;
    return;
L_08B08D00:
    ctx.set_gpr(31, 0x08B08D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08D08u) goto L_08B08D08;
    return;
L_08B08D08:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B08D24u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08B08D24u) goto L_08B08D24;
    return;
L_08B08D24:
    ctx.set_gpr(31, 0x08B08D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B08D2Cu) goto L_08B08D2C;
    return;
L_08B08D2C:
    ctx.set_gpr(31, 0x08B08D34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 924u, 0x0884B6F4u>(ctx, &aot_mem) && ctx.pc == 0x08B08D34u) goto L_08B08D34;
    return;
L_08B08D34:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[2]))));
    ctx.set_gpr(2, ctx.gpr[2] & 385u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B08D54;
      }
      goto L_08B08D44;
    }
L_08B08D44:
    ctx.set_gpr(31, 0x08B08D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 194u, 0x08848CA8u>(ctx, &aot_mem) && ctx.pc == 0x08B08D4Cu) goto L_08B08D4C;
    return;
L_08B08D4C:
    ctx.set_gpr(31, 0x08B08D54u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 181u, 0x08AD4A40u>(ctx, &aot_mem) && ctx.pc == 0x08B08D54u) goto L_08B08D54;
    return;
L_08B08D54:
    ctx.set_gpr(31, 0x08B08D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 194u, 0x08848CA8u>(ctx, &aot_mem) && ctx.pc == 0x08B08D5Cu) goto L_08B08D5C;
    return;
L_08B08D5C:
    ctx.set_gpr(31, 0x08B08D64u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 893u, 0x0884B594u>(ctx, &aot_mem) && ctx.pc == 0x08B08D64u) goto L_08B08D64;
    return;
L_08B08D64:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B08DAC;
    }
    goto L_08B08D6C;
L_08B08D6C:
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x08B08D7Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3612), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 194u, 0x08848CA8u>(ctx, &aot_mem) && ctx.pc == 0x08B08D7Cu) goto L_08B08D7C;
    return;
L_08B08D7C:
    ctx.set_gpr(31, 0x08B08D84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 156u, 0x08AD490Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08D84u) goto L_08B08D84;
    return;
L_08B08D84:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14112)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14116)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14120)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B08DAC;
L_08B08DAC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08DB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3612)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B08E54;
      }
      goto L_08B08DDC;
    }
L_08B08DDC:
    ctx.set_gpr(31, 0x08B08DE4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3612), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08DE4u) goto L_08B08DE4;
    return;
L_08B08DE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(69));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B08E04u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 647u, 0x088A67BCu>(ctx, &aot_mem) && ctx.pc == 0x08B08E04u) goto L_08B08E04;
    return;
L_08B08E04:
    ctx.set_gpr(31, 0x08B08E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08E0Cu) goto L_08B08E0C;
    return;
L_08B08E0C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B08E2Cu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08B08E2Cu) goto L_08B08E2C;
    return;
L_08B08E2C:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14124)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14128)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14132)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B08E5C;
      }
      goto L_08B08E54;
    }
L_08B08E54:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3612), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B08E5C;
L_08B08E5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08E6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B08E80u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B08E80u) goto L_08B08E80;
    return;
L_08B08E80:
    ctx.set_gpr(31, 0x08B08E88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08B08E88u) goto L_08B08E88;
    return;
L_08B08E88:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B08EBC;
    }
    goto L_08B08E94;
L_08B08E94:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14136)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14140)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14144)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B08EBC;
L_08B08EBC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08EC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B08EE0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B08EE0u) goto L_08B08EE0;
    return;
L_08B08EE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16752u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08B08F18u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08B08F18u) goto L_08B08F18;
    return;
L_08B08F18:
    ctx.set_gpr(31, 0x08B08F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B08F20u) goto L_08B08F20;
    return;
L_08B08F20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B08F30u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08B08F30u) goto L_08B08F30;
    return;
L_08B08F30:
    ctx.set_gpr(31, 0x08B08F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B08F38u) goto L_08B08F38;
    return;
L_08B08F38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B08F48u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08F48u) goto L_08B08F48;
    return;
L_08B08F48:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B08F58u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08B08F58u) goto L_08B08F58;
    return;
L_08B08F58:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14160));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B08F78u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08B08F78u) goto L_08B08F78;
    return;
L_08B08F78:
    ctx.set_gpr(31, 0x08B08F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B08F80u) goto L_08B08F80;
    return;
L_08B08F80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B08F8Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08B08F8Cu) goto L_08B08F8C;
    return;
L_08B08F8C:
    ctx.set_gpr(31, 0x08B08F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B08F94u) goto L_08B08F94;
    return;
L_08B08F94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B08FA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08B08FA0u) goto L_08B08FA0;
    return;
L_08B08FA0:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14148)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14152)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14156)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B08FD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B08FECu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B08FECu) goto L_08B08FEC;
    return;
L_08B08FEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B08FF8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08B08FF8u) goto L_08B08FF8;
    return;
L_08B08FF8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B09080;
    }
    goto L_08B09000;
L_08B09000:
    ctx.set_gpr(31, 0x08B09008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B09008u) goto L_08B09008;
    return;
L_08B09008:
    ctx.set_gpr(31, 0x08B09010u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 800u, 0x08AF754Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09010u) goto L_08B09010;
    return;
L_08B09010:
    ctx.set_gpr(31, 0x08B09018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B09018u) goto L_08B09018;
    return;
L_08B09018:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B09024u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08B09024u) goto L_08B09024;
    return;
L_08B09024:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3624), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B09044;
      }
      goto L_08B09030;
    }
L_08B09030:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B09044;
      }
      goto L_08B0903C;
    }
L_08B0903C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0907C;
      }
      goto L_08B09044;
    }
L_08B09044:
    ctx.set_gpr(31, 0x08B0904Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B0904Cu) goto L_08B0904C;
    return;
L_08B0904C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B09058u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08B09058u) goto L_08B09058;
    return;
L_08B09058:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14192)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14196)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14200)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B0907C;
L_08B0907C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B09080;
L_08B09080:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0908C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B090A0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B090A0u) goto L_08B090A0;
    return;
L_08B090A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B090ACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08B090ACu) goto L_08B090AC;
    return;
L_08B090AC:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B0915C;
    }
    goto L_08B090B8;
L_08B090B8:
    ctx.set_gpr(31, 0x08B090C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B090C0u) goto L_08B090C0;
    return;
L_08B090C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B090CCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08B090CCu) goto L_08B090CC;
    return;
L_08B090CC:
    ctx.set_gpr(31, 0x08B090D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B090D4u) goto L_08B090D4;
    return;
L_08B090D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B090E0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B090E0u) goto L_08B090E0;
    return;
L_08B090E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3624)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3624), 0u);
        goto L_08B09134;
    }
    goto L_08B090F0;
L_08B090F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3624), 0u);
        goto L_08B09104;
    }
    goto L_08B090FC;
L_08B090FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B09158;
      }
      goto L_08B09104;
    }
L_08B09104:
    ctx.set_gpr(31, 0x08B0910Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08B0910Cu) goto L_08B0910C;
    return;
L_08B0910C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B09118u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 815u, 0x08B07434u>(ctx, &aot_mem) && ctx.pc == 0x08B09118u) goto L_08B09118;
    return;
L_08B09118:
    ctx.set_gpr(4, 2221u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2708));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23032), ctx.gpr[4]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3580), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08B09158;
      }
      goto L_08B09134;
    }
L_08B09134:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14204)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14208)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14212)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B09158;
L_08B09158:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B0915C;
L_08B0915C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09168:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B0917Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0917Cu) goto L_08B0917C;
    return;
L_08B0917C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3608)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B09190u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09190u) goto L_08B09190;
    return;
L_08B09190:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B09390;
    }
    goto L_08B09198;
L_08B09198:
    ctx.set_gpr(31, 0x08B091A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08B091A0u) goto L_08B091A0;
    return;
L_08B091A0:
    ctx.set_gpr(31, 0x08B091A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x08B091A8u) goto L_08B091A8;
    return;
L_08B091A8:
    ctx.set_gpr(31, 0x08B091B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B091B0u) goto L_08B091B0;
    return;
L_08B091B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08B091C8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08B091C8u) goto L_08B091C8;
    return;
L_08B091C8:
    ctx.set_gpr(31, 0x08B091D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B091D0u) goto L_08B091D0;
    return;
L_08B091D0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B091F0u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B091F0u) goto L_08B091F0;
    return;
L_08B091F0:
    ctx.set_gpr(31, 0x08B091F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B091F8u) goto L_08B091F8;
    return;
L_08B091F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B09220u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08B09220u) goto L_08B09220;
    return;
L_08B09220:
    ctx.set_gpr(31, 0x08B09228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09228u) goto L_08B09228;
    return;
L_08B09228:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B09244u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 644u, 0x08ABE60Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09244u) goto L_08B09244;
    return;
L_08B09244:
    ctx.set_gpr(31, 0x08B0924Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0924Cu) goto L_08B0924C;
    return;
L_08B0924C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B0926Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABE5B8u>(ctx, &aot_mem) && ctx.pc == 0x08B0926Cu) goto L_08B0926C;
    return;
L_08B0926C:
    ctx.set_gpr(31, 0x08B09274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09274u) goto L_08B09274;
    return;
L_08B09274:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17036u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(7, 17026u << 16u);
    ctx.set_gpr(3, 16932u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(2, 17044u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B092C4u);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B092C4u) goto L_08B092C4;
    return;
L_08B092C4:
    ctx.set_gpr(31, 0x08B092CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B092CCu) goto L_08B092CC;
    return;
L_08B092CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B092F4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08B092F4u) goto L_08B092F4;
    return;
L_08B092F4:
    ctx.set_gpr(31, 0x08B092FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B092FCu) goto L_08B092FC;
    return;
L_08B092FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08B09310u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09310u) goto L_08B09310;
    return;
L_08B09310:
    ctx.set_gpr(31, 0x08B09318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09318u) goto L_08B09318;
    return;
L_08B09318:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B09338u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09338u) goto L_08B09338;
    return;
L_08B09338:
    ctx.set_gpr(31, 0x08B09340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09340u) goto L_08B09340;
    return;
L_08B09340:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B09368u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08B09368u) goto L_08B09368;
    return;
L_08B09368:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14216)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14220)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14224)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B09390;
L_08B09390:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0939C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B093B8u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B093B8u) goto L_08B093B8;
    return;
L_08B093B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B093C8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 63u, 0x0884C3ACu>(ctx, &aot_mem) && ctx.pc == 0x08B093C8u) goto L_08B093C8;
    return;
L_08B093C8:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, 16128u << 16u);
        goto L_08B09458;
    }
    goto L_08B093D4;
L_08B093D4:
    ctx.set_gpr(31, 0x08B093DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B093DCu) goto L_08B093DC;
    return;
L_08B093DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B093F4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 644u, 0x08ABE60Cu>(ctx, &aot_mem) && ctx.pc == 0x08B093F4u) goto L_08B093F4;
    return;
L_08B093F4:
    ctx.set_gpr(31, 0x08B093FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B093FCu) goto L_08B093FC;
    return;
L_08B093FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3596)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(49));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B09428u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09428u) goto L_08B09428;
    return;
L_08B09428:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3616), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3620), 0u);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14228)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14232)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14236)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B09478;
      }
      goto L_08B09458;
    }
L_08B09458:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[20] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3616)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3616), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3620)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3620), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B09478;
L_08B09478:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0948C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B094A0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B094A0u) goto L_08B094A0;
    return;
L_08B094A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B094ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08B094ACu) goto L_08B094AC;
    return;
L_08B094AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B094D0;
      }
      goto L_08B094B4;
    }
L_08B094B4:
    ctx.set_gpr(31, 0x08B094BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B094BCu) goto L_08B094BC;
    return;
L_08B094BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B094C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08B094C8u) goto L_08B094C8;
    return;
L_08B094C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B096AC;
      }
      goto L_08B094D0;
    }
L_08B094D0:
    ctx.set_gpr(31, 0x08B094D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B094D8u) goto L_08B094D8;
    return;
L_08B094D8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B094F8u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B094F8u) goto L_08B094F8;
    return;
L_08B094F8:
    ctx.set_gpr(31, 0x08B09500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09500u) goto L_08B09500;
    return;
L_08B09500:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B09528u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08B09528u) goto L_08B09528;
    return;
L_08B09528:
    ctx.set_gpr(31, 0x08B09530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09530u) goto L_08B09530;
    return;
L_08B09530:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B09548u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 644u, 0x08ABE60Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09548u) goto L_08B09548;
    return;
L_08B09548:
    ctx.set_gpr(31, 0x08B09550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09550u) goto L_08B09550;
    return;
L_08B09550:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B0956Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABE5B8u>(ctx, &aot_mem) && ctx.pc == 0x08B0956Cu) goto L_08B0956C;
    return;
L_08B0956C:
    ctx.set_gpr(31, 0x08B09574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09574u) goto L_08B09574;
    return;
L_08B09574:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B09594u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08B09594u) goto L_08B09594;
    return;
L_08B09594:
    ctx.set_gpr(31, 0x08B0959Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0959Cu) goto L_08B0959C;
    return;
L_08B0959C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3592)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17036u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(8, 17026u << 16u);
    ctx.set_gpr(7, 16932u << 16u);
    ctx.set_gpr(3, 17044u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3596)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08B095F4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08B095F4u) goto L_08B095F4;
    return;
L_08B095F4:
    ctx.set_gpr(31, 0x08B095FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B095FCu) goto L_08B095FC;
    return;
L_08B095FC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B0961Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0961Cu) goto L_08B0961C;
    return;
L_08B0961C:
    ctx.set_gpr(31, 0x08B09624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09624u) goto L_08B09624;
    return;
L_08B09624:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B0964Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08B0964Cu) goto L_08B0964C;
    return;
L_08B0964C:
    ctx.set_gpr(31, 0x08B09654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09654u) goto L_08B09654;
    return;
L_08B09654:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08B09668u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09668u) goto L_08B09668;
    return;
L_08B09668:
    ctx.set_gpr(31, 0x08B09670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09670u) goto L_08B09670;
    return;
L_08B09670:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B09684u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09684u) goto L_08B09684;
    return;
L_08B09684:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14240)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14244)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14248)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B096F8;
      }
      goto L_08B096AC;
    }
L_08B096AC:
    ctx.set_gpr(31, 0x08B096B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B096B4u) goto L_08B096B4;
    return;
L_08B096B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B096C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08B096C0u) goto L_08B096C0;
    return;
L_08B096C0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B096FC;
    }
    goto L_08B096C8;
L_08B096C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B096D4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 43u, 0x08AF037Cu>(ctx, &aot_mem) && ctx.pc == 0x08B096D4u) goto L_08B096D4;
    return;
L_08B096D4:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14252)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14256)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14260)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B096F8;
L_08B096F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B096FC;
L_08B096FC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09708:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B09724u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09724u) goto L_08B09724;
    return;
L_08B09724:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B09734u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 63u, 0x0884C3ACu>(ctx, &aot_mem) && ctx.pc == 0x08B09734u) goto L_08B09734;
    return;
L_08B09734:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, 16128u << 16u);
        goto L_08B097F0;
    }
    goto L_08B09740;
L_08B09740:
    ctx.set_gpr(31, 0x08B09748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09748u) goto L_08B09748;
    return;
L_08B09748:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08B09760u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08B09760u) goto L_08B09760;
    return;
L_08B09760:
    ctx.set_gpr(31, 0x08B09768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09768u) goto L_08B09768;
    return;
L_08B09768:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08B0977Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0977Cu) goto L_08B0977C;
    return;
L_08B0977C:
    ctx.set_gpr(31, 0x08B09784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B09784u) goto L_08B09784;
    return;
L_08B09784:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B09794u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09794u) goto L_08B09794;
    return;
L_08B09794:
    ctx.set_gpr(31, 0x08B0979Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0979Cu) goto L_08B0979C;
    return;
L_08B0979C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B097BCu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08B097BCu) goto L_08B097BC;
    return;
L_08B097BC:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3616), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3620), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14264)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14268)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14272)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B09810;
      }
      goto L_08B097F0;
    }
L_08B097F0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[20] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3616)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3616), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3620)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3620), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B09810;
L_08B09810:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09824:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B0983Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 828u, 0x08866994u>(ctx, &aot_mem) && ctx.pc == 0x08B0983Cu) goto L_08B0983C;
    return;
L_08B0983C:
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B09874;
    }
    goto L_08B0984C;
L_08B0984C:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14276)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14280)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14284)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B09874;
L_08B09874:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09880:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B09898u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B09898u) goto L_08B09898;
    return;
L_08B09898:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16656u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08B098D0u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08B098D0u) goto L_08B098D0;
    return;
L_08B098D0:
    ctx.set_gpr(31, 0x08B098D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B098D8u) goto L_08B098D8;
    return;
L_08B098D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B098E8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08B098E8u) goto L_08B098E8;
    return;
L_08B098E8:
    ctx.set_gpr(31, 0x08B098F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B098F0u) goto L_08B098F0;
    return;
L_08B098F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B09900u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09900u) goto L_08B09900;
    return;
L_08B09900:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B09910u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09910u) goto L_08B09910;
    return;
L_08B09910:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14300));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B09930u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08B09930u) goto L_08B09930;
    return;
L_08B09930:
    ctx.set_gpr(31, 0x08B09938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B09938u) goto L_08B09938;
    return;
L_08B09938:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B09944u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08B09944u) goto L_08B09944;
    return;
L_08B09944:
    ctx.set_gpr(31, 0x08B0994Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B0994Cu) goto L_08B0994C;
    return;
L_08B0994C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B09958u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08B09958u) goto L_08B09958;
    return;
L_08B09958:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14288)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14292)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14296)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09990:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B099A4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B099A4u) goto L_08B099A4;
    return;
L_08B099A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B099B0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08B099B0u) goto L_08B099B0;
    return;
L_08B099B0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B09A38;
    }
    goto L_08B099B8;
L_08B099B8:
    ctx.set_gpr(31, 0x08B099C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B099C0u) goto L_08B099C0;
    return;
L_08B099C0:
    ctx.set_gpr(31, 0x08B099C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 800u, 0x08AF754Cu>(ctx, &aot_mem) && ctx.pc == 0x08B099C8u) goto L_08B099C8;
    return;
L_08B099C8:
    ctx.set_gpr(31, 0x08B099D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B099D0u) goto L_08B099D0;
    return;
L_08B099D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B099DCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08B099DCu) goto L_08B099DC;
    return;
L_08B099DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3624), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B099FC;
      }
      goto L_08B099E8;
    }
L_08B099E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B099FC;
      }
      goto L_08B099F4;
    }
L_08B099F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B09A34;
      }
      goto L_08B099FC;
    }
L_08B099FC:
    ctx.set_gpr(31, 0x08B09A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B09A04u) goto L_08B09A04;
    return;
L_08B09A04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B09A10u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08B09A10u) goto L_08B09A10;
    return;
L_08B09A10:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14320)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14324)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14328)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B09A34;
L_08B09A34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B09A38;
L_08B09A38:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09A44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B09A58u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B09A58u) goto L_08B09A58;
    return;
L_08B09A58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B09A64u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08B09A64u) goto L_08B09A64;
    return;
L_08B09A64:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08B09AFC;
    }
    goto L_08B09A70;
L_08B09A70:
    ctx.set_gpr(31, 0x08B09A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B09A78u) goto L_08B09A78;
    return;
L_08B09A78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B09A84u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08B09A84u) goto L_08B09A84;
    return;
L_08B09A84:
    ctx.set_gpr(31, 0x08B09A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08B09A8Cu) goto L_08B09A8C;
    return;
L_08B09A8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B09A98u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09A98u) goto L_08B09A98;
    return;
L_08B09A98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3624)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3624), 0u);
        goto L_08B09AD4;
    }
    goto L_08B09AA8;
L_08B09AA8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.set_gpr(4, 2219u << 16u);
        goto L_08B09ABC;
    }
    goto L_08B09AB4;
L_08B09AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B09AF8;
      }
      goto L_08B09ABC;
    }
L_08B09ABC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3624), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24204));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23032), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3580), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B09AF8;
      }
      goto L_08B09AD4;
    }
L_08B09AD4:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14332)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14336)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14340)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3560), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3564), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B09AF8;
L_08B09AF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B09AFC;
L_08B09AFC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09B08:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14344));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    (void)rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem); return;
L_08B09B28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B09D14;
      }
      goto L_08B09B48;
    }
L_08B09B48:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1588));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09B64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08B09B7C;
L_08B09B7C:
    ctx.set_gpr(31, 0x08B09B84u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 76u, 0x08AAC61Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09B84u) goto L_08B09B84;
    return;
L_08B09B84:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B09B98;
    }
    goto L_08B09B90;
L_08B09B90:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B09D14;
      }
      goto L_08B09B98;
    }
L_08B09B98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08B09BA4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 12u, 0x08B0C09Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09BA4u) goto L_08B09BA4;
    return;
L_08B09BA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B09BB8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 190u, 0x08AACCC8u>(ctx, &aot_mem) && ctx.pc == 0x08B09BB8u) goto L_08B09BB8;
    return;
L_08B09BB8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08B09BD8;
    }
    goto L_08B09BC4;
L_08B09BC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08B09D14;
      }
      goto L_08B09BD8;
    }
L_08B09BD8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08B09BE0;
L_08B09BE0:
    ctx.set_gpr(31, 0x08B09BE8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 197u, 0x08AACD44u>(ctx, &aot_mem) && ctx.pc == 0x08B09BE8u) goto L_08B09BE8;
    return;
L_08B09BE8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08B09BFC;
    }
    goto L_08B09BF4;
L_08B09BF4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B09D14;
      }
      goto L_08B09BFC;
    }
L_08B09BFC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08B09C04;
L_08B09C04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B09C10u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 199u, 0x08AACD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09C10u) goto L_08B09C10;
    return;
L_08B09C10:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08B09C30;
    }
    goto L_08B09C1C;
L_08B09C1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08B09D14;
      }
      goto L_08B09C30;
    }
L_08B09C30:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08B09C38;
L_08B09C38:
    ctx.set_gpr(31, 0x08B09C40u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 201u, 0x08AACE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09C40u) goto L_08B09C40;
    return;
L_08B09C40:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08B09C54;
    }
    goto L_08B09C4C;
L_08B09C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B09D14;
      }
      goto L_08B09C54;
    }
L_08B09C54:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08B09C5C;
L_08B09C5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[2] == ctx.gpr[6]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08B09C84;
    }
    goto L_08B09C70;
L_08B09C70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08B09D14;
      }
      goto L_08B09C84;
    }
L_08B09C84:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B09CC0;
    }
    goto L_08B09C98;
L_08B09C98:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08B09CB4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08B09CB4u) goto L_08B09CB4;
    return;
L_08B09CB4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B09D14;
      }
      goto L_08B09CBC;
    }
L_08B09CBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B09CC0;
L_08B09CC0:
    ctx.set_gpr(31, 0x08B09CC8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 869u, 0x08AC394Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09CC8u) goto L_08B09CC8;
    return;
L_08B09CC8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B09CDCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 470u, 0x08AADF58u>(ctx, &aot_mem) && ctx.pc == 0x08B09CDCu) goto L_08B09CDC;
    return;
L_08B09CDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08B09CE8;
L_08B09CE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B09D00u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 452u, 0x08AADD34u>(ctx, &aot_mem) && ctx.pc == 0x08B09D00u) goto L_08B09D00;
    return;
L_08B09D00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08B09D10u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 496u, 0x08AAE130u>(ctx, &aot_mem) && ctx.pc == 0x08B09D10u) goto L_08B09D10;
    return;
L_08B09D10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B09D14;
L_08B09D14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09D24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08B09D50u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25712));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 242u, 0x08AAD0C4u>(ctx, &aot_mem) && ctx.pc == 0x08B09D50u) goto L_08B09D50;
    return;
L_08B09D50:
    ctx.set_gpr(31, 0x08B09D58u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08B09D58u) goto L_08B09D58;
    return;
L_08B09D58:
    ctx.set_gpr(31, 0x08B09D60u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08B09D60u) goto L_08B09D60;
    return;
L_08B09D60:
    ctx.set_gpr(31, 0x08B09D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09D68u) goto L_08B09D68;
    return;
L_08B09D68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B09D74u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08B09D74u) goto L_08B09D74;
    return;
L_08B09D74:
    ctx.set_gpr(31, 0x08B09D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08B09D7Cu) goto L_08B09D7C;
    return;
L_08B09D7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B09D88u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08B09D88u) goto L_08B09D88;
    return;
L_08B09D88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B09D94u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 530u, 0x08AAE348u>(ctx, &aot_mem) && ctx.pc == 0x08B09D94u) goto L_08B09D94;
    return;
L_08B09D94:
    ctx.set_gpr(31, 0x08B09D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B09D9Cu) goto L_08B09D9C;
    return;
L_08B09D9C:
    ctx.set_gpr(31, 0x08B09DA4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08B09DA4u) goto L_08B09DA4;
    return;
L_08B09DA4:
    ctx.set_gpr(31, 0x08B09DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B09DACu) goto L_08B09DAC;
    return;
L_08B09DAC:
    ctx.set_gpr(31, 0x08B09DB4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 496u, 0x08B02694u>(ctx, &aot_mem) && ctx.pc == 0x08B09DB4u) goto L_08B09DB4;
    return;
L_08B09DB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B09DC0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 438u, 0x08AADC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09DC0u) goto L_08B09DC0;
    return;
L_08B09DC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B09DCCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 525u, 0x08AAE2C8u>(ctx, &aot_mem) && ctx.pc == 0x08B09DCCu) goto L_08B09DCC;
    return;
L_08B09DCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B09DD8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 122u, 0x08AAC854u>(ctx, &aot_mem) && ctx.pc == 0x08B09DD8u) goto L_08B09DD8;
    return;
L_08B09DD8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08B09DF0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 787u, 0x0885F02Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09DF0u) goto L_08B09DF0;
    return;
L_08B09DF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B09E08u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08B09E08u) goto L_08B09E08;
    return;
L_08B09E08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08B09E20u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 252u, 0x08B0CEF0u>(ctx, &aot_mem) && ctx.pc == 0x08B09E20u) goto L_08B09E20;
    return;
L_08B09E20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B09E2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 256u, 0x08B0CF58u>(ctx, &aot_mem) && ctx.pc == 0x08B09E2Cu) goto L_08B09E2C;
    return;
L_08B09E2C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B09E3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    goto L_08B0BD74;
L_08B09E3C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B09E4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    goto L_08B0BDE0;
L_08B09E4C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B09E5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 5u, 0x08B0C030u>(ctx, &aot_mem) && ctx.pc == 0x08B09E5Cu) goto L_08B09E5C;
    return;
L_08B09E5C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B09E6Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15612));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 463u, 0x08AADDF4u>(ctx, &aot_mem) && ctx.pc == 0x08B09E6Cu) goto L_08B09E6C;
    return;
L_08B09E6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08B09E80u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    goto L_08B0BC7C;
L_08B09E80:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08B09ED4;
    }
    goto L_08B09E88;
L_08B09E88:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14364)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14368)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14372)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14380)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14376)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14384)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B09F18;
      }
      goto L_08B09ED4;
    }
L_08B09ED4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14388)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14392)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14396)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14404)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14400)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14408)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B09F18;
L_08B09F18:
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
L_08B09F34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    (void)rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 247u, 0x08B0CE48u>(ctx, &aot_mem); return;
L_08B09F40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15608)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15408));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B09F70u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B09F70u) goto L_08B09F70;
    return;
L_08B09F70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09F80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08B09F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B09F90u) goto L_08B09F90;
    return;
L_08B09F90:
    ctx.set_gpr(31, 0x08B09F98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08B09F98u) goto L_08B09F98;
    return;
L_08B09F98:
    ctx.set_gpr(31, 0x08B09FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08B09FA0u) goto L_08B09FA0;
    return;
L_08B09FA0:
    ctx.set_gpr(31, 0x08B09FA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08B09FA8u) goto L_08B09FA8;
    return;
L_08B09FA8:
    ctx.set_gpr(31, 0x08B09FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B09FB0u) goto L_08B09FB0;
    return;
L_08B09FB0:
    ctx.set_gpr(31, 0x08B09FB8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08B09FB8u) goto L_08B09FB8;
    return;
L_08B09FB8:
    ctx.set_gpr(31, 0x08B09FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08B09FC0u) goto L_08B09FC0;
    return;
L_08B09FC0:
    ctx.set_gpr(31, 0x08B09FC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08B09FC8u) goto L_08B09FC8;
    return;
L_08B09FC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B09FD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B09FFCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15612));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 69u, 0x08B0C3A4u>(ctx, &aot_mem) && ctx.pc == 0x08B09FFCu) goto L_08B09FFC;
    return;
L_08B09FFC:
    ctx.set_gpr(31, 0x08B0A004u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08B0A080;
L_08B0A004:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08B0A018;
    }
    goto L_08B0A010;
L_08B0A010:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0A06C;
      }
      goto L_08B0A018;
    }
L_08B0A018:
    ctx.set_gpr(31, 0x08B0A020u);
    // nop
    goto L_08B0AB00;
L_08B0A020:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B0A034;
    }
    goto L_08B0A02C;
L_08B0A02C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0A06C;
      }
      goto L_08B0A034;
    }
L_08B0A034:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0A040u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 222u, 0x08B0CCECu>(ctx, &aot_mem) && ctx.pc == 0x08B0A040u) goto L_08B0A040;
    return;
L_08B0A040:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0A04Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08B0A4AC;
L_08B0A04C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08B0A060;
    }
    goto L_08B0A058;
L_08B0A058:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0A06C;
      }
      goto L_08B0A060;
    }
L_08B0A060:
    ctx.set_gpr(31, 0x08B0A068u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08B0A1EC;
L_08B0A068:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0A06C;
L_08B0A06C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A080:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B0A09Cu);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0A09Cu) goto L_08B0A09C;
    return;
L_08B0A09C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0A0A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08B0A0A8u) goto L_08B0A0A8;
    return;
L_08B0A0A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A0DC;
      }
      goto L_08B0A0B0;
    }
L_08B0A0B0:
    ctx.set_gpr(31, 0x08B0A0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A0B8u) goto L_08B0A0B8;
    return;
L_08B0A0B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B0A0CCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A0CCu) goto L_08B0A0CC;
    return;
L_08B0A0CC:
    ctx.set_gpr(31, 0x08B0A0D4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08B0A954;
L_08B0A0D4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08B0A1D0;
      }
      goto L_08B0A0DC;
    }
L_08B0A0DC:
    ctx.set_gpr(31, 0x08B0A0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0A0E4u) goto L_08B0A0E4;
    return;
L_08B0A0E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0A0F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08B0A0F0u) goto L_08B0A0F0;
    return;
L_08B0A0F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A158;
      }
      goto L_08B0A0F8;
    }
L_08B0A0F8:
    ctx.set_gpr(31, 0x08B0A100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A100u) goto L_08B0A100;
    return;
L_08B0A100:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B0A114u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A114u) goto L_08B0A114;
    return;
L_08B0A114:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08B0A124u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    goto L_08B0A1E4;
L_08B0A124:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08B0A150u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08B0A150u) goto L_08B0A150;
    return;
L_08B0A150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A1CC;
      }
      goto L_08B0A158;
    }
L_08B0A158:
    ctx.set_gpr(31, 0x08B0A160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0A160u) goto L_08B0A160;
    return;
L_08B0A160:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0A16Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08B0A16Cu) goto L_08B0A16C;
    return;
L_08B0A16C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, 0u + 0u);
        goto L_08B0A1CC;
    }
    goto L_08B0A174;
L_08B0A174:
    ctx.set_gpr(31, 0x08B0A17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A17Cu) goto L_08B0A17C;
    return;
L_08B0A17C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B0A190u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A190u) goto L_08B0A190;
    return;
L_08B0A190:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08B0A1A0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    goto L_08B0A1E4;
L_08B0A1A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08B0A1CCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08B0A1CCu) goto L_08B0A1CC;
    return;
L_08B0A1CC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08B0A1D0;
L_08B0A1D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A1E4:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A1EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08B0A224;
      }
      goto L_08B0A21C;
    }
L_08B0A21C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0A2A4;
      }
      goto L_08B0A224;
    }
L_08B0A224:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08B0A238u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    goto L_08B0BF14;
L_08B0A238:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B0A264;
    }
    goto L_08B0A244;
L_08B0A244:
    ctx.set_gpr(31, 0x08B0A24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0A24Cu) goto L_08B0A24C;
    return;
L_08B0A24C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08B0A25Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    goto L_08B0A2B4;
L_08B0A25C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08B0A298;
      }
      goto L_08B0A264;
    }
L_08B0A264:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08B0A270u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 12u, 0x08B0C09Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A270u) goto L_08B0A270;
    return;
L_08B0A270:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B0A294;
      }
      goto L_08B0A280;
    }
L_08B0A280:
    ctx.set_gpr(31, 0x08B0A288u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25036));
    goto L_08B0BDE0;
L_08B0A288:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0A2A4;
      }
      goto L_08B0A294;
    }
L_08B0A294:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08B0A298;
L_08B0A298:
    ctx.set_gpr(31, 0x08B0A2A0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08B0A30C;
L_08B0A2A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0A2A4;
L_08B0A2A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A2B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A2F4;
      }
      goto L_08B0A2D8;
    }
L_08B0A2D8:
    ctx.set_gpr(31, 0x08B0A2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 157u, 0x0885C91Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A2E0u) goto L_08B0A2E0;
    return;
L_08B0A2E0:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08B0A2F4;
L_08B0A2F4:
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
L_08B0A30C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08B0A338u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    goto L_08B0BC7C;
L_08B0A338:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B0A37C;
    }
    goto L_08B0A340;
L_08B0A340:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08B0A374u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08B0A374u) goto L_08B0A374;
    return;
L_08B0A374:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B0A3C4;
      }
      goto L_08B0A37C;
    }
L_08B0A37C:
    ctx.set_gpr(2, 16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08B0A39Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 452u, 0x08AADD34u>(ctx, &aot_mem) && ctx.pc == 0x08B0A39Cu) goto L_08B0A39C;
    return;
L_08B0A39C:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14412)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14416)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14420)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B0A3C4;
L_08B0A3C4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A3D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08B0A400u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 601u, 0x0884E07Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A400u) goto L_08B0A400;
    return;
L_08B0A400:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08B0A414u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15612));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 69u, 0x08B0C3A4u>(ctx, &aot_mem) && ctx.pc == 0x08B0A414u) goto L_08B0A414;
    return;
L_08B0A414:
    ctx.set_gpr(31, 0x08B0A41Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08B0A080;
L_08B0A41C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08B0A430;
    }
    goto L_08B0A428;
L_08B0A428:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0A494;
      }
      goto L_08B0A430;
    }
L_08B0A430:
    ctx.set_gpr(31, 0x08B0A438u);
    // nop
    goto L_08B0AB00;
L_08B0A438:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B0A44C;
    }
    goto L_08B0A444;
L_08B0A444:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0A494;
      }
      goto L_08B0A44C;
    }
L_08B0A44C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0A458u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 222u, 0x08B0CCECu>(ctx, &aot_mem) && ctx.pc == 0x08B0A458u) goto L_08B0A458;
    return;
L_08B0A458:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B0A468;
    }
    goto L_08B0A460;
L_08B0A460:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0A494;
      }
      goto L_08B0A468;
    }
L_08B0A468:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08B0A490u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08B0A490u) goto L_08B0A490;
    return;
L_08B0A490:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0A494;
L_08B0A494:
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
L_08B0A4AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08B0A4E4;
      }
      goto L_08B0A4DC;
    }
L_08B0A4DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0A618;
      }
      goto L_08B0A4E4;
    }
L_08B0A4E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B0A4F0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    goto L_08B0BD74;
L_08B0A4F0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08B0A618;
    }
    goto L_08B0A508;
L_08B0A508:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1620));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A530:
    ctx.set_gpr(31, 0x08B0A538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0A538u) goto L_08B0A538;
    return;
L_08B0A538:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B0A548u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    goto L_08B0A628;
L_08B0A548:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08B0A60C;
      }
      goto L_08B0A550;
    }
L_08B0A550:
    ctx.set_gpr(31, 0x08B0A558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0A558u) goto L_08B0A558;
    return;
L_08B0A558:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B0A568u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    goto L_08B0A628;
L_08B0A568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A608;
      }
      goto L_08B0A570;
    }
L_08B0A570:
    ctx.set_gpr(31, 0x08B0A578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0A578u) goto L_08B0A578;
    return;
L_08B0A578:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B0A588u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    goto L_08B0A628;
L_08B0A588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A608;
      }
      goto L_08B0A590;
    }
L_08B0A590:
    ctx.set_gpr(31, 0x08B0A598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0A598u) goto L_08B0A598;
    return;
L_08B0A598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B0A5A8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    goto L_08B0A628;
L_08B0A5A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A608;
      }
      goto L_08B0A5B0;
    }
L_08B0A5B0:
    ctx.set_gpr(31, 0x08B0A5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0A5B8u) goto L_08B0A5B8;
    return;
L_08B0A5B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B0A5C8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    goto L_08B0A628;
L_08B0A5C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A608;
      }
      goto L_08B0A5D0;
    }
L_08B0A5D0:
    ctx.set_gpr(31, 0x08B0A5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0A5D8u) goto L_08B0A5D8;
    return;
L_08B0A5D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B0A5E8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    goto L_08B0A628;
L_08B0A5E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A608;
      }
      goto L_08B0A5F0;
    }
L_08B0A5F0:
    ctx.set_gpr(31, 0x08B0A5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0A5F8u) goto L_08B0A5F8;
    return;
L_08B0A5F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08B0A608u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    goto L_08B0A628;
L_08B0A608:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08B0A60C;
L_08B0A60C:
    ctx.set_gpr(31, 0x08B0A614u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08B0A680;
L_08B0A614:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0A618;
L_08B0A618:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A628:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0A668;
      }
      goto L_08B0A64C;
    }
L_08B0A64C:
    ctx.set_gpr(31, 0x08B0A654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 157u, 0x0885C91Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A654u) goto L_08B0A654;
    return;
L_08B0A654:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08B0A668;
L_08B0A668:
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
L_08B0A680:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0A6A4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15612));
    goto L_08B0A764;
L_08B0A6A4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B0A6B4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15612));
    goto L_08B0A75C;
L_08B0A6B4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0A6D4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 452u, 0x08AADD34u>(ctx, &aot_mem) && ctx.pc == 0x08B0A6D4u) goto L_08B0A6D4;
    return;
L_08B0A6D4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B0A714;
    }
    goto L_08B0A6E8;
L_08B0A6E8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15608)));
    ctx.set_gpr(2, 16672u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(15408));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(-3));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08B0A710u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B0A710u) goto L_08B0A710;
    return;
L_08B0A710:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B0A714;
L_08B0A714:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08B0A724u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    goto L_08B0BE4C;
L_08B0A724:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14424)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14428)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14432)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A75C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A764:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A76C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08B0A798u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 601u, 0x0884E07Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A798u) goto L_08B0A798;
    return;
L_08B0A798:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08B0A7ACu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15612));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 69u, 0x08B0C3A4u>(ctx, &aot_mem) && ctx.pc == 0x08B0A7ACu) goto L_08B0A7AC;
    return;
L_08B0A7AC:
    ctx.set_gpr(31, 0x08B0A7B4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08B0A080;
L_08B0A7B4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08B0A7C8;
    }
    goto L_08B0A7C0;
L_08B0A7C0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0A860;
      }
      goto L_08B0A7C8;
    }
L_08B0A7C8:
    ctx.set_gpr(31, 0x08B0A7D0u);
    // nop
    goto L_08B0AB00;
L_08B0A7D0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B0A7E4;
    }
    goto L_08B0A7DC;
L_08B0A7DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0A860;
      }
      goto L_08B0A7E4;
    }
L_08B0A7E4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0A7F0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 222u, 0x08B0CCECu>(ctx, &aot_mem) && ctx.pc == 0x08B0A7F0u) goto L_08B0A7F0;
    return;
L_08B0A7F0:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B0A800;
    }
    goto L_08B0A7F8;
L_08B0A7F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0A860;
      }
      goto L_08B0A800;
    }
L_08B0A800:
    ctx.set_gpr(2, 16672u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0A818u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 452u, 0x08AADD34u>(ctx, &aot_mem) && ctx.pc == 0x08B0A818u) goto L_08B0A818;
    return;
L_08B0A818:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08B0A828u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15612));
    goto L_08B0A880;
L_08B0A828:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08B0A838u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15612));
    goto L_08B0A878;
L_08B0A838:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14436)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14440)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14444)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B0A860;
L_08B0A860:
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
L_08B0A878:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A880:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A888:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0A8B0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15612));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 69u, 0x08B0C3A4u>(ctx, &aot_mem) && ctx.pc == 0x08B0A8B0u) goto L_08B0A8B0;
    return;
L_08B0A8B0:
    ctx.set_gpr(31, 0x08B0A8B8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08B0A080;
L_08B0A8B8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08B0A8CC;
    }
    goto L_08B0A8C4;
L_08B0A8C4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0A940;
      }
      goto L_08B0A8CC;
    }
L_08B0A8CC:
    ctx.set_gpr(31, 0x08B0A8D4u);
    // nop
    goto L_08B0AB00;
L_08B0A8D4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B0A8E8;
    }
    goto L_08B0A8E0;
L_08B0A8E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0A940;
      }
      goto L_08B0A8E8;
    }
L_08B0A8E8:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0A8F4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 222u, 0x08B0CCECu>(ctx, &aot_mem) && ctx.pc == 0x08B0A8F4u) goto L_08B0A8F4;
    return;
L_08B0A8F4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08B0A91C;
      }
      goto L_08B0A914;
    }
L_08B0A914:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0A940;
      }
      goto L_08B0A91C;
    }
L_08B0A91C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    ctx.set_gpr(31, 0x08B0A930u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 12u, 0x08B0C09Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A930u) goto L_08B0A930;
    return;
L_08B0A930:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0A93Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08B0A30C;
L_08B0A93C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0A940;
L_08B0A940:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0A954:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B0A968u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x08B0A968u) goto L_08B0A968;
    return;
L_08B0A968:
    ctx.set_gpr(2, 16656u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(14));
    ctx.set_gpr(31, 0x08B0A994u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 414u, 0x08B05B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A994u) goto L_08B0A994;
    return;
L_08B0A994:
    ctx.set_gpr(31, 0x08B0A99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0A99Cu) goto L_08B0A99C;
    return;
L_08B0A99C:
    ctx.set_gpr(31, 0x08B0A9A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08B0A9A4u) goto L_08B0A9A4;
    return;
L_08B0A9A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B0A9BCu);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28992));
    goto L_08B0AA08;
L_08B0A9BC:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(4, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14452)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(14448)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14456)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0AA08:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0AA10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B0AA28u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 254u, 0x08AB5068u>(ctx, &aot_mem) && ctx.pc == 0x08B0AA28u) goto L_08B0AA28;
    return;
L_08B0AA28:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B0AA3C;
    }
    goto L_08B0AA34;
L_08B0AA34:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0AAF0;
      }
      goto L_08B0AA3C;
    }
L_08B0AA3C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B0AA4Cu);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28992));
    goto L_08B0AA08;
L_08B0AA4C:
    ctx.set_gpr(31, 0x08B0AA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x08B0AA54u) goto L_08B0AA54;
    return;
L_08B0AA54:
    ctx.set_gpr(31, 0x08B0AA5Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 253u, 0x08AB5060u>(ctx, &aot_mem) && ctx.pc == 0x08B0AA5Cu) goto L_08B0AA5C;
    return;
L_08B0AA5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0AAC0;
      }
      goto L_08B0AA64;
    }
L_08B0AA64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28940));
    ctx.set_gpr(31, 0x08B0AA7Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 913u, 0x08AAB1C8u>(ctx, &aot_mem) && ctx.pc == 0x08B0AA7Cu) goto L_08B0AA7C;
    return;
L_08B0AA7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08B0AA8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    goto L_08B0A1E4;
L_08B0AA8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08B0AAB8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08B0AAB8u) goto L_08B0AAB8;
    return;
L_08B0AAB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0AAF0;
      }
      goto L_08B0AAC0;
    }
L_08B0AAC0:
    ctx.set_gpr(31, 0x08B0AAC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0AAC8u) goto L_08B0AAC8;
    return;
L_08B0AAC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0AAD4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08B0AAD4u) goto L_08B0AAD4;
    return;
L_08B0AAD4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0AAF0;
L_08B0AAF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0AB00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B0AB14u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0AB14u) goto L_08B0AB14;
    return;
L_08B0AB14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0AB20u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08B0AB20u) goto L_08B0AB20;
    return;
L_08B0AB20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0AB30;
      }
      goto L_08B0AB28;
    }
L_08B0AB28:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0ABC8;
      }
      goto L_08B0AB30;
    }
L_08B0AB30:
    ctx.set_gpr(31, 0x08B0AB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0AB38u) goto L_08B0AB38;
    return;
L_08B0AB38:
    ctx.set_gpr(31, 0x08B0AB40u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08B0AB40u) goto L_08B0AB40;
    return;
L_08B0AB40:
    ctx.set_gpr(31, 0x08B0AB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0AB48u) goto L_08B0AB48;
    return;
L_08B0AB48:
    ctx.set_gpr(31, 0x08B0AB50u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08B0AB50u) goto L_08B0AB50;
    return;
L_08B0AB50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B0AB5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 256u, 0x08B0CF58u>(ctx, &aot_mem) && ctx.pc == 0x08B0AB5Cu) goto L_08B0AB5C;
    return;
L_08B0AB5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B0AB6Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 270u, 0x08B0D010u>(ctx, &aot_mem) && ctx.pc == 0x08B0AB6Cu) goto L_08B0AB6C;
    return;
L_08B0AB6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B0AB7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 126u, 0x08B0C6C0u>(ctx, &aot_mem) && ctx.pc == 0x08B0AB7Cu) goto L_08B0AB7C;
    return;
L_08B0AB7C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08B0AB88u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 43u, 0x08AF037Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0AB88u) goto L_08B0AB88;
    return;
L_08B0AB88:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(3, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14464)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14460)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14468)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B0ABC8;
L_08B0ABC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0ABD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B0ABF0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 828u, 0x08866994u>(ctx, &aot_mem) && ctx.pc == 0x08B0ABF0u) goto L_08B0ABF0;
    return;
L_08B0ABF0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B0AC04;
    }
    goto L_08B0ABFC;
L_08B0ABFC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0AC38;
      }
      goto L_08B0AC04;
    }
L_08B0AC04:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B0AC10u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 126u, 0x08B0C6C0u>(ctx, &aot_mem) && ctx.pc == 0x08B0AC10u) goto L_08B0AC10;
    return;
L_08B0AC10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B0AC1Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 530u, 0x08AAE348u>(ctx, &aot_mem) && ctx.pc == 0x08B0AC1Cu) goto L_08B0AC1C;
    return;
L_08B0AC1C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B0AC38;
L_08B0AC38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0AC48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08B0AC68u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08B0AC68u) goto L_08B0AC68;
    return;
L_08B0AC68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0AC78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B0AC8Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08B0AC8Cu) goto L_08B0AC8C;
    return;
L_08B0AC8C:
    ctx.set_gpr(31, 0x08B0AC94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08B0AC94u) goto L_08B0AC94;
    return;
L_08B0AC94:
    ctx.set_gpr(31, 0x08B0AC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0AC9Cu) goto L_08B0AC9C;
    return;
L_08B0AC9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0ACA8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08B0ACA8u) goto L_08B0ACA8;
    return;
L_08B0ACA8:
    ctx.set_gpr(31, 0x08B0ACB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08B0ACB0u) goto L_08B0ACB0;
    return;
L_08B0ACB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0ACBCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08B0ACBCu) goto L_08B0ACBC;
    return;
L_08B0ACBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B0ACC8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 530u, 0x08AAE348u>(ctx, &aot_mem) && ctx.pc == 0x08B0ACC8u) goto L_08B0ACC8;
    return;
L_08B0ACC8:
    ctx.set_gpr(31, 0x08B0ACD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0ACD0u) goto L_08B0ACD0;
    return;
L_08B0ACD0:
    ctx.set_gpr(31, 0x08B0ACD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08B0ACD8u) goto L_08B0ACD8;
    return;
L_08B0ACD8:
    ctx.set_gpr(31, 0x08B0ACE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0ACE0u) goto L_08B0ACE0;
    return;
L_08B0ACE0:
    ctx.set_gpr(31, 0x08B0ACE8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 496u, 0x08B02694u>(ctx, &aot_mem) && ctx.pc == 0x08B0ACE8u) goto L_08B0ACE8;
    return;
L_08B0ACE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0ACFC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0AD04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08B0AD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0AD14u) goto L_08B0AD14;
    return;
L_08B0AD14:
    ctx.set_gpr(31, 0x08B0AD1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08B0AD1Cu) goto L_08B0AD1C;
    return;
L_08B0AD1C:
    ctx.set_gpr(31, 0x08B0AD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08B0AD24u) goto L_08B0AD24;
    return;
L_08B0AD24:
    ctx.set_gpr(31, 0x08B0AD2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08B0AD2Cu) goto L_08B0AD2C;
    return;
L_08B0AD2C:
    ctx.set_gpr(31, 0x08B0AD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0AD34u) goto L_08B0AD34;
    return;
L_08B0AD34:
    ctx.set_gpr(31, 0x08B0AD3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08B0AD3Cu) goto L_08B0AD3C;
    return;
L_08B0AD3C:
    ctx.set_gpr(31, 0x08B0AD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08B0AD44u) goto L_08B0AD44;
    return;
L_08B0AD44:
    ctx.set_gpr(31, 0x08B0AD4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08B0AD4Cu) goto L_08B0AD4C;
    return;
L_08B0AD4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0AD58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B0AD84u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 275u, 0x08B0D07Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0AD84u) goto L_08B0AD84;
    return;
L_08B0AD84:
    ctx.set_gpr(31, 0x08B0AD8Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08B0AD8Cu) goto L_08B0AD8C;
    return;
L_08B0AD8C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08B0ADA4;
    }
    goto L_08B0AD94;
L_08B0AD94:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0ADA4u);
    ctx.set_gpr(25, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08B0ADA4u) goto L_08B0ADA4;
    return;
L_08B0ADA4:
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
L_08B0ADBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B0ADDCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08B0ADDCu) goto L_08B0ADDC;
    return;
L_08B0ADDC:
    ctx.set_gpr(31, 0x08B0ADE4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08B0ADE4u) goto L_08B0ADE4;
    return;
L_08B0ADE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08B0ADF0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0ADF0u) goto L_08B0ADF0;
    return;
L_08B0ADF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x08B0AE00u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 750u, 0x089FFD4Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0AE00u) goto L_08B0AE00;
    return;
L_08B0AE00:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x08B0AE0Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 536u, 0x0884A0ECu>(ctx, &aot_mem) && ctx.pc == 0x08B0AE0Cu) goto L_08B0AE0C;
    return;
L_08B0AE0C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08B0AE18u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08B0AE18u) goto L_08B0AE18;
    return;
L_08B0AE18:
    ctx.set_gpr(31, 0x08B0AE20u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08B0AE20u) goto L_08B0AE20;
    return;
L_08B0AE20:
    ctx.set_gpr(31, 0x08B0AE28u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08B0AE28u) goto L_08B0AE28;
    return;
L_08B0AE28:
    ctx.set_gpr(31, 0x08B0AE30u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08B0AE30u) goto L_08B0AE30;
    return;
L_08B0AE30:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08B0AE48u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08B0AE48u) goto L_08B0AE48;
    return;
L_08B0AE48:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x08B0AE58u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 362u, 0x08859960u>(ctx, &aot_mem) && ctx.pc == 0x08B0AE58u) goto L_08B0AE58;
    return;
L_08B0AE58:
    ctx.set_gpr(31, 0x08B0AE60u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 652u, 0x0884A6E0u>(ctx, &aot_mem) && ctx.pc == 0x08B0AE60u) goto L_08B0AE60;
    return;
L_08B0AE60:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08B0AE70u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 206u, 0x08A02C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0AE70u) goto L_08B0AE70;
    return;
L_08B0AE70:
    ctx.set_gpr(31, 0x08B0AE78u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 652u, 0x0884A6E0u>(ctx, &aot_mem) && ctx.pc == 0x08B0AE78u) goto L_08B0AE78;
    return;
L_08B0AE78:
    ctx.set_gpr(31, 0x08B0AE80u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08B0AE80u) goto L_08B0AE80;
    return;
L_08B0AE80:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B0AE90u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 779u, 0x0884AD78u>(ctx, &aot_mem) && ctx.pc == 0x08B0AE90u) goto L_08B0AE90;
    return;
L_08B0AE90:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B0AEA0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 779u, 0x0884AD78u>(ctx, &aot_mem) && ctx.pc == 0x08B0AEA0u) goto L_08B0AEA0;
    return;
L_08B0AEA0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08B0AEB0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 779u, 0x0884AD78u>(ctx, &aot_mem) && ctx.pc == 0x08B0AEB0u) goto L_08B0AEB0;
    return;
L_08B0AEB0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08B0AEC0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 779u, 0x0884AD78u>(ctx, &aot_mem) && ctx.pc == 0x08B0AEC0u) goto L_08B0AEC0;
    return;
L_08B0AEC0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B0AEE8;
    }
    goto L_08B0AED8;
L_08B0AED8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08B0AEE4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 862u, 0x088439F4u>(ctx, &aot_mem) && ctx.pc == 0x08B0AEE4u) goto L_08B0AEE4;
    return;
L_08B0AEE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B0AEE8;
L_08B0AEE8:
    ctx.set_gpr(31, 0x08B0AEF0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 438u, 0x08AADC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0AEF0u) goto L_08B0AEF0;
    return;
L_08B0AEF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08B0AF08u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 452u, 0x08AADD34u>(ctx, &aot_mem) && ctx.pc == 0x08B0AF08u) goto L_08B0AF08;
    return;
L_08B0AF08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B0AF14u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25712));
    goto L_08B0AFF0;
L_08B0AF14:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08B0AF2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 252u, 0x08B0CEF0u>(ctx, &aot_mem) && ctx.pc == 0x08B0AF2Cu) goto L_08B0AF2C;
    return;
L_08B0AF2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B0AF38u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 256u, 0x08B0CF58u>(ctx, &aot_mem) && ctx.pc == 0x08B0AF38u) goto L_08B0AF38;
    return;
L_08B0AF38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B0AF44u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29328)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 122u, 0x08AAC854u>(ctx, &aot_mem) && ctx.pc == 0x08B0AF44u) goto L_08B0AF44;
    return;
L_08B0AF44:
    ctx.set_gpr(7, 2231u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(14472));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    goto L_08B0AF54;
L_08B0AF54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B0AF54;
      }
      goto L_08B0AF74;
    }
L_08B0AF74:
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14552)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14556)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14560)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14568)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14564)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14572)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0AFF0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(152));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0AFF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    (void)rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 247u, 0x08B0CE48u>(ctx, &aot_mem); return;
L_08B0B004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0B024u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B024u) goto L_08B0B024;
    return;
L_08B0B024:
    ctx.set_gpr(31, 0x08B0B02Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 499u, 0x08AB1E04u>(ctx, &aot_mem) && ctx.pc == 0x08B0B02Cu) goto L_08B0B02C;
    return;
L_08B0B02C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B03C;
      }
      goto L_08B0B034;
    }
L_08B0B034:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0B084;
      }
      goto L_08B0B03C;
    }
L_08B0B03C:
    ctx.set_gpr(31, 0x08B0B044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x08B0B044u) goto L_08B0B044;
    return;
L_08B0B044:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08B0B048;
L_08B0B048:
    ctx.set_gpr(31, 0x08B0B050u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08B0B09C;
L_08B0B050:
    ctx.set_gpr(31, 0x08B0B058u);
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x08B0B058u) goto L_08B0B058;
    return;
L_08B0B058:
    ctx.set_gpr(31, 0x08B0B060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08B0B060u) goto L_08B0B060;
    return;
L_08B0B060:
    ctx.set_gpr(31, 0x08B0B068u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x08B0B068u) goto L_08B0B068;
    return;
L_08B0B068:
    ctx.set_gpr(2, 0u < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08B0B048;
    }
    goto L_08B0B078;
L_08B0B078:
    ctx.set_gpr(31, 0x08B0B080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x08B0B080u) goto L_08B0B080;
    return;
L_08B0B080:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0B084;
L_08B0B084:
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
L_08B0B09C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08B0B1A0;
      }
      goto L_08B0B0C8;
    }
L_08B0B0C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B0B180;
    }
    goto L_08B0B0D4;
L_08B0B0D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B0B150;
    }
    goto L_08B0B0E0;
L_08B0B0E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B0B12C;
    }
    goto L_08B0B0EC;
L_08B0B0EC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B0B0FC;
    }
    goto L_08B0B0F4;
L_08B0B0F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08B0B22C;
      }
      goto L_08B0B0FC;
    }
L_08B0B0FC:
    ctx.set_gpr(31, 0x08B0B104u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 190u, 0x08AACCC8u>(ctx, &aot_mem) && ctx.pc == 0x08B0B104u) goto L_08B0B104;
    return;
L_08B0B104:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
        goto L_08B0B120;
    }
    goto L_08B0B110;
L_08B0B110:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B0B228;
      }
      goto L_08B0B120;
    }
L_08B0B120:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B0B12C;
L_08B0B12C:
    ctx.set_gpr(31, 0x08B0B134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 197u, 0x08AACD44u>(ctx, &aot_mem) && ctx.pc == 0x08B0B134u) goto L_08B0B134;
    return;
L_08B0B134:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B228;
      }
      goto L_08B0B140;
    }
L_08B0B140:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B0B150;
L_08B0B150:
    ctx.set_gpr(31, 0x08B0B158u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 199u, 0x08AACD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B158u) goto L_08B0B158;
    return;
L_08B0B158:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
        goto L_08B0B174;
    }
    goto L_08B0B164;
L_08B0B164:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B0B228;
      }
      goto L_08B0B174;
    }
L_08B0B174:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B0B180;
L_08B0B180:
    ctx.set_gpr(31, 0x08B0B188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 201u, 0x08AACE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B188u) goto L_08B0B188;
    return;
L_08B0B188:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B228;
      }
      goto L_08B0B194;
    }
L_08B0B194:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08B0B1A0;
L_08B0B1A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0B1BCu);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 501u, 0x08AAE1A4u>(ctx, &aot_mem) && ctx.pc == 0x08B0B1BCu) goto L_08B0B1BC;
    return;
L_08B0B1BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08B0B1CCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    goto L_08B0BC7C;
L_08B0B1CC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B0B1F8;
    }
    goto L_08B0B1D4;
L_08B0B1D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08B0B1E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 496u, 0x08AAE130u>(ctx, &aot_mem) && ctx.pc == 0x08B0B1E4u) goto L_08B0B1E4;
    return;
L_08B0B1E4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B0B1F0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08B0B4EC;
L_08B0B1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B228;
      }
      goto L_08B0B1F8;
    }
L_08B0B1F8:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08B0B204u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 496u, 0x08AAE130u>(ctx, &aot_mem) && ctx.pc == 0x08B0B204u) goto L_08B0B204;
    return;
L_08B0B204:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14576)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14580)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14584)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B0B228;
L_08B0B228:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08B0B22C;
L_08B0B22C:
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
L_08B0B244:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B0B268u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08B0B654;
L_08B0B268:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08B0B27C;
    }
    goto L_08B0B274;
L_08B0B274:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0B404;
      }
      goto L_08B0B27C;
    }
L_08B0B27C:
    ctx.set_gpr(31, 0x08B0B284u);
    // nop
    goto L_08B0B95C;
L_08B0B284:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08B0B298;
    }
    goto L_08B0B290;
L_08B0B290:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0B404;
      }
      goto L_08B0B298;
    }
L_08B0B298:
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08B0B2D4;
    }
    goto L_08B0B2C8;
L_08B0B2C8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08B0B2D4;
L_08B0B2D4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 16138u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 15729u);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08B0B330;
      }
      goto L_08B0B2F8;
    }
L_08B0B2F8:
    ctx.set_gpr(31, 0x08B0B300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B300u) goto L_08B0B300;
    return;
L_08B0B300:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08B0B320u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B320u) goto L_08B0B320;
    return;
L_08B0B320:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), 0u);
    goto L_08B0B330;
L_08B0B330:
    ctx.set_gpr(31, 0x08B0B338u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08B0B338u) goto L_08B0B338;
    return;
L_08B0B338:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[12])) && ctx.fpr[1] == ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
        goto L_08B0B35C;
    }
    goto L_08B0B350;
L_08B0B350:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    goto L_08B0B35C;
L_08B0B35C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08B0B368u);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 500u, 0x08B06058u>(ctx, &aot_mem) && ctx.pc == 0x08B0B368u) goto L_08B0B368;
    return;
L_08B0B368:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B0B374u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 438u, 0x08AADC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B374u) goto L_08B0B374;
    return;
L_08B0B374:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
        goto L_08B0B384;
    }
    goto L_08B0B37C;
L_08B0B37C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0B404;
      }
      goto L_08B0B384;
    }
L_08B0B384:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08B0B39Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 252u, 0x08B0CEF0u>(ctx, &aot_mem) && ctx.pc == 0x08B0B39Cu) goto L_08B0B39C;
    return;
L_08B0B39C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B0B3A8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 256u, 0x08B0CF58u>(ctx, &aot_mem) && ctx.pc == 0x08B0B3A8u) goto L_08B0B3A8;
    return;
L_08B0B3A8:
    ctx.set_gpr(31, 0x08B0B3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08B0B3B0u) goto L_08B0B3B0;
    return;
L_08B0B3B0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08B0B3C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08B0B3C4u) goto L_08B0B3C4;
    return;
L_08B0B3C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08B0B3DCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 452u, 0x08AADD34u>(ctx, &aot_mem) && ctx.pc == 0x08B0B3DCu) goto L_08B0B3DC;
    return;
L_08B0B3DC:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14588)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14592)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14596)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B0B404;
L_08B0B404:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B41C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08B0B448u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 601u, 0x0884E07Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B448u) goto L_08B0B448;
    return;
L_08B0B448:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08B0B45Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15612));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 69u, 0x08B0C3A4u>(ctx, &aot_mem) && ctx.pc == 0x08B0B45Cu) goto L_08B0B45C;
    return;
L_08B0B45C:
    ctx.set_gpr(31, 0x08B0B464u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08B0B654;
L_08B0B464:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08B0B478;
    }
    goto L_08B0B470;
L_08B0B470:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0B4D4;
      }
      goto L_08B0B478;
    }
L_08B0B478:
    ctx.set_gpr(31, 0x08B0B480u);
    // nop
    goto L_08B0B95C;
L_08B0B480:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B0B494;
    }
    goto L_08B0B48C;
L_08B0B48C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0B4D4;
      }
      goto L_08B0B494;
    }
L_08B0B494:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0B4A0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 222u, 0x08B0CCECu>(ctx, &aot_mem) && ctx.pc == 0x08B0B4A0u) goto L_08B0B4A0;
    return;
L_08B0B4A0:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08B0B4B0;
    }
    goto L_08B0B4A8;
L_08B0B4A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0B4D4;
      }
      goto L_08B0B4B0;
    }
L_08B0B4B0:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14600)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14604)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14608)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B0B4D4;
L_08B0B4D4:
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
L_08B0B4EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6768));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-23728));
    ctx.set_gpr(31, 0x08B0B534u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 206u, 0x08804DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B0B534u) goto L_08B0B534;
    return;
L_08B0B534:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B0B5A8;
      }
      goto L_08B0B548;
    }
L_08B0B548:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B0B588;
      }
      goto L_08B0B554;
    }
L_08B0B554:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B0B568;
      }
      goto L_08B0B560;
    }
L_08B0B560:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16672u << 16u);
      if (branch_taken) {
          goto L_08B0B5C8;
      }
      goto L_08B0B568;
    }
L_08B0B568:
    ctx.set_gpr(31, 0x08B0B570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0B570u) goto L_08B0B570;
    return;
L_08B0B570:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B0B580u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    goto L_08B0A628;
L_08B0B580:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08B0B5D0;
      }
      goto L_08B0B588;
    }
L_08B0B588:
    ctx.set_gpr(31, 0x08B0B590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0B590u) goto L_08B0B590;
    return;
L_08B0B590:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B0B5A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    goto L_08B0A628;
L_08B0B5A0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08B0B5D0;
      }
      goto L_08B0B5A8;
    }
L_08B0B5A8:
    ctx.set_gpr(31, 0x08B0B5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0B5B0u) goto L_08B0B5B0;
    return;
L_08B0B5B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B0B5C0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    goto L_08B0A628;
L_08B0B5C0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08B0B5D0;
      }
      goto L_08B0B5C8;
    }
L_08B0B5C8:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_08B0B5D0;
L_08B0B5D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08B0B5E0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 481u, 0x08AAE000u>(ctx, &aot_mem) && ctx.pc == 0x08B0B5E0u) goto L_08B0B5E0;
    return;
L_08B0B5E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0B5ECu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08B09D24;
L_08B0B5EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B0B604u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 452u, 0x08AADD34u>(ctx, &aot_mem) && ctx.pc == 0x08B0B604u) goto L_08B0B604;
    return;
L_08B0B604:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08B0B614u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    goto L_08B0BC7C;
L_08B0B614:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08B0B634;
    }
    goto L_08B0B61C;
L_08B0B61C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B0B630u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    goto L_08B0BE4C;
L_08B0B630:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08B0B634;
L_08B0B634:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B654:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B0B670u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0B670u) goto L_08B0B670;
    return;
L_08B0B670:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0B67Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08B0B67Cu) goto L_08B0B67C;
    return;
L_08B0B67C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B6B0;
      }
      goto L_08B0B684;
    }
L_08B0B684:
    ctx.set_gpr(31, 0x08B0B68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B68Cu) goto L_08B0B68C;
    return;
L_08B0B68C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B0B6A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B6A0u) goto L_08B0B6A0;
    return;
L_08B0B6A0:
    ctx.set_gpr(31, 0x08B0B6A8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08B0B7B8;
L_08B0B6A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08B0B7A4;
      }
      goto L_08B0B6B0;
    }
L_08B0B6B0:
    ctx.set_gpr(31, 0x08B0B6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0B6B8u) goto L_08B0B6B8;
    return;
L_08B0B6B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0B6C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08B0B6C4u) goto L_08B0B6C4;
    return;
L_08B0B6C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B72C;
      }
      goto L_08B0B6CC;
    }
L_08B0B6CC:
    ctx.set_gpr(31, 0x08B0B6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B6D4u) goto L_08B0B6D4;
    return;
L_08B0B6D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B0B6E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B6E8u) goto L_08B0B6E8;
    return;
L_08B0B6E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08B0B6F8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    goto L_08B0A1E4;
L_08B0B6F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08B0B724u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08B0B724u) goto L_08B0B724;
    return;
L_08B0B724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B7A0;
      }
      goto L_08B0B72C;
    }
L_08B0B72C:
    ctx.set_gpr(31, 0x08B0B734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0B734u) goto L_08B0B734;
    return;
L_08B0B734:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0B740u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08B0B740u) goto L_08B0B740;
    return;
L_08B0B740:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, 0u + 0u);
        goto L_08B0B7A0;
    }
    goto L_08B0B748;
L_08B0B748:
    ctx.set_gpr(31, 0x08B0B750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B750u) goto L_08B0B750;
    return;
L_08B0B750:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B0B764u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B764u) goto L_08B0B764;
    return;
L_08B0B764:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08B0B774u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    goto L_08B0A1E4;
L_08B0B774:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08B0B7A0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08B0B7A0u) goto L_08B0B7A0;
    return;
L_08B0B7A0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08B0B7A4;
L_08B0B7A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B7B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B0B7CCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 167u, 0x08848AFCu>(ctx, &aot_mem) && ctx.pc == 0x08B0B7CCu) goto L_08B0B7CC;
    return;
L_08B0B7CC:
    ctx.set_gpr(2, 16656u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(14));
    ctx.set_gpr(31, 0x08B0B7F8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 414u, 0x08B05B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B7F8u) goto L_08B0B7F8;
    return;
L_08B0B7F8:
    ctx.set_gpr(31, 0x08B0B800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B800u) goto L_08B0B800;
    return;
L_08B0B800:
    ctx.set_gpr(31, 0x08B0B808u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08B0B808u) goto L_08B0B808;
    return;
L_08B0B808:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B0B820u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28992));
    goto L_08B0AA08;
L_08B0B820:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(4, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14616)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(14612)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14620)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B86C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B0B884u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 254u, 0x08AB5068u>(ctx, &aot_mem) && ctx.pc == 0x08B0B884u) goto L_08B0B884;
    return;
L_08B0B884:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B0B898;
    }
    goto L_08B0B890;
L_08B0B890:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0B94C;
      }
      goto L_08B0B898;
    }
L_08B0B898:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B0B8A8u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28992));
    goto L_08B0AA08;
L_08B0B8A8:
    ctx.set_gpr(31, 0x08B0B8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x08B0B8B0u) goto L_08B0B8B0;
    return;
L_08B0B8B0:
    ctx.set_gpr(31, 0x08B0B8B8u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 253u, 0x08AB5060u>(ctx, &aot_mem) && ctx.pc == 0x08B0B8B8u) goto L_08B0B8B8;
    return;
L_08B0B8B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B91C;
      }
      goto L_08B0B8C0;
    }
L_08B0B8C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(28940));
    ctx.set_gpr(31, 0x08B0B8D8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 913u, 0x08AAB1C8u>(ctx, &aot_mem) && ctx.pc == 0x08B0B8D8u) goto L_08B0B8D8;
    return;
L_08B0B8D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08B0B8E8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(25036));
    goto L_08B0A1E4;
L_08B0B8E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08B0B914u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 489u, 0x08AAE0B0u>(ctx, &aot_mem) && ctx.pc == 0x08B0B914u) goto L_08B0B914;
    return;
L_08B0B914:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0B94C;
      }
      goto L_08B0B91C;
    }
L_08B0B91C:
    ctx.set_gpr(31, 0x08B0B924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08B0B924u) goto L_08B0B924;
    return;
L_08B0B924:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0B930u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08B0B930u) goto L_08B0B930;
    return;
L_08B0B930:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0B94C;
L_08B0B94C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0B95C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B0B970u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0B970u) goto L_08B0B970;
    return;
L_08B0B970:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0B97Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08B0B97Cu) goto L_08B0B97C;
    return;
L_08B0B97C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0B98C;
      }
      goto L_08B0B984;
    }
L_08B0B984:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0BA24;
      }
      goto L_08B0B98C;
    }
L_08B0B98C:
    ctx.set_gpr(31, 0x08B0B994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0B994u) goto L_08B0B994;
    return;
L_08B0B994:
    ctx.set_gpr(31, 0x08B0B99Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08B0B99Cu) goto L_08B0B99C;
    return;
L_08B0B99C:
    ctx.set_gpr(31, 0x08B0B9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0B9A4u) goto L_08B0B9A4;
    return;
L_08B0B9A4:
    ctx.set_gpr(31, 0x08B0B9ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08B0B9ACu) goto L_08B0B9AC;
    return;
L_08B0B9AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B0B9B8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 256u, 0x08B0CF58u>(ctx, &aot_mem) && ctx.pc == 0x08B0B9B8u) goto L_08B0B9B8;
    return;
L_08B0B9B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B0B9C8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28992));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 270u, 0x08B0D010u>(ctx, &aot_mem) && ctx.pc == 0x08B0B9C8u) goto L_08B0B9C8;
    return;
L_08B0B9C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B0B9D8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 126u, 0x08B0C6C0u>(ctx, &aot_mem) && ctx.pc == 0x08B0B9D8u) goto L_08B0B9D8;
    return;
L_08B0B9D8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08B0B9E4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 43u, 0x08AF037Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0B9E4u) goto L_08B0B9E4;
    return;
L_08B0B9E4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(3, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14628)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(14624)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14632)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B0BA24;
L_08B0BA24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BA34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B0BA4Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 828u, 0x08866994u>(ctx, &aot_mem) && ctx.pc == 0x08B0BA4Cu) goto L_08B0BA4C;
    return;
L_08B0BA4C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B0BA60;
    }
    goto L_08B0BA58;
L_08B0BA58:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0BA94;
      }
      goto L_08B0BA60;
    }
L_08B0BA60:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B0BA6Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 126u, 0x08B0C6C0u>(ctx, &aot_mem) && ctx.pc == 0x08B0BA6Cu) goto L_08B0BA6C;
    return;
L_08B0BA6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B0BA78u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 530u, 0x08AAE348u>(ctx, &aot_mem) && ctx.pc == 0x08B0BA78u) goto L_08B0BA78;
    return;
L_08B0BA78:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B0BA94;
L_08B0BA94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BAA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08B0BAF8;
      }
      goto L_08B0BAC0;
    }
L_08B0BAC0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7784));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08B0BAD8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 708u, 0x08862CD4u>(ctx, &aot_mem) && ctx.pc == 0x08B0BAD8u) goto L_08B0BAD8;
    return;
L_08B0BAD8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0BAE4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 921u, 0x08AAB254u>(ctx, &aot_mem) && ctx.pc == 0x08B0BAE4u) goto L_08B0BAE4;
    return;
L_08B0BAE4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08B0BAFC;
    }
    goto L_08B0BAF0;
L_08B0BAF0:
    ctx.set_gpr(31, 0x08B0BAF8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08B0BB10;
L_08B0BAF8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08B0BAFC;
L_08B0BAFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BB10:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08B0BB18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0BB38u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08B0BB38u) goto L_08B0BB38;
    return;
L_08B0BB38:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08B0BB50;
    }
    goto L_08B0BB40;
L_08B0BB40:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0BB50u);
    ctx.set_gpr(25, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08B0BB50u) goto L_08B0BB50;
    return;
L_08B0BB50:
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
L_08B0BB68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08B0BBBC;
      }
      goto L_08B0BB84;
    }
L_08B0BB84:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7816));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08B0BB9Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 708u, 0x08862CD4u>(ctx, &aot_mem) && ctx.pc == 0x08B0BB9Cu) goto L_08B0BB9C;
    return;
L_08B0BB9C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0BBA8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 921u, 0x08AAB254u>(ctx, &aot_mem) && ctx.pc == 0x08B0BBA8u) goto L_08B0BBA8;
    return;
L_08B0BBA8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08B0BBC0;
    }
    goto L_08B0BBB4;
L_08B0BBB4:
    ctx.set_gpr(31, 0x08B0BBBCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08B0BBD4;
L_08B0BBBC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08B0BBC0;
L_08B0BBC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BBD4:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08B0BBDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0BBFCu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08B0BBFCu) goto L_08B0BBFC;
    return;
L_08B0BBFC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08B0BC14;
    }
    goto L_08B0BC04;
L_08B0BC04:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0BC14u);
    ctx.set_gpr(25, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08B0BC14u) goto L_08B0BC14;
    return;
L_08B0BC14:
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
L_08B0BC2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0BC4Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08B0BC4Cu) goto L_08B0BC4C;
    return;
L_08B0BC4C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08B0BC64;
    }
    goto L_08B0BC54;
L_08B0BC54:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0BC64u);
    ctx.set_gpr(25, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08B0BC64u) goto L_08B0BC64;
    return;
L_08B0BC64:
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
L_08B0BC7C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
        goto L_08B0BC90;
    }
    goto L_08B0BC88;
L_08B0BC88:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0BC94;
      }
      goto L_08B0BC90;
    }
L_08B0BC90:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08B0BC94;
L_08B0BC94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BC9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0BD58;
      }
      goto L_08B0BCC0;
    }
L_08B0BCC0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B0BCFC;
      }
      goto L_08B0BCCC;
    }
L_08B0BCCC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0BCDC;
      }
      goto L_08B0BCD4;
    }
L_08B0BCD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0BD60;
      }
      goto L_08B0BCDC;
    }
L_08B0BCDC:
    ctx.set_gpr(31, 0x08B0BCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08B0BCE4u) goto L_08B0BCE4;
    return;
L_08B0BCE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0BCF0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(83));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1046u, 0x08AAFFB8u>(ctx, &aot_mem) && ctx.pc == 0x08B0BCF0u) goto L_08B0BCF0;
    return;
L_08B0BCF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08B0BCFC;
L_08B0BCFC:
    ctx.set_gpr(31, 0x08B0BD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08B0BD04u) goto L_08B0BD04;
    return;
L_08B0BD04:
    ctx.set_gpr(31, 0x08B0BD0Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1047u, 0x08AAFFCCu>(ctx, &aot_mem) && ctx.pc == 0x08B0BD0Cu) goto L_08B0BD0C;
    return;
L_08B0BD0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0BD1C;
      }
      goto L_08B0BD14;
    }
L_08B0BD14:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0BD60;
      }
      goto L_08B0BD1C;
    }
L_08B0BD1C:
    ctx.set_gpr(31, 0x08B0BD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08B0BD24u) goto L_08B0BD24;
    return;
L_08B0BD24:
    ctx.set_gpr(31, 0x08B0BD2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0BD2Cu) goto L_08B0BD2C;
    return;
L_08B0BD2C:
    ctx.set_gpr(31, 0x08B0BD34u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08B0BD34u) goto L_08B0BD34;
    return;
L_08B0BD34:
    ctx.set_gpr(31, 0x08B0BD3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 976u, 0x08AAFC48u>(ctx, &aot_mem) && ctx.pc == 0x08B0BD3Cu) goto L_08B0BD3C;
    return;
L_08B0BD3C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0BD4Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 596u, 0x08B064C8u>(ctx, &aot_mem) && ctx.pc == 0x08B0BD4Cu) goto L_08B0BD4C;
    return;
L_08B0BD4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08B0BD58;
L_08B0BD58:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0BD60;
L_08B0BD60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BD74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08B0BD94u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08B0BDD8;
L_08B0BD94:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08B0BDA0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_08B0BDD0;
L_08B0BDA0:
    ctx.set_gpr(31, 0x08B0BDA8u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0BDA8u) goto L_08B0BDA8;
    return;
L_08B0BDA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B0BDB8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 148u, 0x0885C878u>(ctx, &aot_mem) && ctx.pc == 0x08B0BDB8u) goto L_08B0BDB8;
    return;
L_08B0BDB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BDD0:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BDD8:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BDE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08B0BE00u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08B0BE44;
L_08B0BE00:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08B0BE0Cu);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_08B0BE3C;
L_08B0BE0C:
    ctx.set_gpr(31, 0x08B0BE14u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0BE14u) goto L_08B0BE14;
    return;
L_08B0BE14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B0BE24u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 148u, 0x0885C878u>(ctx, &aot_mem) && ctx.pc == 0x08B0BE24u) goto L_08B0BE24;
    return;
L_08B0BE24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BE3C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BE44:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BE4C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08B0BEC8;
      }
      goto L_08B0BE58;
    }
L_08B0BE58:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
        goto L_08B0BEA0;
    }
    goto L_08B0BE64;
L_08B0BE64:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
        goto L_08B0BE78;
    }
    goto L_08B0BE70;
L_08B0BE70:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 16076u << 16u);
      if (branch_taken) {
          goto L_08B0BEF0;
      }
      goto L_08B0BE78;
    }
L_08B0BE78:
    if (ctx.gpr[6] == ctx.gpr[3]) {
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
        goto L_08B0BEEC;
    }
    goto L_08B0BE80;
L_08B0BE80:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B0BE94;
      }
      goto L_08B0BE8C;
    }
L_08B0BE8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0BEEC;
      }
      goto L_08B0BE94;
    }
L_08B0BE94:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0BEEC;
      }
      goto L_08B0BEA0;
    }
L_08B0BEA0:
    if (ctx.gpr[6] == ctx.gpr[3]) {
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
        goto L_08B0BEEC;
    }
    goto L_08B0BEA8;
L_08B0BEA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B0BEBC;
      }
      goto L_08B0BEB4;
    }
L_08B0BEB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0BEEC;
      }
      goto L_08B0BEBC;
    }
L_08B0BEBC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0BEEC;
      }
      goto L_08B0BEC8;
    }
L_08B0BEC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    if (ctx.gpr[6] == ctx.gpr[3]) {
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
        goto L_08B0BEEC;
    }
    goto L_08B0BED4;
L_08B0BED4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B0BEE8;
      }
      goto L_08B0BEE0;
    }
L_08B0BEE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0BEEC;
      }
      goto L_08B0BEE8;
    }
L_08B0BEE8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0BEEC;
L_08B0BEEC:
    ctx.set_gpr(3, 16076u << 16u);
    goto L_08B0BEF0;
L_08B0BEF0:
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    { const bool branch_taken = ctx.gpr[7] == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B0BF0C;
      }
      goto L_08B0BF08;
    }
L_08B0BF08:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_08B0BF0C;
L_08B0BF0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BF14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0BF34u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 4u, 0x08B0C018u>(ctx, &aot_mem) && ctx.pc == 0x08B0BF34u) goto L_08B0BF34;
    return;
L_08B0BF34:
    ctx.set_gpr(2, 15395u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 55050u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(31, 0x08B0BF4Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 3u, 0x08B0C010u>(ctx, &aot_mem) && ctx.pc == 0x08B0BF4Cu) goto L_08B0BF4C;
    return;
L_08B0BF4C:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x08B0BF58u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 2u, 0x08B0C008u>(ctx, &aot_mem) && ctx.pc == 0x08B0BF58u) goto L_08B0BF58;
    return;
L_08B0BF58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08B0BF68u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 440u, 0x08B0DBBCu>(ctx, &aot_mem) && ctx.pc == 0x08B0BF68u) goto L_08B0BF68;
    return;
L_08B0BF68:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08B0BF80u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0BF80u) goto L_08B0BF80;
    return;
L_08B0BF80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B0BF90u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    goto L_08B0BFB0;
L_08B0BF90:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0BFB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0BFF0;
      }
      goto L_08B0BFD4;
    }
L_08B0BFD4:
    ctx.set_gpr(31, 0x08B0BFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 157u, 0x0885C91Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0BFDCu) goto L_08B0BFDC;
    return;
L_08B0BFDC:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08B0BFF0;
L_08B0BFF0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B0C000u; return;
}

void recomp_unit_0193(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0193_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_193(Runtime &runtime) {
    runtime.register_generated_unit(193u, 0x08B08000u, 16384u, &recomp_unit_0193, &recomp_unit_0193_entry);
    runtime.register_function(0x08B08000u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08008u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0801Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08044u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0804Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08058u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08060u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08070u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08088u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08090u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B080B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B080C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B080C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B080D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B080E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B080E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0811Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08130u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08158u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08160u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0816Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08174u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08198u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B081A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B081A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B081B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B081C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B081C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B081DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B081ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08214u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0821Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08230u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08238u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08240u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0824Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08254u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0825Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08270u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08294u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08298u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B082ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B082C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B082D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08334u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08368u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0837Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0838Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08398u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B083C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B083CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08408u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08410u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08440u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08448u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08458u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08460u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08488u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B084BCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B084C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B084E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B084ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B084FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08504u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0852Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08544u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0854Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0857Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08584u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08594u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0859Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B085C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B085F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08600u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08628u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08630u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08640u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08648u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08670u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08690u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08698u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B086D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B086D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B086E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B086F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B086FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08710u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08718u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0872Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08734u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08748u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0879Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B087B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B087C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B087D0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B087D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B087DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B087F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08800u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08808u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08858u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08860u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08874u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0887Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08890u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08898u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B088ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B088DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B088ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0891Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08924u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08950u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08958u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08980u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08988u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B089C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B089CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08A08u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08A10u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08A4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08A54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08A90u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08A98u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08AD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08ADCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B18u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B20u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B5Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B68u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B90u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08B98u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08BB0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08BB8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08BD8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08C18u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08C3Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08C44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08C4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08C54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08C60u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08C68u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08C94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08CBCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08CC4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08CD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08CE8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D00u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D08u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D5Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D64u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D6Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08D84u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08DACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08DB8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08DDCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08DE4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E04u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E0Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E5Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E6Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E80u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E88u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08E94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08EBCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08EC8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08EE0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F18u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F20u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F30u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F38u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F48u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F78u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F80u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F8Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08F94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08FA0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08FD8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08FECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B08FF8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09000u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09008u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09010u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09018u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09024u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09030u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0903Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09044u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0904Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09058u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0907Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09080u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0908Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B090FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09104u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0910Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09118u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09134u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09158u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0915Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09168u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0917Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09190u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09198u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091D0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B091F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09220u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09228u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09244u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0924Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0926Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09274u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B092C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B092CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B092F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B092FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09310u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09318u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09338u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09340u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09368u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09390u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0939Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B093FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09428u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09458u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09478u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0948Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B094A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B094ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B094B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B094BCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B094C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B094D0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B094D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B094F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09500u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09528u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09530u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09548u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09550u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0956Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09574u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09594u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0959Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B095F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B095FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0961Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09624u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0964Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09654u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09668u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09670u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09684u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B096ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B096B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B096C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B096C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B096D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B096F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B096FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09708u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09724u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09734u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09740u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09748u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09760u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09768u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0977Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09784u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09794u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0979Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B097BCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B097F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09810u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09824u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0983Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0984Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09874u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09880u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09898u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B098D0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B098D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B098E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B098F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09900u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09910u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09930u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09938u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09944u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0994Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09958u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09990u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099D0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B099FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A04u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A10u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A38u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A64u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A70u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A78u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A84u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A8Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09A98u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09AA8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09AB4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09ABCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09AD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09AF8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09AFCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09B08u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09B28u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09B48u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09B64u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09B7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09B84u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09B90u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09B98u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09BA4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09BB8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09BC4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09BD8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09BE0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09BE8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09BF4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09BFCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C04u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C10u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C30u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C38u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C40u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C5Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C70u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C84u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09C98u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09CB4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09CBCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09CC0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09CC8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09CDCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09CE8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09D00u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09D10u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09D14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09D24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09D50u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09D58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09D60u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09D68u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09D74u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09D7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09D88u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09D94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09D9Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09DA4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09DACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09DB4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09DC0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09DCCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09DD8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09DF0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09E08u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09E20u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09E2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09E3Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09E4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09E5Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09E6Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09E80u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09E88u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09ED4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09F18u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09F34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09F40u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09F70u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09F80u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09F90u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09F98u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09FA0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09FA8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09FB0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09FB8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09FC0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09FC8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09FD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B09FFCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A004u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A010u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A018u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A020u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A02Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A034u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A040u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A04Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A058u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A060u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A068u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A06Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A080u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A09Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A0A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A0B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A0B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A0CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A0D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A0DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A0E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A0F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A0F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A100u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A114u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A124u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A150u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A158u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A160u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A16Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A174u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A17Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A190u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A1A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A1CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A1D0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A1E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A1ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A21Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A224u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A238u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A244u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A24Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A25Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A264u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A270u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A280u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A288u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A294u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A298u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A2A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A2A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A2B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A2D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A2E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A2F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A30Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A338u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A340u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A374u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A37Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A39Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A3C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A3D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A400u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A414u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A41Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A428u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A430u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A438u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A444u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A44Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A458u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A460u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A468u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A490u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A494u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A4ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A4DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A4E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A4F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A508u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A530u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A538u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A548u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A550u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A558u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A568u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A570u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A578u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A588u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A590u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A598u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5D0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A5F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A608u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A60Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A614u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A618u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A628u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A64Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A654u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A668u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A680u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A6A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A6B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A6D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A6E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A710u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A714u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A724u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A75Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A764u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A76Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A798u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7B4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7D0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A7F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A800u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A818u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A828u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A838u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A860u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A878u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A880u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A888u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A8B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A8B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A8C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A8CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A8D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A8E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A8E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A8F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A914u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A91Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A930u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A93Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A940u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A954u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A968u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A994u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A99Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A9A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0A9BCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA08u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA10u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA28u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA3Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA5Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA64u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AA8Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AAB8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AAC0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AAC8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AAD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AAF0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB00u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB20u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB28u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB30u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB38u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB40u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB48u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB50u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB5Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB6Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AB88u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ABC8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ABD8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ABF0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ABFCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC04u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC10u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC38u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC48u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC68u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC78u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC8Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AC9Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ACA8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ACB0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ACBCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ACC8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ACD0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ACD8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ACE0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ACE8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ACFCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD04u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD3Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD84u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD8Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AD94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ADA4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ADBCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ADDCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ADE4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0ADF0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE00u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE0Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE18u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE20u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE28u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE30u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE48u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE60u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE70u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE78u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE80u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AE90u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AEA0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AEB0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AEC0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AED8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AEE4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AEE8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AEF0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AF08u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AF14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AF2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AF38u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AF44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AF54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AF74u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AFF0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0AFF8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B004u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B024u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B02Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B034u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B03Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B044u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B048u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B050u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B058u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B060u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B068u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B078u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B080u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B084u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B09Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B0C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B0D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B0E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B0ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B0F4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B0FCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B104u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B110u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B120u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B12Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B134u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B140u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B150u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B158u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B164u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B174u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B180u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B188u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B194u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B1A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B1BCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B1CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B1D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B1E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B1F0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B1F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B204u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B228u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B22Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B244u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B268u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B274u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B27Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B284u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B290u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B298u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B2C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B2D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B2F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B300u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B320u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B330u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B338u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B350u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B35Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B368u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B374u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B37Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B384u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B39Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B3A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B3B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B3C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B3DCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B404u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B41Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B448u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B45Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B464u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B470u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B478u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B480u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B48Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B494u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B4A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B4A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B4B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B4D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B4ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B534u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B548u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B554u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B560u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B568u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B570u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B580u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B588u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B590u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5D0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5E0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B5ECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B604u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B614u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B61Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B630u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B634u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B654u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B670u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B67Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B684u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B68Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6C4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6D4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B6F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B724u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B72Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B734u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B740u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B748u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B750u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B764u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B774u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7A0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7CCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B7F8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B800u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B808u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B820u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B86Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B884u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B890u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B898u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8A8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8B0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8C0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B8E8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B914u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B91Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B924u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B930u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B94Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B95Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B970u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B97Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B984u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B98Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B994u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B99Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B9A4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B9ACu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B9B8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B9C8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B9D8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0B9E4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA60u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA6Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA78u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BA94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BAA4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BAC0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BAD8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BAE4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BAF0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BAF8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BAFCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB10u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB18u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB38u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB40u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB50u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB68u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB84u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BB9Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBA8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBB4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBBCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBC0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBDCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BBFCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC04u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC54u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC64u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC7Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC88u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC90u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BC9Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCC0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCCCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCDCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCE4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCF0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BCFCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD04u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD0Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD1Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD2Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD3Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD60u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD74u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BD94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BDA0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BDA8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BDB8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BDD0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BDD8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BDE0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE00u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE0Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE24u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE3Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE44u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE64u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE70u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE78u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE80u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE8Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BE94u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BEA0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BEA8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BEB4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BEBCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BEC8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BED4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BEE0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BEE8u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BEECu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BEF0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BF08u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BF0Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BF14u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BF34u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BF4Cu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BF58u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BF68u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BF80u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BF90u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BFB0u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BFD4u, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BFDCu, &recomp_unit_0193, "recomp_unit_0193");
    runtime.register_function(0x08B0BFF0u, &recomp_unit_0193, "recomp_unit_0193");
}
} // namespace psprecomp
