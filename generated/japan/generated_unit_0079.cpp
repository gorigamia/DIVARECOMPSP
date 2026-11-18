#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0079[4095] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0,
    0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 19,
    0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 0,
    0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0,
    38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 63, 0, 0, 64, 65, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 0,
    77, 0, 78, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0,
    0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 98, 0, 0, 99, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0,
    107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123,
    0, 124, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 135, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0,
    139, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 0, 149, 150, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0,
    0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 189, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0,
    197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0,
    208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217,
    218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 223, 0, 224, 0, 225, 0, 0, 226, 0, 227,
    0, 0, 228, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0,
    0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 254, 0, 0, 255, 0, 0, 0, 0,
    0, 0, 0, 256, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 261, 0, 262, 263, 0, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 0,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0,
    272, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 279, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0,
    0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 292, 0, 293, 0, 0, 294, 0, 0,
    0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 301, 302, 0, 0, 303, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0,
    0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 325, 326, 0, 0, 327, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0,
    0, 338, 0, 0, 0, 339, 0, 0, 340, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0,
    344, 0, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 354,
    355, 0, 0, 356, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 361, 0, 0, 362, 0, 363,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 367, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0,
    0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0,
    0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 386, 0, 0, 0, 0, 0, 387,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 392, 0, 393, 0,
    0, 394, 0, 395, 396, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 401, 402, 0, 0, 403, 404,
    0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 410,
    411, 0, 0, 412, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 416, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0,
    0, 419, 0, 0, 0, 0, 0, 420, 421, 0, 422, 0, 0, 423, 0, 424, 425, 0, 426, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0,
    0, 430, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 436, 0,
    0, 437, 0, 438, 0, 0, 439, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 444, 0, 445, 0, 0, 0, 0,
    0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0,
    0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0,
    0, 465, 0, 466, 0, 0, 467, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 471, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 474,
    0, 475, 0, 476, 0, 0, 477, 0, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 483, 0, 484, 0, 0, 0, 485, 0,
    0, 0, 0, 0, 486, 487, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 491, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 494,
    495, 0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501,
    0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 509, 0, 0, 510, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513,
    0, 0, 0, 0, 0, 514, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    521, 0, 0, 0, 0, 0, 522, 523, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 528, 0, 529, 0, 0, 0, 0, 0, 530,
    0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0,
    533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0,
    540, 0, 0, 541, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0,
    0, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 0, 558, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0,
    0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0,
    0, 566, 567, 0, 568, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0,
    0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 581, 0, 582, 0, 0, 0,
    583, 0, 584, 0, 0, 0, 585, 0, 586, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 596, 0, 0, 0,
    0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0,
    0, 0, 604, 0, 0, 605, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0,
    0, 610, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0,
    0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619,
    0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0,
    0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 0, 630, 0, 631, 0, 0, 0,
    0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 636, 0, 637, 0, 0, 0, 638, 0, 639, 0, 0, 0, 640, 0, 641, 0, 0, 0, 642, 0,
    643, 0, 0, 0, 644, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0,
    651, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 0,
    0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 665, 0,
    0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 669, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 673, 0, 674,
    0, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0,
    681, 682, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 685, 686, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 690, 0, 691, 0, 0, 692, 0, 0, 693, 0, 0, 694, 0, 0, 0, 695, 0, 0, 696, 0, 697, 0, 0, 698, 0, 699, 0, 0, 0,
    0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 704, 705, 0, 706, 0, 0, 707, 0, 0, 0,
    708, 0, 0, 0, 0, 0, 709, 710, 0, 711, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 0, 0,
    0, 0, 718, 0, 0, 719, 0, 0, 720, 721, 0, 0, 722, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0,
    0, 0, 726, 0, 727, 728, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 736, 0, 0, 737, 0, 738, 0, 0, 739, 0, 740, 0, 0, 0, 0, 741, 742,
    0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 748, 0, 749, 0, 0, 0, 750,
    0, 751, 0, 0, 0, 752, 0, 753, 0, 0, 0, 754, 0, 755, 0, 0, 0, 756, 0, 757, 758, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0,
    0, 761, 0, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0,
    767, 0, 0, 768, 769, 0, 0, 770, 771, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0,
    0, 777, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0, 780, 0, 781, 0, 782, 0, 783, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 785, 0, 786, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 789, 0, 0, 0, 790, 0, 0, 0, 0, 0, 791, 792,
    0, 793, 0, 0, 0, 0, 0, 794, 0, 0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 798, 0,
    0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 804, 0, 0, 0, 805, 806, 0, 0, 807, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 0, 0, 0,
    811, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0, 817, 0, 0,
    0, 0, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0,
    0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 826, 0, 827, 0, 0, 0, 828, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0,
    0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834,
    0, 0, 835, 0, 0, 836, 0, 0, 0, 0, 837, 0, 838, 0, 839, 840, 0, 841, 0, 0, 842, 0, 0, 0, 843, 0, 0, 0, 844, 0, 845, 0,
    0, 0, 846, 0, 0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 849, 0, 0, 0, 0, 0, 850, 0, 0, 851, 0, 0, 0, 0, 0, 0, 852, 0,
    853, 0, 0, 0, 0, 0, 854, 855, 0, 0, 0, 0, 0, 856, 0, 0, 857, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0, 863, 0, 0, 0, 0,
    0, 864, 0, 0, 865, 0, 0, 0, 866, 0, 0, 867, 0, 0, 0, 0, 0, 868, 0, 0, 0, 869, 0, 0, 0, 0, 0, 870, 871, 0, 0, 0,
    0, 0, 872, 0, 0, 0, 0, 873, 0, 874, 0, 0, 875, 0, 0, 0, 876, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 878, 0, 879, 0, 0,
    880, 881, 0, 0, 882, 883, 0, 0, 0, 884, 0, 885, 0, 0, 0, 0, 0, 0, 886, 0, 887, 0, 0, 0, 0, 888, 889, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 891, 0, 0, 892, 0, 0, 893, 0, 0, 894, 0, 0, 0, 0, 0, 0, 895,
    0, 896, 0, 0, 0, 897, 0, 0, 898, 0, 0, 899, 0, 900, 0, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 902, 0, 0, 903, 0, 0,
    904, 0, 0, 905, 0, 0, 0, 0, 0, 0, 906, 0, 907, 0, 0, 0, 908, 0, 0, 909, 0, 0, 910, 0, 911, 0, 0, 0, 0, 0, 912,
};
void recomp_unit_0079_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08940000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0079[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08940000;
    case 2u: goto L_08940008;
    case 3u: goto L_0894001C;
    case 4u: goto L_08940024;
    case 5u: goto L_08940038;
    case 6u: goto L_08940040;
    case 7u: goto L_08940054;
    case 8u: goto L_0894005C;
    case 9u: goto L_08940070;
    case 10u: goto L_08940078;
    case 11u: goto L_0894008C;
    case 12u: goto L_08940094;
    case 13u: goto L_089400A8;
    case 14u: goto L_089400B0;
    case 15u: goto L_089400C4;
    case 16u: goto L_089400CC;
    case 17u: goto L_089400E0;
    case 18u: goto L_089400E8;
    case 19u: goto L_089400FC;
    case 20u: goto L_08940104;
    case 21u: goto L_08940118;
    case 22u: goto L_08940120;
    case 23u: goto L_08940134;
    case 24u: goto L_0894013C;
    case 25u: goto L_08940150;
    case 26u: goto L_08940158;
    case 27u: goto L_0894016C;
    case 28u: goto L_08940174;
    case 29u: goto L_08940188;
    case 30u: goto L_08940190;
    case 31u: goto L_089401A4;
    case 32u: goto L_089401AC;
    case 33u: goto L_089401C0;
    case 34u: goto L_089401C8;
    case 35u: goto L_089401DC;
    case 36u: goto L_089401E4;
    case 37u: goto L_089401F8;
    case 38u: goto L_08940200;
    case 39u: goto L_08940214;
    case 40u: goto L_0894023C;
    case 41u: goto L_08940260;
    case 42u: goto L_0894027C;
    case 43u: goto L_089402C4;
    case 44u: goto L_089402E0;
    case 45u: goto L_089402EC;
    case 46u: goto L_089402FC;
    case 47u: goto L_0894032C;
    case 48u: goto L_08940374;
    case 49u: goto L_08940390;
    case 50u: goto L_0894039C;
    case 51u: goto L_089403AC;
    case 52u: goto L_089403E8;
    case 53u: goto L_089403FC;
    case 54u: goto L_0894044C;
    case 55u: goto L_08940454;
    case 56u: goto L_08940460;
    case 57u: goto L_0894047C;
    case 58u: goto L_08940488;
    case 59u: goto L_08940498;
    case 60u: goto L_089404AC;
    case 61u: goto L_089404BC;
    case 62u: goto L_089404D0;
    case 63u: goto L_089404D4;
    case 64u: goto L_089404E0;
    case 65u: goto L_089404E4;
    case 66u: goto L_089404F4;
    case 67u: goto L_08940528;
    case 68u: goto L_08940534;
    case 69u: goto L_08940554;
    case 70u: goto L_08940564;
    case 71u: goto L_0894058C;
    case 72u: goto L_089405A0;
    case 73u: goto L_089405CC;
    case 74u: goto L_089405D8;
    case 75u: goto L_089405E0;
    case 76u: goto L_089405EC;
    case 77u: goto L_08940600;
    case 78u: goto L_08940608;
    case 79u: goto L_08940614;
    case 80u: goto L_0894061C;
    case 81u: goto L_08940628;
    case 82u: goto L_08940640;
    case 83u: goto L_0894065C;
    case 84u: goto L_08940680;
    case 85u: goto L_0894068C;
    case 86u: goto L_089406A0;
    case 87u: goto L_089406AC;
    case 88u: goto L_089406C4;
    case 89u: goto L_089406E8;
    case 90u: goto L_089406F4;
    case 91u: goto L_08940704;
    case 92u: goto L_0894070C;
    case 93u: goto L_08940720;
    case 94u: goto L_0894072C;
    case 95u: goto L_0894073C;
    case 96u: goto L_08940750;
    case 97u: goto L_0894075C;
    case 98u: goto L_08940760;
    case 99u: goto L_0894076C;
    case 100u: goto L_08940784;
    case 101u: goto L_089407B0;
    case 102u: goto L_089407BC;
    case 103u: goto L_089407CC;
    case 104u: goto L_089407D4;
    case 105u: goto L_089407E8;
    case 106u: goto L_089407F4;
    case 107u: goto L_08940800;
    case 108u: goto L_08940814;
    case 109u: goto L_08940830;
    case 110u: goto L_08940838;
    case 111u: goto L_0894083C;
    case 112u: goto L_08940848;
    case 113u: goto L_08940864;
    case 114u: goto L_08940888;
    case 115u: goto L_08940894;
    case 116u: goto L_089408A8;
    case 117u: goto L_089408B0;
    case 118u: goto L_089408C4;
    case 119u: goto L_089408CC;
    case 120u: goto L_089408D4;
    case 121u: goto L_089408E0;
    case 122u: goto L_089408F0;
    case 123u: goto L_089408FC;
    case 124u: goto L_08940904;
    case 125u: goto L_08940908;
    case 126u: goto L_08940924;
    case 127u: goto L_0894093C;
    case 128u: goto L_08940974;
    case 129u: goto L_08940980;
    case 130u: goto L_08940994;
    case 131u: goto L_0894099C;
    case 132u: goto L_089409B0;
    case 133u: goto L_089409B8;
    case 134u: goto L_089409C4;
    case 135u: goto L_089409D0;
    case 136u: goto L_089409D4;
    case 137u: goto L_089409E8;
    case 138u: goto L_089409F4;
    case 139u: goto L_08940A00;
    case 140u: goto L_08940A04;
    case 141u: goto L_08940A1C;
    case 142u: goto L_08940A2C;
    case 143u: goto L_08940A34;
    case 144u: goto L_08940A50;
    case 145u: goto L_08940A58;
    case 146u: goto L_08940A64;
    case 147u: goto L_08940A74;
    case 148u: goto L_08940A8C;
    case 149u: goto L_08940AA0;
    case 150u: goto L_08940AA4;
    case 151u: goto L_08940AB0;
    case 152u: goto L_08940ABC;
    case 153u: goto L_08940AC4;
    case 154u: goto L_08940AD8;
    case 155u: goto L_08940AE0;
    case 156u: goto L_08940B00;
    case 157u: goto L_08940B10;
    case 158u: goto L_08940B24;
    case 159u: goto L_08940B30;
    case 160u: goto L_08940B3C;
    case 161u: goto L_08940B40;
    case 162u: goto L_08940B4C;
    case 163u: goto L_08940B58;
    case 164u: goto L_08940B80;
    case 165u: goto L_08940BAC;
    case 166u: goto L_08940BB8;
    case 167u: goto L_08940BCC;
    case 168u: goto L_08940BD4;
    case 169u: goto L_08940BE8;
    case 170u: goto L_08940BF0;
    case 171u: goto L_08940BF8;
    case 172u: goto L_08940C04;
    case 173u: goto L_08940C18;
    case 174u: goto L_08940C24;
    case 175u: goto L_08940C2C;
    case 176u: goto L_08940C30;
    case 177u: goto L_08940C4C;
    case 178u: goto L_08940C68;
    case 179u: goto L_08940CC0;
    case 180u: goto L_08940CC8;
    case 181u: goto L_08940CD0;
    case 182u: goto L_08940CD8;
    case 183u: goto L_08940CEC;
    case 184u: goto L_08940CFC;
    case 185u: goto L_08940D18;
    case 186u: goto L_08940D20;
    case 187u: goto L_08940D2C;
    case 188u: goto L_08940D40;
    case 189u: goto L_08940D50;
    case 190u: goto L_08940D54;
    case 191u: goto L_08940D60;
    case 192u: goto L_08940D84;
    case 193u: goto L_08940DC8;
    case 194u: goto L_08940DD0;
    case 195u: goto L_08940DE4;
    case 196u: goto L_08940DF0;
    case 197u: goto L_08940E00;
    case 198u: goto L_08940E14;
    case 199u: goto L_08940E24;
    case 200u: goto L_08940E38;
    case 201u: goto L_08940E3C;
    case 202u: goto L_08940E48;
    case 203u: goto L_08940E70;
    case 204u: goto L_08940EAC;
    case 205u: goto L_08940ECC;
    case 206u: goto L_08940EE8;
    case 207u: goto L_08940EF4;
    case 208u: goto L_08940F00;
    case 209u: goto L_08940F14;
    case 210u: goto L_08940F1C;
    case 211u: goto L_08940F30;
    case 212u: goto L_08940F40;
    case 213u: goto L_08940F60;
    case 214u: goto L_08940FA8;
    case 215u: goto L_08940FD4;
    case 216u: goto L_08940FE4;
    case 217u: goto L_08940FFC;
    case 218u: goto L_08941000;
    case 219u: goto L_0894100C;
    case 220u: goto L_08941020;
    case 221u: goto L_0894102C;
    case 222u: goto L_08941054;
    case 223u: goto L_08941058;
    case 224u: goto L_08941060;
    case 225u: goto L_08941068;
    case 226u: goto L_08941074;
    case 227u: goto L_0894107C;
    case 228u: goto L_08941088;
    case 229u: goto L_0894109C;
    case 230u: goto L_089410A4;
    case 231u: goto L_089410B8;
    case 232u: goto L_089410C8;
    case 233u: goto L_089410F4;
    case 234u: goto L_08941128;
    case 235u: goto L_08941134;
    case 236u: goto L_08941144;
    case 237u: goto L_08941164;
    case 238u: goto L_0894116C;
    case 239u: goto L_08941178;
    case 240u: goto L_0894118C;
    case 241u: goto L_08941194;
    case 242u: goto L_089411A0;
    case 243u: goto L_089411A8;
    case 244u: goto L_089411C0;
    case 245u: goto L_089411C4;
    case 246u: goto L_089411E8;
    case 247u: goto L_08941210;
    case 248u: goto L_08941220;
    case 249u: goto L_08941228;
    case 250u: goto L_08941238;
    case 251u: goto L_08941244;
    case 252u: goto L_08941250;
    case 253u: goto L_0894125C;
    case 254u: goto L_08941260;
    case 255u: goto L_0894126C;
    case 256u: goto L_0894128C;
    case 257u: goto L_08941294;
    case 258u: goto L_089412A0;
    case 259u: goto L_089412A8;
    case 260u: goto L_089412B8;
    case 261u: goto L_089412C0;
    case 262u: goto L_089412C8;
    case 263u: goto L_089412CC;
    case 264u: goto L_089412D8;
    case 265u: goto L_089412E4;
    case 266u: goto L_089412EC;
    case 267u: goto L_0894130C;
    case 268u: goto L_08941340;
    case 269u: goto L_0894134C;
    case 270u: goto L_08941360;
    case 271u: goto L_0894136C;
    case 272u: goto L_08941380;
    case 273u: goto L_08941388;
    case 274u: goto L_08941394;
    case 275u: goto L_089413C0;
    case 276u: goto L_089413D0;
    case 277u: goto L_089413E4;
    case 278u: goto L_08941408;
    case 279u: goto L_0894140C;
    case 280u: goto L_08941418;
    case 281u: goto L_08941424;
    case 282u: goto L_08941438;
    case 283u: goto L_08941440;
    case 284u: goto L_08941468;
    case 285u: goto L_08941470;
    case 286u: goto L_08941484;
    case 287u: goto L_0894148C;
    case 288u: goto L_08941498;
    case 289u: goto L_089414A8;
    case 290u: goto L_089414C4;
    case 291u: goto L_089414DC;
    case 292u: goto L_089414E0;
    case 293u: goto L_089414E8;
    case 294u: goto L_089414F4;
    case 295u: goto L_08941504;
    case 296u: goto L_08941514;
    case 297u: goto L_0894152C;
    case 298u: goto L_08941530;
    case 299u: goto L_08941538;
    case 300u: goto L_08941550;
    case 301u: goto L_0894155C;
    case 302u: goto L_08941560;
    case 303u: goto L_0894156C;
    case 304u: goto L_08941594;
    case 305u: goto L_0894159C;
    case 306u: goto L_089415C4;
    case 307u: goto L_089415EC;
    case 308u: goto L_08941610;
    case 309u: goto L_08941648;
    case 310u: goto L_08941650;
    case 311u: goto L_0894166C;
    case 312u: goto L_08941674;
    case 313u: goto L_08941690;
    case 314u: goto L_0894169C;
    case 315u: goto L_089416A4;
    case 316u: goto L_089416AC;
    case 317u: goto L_089416B8;
    case 318u: goto L_089416C4;
    case 319u: goto L_089416D4;
    case 320u: goto L_089416DC;
    case 321u: goto L_089416E8;
    case 322u: goto L_089416F8;
    case 323u: goto L_08941714;
    case 324u: goto L_08941720;
    case 325u: goto L_0894172C;
    case 326u: goto L_08941730;
    case 327u: goto L_0894173C;
    case 328u: goto L_08941740;
    case 329u: goto L_08941760;
    case 330u: goto L_08941788;
    case 331u: goto L_08941798;
    case 332u: goto L_089417A4;
    case 333u: goto L_089417AC;
    case 334u: goto L_089417C8;
    case 335u: goto L_089417D8;
    case 336u: goto L_089417E0;
    case 337u: goto L_089417F4;
    case 338u: goto L_08941804;
    case 339u: goto L_08941814;
    case 340u: goto L_08941820;
    case 341u: goto L_08941824;
    case 342u: goto L_08941844;
    case 343u: goto L_08941874;
    case 344u: goto L_08941880;
    case 345u: goto L_08941888;
    case 346u: goto L_08941890;
    case 347u: goto L_0894189C;
    case 348u: goto L_089418A8;
    case 349u: goto L_089418B8;
    case 350u: goto L_089418C0;
    case 351u: goto L_089418CC;
    case 352u: goto L_089418D8;
    case 353u: goto L_089418F0;
    case 354u: goto L_089418FC;
    case 355u: goto L_08941900;
    case 356u: goto L_0894190C;
    case 357u: goto L_08941910;
    case 358u: goto L_0894192C;
    case 359u: goto L_08941954;
    case 360u: goto L_08941960;
    case 361u: goto L_08941968;
    case 362u: goto L_08941974;
    case 363u: goto L_0894197C;
    case 364u: goto L_08941990;
    case 365u: goto L_089419A4;
    case 366u: goto L_089419BC;
    case 367u: goto L_089419C0;
    case 368u: goto L_089419C8;
    case 369u: goto L_089419E0;
    case 370u: goto L_089419EC;
    case 371u: goto L_08941A08;
    case 372u: goto L_08941A1C;
    case 373u: goto L_08941A34;
    case 374u: goto L_08941A50;
    case 375u: goto L_08941A5C;
    case 376u: goto L_08941A74;
    case 377u: goto L_08941A8C;
    case 378u: goto L_08941AE8;
    case 379u: goto L_08941B08;
    case 380u: goto L_08941B70;
    case 381u: goto L_08941B80;
    case 382u: goto L_08941B90;
    case 383u: goto L_08941BB0;
    case 384u: goto L_08941BBC;
    case 385u: goto L_08941BE0;
    case 386u: goto L_08941BE4;
    case 387u: goto L_08941BFC;
    case 388u: goto L_08941C24;
    case 389u: goto L_08941C30;
    case 390u: goto L_08941C54;
    case 391u: goto L_08941C6C;
    case 392u: goto L_08941C70;
    case 393u: goto L_08941C78;
    case 394u: goto L_08941C84;
    case 395u: goto L_08941C8C;
    case 396u: goto L_08941C90;
    case 397u: goto L_08941CA8;
    case 398u: goto L_08941CB4;
    case 399u: goto L_08941CC8;
    case 400u: goto L_08941CE0;
    case 401u: goto L_08941CE8;
    case 402u: goto L_08941CEC;
    case 403u: goto L_08941CF8;
    case 404u: goto L_08941CFC;
    case 405u: goto L_08941D04;
    case 406u: goto L_08941D30;
    case 407u: goto L_08941D40;
    case 408u: goto L_08941D68;
    case 409u: goto L_08941D70;
    case 410u: goto L_08941D7C;
    case 411u: goto L_08941D80;
    case 412u: goto L_08941D8C;
    case 413u: goto L_08941D90;
    case 414u: goto L_08941DB0;
    case 415u: goto L_08941DC0;
    case 416u: goto L_08941DCC;
    case 417u: goto L_08941DD4;
    case 418u: goto L_08941DE4;
    case 419u: goto L_08941E04;
    case 420u: goto L_08941E1C;
    case 421u: goto L_08941E20;
    case 422u: goto L_08941E28;
    case 423u: goto L_08941E34;
    case 424u: goto L_08941E3C;
    case 425u: goto L_08941E40;
    case 426u: goto L_08941E48;
    case 427u: goto L_08941E54;
    case 428u: goto L_08941E5C;
    case 429u: goto L_08941E6C;
    case 430u: goto L_08941E84;
    case 431u: goto L_08941E88;
    case 432u: goto L_08941E90;
    case 433u: goto L_08941ECC;
    case 434u: goto L_08941ED8;
    case 435u: goto L_08941EE4;
    case 436u: goto L_08941EF8;
    case 437u: goto L_08941F04;
    case 438u: goto L_08941F0C;
    case 439u: goto L_08941F18;
    case 440u: goto L_08941F20;
    case 441u: goto L_08941F34;
    case 442u: goto L_08941F48;
    case 443u: goto L_08941F60;
    case 444u: goto L_08941F64;
    case 445u: goto L_08941F6C;
    case 446u: goto L_08941F84;
    case 447u: goto L_08941F90;
    case 448u: goto L_08941F9C;
    case 449u: goto L_08941FA8;
    case 450u: goto L_08941FB4;
    case 451u: goto L_08941FC4;
    case 452u: goto L_08941FD4;
    case 453u: goto L_08941FDC;
    case 454u: goto L_08941FE8;
    case 455u: goto L_08941FF4;
    case 456u: goto L_08942004;
    case 457u: goto L_08942010;
    case 458u: goto L_08942020;
    case 459u: goto L_0894202C;
    case 460u: goto L_0894203C;
    case 461u: goto L_08942048;
    case 462u: goto L_0894205C;
    case 463u: goto L_08942068;
    case 464u: goto L_08942078;
    case 465u: goto L_08942084;
    case 466u: goto L_0894208C;
    case 467u: goto L_08942098;
    case 468u: goto L_089420A0;
    case 469u: goto L_089420B4;
    case 470u: goto L_089420C8;
    case 471u: goto L_089420D0;
    case 472u: goto L_089420DC;
    case 473u: goto L_089420F0;
    case 474u: goto L_089420FC;
    case 475u: goto L_08942104;
    case 476u: goto L_0894210C;
    case 477u: goto L_08942118;
    case 478u: goto L_08942124;
    case 479u: goto L_08942134;
    case 480u: goto L_08942140;
    case 481u: goto L_08942148;
    case 482u: goto L_08942150;
    case 483u: goto L_08942160;
    case 484u: goto L_08942168;
    case 485u: goto L_08942178;
    case 486u: goto L_08942190;
    case 487u: goto L_08942194;
    case 488u: goto L_0894219C;
    case 489u: goto L_089421B4;
    case 490u: goto L_089421C0;
    case 491u: goto L_089421D0;
    case 492u: goto L_089421D8;
    case 493u: goto L_089421E4;
    case 494u: goto L_089421FC;
    case 495u: goto L_08942200;
    case 496u: goto L_0894220C;
    case 497u: goto L_08942214;
    case 498u: goto L_08942224;
    case 499u: goto L_08942240;
    case 500u: goto L_0894224C;
    case 501u: goto L_0894227C;
    case 502u: goto L_08942294;
    case 503u: goto L_089422AC;
    case 504u: goto L_089422B8;
    case 505u: goto L_089422D0;
    case 506u: goto L_089422EC;
    case 507u: goto L_0894232C;
    case 508u: goto L_08942338;
    case 509u: goto L_08942340;
    case 510u: goto L_0894234C;
    case 511u: goto L_08942354;
    case 512u: goto L_08942368;
    case 513u: goto L_0894237C;
    case 514u: goto L_08942394;
    case 515u: goto L_08942398;
    case 516u: goto L_089423A0;
    case 517u: goto L_089423B8;
    case 518u: goto L_089423C4;
    case 519u: goto L_08942410;
    case 520u: goto L_08942430;
    case 521u: goto L_08942480;
    case 522u: goto L_08942498;
    case 523u: goto L_0894249C;
    case 524u: goto L_089424A4;
    case 525u: goto L_089424B0;
    case 526u: goto L_089424C0;
    case 527u: goto L_089424D8;
    case 528u: goto L_089424DC;
    case 529u: goto L_089424E4;
    case 530u: goto L_089424FC;
    case 531u: goto L_08942508;
    case 532u: goto L_08942568;
    case 533u: goto L_08942580;
    case 534u: goto L_0894259C;
    case 535u: goto L_089425B8;
    case 536u: goto L_089425C0;
    case 537u: goto L_089425CC;
    case 538u: goto L_089425E0;
    case 539u: goto L_089425F8;
    case 540u: goto L_08942600;
    case 541u: goto L_0894260C;
    case 542u: goto L_08942618;
    case 543u: goto L_08942620;
    case 544u: goto L_08942638;
    case 545u: goto L_08942644;
    case 546u: goto L_08942650;
    case 547u: goto L_0894265C;
    case 548u: goto L_0894268C;
    case 549u: goto L_089426A4;
    case 550u: goto L_089426C4;
    case 551u: goto L_089426E8;
    case 552u: goto L_089426F8;
    case 553u: goto L_0894270C;
    case 554u: goto L_08942718;
    case 555u: goto L_08942724;
    case 556u: goto L_08942730;
    case 557u: goto L_08942740;
    case 558u: goto L_08942754;
    case 559u: goto L_08942758;
    case 560u: goto L_08942770;
    case 561u: goto L_08942790;
    case 562u: goto L_08942798;
    case 563u: goto L_089427AC;
    case 564u: goto L_089427C4;
    case 565u: goto L_089427EC;
    case 566u: goto L_08942804;
    case 567u: goto L_08942808;
    case 568u: goto L_08942810;
    case 569u: goto L_0894281C;
    case 570u: goto L_0894282C;
    case 571u: goto L_08942844;
    case 572u: goto L_08942848;
    case 573u: goto L_08942850;
    case 574u: goto L_08942868;
    case 575u: goto L_08942874;
    case 576u: goto L_08942894;
    case 577u: goto L_089428AC;
    case 578u: goto L_089428BC;
    case 579u: goto L_089428D4;
    case 580u: goto L_089428E0;
    case 581u: goto L_089428E8;
    case 582u: goto L_089428F0;
    case 583u: goto L_08942900;
    case 584u: goto L_08942908;
    case 585u: goto L_08942918;
    case 586u: goto L_08942920;
    case 587u: goto L_08942930;
    case 588u: goto L_08942940;
    case 589u: goto L_08942968;
    case 590u: goto L_08942978;
    case 591u: goto L_089429A0;
    case 592u: goto L_089429B0;
    case 593u: goto L_089429B8;
    case 594u: goto L_089429D8;
    case 595u: goto L_089429E8;
    case 596u: goto L_089429F0;
    case 597u: goto L_08942A08;
    case 598u: goto L_08942A18;
    case 599u: goto L_08942A38;
    case 600u: goto L_08942A40;
    case 601u: goto L_08942A50;
    case 602u: goto L_08942A58;
    case 603u: goto L_08942A6C;
    case 604u: goto L_08942A88;
    case 605u: goto L_08942A94;
    case 606u: goto L_08942A98;
    case 607u: goto L_08942AAC;
    case 608u: goto L_08942ACC;
    case 609u: goto L_08942AF0;
    case 610u: goto L_08942B04;
    case 611u: goto L_08942B10;
    case 612u: goto L_08942B28;
    case 613u: goto L_08942B34;
    case 614u: goto L_08942B44;
    case 615u: goto L_08942B68;
    case 616u: goto L_08942B88;
    case 617u: goto L_08942BA8;
    case 618u: goto L_08942BC4;
    case 619u: goto L_08942BFC;
    case 620u: goto L_08942C04;
    case 621u: goto L_08942C20;
    case 622u: goto L_08942C40;
    case 623u: goto L_08942C70;
    case 624u: goto L_08942C78;
    case 625u: goto L_08942C94;
    case 626u: goto L_08942CB4;
    case 627u: goto L_08942CC0;
    case 628u: goto L_08942CCC;
    case 629u: goto L_08942CD8;
    case 630u: goto L_08942CE8;
    case 631u: goto L_08942CF0;
    case 632u: goto L_08942D04;
    case 633u: goto L_08942D10;
    case 634u: goto L_08942D1C;
    case 635u: goto L_08942D28;
    case 636u: goto L_08942D30;
    case 637u: goto L_08942D38;
    case 638u: goto L_08942D48;
    case 639u: goto L_08942D50;
    case 640u: goto L_08942D60;
    case 641u: goto L_08942D68;
    case 642u: goto L_08942D78;
    case 643u: goto L_08942D80;
    case 644u: goto L_08942D90;
    case 645u: goto L_08942D98;
    case 646u: goto L_08942DA8;
    case 647u: goto L_08942DB8;
    case 648u: goto L_08942DCC;
    case 649u: goto L_08942DDC;
    case 650u: goto L_08942DF0;
    case 651u: goto L_08942E00;
    case 652u: goto L_08942E24;
    case 653u: goto L_08942E34;
    case 654u: goto L_08942E58;
    case 655u: goto L_08942E68;
    case 656u: goto L_08942E8C;
    case 657u: goto L_08942E9C;
    case 658u: goto L_08942EAC;
    case 659u: goto L_08942EBC;
    case 660u: goto L_08942EC4;
    case 661u: goto L_08942EDC;
    case 662u: goto L_08942EF0;
    case 663u: goto L_08942F40;
    case 664u: goto L_08942F58;
    case 665u: goto L_08942F78;
    case 666u: goto L_08942F8C;
    case 667u: goto L_08942FA4;
    case 668u: goto L_08942FB4;
    case 669u: goto L_08942FBC;
    case 670u: goto L_08942FC8;
    case 671u: goto L_08942FD8;
    case 672u: goto L_08942FF0;
    case 673u: goto L_08942FF4;
    case 674u: goto L_08942FFC;
    case 675u: goto L_08943014;
    case 676u: goto L_08943020;
    case 677u: goto L_0894303C;
    case 678u: goto L_08943054;
    case 679u: goto L_08943058;
    case 680u: goto L_08943068;
    case 681u: goto L_08943080;
    case 682u: goto L_08943084;
    case 683u: goto L_0894308C;
    case 684u: goto L_089430A4;
    case 685u: goto L_089430B0;
    case 686u: goto L_089430B4;
    case 687u: goto L_089430C0;
    case 688u: goto L_089430D0;
    case 689u: goto L_089430E4;
    case 690u: goto L_0894310C;
    case 691u: goto L_08943114;
    case 692u: goto L_08943120;
    case 693u: goto L_0894312C;
    case 694u: goto L_08943138;
    case 695u: goto L_08943148;
    case 696u: goto L_08943154;
    case 697u: goto L_0894315C;
    case 698u: goto L_08943168;
    case 699u: goto L_08943170;
    case 700u: goto L_08943184;
    case 701u: goto L_08943198;
    case 702u: goto L_089431A8;
    case 703u: goto L_089431C0;
    case 704u: goto L_089431D8;
    case 705u: goto L_089431DC;
    case 706u: goto L_089431E4;
    case 707u: goto L_089431F0;
    case 708u: goto L_08943200;
    case 709u: goto L_08943218;
    case 710u: goto L_0894321C;
    case 711u: goto L_08943224;
    case 712u: goto L_0894323C;
    case 713u: goto L_08943248;
    case 714u: goto L_08943280;
    case 715u: goto L_089432C8;
    case 716u: goto L_089432E8;
    case 717u: goto L_089432F0;
    case 718u: goto L_08943308;
    case 719u: goto L_08943314;
    case 720u: goto L_08943320;
    case 721u: goto L_08943324;
    case 722u: goto L_08943330;
    case 723u: goto L_08943334;
    case 724u: goto L_08943360;
    case 725u: goto L_08943378;
    case 726u: goto L_08943388;
    case 727u: goto L_08943390;
    case 728u: goto L_08943394;
    case 729u: goto L_089433A4;
    case 730u: goto L_089433C4;
    case 731u: goto L_089433D4;
    case 732u: goto L_089433E8;
    case 733u: goto L_089433F8;
    case 734u: goto L_08943420;
    case 735u: goto L_0894342C;
    case 736u: goto L_0894343C;
    case 737u: goto L_08943448;
    case 738u: goto L_08943450;
    case 739u: goto L_0894345C;
    case 740u: goto L_08943464;
    case 741u: goto L_08943478;
    case 742u: goto L_0894347C;
    case 743u: goto L_08943498;
    case 744u: goto L_089434B0;
    case 745u: goto L_089434C4;
    case 746u: goto L_089434D0;
    case 747u: goto L_089434DC;
    case 748u: goto L_089434E4;
    case 749u: goto L_089434EC;
    case 750u: goto L_089434FC;
    case 751u: goto L_08943504;
    case 752u: goto L_08943514;
    case 753u: goto L_0894351C;
    case 754u: goto L_0894352C;
    case 755u: goto L_08943534;
    case 756u: goto L_08943544;
    case 757u: goto L_0894354C;
    case 758u: goto L_08943550;
    case 759u: goto L_08943560;
    case 760u: goto L_08943574;
    case 761u: goto L_08943584;
    case 762u: goto L_08943598;
    case 763u: goto L_089435A8;
    case 764u: goto L_089435BC;
    case 765u: goto L_089435CC;
    case 766u: goto L_089435E8;
    case 767u: goto L_08943600;
    case 768u: goto L_0894360C;
    case 769u: goto L_08943610;
    case 770u: goto L_0894361C;
    case 771u: goto L_08943620;
    case 772u: goto L_08943628;
    case 773u: goto L_08943640;
    case 774u: goto L_08943650;
    case 775u: goto L_08943668;
    case 776u: goto L_08943678;
    case 777u: goto L_08943684;
    case 778u: goto L_08943694;
    case 779u: goto L_089436B0;
    case 780u: goto L_089436B8;
    case 781u: goto L_089436C0;
    case 782u: goto L_089436C8;
    case 783u: goto L_089436D0;
    case 784u: goto L_089436D8;
    case 785u: goto L_08943714;
    case 786u: goto L_0894371C;
    case 787u: goto L_08943720;
    case 788u: goto L_08943748;
    case 789u: goto L_08943750;
    case 790u: goto L_08943760;
    case 791u: goto L_08943778;
    case 792u: goto L_0894377C;
    case 793u: goto L_08943784;
    case 794u: goto L_0894379C;
    case 795u: goto L_089437A8;
    case 796u: goto L_089437C0;
    case 797u: goto L_089437E8;
    case 798u: goto L_089437F8;
    case 799u: goto L_08943818;
    case 800u: goto L_08943828;
    case 801u: goto L_08943838;
    case 802u: goto L_08943844;
    case 803u: goto L_08943850;
    case 804u: goto L_0894388C;
    case 805u: goto L_0894389C;
    case 806u: goto L_089438A0;
    case 807u: goto L_089438AC;
    case 808u: goto L_089438B4;
    case 809u: goto L_089438D8;
    case 810u: goto L_089438E8;
    case 811u: goto L_08943900;
    case 812u: goto L_0894390C;
    case 813u: goto L_08943920;
    case 814u: goto L_0894392C;
    case 815u: goto L_08943954;
    case 816u: goto L_0894395C;
    case 817u: goto L_08943974;
    case 818u: goto L_08943990;
    case 819u: goto L_089439A0;
    case 820u: goto L_089439B4;
    case 821u: goto L_089439C4;
    case 822u: goto L_089439E0;
    case 823u: goto L_089439F8;
    case 824u: goto L_08943A08;
    case 825u: goto L_08943A1C;
    case 826u: goto L_08943A2C;
    case 827u: goto L_08943A34;
    case 828u: goto L_08943A44;
    case 829u: goto L_08943A54;
    case 830u: goto L_08943A70;
    case 831u: goto L_08943A88;
    case 832u: goto L_08943A98;
    case 833u: goto L_08943ABC;
    case 834u: goto L_08943AFC;
    case 835u: goto L_08943B08;
    case 836u: goto L_08943B14;
    case 837u: goto L_08943B28;
    case 838u: goto L_08943B30;
    case 839u: goto L_08943B38;
    case 840u: goto L_08943B3C;
    case 841u: goto L_08943B44;
    case 842u: goto L_08943B50;
    case 843u: goto L_08943B60;
    case 844u: goto L_08943B70;
    case 845u: goto L_08943B78;
    case 846u: goto L_08943B88;
    case 847u: goto L_08943B94;
    case 848u: goto L_08943BB0;
    case 849u: goto L_08943BB8;
    case 850u: goto L_08943BD0;
    case 851u: goto L_08943BDC;
    case 852u: goto L_08943BF8;
    case 853u: goto L_08943C00;
    case 854u: goto L_08943C18;
    case 855u: goto L_08943C1C;
    case 856u: goto L_08943C34;
    case 857u: goto L_08943C40;
    case 858u: goto L_08943C48;
    case 859u: goto L_08943C78;
    case 860u: goto L_08943CBC;
    case 861u: goto L_08943CD4;
    case 862u: goto L_08943CDC;
    case 863u: goto L_08943CEC;
    case 864u: goto L_08943D04;
    case 865u: goto L_08943D10;
    case 866u: goto L_08943D20;
    case 867u: goto L_08943D2C;
    case 868u: goto L_08943D44;
    case 869u: goto L_08943D54;
    case 870u: goto L_08943D6C;
    case 871u: goto L_08943D70;
    case 872u: goto L_08943D88;
    case 873u: goto L_08943D9C;
    case 874u: goto L_08943DA4;
    case 875u: goto L_08943DB0;
    case 876u: goto L_08943DC0;
    case 877u: goto L_08943DD0;
    case 878u: goto L_08943DEC;
    case 879u: goto L_08943DF4;
    case 880u: goto L_08943E00;
    case 881u: goto L_08943E04;
    case 882u: goto L_08943E10;
    case 883u: goto L_08943E14;
    case 884u: goto L_08943E24;
    case 885u: goto L_08943E2C;
    case 886u: goto L_08943E48;
    case 887u: goto L_08943E50;
    case 888u: goto L_08943E64;
    case 889u: goto L_08943E68;
    case 890u: goto L_08943EA0;
    case 891u: goto L_08943EBC;
    case 892u: goto L_08943EC8;
    case 893u: goto L_08943ED4;
    case 894u: goto L_08943EE0;
    case 895u: goto L_08943EFC;
    case 896u: goto L_08943F04;
    case 897u: goto L_08943F14;
    case 898u: goto L_08943F20;
    case 899u: goto L_08943F2C;
    case 900u: goto L_08943F34;
    case 901u: goto L_08943F4C;
    case 902u: goto L_08943F68;
    case 903u: goto L_08943F74;
    case 904u: goto L_08943F80;
    case 905u: goto L_08943F8C;
    case 906u: goto L_08943FA8;
    case 907u: goto L_08943FB0;
    case 908u: goto L_08943FC0;
    case 909u: goto L_08943FCC;
    case 910u: goto L_08943FD8;
    case 911u: goto L_08943FE0;
    case 912u: goto L_08943FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08940000:
    ctx.set_gpr(31, 0x08940008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08940008u) goto L_08940008;
    return;
L_08940008:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3472));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x0894001Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0894001Cu) goto L_0894001C;
    return;
L_0894001C:
    ctx.set_gpr(31, 0x08940024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08940024u) goto L_08940024;
    return;
L_08940024:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3436));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08940038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08940038u) goto L_08940038;
    return;
L_08940038:
    ctx.set_gpr(31, 0x08940040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08940040u) goto L_08940040;
    return;
L_08940040:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3400));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08940054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08940054u) goto L_08940054;
    return;
L_08940054:
    ctx.set_gpr(31, 0x0894005Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0894005Cu) goto L_0894005C;
    return;
L_0894005C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3364));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08940070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08940070u) goto L_08940070;
    return;
L_08940070:
    ctx.set_gpr(31, 0x08940078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08940078u) goto L_08940078;
    return;
L_08940078:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3328));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x0894008Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0894008Cu) goto L_0894008C;
    return;
L_0894008C:
    ctx.set_gpr(31, 0x08940094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08940094u) goto L_08940094;
    return;
L_08940094:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3292));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x089400A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089400A8u) goto L_089400A8;
    return;
L_089400A8:
    ctx.set_gpr(31, 0x089400B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089400B0u) goto L_089400B0;
    return;
L_089400B0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3256));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(31, 0x089400C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089400C4u) goto L_089400C4;
    return;
L_089400C4:
    ctx.set_gpr(31, 0x089400CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089400CCu) goto L_089400CC;
    return;
L_089400CC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3220));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x089400E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089400E0u) goto L_089400E0;
    return;
L_089400E0:
    ctx.set_gpr(31, 0x089400E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089400E8u) goto L_089400E8;
    return;
L_089400E8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3184));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x089400FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089400FCu) goto L_089400FC;
    return;
L_089400FC:
    ctx.set_gpr(31, 0x08940104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08940104u) goto L_08940104;
    return;
L_08940104:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3148));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08940118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08940118u) goto L_08940118;
    return;
L_08940118:
    ctx.set_gpr(31, 0x08940120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08940120u) goto L_08940120;
    return;
L_08940120:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3112));
    ctx.set_gpr(31, 0x08940134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08940134u) goto L_08940134;
    return;
L_08940134:
    ctx.set_gpr(31, 0x0894013Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0894013Cu) goto L_0894013C;
    return;
L_0894013C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3076));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08940150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08940150u) goto L_08940150;
    return;
L_08940150:
    ctx.set_gpr(31, 0x08940158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08940158u) goto L_08940158;
    return;
L_08940158:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3040));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x0894016Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0894016Cu) goto L_0894016C;
    return;
L_0894016C:
    ctx.set_gpr(31, 0x08940174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08940174u) goto L_08940174;
    return;
L_08940174:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3004));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08940188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08940188u) goto L_08940188;
    return;
L_08940188:
    ctx.set_gpr(31, 0x08940190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08940190u) goto L_08940190;
    return;
L_08940190:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2968));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x089401A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089401A4u) goto L_089401A4;
    return;
L_089401A4:
    ctx.set_gpr(31, 0x089401ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089401ACu) goto L_089401AC;
    return;
L_089401AC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2932));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x089401C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089401C0u) goto L_089401C0;
    return;
L_089401C0:
    ctx.set_gpr(31, 0x089401C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089401C8u) goto L_089401C8;
    return;
L_089401C8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2896));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x089401DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089401DCu) goto L_089401DC;
    return;
L_089401DC:
    ctx.set_gpr(31, 0x089401E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089401E4u) goto L_089401E4;
    return;
L_089401E4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2856));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x089401F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089401F8u) goto L_089401F8;
    return;
L_089401F8:
    ctx.set_gpr(31, 0x08940200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08940200u) goto L_08940200;
    return;
L_08940200:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940214:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0894023Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 607u, 0x088DB204u>(ctx, &aot_mem) && ctx.pc == 0x0894023Cu) goto L_0894023C;
    return;
L_0894023C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08940260u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940260u) goto L_08940260;
    return;
L_08940260:
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
L_0894027C:
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
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089402EC;
      }
      goto L_089402C4;
    }
L_089402C4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089402E0u);
    // nop
    goto L_08941760;
L_089402E0:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089402EC;
L_089402EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089402C4;
      }
      goto L_089402FC;
    }
L_089402FC:
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[16]);
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
L_0894032C:
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
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[17] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894039C;
      }
      goto L_08940374;
    }
L_08940374:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08940390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 353u, 0x089519ECu>(ctx, &aot_mem) && ctx.pc == 0x08940390u) goto L_08940390;
    return;
L_08940390:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894039C;
L_0894039C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940374;
      }
      goto L_089403AC;
    }
L_089403AC:
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[22]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
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
L_089403E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089403FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x0894044Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0894044Cu) goto L_0894044C;
    return;
L_0894044C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089404F4;
      }
      goto L_08940454;
    }
L_08940454:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089404E4;
      }
      goto L_08940460;
    }
L_08940460:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089404E0;
      }
      goto L_0894047C;
    }
L_0894047C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08940488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08940488u) goto L_08940488;
    return;
L_08940488:
    ctx.set_gpr(30, ctx.gpr[2] >> 2u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089404D4;
      }
      goto L_08940498;
    }
L_08940498:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(16, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089404D0;
      }
      goto L_089404AC;
    }
L_089404AC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089404BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089404BCu) goto L_089404BC;
    return;
L_089404BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x089404D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 829u, 0x08947D24u>(ctx, &aot_mem) && ctx.pc == 0x089404D0u) goto L_089404D0;
    return;
L_089404D0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089404D4;
L_089404D4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940498;
      }
      goto L_089404E0;
    }
L_089404E0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089404E4;
L_089404E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940460;
      }
      goto L_089404F4;
    }
L_089404F4:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940528:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940534:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08940554u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940554u) goto L_08940554;
    return;
L_08940554:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08940564:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940640;
      }
      goto L_0894058C;
    }
L_0894058C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089405A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089405A0u) goto L_089405A0;
    return;
L_089405A0:
    ctx.set_gpr(3, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894061C;
      }
      goto L_089405CC;
    }
L_089405CC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894061C;
      }
      goto L_089405D8;
    }
L_089405D8:
    ctx.set_gpr(31, 0x089405E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089405E0u) goto L_089405E0;
    return;
L_089405E0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894061C;
      }
      goto L_089405EC;
    }
L_089405EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x08940600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 202u, 0x0893CCACu>(ctx, &aot_mem) && ctx.pc == 0x08940600u) goto L_08940600;
    return;
L_08940600:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940628;
      }
      goto L_08940608;
    }
L_08940608:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08940614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08940614u) goto L_08940614;
    return;
L_08940614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940628;
      }
      goto L_0894061C;
    }
L_0894061C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08940628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08940628u) goto L_08940628;
    return;
L_08940628:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08940640u);
    // nop
    goto L_08940E70;
L_08940640:
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
L_0894065C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089406AC;
      }
      goto L_08940680;
    }
L_08940680:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0894068Cu);
    // nop
    goto L_08940784;
L_0894068C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089406A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089406A0u) goto L_089406A0;
    return;
L_089406A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_089406AC;
L_089406AC:
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
L_089406C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894076C;
      }
      goto L_089406E8;
    }
L_089406E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894076C;
      }
      goto L_089406F4;
    }
L_089406F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08940704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08940704u) goto L_08940704;
    return;
L_08940704:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894076C;
      }
      goto L_0894070C;
    }
L_0894070C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894076C;
      }
      goto L_08940720;
    }
L_08940720:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894072Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x0894072Cu) goto L_0894072C;
    return;
L_0894072C:
    ctx.set_gpr(5, ctx.gpr[2] >> 2u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940760;
      }
      goto L_0894073C;
    }
L_0894073C:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894075C;
      }
      goto L_08940750;
    }
L_08940750:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0894075C;
L_0894075C:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08940760;
L_08940760:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894073C;
      }
      goto L_0894076C;
    }
L_0894076C:
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
L_08940784:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940848;
      }
      goto L_089407B0;
    }
L_089407B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940848;
      }
      goto L_089407BC;
    }
L_089407BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x089407CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089407CCu) goto L_089407CC;
    return;
L_089407CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940848;
      }
      goto L_089407D4;
    }
L_089407D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940848;
      }
      goto L_089407E8;
    }
L_089407E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089407F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x089407F4u) goto L_089407F4;
    return;
L_089407F4:
    ctx.set_gpr(16, ctx.gpr[2] >> 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894083C;
      }
      goto L_08940800;
    }
L_08940800:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940838;
      }
      goto L_08940814;
    }
L_08940814:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940838;
      }
      goto L_08940830;
    }
L_08940830:
    ctx.set_gpr(31, 0x08940838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08940838u) goto L_08940838;
    return;
L_08940838:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0894083C;
L_0894083C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940800;
      }
      goto L_08940848;
    }
L_08940848:
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
L_08940864:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08940888u);
    // nop
    goto L_08940784;
L_08940888:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089408B0;
      }
      goto L_08940894;
    }
L_08940894:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089408B0;
      }
      goto L_089408A8;
    }
L_089408A8:
    ctx.set_gpr(31, 0x089408B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 454u, 0x0892A024u>(ctx, &aot_mem) && ctx.pc == 0x089408B0u) goto L_089408B0;
    return;
L_089408B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089408D4;
      }
      goto L_089408C4;
    }
L_089408C4:
    ctx.set_gpr(31, 0x089408CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 202u, 0x0893CCACu>(ctx, &aot_mem) && ctx.pc == 0x089408CCu) goto L_089408CC;
    return;
L_089408CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089408E0;
      }
      goto L_089408D4;
    }
L_089408D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089408E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089408E0u) goto L_089408E0;
    return;
L_089408E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940904;
      }
      goto L_089408F0;
    }
L_089408F0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089408FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 447u, 0x08929F94u>(ctx, &aot_mem) && ctx.pc == 0x089408FCu) goto L_089408FC;
    return;
L_089408FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940908;
      }
      goto L_08940904;
    }
L_08940904:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08940908;
L_08940908:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08940924u);
    // nop
    goto L_089406C4;
L_08940924:
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
L_0894093C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08940974u);
    // nop
    goto L_08940784;
L_08940974:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894099C;
      }
      goto L_08940980;
    }
L_08940980:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894099C;
      }
      goto L_08940994;
    }
L_08940994:
    ctx.set_gpr(31, 0x0894099Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 454u, 0x0892A024u>(ctx, &aot_mem) && ctx.pc == 0x0894099Cu) goto L_0894099C;
    return;
L_0894099C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089409C4;
      }
      goto L_089409B0;
    }
L_089409B0:
    ctx.set_gpr(31, 0x089409B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 202u, 0x0893CCACu>(ctx, &aot_mem) && ctx.pc == 0x089409B8u) goto L_089409B8;
    return;
L_089409B8:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089409D4;
      }
      goto L_089409C4;
    }
L_089409C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089409D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089409D0u) goto L_089409D0;
    return;
L_089409D0:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    goto L_089409D4;
L_089409D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940A00;
      }
      goto L_089409E8;
    }
L_089409E8:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089409F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 447u, 0x08929F94u>(ctx, &aot_mem) && ctx.pc == 0x089409F4u) goto L_089409F4;
    return;
L_089409F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940A04;
      }
      goto L_08940A00;
    }
L_08940A00:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08940A04;
L_08940A04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B58;
      }
      goto L_08940A1C;
    }
L_08940A1C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08940A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08940A2Cu) goto L_08940A2C;
    return;
L_08940A2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940AC4;
      }
      goto L_08940A34;
    }
L_08940A34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B58;
      }
      goto L_08940A50;
    }
L_08940A50:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B58;
      }
      goto L_08940A58;
    }
L_08940A58:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08940A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08940A64u) goto L_08940A64;
    return;
L_08940A64:
    ctx.set_gpr(16, ctx.gpr[2] >> 2u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940AB0;
      }
      goto L_08940A74;
    }
L_08940A74:
    ctx.set_gpr(20, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940AA4;
      }
      goto L_08940A8C;
    }
L_08940A8C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08940AA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940AA0u) goto L_08940AA0;
    return;
L_08940AA0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08940AA4;
L_08940AA4:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08940AB0;
L_08940AB0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940A74;
      }
      goto L_08940ABC;
    }
L_08940ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B58;
      }
      goto L_08940AC4;
    }
L_08940AC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26848)));
    ctx.set_gpr(31, 0x08940AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08940AD8u) goto L_08940AD8;
    return;
L_08940AD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B58;
      }
      goto L_08940AE0;
    }
L_08940AE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08940B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08940B00u) goto L_08940B00;
    return;
L_08940B00:
    ctx.set_gpr(17, ctx.gpr[2] >> 2u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B4C;
      }
      goto L_08940B10;
    }
L_08940B10:
    ctx.set_gpr(16, ctx.gpr[20] << 2u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B3C;
      }
      goto L_08940B24;
    }
L_08940B24:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08940B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 447u, 0x08929F94u>(ctx, &aot_mem) && ctx.pc == 0x08940B30u) goto L_08940B30;
    return;
L_08940B30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940B40;
      }
      goto L_08940B3C;
    }
L_08940B3C:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08940B40;
L_08940B40:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08940B4C;
L_08940B4C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940B10;
      }
      goto L_08940B58;
    }
L_08940B58:
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
L_08940B80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08940BACu);
    // nop
    goto L_08940784;
L_08940BAC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940BD4;
      }
      goto L_08940BB8;
    }
L_08940BB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940BD4;
      }
      goto L_08940BCC;
    }
L_08940BCC:
    ctx.set_gpr(31, 0x08940BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 454u, 0x0892A024u>(ctx, &aot_mem) && ctx.pc == 0x08940BD4u) goto L_08940BD4;
    return;
L_08940BD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940BF8;
      }
      goto L_08940BE8;
    }
L_08940BE8:
    ctx.set_gpr(31, 0x08940BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 202u, 0x0893CCACu>(ctx, &aot_mem) && ctx.pc == 0x08940BF0u) goto L_08940BF0;
    return;
L_08940BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940C04;
      }
      goto L_08940BF8;
    }
L_08940BF8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08940C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08940C04u) goto L_08940C04;
    return;
L_08940C04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940C2C;
      }
      goto L_08940C18;
    }
L_08940C18:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08940C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 447u, 0x08929F94u>(ctx, &aot_mem) && ctx.pc == 0x08940C24u) goto L_08940C24;
    return;
L_08940C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940C30;
      }
      goto L_08940C2C;
    }
L_08940C2C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08940C30;
L_08940C30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08940C4Cu);
    // nop
    goto L_089406C4;
L_08940C4C:
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
L_08940C68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2816));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08940CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08940CC0u) goto L_08940CC0;
    return;
L_08940CC0:
    ctx.set_gpr(31, 0x08940CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08940CC8u) goto L_08940CC8;
    return;
L_08940CC8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940D60;
      }
      goto L_08940CD0;
    }
L_08940CD0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940D60;
      }
      goto L_08940CD8;
    }
L_08940CD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08940CECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940CECu) goto L_08940CEC;
    return;
L_08940CEC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08940CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08940CFCu) goto L_08940CFC;
    return;
L_08940CFC:
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[16]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08940D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08940D18u) goto L_08940D18;
    return;
L_08940D18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940D60;
      }
      goto L_08940D20;
    }
L_08940D20:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940D54;
      }
      goto L_08940D2C;
    }
L_08940D2C:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940D50;
      }
      goto L_08940D40;
    }
L_08940D40:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08940D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 750u, 0x08947688u>(ctx, &aot_mem) && ctx.pc == 0x08940D50u) goto L_08940D50;
    return;
L_08940D50:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08940D54;
L_08940D54:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940D2C;
      }
      goto L_08940D60;
    }
L_08940D60:
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
L_08940D84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08940DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08940DC8u) goto L_08940DC8;
    return;
L_08940DC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940E48;
      }
      goto L_08940DD0;
    }
L_08940DD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940E48;
      }
      goto L_08940DE4;
    }
L_08940DE4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08940DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08940DF0u) goto L_08940DF0;
    return;
L_08940DF0:
    ctx.set_gpr(16, ctx.gpr[2] >> 2u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940E3C;
      }
      goto L_08940E00;
    }
L_08940E00:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(21, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940E38;
      }
      goto L_08940E14;
    }
L_08940E14:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08940E24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940E24u) goto L_08940E24;
    return;
L_08940E24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08940E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 829u, 0x08947D24u>(ctx, &aot_mem) && ctx.pc == 0x08940E38u) goto L_08940E38;
    return;
L_08940E38:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08940E3C;
L_08940E3C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940E00;
      }
      goto L_08940E48;
    }
L_08940E48:
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
L_08940E70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08940EACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940EACu) goto L_08940EAC;
    return;
L_08940EAC:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(19, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08940ECCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940ECCu) goto L_08940ECC;
    return;
L_08940ECC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08940EE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940EE8u) goto L_08940EE8;
    return;
L_08940EE8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08940F00;
      }
      goto L_08940EF4;
    }
L_08940EF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08940F40;
      }
      goto L_08940F00;
    }
L_08940F00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x08940F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08940F14u) goto L_08940F14;
    return;
L_08940F14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08940F30;
      }
      goto L_08940F1C;
    }
L_08940F1C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08940F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08940F30u) goto L_08940F30;
    return;
L_08940F30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08940F40;
L_08940F40:
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
L_08940F60:
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
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08940FA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940FA8u) goto L_08940FA8;
    return;
L_08940FA8:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08940FD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940FD4u) goto L_08940FD4;
    return;
L_08940FD4:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941000;
      }
      goto L_08940FE4;
    }
L_08940FE4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08940FFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08940FFCu) goto L_08940FFC;
    return;
L_08940FFC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08941000;
L_08941000:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941020;
      }
      goto L_0894100C;
    }
L_0894100C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08941020u);
    // nop
    goto L_08940784;
L_08941020:
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941058;
      }
      goto L_0894102C;
    }
L_0894102C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08941054u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08941054u) goto L_08941054;
    return;
L_08941054:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    goto L_08941058;
L_08941058:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941074;
      }
      goto L_08941060;
    }
L_08941060:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941074;
      }
      goto L_08941068;
    }
L_08941068:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089410C8;
      }
      goto L_08941074;
    }
L_08941074:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089410B8;
      }
      goto L_0894107C;
    }
L_0894107C:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089410B8;
      }
      goto L_08941088;
    }
L_08941088:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x0894109Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0894109Cu) goto L_0894109C;
    return;
L_0894109C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089410B8;
      }
      goto L_089410A4;
    }
L_089410A4:
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[17] - ctx.gpr[16]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089410B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089410B8u) goto L_089410B8;
    return;
L_089410B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_089410C8;
L_089410C8:
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
L_089410F4:
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
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941134;
      }
      goto L_08941128;
    }
L_08941128:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089411C4;
      }
      goto L_08941134;
    }
L_08941134:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08941144u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08941144u) goto L_08941144;
    return;
L_08941144:
    ctx.set_gpr(17, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089411C0;
      }
      goto L_08941164;
    }
L_08941164:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089411A8;
      }
      goto L_0894116C;
    }
L_0894116C:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941194;
      }
      goto L_08941178;
    }
L_08941178:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894118Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0894118Cu) goto L_0894118C;
    return;
L_0894118C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[17]);
    goto L_08941194;
L_08941194:
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941178;
      }
      goto L_089411A0;
    }
L_089411A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089411C0;
      }
      goto L_089411A8;
    }
L_089411A8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089411C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089411C0u) goto L_089411C0;
    return;
L_089411C0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089411C4;
L_089411C4:
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
L_089411E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941220;
      }
      goto L_08941210;
    }
L_08941210:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089412EC;
      }
      goto L_08941220;
    }
L_08941220:
    ctx.set_gpr(31, 0x08941228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x08941228u) goto L_08941228;
    return;
L_08941228:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941244;
      }
      goto L_08941238;
    }
L_08941238:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08941244;
L_08941244:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894125C;
      }
      goto L_08941250;
    }
L_08941250:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941260;
      }
      goto L_0894125C;
    }
L_0894125C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08941260;
L_08941260:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089412CC;
      }
      goto L_0894126C;
    }
L_0894126C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941294;
      }
      goto L_0894128C;
    }
L_0894128C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08941294;
L_08941294:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089412A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x089412A0u) goto L_089412A0;
    return;
L_089412A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089412C8;
      }
      goto L_089412A8;
    }
L_089412A8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089412C0;
      }
      goto L_089412B8;
    }
L_089412B8:
    ctx.set_gpr(31, 0x089412C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089412C0u) goto L_089412C0;
    return;
L_089412C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089412EC;
      }
      goto L_089412C8;
    }
L_089412C8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089412CC;
L_089412CC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894126C;
      }
      goto L_089412D8;
    }
L_089412D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089412EC;
      }
      goto L_089412E4;
    }
L_089412E4:
    ctx.set_gpr(31, 0x089412ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089412ECu) goto L_089412EC;
    return;
L_089412EC:
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
L_0894130C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894134C;
      }
      goto L_08941340;
    }
L_08941340:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089415C4;
      }
      goto L_0894134C;
    }
L_0894134C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894136C;
      }
      goto L_08941360;
    }
L_08941360:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089415C4;
      }
      goto L_0894136C;
    }
L_0894136C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26848)));
    ctx.set_gpr(31, 0x08941380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08941380u) goto L_08941380;
    return;
L_08941380:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941424;
      }
      goto L_08941388;
    }
L_08941388:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08941394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08941394u) goto L_08941394;
    return;
L_08941394:
    ctx.set_gpr(18, ctx.gpr[2] >> 2u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089413C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 396u, 0x089119ACu>(ctx, &aot_mem) && ctx.pc == 0x089413C0u) goto L_089413C0;
    return;
L_089413C0:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894140C;
      }
      goto L_089413D0;
    }
L_089413D0:
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941408;
      }
      goto L_089413E4;
    }
L_089413E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08941408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 396u, 0x089119ACu>(ctx, &aot_mem) && ctx.pc == 0x08941408u) goto L_08941408;
    return;
L_08941408:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0894140C;
L_0894140C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089413D0;
      }
      goto L_08941418;
    }
L_08941418:
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089415C4;
      }
      goto L_08941424;
    }
L_08941424:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08941438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08941438u) goto L_08941438;
    return;
L_08941438:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941470;
      }
      goto L_08941440;
    }
L_08941440:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(62)));
    ctx.set_gpr(31, 0x08941468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 396u, 0x089119ACu>(ctx, &aot_mem) && ctx.pc == 0x08941468u) goto L_08941468;
    return;
L_08941468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089415C4;
      }
      goto L_08941470;
    }
L_08941470:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27072)));
    ctx.set_gpr(31, 0x08941484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08941484u) goto L_08941484;
    return;
L_08941484:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894159C;
      }
      goto L_0894148C;
    }
L_0894148C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08941498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08941498u) goto L_08941498;
    return;
L_08941498:
    ctx.set_gpr(18, ctx.gpr[2] >> 2u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941560;
      }
      goto L_089414A8;
    }
L_089414A8:
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089414E0;
      }
      goto L_089414C4;
    }
L_089414C4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089414E0;
      }
      goto L_089414DC;
    }
L_089414DC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089414E0;
L_089414E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089414F4;
      }
      goto L_089414E8;
    }
L_089414E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_089414F4;
L_089414F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08941504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 153u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08941504u) goto L_08941504;
    return;
L_08941504:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941530;
      }
      goto L_08941514;
    }
L_08941514:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941530;
      }
      goto L_0894152C;
    }
L_0894152C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08941530;
L_08941530:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894155C;
      }
      goto L_08941538;
    }
L_08941538:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894155C;
      }
      goto L_08941550;
    }
L_08941550:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894155Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894155Cu) goto L_0894155C;
    return;
L_0894155C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08941560;
L_08941560:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089414A8;
      }
      goto L_0894156C;
    }
L_0894156C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08941594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 396u, 0x089119ACu>(ctx, &aot_mem) && ctx.pc == 0x08941594u) goto L_08941594;
    return;
L_08941594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089415C4;
      }
      goto L_0894159C;
    }
L_0894159C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089415C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 396u, 0x089119ACu>(ctx, &aot_mem) && ctx.pc == 0x089415C4u) goto L_089415C4;
    return;
L_089415C4:
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
L_089415EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941610:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26984)));
    ctx.set_gpr(31, 0x08941648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08941648u) goto L_08941648;
    return;
L_08941648:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941674;
      }
      goto L_08941650;
    }
L_08941650:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894166Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894166Cu) goto L_0894166C;
    return;
L_0894166C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941740;
      }
      goto L_08941674;
    }
L_08941674:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894169C;
      }
      goto L_08941690;
    }
L_08941690:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941740;
      }
      goto L_0894169C;
    }
L_0894169C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089416AC;
      }
      goto L_089416A4;
    }
L_089416A4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089416B8;
      }
      goto L_089416AC;
    }
L_089416AC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941740;
      }
      goto L_089416B8;
    }
L_089416B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089416C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x089416C4u) goto L_089416C4;
    return;
L_089416C4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089416D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x089416D4u) goto L_089416D4;
    return;
L_089416D4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089416E8;
      }
      goto L_089416DC;
    }
L_089416DC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941740;
      }
      goto L_089416E8;
    }
L_089416E8:
    ctx.set_gpr(16, ctx.gpr[16] >> 2u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941730;
      }
      goto L_089416F8;
    }
L_089416F8:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08941714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 787u, 0x089479E4u>(ctx, &aot_mem) && ctx.pc == 0x08941714u) goto L_08941714;
    return;
L_08941714:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894172C;
      }
      goto L_08941720;
    }
L_08941720:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941740;
      }
      goto L_0894172C;
    }
L_0894172C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08941730;
L_08941730:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089416F8;
      }
      goto L_0894173C;
    }
L_0894173C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08941740;
L_08941740:
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
L_08941760:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941820;
      }
      goto L_08941788;
    }
L_08941788:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08941820;
      }
      goto L_08941798;
    }
L_08941798:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089417C8;
      }
      goto L_089417A4;
    }
L_089417A4:
    ctx.set_gpr(31, 0x089417ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x089417ACu) goto L_089417AC;
    return;
L_089417AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089417C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089417C8u) goto L_089417C8;
    return;
L_089417C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089417D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 141u, 0x08910940u>(ctx, &aot_mem) && ctx.pc == 0x089417D8u) goto L_089417D8;
    return;
L_089417D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941814;
      }
      goto L_089417E0;
    }
L_089417E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941824;
      }
      goto L_089417F4;
    }
L_089417F4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(26852)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08941824;
      }
      goto L_08941804;
    }
L_08941804:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941824;
      }
      goto L_08941814;
    }
L_08941814:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941824;
      }
      goto L_08941820;
    }
L_08941820:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_08941824;
L_08941824:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
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
L_08941844:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08941880;
      }
      goto L_08941874;
    }
L_08941874:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941910;
      }
      goto L_08941880;
    }
L_08941880:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941890;
      }
      goto L_08941888;
    }
L_08941888:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894189C;
      }
      goto L_08941890;
    }
L_08941890:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941910;
      }
      goto L_0894189C;
    }
L_0894189C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089418A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x089418A8u) goto L_089418A8;
    return;
L_089418A8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089418B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x089418B8u) goto L_089418B8;
    return;
L_089418B8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089418CC;
      }
      goto L_089418C0;
    }
L_089418C0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941910;
      }
      goto L_089418CC;
    }
L_089418CC:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941900;
      }
      goto L_089418D8;
    }
L_089418D8:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089418FC;
      }
      goto L_089418F0;
    }
L_089418F0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941910;
      }
      goto L_089418FC;
    }
L_089418FC:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08941900;
L_08941900:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089418D8;
      }
      goto L_0894190C;
    }
L_0894190C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08941910;
L_08941910:
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
L_0894192C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894197C;
      }
      goto L_08941954;
    }
L_08941954:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08941960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08941960u) goto L_08941960;
    return;
L_08941960:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941974;
      }
      goto L_08941968;
    }
L_08941968:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08941974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08941974u) goto L_08941974;
    return;
L_08941974:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894197C;
L_0894197C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08941990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08941990u) goto L_08941990;
    return;
L_08941990:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089419C0;
      }
      goto L_089419A4;
    }
L_089419A4:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089419C0;
      }
      goto L_089419BC;
    }
L_089419BC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089419C0;
L_089419C0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089419EC;
      }
      goto L_089419C8;
    }
L_089419C8:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089419EC;
      }
      goto L_089419E0;
    }
L_089419E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089419ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089419ECu) goto L_089419EC;
    return;
L_089419EC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
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
L_08941A08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941A1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08941A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 451u, 0x08952058u>(ctx, &aot_mem) && ctx.pc == 0x08941A34u) goto L_08941A34;
    return;
L_08941A34:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17428));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941A5C;
      }
      goto L_08941A50;
    }
L_08941A50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08941A5Cu);
    // nop
    goto L_08941A74;
L_08941A5C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941A74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08941A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 455u, 0x089520A8u>(ctx, &aot_mem) && ctx.pc == 0x08941A8Cu) goto L_08941A8C;
    return;
L_08941A8C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17428));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941AE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08941B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 457u, 0x089520ECu>(ctx, &aot_mem) && ctx.pc == 0x08941B08u) goto L_08941B08;
    return;
L_08941B08:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17428));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(62)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08941B70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08941B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 459u, 0x08952144u>(ctx, &aot_mem) && ctx.pc == 0x08941B80u) goto L_08941B80;
    return;
L_08941B80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941B90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08941BB0u);
    // nop
    goto L_08941D04;
L_08941BB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08941BE0;
      }
      goto L_08941BBC;
    }
L_08941BBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941BE4;
      }
      goto L_08941BE0;
    }
L_08941BE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08941BE4;
L_08941BE4:
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
L_08941BFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08941C24u);
    // nop
    goto L_08941CA8;
L_08941C24:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08941C8C;
      }
      goto L_08941C30;
    }
L_08941C30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941C70;
      }
      goto L_08941C54;
    }
L_08941C54:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941C70;
      }
      goto L_08941C6C;
    }
L_08941C6C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08941C70;
L_08941C70:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941C84;
      }
      goto L_08941C78;
    }
L_08941C78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_08941C84;
L_08941C84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941C90;
      }
      goto L_08941C8C;
    }
L_08941C8C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08941C90;
L_08941C90:
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
L_08941CA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941CF8;
      }
      goto L_08941CB4;
    }
L_08941CB4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941CEC;
      }
      goto L_08941CC8;
    }
L_08941CC8:
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08941CE8;
      }
      goto L_08941CE0;
    }
L_08941CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941CFC;
      }
      goto L_08941CE8;
    }
L_08941CE8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08941CEC;
L_08941CEC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941CC8;
      }
      goto L_08941CF8;
    }
L_08941CF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08941CFC;
L_08941CFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941D04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941D8C;
      }
      goto L_08941D30;
    }
L_08941D30:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941D80;
      }
      goto L_08941D40;
    }
L_08941D40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08941D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08941D68u) goto L_08941D68;
    return;
L_08941D68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941D7C;
      }
      goto L_08941D70;
    }
L_08941D70:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941D90;
      }
      goto L_08941D7C;
    }
L_08941D7C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08941D80;
L_08941D80:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941D40;
      }
      goto L_08941D8C;
    }
L_08941D8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08941D90;
L_08941D90:
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
L_08941DB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941DC0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941E3C;
      }
      goto L_08941DCC;
    }
L_08941DCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08941E3C;
      }
      goto L_08941DD4;
    }
L_08941DD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941E3C;
      }
      goto L_08941DE4;
    }
L_08941DE4:
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941E20;
      }
      goto L_08941E04;
    }
L_08941E04:
    ctx.set_gpr(3, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941E20;
      }
      goto L_08941E1C;
    }
L_08941E1C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08941E20;
L_08941E20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941E34;
      }
      goto L_08941E28;
    }
L_08941E28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_08941E34;
L_08941E34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941E40;
      }
      goto L_08941E3C;
    }
L_08941E3C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08941E40;
L_08941E40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941E48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941E84;
      }
      goto L_08941E54;
    }
L_08941E54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08941E84;
      }
      goto L_08941E5C;
    }
L_08941E5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941E84;
      }
      goto L_08941E6C;
    }
L_08941E6C:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08941E88;
      }
      goto L_08941E84;
    }
L_08941E84:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08941E88;
L_08941E88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08941E90:
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
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08941ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08941ECCu) goto L_08941ECC;
    return;
L_08941ECC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08941ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08941ED8u) goto L_08941ED8;
    return;
L_08941ED8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08941EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 305u, 0x088EDB54u>(ctx, &aot_mem) && ctx.pc == 0x08941EE4u) goto L_08941EE4;
    return;
L_08941EE4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941F20;
      }
      goto L_08941EF8;
    }
L_08941EF8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08941F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08941F04u) goto L_08941F04;
    return;
L_08941F04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941F18;
      }
      goto L_08941F0C;
    }
L_08941F0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08941F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08941F18u) goto L_08941F18;
    return;
L_08941F18:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08941F20;
L_08941F20:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08941F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08941F34u) goto L_08941F34;
    return;
L_08941F34:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941F64;
      }
      goto L_08941F48;
    }
L_08941F48:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941F64;
      }
      goto L_08941F60;
    }
L_08941F60:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08941F64;
L_08941F64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08941F90;
      }
      goto L_08941F6C;
    }
L_08941F6C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08941F90;
      }
      goto L_08941F84;
    }
L_08941F84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08941F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08941F90u) goto L_08941F90;
    return;
L_08941F90:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08941F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08941F9Cu) goto L_08941F9C;
    return;
L_08941F9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08941FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08941FA8u) goto L_08941FA8;
    return;
L_08941FA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08941FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 710u, 0x088E7BD4u>(ctx, &aot_mem) && ctx.pc == 0x08941FB4u) goto L_08941FB4;
    return;
L_08941FB4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08941FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08941FC4u) goto L_08941FC4;
    return;
L_08941FC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08941FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08941FD4u) goto L_08941FD4;
    return;
L_08941FD4:
    ctx.set_gpr(31, 0x08941FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08941FDCu) goto L_08941FDC;
    return;
L_08941FDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08941FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08941FE8u) goto L_08941FE8;
    return;
L_08941FE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08941FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 485u, 0x088F68A4u>(ctx, &aot_mem) && ctx.pc == 0x08941FF4u) goto L_08941FF4;
    return;
L_08941FF4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08942004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08942004u) goto L_08942004;
    return;
L_08942004:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894203C;
      }
      goto L_08942010;
    }
L_08942010:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894202C;
      }
      goto L_08942020;
    }
L_08942020:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894203C;
      }
      goto L_0894202C;
    }
L_0894202C:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894203Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894203Cu) goto L_0894203C;
    return;
L_0894203C:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942200;
      }
      goto L_08942048;
    }
L_08942048:
    ctx.set_gpr(16, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942068;
      }
      goto L_0894205C;
    }
L_0894205C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089420B4;
      }
      goto L_08942068;
    }
L_08942068:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089420A0;
      }
      goto L_08942078;
    }
L_08942078:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08942084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08942084u) goto L_08942084;
    return;
L_08942084:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942098;
      }
      goto L_0894208C;
    }
L_0894208C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08942098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08942098u) goto L_08942098;
    return;
L_08942098:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089420A0;
L_089420A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089420B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089420B4u) goto L_089420B4;
    return;
L_089420B4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942168;
      }
      goto L_089420C8;
    }
L_089420C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08942168;
      }
      goto L_089420D0;
    }
L_089420D0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942168;
      }
      goto L_089420DC;
    }
L_089420DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942104;
      }
      goto L_089420F0;
    }
L_089420F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089420FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089420FCu) goto L_089420FC;
    return;
L_089420FC:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08942104;
L_08942104:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942124;
      }
      goto L_0894210C;
    }
L_0894210C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08942118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08942118u) goto L_08942118;
    return;
L_08942118:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08942124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08942124u) goto L_08942124;
    return;
L_08942124:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942148;
      }
      goto L_08942134;
    }
L_08942134:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08942140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08942140u) goto L_08942140;
    return;
L_08942140:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08942148;
L_08942148:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942160;
      }
      goto L_08942150;
    }
L_08942150:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08942160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08942160u) goto L_08942160;
    return;
L_08942160:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08942168;
L_08942168:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942194;
      }
      goto L_08942178;
    }
L_08942178:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942194;
      }
      goto L_08942190;
    }
L_08942190:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08942194;
L_08942194:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089421C0;
      }
      goto L_0894219C;
    }
L_0894219C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089421C0;
      }
      goto L_089421B4;
    }
L_089421B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089421C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089421C0u) goto L_089421C0;
    return;
L_089421C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089421FC;
      }
      goto L_089421D0;
    }
L_089421D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089421FC;
      }
      goto L_089421D8;
    }
L_089421D8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089421FC;
      }
      goto L_089421E4;
    }
L_089421E4:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_089421FC;
L_089421FC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08942200;
L_08942200:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942048;
      }
      goto L_0894220C;
    }
L_0894220C:
    ctx.set_gpr(31, 0x08942214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08942214u) goto L_08942214;
    return;
L_08942214:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08942224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 695u, 0x08907068u>(ctx, &aot_mem) && ctx.pc == 0x08942224u) goto L_08942224;
    return;
L_08942224:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894224C;
      }
      goto L_08942240;
    }
L_08942240:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894224Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894224Cu) goto L_0894224C;
    return;
L_0894224C:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_0894227C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08942294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 410u, 0x08945D68u>(ctx, &aot_mem) && ctx.pc == 0x08942294u) goto L_08942294;
    return;
L_08942294:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089422B8;
      }
      goto L_089422AC;
    }
L_089422AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089422B8u);
    // nop
    goto L_089422D0;
L_089422B8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089422D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089422ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x089422ECu) goto L_089422EC;
    return;
L_089422EC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942354;
      }
      goto L_0894232C;
    }
L_0894232C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08942338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08942338u) goto L_08942338;
    return;
L_08942338:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894234C;
      }
      goto L_08942340;
    }
L_08942340:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894234Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894234Cu) goto L_0894234C;
    return;
L_0894234C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08942354;
L_08942354:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08942368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08942368u) goto L_08942368;
    return;
L_08942368:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942398;
      }
      goto L_0894237C;
    }
L_0894237C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942398;
      }
      goto L_08942394;
    }
L_08942394:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08942398;
L_08942398:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089423C4;
      }
      goto L_089423A0;
    }
L_089423A0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089423C4;
      }
      goto L_089423B8;
    }
L_089423B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089423C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089423C4u) goto L_089423C4;
    return;
L_089423C4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08942410:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08942430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 399u, 0x08945C64u>(ctx, &aot_mem) && ctx.pc == 0x08942430u) goto L_08942430;
    return;
L_08942430:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894249C;
      }
      goto L_08942480;
    }
L_08942480:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894249C;
      }
      goto L_08942498;
    }
L_08942498:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0894249C;
L_0894249C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089424B0;
      }
      goto L_089424A4;
    }
L_089424A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_089424B0;
L_089424B0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089424DC;
      }
      goto L_089424C0;
    }
L_089424C0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089424DC;
      }
      goto L_089424D8;
    }
L_089424D8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089424DC;
L_089424DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942508;
      }
      goto L_089424E4;
    }
L_089424E4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942508;
      }
      goto L_089424FC;
    }
L_089424FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08942508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08942508u) goto L_08942508;
    return;
L_08942508:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(39))))));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41))))));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08942568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x08942568u) goto L_08942568;
    return;
L_08942568:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08942580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08942580u) goto L_08942580;
    return;
L_08942580:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_0894259C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089425C0;
      }
      goto L_089425B8;
    }
L_089425B8:
    ctx.set_gpr(31, 0x089425C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 18u, 0x089481CCu>(ctx, &aot_mem) && ctx.pc == 0x089425C0u) goto L_089425C0;
    return;
L_089425C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089425CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 424u, 0x08945E94u>(ctx, &aot_mem) && ctx.pc == 0x089425CCu) goto L_089425CC;
    return;
L_089425CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089425E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31324)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942620;
      }
      goto L_089425F8;
    }
L_089425F8:
    ctx.set_gpr(31, 0x08942600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08942600u) goto L_08942600;
    return;
L_08942600:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894260Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0894260Cu) goto L_0894260C;
    return;
L_0894260C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08942618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 173u, 0x088F0E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08942618u) goto L_08942618;
    return;
L_08942618:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31324), ctx.gpr[2]);
    goto L_08942620;
L_08942620:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31324)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942638:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942644:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942650:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894265C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x0894268Cu);
    // nop
    goto L_08942894;
L_0894268C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089426A4u);
    // nop
    goto L_089426C4;
L_089426A4:
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
L_089426C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089426E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089426E8u) goto L_089426E8;
    return;
L_089426E8:
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942718;
      }
      goto L_089426F8;
    }
L_089426F8:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0894270Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 9u, 0x089480C0u>(ctx, &aot_mem) && ctx.pc == 0x0894270Cu) goto L_0894270C;
    return;
L_0894270C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942758;
      }
      goto L_08942718;
    }
L_08942718:
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08942724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x08942724u) goto L_08942724;
    return;
L_08942724:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942758;
      }
      goto L_08942730;
    }
L_08942730:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08942740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 18u, 0x089481CCu>(ctx, &aot_mem) && ctx.pc == 0x08942740u) goto L_08942740;
    return;
L_08942740:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08942754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 9u, 0x089480C0u>(ctx, &aot_mem) && ctx.pc == 0x08942754u) goto L_08942754;
    return;
L_08942754:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08942758;
L_08942758:
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
L_08942770:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08942790u);
    // nop
    goto L_089426C4;
L_08942790:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089427AC;
      }
      goto L_08942798;
    }
L_08942798:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089427ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089427ACu) goto L_089427AC;
    return;
L_089427AC:
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
L_089427C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942808;
      }
      goto L_089427EC;
    }
L_089427EC:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942808;
      }
      goto L_08942804;
    }
L_08942804:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08942808;
L_08942808:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894281C;
      }
      goto L_08942810;
    }
L_08942810:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_0894281C;
L_0894281C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942848;
      }
      goto L_0894282C;
    }
L_0894282C:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942848;
      }
      goto L_08942844;
    }
L_08942844:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08942848;
L_08942848:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942874;
      }
      goto L_08942850;
    }
L_08942850:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942874;
      }
      goto L_08942868;
    }
L_08942868:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08942874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08942874u) goto L_08942874;
    return;
L_08942874:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
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
L_08942894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089428ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 28u, 0x0895C184u>(ctx, &aot_mem) && ctx.pc == 0x089428ACu) goto L_089428AC;
    return;
L_089428AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089428BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08942920;
      }
      goto L_089428D4;
    }
L_089428D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08942908;
      }
      goto L_089428E0;
    }
L_089428E0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089428F0;
      }
      goto L_089428E8;
    }
L_089428E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942930;
      }
      goto L_089428F0;
    }
L_089428F0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942900u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942900u) goto L_08942900;
    return;
L_08942900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942930;
      }
      goto L_08942908;
    }
L_08942908:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942918u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942918u) goto L_08942918;
    return;
L_08942918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942930;
      }
      goto L_08942920;
    }
L_08942920:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942930u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942930u) goto L_08942930;
    return;
L_08942930:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942940:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08942968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08942968u) goto L_08942968;
    return;
L_08942968:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942978:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x089429A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089429A0u) goto L_089429A0;
    return;
L_089429A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089429B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089429B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089429F0;
      }
      goto L_089429D8;
    }
L_089429D8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089429E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089429E8u) goto L_089429E8;
    return;
L_089429E8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(18))))));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089429F0;
L_089429F0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942A08:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31328)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942A18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942A38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942A38u) goto L_08942A38;
    return;
L_08942A38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942A50;
      }
      goto L_08942A40;
    }
L_08942A40:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(18))))));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942A58;
      }
      goto L_08942A50;
    }
L_08942A50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08942A58;
L_08942A58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942A6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942A6Cu) goto L_08942A6C;
    return;
L_08942A6C:
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942A88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942A88u) goto L_08942A88;
    return;
L_08942A88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942A98;
      }
      goto L_08942A94;
    }
L_08942A94:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08942A98;
L_08942A98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942AAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942ACCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942ACCu) goto L_08942ACC;
    return;
L_08942ACC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942AF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942B10;
      }
      goto L_08942B04;
    }
L_08942B04:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942B34;
      }
      goto L_08942B10;
    }
L_08942B10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942B28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942B28u) goto L_08942B28;
    return;
L_08942B28:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    goto L_08942B34;
L_08942B34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942B44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942B68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942B68u) goto L_08942B68;
    return;
L_08942B68:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942B88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942BA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942BA8u) goto L_08942BA8;
    return;
L_08942BA8:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942BC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08942BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08942BFCu) goto L_08942BFC;
    return;
L_08942BFC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942C20;
      }
      goto L_08942C04;
    }
L_08942C04:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942C20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942C20u) goto L_08942C20;
    return;
L_08942C20:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
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
L_08942C40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08942C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08942C70u) goto L_08942C70;
    return;
L_08942C70:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942C94;
      }
      goto L_08942C78;
    }
L_08942C78:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942C94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942C94u) goto L_08942C94;
    return;
L_08942C94:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
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
L_08942CB4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942CCC;
      }
      goto L_08942CC0;
    }
L_08942CC0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942CD8;
      }
      goto L_08942CCC;
    }
L_08942CCC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942CE8;
      }
      goto L_08942CD8;
    }
L_08942CD8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    goto L_08942CE8;
L_08942CE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942CF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08942D98;
      }
      goto L_08942D04;
    }
L_08942D04:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08942D80;
      }
      goto L_08942D10;
    }
L_08942D10:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08942D68;
      }
      goto L_08942D1C;
    }
L_08942D1C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08942D50;
      }
      goto L_08942D28;
    }
L_08942D28:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942D38;
      }
      goto L_08942D30;
    }
L_08942D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942DA8;
      }
      goto L_08942D38;
    }
L_08942D38:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942D48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942D48u) goto L_08942D48;
    return;
L_08942D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942DA8;
      }
      goto L_08942D50;
    }
L_08942D50:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942D60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942D60u) goto L_08942D60;
    return;
L_08942D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942DA8;
      }
      goto L_08942D68;
    }
L_08942D68:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942D78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942D78u) goto L_08942D78;
    return;
L_08942D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942DA8;
      }
      goto L_08942D80;
    }
L_08942D80:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942D90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942D90u) goto L_08942D90;
    return;
L_08942D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08942DA8;
      }
      goto L_08942D98;
    }
L_08942D98:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942DA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942DA8u) goto L_08942DA8;
    return;
L_08942DA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942DB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(39))))));
    ctx.set_gpr(31, 0x08942DCCu);
    // nop
    goto L_08942CF0;
L_08942DCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942DDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    ctx.set_gpr(31, 0x08942DF0u);
    // nop
    goto L_08942CF0;
L_08942DF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942E00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08942E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08942E24u) goto L_08942E24;
    return;
L_08942E24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942E34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08942E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08942E58u) goto L_08942E58;
    return;
L_08942E58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942E68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08942E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08942E8Cu) goto L_08942E8C;
    return;
L_08942E8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942E9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08942EACu);
    // nop
    goto L_089428BC;
L_08942EAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942EBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942EC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942EDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942EDCu) goto L_08942EDC;
    return;
L_08942EDC:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08942EF0:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(30, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] << 2u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08942F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x08942F40u) goto L_08942F40;
    return;
L_08942F40:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089430B4;
      }
      goto L_08942F58;
    }
L_08942F58:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08942F78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08942F78u) goto L_08942F78;
    return;
L_08942F78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943058;
      }
      goto L_08942F8C;
    }
L_08942F8C:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(23, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942FB4;
      }
      goto L_08942FA4;
    }
L_08942FA4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08942FB4;
L_08942FB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942FC8;
      }
      goto L_08942FBC;
    }
L_08942FBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08942FC8;
L_08942FC8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942FF4;
      }
      goto L_08942FD8;
    }
L_08942FD8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08942FF4;
      }
      goto L_08942FF0;
    }
L_08942FF0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08942FF4;
L_08942FF4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943020;
      }
      goto L_08942FFC;
    }
L_08942FFC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943020;
      }
      goto L_08943014;
    }
L_08943014:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08943020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08943020u) goto L_08943020;
    return;
L_08943020:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0894303Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0894303Cu) goto L_0894303C;
    return;
L_0894303C:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943054u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943054u) goto L_08943054;
    return;
L_08943054:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    goto L_08943058;
L_08943058:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943084;
      }
      goto L_08943068;
    }
L_08943068:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943084;
      }
      goto L_08943080;
    }
L_08943080:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08943084;
L_08943084:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089430B0;
      }
      goto L_0894308C;
    }
L_0894308C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089430B0;
      }
      goto L_089430A4;
    }
L_089430A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089430B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089430B0u) goto L_089430B0;
    return;
L_089430B0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089430B4;
L_089430B4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08942F58;
      }
      goto L_089430C0;
    }
L_089430C0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089430D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x089430D0u) goto L_089430D0;
    return;
L_089430D0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[20] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943114;
      }
      goto L_089430E4;
    }
L_089430E4:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    ctx.set_gpr(31, 0x0894310Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0894310Cu) goto L_0894310C;
    return;
L_0894310C:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08943114;
L_08943114:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089430E4;
      }
      goto L_08943120;
    }
L_08943120:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943138;
      }
      goto L_0894312C;
    }
L_0894312C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943184;
      }
      goto L_08943138;
    }
L_08943138:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943170;
      }
      goto L_08943148;
    }
L_08943148:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08943154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08943154u) goto L_08943154;
    return;
L_08943154:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943168;
      }
      goto L_0894315C;
    }
L_0894315C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08943168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08943168u) goto L_08943168;
    return;
L_08943168:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08943170;
L_08943170:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08943184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08943184u) goto L_08943184;
    return;
L_08943184:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08943198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08943198u) goto L_08943198;
    return;
L_08943198:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089431A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x089431A8u) goto L_089431A8;
    return;
L_089431A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089431DC;
      }
      goto L_089431C0;
    }
L_089431C0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089431DC;
      }
      goto L_089431D8;
    }
L_089431D8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089431DC;
L_089431DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089431F0;
      }
      goto L_089431E4;
    }
L_089431E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_089431F0;
L_089431F0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894321C;
      }
      goto L_08943200;
    }
L_08943200:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894321C;
      }
      goto L_08943218;
    }
L_08943218:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0894321C;
L_0894321C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943248;
      }
      goto L_08943224;
    }
L_08943224:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943248;
      }
      goto L_0894323C;
    }
L_0894323C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08943248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08943248u) goto L_08943248;
    return;
L_08943248:
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
L_08943280:
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
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943324;
      }
      goto L_089432C8;
    }
L_089432C8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089432E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089432E8u) goto L_089432E8;
    return;
L_089432E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943314;
      }
      goto L_089432F0;
    }
L_089432F0:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943308u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943308u) goto L_08943308;
    return;
L_08943308:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943320;
      }
      goto L_08943314;
    }
L_08943314:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943334;
      }
      goto L_08943320;
    }
L_08943320:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08943324;
L_08943324:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089432C8;
      }
      goto L_08943330;
    }
L_08943330:
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[20]);
    goto L_08943334;
L_08943334:
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
L_08943360:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943390;
      }
      goto L_08943378;
    }
L_08943378:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943388u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943388u) goto L_08943388;
    return;
L_08943388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943394;
      }
      goto L_08943390;
    }
L_08943390:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08943394;
L_08943394:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089433A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089433C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089433C4u) goto L_089433C4;
    return;
L_089433C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089433D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089433E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089433E8u) goto L_089433E8;
    return;
L_089433E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089433F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894342C;
      }
      goto L_08943420;
    }
L_08943420:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894347C;
      }
      goto L_0894342C;
    }
L_0894342C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943464;
      }
      goto L_0894343C;
    }
L_0894343C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08943448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08943448u) goto L_08943448;
    return;
L_08943448:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894345C;
      }
      goto L_08943450;
    }
L_08943450:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894345Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894345Cu) goto L_0894345C;
    return;
L_0894345C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08943464;
L_08943464:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08943478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08943478u) goto L_08943478;
    return;
L_08943478:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0894347C;
L_0894347C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
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
L_08943498:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089434B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08943534;
      }
      goto L_089434C4;
    }
L_089434C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894351C;
      }
      goto L_089434D0;
    }
L_089434D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08943504;
      }
      goto L_089434DC;
    }
L_089434DC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089434EC;
      }
      goto L_089434E4;
    }
L_089434E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894354C;
      }
      goto L_089434EC;
    }
L_089434EC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089434FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089434FCu) goto L_089434FC;
    return;
L_089434FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943550;
      }
      goto L_08943504;
    }
L_08943504:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943514u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943514u) goto L_08943514;
    return;
L_08943514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943550;
      }
      goto L_0894351C;
    }
L_0894351C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894352Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894352Cu) goto L_0894352C;
    return;
L_0894352C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943550;
      }
      goto L_08943534;
    }
L_08943534:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943544u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943544u) goto L_08943544;
    return;
L_08943544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943550;
      }
      goto L_0894354C;
    }
L_0894354C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08943550;
L_08943550:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943560:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(41))))));
    ctx.set_gpr(31, 0x08943574u);
    // nop
    goto L_089434B0;
L_08943574:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943584:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.set_gpr(31, 0x08943598u);
    // nop
    goto L_089434B0;
L_08943598:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089435A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(43))))));
    ctx.set_gpr(31, 0x089435BCu);
    // nop
    goto L_089434B0;
L_089435BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089435CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943610;
      }
      goto L_089435E8;
    }
L_089435E8:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894360C;
      }
      goto L_08943600;
    }
L_08943600:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943620;
      }
      goto L_0894360C;
    }
L_0894360C:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08943610;
L_08943610:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089435E8;
      }
      goto L_0894361C;
    }
L_0894361C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08943620;
L_08943620:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943628:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943640u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943640u) goto L_08943640;
    return;
L_08943640:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943650:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943668u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943668u) goto L_08943668;
    return;
L_08943668:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943678:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08943694u);
    // nop
    goto L_08943560;
L_08943694:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089436B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089436B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089436C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089436C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089436D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089436D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943714u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943714u) goto L_08943714;
    return;
L_08943714:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943720;
      }
      goto L_0894371C;
    }
L_0894371C:
    ctx.set_gpr(16, ctx.gpr[28] + static_cast<std::uint32_t>(-32192));
    goto L_08943720;
L_08943720:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(7, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2800));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08943748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08943748u) goto L_08943748;
    return;
L_08943748:
    ctx.set_gpr(31, 0x08943750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08943750u) goto L_08943750;
    return;
L_08943750:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894377C;
      }
      goto L_08943760;
    }
L_08943760:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894377C;
      }
      goto L_08943778;
    }
L_08943778:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0894377C;
L_0894377C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089437A8;
      }
      goto L_08943784;
    }
L_08943784:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089437A8;
      }
      goto L_0894379C;
    }
L_0894379C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089437A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089437A8u) goto L_089437A8;
    return;
L_089437A8:
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
L_089437C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089437E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089437E8u) goto L_089437E8;
    return;
L_089437E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089437F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943818u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943818u) goto L_08943818;
    return;
L_08943818:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943828:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089438AC;
      }
      goto L_08943838;
    }
L_08943838:
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089438A0;
      }
      goto L_08943844;
    }
L_08943844:
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894388C;
      }
      goto L_08943850;
    }
L_08943850:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_0894388C;
L_0894388C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 1u));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943850;
      }
      goto L_0894389C;
    }
L_0894389C:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_089438A0;
L_089438A0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943844;
      }
      goto L_089438AC;
    }
L_089438AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089438B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089438D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089438D8u) goto L_089438D8;
    return;
L_089438D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089438E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08943900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 439u, 0x08945F14u>(ctx, &aot_mem) && ctx.pc == 0x08943900u) goto L_08943900;
    return;
L_08943900:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894390Cu);
    // nop
    goto L_089426C4;
L_0894390C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943920:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894392C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943A98;
      }
      goto L_08943954;
    }
L_08943954:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943A98;
      }
      goto L_0894395C;
    }
L_0894395C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08943A34;
      }
      goto L_08943974;
    }
L_08943974:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2780)));
    ctx.set_gpr(31, 0x08943990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08943990u) goto L_08943990;
    return;
L_08943990:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089439A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089439A0u) goto L_089439A0;
    return;
L_089439A0:
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2772)));
    ctx.set_gpr(31, 0x089439B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089439B4u) goto L_089439B4;
    return;
L_089439B4:
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089439C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x089439C4u) goto L_089439C4;
    return;
L_089439C4:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089439E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089439E0u) goto L_089439E0;
    return;
L_089439E0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2780)));
    ctx.set_gpr(31, 0x089439F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x089439F8u) goto L_089439F8;
    return;
L_089439F8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08943A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08943A08u) goto L_08943A08;
    return;
L_08943A08:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2772)));
    ctx.set_gpr(31, 0x08943A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08943A1Cu) goto L_08943A1C;
    return;
L_08943A1C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08943A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08943A2Cu) goto L_08943A2C;
    return;
L_08943A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943A98;
      }
      goto L_08943A34;
    }
L_08943A34:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2780)));
    ctx.set_gpr(31, 0x08943A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08943A44u) goto L_08943A44;
    return;
L_08943A44:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08943A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08943A54u) goto L_08943A54;
    return;
L_08943A54:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943A70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943A70u) goto L_08943A70;
    return;
L_08943A70:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2780)));
    ctx.set_gpr(31, 0x08943A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08943A88u) goto L_08943A88;
    return;
L_08943A88:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08943A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08943A98u) goto L_08943A98;
    return;
L_08943A98:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_08943ABC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943B08;
      }
      goto L_08943AFC;
    }
L_08943AFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08943B08;
L_08943B08:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943B38;
      }
      goto L_08943B14;
    }
L_08943B14:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26896)));
    ctx.set_gpr(31, 0x08943B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08943B28u) goto L_08943B28;
    return;
L_08943B28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943B38;
      }
      goto L_08943B30;
    }
L_08943B30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943B3C;
      }
      goto L_08943B38;
    }
L_08943B38:
    ctx.set_gpr(19, 0u + 0u);
    goto L_08943B3C;
L_08943B3C:
    ctx.set_gpr(31, 0x08943B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08943B44u) goto L_08943B44;
    return;
L_08943B44:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943C34;
      }
      goto L_08943B50;
    }
L_08943B50:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08943B60u);
    // nop
    goto L_0894392C;
L_08943B60:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08943BDC;
      }
      goto L_08943B70;
    }
L_08943B70:
    ctx.set_gpr(31, 0x08943B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08943B78u) goto L_08943B78;
    return;
L_08943B78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08943B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x08943B88u) goto L_08943B88;
    return;
L_08943B88:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08943BB8;
      }
      goto L_08943B94;
    }
L_08943B94:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943BB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943BB0u) goto L_08943BB0;
    return;
L_08943BB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943C1C;
      }
      goto L_08943BB8;
    }
L_08943BB8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08943BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08943BD0u) goto L_08943BD0;
    return;
L_08943BD0:
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943C1C;
      }
      goto L_08943BDC;
    }
L_08943BDC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943BF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943BF8u) goto L_08943BF8;
    return;
L_08943BF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943C1C;
      }
      goto L_08943C00;
    }
L_08943C00:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08943C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08943C18u) goto L_08943C18;
    return;
L_08943C18:
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    goto L_08943C1C;
L_08943C1C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943C34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943C34u) goto L_08943C34;
    return;
L_08943C34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943C48;
      }
      goto L_08943C40;
    }
L_08943C40:
    ctx.set_gpr(31, 0x08943C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08943C48u) goto L_08943C48;
    return;
L_08943C48:
    ctx.set_gpr(2, ctx.gpr[22] + 0u);
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
L_08943C78:
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
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2780)));
    ctx.set_gpr(31, 0x08943CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08943CBCu) goto L_08943CBC;
    return;
L_08943CBC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-2780)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08943CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08943CD4u) goto L_08943CD4;
    return;
L_08943CD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943E68;
      }
      goto L_08943CDC;
    }
L_08943CDC:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2780)));
    ctx.set_gpr(31, 0x08943CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08943CECu) goto L_08943CEC;
    return;
L_08943CEC:
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2772)));
    ctx.set_gpr(31, 0x08943D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08943D04u) goto L_08943D04;
    return;
L_08943D04:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943E2C;
      }
      goto L_08943D10;
    }
L_08943D10:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2772)));
    ctx.set_gpr(31, 0x08943D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08943D20u) goto L_08943D20;
    return;
L_08943D20:
    ctx.set_gpr(30, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08943D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08943D2Cu) goto L_08943D2C;
    return;
L_08943D2C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943E14;
      }
      goto L_08943D44;
    }
L_08943D44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943D6C;
      }
      goto L_08943D54;
    }
L_08943D54:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943D70;
      }
      goto L_08943D6C;
    }
L_08943D6C:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08943D70;
L_08943D70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08943D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08943D88u) goto L_08943D88;
    return;
L_08943D88:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08943D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08943D9Cu) goto L_08943D9C;
    return;
L_08943D9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943E10;
      }
      goto L_08943DA4;
    }
L_08943DA4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08943DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08943DB0u) goto L_08943DB0;
    return;
L_08943DB0:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943E04;
      }
      goto L_08943DC0;
    }
L_08943DC0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08943DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08943DD0u) goto L_08943DD0;
    return;
L_08943DD0:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08943DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08943DECu) goto L_08943DEC;
    return;
L_08943DEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943E00;
      }
      goto L_08943DF4;
    }
L_08943DF4:
    ctx.set_gpr(20, ctx.gpr[22] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943E10;
      }
      goto L_08943E00;
    }
L_08943E00:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08943E04;
L_08943E04:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943DC0;
      }
      goto L_08943E10;
    }
L_08943E10:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08943E14;
L_08943E14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943D44;
      }
      goto L_08943E24;
    }
L_08943E24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08943E68;
      }
      goto L_08943E2C;
    }
L_08943E2C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31324)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26904)));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08943E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 692u, 0x0892707Cu>(ctx, &aot_mem) && ctx.pc == 0x08943E48u) goto L_08943E48;
    return;
L_08943E48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943E68;
      }
      goto L_08943E50;
    }
L_08943E50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08943E64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08943E64u) goto L_08943E64;
    return;
L_08943E64:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    goto L_08943E68;
L_08943E68:
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
L_08943EA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08943EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 40u, 0x0894433Cu>(ctx, &aot_mem) && ctx.pc == 0x08943EBCu) goto L_08943EBC;
    return;
L_08943EBC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943ED4;
      }
      goto L_08943EC8;
    }
L_08943EC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08943ED4;
L_08943ED4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943F04;
      }
      goto L_08943EE0;
    }
L_08943EE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943F04;
      }
      goto L_08943EFC;
    }
L_08943EFC:
    ctx.set_gpr(31, 0x08943F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08943F04u) goto L_08943F04;
    return;
L_08943F04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943F20;
      }
      goto L_08943F14;
    }
L_08943F14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08943F20;
L_08943F20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943F34;
      }
      goto L_08943F2C;
    }
L_08943F2C:
    ctx.set_gpr(31, 0x08943F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08943F34u) goto L_08943F34;
    return;
L_08943F34:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943F4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08943F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 47u, 0x08944398u>(ctx, &aot_mem) && ctx.pc == 0x08943F68u) goto L_08943F68;
    return;
L_08943F68:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943F80;
      }
      goto L_08943F74;
    }
L_08943F74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08943F80;
L_08943F80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943FB0;
      }
      goto L_08943F8C;
    }
L_08943F8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08943FB0;
      }
      goto L_08943FA8;
    }
L_08943FA8:
    ctx.set_gpr(31, 0x08943FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08943FB0u) goto L_08943FB0;
    return;
L_08943FB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943FCC;
      }
      goto L_08943FC0;
    }
L_08943FC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08943FCC;
L_08943FCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08943FE0;
      }
      goto L_08943FD8;
    }
L_08943FD8:
    ctx.set_gpr(31, 0x08943FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08943FE0u) goto L_08943FE0;
    return;
L_08943FE0:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08943FF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.pc = 0x08944000u; return;
}

void recomp_unit_0079(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0079_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_79(Runtime &runtime) {
    runtime.register_generated_unit(79u, 0x08940000u, 16384u, &recomp_unit_0079, &recomp_unit_0079_entry);
    runtime.register_function(0x08940000u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940008u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894001Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940024u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940038u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940040u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940054u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894005Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940070u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940078u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894008Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940094u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089400FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940104u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940118u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940120u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940134u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894013Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940150u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940158u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894016Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940174u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940188u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940190u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089401F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940200u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940214u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894023Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940260u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894027Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089402FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894032Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940374u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940390u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894039Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089403ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089403E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089403FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894044Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940454u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940460u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894047Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940488u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940498u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089404F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940528u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940534u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940554u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940564u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894058Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089405A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089405CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089405D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089405E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089405ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940600u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940608u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940614u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894061Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940628u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940640u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894065Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940680u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894068Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089406F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940704u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894070Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940720u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894072Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894073Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940750u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894075Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940760u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894076Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940784u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089407F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940800u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940814u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940830u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940838u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894083Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940848u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940864u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940888u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940894u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089408FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940904u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940908u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940924u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894093Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940974u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940980u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940994u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894099Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089409F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940A8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940ABCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940AE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940B80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940BF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940C68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940CFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940D84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940DF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940E70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940ECCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940EF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940F60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08940FFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941000u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894100Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941020u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894102Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941054u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941058u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941060u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941068u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941074u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894107Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941088u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894109Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089410F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941128u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941134u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941144u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941164u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894116Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941178u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894118Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941194u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089411E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941210u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941220u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941228u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941238u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941244u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941250u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894125Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941260u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894126Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894128Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941294u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089412ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894130Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941340u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894134Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941360u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894136Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941380u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941388u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941394u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089413E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941408u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894140Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941418u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941424u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941438u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941440u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941468u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941470u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941484u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894148Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941498u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089414F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941504u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941514u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894152Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941530u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941538u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941550u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894155Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941560u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894156Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941594u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894159Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089415ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941610u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941648u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941650u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894166Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941674u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941690u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894169Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089416F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941714u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941720u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894172Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941730u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894173Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941740u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941760u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941788u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941798u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089417A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089417ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089417C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089417D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089417E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089417F4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941804u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941814u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941820u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941824u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941844u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941874u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941880u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941888u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941890u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894189Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089418FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941900u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894190Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941910u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894192Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941954u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941960u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941968u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941974u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894197Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941990u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089419ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941A8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941AE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941B90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941BFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941C90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941CFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D7Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941D90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941DE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E5Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941E90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941ECCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941ED8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941EE4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941EF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F0Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F84u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941F9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08941FF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942004u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942010u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942020u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894202Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894203Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942048u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894205Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942068u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942078u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942084u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894208Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942098u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089420FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942104u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894210Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942118u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942124u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942134u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942140u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942148u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942150u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942160u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942168u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942178u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942190u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942194u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894219Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089421FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942200u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894220Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942214u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942224u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942240u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894224Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894227Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942294u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089422ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894232Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942338u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942340u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894234Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942354u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942368u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894237Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942394u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942398u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089423C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942410u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942430u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942480u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942498u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894249Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089424FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942508u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942568u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942580u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894259Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089425F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942600u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894260Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942618u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942620u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942638u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942644u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942650u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894265Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894268Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089426A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089426C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089426E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089426F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894270Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942718u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942724u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942730u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942740u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942754u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942758u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942770u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942790u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942798u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089427ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942804u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942808u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942810u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894281Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894282Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942844u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942848u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942850u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942868u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942874u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942894u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089428F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942900u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942908u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942918u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942920u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942930u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942940u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942968u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942978u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089429A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089429B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089429B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089429D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089429E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089429F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942A98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942AACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942ACCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942AF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942B88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942BA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942BC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942BFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942C94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CE8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942CF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D90u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942D98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942DF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942E9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EC4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942EF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F58u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942F8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FB4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FF0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08942FFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943014u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943020u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894303Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943054u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943058u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943068u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943080u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943084u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894308Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089430E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894310Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943114u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943120u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894312Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943138u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943148u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943154u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894315Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943168u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943170u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943184u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943198u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089431F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943200u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943218u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894321Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943224u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894323Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943248u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943280u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089432F0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943308u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943314u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943320u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943324u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943330u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943334u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943360u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943378u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943388u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943390u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943394u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433A4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433D4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089433F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943420u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894342Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894343Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943448u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943450u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894345Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943464u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943478u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894347Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943498u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434DCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434E4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434ECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089434FCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943504u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943514u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894351Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894352Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943534u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943544u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894354Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943550u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943560u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943574u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943584u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943598u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435BCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435CCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089435E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943600u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894360Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943610u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894361Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943620u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943628u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943640u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943650u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943668u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943678u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943684u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943694u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436B0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436B8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436C8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436D0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089436D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943714u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894371Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943720u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943748u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943750u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943760u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943778u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894377Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943784u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894379Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437A8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437C0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089437F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943818u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943828u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943838u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943844u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943850u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894388Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894389Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089438A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089438ACu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089438B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089438D8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089438E8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943900u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894390Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943920u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894392Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943954u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x0894395Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943974u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943990u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089439A0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089439B4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089439C4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089439E0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x089439F8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943A98u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943ABCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943AFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B08u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B28u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B30u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B38u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B3Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B60u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943B94u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943BB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943BB8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943BD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943BDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943BF8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C18u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C1Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C40u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943C78u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CD4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CDCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943CECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D44u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D54u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D6Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D70u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D88u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943D9Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943DA4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943DB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943DC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943DD0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943DECu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943DF4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E00u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E10u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E24u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E48u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E50u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E64u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943E68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EA0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EBCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EC8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943ED4u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943EFCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F04u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F14u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F20u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F2Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F34u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F4Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F68u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F74u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F80u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943F8Cu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FA8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FB0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FC0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FCCu, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FD8u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FE0u, &recomp_unit_0079, "recomp_unit_0079");
    runtime.register_function(0x08943FF8u, &recomp_unit_0079, "recomp_unit_0079");
}
} // namespace psprecomp
