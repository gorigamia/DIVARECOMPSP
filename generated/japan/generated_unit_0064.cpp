#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0064[4095] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 6, 0, 0, 7, 8, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17,
    0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    30, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 45, 46, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0,
    0, 67, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0,
    0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0,
    84, 0, 85, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 95, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0,
    0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 117,
    0, 0, 118, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 125, 0, 0, 0, 0, 126, 127, 0, 128, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 146,
    0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162,
    0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    171, 0, 0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 183, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    193, 194, 0, 0, 195, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0,
    245, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 261,
    0, 0, 262, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 269, 270, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 277, 278,
    0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 287, 0, 0, 0, 0, 288, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 293, 0, 0, 294,
    0, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0,
    304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 307, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0,
    0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0,
    341, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346,
    0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 357, 0, 358, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 364, 365, 0,
    0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0,
    373, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 379, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382,
    0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 389, 0, 0, 0, 0, 390,
    0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0,
    402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 404, 0, 405, 0, 0, 406, 0, 407, 408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0,
    0, 411, 0, 412, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418,
    0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 423, 0, 424, 0, 0,
    425, 0, 426, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 431, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 0, 437, 0, 438,
    0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0,
    445, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0,
    0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 463, 0,
    0, 464, 0, 0, 465, 0, 0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 0, 470, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0,
    474, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484,
    0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500,
    0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0,
    0, 506, 0, 0, 507, 0, 508, 0, 0, 509, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 514, 0, 515, 0,
    0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 519, 0, 520, 0, 0, 521, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0,
    524, 0, 0, 0, 0, 0, 525, 526, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 531, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 536, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0,
    540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 543, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0,
    551, 0, 0, 0, 552, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 556, 0, 557, 0, 558, 0, 0, 559, 0, 0, 560, 0, 0, 0, 561,
    0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0,
    0, 570, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 574, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578,
    0, 0, 579, 0, 580, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 584, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0,
    588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 592,
    0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0,
    0, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606,
    0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0,
    0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0,
    0, 620, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 623, 0, 0, 624, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0,
    0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0,
    0, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0,
    0, 641, 0, 0, 642, 0, 643, 0, 644, 0, 0, 645, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 649, 0, 0, 0, 650, 0, 0, 651, 0,
    0, 0, 652, 0, 653, 0, 0, 0, 654, 655, 0, 0, 656, 0, 0, 657, 0, 0, 658, 0, 659, 0, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0,
    0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 666, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0,
    0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 678,
    0, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 684, 0, 685, 0, 0, 686, 0, 687, 0, 0, 0, 688,
    0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 693, 694, 0, 0, 0, 695, 0, 0, 0, 0, 696,
    0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 702, 0, 0,
    0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0,
    0, 0, 707, 708, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 713, 714, 0,
    715, 0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 721, 722, 0, 723, 0,
    0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 729, 730, 0, 731, 0, 0, 732,
    0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 737, 0, 0, 738, 739, 0, 0, 0, 0, 740, 0,
    0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 743, 0, 0, 744, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0,
    0, 749, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 754, 0, 755, 0, 0, 756, 0, 0,
    757, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 762, 0, 763, 0,
    0, 0, 764, 0, 0, 765, 0, 766, 0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 0, 769, 0, 770, 0, 0, 771, 0, 0, 0, 0, 0, 0,
    0, 772, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 775, 0, 776, 0, 0, 777, 0, 0, 778, 0,
    0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0,
    784, 0, 785, 0, 0, 0, 0, 0, 786, 0, 0, 787, 0, 0, 0, 788, 0, 0, 789, 0, 790, 0, 0, 791, 0, 792, 0, 0, 0, 0, 793, 0,
    0, 0, 0, 794, 0, 0, 0, 0, 0, 795, 796, 0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 802,
    0, 803, 0, 0, 804, 0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 808, 809, 0, 810, 0, 0, 0, 0, 0, 811,
    0, 0, 812, 813, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 816, 0, 817, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 821,
    0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 824, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 827, 0, 0, 0, 828, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 834, 0, 0, 835, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 0, 840,
    0, 0, 0, 841, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0,
    846, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 850, 0, 851,
    0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 853, 0, 0, 0, 0, 0, 0, 854, 0, 0, 855, 0, 856, 0, 857, 0, 0, 858, 0,
    0, 859, 0, 0, 0, 860, 0, 0, 861, 0, 862, 0, 863, 0, 0, 0, 864, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 866, 0, 0, 0,
    867, 0, 0, 0, 0, 0, 868, 869, 0, 870, 0, 0, 0, 0, 0, 871, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 873, 0, 874, 0, 0, 875,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 876, 0, 0, 877, 878, 0, 0, 879, 880, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 883,
    0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 885, 0, 0, 886, 0, 0, 0, 0, 0, 0, 887, 0, 888, 0, 0, 0, 889, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 891, 892, 0, 893, 0, 0, 0, 0, 0, 894, 0, 0, 895, 0, 0, 0, 896, 0, 0,
    0, 0, 897, 0, 0, 0, 0, 0, 0, 0, 898, 0, 899, 0, 0, 0, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 901, 0, 902, 0, 0, 0,
    0, 903, 0, 0, 0, 904, 0, 0, 0, 0, 0, 905, 906, 0, 907, 0, 0, 0, 0, 0, 908, 0, 0, 909, 0, 0, 0, 0, 0, 0, 910, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0,
    0, 0, 0, 913, 0, 0, 0, 0, 0, 914, 915, 0, 916, 0, 0, 917, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 919, 0, 0, 0, 920,
};
void recomp_unit_0064_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08904000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0064[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08904000;
    case 2u: goto L_0890400C;
    case 3u: goto L_08904020;
    case 4u: goto L_08904048;
    case 5u: goto L_08904060;
    case 6u: goto L_08904064;
    case 7u: goto L_08904070;
    case 8u: goto L_08904074;
    case 9u: goto L_0890407C;
    case 10u: goto L_0890409C;
    case 11u: goto L_089040A4;
    case 12u: goto L_089040B0;
    case 13u: goto L_089040BC;
    case 14u: goto L_089040DC;
    case 15u: goto L_089040E8;
    case 16u: goto L_089040F0;
    case 17u: goto L_089040FC;
    case 18u: goto L_08904104;
    case 19u: goto L_08904118;
    case 20u: goto L_0890412C;
    case 21u: goto L_08904138;
    case 22u: goto L_08904140;
    case 23u: goto L_08904148;
    case 24u: goto L_08904158;
    case 25u: goto L_08904178;
    case 26u: goto L_08904180;
    case 27u: goto L_089041B0;
    case 28u: goto L_089041C4;
    case 29u: goto L_089041EC;
    case 30u: goto L_08904200;
    case 31u: goto L_08904204;
    case 32u: goto L_08904210;
    case 33u: goto L_08904218;
    case 34u: goto L_08904224;
    case 35u: goto L_08904258;
    case 36u: goto L_08904264;
    case 37u: goto L_08904270;
    case 38u: goto L_08904284;
    case 39u: goto L_08904298;
    case 40u: goto L_089042AC;
    case 41u: goto L_089042B8;
    case 42u: goto L_089042C4;
    case 43u: goto L_089042D8;
    case 44u: goto L_08904300;
    case 45u: goto L_08904314;
    case 46u: goto L_08904318;
    case 47u: goto L_08904324;
    case 48u: goto L_0890432C;
    case 49u: goto L_08904344;
    case 50u: goto L_0890436C;
    case 51u: goto L_08904384;
    case 52u: goto L_08904390;
    case 53u: goto L_089043A4;
    case 54u: goto L_089043B8;
    case 55u: goto L_089043C4;
    case 56u: goto L_089043D0;
    case 57u: goto L_089043DC;
    case 58u: goto L_089043E8;
    case 59u: goto L_089043F8;
    case 60u: goto L_08904414;
    case 61u: goto L_08904434;
    case 62u: goto L_0890443C;
    case 63u: goto L_0890444C;
    case 64u: goto L_08904458;
    case 65u: goto L_08904470;
    case 66u: goto L_08904478;
    case 67u: goto L_08904484;
    case 68u: goto L_0890448C;
    case 69u: goto L_08904498;
    case 70u: goto L_089044A4;
    case 71u: goto L_089044C0;
    case 72u: goto L_089044C8;
    case 73u: goto L_089044E8;
    case 74u: goto L_089044F0;
    case 75u: goto L_08904508;
    case 76u: goto L_08904514;
    case 77u: goto L_08904524;
    case 78u: goto L_08904530;
    case 79u: goto L_08904538;
    case 80u: goto L_08904544;
    case 81u: goto L_0890454C;
    case 82u: goto L_08904564;
    case 83u: goto L_08904574;
    case 84u: goto L_08904580;
    case 85u: goto L_08904588;
    case 86u: goto L_08904590;
    case 87u: goto L_0890459C;
    case 88u: goto L_089045A8;
    case 89u: goto L_089045B8;
    case 90u: goto L_089045C4;
    case 91u: goto L_089045CC;
    case 92u: goto L_089045D4;
    case 93u: goto L_089045E4;
    case 94u: goto L_089045FC;
    case 95u: goto L_08904614;
    case 96u: goto L_08904618;
    case 97u: goto L_08904620;
    case 98u: goto L_08904638;
    case 99u: goto L_08904644;
    case 100u: goto L_08904650;
    case 101u: goto L_08904658;
    case 102u: goto L_08904690;
    case 103u: goto L_089046A4;
    case 104u: goto L_089046E0;
    case 105u: goto L_089046EC;
    case 106u: goto L_089046F8;
    case 107u: goto L_08904708;
    case 108u: goto L_08904710;
    case 109u: goto L_08904728;
    case 110u: goto L_08904744;
    case 111u: goto L_08904750;
    case 112u: goto L_08904798;
    case 113u: goto L_089047A4;
    case 114u: goto L_089047B8;
    case 115u: goto L_089047E0;
    case 116u: goto L_089047F8;
    case 117u: goto L_089047FC;
    case 118u: goto L_08904808;
    case 119u: goto L_0890480C;
    case 120u: goto L_08904814;
    case 121u: goto L_0890483C;
    case 122u: goto L_0890484C;
    case 123u: goto L_08904858;
    case 124u: goto L_08904878;
    case 125u: goto L_08904884;
    case 126u: goto L_08904898;
    case 127u: goto L_0890489C;
    case 128u: goto L_089048A4;
    case 129u: goto L_089048A8;
    case 130u: goto L_089048B4;
    case 131u: goto L_089048C0;
    case 132u: goto L_089048E0;
    case 133u: goto L_08904914;
    case 134u: goto L_08904920;
    case 135u: goto L_0890493C;
    case 136u: goto L_08904954;
    case 137u: goto L_0890495C;
    case 138u: goto L_08904980;
    case 139u: goto L_0890498C;
    case 140u: goto L_08904998;
    case 141u: goto L_089049A8;
    case 142u: goto L_089049B4;
    case 143u: goto L_089049D8;
    case 144u: goto L_089049E0;
    case 145u: goto L_089049F4;
    case 146u: goto L_089049FC;
    case 147u: goto L_08904A08;
    case 148u: goto L_08904A24;
    case 149u: goto L_08904A44;
    case 150u: goto L_08904A5C;
    case 151u: goto L_08904A68;
    case 152u: goto L_08904A8C;
    case 153u: goto L_08904A94;
    case 154u: goto L_08904AA0;
    case 155u: goto L_08904AA8;
    case 156u: goto L_08904AB4;
    case 157u: goto L_08904AC8;
    case 158u: goto L_08904AD4;
    case 159u: goto L_08904AE0;
    case 160u: goto L_08904AEC;
    case 161u: goto L_08904AF4;
    case 162u: goto L_08904AFC;
    case 163u: goto L_08904B14;
    case 164u: goto L_08904B20;
    case 165u: goto L_08904B30;
    case 166u: goto L_08904B3C;
    case 167u: goto L_08904B44;
    case 168u: goto L_08904B50;
    case 169u: goto L_08904B58;
    case 170u: goto L_08904B70;
    case 171u: goto L_08904B80;
    case 172u: goto L_08904B8C;
    case 173u: goto L_08904B94;
    case 174u: goto L_08904B9C;
    case 175u: goto L_08904BA8;
    case 176u: goto L_08904BB4;
    case 177u: goto L_08904BC4;
    case 178u: goto L_08904BD0;
    case 179u: goto L_08904BD8;
    case 180u: goto L_08904BE0;
    case 181u: goto L_08904BF0;
    case 182u: goto L_08904C08;
    case 183u: goto L_08904C20;
    case 184u: goto L_08904C24;
    case 185u: goto L_08904C2C;
    case 186u: goto L_08904C44;
    case 187u: goto L_08904C50;
    case 188u: goto L_08904C78;
    case 189u: goto L_08904C9C;
    case 190u: goto L_08904CA8;
    case 191u: goto L_08904CBC;
    case 192u: goto L_08904CE4;
    case 193u: goto L_08904D00;
    case 194u: goto L_08904D04;
    case 195u: goto L_08904D10;
    case 196u: goto L_08904D14;
    case 197u: goto L_08904D1C;
    case 198u: goto L_08904D34;
    case 199u: goto L_08904D50;
    case 200u: goto L_08904D5C;
    case 201u: goto L_08904D7C;
    case 202u: goto L_08904DA0;
    case 203u: goto L_08904DAC;
    case 204u: goto L_08904DB8;
    case 205u: goto L_08904DC8;
    case 206u: goto L_08904DD8;
    case 207u: goto L_08904DEC;
    case 208u: goto L_08904DFC;
    case 209u: goto L_08904E14;
    case 210u: goto L_08904E20;
    case 211u: goto L_08904E38;
    case 212u: goto L_08904E48;
    case 213u: goto L_08904E5C;
    case 214u: goto L_08904E74;
    case 215u: goto L_08904E88;
    case 216u: goto L_08904E94;
    case 217u: goto L_08904EA0;
    case 218u: goto L_08904ED0;
    case 219u: goto L_08904EDC;
    case 220u: goto L_08904EEC;
    case 221u: goto L_08904EF4;
    case 222u: goto L_08904F0C;
    case 223u: goto L_08904F3C;
    case 224u: goto L_08904F48;
    case 225u: goto L_08904F6C;
    case 226u: goto L_08904F74;
    case 227u: goto L_08904F84;
    case 228u: goto L_08904FB8;
    case 229u: goto L_08904FC8;
    case 230u: goto L_08904FD4;
    case 231u: goto L_08904FD8;
    case 232u: goto L_08904FE0;
    case 233u: goto L_08904FF0;
    case 234u: goto L_0890500C;
    case 235u: goto L_08905018;
    case 236u: goto L_08905024;
    case 237u: goto L_0890503C;
    case 238u: goto L_0890504C;
    case 239u: goto L_08905088;
    case 240u: goto L_089050B0;
    case 241u: goto L_089050B8;
    case 242u: goto L_089050C4;
    case 243u: goto L_089050EC;
    case 244u: goto L_089050F4;
    case 245u: goto L_08905100;
    case 246u: goto L_08905114;
    case 247u: goto L_0890511C;
    case 248u: goto L_08905124;
    case 249u: goto L_0890513C;
    case 250u: goto L_0890516C;
    case 251u: goto L_08905174;
    case 252u: goto L_08905180;
    case 253u: goto L_089051A4;
    case 254u: goto L_089051B0;
    case 255u: goto L_089051BC;
    case 256u: goto L_089051CC;
    case 257u: goto L_089051F8;
    case 258u: goto L_08905234;
    case 259u: goto L_08905258;
    case 260u: goto L_08905270;
    case 261u: goto L_0890527C;
    case 262u: goto L_08905288;
    case 263u: goto L_08905294;
    case 264u: goto L_0890529C;
    case 265u: goto L_089052AC;
    case 266u: goto L_089052D4;
    case 267u: goto L_089052E0;
    case 268u: goto L_089052EC;
    case 269u: goto L_089052F4;
    case 270u: goto L_089052F8;
    case 271u: goto L_08905318;
    case 272u: goto L_08905340;
    case 273u: goto L_0890534C;
    case 274u: goto L_08905354;
    case 275u: goto L_08905360;
    case 276u: goto L_0890536C;
    case 277u: goto L_08905378;
    case 278u: goto L_0890537C;
    case 279u: goto L_0890538C;
    case 280u: goto L_08905398;
    case 281u: goto L_089053B4;
    case 282u: goto L_089053BC;
    case 283u: goto L_089053C8;
    case 284u: goto L_089053D0;
    case 285u: goto L_089053DC;
    case 286u: goto L_08905400;
    case 287u: goto L_08905404;
    case 288u: goto L_08905418;
    case 289u: goto L_08905420;
    case 290u: goto L_0890542C;
    case 291u: goto L_0890545C;
    case 292u: goto L_08905464;
    case 293u: goto L_08905470;
    case 294u: goto L_0890547C;
    case 295u: goto L_0890548C;
    case 296u: goto L_08905498;
    case 297u: goto L_089054A0;
    case 298u: goto L_089054B0;
    case 299u: goto L_089054BC;
    case 300u: goto L_089054C4;
    case 301u: goto L_089054D0;
    case 302u: goto L_089054DC;
    case 303u: goto L_089054F4;
    case 304u: goto L_08905500;
    case 305u: goto L_08905510;
    case 306u: goto L_08905520;
    case 307u: goto L_08905528;
    case 308u: goto L_08905534;
    case 309u: goto L_0890553C;
    case 310u: goto L_08905548;
    case 311u: goto L_0890555C;
    case 312u: goto L_08905584;
    case 313u: goto L_0890559C;
    case 314u: goto L_089055B0;
    case 315u: goto L_089055C8;
    case 316u: goto L_089055F8;
    case 317u: goto L_0890561C;
    case 318u: goto L_08905628;
    case 319u: goto L_08905634;
    case 320u: goto L_08905644;
    case 321u: goto L_08905668;
    case 322u: goto L_089056AC;
    case 323u: goto L_089056B8;
    case 324u: goto L_089056E8;
    case 325u: goto L_089056F8;
    case 326u: goto L_0890571C;
    case 327u: goto L_08905758;
    case 328u: goto L_08905764;
    case 329u: goto L_0890576C;
    case 330u: goto L_0890577C;
    case 331u: goto L_08905798;
    case 332u: goto L_089057A4;
    case 333u: goto L_089057B0;
    case 334u: goto L_089057C8;
    case 335u: goto L_08905800;
    case 336u: goto L_08905808;
    case 337u: goto L_0890582C;
    case 338u: goto L_08905834;
    case 339u: goto L_08905844;
    case 340u: goto L_08905878;
    case 341u: goto L_08905880;
    case 342u: goto L_08905884;
    case 343u: goto L_08905894;
    case 344u: goto L_089058A0;
    case 345u: goto L_089058F0;
    case 346u: goto L_089058FC;
    case 347u: goto L_08905904;
    case 348u: goto L_08905924;
    case 349u: goto L_08905968;
    case 350u: goto L_08905978;
    case 351u: goto L_08905994;
    case 352u: goto L_089059A8;
    case 353u: goto L_089059C0;
    case 354u: goto L_089059CC;
    case 355u: goto L_089059D8;
    case 356u: goto L_089059E4;
    case 357u: goto L_08905A0C;
    case 358u: goto L_08905A14;
    case 359u: goto L_08905A1C;
    case 360u: goto L_08905A2C;
    case 361u: goto L_08905A54;
    case 362u: goto L_08905A60;
    case 363u: goto L_08905A6C;
    case 364u: goto L_08905A74;
    case 365u: goto L_08905A78;
    case 366u: goto L_08905A98;
    case 367u: goto L_08905AC0;
    case 368u: goto L_08905ACC;
    case 369u: goto L_08905AD4;
    case 370u: goto L_08905AE0;
    case 371u: goto L_08905AEC;
    case 372u: goto L_08905AF8;
    case 373u: goto L_08905B00;
    case 374u: goto L_08905B0C;
    case 375u: goto L_08905B18;
    case 376u: goto L_08905B4C;
    case 377u: goto L_08905B5C;
    case 378u: goto L_08905B68;
    case 379u: goto L_08905B70;
    case 380u: goto L_08905BAC;
    case 381u: goto L_08905BBC;
    case 382u: goto L_08905BFC;
    case 383u: goto L_08905C18;
    case 384u: goto L_08905C20;
    case 385u: goto L_08905C2C;
    case 386u: goto L_08905C34;
    case 387u: goto L_08905C40;
    case 388u: goto L_08905C64;
    case 389u: goto L_08905C68;
    case 390u: goto L_08905C7C;
    case 391u: goto L_08905C84;
    case 392u: goto L_08905C90;
    case 393u: goto L_08905CC4;
    case 394u: goto L_08905CCC;
    case 395u: goto L_08905CD8;
    case 396u: goto L_08905CE4;
    case 397u: goto L_08905CF0;
    case 398u: goto L_08905D1C;
    case 399u: goto L_08905D30;
    case 400u: goto L_08905D50;
    case 401u: goto L_08905D74;
    case 402u: goto L_08905D80;
    case 403u: goto L_08905DB0;
    case 404u: goto L_08905DB4;
    case 405u: goto L_08905DBC;
    case 406u: goto L_08905DC8;
    case 407u: goto L_08905DD0;
    case 408u: goto L_08905DD4;
    case 409u: goto L_08905DE8;
    case 410u: goto L_08905DF8;
    case 411u: goto L_08905E04;
    case 412u: goto L_08905E0C;
    case 413u: goto L_08905E1C;
    case 414u: goto L_08905E28;
    case 415u: goto L_08905E30;
    case 416u: goto L_08905E3C;
    case 417u: goto L_08905E5C;
    case 418u: goto L_08905E7C;
    case 419u: goto L_08905E84;
    case 420u: goto L_08905E98;
    case 421u: goto L_08905EDC;
    case 422u: goto L_08905EE4;
    case 423u: goto L_08905EEC;
    case 424u: goto L_08905EF4;
    case 425u: goto L_08905F00;
    case 426u: goto L_08905F08;
    case 427u: goto L_08905F14;
    case 428u: goto L_08905F24;
    case 429u: goto L_08905F30;
    case 430u: goto L_08905F38;
    case 431u: goto L_08905F40;
    case 432u: goto L_08905F48;
    case 433u: goto L_08905F50;
    case 434u: goto L_08905F58;
    case 435u: goto L_08905F60;
    case 436u: goto L_08905F68;
    case 437u: goto L_08905F74;
    case 438u: goto L_08905F7C;
    case 439u: goto L_08905F8C;
    case 440u: goto L_08905FA0;
    case 441u: goto L_08905FB8;
    case 442u: goto L_08905FD0;
    case 443u: goto L_08905FD8;
    case 444u: goto L_08905FF0;
    case 445u: goto L_08906000;
    case 446u: goto L_08906010;
    case 447u: goto L_08906020;
    case 448u: goto L_08906030;
    case 449u: goto L_08906048;
    case 450u: goto L_08906058;
    case 451u: goto L_08906068;
    case 452u: goto L_08906078;
    case 453u: goto L_08906150;
    case 454u: goto L_08906170;
    case 455u: goto L_08906178;
    case 456u: goto L_0890618C;
    case 457u: goto L_0890619C;
    case 458u: goto L_089061A8;
    case 459u: goto L_089061B0;
    case 460u: goto L_089061BC;
    case 461u: goto L_089061D8;
    case 462u: goto L_089061F0;
    case 463u: goto L_089061F8;
    case 464u: goto L_08906204;
    case 465u: goto L_08906210;
    case 466u: goto L_08906224;
    case 467u: goto L_0890622C;
    case 468u: goto L_08906238;
    case 469u: goto L_08906244;
    case 470u: goto L_08906254;
    case 471u: goto L_0890625C;
    case 472u: goto L_08906268;
    case 473u: goto L_08906278;
    case 474u: goto L_08906280;
    case 475u: goto L_0890628C;
    case 476u: goto L_08906298;
    case 477u: goto L_089062C4;
    case 478u: goto L_089062CC;
    case 479u: goto L_089062D4;
    case 480u: goto L_089062DC;
    case 481u: goto L_089062E4;
    case 482u: goto L_089062EC;
    case 483u: goto L_089062F4;
    case 484u: goto L_089062FC;
    case 485u: goto L_08906304;
    case 486u: goto L_0890630C;
    case 487u: goto L_08906314;
    case 488u: goto L_0890631C;
    case 489u: goto L_08906324;
    case 490u: goto L_0890632C;
    case 491u: goto L_08906334;
    case 492u: goto L_0890633C;
    case 493u: goto L_08906344;
    case 494u: goto L_0890634C;
    case 495u: goto L_08906354;
    case 496u: goto L_0890635C;
    case 497u: goto L_08906364;
    case 498u: goto L_0890636C;
    case 499u: goto L_08906374;
    case 500u: goto L_0890637C;
    case 501u: goto L_08906384;
    case 502u: goto L_089063A4;
    case 503u: goto L_089063B8;
    case 504u: goto L_089063CC;
    case 505u: goto L_089063E0;
    case 506u: goto L_08906404;
    case 507u: goto L_08906410;
    case 508u: goto L_08906418;
    case 509u: goto L_08906424;
    case 510u: goto L_0890642C;
    case 511u: goto L_08906440;
    case 512u: goto L_08906454;
    case 513u: goto L_0890646C;
    case 514u: goto L_08906470;
    case 515u: goto L_08906478;
    case 516u: goto L_08906490;
    case 517u: goto L_0890649C;
    case 518u: goto L_089064B0;
    case 519u: goto L_089064BC;
    case 520u: goto L_089064C4;
    case 521u: goto L_089064D0;
    case 522u: goto L_089064D8;
    case 523u: goto L_089064EC;
    case 524u: goto L_08906500;
    case 525u: goto L_08906518;
    case 526u: goto L_0890651C;
    case 527u: goto L_08906524;
    case 528u: goto L_0890653C;
    case 529u: goto L_08906548;
    case 530u: goto L_08906564;
    case 531u: goto L_0890658C;
    case 532u: goto L_08906594;
    case 533u: goto L_089065A0;
    case 534u: goto L_089065AC;
    case 535u: goto L_089065BC;
    case 536u: goto L_089065CC;
    case 537u: goto L_089065D4;
    case 538u: goto L_089065E0;
    case 539u: goto L_089065EC;
    case 540u: goto L_08906600;
    case 541u: goto L_0890661C;
    case 542u: goto L_08906630;
    case 543u: goto L_0890663C;
    case 544u: goto L_08906644;
    case 545u: goto L_08906658;
    case 546u: goto L_08906688;
    case 547u: goto L_089066AC;
    case 548u: goto L_089066BC;
    case 549u: goto L_089066E4;
    case 550u: goto L_089066F0;
    case 551u: goto L_08906700;
    case 552u: goto L_08906710;
    case 553u: goto L_08906718;
    case 554u: goto L_08906724;
    case 555u: goto L_08906730;
    case 556u: goto L_08906744;
    case 557u: goto L_0890674C;
    case 558u: goto L_08906754;
    case 559u: goto L_08906760;
    case 560u: goto L_0890676C;
    case 561u: goto L_0890677C;
    case 562u: goto L_089067A0;
    case 563u: goto L_089067A8;
    case 564u: goto L_089067B4;
    case 565u: goto L_089067C0;
    case 566u: goto L_089067D4;
    case 567u: goto L_089067E0;
    case 568u: goto L_089067EC;
    case 569u: goto L_089067F8;
    case 570u: goto L_08906804;
    case 571u: goto L_08906810;
    case 572u: goto L_08906828;
    case 573u: goto L_08906834;
    case 574u: goto L_0890683C;
    case 575u: goto L_08906848;
    case 576u: goto L_08906850;
    case 577u: goto L_08906868;
    case 578u: goto L_0890687C;
    case 579u: goto L_08906888;
    case 580u: goto L_08906890;
    case 581u: goto L_08906898;
    case 582u: goto L_089068A8;
    case 583u: goto L_089068BC;
    case 584u: goto L_089068C8;
    case 585u: goto L_089068D0;
    case 586u: goto L_089068DC;
    case 587u: goto L_089068E8;
    case 588u: goto L_08906900;
    case 589u: goto L_08906910;
    case 590u: goto L_08906934;
    case 591u: goto L_08906958;
    case 592u: goto L_0890697C;
    case 593u: goto L_089069A0;
    case 594u: goto L_089069B0;
    case 595u: goto L_089069C0;
    case 596u: goto L_089069CC;
    case 597u: goto L_089069D8;
    case 598u: goto L_089069F0;
    case 599u: goto L_08906A0C;
    case 600u: goto L_08906A18;
    case 601u: goto L_08906A24;
    case 602u: goto L_08906A3C;
    case 603u: goto L_08906A48;
    case 604u: goto L_08906A54;
    case 605u: goto L_08906A64;
    case 606u: goto L_08906A7C;
    case 607u: goto L_08906A9C;
    case 608u: goto L_08906AA8;
    case 609u: goto L_08906AB4;
    case 610u: goto L_08906ABC;
    case 611u: goto L_08906AC8;
    case 612u: goto L_08906ADC;
    case 613u: goto L_08906AF0;
    case 614u: goto L_08906B08;
    case 615u: goto L_08906B1C;
    case 616u: goto L_08906B30;
    case 617u: goto L_08906B54;
    case 618u: goto L_08906B5C;
    case 619u: goto L_08906B68;
    case 620u: goto L_08906B84;
    case 621u: goto L_08906B9C;
    case 622u: goto L_08906BA4;
    case 623u: goto L_08906BB0;
    case 624u: goto L_08906BBC;
    case 625u: goto L_08906BC4;
    case 626u: goto L_08906BEC;
    case 627u: goto L_08906C10;
    case 628u: goto L_08906C2C;
    case 629u: goto L_08906C38;
    case 630u: goto L_08906C44;
    case 631u: goto L_08906C5C;
    case 632u: goto L_08906C68;
    case 633u: goto L_08906C8C;
    case 634u: goto L_08906C98;
    case 635u: goto L_08906CA4;
    case 636u: goto L_08906CB8;
    case 637u: goto L_08906CC8;
    case 638u: goto L_08906CD4;
    case 639u: goto L_08906CE0;
    case 640u: goto L_08906CF8;
    case 641u: goto L_08906D04;
    case 642u: goto L_08906D10;
    case 643u: goto L_08906D18;
    case 644u: goto L_08906D20;
    case 645u: goto L_08906D2C;
    case 646u: goto L_08906D34;
    case 647u: goto L_08906D44;
    case 648u: goto L_08906D54;
    case 649u: goto L_08906D5C;
    case 650u: goto L_08906D6C;
    case 651u: goto L_08906D78;
    case 652u: goto L_08906D88;
    case 653u: goto L_08906D90;
    case 654u: goto L_08906DA0;
    case 655u: goto L_08906DA4;
    case 656u: goto L_08906DB0;
    case 657u: goto L_08906DBC;
    case 658u: goto L_08906DC8;
    case 659u: goto L_08906DD0;
    case 660u: goto L_08906DDC;
    case 661u: goto L_08906DE4;
    case 662u: goto L_08906E08;
    case 663u: goto L_08906E20;
    case 664u: goto L_08906E40;
    case 665u: goto L_08906E48;
    case 666u: goto L_08906E54;
    case 667u: goto L_08906E60;
    case 668u: goto L_08906E78;
    case 669u: goto L_08906E88;
    case 670u: goto L_08906E9C;
    case 671u: goto L_08906EAC;
    case 672u: goto L_08906EBC;
    case 673u: goto L_08906EE4;
    case 674u: goto L_08906F28;
    case 675u: goto L_08906F30;
    case 676u: goto L_08906F3C;
    case 677u: goto L_08906F78;
    case 678u: goto L_08906F7C;
    case 679u: goto L_08906F88;
    case 680u: goto L_08906F90;
    case 681u: goto L_08906FA4;
    case 682u: goto L_08906FB0;
    case 683u: goto L_08906FC4;
    case 684u: goto L_08906FD0;
    case 685u: goto L_08906FD8;
    case 686u: goto L_08906FE4;
    case 687u: goto L_08906FEC;
    case 688u: goto L_08906FFC;
    case 689u: goto L_08907010;
    case 690u: goto L_08907020;
    case 691u: goto L_08907038;
    case 692u: goto L_0890704C;
    case 693u: goto L_08907054;
    case 694u: goto L_08907058;
    case 695u: goto L_08907068;
    case 696u: goto L_0890707C;
    case 697u: goto L_0890708C;
    case 698u: goto L_089070A0;
    case 699u: goto L_089070B0;
    case 700u: goto L_089070D8;
    case 701u: goto L_089070F0;
    case 702u: goto L_089070F4;
    case 703u: goto L_08907108;
    case 704u: goto L_08907118;
    case 705u: goto L_08907134;
    case 706u: goto L_08907168;
    case 707u: goto L_08907188;
    case 708u: goto L_0890718C;
    case 709u: goto L_08907198;
    case 710u: goto L_089071B8;
    case 711u: goto L_089071D8;
    case 712u: goto L_089071E8;
    case 713u: goto L_089071F4;
    case 714u: goto L_089071F8;
    case 715u: goto L_08907200;
    case 716u: goto L_0890720C;
    case 717u: goto L_08907218;
    case 718u: goto L_08907230;
    case 719u: goto L_08907250;
    case 720u: goto L_08907260;
    case 721u: goto L_0890726C;
    case 722u: goto L_08907270;
    case 723u: goto L_08907278;
    case 724u: goto L_08907284;
    case 725u: goto L_08907290;
    case 726u: goto L_089072A8;
    case 727u: goto L_089072C8;
    case 728u: goto L_089072D8;
    case 729u: goto L_089072E4;
    case 730u: goto L_089072E8;
    case 731u: goto L_089072F0;
    case 732u: goto L_089072FC;
    case 733u: goto L_08907308;
    case 734u: goto L_08907320;
    case 735u: goto L_08907338;
    case 736u: goto L_08907344;
    case 737u: goto L_08907354;
    case 738u: goto L_08907360;
    case 739u: goto L_08907364;
    case 740u: goto L_08907378;
    case 741u: goto L_08907390;
    case 742u: goto L_0890739C;
    case 743u: goto L_089073AC;
    case 744u: goto L_089073B8;
    case 745u: goto L_089073BC;
    case 746u: goto L_089073D0;
    case 747u: goto L_089073E8;
    case 748u: goto L_089073F8;
    case 749u: goto L_08907404;
    case 750u: goto L_08907408;
    case 751u: goto L_0890741C;
    case 752u: goto L_08907434;
    case 753u: goto L_08907454;
    case 754u: goto L_08907460;
    case 755u: goto L_08907468;
    case 756u: goto L_08907474;
    case 757u: goto L_08907480;
    case 758u: goto L_0890749C;
    case 759u: goto L_089074C4;
    case 760u: goto L_089074CC;
    case 761u: goto L_089074DC;
    case 762u: goto L_089074F0;
    case 763u: goto L_089074F8;
    case 764u: goto L_08907508;
    case 765u: goto L_08907514;
    case 766u: goto L_0890751C;
    case 767u: goto L_08907528;
    case 768u: goto L_08907544;
    case 769u: goto L_08907550;
    case 770u: goto L_08907558;
    case 771u: goto L_08907564;
    case 772u: goto L_08907584;
    case 773u: goto L_08907588;
    case 774u: goto L_089075BC;
    case 775u: goto L_089075D8;
    case 776u: goto L_089075E0;
    case 777u: goto L_089075EC;
    case 778u: goto L_089075F8;
    case 779u: goto L_08907610;
    case 780u: goto L_08907628;
    case 781u: goto L_08907638;
    case 782u: goto L_08907648;
    case 783u: goto L_08907678;
    case 784u: goto L_08907680;
    case 785u: goto L_08907688;
    case 786u: goto L_089076A0;
    case 787u: goto L_089076AC;
    case 788u: goto L_089076BC;
    case 789u: goto L_089076C8;
    case 790u: goto L_089076D0;
    case 791u: goto L_089076DC;
    case 792u: goto L_089076E4;
    case 793u: goto L_089076F8;
    case 794u: goto L_0890770C;
    case 795u: goto L_08907724;
    case 796u: goto L_08907728;
    case 797u: goto L_08907730;
    case 798u: goto L_08907748;
    case 799u: goto L_08907754;
    case 800u: goto L_08907760;
    case 801u: goto L_08907770;
    case 802u: goto L_0890777C;
    case 803u: goto L_08907784;
    case 804u: goto L_08907790;
    case 805u: goto L_08907798;
    case 806u: goto L_089077AC;
    case 807u: goto L_089077C0;
    case 808u: goto L_089077D8;
    case 809u: goto L_089077DC;
    case 810u: goto L_089077E4;
    case 811u: goto L_089077FC;
    case 812u: goto L_08907808;
    case 813u: goto L_0890780C;
    case 814u: goto L_08907820;
    case 815u: goto L_08907838;
    case 816u: goto L_0890783C;
    case 817u: goto L_08907844;
    case 818u: goto L_08907850;
    case 819u: goto L_08907860;
    case 820u: goto L_08907878;
    case 821u: goto L_0890787C;
    case 822u: goto L_08907884;
    case 823u: goto L_0890789C;
    case 824u: goto L_089078A8;
    case 825u: goto L_089078C4;
    case 826u: goto L_089078D8;
    case 827u: goto L_089078E8;
    case 828u: goto L_089078F8;
    case 829u: goto L_08907924;
    case 830u: goto L_08907930;
    case 831u: goto L_08907940;
    case 832u: goto L_08907950;
    case 833u: goto L_08907968;
    case 834u: goto L_08907998;
    case 835u: goto L_089079A4;
    case 836u: goto L_089079B4;
    case 837u: goto L_089079C4;
    case 838u: goto L_089079D8;
    case 839u: goto L_089079E8;
    case 840u: goto L_089079FC;
    case 841u: goto L_08907A0C;
    case 842u: goto L_08907A24;
    case 843u: goto L_08907A3C;
    case 844u: goto L_08907A50;
    case 845u: goto L_08907A6C;
    case 846u: goto L_08907A80;
    case 847u: goto L_08907A98;
    case 848u: goto L_08907AB0;
    case 849u: goto L_08907AE0;
    case 850u: goto L_08907AF4;
    case 851u: goto L_08907AFC;
    case 852u: goto L_08907B1C;
    case 853u: goto L_08907B34;
    case 854u: goto L_08907B50;
    case 855u: goto L_08907B5C;
    case 856u: goto L_08907B64;
    case 857u: goto L_08907B6C;
    case 858u: goto L_08907B78;
    case 859u: goto L_08907B84;
    case 860u: goto L_08907B94;
    case 861u: goto L_08907BA0;
    case 862u: goto L_08907BA8;
    case 863u: goto L_08907BB0;
    case 864u: goto L_08907BC0;
    case 865u: goto L_08907BD8;
    case 866u: goto L_08907BF0;
    case 867u: goto L_08907C00;
    case 868u: goto L_08907C18;
    case 869u: goto L_08907C1C;
    case 870u: goto L_08907C24;
    case 871u: goto L_08907C3C;
    case 872u: goto L_08907C48;
    case 873u: goto L_08907C68;
    case 874u: goto L_08907C70;
    case 875u: goto L_08907C7C;
    case 876u: goto L_08907CA4;
    case 877u: goto L_08907CB0;
    case 878u: goto L_08907CB4;
    case 879u: goto L_08907CC0;
    case 880u: goto L_08907CC4;
    case 881u: goto L_08907CCC;
    case 882u: goto L_08907CF4;
    case 883u: goto L_08907CFC;
    case 884u: goto L_08907D10;
    case 885u: goto L_08907D2C;
    case 886u: goto L_08907D38;
    case 887u: goto L_08907D54;
    case 888u: goto L_08907D5C;
    case 889u: goto L_08907D6C;
    case 890u: goto L_08907D9C;
    case 891u: goto L_08907DB4;
    case 892u: goto L_08907DB8;
    case 893u: goto L_08907DC0;
    case 894u: goto L_08907DD8;
    case 895u: goto L_08907DE4;
    case 896u: goto L_08907DF4;
    case 897u: goto L_08907E08;
    case 898u: goto L_08907E28;
    case 899u: goto L_08907E30;
    case 900u: goto L_08907E50;
    case 901u: goto L_08907E68;
    case 902u: goto L_08907E70;
    case 903u: goto L_08907E84;
    case 904u: goto L_08907E94;
    case 905u: goto L_08907EAC;
    case 906u: goto L_08907EB0;
    case 907u: goto L_08907EB8;
    case 908u: goto L_08907ED0;
    case 909u: goto L_08907EDC;
    case 910u: goto L_08907EF8;
    case 911u: goto L_08907F44;
    case 912u: goto L_08907F6C;
    case 913u: goto L_08907F8C;
    case 914u: goto L_08907FA4;
    case 915u: goto L_08907FA8;
    case 916u: goto L_08907FB0;
    case 917u: goto L_08907FBC;
    case 918u: goto L_08907FD8;
    case 919u: goto L_08907FE8;
    case 920u: goto L_08907FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08904000:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904074;
      }
      goto L_0890400C;
    }
L_0890400C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904064;
      }
      goto L_08904020;
    }
L_08904020:
    ctx.set_gpr(5, ctx.gpr[10] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08904060;
      }
      goto L_08904048;
    }
L_08904048:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904074;
      }
      goto L_08904060;
    }
L_08904060:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08904064;
L_08904064:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904020;
      }
      goto L_08904070;
    }
L_08904070:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08904074;
L_08904074:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089040A4;
      }
      goto L_0890407C;
    }
L_0890407C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0890409Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0890409Cu) goto L_0890409C;
    return;
L_0890409C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089043B8;
      }
      goto L_089040A4;
    }
L_089040A4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089040B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 584u, 0x08902EC8u>(ctx, &aot_mem) && ctx.pc == 0x089040B0u) goto L_089040B0;
    return;
L_089040B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904218;
      }
      goto L_089040BC;
    }
L_089040BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(22, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904104;
      }
      goto L_089040DC;
    }
L_089040DC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089040E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089040E8u) goto L_089040E8;
    return;
L_089040E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089040FC;
      }
      goto L_089040F0;
    }
L_089040F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089040FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089040FCu) goto L_089040FC;
    return;
L_089040FC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08904104;
L_08904104:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08904118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08904118u) goto L_08904118;
    return;
L_08904118:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904140;
      }
      goto L_0890412C;
    }
L_0890412C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08904138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08904138u) goto L_08904138;
    return;
L_08904138:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08904140;
L_08904140:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904158;
      }
      goto L_08904148;
    }
L_08904148:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08904158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08904158u) goto L_08904158;
    return;
L_08904158:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08904178u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08904178u) goto L_08904178;
    return;
L_08904178:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089043B8;
      }
      goto L_08904180;
    }
L_08904180:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t dividend = ctx.gpr[21]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089043B8;
      }
      goto L_089041B0;
    }
L_089041B0:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904204;
      }
      goto L_089041C4;
    }
L_089041C4:
    ctx.set_gpr(6, ctx.gpr[10] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08904200;
      }
      goto L_089041EC;
    }
L_089041EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089043B8;
      }
      goto L_08904200;
    }
L_08904200:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08904204;
L_08904204:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089041C4;
      }
      goto L_08904210;
    }
L_08904210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089043B8;
      }
      goto L_08904218;
    }
L_08904218:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089043B8;
      }
      goto L_08904224;
    }
L_08904224:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(22, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t dividend = ctx.gpr[21]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(23, ctx.hi);
    ctx.set_gpr(30, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[30]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089042C4;
      }
      goto L_08904258;
    }
L_08904258:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08904264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08904264u) goto L_08904264;
    return;
L_08904264:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08904270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 472u, 0x088D58ACu>(ctx, &aot_mem) && ctx.pc == 0x08904270u) goto L_08904270;
    return;
L_08904270:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08904284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x08904284u) goto L_08904284;
    return;
L_08904284:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[30]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08904298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08904298u) goto L_08904298;
    return;
L_08904298:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x089042ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x089042ACu) goto L_089042AC;
    return;
L_089042AC:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089042C4;
      }
      goto L_089042B8;
    }
L_089042B8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089042C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089042C4u) goto L_089042C4;
    return;
L_089042C4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904318;
      }
      goto L_089042D8;
    }
L_089042D8:
    ctx.set_gpr(5, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08904314;
      }
      goto L_08904300;
    }
L_08904300:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089043A4;
      }
      goto L_08904314;
    }
L_08904314:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08904318;
L_08904318:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089042D8;
      }
      goto L_08904324;
    }
L_08904324:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089043A4;
      }
      goto L_0890432C;
    }
L_0890432C:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08904344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 665u, 0x08903534u>(ctx, &aot_mem) && ctx.pc == 0x08904344u) goto L_08904344;
    return;
L_08904344:
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0890436Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x0890436Cu) goto L_0890436C;
    return;
L_0890436C:
    ctx.set_gpr(3, ctx.gpr[23] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08904384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 659u, 0x089034ECu>(ctx, &aot_mem) && ctx.pc == 0x08904384u) goto L_08904384;
    return;
L_08904384:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08904390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x08904390u) goto L_08904390;
    return;
L_08904390:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_089043A4;
L_089043A4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089043B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089043B8u) goto L_089043B8;
    return;
L_089043B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089044E8;
      }
      goto L_089043C4;
    }
L_089043C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089044A4;
      }
      goto L_089043D0;
    }
L_089043D0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089043DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089043DCu) goto L_089043DC;
    return;
L_089043DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089043E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 310u, 0x088E5988u>(ctx, &aot_mem) && ctx.pc == 0x089043E8u) goto L_089043E8;
    return;
L_089043E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089043F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089043F8u) goto L_089043F8;
    return;
L_089043F8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08904414u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08904414u) goto L_08904414;
    return;
L_08904414:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08904434u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08904434u) goto L_08904434;
    return;
L_08904434:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089044A4;
      }
      goto L_0890443C;
    }
L_0890443C:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904458;
      }
      goto L_0890444C;
    }
L_0890444C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08904458;
L_08904458:
    ctx.set_gpr(22, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904478;
      }
      goto L_08904470;
    }
L_08904470:
    ctx.set_gpr(31, 0x08904478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08904478u) goto L_08904478;
    return;
L_08904478:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089044A4;
      }
      goto L_08904484;
    }
L_08904484:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089044A4;
      }
      goto L_0890448C;
    }
L_0890448C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089044A4;
      }
      goto L_08904498;
    }
L_08904498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_089044A4;
L_089044A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089044C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089044C0u) goto L_089044C0;
    return;
L_089044C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089044E8;
      }
      goto L_089044C8;
    }
L_089044C8:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_089044E8;
L_089044E8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904644;
      }
      goto L_089044F0;
    }
L_089044F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14448));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904514;
      }
      goto L_08904508;
    }
L_08904508:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904564;
      }
      goto L_08904514;
    }
L_08904514:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890454C;
      }
      goto L_08904524;
    }
L_08904524:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08904530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08904530u) goto L_08904530;
    return;
L_08904530:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904544;
      }
      goto L_08904538;
    }
L_08904538:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08904544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08904544u) goto L_08904544;
    return;
L_08904544:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0890454C;
L_0890454C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-14448));
    ctx.set_gpr(31, 0x08904564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08904564u) goto L_08904564;
    return;
L_08904564:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904588;
      }
      goto L_08904574;
    }
L_08904574:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08904580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08904580u) goto L_08904580;
    return;
L_08904580:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08904588;
L_08904588:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089045A8;
      }
      goto L_08904590;
    }
L_08904590:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0890459Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x0890459Cu) goto L_0890459C;
    return;
L_0890459C:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089045A8u);
    // nop
    goto L_08904690;
L_089045A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089045CC;
      }
      goto L_089045B8;
    }
L_089045B8:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089045C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089045C4u) goto L_089045C4;
    return;
L_089045C4:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089045CC;
L_089045CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089045E4;
      }
      goto L_089045D4;
    }
L_089045D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089045E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089045E4u) goto L_089045E4;
    return;
L_089045E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904618;
      }
      goto L_089045FC;
    }
L_089045FC:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904618;
      }
      goto L_08904614;
    }
L_08904614:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08904618;
L_08904618:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904644;
      }
      goto L_08904620;
    }
L_08904620:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904644;
      }
      goto L_08904638;
    }
L_08904638:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08904644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08904644u) goto L_08904644;
    return;
L_08904644:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904658;
      }
      goto L_08904650;
    }
L_08904650:
    ctx.set_gpr(31, 0x08904658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08904658u) goto L_08904658;
    return;
L_08904658:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_08904690:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089046A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x089046E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 789u, 0x08903D1Cu>(ctx, &aot_mem) && ctx.pc == 0x089046E0u) goto L_089046E0;
    return;
L_089046E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08904710;
      }
      goto L_089046EC;
    }
L_089046EC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089048A8;
      }
      goto L_089046F8;
    }
L_089046F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08904708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 821u, 0x08903F24u>(ctx, &aot_mem) && ctx.pc == 0x08904708u) goto L_08904708;
    return;
L_08904708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089048A8;
      }
      goto L_08904710;
    }
L_08904710:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904744;
      }
      goto L_08904728;
    }
L_08904728:
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] << 10u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] >> 6u);
    ctx.set_gpr(4, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08904744;
L_08904744:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904728;
      }
      goto L_08904750;
    }
L_08904750:
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] >> 11u);
    ctx.set_gpr(4, ctx.gpr[4] ^ ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] << 15u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(11, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(4, ctx.hi);
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_089047A4;
      }
      goto L_08904798;
    }
L_08904798:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890480C;
      }
      goto L_089047A4;
    }
L_089047A4:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(12, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089047FC;
      }
      goto L_089047B8;
    }
L_089047B8:
    ctx.set_gpr(7, ctx.gpr[12] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089047F8;
      }
      goto L_089047E0;
    }
L_089047E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890480C;
      }
      goto L_089047F8;
    }
L_089047F8:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_089047FC;
L_089047FC:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089047B8;
      }
      goto L_08904808;
    }
L_08904808:
    ctx.set_gpr(4, 0u + 0u);
    goto L_0890480C;
L_0890480C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890483C;
      }
      goto L_08904814;
    }
L_08904814:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089048A8;
      }
      goto L_0890483C;
    }
L_0890483C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0890484Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 821u, 0x08903F24u>(ctx, &aot_mem) && ctx.pc == 0x0890484Cu) goto L_0890484C;
    return;
L_0890484C:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890489C;
      }
      goto L_08904858;
    }
L_08904858:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08904878u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08904878u) goto L_08904878;
    return;
L_08904878:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890489C;
      }
      goto L_08904884;
    }
L_08904884:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08904898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 614u, 0x0890311Cu>(ctx, &aot_mem) && ctx.pc == 0x08904898u) goto L_08904898;
    return;
L_08904898:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    goto L_0890489C;
L_0890489C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089048A8;
      }
      goto L_089048A4;
    }
L_089048A4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_089048A8;
L_089048A8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089048C0;
      }
      goto L_089048B4;
    }
L_089048B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089048C0;
L_089048C0:
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
L_089048E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904920;
      }
      goto L_08904914;
    }
L_08904914:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08904C50;
      }
      goto L_08904920;
    }
L_08904920:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0890493Cu);
    // nop
    goto L_08904D1C;
L_0890493C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08904954u);
    // nop
    goto L_08904C78;
L_08904954:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904AFC;
      }
      goto L_0890495C;
    }
L_0890495C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890498C;
      }
      goto L_08904980;
    }
L_08904980:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0890498C;
L_0890498C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904AD4;
      }
      goto L_08904998;
    }
L_08904998:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08904A24;
      }
      goto L_089049A8;
    }
L_089049A8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089049B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 584u, 0x08902EC8u>(ctx, &aot_mem) && ctx.pc == 0x089049B4u) goto L_089049B4;
    return;
L_089049B4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089049D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089049D8u) goto L_089049D8;
    return;
L_089049D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904A24;
      }
      goto L_089049E0;
    }
L_089049E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904A24;
      }
      goto L_089049F4;
    }
L_089049F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08904A24;
      }
      goto L_089049FC;
    }
L_089049FC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904A24;
      }
      goto L_08904A08;
    }
L_08904A08:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08904A24;
L_08904A24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904AC8;
      }
      goto L_08904A44;
    }
L_08904A44:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08904A5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08904A5Cu) goto L_08904A5C;
    return;
L_08904A5C:
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904AE0;
      }
      goto L_08904A68;
    }
L_08904A68:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904A94;
      }
      goto L_08904A8C;
    }
L_08904A8C:
    ctx.set_gpr(31, 0x08904A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08904A94u) goto L_08904A94;
    return;
L_08904A94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904AE0;
      }
      goto L_08904AA0;
    }
L_08904AA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08904AE0;
      }
      goto L_08904AA8;
    }
L_08904AA8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904AE0;
      }
      goto L_08904AB4;
    }
L_08904AB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904AE0;
      }
      goto L_08904AC8;
    }
L_08904AC8:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904AE0;
      }
      goto L_08904AD4;
    }
L_08904AD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    goto L_08904AE0;
L_08904AE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904C50;
      }
      goto L_08904AEC;
    }
L_08904AEC:
    ctx.set_gpr(31, 0x08904AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08904AF4u) goto L_08904AF4;
    return;
L_08904AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904C50;
      }
      goto L_08904AFC;
    }
L_08904AFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14404));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904B20;
      }
      goto L_08904B14;
    }
L_08904B14:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904B70;
      }
      goto L_08904B20;
    }
L_08904B20:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904B58;
      }
      goto L_08904B30;
    }
L_08904B30:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08904B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08904B3Cu) goto L_08904B3C;
    return;
L_08904B3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904B50;
      }
      goto L_08904B44;
    }
L_08904B44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08904B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08904B50u) goto L_08904B50;
    return;
L_08904B50:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08904B58;
L_08904B58:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-14404));
    ctx.set_gpr(31, 0x08904B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08904B70u) goto L_08904B70;
    return;
L_08904B70:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904B94;
      }
      goto L_08904B80;
    }
L_08904B80:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08904B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08904B8Cu) goto L_08904B8C;
    return;
L_08904B8C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08904B94;
L_08904B94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904BB4;
      }
      goto L_08904B9C;
    }
L_08904B9C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08904BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08904BA8u) goto L_08904BA8;
    return;
L_08904BA8:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08904BB4u);
    // nop
    goto L_08904690;
L_08904BB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904BD8;
      }
      goto L_08904BC4;
    }
L_08904BC4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08904BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08904BD0u) goto L_08904BD0;
    return;
L_08904BD0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08904BD8;
L_08904BD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904BF0;
      }
      goto L_08904BE0;
    }
L_08904BE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08904BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08904BF0u) goto L_08904BF0;
    return;
L_08904BF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904C24;
      }
      goto L_08904C08;
    }
L_08904C08:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904C24;
      }
      goto L_08904C20;
    }
L_08904C20:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08904C24;
L_08904C24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904C50;
      }
      goto L_08904C2C;
    }
L_08904C2C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904C50;
      }
      goto L_08904C44;
    }
L_08904C44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08904C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08904C50u) goto L_08904C50;
    return;
L_08904C50:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08904C78:
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
          goto L_08904CA8;
      }
      goto L_08904C9C;
    }
L_08904C9C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904D14;
      }
      goto L_08904CA8;
    }
L_08904CA8:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(11, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904D04;
      }
      goto L_08904CBC;
    }
L_08904CBC:
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
          goto L_08904D00;
      }
      goto L_08904CE4;
    }
L_08904CE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904D14;
      }
      goto L_08904D00;
    }
L_08904D00:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    goto L_08904D04;
L_08904D04:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904CBC;
      }
      goto L_08904D10;
    }
L_08904D10:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08904D14;
L_08904D14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904D1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904D50;
      }
      goto L_08904D34;
    }
L_08904D34:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] >> 6u);
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08904D50;
L_08904D50:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904D34;
      }
      goto L_08904D5C;
    }
L_08904D5C:
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] >> 11u);
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 15u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904D7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904DC8;
      }
      goto L_08904DA0;
    }
L_08904DA0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904DB8;
      }
      goto L_08904DAC;
    }
L_08904DAC:
    ctx.set_gpr(1, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904DC8;
      }
      goto L_08904DB8;
    }
L_08904DB8:
    ctx.set_gpr(2, 61u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 2304u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    goto L_08904DC8;
L_08904DC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08904DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08904DD8u) goto L_08904DD8;
    return;
L_08904DD8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32504)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08904DFC;
      }
      goto L_08904DEC;
    }
L_08904DEC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904E14;
      }
      goto L_08904DFC;
    }
L_08904DFC:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08904E14;
L_08904E14:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08904E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 345u, 0x0880DD08u>(ctx, &aot_mem) && ctx.pc == 0x08904E20u) goto L_08904E20;
    return;
L_08904E20:
    ctx.set_gpr(2, 20224u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904E48;
      }
      goto L_08904E38;
    }
L_08904E38:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904E5C;
      }
      goto L_08904E48;
    }
L_08904E48:
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    goto L_08904E5C;
L_08904E5C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08904E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 670u, 0x08903578u>(ctx, &aot_mem) && ctx.pc == 0x08904E74u) goto L_08904E74;
    return;
L_08904E74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904E88:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904E94:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08904EA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08904ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 557u, 0x08902CD4u>(ctx, &aot_mem) && ctx.pc == 0x08904ED0u) goto L_08904ED0;
    return;
L_08904ED0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089051CC;
      }
      goto L_08904EDC;
    }
L_08904EDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089051CC;
      }
      goto L_08904EEC;
    }
L_08904EEC:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    goto L_08904EF4;
L_08904EF4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08904F0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08904F0Cu) goto L_08904F0C;
    return;
L_08904F0C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
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
          goto L_08904F48;
      }
      goto L_08904F3C;
    }
L_08904F3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08904F48;
L_08904F48:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(21, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904F74;
      }
      goto L_08904F6C;
    }
L_08904F6C:
    ctx.set_gpr(31, 0x08904F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08904F74u) goto L_08904F74;
    return;
L_08904F74:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08904F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08904F84u) goto L_08904F84;
    return;
L_08904F84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904FD8;
      }
      goto L_08904FB8;
    }
L_08904FB8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08904FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 821u, 0x08903F24u>(ctx, &aot_mem) && ctx.pc == 0x08904FC8u) goto L_08904FC8;
    return;
L_08904FC8:
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904FD8;
      }
      goto L_08904FD4;
    }
L_08904FD4:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    goto L_08904FD8;
L_08904FD8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905100;
      }
      goto L_08904FE0;
    }
L_08904FE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890503C;
      }
      goto L_08904FF0;
    }
L_08904FF0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890503C;
      }
      goto L_0890500C;
    }
L_0890500C:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905024;
      }
      goto L_08905018;
    }
L_08905018:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890503C;
      }
      goto L_08905024;
    }
L_08905024:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890503Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890503Cu) goto L_0890503C;
    return;
L_0890503C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089050C4;
      }
      goto L_0890504C;
    }
L_0890504C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08905124;
      }
      goto L_08905088;
    }
L_08905088:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089050B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089050B0u) goto L_089050B0;
    return;
L_089050B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905124;
      }
      goto L_089050B8;
    }
L_089050B8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905124;
      }
      goto L_089050C4;
    }
L_089050C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089050ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089050ECu) goto L_089050EC;
    return;
L_089050EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905124;
      }
      goto L_089050F4;
    }
L_089050F4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905124;
      }
      goto L_08905100;
    }
L_08905100:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089051CC;
      }
      goto L_08905114;
    }
L_08905114:
    ctx.set_gpr(31, 0x0890511Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0890511Cu) goto L_0890511C;
    return;
L_0890511C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089051CC;
      }
      goto L_08905124;
    }
L_08905124:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890513Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890513Cu) goto L_0890513C;
    return;
L_0890513C:
    ctx.set_gpr(4, ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[22]);
    ctx.set_gpr(16, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905174;
      }
      goto L_0890516C;
    }
L_0890516C:
    ctx.set_gpr(31, 0x08905174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08905174u) goto L_08905174;
    return;
L_08905174:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089051CC;
      }
      goto L_08905180;
    }
L_08905180:
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089051CC;
      }
      goto L_089051A4;
    }
L_089051A4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089051BC;
      }
      goto L_089051B0;
    }
L_089051B0:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089051CC;
      }
      goto L_089051BC;
    }
L_089051BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904EF4;
      }
      goto L_089051CC;
    }
L_089051CC:
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
L_089051F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890537C;
      }
      goto L_08905234;
    }
L_08905234:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08905258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 605u, 0x08903040u>(ctx, &aot_mem) && ctx.pc == 0x08905258u) goto L_08905258;
    return;
L_08905258:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905354;
      }
      goto L_08905270;
    }
L_08905270:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0890527Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0890527Cu) goto L_0890527C;
    return;
L_0890527C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08905288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 236u, 0x088E52F4u>(ctx, &aot_mem) && ctx.pc == 0x08905288u) goto L_08905288;
    return;
L_08905288:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089052AC;
      }
      goto L_08905294;
    }
L_08905294:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089052AC;
      }
      goto L_0890529C;
    }
L_0890529C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_089052AC;
L_089052AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, ctx.gpr[2] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089052F4;
      }
      goto L_089052D4;
    }
L_089052D4:
    ctx.set_gpr(1, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089052EC;
      }
      goto L_089052E0;
    }
L_089052E0:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089052F4;
      }
      goto L_089052EC;
    }
L_089052EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089052F8;
      }
      goto L_089052F4;
    }
L_089052F4:
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    goto L_089052F8;
L_089052F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08905318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08905318u) goto L_08905318;
    return;
L_08905318:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08905340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08905340u) goto L_08905340;
    return;
L_08905340:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905354;
      }
      goto L_0890534C;
    }
L_0890534C:
    ctx.set_gpr(31, 0x08905354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08905354u) goto L_08905354;
    return;
L_08905354:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905270;
      }
      goto L_08905360;
    }
L_08905360:
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905378;
      }
      goto L_0890536C;
    }
L_0890536C:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905270;
      }
      goto L_08905378;
    }
L_08905378:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0890537C;
L_0890537C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905234;
      }
      goto L_0890538C;
    }
L_0890538C:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905404;
      }
      goto L_08905398;
    }
L_08905398:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[19]);
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905400;
      }
      goto L_089053B4;
    }
L_089053B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08905400;
      }
      goto L_089053BC;
    }
L_089053BC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905400;
      }
      goto L_089053C8;
    }
L_089053C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08905400;
      }
      goto L_089053D0;
    }
L_089053D0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905400;
      }
      goto L_089053DC;
    }
L_089053DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08905400;
L_08905400:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08905404;
L_08905404:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08905420;
      }
      goto L_08905418;
    }
L_08905418:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08905420;
L_08905420:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905398;
      }
      goto L_0890542C;
    }
L_0890542C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_0890545C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905464:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905470:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890547C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905498;
      }
      goto L_0890548C;
    }
L_0890548C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08905498;
L_08905498:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089054A0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089054BC;
      }
      goto L_089054B0;
    }
L_089054B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089054BC;
L_089054BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089054C4:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089054D0:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089054DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089054F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 557u, 0x08902CD4u>(ctx, &aot_mem) && ctx.pc == 0x089054F4u) goto L_089054F4;
    return;
L_089054F4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905548;
      }
      goto L_08905500;
    }
L_08905500:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08905548;
      }
      goto L_08905510;
    }
L_08905510:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905528;
      }
      goto L_08905520;
    }
L_08905520:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890553C;
      }
      goto L_08905528;
    }
L_08905528:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08905534u);
    // nop
    goto L_0890555C;
L_08905534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905548;
      }
      goto L_0890553C;
    }
L_0890553C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08905548u);
    // nop
    goto L_08905668;
L_08905548:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890555C:
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
    goto L_08905584;
L_08905584:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0890559Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890559Cu) goto L_0890559C;
    return;
L_0890559C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089055B0u);
    // nop
    goto L_08905668;
L_089055B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089055C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089055C8u) goto L_089055C8;
    return;
L_089055C8:
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
          goto L_08905644;
      }
      goto L_089055F8;
    }
L_089055F8:
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
          goto L_08905644;
      }
      goto L_0890561C;
    }
L_0890561C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905634;
      }
      goto L_08905628;
    }
L_08905628:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905644;
      }
      goto L_08905634;
    }
L_08905634:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905584;
      }
      goto L_08905644;
    }
L_08905644:
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
L_08905668:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089056B8;
      }
      goto L_089056AC;
    }
L_089056AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089056B8;
L_089056B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905764;
      }
      goto L_089056E8;
    }
L_089056E8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089056F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 821u, 0x08903F24u>(ctx, &aot_mem) && ctx.pc == 0x089056F8u) goto L_089056F8;
    return;
L_089056F8:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30560), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30564), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905764;
      }
      goto L_0890571C;
    }
L_0890571C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30536)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30540)));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30536), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30540), ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31436)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905764;
      }
      goto L_08905758;
    }
L_08905758:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08905764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08905764u) goto L_08905764;
    return;
L_08905764:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089058F0;
      }
      goto L_0890576C;
    }
L_0890576C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089057C8;
      }
      goto L_0890577C;
    }
L_0890577C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089057C8;
      }
      goto L_08905798;
    }
L_08905798:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089057B0;
      }
      goto L_089057A4;
    }
L_089057A4:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089057C8;
      }
      goto L_089057B0;
    }
L_089057B0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089057C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089057C8u) goto L_089057C8;
    return;
L_089057C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30560)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30564)));
    ctx.set_gpr(5, ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[7] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089058F0;
      }
      goto L_08905800;
    }
L_08905800:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089058F0;
      }
      goto L_08905808;
    }
L_08905808:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905834;
      }
      goto L_0890582C;
    }
L_0890582C:
    ctx.set_gpr(31, 0x08905834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08905834u) goto L_08905834;
    return;
L_08905834:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08905844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08905844u) goto L_08905844;
    return;
L_08905844:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08905878u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08905878u) goto L_08905878;
    return;
L_08905878:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905884;
      }
      goto L_08905880;
    }
L_08905880:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    goto L_08905884;
L_08905884:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31436)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089058A0;
      }
      goto L_08905894;
    }
L_08905894:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089058A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x089058A0u) goto L_089058A0;
    return;
L_089058A0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[7] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30528)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30532)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30528), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30532), ctx.gpr[4]);
    goto L_089058F0;
L_089058F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905904;
      }
      goto L_089058FC;
    }
L_089058FC:
    ctx.set_gpr(31, 0x08905904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08905904u) goto L_08905904;
    return;
L_08905904:
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
L_08905924:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08905968u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08905968u) goto L_08905968;
    return;
L_08905968:
    ctx.set_gpr(23, ctx.gpr[2] & 255u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905BAC;
      }
      goto L_08905978;
    }
L_08905978:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905B00;
      }
      goto L_08905994;
    }
L_08905994:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x089059A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 605u, 0x08903040u>(ctx, &aot_mem) && ctx.pc == 0x089059A8u) goto L_089059A8;
    return;
L_089059A8:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905AD4;
      }
      goto L_089059C0;
    }
L_089059C0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089059CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089059CCu) goto L_089059CC;
    return;
L_089059CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089059D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 236u, 0x088E52F4u>(ctx, &aot_mem) && ctx.pc == 0x089059D8u) goto L_089059D8;
    return;
L_089059D8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905A0C;
      }
      goto L_089059E4;
    }
L_089059E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905A2C;
      }
      goto L_08905A0C;
    }
L_08905A0C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905A2C;
      }
      goto L_08905A14;
    }
L_08905A14:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905A2C;
      }
      goto L_08905A1C;
    }
L_08905A1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_08905A2C;
L_08905A2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(1, ctx.gpr[2] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905A74;
      }
      goto L_08905A54;
    }
L_08905A54:
    ctx.set_gpr(1, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905A6C;
      }
      goto L_08905A60;
    }
L_08905A60:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905A74;
      }
      goto L_08905A6C;
    }
L_08905A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905A78;
      }
      goto L_08905A74;
    }
L_08905A74:
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    goto L_08905A78;
L_08905A78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08905A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08905A98u) goto L_08905A98;
    return;
L_08905A98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08905AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08905AC0u) goto L_08905AC0;
    return;
L_08905AC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905AD4;
      }
      goto L_08905ACC;
    }
L_08905ACC:
    ctx.set_gpr(31, 0x08905AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08905AD4u) goto L_08905AD4;
    return;
L_08905AD4:
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089059C0;
      }
      goto L_08905AE0;
    }
L_08905AE0:
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905AF8;
      }
      goto L_08905AEC;
    }
L_08905AEC:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[30] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089059C0;
      }
      goto L_08905AF8;
    }
L_08905AF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905B70;
      }
      goto L_08905B00;
    }
L_08905B00:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08905B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08905B0Cu) goto L_08905B0C;
    return;
L_08905B0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08905B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 236u, 0x088E52F4u>(ctx, &aot_mem) && ctx.pc == 0x08905B18u) goto L_08905B18;
    return;
L_08905B18:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08905B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08905B4Cu) goto L_08905B4C;
    return;
L_08905B4C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08905B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08905B5Cu) goto L_08905B5C;
    return;
L_08905B5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905B70;
      }
      goto L_08905B68;
    }
L_08905B68:
    ctx.set_gpr(31, 0x08905B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08905B70u) goto L_08905B70;
    return;
L_08905B70:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30552)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30556)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30552), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30556), ctx.gpr[4]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08905BAC;
L_08905BAC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905978;
      }
      goto L_08905BBC;
    }
L_08905BBC:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30544)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30548)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30544), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30548), ctx.gpr[4]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905C68;
      }
      goto L_08905BFC;
    }
L_08905BFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[19]);
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905C64;
      }
      goto L_08905C18;
    }
L_08905C18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08905C64;
      }
      goto L_08905C20;
    }
L_08905C20:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905C64;
      }
      goto L_08905C2C;
    }
L_08905C2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08905C64;
      }
      goto L_08905C34;
    }
L_08905C34:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905C64;
      }
      goto L_08905C40;
    }
L_08905C40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08905C64;
L_08905C64:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08905C68;
L_08905C68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08905C84;
      }
      goto L_08905C7C;
    }
L_08905C7C:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    goto L_08905C84;
L_08905C84:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905BFC;
      }
      goto L_08905C90;
    }
L_08905C90:
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
L_08905CC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905CCC:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905CD8:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905CE4:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905CF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08905D1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08905D1Cu) goto L_08905D1C;
    return;
L_08905D1C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08905D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 541u, 0x08902B98u>(ctx, &aot_mem) && ctx.pc == 0x08905D30u) goto L_08905D30;
    return;
L_08905D30:
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
L_08905D50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905DB4;
      }
      goto L_08905D74;
    }
L_08905D74:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905DB4;
      }
      goto L_08905D80;
    }
L_08905D80:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08905DB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08905DB0u) goto L_08905DB0;
    return;
L_08905DB0:
    ctx.set_gpr(6, ctx.gpr[2] & 255u);
    goto L_08905DB4;
L_08905DB4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905DD0;
      }
      goto L_08905DBC;
    }
L_08905DBC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08905DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 550u, 0x08902C54u>(ctx, &aot_mem) && ctx.pc == 0x08905DC8u) goto L_08905DC8;
    return;
L_08905DC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905DD4;
      }
      goto L_08905DD0;
    }
L_08905DD0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08905DD4;
L_08905DD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905DE8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905E04;
      }
      goto L_08905DF8;
    }
L_08905DF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08905E04;
L_08905E04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905E0C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905E28;
      }
      goto L_08905E1C;
    }
L_08905E1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08905E28;
L_08905E28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905E30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905E3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905E84;
      }
      goto L_08905E5C;
    }
L_08905E5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08905E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 527u, 0x0881E2E0u>(ctx, &aot_mem) && ctx.pc == 0x08905E7Cu) goto L_08905E7C;
    return;
L_08905E7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08905E84;
L_08905E84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905E98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30584)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30588)));
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30584), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30588), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905F74;
      }
      goto L_08905EDC;
    }
L_08905EDC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905F74;
      }
      goto L_08905EE4;
    }
L_08905EE4:
    ctx.set_gpr(31, 0x08905EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 723u, 0x08806DC4u>(ctx, &aot_mem) && ctx.pc == 0x08905EECu) goto L_08905EEC;
    return;
L_08905EEC:
    ctx.set_gpr(31, 0x08905EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 59u, 0x08980358u>(ctx, &aot_mem) && ctx.pc == 0x08905EF4u) goto L_08905EF4;
    return;
L_08905EF4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(944));
    ctx.set_gpr(31, 0x08905F00u);
    // nop
    goto L_08907628;
L_08905F00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905F14;
      }
      goto L_08905F08;
    }
L_08905F08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08905F14u);
    // nop
    goto L_08906078;
L_08905F14:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30572), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08905F24u);
    // nop
    goto L_08905FF0;
L_08905F24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08905F30u);
    // nop
    goto L_08906150;
L_08905F30:
    ctx.set_gpr(31, 0x08905F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 37u, 0x088E8310u>(ctx, &aot_mem) && ctx.pc == 0x08905F38u) goto L_08905F38;
    return;
L_08905F38:
    ctx.set_gpr(31, 0x08905F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 66u, 0x088E85ACu>(ctx, &aot_mem) && ctx.pc == 0x08905F40u) goto L_08905F40;
    return;
L_08905F40:
    ctx.set_gpr(31, 0x08905F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 308u, 0x088F1A08u>(ctx, &aot_mem) && ctx.pc == 0x08905F48u) goto L_08905F48;
    return;
L_08905F48:
    ctx.set_gpr(31, 0x08905F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 751u, 0x088EB8A4u>(ctx, &aot_mem) && ctx.pc == 0x08905F50u) goto L_08905F50;
    return;
L_08905F50:
    ctx.set_gpr(31, 0x08905F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 540u, 0x088EA750u>(ctx, &aot_mem) && ctx.pc == 0x08905F58u) goto L_08905F58;
    return;
L_08905F58:
    ctx.set_gpr(31, 0x08905F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 624u, 0x088E2FC8u>(ctx, &aot_mem) && ctx.pc == 0x08905F60u) goto L_08905F60;
    return;
L_08905F60:
    ctx.set_gpr(31, 0x08905F68u);
    // nop
    goto L_08905FF0;
L_08905F68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08905F74u);
    // nop
    goto L_08906564;
L_08905F74:
    ctx.set_gpr(31, 0x08905F7Cu);
    // nop
    goto L_08905FF0;
L_08905F7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08905F8Cu);
    // nop
    goto L_08906030;
L_08905F8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905FA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30568)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905FD8;
      }
      goto L_08905FB8;
    }
L_08905FB8:
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08905FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x08905FD0u) goto L_08905FD0;
    return;
L_08905FD0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30568), ctx.gpr[2]);
    goto L_08905FD8;
L_08905FD8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30568)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08905FF0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30572)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906000:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30576)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906010:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08906020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 162u, 0x088D4A20u>(ctx, &aot_mem) && ctx.pc == 0x08906020u) goto L_08906020;
    return;
L_08906020:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906030:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4000));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906068;
      }
      goto L_08906048;
    }
L_08906048:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(138)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08906068;
      }
      goto L_08906058;
    }
L_08906058:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14372));
    ctx.set_gpr(31, 0x08906068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08906068u) goto L_08906068;
    return;
L_08906068:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906078:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(936), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(940), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(133), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(134), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(135), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(138), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(139), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 8u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(288), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(544), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(800), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(932), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), 0u);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906150:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08906170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 40u, 0x0894C290u>(ctx, &aot_mem) && ctx.pc == 0x08906170u) goto L_08906170;
    return;
L_08906170:
    ctx.set_gpr(31, 0x08906178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 249u, 0x0897D318u>(ctx, &aot_mem) && ctx.pc == 0x08906178u) goto L_08906178;
    return;
L_08906178:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(932), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(31, 0x0890618Cu);
    // nop
    ctx.pc = 0x08B0DD64u;
    return;
L_0890618C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089061D8;
      }
      goto L_0890619C;
    }
L_0890619C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3984));
    ctx.set_gpr(31, 0x089061A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 159u, 0x0893CA04u>(ctx, &aot_mem) && ctx.pc == 0x089061A8u) goto L_089061A8;
    return;
L_089061A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089061BC;
      }
      goto L_089061B0;
    }
L_089061B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089061BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 348u, 0x08932560u>(ctx, &aot_mem) && ctx.pc == 0x089061BCu) goto L_089061BC;
    return;
L_089061BC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30876), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-14028));
    ctx.set_gpr(31, 0x089061D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 374u, 0x08932798u>(ctx, &aot_mem) && ctx.pc == 0x089061D8u) goto L_089061D8;
    return;
L_089061D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089061F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089061F0u) goto L_089061F0;
    return;
L_089061F0:
    ctx.set_gpr(31, 0x089061F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x089061F8u) goto L_089061F8;
    return;
L_089061F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08906204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08906204u) goto L_08906204;
    return;
L_08906204:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08906210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 173u, 0x088F0E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08906210u) goto L_08906210;
    return;
L_08906210:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(31, 0x08906224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 670u, 0x08926F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08906224u) goto L_08906224;
    return;
L_08906224:
    ctx.set_gpr(31, 0x0890622Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x0890622Cu) goto L_0890622C;
    return;
L_0890622C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08906238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08906238u) goto L_08906238;
    return;
L_08906238:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08906244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 173u, 0x088F0E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08906244u) goto L_08906244;
    return;
L_08906244:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08906254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 405u, 0x08929C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08906254u) goto L_08906254;
    return;
L_08906254:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906268;
      }
      goto L_0890625C;
    }
L_0890625C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08906268u);
    // nop
    goto L_0890741C;
L_08906268:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08906278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 405u, 0x08929C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08906278u) goto L_08906278;
    return;
L_08906278:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890628C;
      }
      goto L_08906280;
    }
L_08906280:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890628Cu);
    // nop
    goto L_0890741C;
L_0890628C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08906298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 776u, 0x088D72A4u>(ctx, &aot_mem) && ctx.pc == 0x08906298u) goto L_08906298;
    return;
L_08906298:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31324)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089062C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 324u, 0x088EDCACu>(ctx, &aot_mem) && ctx.pc == 0x089062C4u) goto L_089062C4;
    return;
L_089062C4:
    ctx.set_gpr(31, 0x089062CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 123u, 0x088FCAF4u>(ctx, &aot_mem) && ctx.pc == 0x089062CCu) goto L_089062CC;
    return;
L_089062CC:
    ctx.set_gpr(31, 0x089062D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 449u, 0x088E64B0u>(ctx, &aot_mem) && ctx.pc == 0x089062D4u) goto L_089062D4;
    return;
L_089062D4:
    ctx.set_gpr(31, 0x089062DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 85u, 0x088FC814u>(ctx, &aot_mem) && ctx.pc == 0x089062DCu) goto L_089062DC;
    return;
L_089062DC:
    ctx.set_gpr(31, 0x089062E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 304u, 0x088FDAF0u>(ctx, &aot_mem) && ctx.pc == 0x089062E4u) goto L_089062E4;
    return;
L_089062E4:
    ctx.set_gpr(31, 0x089062ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 192u, 0x088FD1A8u>(ctx, &aot_mem) && ctx.pc == 0x089062ECu) goto L_089062EC;
    return;
L_089062EC:
    ctx.set_gpr(31, 0x089062F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 166u, 0x088FCF54u>(ctx, &aot_mem) && ctx.pc == 0x089062F4u) goto L_089062F4;
    return;
L_089062F4:
    ctx.set_gpr(31, 0x089062FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 146u, 0x088FCD58u>(ctx, &aot_mem) && ctx.pc == 0x089062FCu) goto L_089062FC;
    return;
L_089062FC:
    ctx.set_gpr(31, 0x08906304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 666u, 0x088EF9B8u>(ctx, &aot_mem) && ctx.pc == 0x08906304u) goto L_08906304;
    return;
L_08906304:
    ctx.set_gpr(31, 0x0890630Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 449u, 0x088F6564u>(ctx, &aot_mem) && ctx.pc == 0x0890630Cu) goto L_0890630C;
    return;
L_0890630C:
    ctx.set_gpr(31, 0x08906314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 477u, 0x088F67E0u>(ctx, &aot_mem) && ctx.pc == 0x08906314u) goto L_08906314;
    return;
L_08906314:
    ctx.set_gpr(31, 0x0890631Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 501u, 0x088F69CCu>(ctx, &aot_mem) && ctx.pc == 0x0890631Cu) goto L_0890631C;
    return;
L_0890631C:
    ctx.set_gpr(31, 0x08906324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 532u, 0x088F6C88u>(ctx, &aot_mem) && ctx.pc == 0x08906324u) goto L_08906324;
    return;
L_08906324:
    ctx.set_gpr(31, 0x0890632Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 615u, 0x088F73ACu>(ctx, &aot_mem) && ctx.pc == 0x0890632Cu) goto L_0890632C;
    return;
L_0890632C:
    ctx.set_gpr(31, 0x08906334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 646u, 0x088F7668u>(ctx, &aot_mem) && ctx.pc == 0x08906334u) goto L_08906334;
    return;
L_08906334:
    ctx.set_gpr(31, 0x0890633Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 695u, 0x088E7A40u>(ctx, &aot_mem) && ctx.pc == 0x0890633Cu) goto L_0890633C;
    return;
L_0890633C:
    ctx.set_gpr(31, 0x08906344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 652u, 0x088E76A4u>(ctx, &aot_mem) && ctx.pc == 0x08906344u) goto L_08906344;
    return;
L_08906344:
    ctx.set_gpr(31, 0x0890634Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 528u, 0x088FAE04u>(ctx, &aot_mem) && ctx.pc == 0x0890634Cu) goto L_0890634C;
    return;
L_0890634C:
    ctx.set_gpr(31, 0x08906354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 503u, 0x088FAC10u>(ctx, &aot_mem) && ctx.pc == 0x08906354u) goto L_08906354;
    return;
L_08906354:
    ctx.set_gpr(31, 0x0890635Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 56u, 0x088F0498u>(ctx, &aot_mem) && ctx.pc == 0x0890635Cu) goto L_0890635C;
    return;
L_0890635C:
    ctx.set_gpr(31, 0x08906364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 504u, 0x088F29D0u>(ctx, &aot_mem) && ctx.pc == 0x08906364u) goto L_08906364;
    return;
L_08906364:
    ctx.set_gpr(31, 0x0890636Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 309u, 0x088D997Cu>(ctx, &aot_mem) && ctx.pc == 0x0890636Cu) goto L_0890636C;
    return;
L_0890636C:
    ctx.set_gpr(31, 0x08906374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 463u, 0x088DA650u>(ctx, &aot_mem) && ctx.pc == 0x08906374u) goto L_08906374;
    return;
L_08906374:
    ctx.set_gpr(31, 0x0890637Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 397u, 0x088DE138u>(ctx, &aot_mem) && ctx.pc == 0x0890637Cu) goto L_0890637C;
    return;
L_0890637C:
    ctx.set_gpr(31, 0x08906384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 85u, 0x088DC6D0u>(ctx, &aot_mem) && ctx.pc == 0x08906384u) goto L_08906384;
    return;
L_08906384:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27028), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089063A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089063A4u) goto L_089063A4;
    return;
L_089063A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089063B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(936)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089063CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(940)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089063E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890642C;
      }
      goto L_08906404;
    }
L_08906404:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08906410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08906410u) goto L_08906410;
    return;
L_08906410:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906424;
      }
      goto L_08906418;
    }
L_08906418:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08906424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08906424u) goto L_08906424;
    return;
L_08906424:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0890642C;
L_0890642C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08906440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08906440u) goto L_08906440;
    return;
L_08906440:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(936)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906470;
      }
      goto L_08906454;
    }
L_08906454:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906470;
      }
      goto L_0890646C;
    }
L_0890646C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08906470;
L_08906470:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890649C;
      }
      goto L_08906478;
    }
L_08906478:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890649C;
      }
      goto L_08906490;
    }
L_08906490:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0890649Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890649Cu) goto L_0890649C;
    return;
L_0890649C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(936), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089064D8;
      }
      goto L_089064B0;
    }
L_089064B0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089064BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089064BCu) goto L_089064BC;
    return;
L_089064BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089064D0;
      }
      goto L_089064C4;
    }
L_089064C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089064D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089064D0u) goto L_089064D0;
    return;
L_089064D0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089064D8;
L_089064D8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32736));
    ctx.set_gpr(31, 0x089064ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089064ECu) goto L_089064EC;
    return;
L_089064EC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(940)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890651C;
      }
      goto L_08906500;
    }
L_08906500:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890651C;
      }
      goto L_08906518;
    }
L_08906518:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0890651C;
L_0890651C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906548;
      }
      goto L_08906524;
    }
L_08906524:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906548;
      }
      goto L_0890653C;
    }
L_0890653C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08906548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08906548u) goto L_08906548;
    return;
L_08906548:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(940), ctx.gpr[16]);
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
L_08906564:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0890658Cu);
    // nop
    goto L_089063E0;
L_0890658C:
    ctx.set_gpr(31, 0x08906594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x08906594u) goto L_08906594;
    return;
L_08906594:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089065A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089065A0u) goto L_089065A0;
    return;
L_089065A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089065ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 727u, 0x088EB704u>(ctx, &aot_mem) && ctx.pc == 0x089065ACu) goto L_089065AC;
    return;
L_089065AC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32640)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906658;
      }
      goto L_089065BC;
    }
L_089065BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30592)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906644;
      }
      goto L_089065CC;
    }
L_089065CC:
    ctx.set_gpr(31, 0x089065D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 215u, 0x0893CDCCu>(ctx, &aot_mem) && ctx.pc == 0x089065D4u) goto L_089065D4;
    return;
L_089065D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089065E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089065E0u) goto L_089065E0;
    return;
L_089065E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089065ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 586u, 0x088EF288u>(ctx, &aot_mem) && ctx.pc == 0x089065ECu) goto L_089065EC;
    return;
L_089065EC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30592)));
    ctx.set_gpr(31, 0x08906600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08906600u) goto L_08906600;
    return;
L_08906600:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14020));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30592)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890661Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 118u, 0x0892C874u>(ctx, &aot_mem) && ctx.pc == 0x0890661Cu) goto L_0890661C;
    return;
L_0890661C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08906630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08906630u) goto L_08906630;
    return;
L_08906630:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906644;
      }
      goto L_0890663C;
    }
L_0890663C:
    ctx.set_gpr(31, 0x08906644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08906644u) goto L_08906644;
    return;
L_08906644:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08906658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 468u, 0x089521C4u>(ctx, &aot_mem) && ctx.pc == 0x08906658u) goto L_08906658;
    return;
L_08906658:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(15));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14008));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08906688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x08906688u) goto L_08906688;
    return;
L_08906688:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13988));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(8, 1u << 16u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089066ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x089066ACu) goto L_089066AC;
    return;
L_089066AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x089066BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 69u, 0x089803F8u>(ctx, &aot_mem) && ctx.pc == 0x089066BCu) goto L_089066BC;
    return;
L_089066BC:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13968));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089066E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x089066E4u) goto L_089066E4;
    return;
L_089066E4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906700;
      }
      goto L_089066F0;
    }
L_089066F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(31, 0x08906700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 919u, 0x08983648u>(ctx, &aot_mem) && ctx.pc == 0x08906700u) goto L_08906700;
    return;
L_08906700:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(31, 0x08906710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 906u, 0x08983544u>(ctx, &aot_mem) && ctx.pc == 0x08906710u) goto L_08906710;
    return;
L_08906710:
    ctx.set_gpr(31, 0x08906718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x08906718u) goto L_08906718;
    return;
L_08906718:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08906724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08906724u) goto L_08906724;
    return;
L_08906724:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08906730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 608u, 0x088F32F8u>(ctx, &aot_mem) && ctx.pc == 0x08906730u) goto L_08906730;
    return;
L_08906730:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08906744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 776u, 0x089131BCu>(ctx, &aot_mem) && ctx.pc == 0x08906744u) goto L_08906744;
    return;
L_08906744:
    ctx.set_gpr(31, 0x0890674Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 348u, 0x088E19F0u>(ctx, &aot_mem) && ctx.pc == 0x0890674Cu) goto L_0890674C;
    return;
L_0890674C:
    ctx.set_gpr(31, 0x08906754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x08906754u) goto L_08906754;
    return;
L_08906754:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08906760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08906760u) goto L_08906760;
    return;
L_08906760:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890676Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 19u, 0x088EC184u>(ctx, &aot_mem) && ctx.pc == 0x0890676Cu) goto L_0890676C;
    return;
L_0890676C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0890677Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 197u, 0x08950E70u>(ctx, &aot_mem) && ctx.pc == 0x0890677Cu) goto L_0890677C;
    return;
L_0890677C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31324)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089067A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 528u, 0x089563D0u>(ctx, &aot_mem) && ctx.pc == 0x089067A0u) goto L_089067A0;
    return;
L_089067A0:
    ctx.set_gpr(31, 0x089067A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x089067A8u) goto L_089067A8;
    return;
L_089067A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089067B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089067B4u) goto L_089067B4;
    return;
L_089067B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089067C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 490u, 0x088EA470u>(ctx, &aot_mem) && ctx.pc == 0x089067C0u) goto L_089067C0;
    return;
L_089067C0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30576), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089067D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x089067D4u) goto L_089067D4;
    return;
L_089067D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089067E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089067E0u) goto L_089067E0;
    return;
L_089067E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089067ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 604u, 0x088E2E68u>(ctx, &aot_mem) && ctx.pc == 0x089067ECu) goto L_089067EC;
    return;
L_089067EC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089067F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 215u, 0x0893CDCCu>(ctx, &aot_mem) && ctx.pc == 0x089067F8u) goto L_089067F8;
    return;
L_089067F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08906804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08906804u) goto L_08906804;
    return;
L_08906804:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08906810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 88u, 0x088F4808u>(ctx, &aot_mem) && ctx.pc == 0x08906810u) goto L_08906810;
    return;
L_08906810:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906850;
      }
      goto L_08906828;
    }
L_08906828:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08906834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08906834u) goto L_08906834;
    return;
L_08906834:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906848;
      }
      goto L_0890683C;
    }
L_0890683C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08906848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08906848u) goto L_08906848;
    return;
L_08906848:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08906850;
L_08906850:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32524));
    ctx.set_gpr(31, 0x08906868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08906868u) goto L_08906868;
    return;
L_08906868:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906890;
      }
      goto L_0890687C;
    }
L_0890687C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08906888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08906888u) goto L_08906888;
    return;
L_08906888:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08906890;
L_08906890:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089068A8;
      }
      goto L_08906898;
    }
L_08906898:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089068A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089068A8u) goto L_089068A8;
    return;
L_089068A8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089068BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 576u, 0x08956714u>(ctx, &aot_mem) && ctx.pc == 0x089068BCu) goto L_089068BC;
    return;
L_089068BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x089068C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 510u, 0x08912118u>(ctx, &aot_mem) && ctx.pc == 0x089068C8u) goto L_089068C8;
    return;
L_089068C8:
    ctx.set_gpr(31, 0x089068D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089068D0u) goto L_089068D0;
    return;
L_089068D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089068DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089068DCu) goto L_089068DC;
    return;
L_089068DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089068E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 655u, 0x088DB600u>(ctx, &aot_mem) && ctx.pc == 0x089068E8u) goto L_089068E8;
    return;
L_089068E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13948));
    ctx.set_gpr(31, 0x08906900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x08906900u) goto L_08906900;
    return;
L_08906900:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08906910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 247u, 0x08910FFCu>(ctx, &aot_mem) && ctx.pc == 0x08906910u) goto L_08906910;
    return;
L_08906910:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13932));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(138));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08906934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08906934u) goto L_08906934;
    return;
L_08906934:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13904));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(139));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08906958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08906958u) goto L_08906958;
    return;
L_08906958:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13880));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0890697Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0890697Cu) goto L_0890697C;
    return;
L_0890697C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13852));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x089069A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x089069A0u) goto L_089069A0;
    return;
L_089069A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30876)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089069C0;
      }
      goto L_089069B0;
    }
L_089069B0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089069C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089069C0u) goto L_089069C0;
    return;
L_089069C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089069F0;
      }
      goto L_089069CC;
    }
L_089069CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x089069D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 386u, 0x088E9CF8u>(ctx, &aot_mem) && ctx.pc == 0x089069D8u) goto L_089069D8;
    return;
L_089069D8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089069F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089069F0u) goto L_089069F0;
    return;
L_089069F0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08906A0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08906A0Cu) goto L_08906A0C;
    return;
L_08906A0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906A3C;
      }
      goto L_08906A18;
    }
L_08906A18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08906A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 386u, 0x088E9CF8u>(ctx, &aot_mem) && ctx.pc == 0x08906A24u) goto L_08906A24;
    return;
L_08906A24:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08906A3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08906A3Cu) goto L_08906A3C;
    return;
L_08906A3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906B30;
      }
      goto L_08906A48;
    }
L_08906A48:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08906A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 134u, 0x088FCC58u>(ctx, &aot_mem) && ctx.pc == 0x08906A54u) goto L_08906A54;
    return;
L_08906A54:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08906A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 405u, 0x08929C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08906A64u) goto L_08906A64;
    return;
L_08906A64:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08906A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08906A7Cu) goto L_08906A7C;
    return;
L_08906A7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08906A9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08906A9Cu) goto L_08906A9C;
    return;
L_08906A9C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906B08;
      }
      goto L_08906AA8;
    }
L_08906AA8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(133)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906B08;
      }
      goto L_08906AB4;
    }
L_08906AB4:
    ctx.set_gpr(31, 0x08906ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 430u, 0x0892DD74u>(ctx, &aot_mem) && ctx.pc == 0x08906ABCu) goto L_08906ABC;
    return;
L_08906ABC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08906AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 459u, 0x088F2730u>(ctx, &aot_mem) && ctx.pc == 0x08906AC8u) goto L_08906AC8;
    return;
L_08906AC8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(31, 0x08906ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 527u, 0x08915DC4u>(ctx, &aot_mem) && ctx.pc == 0x08906ADCu) goto L_08906ADC;
    return;
L_08906ADC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08906AF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08906AF0u) goto L_08906AF0;
    return;
L_08906AF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08906B08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08906B08u) goto L_08906B08;
    return;
L_08906B08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08906B1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08906B1Cu) goto L_08906B1C;
    return;
L_08906B1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08906B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08906B30u) goto L_08906B30;
    return;
L_08906B30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13828));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(928));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08906B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x08906B54u) goto L_08906B54;
    return;
L_08906B54:
    ctx.set_gpr(31, 0x08906B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 293u, 0x0891D474u>(ctx, &aot_mem) && ctx.pc == 0x08906B5Cu) goto L_08906B5C;
    return;
L_08906B5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08906B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 468u, 0x088E66A8u>(ctx, &aot_mem) && ctx.pc == 0x08906B68u) goto L_08906B68;
    return;
L_08906B68:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31436), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08906B84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08906B84u) goto L_08906B84;
    return;
L_08906B84:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-15096)));
    ctx.set_gpr(31, 0x08906B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08906B9Cu) goto L_08906B9C;
    return;
L_08906B9C:
    ctx.set_gpr(31, 0x08906BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08906BA4u) goto L_08906BA4;
    return;
L_08906BA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08906BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 73u, 0x088E8668u>(ctx, &aot_mem) && ctx.pc == 0x08906BB0u) goto L_08906BB0;
    return;
L_08906BB0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906C38;
      }
      goto L_08906BBC;
    }
L_08906BBC:
    ctx.set_gpr(31, 0x08906BC4u);
    // nop
    goto L_08905FF0;
L_08906BC4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13792));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08906BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x08906BECu) goto L_08906BEC;
    return;
L_08906BEC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13768));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(62));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08906C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x089537E4u>(ctx, &aot_mem) && ctx.pc == 0x08906C10u) goto L_08906C10;
    return;
L_08906C10:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32186), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08906C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 71u, 0x089585A0u>(ctx, &aot_mem) && ctx.pc == 0x08906C2Cu) goto L_08906C2C;
    return;
L_08906C2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08906C38u);
    // nop
    goto L_08906E08;
L_08906C38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906DB0;
      }
      goto L_08906C44;
    }
L_08906C44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13740));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08906C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 604u, 0x089529D4u>(ctx, &aot_mem) && ctx.pc == 0x08906C5Cu) goto L_08906C5C;
    return;
L_08906C5C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08906DB0;
      }
      goto L_08906C68;
    }
L_08906C68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08906C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x08906C8Cu) goto L_08906C8C;
    return;
L_08906C8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08906C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08906C98u) goto L_08906C98;
    return;
L_08906C98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08906CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 675u, 0x088E78D0u>(ctx, &aot_mem) && ctx.pc == 0x08906CA4u) goto L_08906CA4;
    return;
L_08906CA4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(31, 0x08906CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 129u, 0x0895C814u>(ctx, &aot_mem) && ctx.pc == 0x08906CB8u) goto L_08906CB8;
    return;
L_08906CB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08906CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 130u, 0x0895C820u>(ctx, &aot_mem) && ctx.pc == 0x08906CC8u) goto L_08906CC8;
    return;
L_08906CC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x08906CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 131u, 0x0895C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08906CD4u) goto L_08906CD4;
    return;
L_08906CD4:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08906DA4;
      }
      goto L_08906CE0;
    }
L_08906CE0:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906DA0;
      }
      goto L_08906CF8;
    }
L_08906CF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906D44;
      }
      goto L_08906D04;
    }
L_08906D04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906D18;
      }
      goto L_08906D10;
    }
L_08906D10:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08906D18;
L_08906D18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906D44;
      }
      goto L_08906D20;
    }
L_08906D20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906D34;
      }
      goto L_08906D2C;
    }
L_08906D2C:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08906D34;
L_08906D34:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08906DA0;
      }
      goto L_08906D44;
    }
L_08906D44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906D5C;
      }
      goto L_08906D54;
    }
L_08906D54:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_08906D5C;
L_08906D5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08906D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 183u, 0x0895CB24u>(ctx, &aot_mem) && ctx.pc == 0x08906D6Cu) goto L_08906D6C;
    return;
L_08906D6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906DA0;
      }
      goto L_08906D78;
    }
L_08906D78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08906D88u);
    // nop
    goto L_08907020;
L_08906D88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906DA0;
      }
      goto L_08906D90;
    }
L_08906D90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08906DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 271u, 0x0894540Cu>(ctx, &aot_mem) && ctx.pc == 0x08906DA0u) goto L_08906DA0;
    return;
L_08906DA0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08906DA4;
L_08906DA4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906CE0;
      }
      goto L_08906DB0;
    }
L_08906DB0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08906DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 794u, 0x0895B54Cu>(ctx, &aot_mem) && ctx.pc == 0x08906DBCu) goto L_08906DBC;
    return;
L_08906DBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906DD0;
      }
      goto L_08906DC8;
    }
L_08906DC8:
    ctx.set_gpr(31, 0x08906DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08906DD0u) goto L_08906DD0;
    return;
L_08906DD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906DE4;
      }
      goto L_08906DDC;
    }
L_08906DDC:
    ctx.set_gpr(31, 0x08906DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08906DE4u) goto L_08906DE4;
    return;
L_08906DE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08906E08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13716));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(81));
    goto L_08906E20;
L_08906E20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    // nop
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_08906E20;
      }
      goto L_08906E40;
    }
L_08906E40:
    ctx.set_gpr(31, 0x08906E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 223u, 0x0893CE4Cu>(ctx, &aot_mem) && ctx.pc == 0x08906E48u) goto L_08906E48;
    return;
L_08906E48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08906E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08906E54u) goto L_08906E54;
    return;
L_08906E54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08906E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 321u, 0x088E975Cu>(ctx, &aot_mem) && ctx.pc == 0x08906E60u) goto L_08906E60;
    return;
L_08906E60:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 28 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906E88;
      }
      goto L_08906E78;
    }
L_08906E78:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(27));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08906E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08906E88u) goto L_08906E88;
    return;
L_08906E88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 27 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906EAC;
      }
      goto L_08906E9C;
    }
L_08906E9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08906EBC;
      }
      goto L_08906EAC;
    }
L_08906EAC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(27));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08906EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08906EBCu) goto L_08906EBC;
    return;
L_08906EBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08906F7C;
      }
      goto L_08906EE4;
    }
L_08906EE4:
    ctx.set_gpr(2, ctx.gpr[8] << 1u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(69)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(70)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906F78;
      }
      goto L_08906F28;
    }
L_08906F28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08906F78;
      }
      goto L_08906F30;
    }
L_08906F30:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906F78;
      }
      goto L_08906F3C;
    }
L_08906F3C:
    ctx.set_gpr(3, ctx.gpr[7] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08906F78;
L_08906F78:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08906F7C;
L_08906F7C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < 27 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906EE4;
      }
      goto L_08906F88;
    }
L_08906F88:
    ctx.set_gpr(31, 0x08906F90u);
    // nop
    goto L_08905FF0;
L_08906F90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906FB0;
      }
      goto L_08906FA4;
    }
L_08906FA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08906FB0;
L_08906FB0:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08906FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 158u, 0x08958B08u>(ctx, &aot_mem) && ctx.pc == 0x08906FC4u) goto L_08906FC4;
    return;
L_08906FC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906FD8;
      }
      goto L_08906FD0;
    }
L_08906FD0:
    ctx.set_gpr(31, 0x08906FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08906FD8u) goto L_08906FD8;
    return;
L_08906FD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906FEC;
      }
      goto L_08906FE4;
    }
L_08906FE4:
    ctx.set_gpr(31, 0x08906FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08906FECu) goto L_08906FEC;
    return;
L_08906FEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(384));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08906FFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08907010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x08907010u) goto L_08907010;
    return;
L_08907010:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907054;
      }
      goto L_08907038;
    }
L_08907038:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26608)));
    ctx.set_gpr(31, 0x0890704Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 692u, 0x0892707Cu>(ctx, &aot_mem) && ctx.pc == 0x0890704Cu) goto L_0890704C;
    return;
L_0890704C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907058;
      }
      goto L_08907054;
    }
L_08907054:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08907058;
L_08907058:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907068:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x0890707Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x0890707Cu) goto L_0890707C;
    return;
L_0890707C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890708C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x089070A0u);
    // nop
    goto L_0890749C;
L_089070A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089070B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089070F4;
      }
      goto L_089070D8;
    }
L_089070D8:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x089070F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089070F0u) goto L_089070F0;
    return;
L_089070F0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089070F4;
L_089070F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089070D8;
      }
      goto L_08907108;
    }
L_08907108:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08907118u);
    // nop
    goto L_0890749C;
L_08907118:
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
L_08907134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890718C;
      }
      goto L_08907168;
    }
L_08907168:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08907188u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08907188u) goto L_08907188;
    return;
L_08907188:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0890718C;
L_0890718C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907168;
      }
      goto L_08907198;
    }
L_08907198:
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
L_089071B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089071F4;
      }
      goto L_089071D8;
    }
L_089071D8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x089071E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x089071E8u) goto L_089071E8;
    return;
L_089071E8:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(287), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089071F8;
      }
      goto L_089071F4;
    }
L_089071F4:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    goto L_089071F8;
L_089071F8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907218;
      }
      goto L_08907200;
    }
L_08907200:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907218;
      }
      goto L_0890720C;
    }
L_0890720C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(3, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12952), ctx.gpr[4]);
    goto L_08907218;
L_08907218:
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
L_08907230:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890726C;
      }
      goto L_08907250;
    }
L_08907250:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x08907260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08907260u) goto L_08907260;
    return;
L_08907260:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(415), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907270;
      }
      goto L_0890726C;
    }
L_0890726C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(288), static_cast<std::uint8_t>(0u));
    goto L_08907270;
L_08907270:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907290;
      }
      goto L_08907278;
    }
L_08907278:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907290;
      }
      goto L_08907284;
    }
L_08907284:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(3, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12932), ctx.gpr[4]);
    goto L_08907290;
L_08907290:
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
L_089072A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089072E4;
      }
      goto L_089072C8;
    }
L_089072C8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x089072D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x089072D8u) goto L_089072D8;
    return;
L_089072D8:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089072E8;
      }
      goto L_089072E4;
    }
L_089072E4:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(0u));
    goto L_089072E8;
L_089072E8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907308;
      }
      goto L_089072F0;
    }
L_089072F0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907308;
      }
      goto L_089072FC;
    }
L_089072FC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(3, 2228u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-12880), ctx.gpr[4]);
    goto L_08907308;
L_08907308:
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
L_08907320:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907360;
      }
      goto L_08907338;
    }
L_08907338:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907360;
      }
      goto L_08907344;
    }
L_08907344:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x08907354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08907354u) goto L_08907354;
    return;
L_08907354:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(671), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907364;
      }
      goto L_08907360;
    }
L_08907360:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(544), static_cast<std::uint8_t>(0u));
    goto L_08907364;
L_08907364:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089073B8;
      }
      goto L_08907390;
    }
L_08907390:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089073B8;
      }
      goto L_0890739C;
    }
L_0890739C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(672));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x089073ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x089073ACu) goto L_089073AC;
    return;
L_089073AC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(799), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089073BC;
      }
      goto L_089073B8;
    }
L_089073B8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(0u));
    goto L_089073BC;
L_089073BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089073D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907404;
      }
      goto L_089073E8;
    }
L_089073E8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(800));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x089073F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x089073F8u) goto L_089073F8;
    return;
L_089073F8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(927), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907408;
      }
      goto L_08907404;
    }
L_08907404:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(800), static_cast<std::uint8_t>(0u));
    goto L_08907408;
L_08907408:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890741C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907434:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907480;
      }
      goto L_08907454;
    }
L_08907454:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907468;
      }
      goto L_08907460;
    }
L_08907460:
    ctx.set_gpr(31, 0x08907468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x08907468u) goto L_08907468;
    return;
L_08907468:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08907480;
      }
      goto L_08907474;
    }
L_08907474:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08907480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem) && ctx.pc == 0x08907480u) goto L_08907480;
    return;
L_08907480:
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
L_0890749C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907588;
      }
      goto L_089074C4;
    }
L_089074C4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089074DC;
      }
      goto L_089074CC;
    }
L_089074CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907508;
      }
      goto L_089074DC;
    }
L_089074DC:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089074F8;
      }
      goto L_089074F0;
    }
L_089074F0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_089074F8;
L_089074F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08907508;
L_08907508:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907550;
      }
      goto L_08907514;
    }
L_08907514:
    ctx.set_gpr(31, 0x0890751Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0890751Cu) goto L_0890751C;
    return;
L_0890751C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08907528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08907528u) goto L_08907528;
    return;
L_08907528:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08907544u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08907544u) goto L_08907544;
    return;
L_08907544:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907588;
      }
      goto L_08907550;
    }
L_08907550:
    ctx.set_gpr(31, 0x08907558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08907558u) goto L_08907558;
    return;
L_08907558:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08907564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08907564u) goto L_08907564;
    return;
L_08907564:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08907584u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08907584u) goto L_08907584;
    return;
L_08907584:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08907588;
L_08907588:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
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
L_089075BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907610;
      }
      goto L_089075D8;
    }
L_089075D8:
    ctx.set_gpr(31, 0x089075E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089075E0u) goto L_089075E0;
    return;
L_089075E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089075ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089075ECu) goto L_089075EC;
    return;
L_089075EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089075F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x089075F8u) goto L_089075F8;
    return;
L_089075F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13384));
    ctx.set_gpr(31, 0x08907610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 125u, 0x08944950u>(ctx, &aot_mem) && ctx.pc == 0x08907610u) goto L_08907610;
    return;
L_08907610:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907628:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08907638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 487u, 0x0881201Cu>(ctx, &aot_mem) && ctx.pc == 0x08907638u) goto L_08907638;
    return;
L_08907638:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907648:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907760;
      }
      goto L_08907678;
    }
L_08907678:
    ctx.set_gpr(31, 0x08907680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08907680u) goto L_08907680;
    return;
L_08907680:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907760;
      }
      goto L_08907688;
    }
L_08907688:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089076A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x089076A0u) goto L_089076A0;
    return;
L_089076A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089076ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 595u, 0x0895A84Cu>(ctx, &aot_mem) && ctx.pc == 0x089076ACu) goto L_089076AC;
    return;
L_089076AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089076E4;
      }
      goto L_089076BC;
    }
L_089076BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089076C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089076C8u) goto L_089076C8;
    return;
L_089076C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089076DC;
      }
      goto L_089076D0;
    }
L_089076D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089076DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089076DCu) goto L_089076DC;
    return;
L_089076DC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089076E4;
L_089076E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089076F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089076F8u) goto L_089076F8;
    return;
L_089076F8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907728;
      }
      goto L_0890770C;
    }
L_0890770C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907728;
      }
      goto L_08907724;
    }
L_08907724:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08907728;
L_08907728:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907754;
      }
      goto L_08907730;
    }
L_08907730:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907754;
      }
      goto L_08907748;
    }
L_08907748:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08907754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08907754u) goto L_08907754;
    return;
L_08907754:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890780C;
      }
      goto L_08907760;
    }
L_08907760:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907798;
      }
      goto L_08907770;
    }
L_08907770:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0890777Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0890777Cu) goto L_0890777C;
    return;
L_0890777C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907790;
      }
      goto L_08907784;
    }
L_08907784:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08907790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08907790u) goto L_08907790;
    return;
L_08907790:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08907798;
L_08907798:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(31, 0x089077ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089077ACu) goto L_089077AC;
    return;
L_089077AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089077DC;
      }
      goto L_089077C0;
    }
L_089077C0:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089077DC;
      }
      goto L_089077D8;
    }
L_089077D8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_089077DC;
L_089077DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907808;
      }
      goto L_089077E4;
    }
L_089077E4:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907808;
      }
      goto L_089077FC;
    }
L_089077FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08907808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08907808u) goto L_08907808;
    return;
L_08907808:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    goto L_0890780C;
L_0890780C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890783C;
      }
      goto L_08907820;
    }
L_08907820:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890783C;
      }
      goto L_08907838;
    }
L_08907838:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890783C;
L_0890783C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907850;
      }
      goto L_08907844;
    }
L_08907844:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08907850;
L_08907850:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890787C;
      }
      goto L_08907860;
    }
L_08907860:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890787C;
      }
      goto L_08907878;
    }
L_08907878:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0890787C;
L_0890787C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089078A8;
      }
      goto L_08907884;
    }
L_08907884:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089078A8;
      }
      goto L_0890789C;
    }
L_0890789C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089078A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089078A8u) goto L_089078A8;
    return;
L_089078A8:
    ctx.set_gpr(2, 0u + 0u);
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
L_089078C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089078E8;
      }
      goto L_089078D8;
    }
L_089078D8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089078E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089078E8u) goto L_089078E8;
    return;
L_089078E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089078F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907930;
      }
      goto L_08907924;
    }
L_08907924:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08907930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08907930u) goto L_08907930;
    return;
L_08907930:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08907940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x08907940u) goto L_08907940;
    return;
L_08907940:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08907950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 278u, 0x0894936Cu>(ctx, &aot_mem) && ctx.pc == 0x08907950u) goto L_08907950;
    return;
L_08907950:
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
L_08907968:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089079A4;
      }
      goto L_08907998;
    }
L_08907998:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089079A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089079A4u) goto L_089079A4;
    return;
L_089079A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089079B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x089079B4u) goto L_089079B4;
    return;
L_089079B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089079C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 278u, 0x0894936Cu>(ctx, &aot_mem) && ctx.pc == 0x089079C4u) goto L_089079C4;
    return;
L_089079C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089079E8;
      }
      goto L_089079D8;
    }
L_089079D8:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089079E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089079E8u) goto L_089079E8;
    return;
L_089079E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907A0C;
      }
      goto L_089079FC;
    }
L_089079FC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08907A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08907A0Cu) goto L_08907A0C;
    return;
L_08907A0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27864)));
    ctx.set_gpr(31, 0x08907A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08907A24u) goto L_08907A24;
    return;
L_08907A24:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08907A3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08907A3Cu) goto L_08907A3C;
    return;
L_08907A3C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08907A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 478u, 0x0895DF98u>(ctx, &aot_mem) && ctx.pc == 0x08907A50u) goto L_08907A50;
    return;
L_08907A50:
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
L_08907A6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907A98;
      }
      goto L_08907A80;
    }
L_08907A80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08907A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08907A98u) goto L_08907A98;
    return;
L_08907A98:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907AB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08907AE0u);
    // nop
    goto L_08907648;
L_08907AE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08907AF4u);
    // nop
    goto L_08907C70;
L_08907AF4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08907B1C;
      }
      goto L_08907AFC;
    }
L_08907AFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08907B1Cu);
    // nop
    goto L_08907CCC;
L_08907B1C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08907B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 79u, 0x0895C4C8u>(ctx, &aot_mem) && ctx.pc == 0x08907B34u) goto L_08907B34;
    return;
L_08907B34:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907B64;
      }
      goto L_08907B50;
    }
L_08907B50:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08907B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08907B5Cu) goto L_08907B5C;
    return;
L_08907B5C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08907B64;
L_08907B64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907B84;
      }
      goto L_08907B6C;
    }
L_08907B6C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08907B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 776u, 0x0885311Cu>(ctx, &aot_mem) && ctx.pc == 0x08907B78u) goto L_08907B78;
    return;
L_08907B78:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08907B84u);
    // nop
    goto L_08904690;
L_08907B84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907BA8;
      }
      goto L_08907B94;
    }
L_08907B94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08907BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08907BA0u) goto L_08907BA0;
    return;
L_08907BA0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08907BA8;
L_08907BA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907BC0;
      }
      goto L_08907BB0;
    }
L_08907BB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08907BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08907BC0u) goto L_08907BC0;
    return;
L_08907BC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08907BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08907BD8u) goto L_08907BD8;
    return;
L_08907BD8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08907BF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08907BF0u) goto L_08907BF0;
    return;
L_08907BF0:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907C1C;
      }
      goto L_08907C00;
    }
L_08907C00:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907C1C;
      }
      goto L_08907C18;
    }
L_08907C18:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08907C1C;
L_08907C1C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907C48;
      }
      goto L_08907C24;
    }
L_08907C24:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907C48;
      }
      goto L_08907C3C;
    }
L_08907C3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08907C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08907C48u) goto L_08907C48;
    return;
L_08907C48:
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
L_08907C68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907C70:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907CB4;
      }
      goto L_08907C7C;
    }
L_08907C7C:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08907CB0;
      }
      goto L_08907CA4;
    }
L_08907CA4:
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907CC4;
      }
      goto L_08907CB0;
    }
L_08907CB0:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08907CB4;
L_08907CB4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907C7C;
      }
      goto L_08907CC0;
    }
L_08907CC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08907CC4;
L_08907CC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907CCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08907CF4u);
    // nop
    goto L_08907A6C;
L_08907CF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907E08;
      }
      goto L_08907CFC;
    }
L_08907CFC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08907D10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08907D10u) goto L_08907D10;
    return;
L_08907D10:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08907D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08907D2Cu) goto L_08907D2C;
    return;
L_08907D2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08907E08;
      }
      goto L_08907D38;
    }
L_08907D38:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907D5C;
      }
      goto L_08907D54;
    }
L_08907D54:
    ctx.set_gpr(31, 0x08907D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08907D5Cu) goto L_08907D5C;
    return;
L_08907D5C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08907D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08907D6Cu) goto L_08907D6C;
    return;
L_08907D6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907DB8;
      }
      goto L_08907D9C;
    }
L_08907D9C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907DB8;
      }
      goto L_08907DB4;
    }
L_08907DB4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08907DB8;
L_08907DB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907DE4;
      }
      goto L_08907DC0;
    }
L_08907DC0:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907DE4;
      }
      goto L_08907DD8;
    }
L_08907DD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08907DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08907DE4u) goto L_08907DE4;
    return;
L_08907DE4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08907DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08907DF4u) goto L_08907DF4;
    return;
L_08907DF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_08907E08;
L_08907E08:
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
L_08907E28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907E30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08907E50u);
    // nop
    goto L_08907648;
L_08907E50:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08907E68u);
    // nop
    goto L_08907C70;
L_08907E68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08907E84;
      }
      goto L_08907E70;
    }
L_08907E70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08907E84;
L_08907E84:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907EB0;
      }
      goto L_08907E94;
    }
L_08907E94:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907EB0;
      }
      goto L_08907EAC;
    }
L_08907EAC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08907EB0;
L_08907EB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907EDC;
      }
      goto L_08907EB8;
    }
L_08907EB8:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907EDC;
      }
      goto L_08907ED0;
    }
L_08907ED0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08907EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08907EDCu) goto L_08907EDC;
    return;
L_08907EDC:
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
L_08907EF8:
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
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 12u, 0x08908088u>(ctx, &aot_mem); return;
      }
      goto L_08907F44;
    }
L_08907F44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 10u, 0x08908078u>(ctx, &aot_mem); return;
      }
      goto L_08907F6C;
    }
L_08907F6C:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907FA8;
      }
      goto L_08907F8C;
    }
L_08907F8C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907FA8;
      }
      goto L_08907FA4;
    }
L_08907FA4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08907FA8;
L_08907FA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907FBC;
      }
      goto L_08907FB0;
    }
L_08907FB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_08907FBC;
L_08907FBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 4u, 0x0890802Cu>(ctx, &aot_mem); return;
      }
      goto L_08907FD8;
    }
L_08907FD8:
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907FF8;
      }
      goto L_08907FE8;
    }
L_08907FE8:
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_08907FF8;
L_08907FF8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 11u, 0x08908084u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 1u, 0x08908000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0064(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0064_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_64(Runtime &runtime) {
    runtime.register_generated_unit(64u, 0x08904000u, 16384u, &recomp_unit_0064, &recomp_unit_0064_entry);
    runtime.register_function(0x08904000u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890400Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904020u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904048u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904060u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904064u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904070u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904074u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890407Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890409Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904104u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904118u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890412Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904138u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904140u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904148u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904158u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904178u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904180u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904200u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904204u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904210u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904218u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904224u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904258u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904264u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904270u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904284u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904298u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904300u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904314u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904318u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904324u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890432Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904344u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890436Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904384u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904390u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904414u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904434u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890443Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890444Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904458u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904470u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904478u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904484u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890448Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904498u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904508u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904514u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904524u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904530u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904538u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904544u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890454Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904564u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904574u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904580u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904588u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904590u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890459Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904614u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904618u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904620u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904638u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904644u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904650u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904658u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904690u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904708u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904710u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904728u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904744u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904750u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904798u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904808u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890480Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904814u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890483Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890484Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904858u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904878u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904884u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904898u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890489Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904914u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904920u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890493Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904954u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890495Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904980u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890498Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904998u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904EA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904ED0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904EDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904EECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904EF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890500Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905018u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905024u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890503Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890504Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905088u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905100u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905114u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890511Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905124u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890513Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890516Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905174u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905180u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905234u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905258u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905270u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890527Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905288u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905294u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890529Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905318u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905340u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890534Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905354u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905360u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890536Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905378u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890537Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890538Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905398u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905400u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905404u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905418u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905420u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890542Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890545Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905464u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905470u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890547Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890548Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905498u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905500u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905510u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905520u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905528u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905534u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890553Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905548u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890555Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905584u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890559Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890561Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905628u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905634u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905644u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905668u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890571Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905758u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905764u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890576Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890577Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905798u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905800u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905808u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890582Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905834u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905844u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905878u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905880u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905884u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905894u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905904u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905924u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905968u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905978u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905994u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905AC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905ACCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905AD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905AE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905AECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905AF8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B4Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CCCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DF8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906000u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906010u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906020u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906030u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906048u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906058u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906068u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906078u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906150u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906170u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906178u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890618Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890619Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906204u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906210u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906224u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890622Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906238u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906244u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906254u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890625Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906268u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906278u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906280u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890628Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906298u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906304u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890630Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906314u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890631Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906324u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890632Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906334u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890633Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906344u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890634Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906354u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890635Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906364u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890636Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906374u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890637Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906384u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906404u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906410u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906418u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906424u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890642Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906440u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906454u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890646Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906470u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906478u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906490u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890649Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906500u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906518u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890651Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906524u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890653Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906548u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906564u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890658Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906594u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906600u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890661Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906630u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890663Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906644u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906658u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906688u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906700u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906710u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906718u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906724u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906730u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906744u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890674Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906754u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906760u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890676Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890677Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906804u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906810u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906828u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906834u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890683Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906848u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906850u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906868u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890687Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906888u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906890u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906898u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906900u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906910u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906934u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906958u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890697Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089069A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089069B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089069C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089069CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089069D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089069F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906AA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906AB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906ABCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906AC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906ADCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906AF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906BA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906BB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906BBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906BC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906BECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906CA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906CB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906CC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906CD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906CE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906CF8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907010u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907020u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907038u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890704Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907054u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907058u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907068u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890707Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890708Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907108u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907118u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907134u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907168u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907188u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890718Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907198u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907200u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890720Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907218u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907230u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907250u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907260u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890726Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907270u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907278u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907284u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907290u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907308u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907320u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907338u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907344u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907354u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907360u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907364u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907378u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907390u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890739Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907404u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907408u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890741Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907434u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907454u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907460u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907468u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907474u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907480u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890749Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907508u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907514u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890751Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907528u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907544u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907550u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907558u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907564u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907584u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907588u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907610u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907628u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907638u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907648u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907678u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907680u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907688u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890770Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907724u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907728u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907730u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907748u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907754u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907760u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907770u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890777Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907784u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907790u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907798u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907808u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890780Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907820u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907838u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890783Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907844u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907850u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907860u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907878u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890787Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907884u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890789Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907924u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907930u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907940u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907950u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907968u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907998u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907AB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907AE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907AF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907AFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CCCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907ED0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EF8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907FA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907FA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907FB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907FBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907FD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907FE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907FF8u, &recomp_unit_0064, "recomp_unit_0064");
}
} // namespace psprecomp
