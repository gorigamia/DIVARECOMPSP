#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0065[4085] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 9, 10, 0,
    0, 11, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19,
    0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 33,
    0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0,
    0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 0,
    73, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 81, 0, 82,
    0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 95, 0,
    96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 130, 0, 0,
    131, 0, 132, 0, 133, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0,
    0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0,
    164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0,
    180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 187, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 194, 0,
    0, 195, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 0, 202, 0,
    203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0,
    0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223,
    0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 232,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 245, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 265, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 268, 269, 0, 0, 0, 270, 0, 0, 0,
    0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0,
    0, 0, 286, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 300, 0, 0, 301, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0,
    308, 0, 0, 309, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    317, 0, 0, 318, 0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 327, 328, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0,
    0, 336, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0,
    0, 345, 346, 0, 347, 0, 0, 0, 0, 0, 348, 0, 349, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 353, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 358, 0, 359, 0, 0, 0, 0, 0,
    0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0,
    374, 0, 375, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 381, 0, 0, 382, 0,
    383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 389, 0, 0, 390, 0, 391, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 395, 0, 396, 0, 397, 0, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0,
    402, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0,
    0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0,
    0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 427, 0, 428, 0, 0, 0, 0, 0,
    429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 442, 0, 443, 0, 0, 444, 0, 0, 445, 0,
    0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 449, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 452, 453, 0, 0, 454, 0,
    0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 468, 0, 469, 0,
    0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 475, 0, 0, 476, 0, 0,
    0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0,
    480, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0,
    487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 0, 0, 492, 0, 493, 0, 0, 494, 0, 0, 0, 495, 496, 0,
    0, 497, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502, 503, 0, 504, 0, 0,
    0, 505, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 511, 0, 0, 512,
    0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 517, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0,
    0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0,
    0, 0, 526, 0, 0, 527, 0, 528, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 533, 0, 534, 0, 535, 0,
    0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 540, 0, 541, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0,
    544, 0, 0, 0, 0, 545, 0, 0, 546, 0, 547, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 552, 0,
    0, 553, 0, 554, 0, 0, 555, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 561, 0,
    562, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0,
    0, 0, 0, 0, 574, 575, 0, 0, 576, 0, 577, 0, 0, 0, 0, 578, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0,
    0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0,
    0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 595,
    0, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 609, 0,
    0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0,
    615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0,
    0, 0, 0, 619, 0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 0,
    0, 0, 627, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 0, 0, 631, 0, 632, 0, 0, 633, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645,
    0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 0,
    0, 0, 657, 0, 0, 0, 0, 0, 0, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 0, 0, 674, 0, 0, 0, 675,
    0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 0, 685, 0, 0, 686, 0, 0, 687, 0, 688, 0, 0, 689, 0, 0, 0,
    0, 0, 690, 691, 0, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 696, 0, 0, 697, 0, 0, 0, 698,
    0, 0, 699, 0, 700, 0, 0, 701, 0, 702, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0,
    0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 710,
    0, 711, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 717, 0, 0, 0,
    718, 719, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 724, 0, 0, 725, 0, 0,
    726, 0, 0, 0, 727, 0, 0, 728, 0, 729, 0, 0, 730, 0, 731, 0, 0, 0, 0, 732, 733, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0,
    735, 0, 0, 0, 0, 736, 0, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0,
    0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 746,
    0, 0, 0, 747, 0, 0, 748, 0, 0, 749, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 753,
    0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 759, 0, 0, 0, 760,
    0, 0, 761, 0, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0,
    769, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 772, 0, 0, 773, 774, 0, 775, 0, 0, 776, 0, 777, 0, 0,
    0, 0, 0, 0, 0, 778, 0, 0, 779, 0, 0, 780, 0, 0, 0, 781, 0, 0, 782, 0, 0, 783, 0, 0, 784, 0, 0, 785, 0, 0, 786, 0,
    0, 0, 787, 0, 0, 788, 0, 0, 789, 0, 0, 790, 791, 0, 0, 792, 793, 0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 796, 0, 0, 797, 0,
    0, 798, 0, 0, 0, 799, 0, 0, 800, 801, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 804, 0, 0, 0, 0, 805, 0, 0,
    0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 807, 0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0,
    817, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 821, 0, 0, 822, 0, 0, 0, 0, 0, 0,
    823, 0, 0, 824, 0, 0, 0, 0, 0, 0, 825, 0, 826, 0, 0, 827, 0, 0, 828, 0, 829, 0, 0, 0, 830, 0, 0, 831, 0, 0, 832, 0,
    0, 833, 834, 0, 835, 0, 0, 836, 0, 0, 0, 837, 838, 0, 0, 0, 839, 0, 0, 840, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 842, 0,
    843, 0, 0, 844, 0, 0, 845, 0, 846, 0, 0, 0, 847, 0, 0, 848, 0, 0, 849, 0, 0, 850, 851, 0, 852, 0, 0, 0, 0, 853, 0, 854,
    0, 855, 0, 0, 0, 856, 857, 0, 0, 0, 0, 858, 0, 0, 859, 0, 0, 860, 861, 0, 0, 0, 0, 0, 862, 0, 0, 0, 863, 0, 0, 864,
    865, 0, 866, 0, 867, 0, 868, 0, 869, 0, 870, 0, 0, 871, 0, 0, 0, 872, 873, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 875, 0, 876, 0, 877, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 880, 0, 881, 0, 0, 882, 0, 0, 883,
    0, 0, 0, 884, 885, 0, 0, 0, 886, 0, 0, 0, 0, 0, 887, 0, 0, 888, 889, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 891, 0, 892, 0, 0, 893, 0, 0, 894, 0, 0, 895, 0, 0, 0, 896, 0, 0, 0, 0, 897, 0, 0, 0, 898, 0, 0,
    899, 0, 0, 0, 900, 0, 0, 901, 0, 0, 0, 902, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 0, 904, 0, 0, 905, 0, 0, 0, 0, 0,
    0, 0, 906, 0, 0, 0, 907, 0, 908, 0, 0, 0, 0, 0, 909, 0, 910, 0, 0, 0, 911, 912, 0, 0, 0, 0, 913, 0, 0, 914, 0, 0,
    915, 0, 916, 0, 0, 917, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0, 920, 0, 0, 0, 921, 0, 0, 0,
    922, 0, 0, 923, 0, 924, 0, 0, 0, 925, 0, 0, 0, 0, 0, 926, 0, 0, 0, 927, 0, 0, 928, 0, 0, 0, 929, 0, 930, 0, 0, 931,
    932, 0, 0, 0, 933, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 934, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 935, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 936,
};
void recomp_unit_0065_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08908000u;
        entry_id = (entry_delta < 16340u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0065[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08908000;
    case 2u: goto L_08908018;
    case 3u: goto L_08908024;
    case 4u: goto L_0890802C;
    case 5u: goto L_08908038;
    case 6u: goto L_08908048;
    case 7u: goto L_08908050;
    case 8u: goto L_08908068;
    case 9u: goto L_08908074;
    case 10u: goto L_08908078;
    case 11u: goto L_08908084;
    case 12u: goto L_08908088;
    case 13u: goto L_08908094;
    case 14u: goto L_089080CC;
    case 15u: goto L_08908128;
    case 16u: goto L_08908140;
    case 17u: goto L_0890814C;
    case 18u: goto L_08908158;
    case 19u: goto L_0890817C;
    case 20u: goto L_08908188;
    case 21u: goto L_089081A0;
    case 22u: goto L_089081A8;
    case 23u: goto L_089081B8;
    case 24u: goto L_089081C8;
    case 25u: goto L_089081D8;
    case 26u: goto L_089081EC;
    case 27u: goto L_08908204;
    case 28u: goto L_08908218;
    case 29u: goto L_08908228;
    case 30u: goto L_08908250;
    case 31u: goto L_0890825C;
    case 32u: goto L_08908274;
    case 33u: goto L_0890827C;
    case 34u: goto L_0890829C;
    case 35u: goto L_089082A4;
    case 36u: goto L_089082B4;
    case 37u: goto L_089082BC;
    case 38u: goto L_089082CC;
    case 39u: goto L_089082D8;
    case 40u: goto L_089082F4;
    case 41u: goto L_0890830C;
    case 42u: goto L_08908318;
    case 43u: goto L_08908324;
    case 44u: goto L_0890832C;
    case 45u: goto L_0890833C;
    case 46u: goto L_08908354;
    case 47u: goto L_08908370;
    case 48u: goto L_0890837C;
    case 49u: goto L_089083AC;
    case 50u: goto L_089083B8;
    case 51u: goto L_089083C0;
    case 52u: goto L_089083E8;
    case 53u: goto L_08908404;
    case 54u: goto L_0890841C;
    case 55u: goto L_0890843C;
    case 56u: goto L_08908448;
    case 57u: goto L_08908460;
    case 58u: goto L_08908468;
    case 59u: goto L_08908478;
    case 60u: goto L_08908488;
    case 61u: goto L_08908498;
    case 62u: goto L_089084AC;
    case 63u: goto L_089084C4;
    case 64u: goto L_089084D8;
    case 65u: goto L_089084E8;
    case 66u: goto L_08908510;
    case 67u: goto L_0890851C;
    case 68u: goto L_08908534;
    case 69u: goto L_0890854C;
    case 70u: goto L_08908558;
    case 71u: goto L_08908564;
    case 72u: goto L_08908574;
    case 73u: goto L_08908580;
    case 74u: goto L_08908588;
    case 75u: goto L_08908594;
    case 76u: goto L_0890859C;
    case 77u: goto L_089085B0;
    case 78u: goto L_089085C4;
    case 79u: goto L_089085D8;
    case 80u: goto L_089085F0;
    case 81u: goto L_089085F4;
    case 82u: goto L_089085FC;
    case 83u: goto L_08908614;
    case 84u: goto L_08908620;
    case 85u: goto L_08908628;
    case 86u: goto L_08908640;
    case 87u: goto L_0890865C;
    case 88u: goto L_08908684;
    case 89u: goto L_08908690;
    case 90u: goto L_089086A4;
    case 91u: goto L_089086B8;
    case 92u: goto L_089086D8;
    case 93u: goto L_089086E4;
    case 94u: goto L_089086EC;
    case 95u: goto L_089086F8;
    case 96u: goto L_08908700;
    case 97u: goto L_08908714;
    case 98u: goto L_08908728;
    case 99u: goto L_08908734;
    case 100u: goto L_0890873C;
    case 101u: goto L_08908744;
    case 102u: goto L_08908754;
    case 103u: goto L_0890876C;
    case 104u: goto L_0890878C;
    case 105u: goto L_08908798;
    case 106u: goto L_089087A0;
    case 107u: goto L_089087AC;
    case 108u: goto L_089087B4;
    case 109u: goto L_089087C8;
    case 110u: goto L_089087DC;
    case 111u: goto L_089087E8;
    case 112u: goto L_089087F0;
    case 113u: goto L_089087F8;
    case 114u: goto L_08908808;
    case 115u: goto L_08908830;
    case 116u: goto L_0890883C;
    case 117u: goto L_08908844;
    case 118u: goto L_08908850;
    case 119u: goto L_08908858;
    case 120u: goto L_0890886C;
    case 121u: goto L_08908880;
    case 122u: goto L_0890888C;
    case 123u: goto L_08908894;
    case 124u: goto L_0890889C;
    case 125u: goto L_089088AC;
    case 126u: goto L_089088C8;
    case 127u: goto L_089088DC;
    case 128u: goto L_089088E8;
    case 129u: goto L_089088F0;
    case 130u: goto L_089088F4;
    case 131u: goto L_08908900;
    case 132u: goto L_08908908;
    case 133u: goto L_08908910;
    case 134u: goto L_08908914;
    case 135u: goto L_0890894C;
    case 136u: goto L_0890895C;
    case 137u: goto L_0890896C;
    case 138u: goto L_089089C8;
    case 139u: goto L_089089D0;
    case 140u: goto L_089089DC;
    case 141u: goto L_089089F0;
    case 142u: goto L_089089F8;
    case 143u: goto L_08908A0C;
    case 144u: goto L_08908A14;
    case 145u: goto L_08908A28;
    case 146u: goto L_08908A34;
    case 147u: goto L_08908A40;
    case 148u: goto L_08908A54;
    case 149u: goto L_08908A7C;
    case 150u: goto L_08908AA4;
    case 151u: goto L_08908AAC;
    case 152u: goto L_08908AC0;
    case 153u: goto L_08908AC4;
    case 154u: goto L_08908AD0;
    case 155u: goto L_08908AD8;
    case 156u: goto L_08908AF4;
    case 157u: goto L_08908B04;
    case 158u: goto L_08908B10;
    case 159u: goto L_08908B20;
    case 160u: goto L_08908B48;
    case 161u: goto L_08908B64;
    case 162u: goto L_08908B70;
    case 163u: goto L_08908B78;
    case 164u: goto L_08908B80;
    case 165u: goto L_08908B8C;
    case 166u: goto L_08908B98;
    case 167u: goto L_08908BA8;
    case 168u: goto L_08908BB4;
    case 169u: goto L_08908BBC;
    case 170u: goto L_08908BC4;
    case 171u: goto L_08908BD4;
    case 172u: goto L_08908BDC;
    case 173u: goto L_08908C04;
    case 174u: goto L_08908C10;
    case 175u: goto L_08908C24;
    case 176u: goto L_08908C54;
    case 177u: goto L_08908C60;
    case 178u: goto L_08908C6C;
    case 179u: goto L_08908C78;
    case 180u: goto L_08908C80;
    case 181u: goto L_08908C8C;
    case 182u: goto L_08908C94;
    case 183u: goto L_08908CA0;
    case 184u: goto L_08908CC8;
    case 185u: goto L_08908CD4;
    case 186u: goto L_08908CE0;
    case 187u: goto L_08908CE4;
    case 188u: goto L_08908CEC;
    case 189u: goto L_08908D10;
    case 190u: goto L_08908D1C;
    case 191u: goto L_08908D30;
    case 192u: goto L_08908D58;
    case 193u: goto L_08908D74;
    case 194u: goto L_08908D78;
    case 195u: goto L_08908D84;
    case 196u: goto L_08908D88;
    case 197u: goto L_08908D90;
    case 198u: goto L_08908DC4;
    case 199u: goto L_08908DD8;
    case 200u: goto L_08908DE0;
    case 201u: goto L_08908DEC;
    case 202u: goto L_08908DF8;
    case 203u: goto L_08908E00;
    case 204u: goto L_08908E18;
    case 205u: goto L_08908E2C;
    case 206u: goto L_08908E38;
    case 207u: goto L_08908E44;
    case 208u: goto L_08908E5C;
    case 209u: goto L_08908E68;
    case 210u: goto L_08908E70;
    case 211u: goto L_08908E78;
    case 212u: goto L_08908E88;
    case 213u: goto L_08908E98;
    case 214u: goto L_08908EAC;
    case 215u: goto L_08908ED0;
    case 216u: goto L_08908F14;
    case 217u: goto L_08908F20;
    case 218u: goto L_08908F28;
    case 219u: goto L_08908F34;
    case 220u: goto L_08908F40;
    case 221u: goto L_08908F50;
    case 222u: goto L_08908F64;
    case 223u: goto L_08908F7C;
    case 224u: goto L_08908F88;
    case 225u: goto L_08908F98;
    case 226u: goto L_08908FB0;
    case 227u: goto L_08908FC0;
    case 228u: goto L_08908FCC;
    case 229u: goto L_08908FD8;
    case 230u: goto L_08908FE8;
    case 231u: goto L_08908FF0;
    case 232u: goto L_08908FFC;
    case 233u: goto L_08909008;
    case 234u: goto L_0890902C;
    case 235u: goto L_0890907C;
    case 236u: goto L_08909090;
    case 237u: goto L_089090AC;
    case 238u: goto L_089090B8;
    case 239u: goto L_089090C8;
    case 240u: goto L_089090E4;
    case 241u: goto L_089090F0;
    case 242u: goto L_0890910C;
    case 243u: goto L_08909130;
    case 244u: goto L_08909148;
    case 245u: goto L_0890914C;
    case 246u: goto L_08909154;
    case 247u: goto L_08909160;
    case 248u: goto L_0890916C;
    case 249u: goto L_0890918C;
    case 250u: goto L_08909198;
    case 251u: goto L_089091B0;
    case 252u: goto L_089091B8;
    case 253u: goto L_089091C8;
    case 254u: goto L_089091D8;
    case 255u: goto L_089091E8;
    case 256u: goto L_089091FC;
    case 257u: goto L_08909214;
    case 258u: goto L_08909228;
    case 259u: goto L_08909238;
    case 260u: goto L_08909260;
    case 261u: goto L_0890926C;
    case 262u: goto L_08909284;
    case 263u: goto L_08909294;
    case 264u: goto L_089092AC;
    case 265u: goto L_089092B0;
    case 266u: goto L_089092B8;
    case 267u: goto L_089092D0;
    case 268u: goto L_089092DC;
    case 269u: goto L_089092E0;
    case 270u: goto L_089092F0;
    case 271u: goto L_08909304;
    case 272u: goto L_0890931C;
    case 273u: goto L_08909334;
    case 274u: goto L_08909350;
    case 275u: goto L_08909360;
    case 276u: goto L_08909368;
    case 277u: goto L_08909378;
    case 278u: goto L_08909394;
    case 279u: goto L_089093A4;
    case 280u: goto L_089093DC;
    case 281u: goto L_08909410;
    case 282u: goto L_08909434;
    case 283u: goto L_08909450;
    case 284u: goto L_08909468;
    case 285u: goto L_08909470;
    case 286u: goto L_08909488;
    case 287u: goto L_08909490;
    case 288u: goto L_089094A0;
    case 289u: goto L_089094B0;
    case 290u: goto L_089094C8;
    case 291u: goto L_089094E4;
    case 292u: goto L_0890950C;
    case 293u: goto L_08909518;
    case 294u: goto L_08909538;
    case 295u: goto L_08909544;
    case 296u: goto L_0890954C;
    case 297u: goto L_08909558;
    case 298u: goto L_08909560;
    case 299u: goto L_08909574;
    case 300u: goto L_08909588;
    case 301u: goto L_08909594;
    case 302u: goto L_0890959C;
    case 303u: goto L_089095A4;
    case 304u: goto L_089095B4;
    case 305u: goto L_089095CC;
    case 306u: goto L_089095EC;
    case 307u: goto L_089095F8;
    case 308u: goto L_08909600;
    case 309u: goto L_0890960C;
    case 310u: goto L_08909614;
    case 311u: goto L_08909628;
    case 312u: goto L_0890963C;
    case 313u: goto L_08909648;
    case 314u: goto L_08909650;
    case 315u: goto L_08909658;
    case 316u: goto L_08909668;
    case 317u: goto L_08909680;
    case 318u: goto L_0890968C;
    case 319u: goto L_0890969C;
    case 320u: goto L_089096A8;
    case 321u: goto L_089096B0;
    case 322u: goto L_089096BC;
    case 323u: goto L_089096C4;
    case 324u: goto L_089096D8;
    case 325u: goto L_089096E8;
    case 326u: goto L_08909700;
    case 327u: goto L_08909718;
    case 328u: goto L_0890971C;
    case 329u: goto L_08909724;
    case 330u: goto L_0890973C;
    case 331u: goto L_08909748;
    case 332u: goto L_0890975C;
    case 333u: goto L_08909768;
    case 334u: goto L_08909770;
    case 335u: goto L_08909778;
    case 336u: goto L_08909784;
    case 337u: goto L_08909794;
    case 338u: goto L_0890979C;
    case 339u: goto L_089097B0;
    case 340u: goto L_089097B8;
    case 341u: goto L_089097C4;
    case 342u: goto L_089097D0;
    case 343u: goto L_089097DC;
    case 344u: goto L_089097F4;
    case 345u: goto L_08909804;
    case 346u: goto L_08909808;
    case 347u: goto L_08909810;
    case 348u: goto L_08909828;
    case 349u: goto L_08909830;
    case 350u: goto L_08909834;
    case 351u: goto L_08909840;
    case 352u: goto L_08909878;
    case 353u: goto L_08909884;
    case 354u: goto L_0890989C;
    case 355u: goto L_089098A4;
    case 356u: goto L_089098B4;
    case 357u: goto L_089098DC;
    case 358u: goto L_089098E0;
    case 359u: goto L_089098E8;
    case 360u: goto L_0890990C;
    case 361u: goto L_08909954;
    case 362u: goto L_08909960;
    case 363u: goto L_08909968;
    case 364u: goto L_08909990;
    case 365u: goto L_089099AC;
    case 366u: goto L_089099C0;
    case 367u: goto L_089099E8;
    case 368u: goto L_089099FC;
    case 369u: goto L_08909A24;
    case 370u: goto L_08909A4C;
    case 371u: goto L_08909A54;
    case 372u: goto L_08909A60;
    case 373u: goto L_08909A74;
    case 374u: goto L_08909A80;
    case 375u: goto L_08909A88;
    case 376u: goto L_08909A90;
    case 377u: goto L_08909AA0;
    case 378u: goto L_08909AB0;
    case 379u: goto L_08909AD4;
    case 380u: goto L_08909AE8;
    case 381u: goto L_08909AEC;
    case 382u: goto L_08909AF8;
    case 383u: goto L_08909B00;
    case 384u: goto L_08909B14;
    case 385u: goto L_08909B28;
    case 386u: goto L_08909B34;
    case 387u: goto L_08909B44;
    case 388u: goto L_08909B50;
    case 389u: goto L_08909B58;
    case 390u: goto L_08909B64;
    case 391u: goto L_08909B6C;
    case 392u: goto L_08909B80;
    case 393u: goto L_08909B98;
    case 394u: goto L_08909BA8;
    case 395u: goto L_08909BB4;
    case 396u: goto L_08909BBC;
    case 397u: goto L_08909BC4;
    case 398u: goto L_08909BD0;
    case 399u: goto L_08909BDC;
    case 400u: goto L_08909BEC;
    case 401u: goto L_08909BF8;
    case 402u: goto L_08909C00;
    case 403u: goto L_08909C08;
    case 404u: goto L_08909C18;
    case 405u: goto L_08909C24;
    case 406u: goto L_08909C3C;
    case 407u: goto L_08909C48;
    case 408u: goto L_08909C50;
    case 409u: goto L_08909C78;
    case 410u: goto L_08909C94;
    case 411u: goto L_08909CBC;
    case 412u: goto L_08909CC8;
    case 413u: goto L_08909CE0;
    case 414u: goto L_08909CE8;
    case 415u: goto L_08909CF8;
    case 416u: goto L_08909D08;
    case 417u: goto L_08909D18;
    case 418u: goto L_08909D2C;
    case 419u: goto L_08909D44;
    case 420u: goto L_08909D58;
    case 421u: goto L_08909D68;
    case 422u: goto L_08909D90;
    case 423u: goto L_08909D9C;
    case 424u: goto L_08909DB4;
    case 425u: goto L_08909DC4;
    case 426u: goto L_08909DDC;
    case 427u: goto L_08909DE0;
    case 428u: goto L_08909DE8;
    case 429u: goto L_08909E00;
    case 430u: goto L_08909E0C;
    case 431u: goto L_08909E3C;
    case 432u: goto L_08909E64;
    case 433u: goto L_08909E74;
    case 434u: goto L_08909E8C;
    case 435u: goto L_08909EA0;
    case 436u: goto L_08909EB0;
    case 437u: goto L_08909EC8;
    case 438u: goto L_08909F08;
    case 439u: goto L_08909F1C;
    case 440u: goto L_08909F3C;
    case 441u: goto L_08909F54;
    case 442u: goto L_08909F58;
    case 443u: goto L_08909F60;
    case 444u: goto L_08909F6C;
    case 445u: goto L_08909F78;
    case 446u: goto L_08909F90;
    case 447u: goto L_08909FA0;
    case 448u: goto L_08909FB8;
    case 449u: goto L_08909FBC;
    case 450u: goto L_08909FC4;
    case 451u: goto L_08909FDC;
    case 452u: goto L_08909FE8;
    case 453u: goto L_08909FEC;
    case 454u: goto L_08909FF8;
    case 455u: goto L_0890A010;
    case 456u: goto L_0890A024;
    case 457u: goto L_0890A038;
    case 458u: goto L_0890A050;
    case 459u: goto L_0890A060;
    case 460u: goto L_0890A08C;
    case 461u: goto L_0890A0D0;
    case 462u: goto L_0890A0E4;
    case 463u: goto L_0890A10C;
    case 464u: goto L_0890A134;
    case 465u: goto L_0890A13C;
    case 466u: goto L_0890A154;
    case 467u: goto L_0890A16C;
    case 468u: goto L_0890A170;
    case 469u: goto L_0890A178;
    case 470u: goto L_0890A190;
    case 471u: goto L_0890A19C;
    case 472u: goto L_0890A1AC;
    case 473u: goto L_0890A1D0;
    case 474u: goto L_0890A1E4;
    case 475u: goto L_0890A1E8;
    case 476u: goto L_0890A1F4;
    case 477u: goto L_0890A218;
    case 478u: goto L_0890A248;
    case 479u: goto L_0890A260;
    case 480u: goto L_0890A280;
    case 481u: goto L_0890A28C;
    case 482u: goto L_0890A298;
    case 483u: goto L_0890A2A4;
    case 484u: goto L_0890A2B8;
    case 485u: goto L_0890A2D4;
    case 486u: goto L_0890A2E4;
    case 487u: goto L_0890A300;
    case 488u: goto L_0890A318;
    case 489u: goto L_0890A328;
    case 490u: goto L_0890A334;
    case 491u: goto L_0890A340;
    case 492u: goto L_0890A350;
    case 493u: goto L_0890A358;
    case 494u: goto L_0890A364;
    case 495u: goto L_0890A374;
    case 496u: goto L_0890A378;
    case 497u: goto L_0890A384;
    case 498u: goto L_0890A388;
    case 499u: goto L_0890A394;
    case 500u: goto L_0890A3C0;
    case 501u: goto L_0890A3D8;
    case 502u: goto L_0890A3E8;
    case 503u: goto L_0890A3EC;
    case 504u: goto L_0890A3F4;
    case 505u: goto L_0890A404;
    case 506u: goto L_0890A408;
    case 507u: goto L_0890A410;
    case 508u: goto L_0890A438;
    case 509u: goto L_0890A45C;
    case 510u: goto L_0890A468;
    case 511u: goto L_0890A470;
    case 512u: goto L_0890A47C;
    case 513u: goto L_0890A484;
    case 514u: goto L_0890A49C;
    case 515u: goto L_0890A4B0;
    case 516u: goto L_0890A4C8;
    case 517u: goto L_0890A4CC;
    case 518u: goto L_0890A4D4;
    case 519u: goto L_0890A4EC;
    case 520u: goto L_0890A4F8;
    case 521u: goto L_0890A508;
    case 522u: goto L_0890A524;
    case 523u: goto L_0890A540;
    case 524u: goto L_0890A568;
    case 525u: goto L_0890A574;
    case 526u: goto L_0890A588;
    case 527u: goto L_0890A594;
    case 528u: goto L_0890A59C;
    case 529u: goto L_0890A5A8;
    case 530u: goto L_0890A5B0;
    case 531u: goto L_0890A5C8;
    case 532u: goto L_0890A5DC;
    case 533u: goto L_0890A5E8;
    case 534u: goto L_0890A5F0;
    case 535u: goto L_0890A5F8;
    case 536u: goto L_0890A608;
    case 537u: goto L_0890A618;
    case 538u: goto L_0890A62C;
    case 539u: goto L_0890A640;
    case 540u: goto L_0890A64C;
    case 541u: goto L_0890A654;
    case 542u: goto L_0890A660;
    case 543u: goto L_0890A668;
    case 544u: goto L_0890A680;
    case 545u: goto L_0890A694;
    case 546u: goto L_0890A6A0;
    case 547u: goto L_0890A6A8;
    case 548u: goto L_0890A6B0;
    case 549u: goto L_0890A6C0;
    case 550u: goto L_0890A6DC;
    case 551u: goto L_0890A6E8;
    case 552u: goto L_0890A6F8;
    case 553u: goto L_0890A704;
    case 554u: goto L_0890A70C;
    case 555u: goto L_0890A718;
    case 556u: goto L_0890A720;
    case 557u: goto L_0890A734;
    case 558u: goto L_0890A744;
    case 559u: goto L_0890A75C;
    case 560u: goto L_0890A774;
    case 561u: goto L_0890A778;
    case 562u: goto L_0890A780;
    case 563u: goto L_0890A798;
    case 564u: goto L_0890A7A4;
    case 565u: goto L_0890A7BC;
    case 566u: goto L_0890A7DC;
    case 567u: goto L_0890A7EC;
    case 568u: goto L_0890A7F4;
    case 569u: goto L_0890A81C;
    case 570u: goto L_0890A840;
    case 571u: goto L_0890A848;
    case 572u: goto L_0890A858;
    case 573u: goto L_0890A86C;
    case 574u: goto L_0890A890;
    case 575u: goto L_0890A894;
    case 576u: goto L_0890A8A0;
    case 577u: goto L_0890A8A8;
    case 578u: goto L_0890A8BC;
    case 579u: goto L_0890A8C8;
    case 580u: goto L_0890A8D0;
    case 581u: goto L_0890A8E8;
    case 582u: goto L_0890A8F8;
    case 583u: goto L_0890A908;
    case 584u: goto L_0890A930;
    case 585u: goto L_0890A96C;
    case 586u: goto L_0890A978;
    case 587u: goto L_0890A988;
    case 588u: goto L_0890A9A0;
    case 589u: goto L_0890A9AC;
    case 590u: goto L_0890A9B8;
    case 591u: goto L_0890A9C4;
    case 592u: goto L_0890A9D0;
    case 593u: goto L_0890A9D8;
    case 594u: goto L_0890A9F0;
    case 595u: goto L_0890A9FC;
    case 596u: goto L_0890AA0C;
    case 597u: goto L_0890AA18;
    case 598u: goto L_0890AA24;
    case 599u: goto L_0890AA2C;
    case 600u: goto L_0890AA50;
    case 601u: goto L_0890AA8C;
    case 602u: goto L_0890AA98;
    case 603u: goto L_0890AAA8;
    case 604u: goto L_0890AAC0;
    case 605u: goto L_0890AACC;
    case 606u: goto L_0890AAD8;
    case 607u: goto L_0890AAE4;
    case 608u: goto L_0890AAF0;
    case 609u: goto L_0890AAF8;
    case 610u: goto L_0890AB08;
    case 611u: goto L_0890AB10;
    case 612u: goto L_0890AB34;
    case 613u: goto L_0890AB54;
    case 614u: goto L_0890AB6C;
    case 615u: goto L_0890AB80;
    case 616u: goto L_0890AB94;
    case 617u: goto L_0890ABBC;
    case 618u: goto L_0890ABEC;
    case 619u: goto L_0890AC0C;
    case 620u: goto L_0890AC14;
    case 621u: goto L_0890AC24;
    case 622u: goto L_0890AC4C;
    case 623u: goto L_0890AC68;
    case 624u: goto L_0890ACAC;
    case 625u: goto L_0890ACDC;
    case 626u: goto L_0890ACE4;
    case 627u: goto L_0890AD08;
    case 628u: goto L_0890AD18;
    case 629u: goto L_0890AD20;
    case 630u: goto L_0890AD2C;
    case 631u: goto L_0890AD3C;
    case 632u: goto L_0890AD44;
    case 633u: goto L_0890AD50;
    case 634u: goto L_0890AD54;
    case 635u: goto L_0890AD60;
    case 636u: goto L_0890AD8C;
    case 637u: goto L_0890ADA8;
    case 638u: goto L_0890ADC4;
    case 639u: goto L_0890ADCC;
    case 640u: goto L_0890ADD4;
    case 641u: goto L_0890ADDC;
    case 642u: goto L_0890ADE4;
    case 643u: goto L_0890ADEC;
    case 644u: goto L_0890ADF4;
    case 645u: goto L_0890ADFC;
    case 646u: goto L_0890AE04;
    case 647u: goto L_0890AE0C;
    case 648u: goto L_0890AE14;
    case 649u: goto L_0890AE1C;
    case 650u: goto L_0890AE24;
    case 651u: goto L_0890AE2C;
    case 652u: goto L_0890AE34;
    case 653u: goto L_0890AE3C;
    case 654u: goto L_0890AE4C;
    case 655u: goto L_0890AE5C;
    case 656u: goto L_0890AE6C;
    case 657u: goto L_0890AE88;
    case 658u: goto L_0890AEA4;
    case 659u: goto L_0890AEA8;
    case 660u: goto L_0890AEAC;
    case 661u: goto L_0890AEB0;
    case 662u: goto L_0890AEB4;
    case 663u: goto L_0890AEB8;
    case 664u: goto L_0890AEBC;
    case 665u: goto L_0890AEC0;
    case 666u: goto L_0890AEC4;
    case 667u: goto L_0890AEC8;
    case 668u: goto L_0890AECC;
    case 669u: goto L_0890AED0;
    case 670u: goto L_0890AED4;
    case 671u: goto L_0890AED8;
    case 672u: goto L_0890AEDC;
    case 673u: goto L_0890AEE0;
    case 674u: goto L_0890AEEC;
    case 675u: goto L_0890AEFC;
    case 676u: goto L_0890AF0C;
    case 677u: goto L_0890AF34;
    case 678u: goto L_0890AF48;
    case 679u: goto L_0890AF50;
    case 680u: goto L_0890AF6C;
    case 681u: goto L_0890AF74;
    case 682u: goto L_0890AFA4;
    case 683u: goto L_0890AFAC;
    case 684u: goto L_0890AFB8;
    case 685u: goto L_0890AFC4;
    case 686u: goto L_0890AFD0;
    case 687u: goto L_0890AFDC;
    case 688u: goto L_0890AFE4;
    case 689u: goto L_0890AFF0;
    case 690u: goto L_0890B008;
    case 691u: goto L_0890B00C;
    case 692u: goto L_0890B018;
    case 693u: goto L_0890B034;
    case 694u: goto L_0890B044;
    case 695u: goto L_0890B054;
    case 696u: goto L_0890B060;
    case 697u: goto L_0890B06C;
    case 698u: goto L_0890B07C;
    case 699u: goto L_0890B088;
    case 700u: goto L_0890B090;
    case 701u: goto L_0890B09C;
    case 702u: goto L_0890B0A4;
    case 703u: goto L_0890B0B8;
    case 704u: goto L_0890B0C0;
    case 705u: goto L_0890B0E8;
    case 706u: goto L_0890B10C;
    case 707u: goto L_0890B128;
    case 708u: goto L_0890B134;
    case 709u: goto L_0890B15C;
    case 710u: goto L_0890B17C;
    case 711u: goto L_0890B184;
    case 712u: goto L_0890B19C;
    case 713u: goto L_0890B1B4;
    case 714u: goto L_0890B1BC;
    case 715u: goto L_0890B1D0;
    case 716u: goto L_0890B1E8;
    case 717u: goto L_0890B1F0;
    case 718u: goto L_0890B200;
    case 719u: goto L_0890B204;
    case 720u: goto L_0890B220;
    case 721u: goto L_0890B23C;
    case 722u: goto L_0890B24C;
    case 723u: goto L_0890B254;
    case 724u: goto L_0890B268;
    case 725u: goto L_0890B274;
    case 726u: goto L_0890B280;
    case 727u: goto L_0890B290;
    case 728u: goto L_0890B29C;
    case 729u: goto L_0890B2A4;
    case 730u: goto L_0890B2B0;
    case 731u: goto L_0890B2B8;
    case 732u: goto L_0890B2CC;
    case 733u: goto L_0890B2D0;
    case 734u: goto L_0890B2E8;
    case 735u: goto L_0890B300;
    case 736u: goto L_0890B314;
    case 737u: goto L_0890B320;
    case 738u: goto L_0890B338;
    case 739u: goto L_0890B350;
    case 740u: goto L_0890B374;
    case 741u: goto L_0890B38C;
    case 742u: goto L_0890B3B0;
    case 743u: goto L_0890B3C0;
    case 744u: goto L_0890B3D0;
    case 745u: goto L_0890B3DC;
    case 746u: goto L_0890B3FC;
    case 747u: goto L_0890B40C;
    case 748u: goto L_0890B418;
    case 749u: goto L_0890B424;
    case 750u: goto L_0890B430;
    case 751u: goto L_0890B458;
    case 752u: goto L_0890B464;
    case 753u: goto L_0890B47C;
    case 754u: goto L_0890B490;
    case 755u: goto L_0890B4B0;
    case 756u: goto L_0890B4BC;
    case 757u: goto L_0890B4CC;
    case 758u: goto L_0890B4DC;
    case 759u: goto L_0890B4EC;
    case 760u: goto L_0890B4FC;
    case 761u: goto L_0890B508;
    case 762u: goto L_0890B518;
    case 763u: goto L_0890B524;
    case 764u: goto L_0890B530;
    case 765u: goto L_0890B53C;
    case 766u: goto L_0890B54C;
    case 767u: goto L_0890B55C;
    case 768u: goto L_0890B56C;
    case 769u: goto L_0890B580;
    case 770u: goto L_0890B59C;
    case 771u: goto L_0890B5AC;
    case 772u: goto L_0890B5C8;
    case 773u: goto L_0890B5D4;
    case 774u: goto L_0890B5D8;
    case 775u: goto L_0890B5E0;
    case 776u: goto L_0890B5EC;
    case 777u: goto L_0890B5F4;
    case 778u: goto L_0890B614;
    case 779u: goto L_0890B620;
    case 780u: goto L_0890B62C;
    case 781u: goto L_0890B63C;
    case 782u: goto L_0890B648;
    case 783u: goto L_0890B654;
    case 784u: goto L_0890B660;
    case 785u: goto L_0890B66C;
    case 786u: goto L_0890B678;
    case 787u: goto L_0890B688;
    case 788u: goto L_0890B694;
    case 789u: goto L_0890B6A0;
    case 790u: goto L_0890B6AC;
    case 791u: goto L_0890B6B0;
    case 792u: goto L_0890B6BC;
    case 793u: goto L_0890B6C0;
    case 794u: goto L_0890B6D0;
    case 795u: goto L_0890B6D8;
    case 796u: goto L_0890B6EC;
    case 797u: goto L_0890B6F8;
    case 798u: goto L_0890B704;
    case 799u: goto L_0890B714;
    case 800u: goto L_0890B720;
    case 801u: goto L_0890B724;
    case 802u: goto L_0890B72C;
    case 803u: goto L_0890B75C;
    case 804u: goto L_0890B760;
    case 805u: goto L_0890B774;
    case 806u: goto L_0890B794;
    case 807u: goto L_0890B7A8;
    case 808u: goto L_0890B7B4;
    case 809u: goto L_0890B7C8;
    case 810u: goto L_0890B7D4;
    case 811u: goto L_0890B7E0;
    case 812u: goto L_0890B808;
    case 813u: goto L_0890B82C;
    case 814u: goto L_0890B854;
    case 815u: goto L_0890B860;
    case 816u: goto L_0890B868;
    case 817u: goto L_0890B880;
    case 818u: goto L_0890B898;
    case 819u: goto L_0890B8BC;
    case 820u: goto L_0890B8C8;
    case 821u: goto L_0890B8D8;
    case 822u: goto L_0890B8E4;
    case 823u: goto L_0890B900;
    case 824u: goto L_0890B90C;
    case 825u: goto L_0890B928;
    case 826u: goto L_0890B930;
    case 827u: goto L_0890B93C;
    case 828u: goto L_0890B948;
    case 829u: goto L_0890B950;
    case 830u: goto L_0890B960;
    case 831u: goto L_0890B96C;
    case 832u: goto L_0890B978;
    case 833u: goto L_0890B984;
    case 834u: goto L_0890B988;
    case 835u: goto L_0890B990;
    case 836u: goto L_0890B99C;
    case 837u: goto L_0890B9AC;
    case 838u: goto L_0890B9B0;
    case 839u: goto L_0890B9C0;
    case 840u: goto L_0890B9CC;
    case 841u: goto L_0890B9E8;
    case 842u: goto L_0890B9F8;
    case 843u: goto L_0890BA00;
    case 844u: goto L_0890BA0C;
    case 845u: goto L_0890BA18;
    case 846u: goto L_0890BA20;
    case 847u: goto L_0890BA30;
    case 848u: goto L_0890BA3C;
    case 849u: goto L_0890BA48;
    case 850u: goto L_0890BA54;
    case 851u: goto L_0890BA58;
    case 852u: goto L_0890BA60;
    case 853u: goto L_0890BA74;
    case 854u: goto L_0890BA7C;
    case 855u: goto L_0890BA84;
    case 856u: goto L_0890BA94;
    case 857u: goto L_0890BA98;
    case 858u: goto L_0890BAAC;
    case 859u: goto L_0890BAB8;
    case 860u: goto L_0890BAC4;
    case 861u: goto L_0890BAC8;
    case 862u: goto L_0890BAE0;
    case 863u: goto L_0890BAF0;
    case 864u: goto L_0890BAFC;
    case 865u: goto L_0890BB00;
    case 866u: goto L_0890BB08;
    case 867u: goto L_0890BB10;
    case 868u: goto L_0890BB18;
    case 869u: goto L_0890BB20;
    case 870u: goto L_0890BB28;
    case 871u: goto L_0890BB34;
    case 872u: goto L_0890BB44;
    case 873u: goto L_0890BB48;
    case 874u: goto L_0890BB50;
    case 875u: goto L_0890BB8C;
    case 876u: goto L_0890BB94;
    case 877u: goto L_0890BB9C;
    case 878u: goto L_0890BBB0;
    case 879u: goto L_0890BBD0;
    case 880u: goto L_0890BBDC;
    case 881u: goto L_0890BBE4;
    case 882u: goto L_0890BBF0;
    case 883u: goto L_0890BBFC;
    case 884u: goto L_0890BC0C;
    case 885u: goto L_0890BC10;
    case 886u: goto L_0890BC20;
    case 887u: goto L_0890BC38;
    case 888u: goto L_0890BC44;
    case 889u: goto L_0890BC48;
    case 890u: goto L_0890BC6C;
    case 891u: goto L_0890BC94;
    case 892u: goto L_0890BC9C;
    case 893u: goto L_0890BCA8;
    case 894u: goto L_0890BCB4;
    case 895u: goto L_0890BCC0;
    case 896u: goto L_0890BCD0;
    case 897u: goto L_0890BCE4;
    case 898u: goto L_0890BCF4;
    case 899u: goto L_0890BD00;
    case 900u: goto L_0890BD10;
    case 901u: goto L_0890BD1C;
    case 902u: goto L_0890BD2C;
    case 903u: goto L_0890BD44;
    case 904u: goto L_0890BD5C;
    case 905u: goto L_0890BD68;
    case 906u: goto L_0890BD88;
    case 907u: goto L_0890BD98;
    case 908u: goto L_0890BDA0;
    case 909u: goto L_0890BDB8;
    case 910u: goto L_0890BDC0;
    case 911u: goto L_0890BDD0;
    case 912u: goto L_0890BDD4;
    case 913u: goto L_0890BDE8;
    case 914u: goto L_0890BDF4;
    case 915u: goto L_0890BE00;
    case 916u: goto L_0890BE08;
    case 917u: goto L_0890BE14;
    case 918u: goto L_0890BE24;
    case 919u: goto L_0890BE44;
    case 920u: goto L_0890BE60;
    case 921u: goto L_0890BE70;
    case 922u: goto L_0890BE80;
    case 923u: goto L_0890BE8C;
    case 924u: goto L_0890BE94;
    case 925u: goto L_0890BEA4;
    case 926u: goto L_0890BEBC;
    case 927u: goto L_0890BECC;
    case 928u: goto L_0890BED8;
    case 929u: goto L_0890BEE8;
    case 930u: goto L_0890BEF0;
    case 931u: goto L_0890BEFC;
    case 932u: goto L_0890BF00;
    case 933u: goto L_0890BF10;
    case 934u: goto L_0890BF6C;
    case 935u: goto L_0890BFA4;
    case 936u: goto L_0890BFD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08908000:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908084;
      }
      goto L_08908018;
    }
L_08908018:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08908024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08908024u) goto L_08908024;
    return;
L_08908024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908084;
      }
      goto L_0890802C;
    }
L_0890802C:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908048;
      }
      goto L_08908038;
    }
L_08908038:
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08908048;
L_08908048:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908074;
      }
      goto L_08908050;
    }
L_08908050:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908074;
      }
      goto L_08908068;
    }
L_08908068:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08908074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08908074u) goto L_08908074;
    return;
L_08908074:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08908078;
L_08908078:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 912u, 0x08907F6Cu>(ctx, &aot_mem); return;
      }
      goto L_08908084;
    }
L_08908084:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08908088;
L_08908088:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 911u, 0x08907F44u>(ctx, &aot_mem); return;
      }
      goto L_08908094;
    }
L_08908094:
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
L_089080CC:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08908128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08908128u) goto L_08908128;
    return;
L_08908128:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08908140u);
    // nop
    goto L_08908CEC;
L_08908140:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890827C;
      }
      goto L_0890814C;
    }
L_0890814C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08908158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08908158u) goto L_08908158;
    return;
L_08908158:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0890817Cu);
    // nop
    goto L_08908CEC;
L_0890817C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089081EC;
      }
      goto L_08908188;
    }
L_08908188:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089081A0u);
    // nop
    goto L_08908C10;
L_089081A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089081EC;
      }
      goto L_089081A8;
    }
L_089081A8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089081B8u);
    // nop
    goto L_08908C04;
L_089081B8:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x089081C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x089081C8u) goto L_089081C8;
    return;
L_089081C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089081D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x089081D8u) goto L_089081D8;
    return;
L_089081D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_089081EC;
L_089081EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08908204u);
    // nop
    goto L_0890896C;
L_08908204:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08908218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 841u, 0x089875B8u>(ctx, &aot_mem) && ctx.pc == 0x08908218u) goto L_08908218;
    return;
L_08908218:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08908250;
      }
      goto L_08908228;
    }
L_08908228:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08908914;
      }
      goto L_08908250;
    }
L_08908250:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890825Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 659u, 0x089034ECu>(ctx, &aot_mem) && ctx.pc == 0x0890825Cu) goto L_0890825C;
    return;
L_0890825C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08908274u);
    // nop
    goto L_0890894C;
L_08908274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908914;
      }
      goto L_0890827C;
    }
L_0890827C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27880)));
    ctx.set_gpr(31, 0x0890829Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x0890829Cu) goto L_0890829C;
    return;
L_0890829C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089082BC;
      }
      goto L_089082A4;
    }
L_089082A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089082B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 113u, 0x0895C714u>(ctx, &aot_mem) && ctx.pc == 0x089082B4u) goto L_089082B4;
    return;
L_089082B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908914;
      }
      goto L_089082BC;
    }
L_089082BC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089082CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 910u, 0x08907EF8u>(ctx, &aot_mem) && ctx.pc == 0x089082CCu) goto L_089082CC;
    return;
L_089082CC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890833C;
      }
      goto L_089082D8;
    }
L_089082D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890833C;
      }
      goto L_089082F4;
    }
L_089082F4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0890830Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 101u, 0x0895C63Cu>(ctx, &aot_mem) && ctx.pc == 0x0890830Cu) goto L_0890830C;
    return;
L_0890830C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890833C;
      }
      goto L_08908318;
    }
L_08908318:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890833C;
      }
      goto L_08908324;
    }
L_08908324:
    ctx.set_gpr(31, 0x0890832Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0890832Cu) goto L_0890832C;
    return;
L_0890832C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0890833Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 443u, 0x0891E054u>(ctx, &aot_mem) && ctx.pc == 0x0890833Cu) goto L_0890833C;
    return;
L_0890833C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908370;
      }
      goto L_08908354;
    }
L_08908354:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] >> 6u);
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08908370;
L_08908370:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908354;
      }
      goto L_0890837C;
    }
L_0890837C:
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] >> 11u);
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 15u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089083ACu);
    // nop
    goto L_08908CEC;
L_089083AC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089083C0;
      }
      goto L_089083B8;
    }
L_089083B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_089083C0;
L_089083C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089083E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089083E8u) goto L_089083E8;
    return;
L_089083E8:
    ctx.set_gpr(4, 15u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] | 16960u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08908404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 187u, 0x0881CF34u>(ctx, &aot_mem) && ctx.pc == 0x08908404u) goto L_08908404;
    return;
L_08908404:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890841Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890841Cu) goto L_0890841C;
    return;
L_0890841C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0890843Cu);
    // nop
    goto L_08908CEC;
L_0890843C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089084AC;
      }
      goto L_08908448;
    }
L_08908448:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08908460u);
    // nop
    goto L_08908C10;
L_08908460:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089084AC;
      }
      goto L_08908468;
    }
L_08908468:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08908478u);
    // nop
    goto L_08908C04;
L_08908478:
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08908488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x08908488u) goto L_08908488;
    return;
L_08908488:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08908498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08908498u) goto L_08908498;
    return;
L_08908498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_089084AC;
L_089084AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x089084C4u);
    // nop
    goto L_0890896C;
L_089084C4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089084D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 841u, 0x089875B8u>(ctx, &aot_mem) && ctx.pc == 0x089084D8u) goto L_089084D8;
    return;
L_089084D8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08908510;
      }
      goto L_089084E8;
    }
L_089084E8:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08908534;
      }
      goto L_08908510;
    }
L_08908510:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890851Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 659u, 0x089034ECu>(ctx, &aot_mem) && ctx.pc == 0x0890851Cu) goto L_0890851C;
    return;
L_0890851C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08908534u);
    // nop
    goto L_0890894C;
L_08908534:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0890854Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 660u, 0x0895AC78u>(ctx, &aot_mem) && ctx.pc == 0x0890854Cu) goto L_0890854C;
    return;
L_0890854C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908564;
      }
      goto L_08908558;
    }
L_08908558:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089085B0;
      }
      goto L_08908564;
    }
L_08908564:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890859C;
      }
      goto L_08908574;
    }
L_08908574:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08908580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08908580u) goto L_08908580;
    return;
L_08908580:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908594;
      }
      goto L_08908588;
    }
L_08908588:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08908594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08908594u) goto L_08908594;
    return;
L_08908594:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0890859C;
L_0890859C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089085B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089085B0u) goto L_089085B0;
    return;
L_089085B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x089085C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 899u, 0x08907E30u>(ctx, &aot_mem) && ctx.pc == 0x089085C4u) goto L_089085C4;
    return;
L_089085C4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089085F4;
      }
      goto L_089085D8;
    }
L_089085D8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089085F4;
      }
      goto L_089085F0;
    }
L_089085F0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089085F4;
L_089085F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908620;
      }
      goto L_089085FC;
    }
L_089085FC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908620;
      }
      goto L_08908614;
    }
L_08908614:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08908620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08908620u) goto L_08908620;
    return;
L_08908620:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908910;
      }
      goto L_08908628;
    }
L_08908628:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890865C;
      }
      goto L_08908640;
    }
L_08908640:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27864)));
    ctx.set_gpr(31, 0x0890865Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x0890865Cu) goto L_0890865C;
    return;
L_0890865C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908690;
      }
      goto L_08908684;
    }
L_08908684:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08908690;
L_08908690:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089086A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 113u, 0x0895C714u>(ctx, &aot_mem) && ctx.pc == 0x089086A4u) goto L_089086A4;
    return;
L_089086A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089086B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089086B8u) goto L_089086B8;
    return;
L_089086B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908700;
      }
      goto L_089086D8;
    }
L_089086D8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089086E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089086E4u) goto L_089086E4;
    return;
L_089086E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089086F8;
      }
      goto L_089086EC;
    }
L_089086EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089086F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089086F8u) goto L_089086F8;
    return;
L_089086F8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08908700;
L_08908700:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08908714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08908714u) goto L_08908714;
    return;
L_08908714:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890873C;
      }
      goto L_08908728;
    }
L_08908728:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08908734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08908734u) goto L_08908734;
    return;
L_08908734:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0890873C;
L_0890873C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908754;
      }
      goto L_08908744;
    }
L_08908744:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08908754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08908754u) goto L_08908754;
    return;
L_08908754:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0890876Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0890876Cu) goto L_0890876C;
    return;
L_0890876C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089087B4;
      }
      goto L_0890878C;
    }
L_0890878C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08908798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08908798u) goto L_08908798;
    return;
L_08908798:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089087AC;
      }
      goto L_089087A0;
    }
L_089087A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089087ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089087ACu) goto L_089087AC;
    return;
L_089087AC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089087B4;
L_089087B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089087C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089087C8u) goto L_089087C8;
    return;
L_089087C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089087F0;
      }
      goto L_089087DC;
    }
L_089087DC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089087E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089087E8u) goto L_089087E8;
    return;
L_089087E8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089087F0;
L_089087F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908808;
      }
      goto L_089087F8;
    }
L_089087F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08908808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08908808u) goto L_08908808;
    return;
L_08908808:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908858;
      }
      goto L_08908830;
    }
L_08908830:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890883Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0890883Cu) goto L_0890883C;
    return;
L_0890883C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908850;
      }
      goto L_08908844;
    }
L_08908844:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08908850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08908850u) goto L_08908850;
    return;
L_08908850:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08908858;
L_08908858:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890886Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0890886Cu) goto L_0890886C;
    return;
L_0890886C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908894;
      }
      goto L_08908880;
    }
L_08908880:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0890888Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0890888Cu) goto L_0890888C;
    return;
L_0890888C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08908894;
L_08908894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089088AC;
      }
      goto L_0890889C;
    }
L_0890889C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089088ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089088ACu) goto L_089088AC;
    return;
L_089088AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089088C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089088C8u) goto L_089088C8;
    return;
L_089088C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089088F0;
      }
      goto L_089088DC;
    }
L_089088DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x089088E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089088E8u) goto L_089088E8;
    return;
L_089088E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089088F4;
      }
      goto L_089088F0;
    }
L_089088F0:
    ctx.set_gpr(30, 0u + 0u);
    goto L_089088F4;
L_089088F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908914;
      }
      goto L_08908900;
    }
L_08908900:
    ctx.set_gpr(31, 0x08908908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08908908u) goto L_08908908;
    return;
L_08908908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908914;
      }
      goto L_08908910;
    }
L_08908910:
    ctx.set_gpr(30, 0u + 0u);
    goto L_08908914;
L_08908914:
    ctx.set_gpr(2, ctx.gpr[30] + 0u);
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
L_0890894C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0890895Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x0890895Cu) goto L_0890895C;
    return;
L_0890895C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890896C:
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
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
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
          goto L_08908A40;
      }
      goto L_089089C8;
    }
L_089089C8:
    ctx.set_gpr(31, 0x089089D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089089D0u) goto L_089089D0;
    return;
L_089089D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089089DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 472u, 0x088D58ACu>(ctx, &aot_mem) && ctx.pc == 0x089089DCu) goto L_089089DC;
    return;
L_089089DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089089F8;
      }
      goto L_089089F0;
    }
L_089089F0:
    ctx.set_gpr(31, 0x089089F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x089089F8u) goto L_089089F8;
    return;
L_089089F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908A14;
      }
      goto L_08908A0C;
    }
L_08908A0C:
    ctx.set_gpr(31, 0x08908A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08908A14u) goto L_08908A14;
    return;
L_08908A14:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08908A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x08908A28u) goto L_08908A28;
    return;
L_08908A28:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908A40;
      }
      goto L_08908A34;
    }
L_08908A34:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08908A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08908A40u) goto L_08908A40;
    return;
L_08908A40:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908AC4;
      }
      goto L_08908A54;
    }
L_08908A54:
    ctx.set_gpr(19, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08908AC0;
      }
      goto L_08908A7C;
    }
L_08908A7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908AAC;
      }
      goto L_08908AA4;
    }
L_08908AA4:
    ctx.set_gpr(31, 0x08908AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08908AACu) goto L_08908AAC;
    return;
L_08908AAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908BDC;
      }
      goto L_08908AC0;
    }
L_08908AC0:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08908AC4;
L_08908AC4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908A54;
      }
      goto L_08908AD0;
    }
L_08908AD0:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08908BDC;
      }
      goto L_08908AD8;
    }
L_08908AD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08908B20;
      }
      goto L_08908AF4;
    }
L_08908AF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908B10;
      }
      goto L_08908B04;
    }
L_08908B04:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908B20;
      }
      goto L_08908B10;
    }
L_08908B10:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08908B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08908B20u) goto L_08908B20;
    return;
L_08908B20:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08908B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08908B48u) goto L_08908B48;
    return;
L_08908B48:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908B78;
      }
      goto L_08908B64;
    }
L_08908B64:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08908B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08908B70u) goto L_08908B70;
    return;
L_08908B70:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08908B78;
L_08908B78:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908B98;
      }
      goto L_08908B80;
    }
L_08908B80:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08908B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08908B8Cu) goto L_08908B8C;
    return;
L_08908B8C:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08908B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08908B98u) goto L_08908B98;
    return;
L_08908B98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908BBC;
      }
      goto L_08908BA8;
    }
L_08908BA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08908BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08908BB4u) goto L_08908BB4;
    return;
L_08908BB4:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08908BBC;
L_08908BBC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908BD4;
      }
      goto L_08908BC4;
    }
L_08908BC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08908BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08908BD4u) goto L_08908BD4;
    return;
L_08908BD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08908BDC;
L_08908BDC:
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
L_08908C04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908C10:
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908C80;
      }
      goto L_08908C24;
    }
L_08908C24:
    ctx.set_gpr(2, ctx.gpr[10] + ctx.gpr[9]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908C60;
      }
      goto L_08908C54;
    }
L_08908C54:
    ctx.set_gpr(10, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908C80;
      }
      goto L_08908C60;
    }
L_08908C60:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908C78;
      }
      goto L_08908C6C;
    }
L_08908C6C:
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908C80;
      }
      goto L_08908C78;
    }
L_08908C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908CE4;
      }
      goto L_08908C80;
    }
L_08908C80:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908C24;
      }
      goto L_08908C8C;
    }
L_08908C8C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908CA0;
      }
      goto L_08908C94;
    }
L_08908C94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908CE4;
      }
      goto L_08908CA0;
    }
L_08908CA0:
    ctx.set_gpr(3, ctx.gpr[10] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908CD4;
      }
      goto L_08908CC8;
    }
L_08908CC8:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908CE0;
      }
      goto L_08908CD4;
    }
L_08908CD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908CE4;
      }
      goto L_08908CE0;
    }
L_08908CE0:
    ctx.set_gpr(2, ctx.gpr[10] + 0u);
    goto L_08908CE4;
L_08908CE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908CEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908D1C;
      }
      goto L_08908D10;
    }
L_08908D10:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908D88;
      }
      goto L_08908D1C;
    }
L_08908D1C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908D78;
      }
      goto L_08908D30;
    }
L_08908D30:
    ctx.set_gpr(6, ctx.gpr[11] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08908D74;
      }
      goto L_08908D58;
    }
L_08908D58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908D88;
      }
      goto L_08908D74;
    }
L_08908D74:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_08908D78;
L_08908D78:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908D30;
      }
      goto L_08908D84;
    }
L_08908D84:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08908D88;
L_08908D88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908D90:
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
    ctx.set_gpr(31, 0x08908DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x08908DC4u) goto L_08908DC4;
    return;
L_08908DC4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08908DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 910u, 0x08907EF8u>(ctx, &aot_mem) && ctx.pc == 0x08908DD8u) goto L_08908DD8;
    return;
L_08908DD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908E00;
      }
      goto L_08908DE0;
    }
L_08908DE0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908EAC;
      }
      goto L_08908DEC;
    }
L_08908DEC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08908DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 443u, 0x0891E054u>(ctx, &aot_mem) && ctx.pc == 0x08908DF8u) goto L_08908DF8;
    return;
L_08908DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908EAC;
      }
      goto L_08908E00;
    }
L_08908E00:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08908E18u);
    // nop
    goto L_0890990C;
L_08908E18:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08908E2Cu);
    // nop
    goto L_08908C10;
L_08908E2C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08908EAC;
      }
      goto L_08908E38;
    }
L_08908E38:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08908E44u);
    // nop
    goto L_08908C04;
L_08908E44:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908E70;
      }
      goto L_08908E5C;
    }
L_08908E5C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08908E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08908E68u) goto L_08908E68;
    return;
L_08908E68:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08908E70;
L_08908E70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908E88;
      }
      goto L_08908E78;
    }
L_08908E78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08908E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08908E88u) goto L_08908E88;
    return;
L_08908E88:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08908E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08908E98u) goto L_08908E98;
    return;
L_08908E98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_08908EAC;
L_08908EAC:
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
L_08908ED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27880)));
    ctx.set_gpr(31, 0x08908F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 359u, 0x089499ACu>(ctx, &aot_mem) && ctx.pc == 0x08908F14u) goto L_08908F14;
    return;
L_08908F14:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908F50;
      }
      goto L_08908F20;
    }
L_08908F20:
    ctx.set_gpr(31, 0x08908F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x08908F28u) goto L_08908F28;
    return;
L_08908F28:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908F40;
      }
      goto L_08908F34;
    }
L_08908F34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08908F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 443u, 0x0891E054u>(ctx, &aot_mem) && ctx.pc == 0x08908F40u) goto L_08908F40;
    return;
L_08908F40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909008;
      }
      goto L_08908F50;
    }
L_08908F50:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08908F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08908F64u) goto L_08908F64;
    return;
L_08908F64:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08908F7Cu);
    // nop
    goto L_08908CEC;
L_08908F7C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909008;
      }
      goto L_08908F88;
    }
L_08908F88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08908F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 355u, 0x08949938u>(ctx, &aot_mem) && ctx.pc == 0x08908F98u) goto L_08908F98;
    return;
L_08908F98:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08908FD8;
      }
      goto L_08908FB0;
    }
L_08908FB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908FCC;
      }
      goto L_08908FC0;
    }
L_08908FC0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908FD8;
      }
      goto L_08908FCC;
    }
L_08908FCC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08908FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08908FD8u) goto L_08908FD8;
    return;
L_08908FD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909008;
      }
      goto L_08908FE8;
    }
L_08908FE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08909008;
      }
      goto L_08908FF0;
    }
L_08908FF0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909008;
      }
      goto L_08908FFC;
    }
L_08908FFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08909008;
L_08909008:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_0890902C:
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
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890907Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890907Cu) goto L_0890907C;
    return;
L_0890907C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.set_gpr(1, ctx.gpr[17] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089093A4;
      }
      goto L_08909090;
    }
L_08909090:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(31876));
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089090AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089093A4;
      }
      goto L_089090B8;
    }
L_089090B8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089090C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089090C8u) goto L_089090C8;
    return;
L_089090C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089090E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089090E4u) goto L_089090E4;
    return;
L_089090E4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089093A4;
      }
      goto L_089090F0;
    }
L_089090F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089092E0;
      }
      goto L_0890910C;
    }
L_0890910C:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890914C;
      }
      goto L_08909130;
    }
L_08909130:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890914C;
      }
      goto L_08909148;
    }
L_08909148:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890914C;
L_0890914C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909160;
      }
      goto L_08909154;
    }
L_08909154:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08909160;
L_08909160:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0890916Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890916Cu) goto L_0890916C;
    return;
L_0890916C:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0890918Cu);
    // nop
    goto L_08908CEC;
L_0890918C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089091FC;
      }
      goto L_08909198;
    }
L_08909198:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089091B0u);
    // nop
    goto L_08908C10;
L_089091B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089091FC;
      }
      goto L_089091B8;
    }
L_089091B8:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089091C8u);
    // nop
    goto L_08908C04;
L_089091C8:
    ctx.set_gpr(3, ctx.gpr[30] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x089091D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x089091D8u) goto L_089091D8;
    return;
L_089091D8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x089091E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x089091E8u) goto L_089091E8;
    return;
L_089091E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_089091FC;
L_089091FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08909214u);
    // nop
    goto L_0890896C;
L_08909214:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08909228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 841u, 0x089875B8u>(ctx, &aot_mem) && ctx.pc == 0x08909228u) goto L_08909228;
    return;
L_08909228:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08909260;
      }
      goto L_08909238;
    }
L_08909238:
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08909284;
      }
      goto L_08909260;
    }
L_08909260:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0890926Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 659u, 0x089034ECu>(ctx, &aot_mem) && ctx.pc == 0x0890926Cu) goto L_0890926C;
    return;
L_0890926C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08909284u);
    // nop
    goto L_0890894C;
L_08909284:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089092B0;
      }
      goto L_08909294;
    }
L_08909294:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089092B0;
      }
      goto L_089092AC;
    }
L_089092AC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089092B0;
L_089092B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089092DC;
      }
      goto L_089092B8;
    }
L_089092B8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089092DC;
      }
      goto L_089092D0;
    }
L_089092D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089092DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089092DCu) goto L_089092DC;
    return;
L_089092DC:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089092E0;
L_089092E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890910C;
      }
      goto L_089092F0;
    }
L_089092F0:
    ctx.set_gpr(22, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08909304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08909304u) goto L_08909304;
    return;
L_08909304:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890931Cu);
    // nop
    goto L_0890896C;
L_0890931C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08909334u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909334u) goto L_08909334;
    return;
L_08909334:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08909350u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909350u) goto L_08909350;
    return;
L_08909350:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08909360u);
    // nop
    goto L_08909E3C;
L_08909360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089093A4;
      }
      goto L_08909368;
    }
L_08909368:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08909378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 460u, 0x0895DE48u>(ctx, &aot_mem) && ctx.pc == 0x08909378u) goto L_08909378;
    return;
L_08909378:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08909394u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909394u) goto L_08909394;
    return;
L_08909394:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089093A4u);
    // nop
    goto L_08909E3C;
L_089093A4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_089093DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909808;
      }
      goto L_08909410;
    }
L_08909410:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909804;
      }
      goto L_08909434;
    }
L_08909434:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(31908));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909450:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08909468u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909468u) goto L_08909468;
    return;
L_08909468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909804;
      }
      goto L_08909470;
    }
L_08909470:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08909488u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909488u) goto L_08909488;
    return;
L_08909488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909804;
      }
      goto L_08909490;
    }
L_08909490:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909804;
      }
      goto L_089094A0;
    }
L_089094A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08909778;
      }
      goto L_089094B0;
    }
L_089094B0:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089094E4;
      }
      goto L_089094C8;
    }
L_089094C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28028)));
    ctx.set_gpr(31, 0x089094E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x089094E4u) goto L_089094E4;
    return;
L_089094E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909518;
      }
      goto L_0890950C;
    }
L_0890950C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08909518;
L_08909518:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(19, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909560;
      }
      goto L_08909538;
    }
L_08909538:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08909544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08909544u) goto L_08909544;
    return;
L_08909544:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909558;
      }
      goto L_0890954C;
    }
L_0890954C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08909558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08909558u) goto L_08909558;
    return;
L_08909558:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08909560;
L_08909560:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08909574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08909574u) goto L_08909574;
    return;
L_08909574:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890959C;
      }
      goto L_08909588;
    }
L_08909588:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08909594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08909594u) goto L_08909594;
    return;
L_08909594:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0890959C;
L_0890959C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089095B4;
      }
      goto L_089095A4;
    }
L_089095A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089095B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089095B4u) goto L_089095B4;
    return;
L_089095B4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089095CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089095CCu) goto L_089095CC;
    return;
L_089095CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(19, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909614;
      }
      goto L_089095EC;
    }
L_089095EC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089095F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089095F8u) goto L_089095F8;
    return;
L_089095F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890960C;
      }
      goto L_08909600;
    }
L_08909600:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890960Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0890960Cu) goto L_0890960C;
    return;
L_0890960C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08909614;
L_08909614:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08909628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08909628u) goto L_08909628;
    return;
L_08909628:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909650;
      }
      goto L_0890963C;
    }
L_0890963C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08909648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08909648u) goto L_08909648;
    return;
L_08909648:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08909650;
L_08909650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909668;
      }
      goto L_08909658;
    }
L_08909658:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08909668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08909668u) goto L_08909668;
    return;
L_08909668:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(19, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890968C;
      }
      goto L_08909680;
    }
L_08909680:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089096D8;
      }
      goto L_0890968C;
    }
L_0890968C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089096C4;
      }
      goto L_0890969C;
    }
L_0890969C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089096A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089096A8u) goto L_089096A8;
    return;
L_089096A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089096BC;
      }
      goto L_089096B0;
    }
L_089096B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089096BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089096BCu) goto L_089096BC;
    return;
L_089096BC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089096C4;
L_089096C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089096D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089096D8u) goto L_089096D8;
    return;
L_089096D8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089096E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x089096E8u) goto L_089096E8;
    return;
L_089096E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890971C;
      }
      goto L_08909700;
    }
L_08909700:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890971C;
      }
      goto L_08909718;
    }
L_08909718:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890971C;
L_0890971C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909748;
      }
      goto L_08909724;
    }
L_08909724:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909748;
      }
      goto L_0890973C;
    }
L_0890973C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08909748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08909748u) goto L_08909748;
    return;
L_08909748:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890975Cu);
    // nop
    goto L_0890902C;
L_0890975C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909804;
      }
      goto L_08909768;
    }
L_08909768:
    ctx.set_gpr(31, 0x08909770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08909770u) goto L_08909770;
    return;
L_08909770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909804;
      }
      goto L_08909778;
    }
L_08909778:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08909804;
      }
      goto L_08909784;
    }
L_08909784:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08909794u);
    // nop
    goto L_08909E3C;
L_08909794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909804;
      }
      goto L_0890979C;
    }
L_0890979C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089097B0u);
    // nop
    goto L_0890902C;
L_089097B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909804;
      }
      goto L_089097B8;
    }
L_089097B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089097DC;
      }
      goto L_089097C4;
    }
L_089097C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089097DC;
      }
      goto L_089097D0;
    }
L_089097D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08909804;
      }
      goto L_089097DC;
    }
L_089097DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089097F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089097F4u) goto L_089097F4;
    return;
L_089097F4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08909804u);
    // nop
    goto L_08909E3C;
L_08909804:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08909808;
L_08909808:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08909410;
      }
      goto L_08909810;
    }
L_08909810:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909830;
      }
      goto L_08909828;
    }
L_08909828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909834;
      }
      goto L_08909830;
    }
L_08909830:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    goto L_08909834;
L_08909834:
    ctx.set_gpr(17, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089098E0;
      }
      goto L_08909840;
    }
L_08909840:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08909878u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909878u) goto L_08909878;
    return;
L_08909878:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089098DC;
      }
      goto L_08909884;
    }
L_08909884:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089098A4;
      }
      goto L_0890989C;
    }
L_0890989C:
    ctx.set_gpr(31, 0x089098A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089098A4u) goto L_089098A4;
    return;
L_089098A4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089098B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x089098B4u) goto L_089098B4;
    return;
L_089098B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089098DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 826u, 0x0890FDF0u>(ctx, &aot_mem) && ctx.pc == 0x089098DCu) goto L_089098DC;
    return;
L_089098DC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_089098E0;
L_089098E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08909840;
      }
      goto L_089098E8;
    }
L_089098E8:
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
L_0890990C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08909954u);
    // nop
    goto L_08908CEC;
L_08909954:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909968;
      }
      goto L_08909960;
    }
L_08909960:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    goto L_08909968;
L_08909968:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08909990u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909990u) goto L_08909990;
    return;
L_08909990:
    ctx.set_gpr(4, 15u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] | 16960u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089099ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 187u, 0x0881CF34u>(ctx, &aot_mem) && ctx.pc == 0x089099ACu) goto L_089099AC;
    return;
L_089099AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909B00;
      }
      goto L_089099C0;
    }
L_089099C0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t dividend = ctx.gpr[18]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909E0C;
      }
      goto L_089099E8;
    }
L_089099E8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909AEC;
      }
      goto L_089099FC;
    }
L_089099FC:
    ctx.set_gpr(22, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08909AE8;
      }
      goto L_08909A24;
    }
L_08909A24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909A54;
      }
      goto L_08909A4C;
    }
L_08909A4C:
    ctx.set_gpr(31, 0x08909A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08909A54u) goto L_08909A54;
    return;
L_08909A54:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08909A60u);
    // nop
    goto L_08908C04;
L_08909A60:
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909A88;
      }
      goto L_08909A74;
    }
L_08909A74:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08909A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08909A80u) goto L_08909A80;
    return;
L_08909A80:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08909A88;
L_08909A88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909AA0;
      }
      goto L_08909A90;
    }
L_08909A90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08909AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08909AA0u) goto L_08909AA0;
    return;
L_08909AA0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08909AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08909AB0u) goto L_08909AB0;
    return;
L_08909AB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08909AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08909AD4u) goto L_08909AD4;
    return;
L_08909AD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909E0C;
      }
      goto L_08909AE8;
    }
L_08909AE8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08909AEC;
L_08909AEC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089099FC;
      }
      goto L_08909AF8;
    }
L_08909AF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909E0C;
      }
      goto L_08909B00;
    }
L_08909B00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909E0C;
      }
      goto L_08909B14;
    }
L_08909B14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909B34;
      }
      goto L_08909B28;
    }
L_08909B28:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909B80;
      }
      goto L_08909B34;
    }
L_08909B34:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909B6C;
      }
      goto L_08909B44;
    }
L_08909B44:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08909B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08909B50u) goto L_08909B50;
    return;
L_08909B50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909B64;
      }
      goto L_08909B58;
    }
L_08909B58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08909B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08909B64u) goto L_08909B64;
    return;
L_08909B64:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08909B6C;
L_08909B6C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08909B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08909B80u) goto L_08909B80;
    return;
L_08909B80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909C24;
      }
      goto L_08909B98;
    }
L_08909B98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909BBC;
      }
      goto L_08909BA8;
    }
L_08909BA8:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08909BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08909BB4u) goto L_08909BB4;
    return;
L_08909BB4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08909BBC;
L_08909BBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909BDC;
      }
      goto L_08909BC4;
    }
L_08909BC4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08909BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08909BD0u) goto L_08909BD0;
    return;
L_08909BD0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08909BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 102u, 0x08904690u>(ctx, &aot_mem) && ctx.pc == 0x08909BDCu) goto L_08909BDC;
    return;
L_08909BDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909C00;
      }
      goto L_08909BEC;
    }
L_08909BEC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08909BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08909BF8u) goto L_08909BF8;
    return;
L_08909BF8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08909C00;
L_08909C00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909C18;
      }
      goto L_08909C08;
    }
L_08909C08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08909C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08909C18u) goto L_08909C18;
    return;
L_08909C18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    goto L_08909C24;
L_08909C24:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08909C3Cu);
    // nop
    goto L_08908CEC;
L_08909C3C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909C50;
      }
      goto L_08909C48;
    }
L_08909C48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_08909C50;
L_08909C50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08909C78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909C78u) goto L_08909C78;
    return;
L_08909C78:
    ctx.set_gpr(4, 15u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] | 16960u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08909C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 187u, 0x0881CF34u>(ctx, &aot_mem) && ctx.pc == 0x08909C94u) goto L_08909C94;
    return;
L_08909C94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08909CBCu);
    // nop
    goto L_08908CEC;
L_08909CBC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909D2C;
      }
      goto L_08909CC8;
    }
L_08909CC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08909CE0u);
    // nop
    goto L_08908C10;
L_08909CE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08909D2C;
      }
      goto L_08909CE8;
    }
L_08909CE8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08909CF8u);
    // nop
    goto L_08908C04;
L_08909CF8:
    ctx.set_gpr(3, ctx.gpr[22] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08909D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x08909D08u) goto L_08909D08;
    return;
L_08909D08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08909D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08909D18u) goto L_08909D18;
    return;
L_08909D18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_08909D2C;
L_08909D2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08909D44u);
    // nop
    goto L_0890896C;
L_08909D44:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08909D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 841u, 0x089875B8u>(ctx, &aot_mem) && ctx.pc == 0x08909D58u) goto L_08909D58;
    return;
L_08909D58:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08909D90;
      }
      goto L_08909D68;
    }
L_08909D68:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08909DB4;
      }
      goto L_08909D90;
    }
L_08909D90:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08909D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 659u, 0x089034ECu>(ctx, &aot_mem) && ctx.pc == 0x08909D9Cu) goto L_08909D9C;
    return;
L_08909D9C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08909DB4u);
    // nop
    goto L_0890894C;
L_08909DB4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909DE0;
      }
      goto L_08909DC4;
    }
L_08909DC4:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909DE0;
      }
      goto L_08909DDC;
    }
L_08909DDC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08909DE0;
L_08909DE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909E0C;
      }
      goto L_08909DE8;
    }
L_08909DE8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909E0C;
      }
      goto L_08909E00;
    }
L_08909E00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08909E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08909E0Cu) goto L_08909E0C;
    return;
L_08909E0C:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
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
L_08909E3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909E8C;
      }
      goto L_08909E64;
    }
L_08909E64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08909E8C;
      }
      goto L_08909E74;
    }
L_08909E74:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08909E8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909E8Cu) goto L_08909E8C;
    return;
L_08909E8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08909EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 338u, 0x089497CCu>(ctx, &aot_mem) && ctx.pc == 0x08909EA0u) goto L_08909EA0;
    return;
L_08909EA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08909EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 460u, 0x0895DE48u>(ctx, &aot_mem) && ctx.pc == 0x08909EB0u) goto L_08909EB0;
    return;
L_08909EB0:
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
L_08909EC8:
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
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08909F08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08909F08u) goto L_08909F08;
    return;
L_08909F08:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FEC;
      }
      goto L_08909F1C;
    }
L_08909F1C:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909F58;
      }
      goto L_08909F3C;
    }
L_08909F3C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909F58;
      }
      goto L_08909F54;
    }
L_08909F54:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08909F58;
L_08909F58:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909F6C;
      }
      goto L_08909F60;
    }
L_08909F60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08909F6C;
L_08909F6C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08909F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08909F78u) goto L_08909F78;
    return;
L_08909F78:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08909F90u);
    // nop
    goto L_0890990C;
L_08909F90:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FBC;
      }
      goto L_08909FA0;
    }
L_08909FA0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FBC;
      }
      goto L_08909FB8;
    }
L_08909FB8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08909FBC;
L_08909FBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909FE8;
      }
      goto L_08909FC4;
    }
L_08909FC4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909FE8;
      }
      goto L_08909FDC;
    }
L_08909FDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08909FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08909FE8u) goto L_08909FE8;
    return;
L_08909FE8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08909FEC;
L_08909FEC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909F1C;
      }
      goto L_08909FF8;
    }
L_08909FF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[2] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890A060;
      }
      goto L_0890A010;
    }
L_0890A010:
    ctx.set_gpr(17, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0890A024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A024u) goto L_0890A024;
    return;
L_0890A024:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890A038u);
    // nop
    goto L_0890A08C;
L_0890A038:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890A050u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890A050u) goto L_0890A050;
    return;
L_0890A050:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0890A060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 460u, 0x0895DE48u>(ctx, &aot_mem) && ctx.pc == 0x0890A060u) goto L_0890A060;
    return;
L_0890A060:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
L_0890A08C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(6, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A1F4;
      }
      goto L_0890A0D0;
    }
L_0890A0D0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A1E8;
      }
      goto L_0890A0E4;
    }
L_0890A0E4:
    ctx.set_gpr(16, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0890A1E4;
      }
      goto L_0890A10C;
    }
L_0890A10C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A13C;
      }
      goto L_0890A134;
    }
L_0890A134:
    ctx.set_gpr(31, 0x0890A13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0890A13Cu) goto L_0890A13C;
    return;
L_0890A13C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A170;
      }
      goto L_0890A154;
    }
L_0890A154:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A170;
      }
      goto L_0890A16C;
    }
L_0890A16C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890A170;
L_0890A170:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A19C;
      }
      goto L_0890A178;
    }
L_0890A178:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A19C;
      }
      goto L_0890A190;
    }
L_0890A190:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890A19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A19Cu) goto L_0890A19C;
    return;
L_0890A19C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890A1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0890A1ACu) goto L_0890A1AC;
    return;
L_0890A1AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890A1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0890A1D0u) goto L_0890A1D0;
    return;
L_0890A1D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A1F4;
      }
      goto L_0890A1E4;
    }
L_0890A1E4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0890A1E8;
L_0890A1E8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A0E4;
      }
      goto L_0890A1F4;
    }
L_0890A1F4:
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
L_0890A218:
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
    ctx.set_gpr(31, 0x0890A248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0890A248u) goto L_0890A248;
    return;
L_0890A248:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A298;
      }
      goto L_0890A260;
    }
L_0890A260:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A28C;
      }
      goto L_0890A280;
    }
L_0890A280:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890A28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 443u, 0x0891E054u>(ctx, &aot_mem) && ctx.pc == 0x0890A28Cu) goto L_0890A28C;
    return;
L_0890A28C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0890A298;
L_0890A298:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A260;
      }
      goto L_0890A2A4;
    }
L_0890A2A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A388;
      }
      goto L_0890A2B8;
    }
L_0890A2B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A384;
      }
      goto L_0890A2D4;
    }
L_0890A2D4:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A378;
      }
      goto L_0890A2E4;
    }
L_0890A2E4:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890A300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 355u, 0x08949938u>(ctx, &aot_mem) && ctx.pc == 0x0890A300u) goto L_0890A300;
    return;
L_0890A300:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890A340;
      }
      goto L_0890A318;
    }
L_0890A318:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A334;
      }
      goto L_0890A328;
    }
L_0890A328:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A340;
      }
      goto L_0890A334;
    }
L_0890A334:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0890A340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A340u) goto L_0890A340;
    return;
L_0890A340:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A374;
      }
      goto L_0890A350;
    }
L_0890A350:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890A374;
      }
      goto L_0890A358;
    }
L_0890A358:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A374;
      }
      goto L_0890A364;
    }
L_0890A364:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32732)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0890A374;
L_0890A374:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0890A378;
L_0890A378:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2E4;
      }
      goto L_0890A384;
    }
L_0890A384:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0890A388;
L_0890A388:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2B8;
      }
      goto L_0890A394;
    }
L_0890A394:
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
L_0890A3C0:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A3EC;
      }
      goto L_0890A3D8;
    }
L_0890A3D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A3EC;
      }
      goto L_0890A3E8;
    }
L_0890A3E8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0890A3EC;
L_0890A3EC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A408;
      }
      goto L_0890A3F4;
    }
L_0890A3F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A408;
      }
      goto L_0890A404;
    }
L_0890A404:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0890A408;
L_0890A408:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890A410:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A7F4;
      }
      goto L_0890A438;
    }
L_0890A438:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A484;
      }
      goto L_0890A45C;
    }
L_0890A45C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890A468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0890A468u) goto L_0890A468;
    return;
L_0890A468:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A47C;
      }
      goto L_0890A470;
    }
L_0890A470:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890A47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0890A47Cu) goto L_0890A47C;
    return;
L_0890A47C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0890A484;
L_0890A484:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13368));
    ctx.set_gpr(31, 0x0890A49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0890A49Cu) goto L_0890A49C;
    return;
L_0890A49C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A4CC;
      }
      goto L_0890A4B0;
    }
L_0890A4B0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A4CC;
      }
      goto L_0890A4C8;
    }
L_0890A4C8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890A4CC;
L_0890A4CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A4F8;
      }
      goto L_0890A4D4;
    }
L_0890A4D4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A4F8;
      }
      goto L_0890A4EC;
    }
L_0890A4EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890A4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A4F8u) goto L_0890A4F8;
    return;
L_0890A4F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x0890A508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A508u) goto L_0890A508;
    return;
L_0890A508:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A540;
      }
      goto L_0890A524;
    }
L_0890A524:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28028)));
    ctx.set_gpr(31, 0x0890A540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x0890A540u) goto L_0890A540;
    return;
L_0890A540:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A574;
      }
      goto L_0890A568;
    }
L_0890A568:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0890A574;
L_0890A574:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A5B0;
      }
      goto L_0890A588;
    }
L_0890A588:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890A594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0890A594u) goto L_0890A594;
    return;
L_0890A594:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A5A8;
      }
      goto L_0890A59C;
    }
L_0890A59C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890A5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0890A5A8u) goto L_0890A5A8;
    return;
L_0890A5A8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0890A5B0;
L_0890A5B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13368));
    ctx.set_gpr(31, 0x0890A5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0890A5C8u) goto L_0890A5C8;
    return;
L_0890A5C8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A5F0;
      }
      goto L_0890A5DC;
    }
L_0890A5DC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0890A5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A5E8u) goto L_0890A5E8;
    return;
L_0890A5E8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0890A5F0;
L_0890A5F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A608;
      }
      goto L_0890A5F8;
    }
L_0890A5F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0890A608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0890A608u) goto L_0890A608;
    return;
L_0890A608:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890A618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A618u) goto L_0890A618;
    return;
L_0890A618:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890A62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0890A62Cu) goto L_0890A62C;
    return;
L_0890A62C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A668;
      }
      goto L_0890A640;
    }
L_0890A640:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890A64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0890A64Cu) goto L_0890A64C;
    return;
L_0890A64C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A660;
      }
      goto L_0890A654;
    }
L_0890A654:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890A660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0890A660u) goto L_0890A660;
    return;
L_0890A660:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0890A668;
L_0890A668:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13368));
    ctx.set_gpr(31, 0x0890A680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0890A680u) goto L_0890A680;
    return;
L_0890A680:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A6A8;
      }
      goto L_0890A694;
    }
L_0890A694:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890A6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A6A0u) goto L_0890A6A0;
    return;
L_0890A6A0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0890A6A8;
L_0890A6A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A6C0;
      }
      goto L_0890A6B0;
    }
L_0890A6B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0890A6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0890A6C0u) goto L_0890A6C0;
    return;
L_0890A6C0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(17, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A6E8;
      }
      goto L_0890A6DC;
    }
L_0890A6DC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A734;
      }
      goto L_0890A6E8;
    }
L_0890A6E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A720;
      }
      goto L_0890A6F8;
    }
L_0890A6F8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890A704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0890A704u) goto L_0890A704;
    return;
L_0890A704:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A718;
      }
      goto L_0890A70C;
    }
L_0890A70C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890A718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0890A718u) goto L_0890A718;
    return;
L_0890A718:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0890A720;
L_0890A720:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0890A734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0890A734u) goto L_0890A734;
    return;
L_0890A734:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0890A744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A744u) goto L_0890A744;
    return;
L_0890A744:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A778;
      }
      goto L_0890A75C;
    }
L_0890A75C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A778;
      }
      goto L_0890A774;
    }
L_0890A774:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890A778;
L_0890A778:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A7A4;
      }
      goto L_0890A780;
    }
L_0890A780:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A7A4;
      }
      goto L_0890A798;
    }
L_0890A798:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890A7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A7A4u) goto L_0890A7A4;
    return;
L_0890A7A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890A7BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890A7BCu) goto L_0890A7BC;
    return;
L_0890A7BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0890A7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0890A7DCu) goto L_0890A7DC;
    return;
L_0890A7DC:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A7F4;
      }
      goto L_0890A7EC;
    }
L_0890A7EC:
    ctx.set_gpr(31, 0x0890A7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0890A7F4u) goto L_0890A7F4;
    return;
L_0890A7F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_0890A81C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0890A840u);
    // nop
    goto L_0890A218;
L_0890A840:
    ctx.set_gpr(31, 0x0890A848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0890A848u) goto L_0890A848;
    return;
L_0890A848:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890A858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 481u, 0x0891E354u>(ctx, &aot_mem) && ctx.pc == 0x0890A858u) goto L_0890A858;
    return;
L_0890A858:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A894;
      }
      goto L_0890A86C;
    }
L_0890A86C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0890A890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 466u, 0x0891E254u>(ctx, &aot_mem) && ctx.pc == 0x0890A890u) goto L_0890A890;
    return;
L_0890A890:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0890A894;
L_0890A894:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A86C;
      }
      goto L_0890A8A0;
    }
L_0890A8A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A8BC;
      }
      goto L_0890A8A8;
    }
L_0890A8A8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890A8BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890A8BCu) goto L_0890A8BC;
    return;
L_0890A8BC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890A8C8u);
    // nop
    goto L_0890A3C0;
L_0890A8C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A8A8;
      }
      goto L_0890A8D0;
    }
L_0890A8D0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890A8E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890A8E8u) goto L_0890A8E8;
    return;
L_0890A8E8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0890A8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 460u, 0x0895DE48u>(ctx, &aot_mem) && ctx.pc == 0x0890A8F8u) goto L_0890A8F8;
    return;
L_0890A8F8:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0890A908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0890A908u) goto L_0890A908;
    return;
L_0890A908:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
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
L_0890A930:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(376)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890A96Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890A96Cu) goto L_0890A96C;
    return;
L_0890A96C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890A978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0890A978u) goto L_0890A978;
    return;
L_0890A978:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A9D8;
      }
      goto L_0890A988;
    }
L_0890A988:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890A9A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890A9A0u) goto L_0890A9A0;
    return;
L_0890A9A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890A9B8;
      }
      goto L_0890A9AC;
    }
L_0890A9AC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AA2C;
      }
      goto L_0890A9B8;
    }
L_0890A9B8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AA2C;
      }
      goto L_0890A9C4;
    }
L_0890A9C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890A9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 443u, 0x0891E054u>(ctx, &aot_mem) && ctx.pc == 0x0890A9D0u) goto L_0890A9D0;
    return;
L_0890A9D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AA2C;
      }
      goto L_0890A9D8;
    }
L_0890A9D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890A9F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890A9F0u) goto L_0890A9F0;
    return;
L_0890A9F0:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AA0C;
      }
      goto L_0890A9FC;
    }
L_0890A9FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AA2C;
      }
      goto L_0890AA0C;
    }
L_0890AA0C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AA24;
      }
      goto L_0890AA18;
    }
L_0890AA18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890AA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 443u, 0x0891E054u>(ctx, &aot_mem) && ctx.pc == 0x0890AA24u) goto L_0890AA24;
    return;
L_0890AA24:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    goto L_0890AA2C;
L_0890AA2C:
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
L_0890AA50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(376)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890AA8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890AA8Cu) goto L_0890AA8C;
    return;
L_0890AA8C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890AA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 352u, 0x0891D884u>(ctx, &aot_mem) && ctx.pc == 0x0890AA98u) goto L_0890AA98;
    return;
L_0890AA98:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890AAF8;
      }
      goto L_0890AAA8;
    }
L_0890AAA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890AAC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890AAC0u) goto L_0890AAC0;
    return;
L_0890AAC0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890AAD8;
      }
      goto L_0890AACC;
    }
L_0890AACC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AB10;
      }
      goto L_0890AAD8;
    }
L_0890AAD8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AB10;
      }
      goto L_0890AAE4;
    }
L_0890AAE4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890AAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 443u, 0x0891E054u>(ctx, &aot_mem) && ctx.pc == 0x0890AAF0u) goto L_0890AAF0;
    return;
L_0890AAF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AB10;
      }
      goto L_0890AAF8;
    }
L_0890AAF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890AB10;
      }
      goto L_0890AB08;
    }
L_0890AB08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    goto L_0890AB10;
L_0890AB10:
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
L_0890AB34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0890AB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0890AB54u) goto L_0890AB54;
    return;
L_0890AB54:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AB80;
      }
      goto L_0890AB6C;
    }
L_0890AB6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AB94;
      }
      goto L_0890AB80;
    }
L_0890AB80:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0890AB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890AB94u) goto L_0890AB94;
    return;
L_0890AB94:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32728)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_0890ABBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0890ABECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x0890ABECu) goto L_0890ABEC;
    return;
L_0890ABEC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AC14;
      }
      goto L_0890AC0C;
    }
L_0890AC0C:
    ctx.set_gpr(31, 0x0890AC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0890AC14u) goto L_0890AC14;
    return;
L_0890AC14:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0890AC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0890AC24u) goto L_0890AC24;
    return;
L_0890AC24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0890AC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 826u, 0x0890FDF0u>(ctx, &aot_mem) && ctx.pc == 0x0890AC4Cu) goto L_0890AC4C;
    return;
L_0890AC4C:
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
L_0890AC68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AD54;
      }
      goto L_0890ACAC;
    }
L_0890ACAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890AD50;
      }
      goto L_0890ACDC;
    }
L_0890ACDC:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0890AD50;
      }
      goto L_0890ACE4;
    }
L_0890ACE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, ctx.gpr[20] - ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890AD08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890AD08u) goto L_0890AD08;
    return;
L_0890AD08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AD3C;
      }
      goto L_0890AD18;
    }
L_0890AD18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890AD3C;
      }
      goto L_0890AD20;
    }
L_0890AD20:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AD3C;
      }
      goto L_0890AD2C;
    }
L_0890AD2C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32724)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0890AD3C;
L_0890AD3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
    // nop
      if (branch_taken) {
          goto L_0890AD50;
      }
      goto L_0890AD44;
    }
L_0890AD44:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AD60;
      }
      goto L_0890AD50;
    }
L_0890AD50:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0890AD54;
L_0890AD54:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890ACAC;
      }
      goto L_0890AD60;
    }
L_0890AD60:
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
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
L_0890AD8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, ctx.gpr[6] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AE4C;
      }
      goto L_0890ADA8;
    }
L_0890ADA8:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31940));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890ADC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    goto L_0890ADCC;
L_0890ADCC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    goto L_0890ADD4;
L_0890ADD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    goto L_0890ADDC;
L_0890ADDC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    goto L_0890ADE4;
L_0890ADE4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    goto L_0890ADEC;
L_0890ADEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    goto L_0890ADF4;
L_0890ADF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    goto L_0890ADFC;
L_0890ADFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    goto L_0890AE04;
L_0890AE04:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    goto L_0890AE0C;
L_0890AE0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    goto L_0890AE14;
L_0890AE14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_0890AE1C;
L_0890AE1C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_0890AE24;
L_0890AE24:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_0890AE2C;
L_0890AE2C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_0890AE34;
L_0890AE34:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0890AE3C;
L_0890AE3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AE5C;
      }
      goto L_0890AE4C;
    }
L_0890AE4C:
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x0890AE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0890AE5Cu) goto L_0890AE5C;
    return;
L_0890AE5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AE6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, ctx.gpr[6] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AEEC;
      }
      goto L_0890AE88;
    }
L_0890AE88:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32008));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AEA4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    goto L_0890AEA8;
L_0890AEA8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    goto L_0890AEAC;
L_0890AEAC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    goto L_0890AEB0;
L_0890AEB0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    goto L_0890AEB4;
L_0890AEB4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    goto L_0890AEB8;
L_0890AEB8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    goto L_0890AEBC;
L_0890AEBC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    goto L_0890AEC0;
L_0890AEC0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    goto L_0890AEC4;
L_0890AEC4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    goto L_0890AEC8;
L_0890AEC8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    goto L_0890AECC;
L_0890AECC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    goto L_0890AED0;
L_0890AED0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    goto L_0890AED4;
L_0890AED4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_0890AED8;
L_0890AED8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_0890AEDC;
L_0890AEDC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_0890AEE0;
L_0890AEE0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AEFC;
      }
      goto L_0890AEEC;
    }
L_0890AEEC:
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0890AEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0890AEFCu) goto L_0890AEFC;
    return;
L_0890AEFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AF0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890AF50;
      }
      goto L_0890AF34;
    }
L_0890AF34:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(5, ctx.gpr[2] >> 5u);
    ctx.set_gpr(31, 0x0890AF48u);
    // nop
    goto L_0890B034;
L_0890AF48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B018;
      }
      goto L_0890AF50;
    }
L_0890AF50:
    ctx.set_gpr(16, ctx.gpr[2] & 31u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(5, ctx.gpr[2] >> 5u);
    ctx.set_gpr(31, 0x0890AF6Cu);
    // nop
    goto L_0890B034;
L_0890AF6C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AFC4;
      }
      goto L_0890AF74;
    }
L_0890AF74:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[16] & 31u));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AFC4;
      }
      goto L_0890AFA4;
    }
L_0890AFA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890AFC4;
      }
      goto L_0890AFAC;
    }
L_0890AFAC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AFC4;
      }
      goto L_0890AFB8;
    }
L_0890AFB8:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[4]);
    goto L_0890AFC4;
L_0890AFC4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B00C;
      }
      goto L_0890AFD0;
    }
L_0890AFD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B008;
      }
      goto L_0890AFDC;
    }
L_0890AFDC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890B008;
      }
      goto L_0890AFE4;
    }
L_0890AFE4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B008;
      }
      goto L_0890AFF0;
    }
L_0890AFF0:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13340)));
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0890B008;
L_0890B008:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0890B00C;
L_0890B00C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890AFD0;
      }
      goto L_0890B018;
    }
L_0890B018:
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
L_0890B034:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890B06C;
      }
      goto L_0890B044;
    }
L_0890B044:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B060;
      }
      goto L_0890B054;
    }
L_0890B054:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B06C;
      }
      goto L_0890B060;
    }
L_0890B060:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890B06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B06Cu) goto L_0890B06C;
    return;
L_0890B06C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B07C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B0B8;
      }
      goto L_0890B088;
    }
L_0890B088:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890B09C;
      }
      goto L_0890B090;
    }
L_0890B090:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B0A4;
      }
      goto L_0890B09C;
    }
L_0890B09C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B0B8;
      }
      goto L_0890B0A4;
    }
L_0890B0A4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0890B0B8;
L_0890B0B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B0C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0890B0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 901u, 0x088D7D3Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B0E8u) goto L_0890B0E8;
    return;
L_0890B0E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890B10Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890B10Cu) goto L_0890B10C;
    return;
L_0890B10C:
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
L_0890B128:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0890B15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0890B15Cu) goto L_0890B15C;
    return;
L_0890B15C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13336));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0890B17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0890B17Cu) goto L_0890B17C;
    return;
L_0890B17C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0890B19C;
      }
      goto L_0890B184;
    }
L_0890B184:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B204;
      }
      goto L_0890B19C;
    }
L_0890B19C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13332));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890B1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 517u, 0x088167C0u>(ctx, &aot_mem) && ctx.pc == 0x0890B1B4u) goto L_0890B1B4;
    return;
L_0890B1B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B1D0;
      }
      goto L_0890B1BC;
    }
L_0890B1BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B204;
      }
      goto L_0890B1D0;
    }
L_0890B1D0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13324));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0890B1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 517u, 0x088167C0u>(ctx, &aot_mem) && ctx.pc == 0x0890B1E8u) goto L_0890B1E8;
    return;
L_0890B1E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B200;
      }
      goto L_0890B1F0;
    }
L_0890B1F0:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B204;
      }
      goto L_0890B200;
    }
L_0890B200:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0890B204;
L_0890B204:
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
L_0890B220:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B24C;
      }
      goto L_0890B23C;
    }
L_0890B23C:
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13332));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B254;
      }
      goto L_0890B24C;
    }
L_0890B24C:
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13324));
    goto L_0890B254;
L_0890B254:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13316));
    ctx.set_gpr(31, 0x0890B268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0890B268u) goto L_0890B268;
    return;
L_0890B268:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B280;
      }
      goto L_0890B274;
    }
L_0890B274:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B2D0;
      }
      goto L_0890B280;
    }
L_0890B280:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B2B8;
      }
      goto L_0890B290;
    }
L_0890B290:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890B29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0890B29Cu) goto L_0890B29C;
    return;
L_0890B29C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B2B0;
      }
      goto L_0890B2A4;
    }
L_0890B2A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890B2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0890B2B0u) goto L_0890B2B0;
    return;
L_0890B2B0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0890B2B8;
L_0890B2B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890B2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0890B2CCu) goto L_0890B2CC;
    return;
L_0890B2CC:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0890B2D0;
L_0890B2D0:
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
L_0890B2E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0890B300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 501u, 0x0894227Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B300u) goto L_0890B300;
    return;
L_0890B300:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18716));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B320;
      }
      goto L_0890B314;
    }
L_0890B314:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890B320u);
    // nop
    goto L_0890B338;
L_0890B320:
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
L_0890B338:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0890B350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x0890B350u) goto L_0890B350;
    return;
L_0890B350:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18716));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
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
L_0890B374:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0890B38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 519u, 0x08942410u>(ctx, &aot_mem) && ctx.pc == 0x0890B38Cu) goto L_0890B38C;
    return;
L_0890B38C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18716));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
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
L_0890B3B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0890B3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 534u, 0x0894259Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B3C0u) goto L_0890B3C0;
    return;
L_0890B3C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B3D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B3DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890B3FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890B3FCu) goto L_0890B3FC;
    return;
L_0890B3FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B40C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B418:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B424:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B430:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B464;
      }
      goto L_0890B458;
    }
L_0890B458:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890B464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B464u) goto L_0890B464;
    return;
L_0890B464:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890B47Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890B47Cu) goto L_0890B47C;
    return;
L_0890B47C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B490:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890B4BC;
      }
      goto L_0890B4B0;
    }
L_0890B4B0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B4CC;
      }
      goto L_0890B4BC;
    }
L_0890B4BC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890B4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B4CCu) goto L_0890B4CC;
    return;
L_0890B4CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_0890B4EC;
      }
      goto L_0890B4DC;
    }
L_0890B4DC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890B4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B4ECu) goto L_0890B4EC;
    return;
L_0890B4EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890B508;
      }
      goto L_0890B4FC;
    }
L_0890B4FC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B518;
      }
      goto L_0890B508;
    }
L_0890B508:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890B518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B518u) goto L_0890B518;
    return;
L_0890B518:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B56C;
      }
      goto L_0890B524;
    }
L_0890B524:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890B53C;
      }
      goto L_0890B530;
    }
L_0890B530:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B54C;
      }
      goto L_0890B53C;
    }
L_0890B53C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890B54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B54Cu) goto L_0890B54C;
    return;
L_0890B54C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_0890B56C;
      }
      goto L_0890B55C;
    }
L_0890B55C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890B56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B56Cu) goto L_0890B56C;
    return;
L_0890B56C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B580:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890B59Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890B59Cu) goto L_0890B59C;
    return;
L_0890B59C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B5AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B5E0;
      }
      goto L_0890B5C8;
    }
L_0890B5C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B5D8;
      }
      goto L_0890B5D4;
    }
L_0890B5D4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0890B5D8;
L_0890B5D8:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0890B5E0;
L_0890B5E0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B5C8;
      }
      goto L_0890B5EC;
    }
L_0890B5EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B5F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B648;
      }
      goto L_0890B614;
    }
L_0890B614:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890B62C;
      }
      goto L_0890B620;
    }
L_0890B620:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B63C;
      }
      goto L_0890B62C;
    }
L_0890B62C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890B63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B63Cu) goto L_0890B63C;
    return;
L_0890B63C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B6C0;
      }
      goto L_0890B648;
    }
L_0890B648:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B6B0;
      }
      goto L_0890B654;
    }
L_0890B654:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B6AC;
      }
      goto L_0890B660;
    }
L_0890B660:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890B6AC;
      }
      goto L_0890B66C;
    }
L_0890B66C:
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890B6A0;
      }
      goto L_0890B678;
    }
L_0890B678:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B694;
      }
      goto L_0890B688;
    }
L_0890B688:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B6A0;
      }
      goto L_0890B694;
    }
L_0890B694:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890B6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B6A0u) goto L_0890B6A0;
    return;
L_0890B6A0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B6C0;
      }
      goto L_0890B6AC;
    }
L_0890B6AC:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0890B6B0;
L_0890B6B0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B654;
      }
      goto L_0890B6BC;
    }
L_0890B6BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0890B6C0;
L_0890B6C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B6D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890B6F8;
      }
      goto L_0890B6D8;
    }
L_0890B6D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B6F8;
      }
      goto L_0890B6EC;
    }
L_0890B6EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B704;
      }
      goto L_0890B6F8;
    }
L_0890B6F8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B724;
      }
      goto L_0890B704;
    }
L_0890B704:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0890B724;
      }
      goto L_0890B714;
    }
L_0890B714:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B724;
      }
      goto L_0890B720;
    }
L_0890B720:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0890B724;
L_0890B724:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B72C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B760;
      }
      goto L_0890B75C;
    }
L_0890B75C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_0890B760;
L_0890B760:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B75C;
      }
      goto L_0890B774;
    }
L_0890B774:
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B7B4;
      }
      goto L_0890B794;
    }
L_0890B794:
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B7B4;
      }
      goto L_0890B7A8;
    }
L_0890B7A8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890B7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B7B4u) goto L_0890B7B4;
    return;
L_0890B7B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0890B7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x0890B7C8u) goto L_0890B7C8;
    return;
L_0890B7C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B808;
      }
      goto L_0890B7D4;
    }
L_0890B7D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B808;
      }
      goto L_0890B7E0;
    }
L_0890B7E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890B808u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890B808u) goto L_0890B808;
    return;
L_0890B808:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_0890B82C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890B854u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890B854u) goto L_0890B854;
    return;
L_0890B854:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890B868;
      }
      goto L_0890B860;
    }
L_0890B860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B880;
      }
      goto L_0890B868;
    }
L_0890B868:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890B880u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890B880u) goto L_0890B880;
    return;
L_0890B880:
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
L_0890B898:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B9CC;
      }
      goto L_0890B8BC;
    }
L_0890B8BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B9CC;
      }
      goto L_0890B8C8;
    }
L_0890B8C8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890B8D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890B8D8u) goto L_0890B8D8;
    return;
L_0890B8D8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, 0u + 0u);
    goto L_0890B8E4;
L_0890B8E4:
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890B90C;
      }
      goto L_0890B900;
    }
L_0890B900:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BAC8;
      }
      goto L_0890B90C;
    }
L_0890B90C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, ctx.gpr[10] << 2u);
    ctx.set_gpr(8, ctx.gpr[4] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B930;
      }
      goto L_0890B928;
    }
L_0890B928:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_0890B930;
L_0890B930:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B950;
      }
      goto L_0890B93C;
    }
L_0890B93C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B950;
      }
      goto L_0890B948;
    }
L_0890B948:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890B928;
      }
      goto L_0890B950;
    }
L_0890B950:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B96C;
      }
      goto L_0890B960;
    }
L_0890B960:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B988;
      }
      goto L_0890B96C;
    }
L_0890B96C:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B984;
      }
      goto L_0890B978;
    }
L_0890B978:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B988;
      }
      goto L_0890B984;
    }
L_0890B984:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0890B988;
L_0890B988:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B99C;
      }
      goto L_0890B990;
    }
L_0890B990:
    ctx.set_gpr(2, ctx.gpr[10] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BAC8;
      }
      goto L_0890B99C;
    }
L_0890B99C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B9B0;
      }
      goto L_0890B9AC;
    }
L_0890B9AC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0890B9B0;
L_0890B9B0:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B8E4;
      }
      goto L_0890B9C0;
    }
L_0890B9C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BAC8;
      }
      goto L_0890B9CC;
    }
L_0890B9CC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BAB8;
      }
      goto L_0890B9E8;
    }
L_0890B9E8:
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BA00;
      }
      goto L_0890B9F8;
    }
L_0890B9F8:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    goto L_0890BA00;
L_0890BA00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BA20;
      }
      goto L_0890BA0C;
    }
L_0890BA0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BA20;
      }
      goto L_0890BA18;
    }
L_0890BA18:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890B9F8;
      }
      goto L_0890BA20;
    }
L_0890BA20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BA3C;
      }
      goto L_0890BA30;
    }
L_0890BA30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BA58;
      }
      goto L_0890BA3C;
    }
L_0890BA3C:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BA54;
      }
      goto L_0890BA48;
    }
L_0890BA48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BA58;
      }
      goto L_0890BA54;
    }
L_0890BA54:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0890BA58;
L_0890BA58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BA84;
      }
      goto L_0890BA60;
    }
L_0890BA60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[8] - ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0890BA7C;
      }
      goto L_0890BA74;
    }
L_0890BA74:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_0890BA7C;
L_0890BA7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BAC8;
      }
      goto L_0890BA84;
    }
L_0890BA84:
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BA98;
      }
      goto L_0890BA94;
    }
L_0890BA94:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_0890BA98;
L_0890BA98:
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BA94;
      }
      goto L_0890BAAC;
    }
L_0890BAAC:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[2]);
    goto L_0890BAB8;
L_0890BAB8:
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B9E8;
      }
      goto L_0890BAC4;
    }
L_0890BAC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0890BAC8;
L_0890BAC8:
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
L_0890BAE0:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BAFC;
      }
      goto L_0890BAF0;
    }
L_0890BAF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BB00;
      }
      goto L_0890BAFC;
    }
L_0890BAFC:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0890BB00;
L_0890BB00:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BB44;
      }
      goto L_0890BB08;
    }
L_0890BB08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BB44;
      }
      goto L_0890BB10;
    }
L_0890BB10:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BB44;
      }
      goto L_0890BB18;
    }
L_0890BB18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BB28;
      }
      goto L_0890BB20;
    }
L_0890BB20:
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_0890BB28;
L_0890BB28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BB20;
      }
      goto L_0890BB34;
    }
L_0890BB34:
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BB48;
      }
      goto L_0890BB44;
    }
L_0890BB44:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0890BB48;
L_0890BB48:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BB50:
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
          goto L_0890BB94;
      }
      goto L_0890BB8C;
    }
L_0890BB8C:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_0890BB94;
L_0890BB94:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BC44;
      }
      goto L_0890BB9C;
    }
L_0890BB9C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890BBB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890BBB0u) goto L_0890BBB0;
    return;
L_0890BBB0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0890BBFC;
      }
      goto L_0890BBD0;
    }
L_0890BBD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BC44;
      }
      goto L_0890BBDC;
    }
L_0890BBDC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890BC44;
      }
      goto L_0890BBE4;
    }
L_0890BBE4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BC44;
      }
      goto L_0890BBF0;
    }
L_0890BBF0:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BC44;
      }
      goto L_0890BBFC;
    }
L_0890BBFC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BC10;
      }
      goto L_0890BC0C;
    }
L_0890BC0C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0890BC10;
L_0890BC10:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BBB0;
      }
      goto L_0890BC20;
    }
L_0890BC20:
    ctx.set_gpr(5, ctx.gpr[17] << 1u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890BC38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890BC38u) goto L_0890BC38;
    return;
L_0890BC38:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BC48;
      }
      goto L_0890BC44;
    }
L_0890BC44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0890BC48;
L_0890BC48:
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
L_0890BC6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0890BC94u);
    // nop
    goto L_0890B424;
L_0890BC94:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BE08;
      }
      goto L_0890BC9C;
    }
L_0890BC9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BCD0;
      }
      goto L_0890BCA8;
    }
L_0890BCA8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0890BCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BCB4u) goto L_0890BCB4;
    return;
L_0890BCB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890BCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 516u, 0x088F6B60u>(ctx, &aot_mem) && ctx.pc == 0x0890BCC0u) goto L_0890BCC0;
    return;
L_0890BCC0:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890BCD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BCD0u) goto L_0890BCD0;
    return;
L_0890BCD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BCF4;
      }
      goto L_0890BCE4;
    }
L_0890BCE4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890BCF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BCF4u) goto L_0890BCF4;
    return;
L_0890BCF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890BD2C;
      }
      goto L_0890BD00;
    }
L_0890BD00:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD1C;
      }
      goto L_0890BD10;
    }
L_0890BD10:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD2C;
      }
      goto L_0890BD1C;
    }
L_0890BD1C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890BD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BD2Cu) goto L_0890BD2C;
    return;
L_0890BD2C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD5C;
      }
      goto L_0890BD44;
    }
L_0890BD44:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13312)));
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0890BD5C;
L_0890BD5C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD44;
      }
      goto L_0890BD68;
    }
L_0890BD68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(16, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BDF4;
      }
      goto L_0890BD88;
    }
L_0890BD88:
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[17]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0890BDA0;
      }
      goto L_0890BD98;
    }
L_0890BD98:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_0890BDA0;
L_0890BDA0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890BDB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890BDB8u) goto L_0890BDB8;
    return;
L_0890BDB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BE24;
      }
      goto L_0890BDC0;
    }
L_0890BDC0:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BDD4;
      }
      goto L_0890BDD0;
    }
L_0890BDD0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0890BDD4;
L_0890BDD4:
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BDD0;
      }
      goto L_0890BDE8;
    }
L_0890BDE8:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[3]);
    goto L_0890BDF4;
L_0890BDF4:
    ctx.set_gpr(3, ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD88;
      }
      goto L_0890BE00;
    }
L_0890BE00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BE24;
      }
      goto L_0890BE08;
    }
L_0890BE08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BE24;
      }
      goto L_0890BE14;
    }
L_0890BE14:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0890BE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0890BE24u) goto L_0890BE24;
    return;
L_0890BE24:
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
L_0890BE44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0890BE70;
      }
      goto L_0890BE60;
    }
L_0890BE60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BE80;
      }
      goto L_0890BE70;
    }
L_0890BE70:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0890BE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BE80u) goto L_0890BE80;
    return;
L_0890BE80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BEA4;
      }
      goto L_0890BE8C;
    }
L_0890BE8C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0890BEA4;
      }
      goto L_0890BE94;
    }
L_0890BE94:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13308)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_0890BEA4;
L_0890BEA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BEBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0890BECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0890BECCu) goto L_0890BECC;
    return;
L_0890BECC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BEFC;
      }
      goto L_0890BED8;
    }
L_0890BED8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890BEE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890BEE8u) goto L_0890BEE8;
    return;
L_0890BEE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BEFC;
      }
      goto L_0890BEF0;
    }
L_0890BEF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BF00;
      }
      goto L_0890BEFC;
    }
L_0890BEFC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0890BF00;
L_0890BF00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BF10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(316));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890BF6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890BF6Cu) goto L_0890BF6C;
    return;
L_0890BF6C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(10, ctx.gpr[19] + 0u);
    ctx.set_gpr(11, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890BFA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890BFA4u) goto L_0890BFA4;
    return;
L_0890BFA4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(576));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BFD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.pc = 0x0890C000u; return;
}

void recomp_unit_0065(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0065_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_65(Runtime &runtime) {
    runtime.register_generated_unit(65u, 0x08908000u, 16384u, &recomp_unit_0065, &recomp_unit_0065_entry);
    runtime.register_function(0x08908000u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908018u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908024u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890802Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908038u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908048u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908050u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908068u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908074u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908078u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908084u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908088u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908094u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089080CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908128u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908140u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890814Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908158u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890817Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908188u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089081A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089081A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089081B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089081C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089081D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089081ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908204u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908218u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908228u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908250u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890825Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908274u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890827Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890829Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890830Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908318u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908324u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890832Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890833Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908354u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908370u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890837Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908404u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890841Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890843Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908448u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908460u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908468u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908478u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908488u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908498u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089084ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089084C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089084D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089084E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908510u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890851Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908534u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890854Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908558u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908564u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908574u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908580u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908588u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908594u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890859Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908614u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908620u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908628u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908640u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890865Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908684u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908690u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908700u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908714u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908728u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908734u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890873Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908744u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908754u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890876Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890878Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908798u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908808u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908830u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890883Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908844u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908850u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908858u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890886Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908880u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890888Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908894u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890889Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908900u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908908u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908910u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908914u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890894Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890895Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890896Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089089C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089089D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089089DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089089F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089089F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A28u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AC0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AF4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B04u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B64u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908BA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908BB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908BBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908BC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908BD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908BDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C04u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D1Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D30u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D74u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DF8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E2Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E38u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E5Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908EACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908ED0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F28u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F64u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908FB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908FC0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908FCCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908FD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908FE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908FF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908FFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909008u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890902Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890907Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909090u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890910Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909130u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909148u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890914Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909154u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909160u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890916Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890918Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909198u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909214u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909228u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909238u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909260u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890926Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909284u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909294u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089092ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089092B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089092B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089092D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089092DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089092E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089092F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909304u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890931Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909334u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909350u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909360u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909368u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909378u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909394u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089093A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089093DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909410u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909434u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909450u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909468u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909470u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909488u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909490u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089094A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089094B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089094C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089094E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890950Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909518u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909538u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909544u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890954Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909558u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909560u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909574u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909588u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909594u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890959Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909600u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890960Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909614u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909628u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890963Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909648u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909650u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909658u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909668u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909680u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890968Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890969Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909700u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909718u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890971Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909724u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890973Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909748u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890975Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909768u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909770u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909778u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909784u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909794u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890979Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909804u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909808u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909810u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909828u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909830u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909834u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909840u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909878u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909884u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890989Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890990Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909954u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909960u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909968u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909990u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A74u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909AA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909AB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909AD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909AE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909AECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909AF8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B28u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B64u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BF8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CF8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D2Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D9Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E64u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E74u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909EA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909EB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909EC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F1Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FF8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A010u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A024u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A038u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A050u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A060u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A08Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A10Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A134u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A13Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A154u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A16Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A170u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A178u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A190u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A19Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A218u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A248u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A260u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A280u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A28Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A298u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A2A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A2B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A2D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A2E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A300u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A318u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A328u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A334u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A340u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A350u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A358u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A364u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A374u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A378u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A384u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A388u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A394u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A404u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A408u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A410u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A438u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A45Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A468u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A470u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A47Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A484u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A49Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A508u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A524u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A540u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A568u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A574u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A588u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A594u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A59Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A608u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A618u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A62Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A640u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A64Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A654u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A660u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A668u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A680u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A694u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A704u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A70Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A718u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A720u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A734u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A744u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A75Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A774u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A778u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A780u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A798u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A81Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A840u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A848u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A858u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A86Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A890u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A894u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A908u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A930u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A96Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A978u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A988u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA2Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AAA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AAC0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AACCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AAD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AAE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AAF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AAF8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ACACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ACDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ACE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD2Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADCCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADF4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE04u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE1Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE2Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE5Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEC0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AECCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AED0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AED4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AED8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF74u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B008u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B00Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B018u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B034u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B044u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B054u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B060u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B06Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B07Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B088u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B090u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B09Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B10Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B128u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B134u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B15Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B17Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B184u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B19Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B200u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B204u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B220u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B23Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B24Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B254u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B268u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B274u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B280u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B290u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B29Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B300u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B314u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B320u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B338u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B350u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B374u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B38Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B40Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B418u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B424u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B430u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B458u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B464u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B47Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B490u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B508u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B518u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B524u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B530u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B53Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B54Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B55Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B56Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B580u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B59Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B614u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B620u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B62Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B63Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B648u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B654u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B660u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B66Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B678u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B688u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B694u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B704u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B714u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B720u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B724u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B72Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B75Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B760u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B774u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B794u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B808u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B82Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B854u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B860u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B868u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B880u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B898u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B8BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B8C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B8D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B8E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B900u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B90Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B928u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B930u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B93Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B948u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B950u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B960u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B96Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B978u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B984u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B988u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B990u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B99Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA30u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA74u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB28u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB9Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC38u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC9Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCC0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCF4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD1Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD2Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD5Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDC0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDF4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BEA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BEBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BECCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BED8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BEE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BEF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BEFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BF00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BF10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BF6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BFA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BFD0u, &recomp_unit_0065, "recomp_unit_0065");
}
} // namespace psprecomp
