#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0080[4092] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 9,
    0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0,
    45, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0,
    62, 0, 0, 63, 0, 64, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0,
    80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 89, 0, 90, 0,
    0, 91, 0, 92, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 109, 110,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0,
    0, 115, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 134, 0, 135, 0, 0, 0, 0,
    0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 175,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 183, 184, 0,
    185, 0, 0, 186, 0, 0, 187, 0, 188, 189, 0, 0, 0, 0, 0, 0, 190, 191, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194, 195, 0, 0, 0,
    196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 202,
    0, 0, 203, 204, 0, 205, 206, 0, 207, 0, 0, 208, 0, 0, 209, 210, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0,
    0, 0, 220, 0, 221, 0, 222, 0, 0, 223, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 231, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 258, 259, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 268, 0, 0, 0, 269, 270, 0,
    0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 278,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0,
    0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 291, 0, 0, 292, 0, 0, 0, 293, 0,
    0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0,
    0, 297, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 0, 301, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304,
    0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310,
    0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 314, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0,
    0, 319, 0, 320, 0, 0, 321, 0, 322, 0, 0, 323, 0, 324, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 330,
    0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 338, 0, 0, 339, 340, 0, 0, 341, 0, 342, 0,
    0, 343, 344, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 359, 360, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 0, 0, 370, 0, 371, 372, 0, 0, 0, 0, 373, 0, 0, 0, 374,
    0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0,
    380, 0, 381, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 384, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 388, 0, 389, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 394, 395, 0, 0, 396, 397, 0, 398, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406,
    0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0,
    0, 0, 0, 411, 0, 412, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 417, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423,
    0, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 0, 432, 0, 0, 433, 0, 434, 0, 435, 0, 436,
    0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0,
    456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 466, 0, 0,
    0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0,
    0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 488, 0, 0, 489, 0, 0, 0, 490, 0, 0, 491, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0,
    0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    503, 0, 0, 504, 0, 0, 0, 505, 0, 0, 506, 0, 507, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0,
    512, 0, 0, 0, 0, 0, 513, 514, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0,
    0, 519, 0, 0, 520, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0, 0,
    527, 0, 528, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 535, 0, 536,
    0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 0, 542,
    0, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 545, 546, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 550, 551, 0, 0, 0, 0,
    0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 559, 0, 0,
    560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 564, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567,
    0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 575,
    0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 583, 0, 0, 584, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0,
    587, 0, 0, 0, 0, 0, 0, 0, 0, 588, 589, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    592, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 594, 595, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0,
    0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 602, 0,
    0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0,
    0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 610, 611, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0,
    0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0,
    0, 0, 0, 0, 0, 0, 618, 619, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0,
    0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 624, 625, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 630, 631, 0, 0, 632, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 636,
    0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 640, 641, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 648, 0, 649,
    650, 0, 0, 651, 0, 0, 0, 652, 653, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 657, 0, 658, 0, 0, 0, 0, 0,
    0, 659, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 664, 665, 666, 0, 0, 667, 0, 0,
    668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670,
    0, 0, 0, 671, 0, 0, 672, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 0, 678,
    0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 0, 0, 685, 0, 686, 0,
    0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0, 693, 0, 694, 0, 695, 0, 0, 0,
    0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 700, 0, 0, 701, 0, 0, 0, 702, 0, 703, 0,
    704, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 0, 707, 708, 709, 0, 0, 0, 710, 0, 0, 711, 0, 712, 0, 0, 0,
    0, 0, 0, 713, 0, 0, 0, 0, 714, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 719, 0, 0, 0, 720, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0,
    729, 0, 0, 0, 730, 0, 0, 731, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735,
    0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 740, 0, 0, 741, 0, 0, 0, 742, 743,
    0, 0, 0, 744, 0, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 748, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0,
    0, 753, 0, 754, 0, 755, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 760, 0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 764, 0, 0, 765, 0, 0, 0, 0, 766, 0, 767, 0, 0,
    0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771,
    0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 775, 776, 0, 0, 777, 0, 0, 0, 0, 0, 778,
    0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 781, 0, 0, 782, 0,
    0, 0, 0, 0, 0, 0, 783, 784, 0, 0, 785, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 793, 0, 0,
    794, 0, 0, 0, 0, 0, 0, 0, 795, 0, 796, 0, 0, 797, 798, 0, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0,
    801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 803, 0, 804, 0, 0, 805, 0, 0, 0, 0, 806, 0,
    0, 0, 0, 0, 807, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 0, 811, 812, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0,
    0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0,
    819, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 825, 826, 0, 0, 827,
    828, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 831, 0, 0, 0, 0,
    832, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 834, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 837, 0, 0, 0, 0, 0,
    0, 0, 838, 839, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 842, 0, 0, 843, 0, 844, 0, 845, 0, 846, 0,
    847, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 851, 0, 0, 0, 0, 0, 852, 0, 0,
    0, 0, 0, 0, 0, 853, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 855, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0,
    0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0, 858, 0, 859, 0, 860, 0, 0, 861, 862, 0, 863, 864, 0, 0, 0, 0, 865,
};
void recomp_unit_0080_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08944000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0080[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08944000;
    case 2u: goto L_08944018;
    case 3u: goto L_08944024;
    case 4u: goto L_08944030;
    case 5u: goto L_0894403C;
    case 6u: goto L_08944058;
    case 7u: goto L_08944060;
    case 8u: goto L_08944070;
    case 9u: goto L_0894407C;
    case 10u: goto L_08944088;
    case 11u: goto L_08944090;
    case 12u: goto L_089440A8;
    case 13u: goto L_089440C0;
    case 14u: goto L_089440DC;
    case 15u: goto L_089440E8;
    case 16u: goto L_089440F4;
    case 17u: goto L_08944110;
    case 18u: goto L_0894412C;
    case 19u: goto L_089441BC;
    case 20u: goto L_089441C8;
    case 21u: goto L_089441D0;
    case 22u: goto L_089441DC;
    case 23u: goto L_089441E4;
    case 24u: goto L_089441F8;
    case 25u: goto L_0894420C;
    case 26u: goto L_08944224;
    case 27u: goto L_08944228;
    case 28u: goto L_08944230;
    case 29u: goto L_08944248;
    case 30u: goto L_08944254;
    case 31u: goto L_08944274;
    case 32u: goto L_0894428C;
    case 33u: goto L_089442B8;
    case 34u: goto L_089442D4;
    case 35u: goto L_089442F0;
    case 36u: goto L_089442F8;
    case 37u: goto L_08944304;
    case 38u: goto L_08944320;
    case 39u: goto L_08944328;
    case 40u: goto L_0894433C;
    case 41u: goto L_08944354;
    case 42u: goto L_08944364;
    case 43u: goto L_0894436C;
    case 44u: goto L_08944378;
    case 45u: goto L_08944380;
    case 46u: goto L_08944384;
    case 47u: goto L_08944398;
    case 48u: goto L_089443B0;
    case 49u: goto L_089443C0;
    case 50u: goto L_089443D4;
    case 51u: goto L_08944400;
    case 52u: goto L_08944408;
    case 53u: goto L_08944418;
    case 54u: goto L_08944420;
    case 55u: goto L_08944430;
    case 56u: goto L_0894443C;
    case 57u: goto L_08944444;
    case 58u: goto L_08944458;
    case 59u: goto L_08944464;
    case 60u: goto L_0894446C;
    case 61u: goto L_08944478;
    case 62u: goto L_08944480;
    case 63u: goto L_0894448C;
    case 64u: goto L_08944494;
    case 65u: goto L_08944498;
    case 66u: goto L_089444A4;
    case 67u: goto L_089444BC;
    case 68u: goto L_089444C8;
    case 69u: goto L_089444EC;
    case 70u: goto L_0894450C;
    case 71u: goto L_0894452C;
    case 72u: goto L_08944544;
    case 73u: goto L_0894454C;
    case 74u: goto L_0894455C;
    case 75u: goto L_0894458C;
    case 76u: goto L_089445AC;
    case 77u: goto L_089445E0;
    case 78u: goto L_089445EC;
    case 79u: goto L_089445F8;
    case 80u: goto L_08944600;
    case 81u: goto L_08944610;
    case 82u: goto L_08944618;
    case 83u: goto L_08944628;
    case 84u: goto L_08944634;
    case 85u: goto L_0894463C;
    case 86u: goto L_08944650;
    case 87u: goto L_0894465C;
    case 88u: goto L_08944664;
    case 89u: goto L_08944670;
    case 90u: goto L_08944678;
    case 91u: goto L_08944684;
    case 92u: goto L_0894468C;
    case 93u: goto L_08944690;
    case 94u: goto L_0894469C;
    case 95u: goto L_089446B4;
    case 96u: goto L_089446C0;
    case 97u: goto L_089446E4;
    case 98u: goto L_08944704;
    case 99u: goto L_08944724;
    case 100u: goto L_0894473C;
    case 101u: goto L_08944744;
    case 102u: goto L_08944754;
    case 103u: goto L_08944784;
    case 104u: goto L_089447A4;
    case 105u: goto L_089447CC;
    case 106u: goto L_089447D8;
    case 107u: goto L_089447E0;
    case 108u: goto L_089447EC;
    case 109u: goto L_089447F8;
    case 110u: goto L_089447FC;
    case 111u: goto L_0894480C;
    case 112u: goto L_08944858;
    case 113u: goto L_08944864;
    case 114u: goto L_08944874;
    case 115u: goto L_08944884;
    case 116u: goto L_08944888;
    case 117u: goto L_08944894;
    case 118u: goto L_089448B4;
    case 119u: goto L_089448DC;
    case 120u: goto L_089448E8;
    case 121u: goto L_089448F8;
    case 122u: goto L_08944918;
    case 123u: goto L_08944920;
    case 124u: goto L_0894492C;
    case 125u: goto L_08944950;
    case 126u: goto L_08944978;
    case 127u: goto L_08944984;
    case 128u: goto L_0894498C;
    case 129u: goto L_08944998;
    case 130u: goto L_089449A0;
    case 131u: goto L_089449B4;
    case 132u: goto L_089449C8;
    case 133u: goto L_089449E0;
    case 134u: goto L_089449E4;
    case 135u: goto L_089449EC;
    case 136u: goto L_08944A04;
    case 137u: goto L_08944A10;
    case 138u: goto L_08944A2C;
    case 139u: goto L_08944A44;
    case 140u: goto L_08944A54;
    case 141u: goto L_08944A94;
    case 142u: goto L_08944AA4;
    case 143u: goto L_08944AC8;
    case 144u: goto L_08944AD8;
    case 145u: goto L_08944AF0;
    case 146u: goto L_08944B1C;
    case 147u: goto L_08944B30;
    case 148u: goto L_08944B4C;
    case 149u: goto L_08944B68;
    case 150u: goto L_08944B88;
    case 151u: goto L_08944B98;
    case 152u: goto L_08944BD4;
    case 153u: goto L_08944BE0;
    case 154u: goto L_08944BE8;
    case 155u: goto L_08944BF4;
    case 156u: goto L_08944C0C;
    case 157u: goto L_08944C20;
    case 158u: goto L_08944C3C;
    case 159u: goto L_08944C48;
    case 160u: goto L_08944C4C;
    case 161u: goto L_08944C58;
    case 162u: goto L_08944C7C;
    case 163u: goto L_08944CC0;
    case 164u: goto L_08944CD0;
    case 165u: goto L_08944D10;
    case 166u: goto L_08944D1C;
    case 167u: goto L_08944D24;
    case 168u: goto L_08944D30;
    case 169u: goto L_08944D60;
    case 170u: goto L_08944D98;
    case 171u: goto L_08944DBC;
    case 172u: goto L_08944DCC;
    case 173u: goto L_08944DE4;
    case 174u: goto L_08944DF8;
    case 175u: goto L_08944DFC;
    case 176u: goto L_08944E08;
    case 177u: goto L_08944E2C;
    case 178u: goto L_08944E3C;
    case 179u: goto L_08944E44;
    case 180u: goto L_08944E50;
    case 181u: goto L_08944E5C;
    case 182u: goto L_08944E6C;
    case 183u: goto L_08944E74;
    case 184u: goto L_08944E78;
    case 185u: goto L_08944E80;
    case 186u: goto L_08944E8C;
    case 187u: goto L_08944E98;
    case 188u: goto L_08944EA0;
    case 189u: goto L_08944EA4;
    case 190u: goto L_08944EC0;
    case 191u: goto L_08944EC4;
    case 192u: goto L_08944EC8;
    case 193u: goto L_08944ED8;
    case 194u: goto L_08944EEC;
    case 195u: goto L_08944EF0;
    case 196u: goto L_08944F00;
    case 197u: goto L_08944F14;
    case 198u: goto L_08944F28;
    case 199u: goto L_08944F38;
    case 200u: goto L_08944F6C;
    case 201u: goto L_08944F74;
    case 202u: goto L_08944F7C;
    case 203u: goto L_08944F88;
    case 204u: goto L_08944F8C;
    case 205u: goto L_08944F94;
    case 206u: goto L_08944F98;
    case 207u: goto L_08944FA0;
    case 208u: goto L_08944FAC;
    case 209u: goto L_08944FB8;
    case 210u: goto L_08944FBC;
    case 211u: goto L_08944FC4;
    case 212u: goto L_08944FE0;
    case 213u: goto L_08945010;
    case 214u: goto L_0894501C;
    case 215u: goto L_08945028;
    case 216u: goto L_08945034;
    case 217u: goto L_08945048;
    case 218u: goto L_08945068;
    case 219u: goto L_08945078;
    case 220u: goto L_08945088;
    case 221u: goto L_08945090;
    case 222u: goto L_08945098;
    case 223u: goto L_089450A4;
    case 224u: goto L_089450A8;
    case 225u: goto L_089450D0;
    case 226u: goto L_089450F8;
    case 227u: goto L_08945104;
    case 228u: goto L_08945118;
    case 229u: goto L_08945134;
    case 230u: goto L_0894513C;
    case 231u: goto L_08945148;
    case 232u: goto L_0894514C;
    case 233u: goto L_0894516C;
    case 234u: goto L_08945184;
    case 235u: goto L_08945194;
    case 236u: goto L_089451A8;
    case 237u: goto L_089451B8;
    case 238u: goto L_089451D0;
    case 239u: goto L_089451E0;
    case 240u: goto L_089451F4;
    case 241u: goto L_0894520C;
    case 242u: goto L_0894521C;
    case 243u: goto L_08945230;
    case 244u: goto L_08945260;
    case 245u: goto L_0894526C;
    case 246u: goto L_08945274;
    case 247u: goto L_08945280;
    case 248u: goto L_0894529C;
    case 249u: goto L_089452B4;
    case 250u: goto L_089452D0;
    case 251u: goto L_089452DC;
    case 252u: goto L_089452E4;
    case 253u: goto L_089452EC;
    case 254u: goto L_08945308;
    case 255u: goto L_08945330;
    case 256u: goto L_08945340;
    case 257u: goto L_0894534C;
    case 258u: goto L_08945350;
    case 259u: goto L_08945354;
    case 260u: goto L_08945360;
    case 261u: goto L_0894536C;
    case 262u: goto L_0894538C;
    case 263u: goto L_089453A4;
    case 264u: goto L_089453B4;
    case 265u: goto L_089453C4;
    case 266u: goto L_089453CC;
    case 267u: goto L_089453DC;
    case 268u: goto L_089453E4;
    case 269u: goto L_089453F4;
    case 270u: goto L_089453F8;
    case 271u: goto L_0894540C;
    case 272u: goto L_08945418;
    case 273u: goto L_08945440;
    case 274u: goto L_0894544C;
    case 275u: goto L_08945454;
    case 276u: goto L_08945460;
    case 277u: goto L_08945468;
    case 278u: goto L_0894547C;
    case 279u: goto L_08945490;
    case 280u: goto L_089454A8;
    case 281u: goto L_089454AC;
    case 282u: goto L_089454B4;
    case 283u: goto L_089454CC;
    case 284u: goto L_089454D8;
    case 285u: goto L_089454F4;
    case 286u: goto L_08945508;
    case 287u: goto L_08945524;
    case 288u: goto L_08945530;
    case 289u: goto L_08945540;
    case 290u: goto L_08945558;
    case 291u: goto L_0894555C;
    case 292u: goto L_08945568;
    case 293u: goto L_08945578;
    case 294u: goto L_08945594;
    case 295u: goto L_089455E8;
    case 296u: goto L_089455F4;
    case 297u: goto L_08945604;
    case 298u: goto L_08945618;
    case 299u: goto L_08945620;
    case 300u: goto L_08945630;
    case 301u: goto L_0894563C;
    case 302u: goto L_08945640;
    case 303u: goto L_0894565C;
    case 304u: goto L_0894567C;
    case 305u: goto L_0894568C;
    case 306u: goto L_089456CC;
    case 307u: goto L_089456D4;
    case 308u: goto L_089456E0;
    case 309u: goto L_089456F0;
    case 310u: goto L_089456FC;
    case 311u: goto L_0894570C;
    case 312u: goto L_08945720;
    case 313u: goto L_0894572C;
    case 314u: goto L_08945730;
    case 315u: goto L_0894573C;
    case 316u: goto L_08945744;
    case 317u: goto L_0894575C;
    case 318u: goto L_08945778;
    case 319u: goto L_08945784;
    case 320u: goto L_0894578C;
    case 321u: goto L_08945798;
    case 322u: goto L_089457A0;
    case 323u: goto L_089457AC;
    case 324u: goto L_089457B4;
    case 325u: goto L_089457C0;
    case 326u: goto L_089457C8;
    case 327u: goto L_089457D8;
    case 328u: goto L_089457E4;
    case 329u: goto L_089457EC;
    case 330u: goto L_089457FC;
    case 331u: goto L_08945808;
    case 332u: goto L_08945814;
    case 333u: goto L_08945820;
    case 334u: goto L_08945828;
    case 335u: goto L_08945830;
    case 336u: goto L_0894583C;
    case 337u: goto L_0894584C;
    case 338u: goto L_08945854;
    case 339u: goto L_08945860;
    case 340u: goto L_08945864;
    case 341u: goto L_08945870;
    case 342u: goto L_08945878;
    case 343u: goto L_08945884;
    case 344u: goto L_08945888;
    case 345u: goto L_08945894;
    case 346u: goto L_0894589C;
    case 347u: goto L_089458A8;
    case 348u: goto L_089458B4;
    case 349u: goto L_089458C0;
    case 350u: goto L_089458D0;
    case 351u: goto L_08945908;
    case 352u: goto L_08945930;
    case 353u: goto L_0894593C;
    case 354u: goto L_08945944;
    case 355u: goto L_08945950;
    case 356u: goto L_08945958;
    case 357u: goto L_0894596C;
    case 358u: goto L_08945980;
    case 359u: goto L_08945998;
    case 360u: goto L_0894599C;
    case 361u: goto L_089459A4;
    case 362u: goto L_089459BC;
    case 363u: goto L_089459C8;
    case 364u: goto L_089459E4;
    case 365u: goto L_08945A00;
    case 366u: goto L_08945A18;
    case 367u: goto L_08945A2C;
    case 368u: goto L_08945A34;
    case 369u: goto L_08945A3C;
    case 370u: goto L_08945A4C;
    case 371u: goto L_08945A54;
    case 372u: goto L_08945A58;
    case 373u: goto L_08945A6C;
    case 374u: goto L_08945A7C;
    case 375u: goto L_08945A8C;
    case 376u: goto L_08945ABC;
    case 377u: goto L_08945AC8;
    case 378u: goto L_08945AD4;
    case 379u: goto L_08945AF8;
    case 380u: goto L_08945B00;
    case 381u: goto L_08945B08;
    case 382u: goto L_08945B14;
    case 383u: goto L_08945B1C;
    case 384u: goto L_08945B34;
    case 385u: goto L_08945B38;
    case 386u: goto L_08945B4C;
    case 387u: goto L_08945B60;
    case 388u: goto L_08945B84;
    case 389u: goto L_08945B8C;
    case 390u: goto L_08945B98;
    case 391u: goto L_08945BA8;
    case 392u: goto L_08945BC0;
    case 393u: goto L_08945BD4;
    case 394u: goto L_08945BDC;
    case 395u: goto L_08945BE0;
    case 396u: goto L_08945BEC;
    case 397u: goto L_08945BF0;
    case 398u: goto L_08945BF8;
    case 399u: goto L_08945C64;
    case 400u: goto L_08945C90;
    case 401u: goto L_08945C98;
    case 402u: goto L_08945CC4;
    case 403u: goto L_08945CD0;
    case 404u: goto L_08945CDC;
    case 405u: goto L_08945CE8;
    case 406u: goto L_08945CFC;
    case 407u: goto L_08945D08;
    case 408u: goto L_08945D30;
    case 409u: goto L_08945D4C;
    case 410u: goto L_08945D68;
    case 411u: goto L_08945D8C;
    case 412u: goto L_08945D94;
    case 413u: goto L_08945D9C;
    case 414u: goto L_08945DA8;
    case 415u: goto L_08945DB4;
    case 416u: goto L_08945DC0;
    case 417u: goto L_08945DC8;
    case 418u: goto L_08945DDC;
    case 419u: goto L_08945DE8;
    case 420u: goto L_08945E10;
    case 421u: goto L_08945E34;
    case 422u: goto L_08945E5C;
    case 423u: goto L_08945E7C;
    case 424u: goto L_08945E94;
    case 425u: goto L_08945E9C;
    case 426u: goto L_08945EA4;
    case 427u: goto L_08945EAC;
    case 428u: goto L_08945EB4;
    case 429u: goto L_08945EBC;
    case 430u: goto L_08945EC4;
    case 431u: goto L_08945ECC;
    case 432u: goto L_08945ED8;
    case 433u: goto L_08945EE4;
    case 434u: goto L_08945EEC;
    case 435u: goto L_08945EF4;
    case 436u: goto L_08945EFC;
    case 437u: goto L_08945F04;
    case 438u: goto L_08945F0C;
    case 439u: goto L_08945F14;
    case 440u: goto L_08945F1C;
    case 441u: goto L_08945F24;
    case 442u: goto L_08945F2C;
    case 443u: goto L_08945F34;
    case 444u: goto L_08945F54;
    case 445u: goto L_08945FA8;
    case 446u: goto L_08945FB4;
    case 447u: goto L_08945FBC;
    case 448u: goto L_08945FD0;
    case 449u: goto L_08945FDC;
    case 450u: goto L_08946004;
    case 451u: goto L_08946028;
    case 452u: goto L_08946048;
    case 453u: goto L_08946054;
    case 454u: goto L_08946060;
    case 455u: goto L_0894606C;
    case 456u: goto L_08946080;
    case 457u: goto L_08946098;
    case 458u: goto L_089460AC;
    case 459u: goto L_089460B4;
    case 460u: goto L_089460CC;
    case 461u: goto L_089460D8;
    case 462u: goto L_089460F0;
    case 463u: goto L_08946110;
    case 464u: goto L_08946160;
    case 465u: goto L_0894616C;
    case 466u: goto L_08946174;
    case 467u: goto L_08946188;
    case 468u: goto L_08946194;
    case 469u: goto L_089461BC;
    case 470u: goto L_089461E0;
    case 471u: goto L_08946200;
    case 472u: goto L_0894620C;
    case 473u: goto L_08946224;
    case 474u: goto L_0894623C;
    case 475u: goto L_08946248;
    case 476u: goto L_08946258;
    case 477u: goto L_08946270;
    case 478u: goto L_08946288;
    case 479u: goto L_089462A0;
    case 480u: goto L_089462B4;
    case 481u: goto L_089462BC;
    case 482u: goto L_089462D4;
    case 483u: goto L_089462E0;
    case 484u: goto L_089462F4;
    case 485u: goto L_08946304;
    case 486u: goto L_08946310;
    case 487u: goto L_08946320;
    case 488u: goto L_08946328;
    case 489u: goto L_08946334;
    case 490u: goto L_08946344;
    case 491u: goto L_08946350;
    case 492u: goto L_08946364;
    case 493u: goto L_0894636C;
    case 494u: goto L_08946388;
    case 495u: goto L_089463A0;
    case 496u: goto L_089463B0;
    case 497u: goto L_0894640C;
    case 498u: goto L_0894641C;
    case 499u: goto L_0894642C;
    case 500u: goto L_08946440;
    case 501u: goto L_0894644C;
    case 502u: goto L_08946458;
    case 503u: goto L_08946480;
    case 504u: goto L_0894648C;
    case 505u: goto L_0894649C;
    case 506u: goto L_089464A8;
    case 507u: goto L_089464B0;
    case 508u: goto L_089464BC;
    case 509u: goto L_089464C4;
    case 510u: goto L_089464DC;
    case 511u: goto L_089464F0;
    case 512u: goto L_08946500;
    case 513u: goto L_08946518;
    case 514u: goto L_0894651C;
    case 515u: goto L_08946524;
    case 516u: goto L_0894653C;
    case 517u: goto L_08946548;
    case 518u: goto L_08946568;
    case 519u: goto L_08946584;
    case 520u: goto L_08946590;
    case 521u: goto L_08946598;
    case 522u: goto L_089465A4;
    case 523u: goto L_089465B0;
    case 524u: goto L_089465D8;
    case 525u: goto L_089465E4;
    case 526u: goto L_089465F4;
    case 527u: goto L_08946600;
    case 528u: goto L_08946608;
    case 529u: goto L_08946614;
    case 530u: goto L_0894661C;
    case 531u: goto L_08946634;
    case 532u: goto L_08946648;
    case 533u: goto L_08946658;
    case 534u: goto L_08946670;
    case 535u: goto L_08946674;
    case 536u: goto L_0894667C;
    case 537u: goto L_08946694;
    case 538u: goto L_089466A0;
    case 539u: goto L_089466C0;
    case 540u: goto L_089466DC;
    case 541u: goto L_089466E8;
    case 542u: goto L_089466FC;
    case 543u: goto L_0894671C;
    case 544u: goto L_08946724;
    case 545u: goto L_08946730;
    case 546u: goto L_08946734;
    case 547u: goto L_0894673C;
    case 548u: goto L_08946748;
    case 549u: goto L_08946750;
    case 550u: goto L_08946768;
    case 551u: goto L_0894676C;
    case 552u: goto L_08946784;
    case 553u: goto L_08946798;
    case 554u: goto L_089467A8;
    case 555u: goto L_089467B8;
    case 556u: goto L_089467C8;
    case 557u: goto L_089467E4;
    case 558u: goto L_089467EC;
    case 559u: goto L_089467F4;
    case 560u: goto L_08946800;
    case 561u: goto L_08946814;
    case 562u: goto L_08946828;
    case 563u: goto L_0894683C;
    case 564u: goto L_08946848;
    case 565u: goto L_08946850;
    case 566u: goto L_08946864;
    case 567u: goto L_0894687C;
    case 568u: goto L_0894688C;
    case 569u: goto L_0894689C;
    case 570u: goto L_089468B0;
    case 571u: goto L_089468C4;
    case 572u: goto L_089468D8;
    case 573u: goto L_089468E4;
    case 574u: goto L_089468F0;
    case 575u: goto L_089468FC;
    case 576u: goto L_0894690C;
    case 577u: goto L_08946924;
    case 578u: goto L_08946954;
    case 579u: goto L_0894696C;
    case 580u: goto L_08946998;
    case 581u: goto L_089469A4;
    case 582u: goto L_089469B8;
    case 583u: goto L_089469C0;
    case 584u: goto L_089469CC;
    case 585u: goto L_089469D4;
    case 586u: goto L_089469E0;
    case 587u: goto L_08946A00;
    case 588u: goto L_08946A24;
    case 589u: goto L_08946A28;
    case 590u: goto L_08946A34;
    case 591u: goto L_08946A54;
    case 592u: goto L_08946A80;
    case 593u: goto L_08946AA0;
    case 594u: goto L_08946AC4;
    case 595u: goto L_08946AC8;
    case 596u: goto L_08946AD4;
    case 597u: goto L_08946AEC;
    case 598u: goto L_08946B0C;
    case 599u: goto L_08946B38;
    case 600u: goto L_08946B58;
    case 601u: goto L_08946B74;
    case 602u: goto L_08946B78;
    case 603u: goto L_08946B84;
    case 604u: goto L_08946B9C;
    case 605u: goto L_08946BBC;
    case 606u: goto L_08946BEC;
    case 607u: goto L_08946C0C;
    case 608u: goto L_08946C30;
    case 609u: goto L_08946C38;
    case 610u: goto L_08946C48;
    case 611u: goto L_08946C4C;
    case 612u: goto L_08946C58;
    case 613u: goto L_08946C70;
    case 614u: goto L_08946C94;
    case 615u: goto L_08946CC0;
    case 616u: goto L_08946CD4;
    case 617u: goto L_08946CF4;
    case 618u: goto L_08946D18;
    case 619u: goto L_08946D1C;
    case 620u: goto L_08946D28;
    case 621u: goto L_08946D48;
    case 622u: goto L_08946D74;
    case 623u: goto L_08946D94;
    case 624u: goto L_08946DB8;
    case 625u: goto L_08946DBC;
    case 626u: goto L_08946DC8;
    case 627u: goto L_08946DE8;
    case 628u: goto L_08946E18;
    case 629u: goto L_08946E28;
    case 630u: goto L_08946E30;
    case 631u: goto L_08946E34;
    case 632u: goto L_08946E40;
    case 633u: goto L_08946E4C;
    case 634u: goto L_08946E60;
    case 635u: goto L_08946E70;
    case 636u: goto L_08946E7C;
    case 637u: goto L_08946E8C;
    case 638u: goto L_08946EA4;
    case 639u: goto L_08946EAC;
    case 640u: goto L_08946EB8;
    case 641u: goto L_08946EBC;
    case 642u: goto L_08946EE0;
    case 643u: goto L_08946F2C;
    case 644u: goto L_08946F3C;
    case 645u: goto L_08946F48;
    case 646u: goto L_08946F5C;
    case 647u: goto L_08946F6C;
    case 648u: goto L_08946F74;
    case 649u: goto L_08946F7C;
    case 650u: goto L_08946F80;
    case 651u: goto L_08946F8C;
    case 652u: goto L_08946F9C;
    case 653u: goto L_08946FA0;
    case 654u: goto L_08946FAC;
    case 655u: goto L_08946FC0;
    case 656u: goto L_08946FD4;
    case 657u: goto L_08946FE0;
    case 658u: goto L_08946FE8;
    case 659u: goto L_08947004;
    case 660u: goto L_08947010;
    case 661u: goto L_08947020;
    case 662u: goto L_08947034;
    case 663u: goto L_08947040;
    case 664u: goto L_08947060;
    case 665u: goto L_08947064;
    case 666u: goto L_08947068;
    case 667u: goto L_08947074;
    case 668u: goto L_08947080;
    case 669u: goto L_089470B0;
    case 670u: goto L_089470FC;
    case 671u: goto L_0894710C;
    case 672u: goto L_08947118;
    case 673u: goto L_08947120;
    case 674u: goto L_08947128;
    case 675u: goto L_08947144;
    case 676u: goto L_08947158;
    case 677u: goto L_08947168;
    case 678u: goto L_0894717C;
    case 679u: goto L_0894718C;
    case 680u: goto L_0894719C;
    case 681u: goto L_089471B8;
    case 682u: goto L_089471CC;
    case 683u: goto L_089471D4;
    case 684u: goto L_089471E0;
    case 685u: goto L_089471F0;
    case 686u: goto L_089471F8;
    case 687u: goto L_08947208;
    case 688u: goto L_08947220;
    case 689u: goto L_08947234;
    case 690u: goto L_0894723C;
    case 691u: goto L_08947248;
    case 692u: goto L_08947258;
    case 693u: goto L_08947260;
    case 694u: goto L_08947268;
    case 695u: goto L_08947270;
    case 696u: goto L_0894728C;
    case 697u: goto L_089472A0;
    case 698u: goto L_089472B8;
    case 699u: goto L_089472CC;
    case 700u: goto L_089472D4;
    case 701u: goto L_089472E0;
    case 702u: goto L_089472F0;
    case 703u: goto L_089472F8;
    case 704u: goto L_08947300;
    case 705u: goto L_0894731C;
    case 706u: goto L_08947324;
    case 707u: goto L_08947344;
    case 708u: goto L_08947348;
    case 709u: goto L_0894734C;
    case 710u: goto L_0894735C;
    case 711u: goto L_08947368;
    case 712u: goto L_08947370;
    case 713u: goto L_0894738C;
    case 714u: goto L_089473A0;
    case 715u: goto L_089473A4;
    case 716u: goto L_089473D8;
    case 717u: goto L_08947424;
    case 718u: goto L_08947434;
    case 719u: goto L_08947440;
    case 720u: goto L_08947450;
    case 721u: goto L_08947458;
    case 722u: goto L_08947474;
    case 723u: goto L_0894749C;
    case 724u: goto L_089474AC;
    case 725u: goto L_089474C4;
    case 726u: goto L_089474D4;
    case 727u: goto L_089474E0;
    case 728u: goto L_089474F0;
    case 729u: goto L_08947500;
    case 730u: goto L_08947510;
    case 731u: goto L_0894751C;
    case 732u: goto L_08947528;
    case 733u: goto L_08947538;
    case 734u: goto L_08947568;
    case 735u: goto L_0894757C;
    case 736u: goto L_0894758C;
    case 737u: goto L_089475A8;
    case 738u: goto L_089475C0;
    case 739u: goto L_089475D4;
    case 740u: goto L_089475DC;
    case 741u: goto L_089475E8;
    case 742u: goto L_089475F8;
    case 743u: goto L_089475FC;
    case 744u: goto L_0894760C;
    case 745u: goto L_08947618;
    case 746u: goto L_08947620;
    case 747u: goto L_0894763C;
    case 748u: goto L_08947650;
    case 749u: goto L_08947654;
    case 750u: goto L_08947688;
    case 751u: goto L_089476C8;
    case 752u: goto L_089476E0;
    case 753u: goto L_08947704;
    case 754u: goto L_0894770C;
    case 755u: goto L_08947714;
    case 756u: goto L_08947720;
    case 757u: goto L_08947734;
    case 758u: goto L_08947750;
    case 759u: goto L_08947764;
    case 760u: goto L_0894778C;
    case 761u: goto L_08947794;
    case 762u: goto L_0894779C;
    case 763u: goto L_089477C8;
    case 764u: goto L_089477CC;
    case 765u: goto L_089477D8;
    case 766u: goto L_089477EC;
    case 767u: goto L_089477F4;
    case 768u: goto L_08947804;
    case 769u: goto L_08947830;
    case 770u: goto L_08947864;
    case 771u: goto L_0894787C;
    case 772u: goto L_08947890;
    case 773u: goto L_089478A8;
    case 774u: goto L_089478B4;
    case 775u: goto L_089478D4;
    case 776u: goto L_089478D8;
    case 777u: goto L_089478E4;
    case 778u: goto L_089478FC;
    case 779u: goto L_08947920;
    case 780u: goto L_08947954;
    case 781u: goto L_0894796C;
    case 782u: goto L_08947978;
    case 783u: goto L_08947998;
    case 784u: goto L_0894799C;
    case 785u: goto L_089479A8;
    case 786u: goto L_089479C0;
    case 787u: goto L_089479E4;
    case 788u: goto L_08947A1C;
    case 789u: goto L_08947A34;
    case 790u: goto L_08947A3C;
    case 791u: goto L_08947A48;
    case 792u: goto L_08947A5C;
    case 793u: goto L_08947A74;
    case 794u: goto L_08947A80;
    case 795u: goto L_08947AA0;
    case 796u: goto L_08947AA8;
    case 797u: goto L_08947AB4;
    case 798u: goto L_08947AB8;
    case 799u: goto L_08947AC4;
    case 800u: goto L_08947ADC;
    case 801u: goto L_08947B00;
    case 802u: goto L_08947B38;
    case 803u: goto L_08947B50;
    case 804u: goto L_08947B58;
    case 805u: goto L_08947B64;
    case 806u: goto L_08947B78;
    case 807u: goto L_08947B90;
    case 808u: goto L_08947B9C;
    case 809u: goto L_08947BBC;
    case 810u: goto L_08947BC4;
    case 811u: goto L_08947BD0;
    case 812u: goto L_08947BD4;
    case 813u: goto L_08947BE0;
    case 814u: goto L_08947BF8;
    case 815u: goto L_08947C1C;
    case 816u: goto L_08947C54;
    case 817u: goto L_08947C6C;
    case 818u: goto L_08947C74;
    case 819u: goto L_08947C80;
    case 820u: goto L_08947C94;
    case 821u: goto L_08947CAC;
    case 822u: goto L_08947CB8;
    case 823u: goto L_08947CD8;
    case 824u: goto L_08947CE0;
    case 825u: goto L_08947CEC;
    case 826u: goto L_08947CF0;
    case 827u: goto L_08947CFC;
    case 828u: goto L_08947D00;
    case 829u: goto L_08947D24;
    case 830u: goto L_08947D60;
    case 831u: goto L_08947D6C;
    case 832u: goto L_08947D80;
    case 833u: goto L_08947D94;
    case 834u: goto L_08947DAC;
    case 835u: goto L_08947DB8;
    case 836u: goto L_08947DDC;
    case 837u: goto L_08947DE8;
    case 838u: goto L_08947E08;
    case 839u: goto L_08947E0C;
    case 840u: goto L_08947E18;
    case 841u: goto L_08947E44;
    case 842u: goto L_08947E54;
    case 843u: goto L_08947E60;
    case 844u: goto L_08947E68;
    case 845u: goto L_08947E70;
    case 846u: goto L_08947E78;
    case 847u: goto L_08947E80;
    case 848u: goto L_08947E90;
    case 849u: goto L_08947EBC;
    case 850u: goto L_08947ECC;
    case 851u: goto L_08947EDC;
    case 852u: goto L_08947EF4;
    case 853u: goto L_08947F14;
    case 854u: goto L_08947F44;
    case 855u: goto L_08947F54;
    case 856u: goto L_08947F6C;
    case 857u: goto L_08947F8C;
    case 858u: goto L_08947FAC;
    case 859u: goto L_08947FB4;
    case 860u: goto L_08947FBC;
    case 861u: goto L_08947FC8;
    case 862u: goto L_08947FCC;
    case 863u: goto L_08947FD4;
    case 864u: goto L_08947FD8;
    case 865u: goto L_08947FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08944000:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08944018u);
    // nop
    goto L_089443D4;
L_08944018:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944030;
      }
      goto L_08944024;
    }
L_08944024:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08944030;
L_08944030:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944060;
      }
      goto L_0894403C;
    }
L_0894403C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944060;
      }
      goto L_08944058;
    }
L_08944058:
    ctx.set_gpr(31, 0x08944060u);
    // nop
    goto L_089467C8;
L_08944060:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894407C;
      }
      goto L_08944070;
    }
L_08944070:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894407C;
L_0894407C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944090;
      }
      goto L_08944088;
    }
L_08944088:
    ctx.set_gpr(31, 0x08944090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08944090u) goto L_08944090;
    return;
L_08944090:
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
L_089440A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089440C0u);
    // nop
    goto L_08945D68;
L_089440C0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18972));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089440E8;
      }
      goto L_089440DC;
    }
L_089440DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089440E8u);
    // nop
    goto L_08944110;
L_089440E8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x089440F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 173u, 0x088F0E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089440F4u) goto L_089440F4;
    return;
L_089440F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
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
L_08944110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0894412Cu);
    // nop
    goto L_08945BF8;
L_0894412C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18972));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089441E4;
      }
      goto L_089441BC;
    }
L_089441BC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089441C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089441C8u) goto L_089441C8;
    return;
L_089441C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089441DC;
      }
      goto L_089441D0;
    }
L_089441D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089441DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089441DCu) goto L_089441DC;
    return;
L_089441DC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089441E4;
L_089441E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089441F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089441F8u) goto L_089441F8;
    return;
L_089441F8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944228;
      }
      goto L_0894420C;
    }
L_0894420C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944228;
      }
      goto L_08944224;
    }
L_08944224:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08944228;
L_08944228:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944254;
      }
      goto L_08944230;
    }
L_08944230:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944254;
      }
      goto L_08944248;
    }
L_08944248:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08944254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08944254u) goto L_08944254;
    return;
L_08944254:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
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
L_08944274:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0894428Cu);
    // nop
    goto L_08945C64;
L_0894428C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18972));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
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
L_089442B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089442F8;
      }
      goto L_089442D4;
    }
L_089442D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089442F8;
      }
      goto L_089442F0;
    }
L_089442F0:
    ctx.set_gpr(31, 0x089442F8u);
    // nop
    goto L_089467C8;
L_089442F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944328;
      }
      goto L_08944304;
    }
L_08944304:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944328;
      }
      goto L_08944320;
    }
L_08944320:
    ctx.set_gpr(31, 0x08944328u);
    // nop
    goto L_089467C8;
L_08944328:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894433C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08944354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08944354u) goto L_08944354;
    return;
L_08944354:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08944364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 690u, 0x08907020u>(ctx, &aot_mem) && ctx.pc == 0x08944364u) goto L_08944364;
    return;
L_08944364:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944380;
      }
      goto L_0894436C;
    }
L_0894436C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08944378u);
    // nop
    goto L_08944398;
L_08944378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944384;
      }
      goto L_08944380;
    }
L_08944380:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08944384;
L_08944384:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089443B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x089443B0u) goto L_089443B0;
    return;
L_089443B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089443C0u);
    // nop
    goto L_089443D4;
L_089443C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089443D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944420;
      }
      goto L_08944400;
    }
L_08944400:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08944408u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08944408u) goto L_08944408;
    return;
L_08944408:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08944418u);
    // nop
    goto L_089443D4;
L_08944418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894458C;
      }
      goto L_08944420;
    }
L_08944420:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894443C;
      }
      goto L_08944430;
    }
L_08944430:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894458C;
      }
      goto L_0894443C;
    }
L_0894443C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944498;
      }
      goto L_08944444;
    }
L_08944444:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894448C;
      }
      goto L_08944458;
    }
L_08944458:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894448C;
      }
      goto L_08944464;
    }
L_08944464:
    ctx.set_gpr(31, 0x0894446Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 202u, 0x0893CCACu>(ctx, &aot_mem) && ctx.pc == 0x0894446Cu) goto L_0894446C;
    return;
L_0894446C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944498;
      }
      goto L_08944478;
    }
L_08944478:
    ctx.set_gpr(31, 0x08944480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08944480u) goto L_08944480;
    return;
L_08944480:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944498;
      }
      goto L_0894448C;
    }
L_0894448C:
    ctx.set_gpr(31, 0x08944494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08944494u) goto L_08944494;
    return;
L_08944494:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08944498;
L_08944498:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32668)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894450C;
      }
      goto L_089444A4;
    }
L_089444A4:
    ctx.set_gpr(19, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089444BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089444BCu) goto L_089444BC;
    return;
L_089444BC:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894450C;
      }
      goto L_089444C8;
    }
L_089444C8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[19] & 65535u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089444ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089444ECu) goto L_089444EC;
    return;
L_089444EC:
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31360)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31360), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944544;
      }
      goto L_0894450C;
    }
L_0894450C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894452Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894452Cu) goto L_0894452C;
    return;
L_0894452C:
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31364)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31364), ctx.gpr[3]);
    goto L_08944544;
L_08944544:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894455C;
      }
      goto L_0894454C;
    }
L_0894454C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894455Cu);
    // nop
    goto L_08945F34;
L_0894455C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31352)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31356)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31352), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31356), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0894458C;
L_0894458C:
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
L_089445AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089445EC;
      }
      goto L_089445E0;
    }
L_089445E0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944784;
      }
      goto L_089445EC;
    }
L_089445EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944618;
      }
      goto L_089445F8;
    }
L_089445F8:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08944600u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08944600u) goto L_08944600;
    return;
L_08944600:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08944610u);
    // nop
    goto L_089445AC;
L_08944610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944784;
      }
      goto L_08944618;
    }
L_08944618:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08944634;
      }
      goto L_08944628;
    }
L_08944628:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944784;
      }
      goto L_08944634;
    }
L_08944634:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944690;
      }
      goto L_0894463C;
    }
L_0894463C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944684;
      }
      goto L_08944650;
    }
L_08944650:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944684;
      }
      goto L_0894465C;
    }
L_0894465C:
    ctx.set_gpr(31, 0x08944664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 202u, 0x0893CCACu>(ctx, &aot_mem) && ctx.pc == 0x08944664u) goto L_08944664;
    return;
L_08944664:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944690;
      }
      goto L_08944670;
    }
L_08944670:
    ctx.set_gpr(31, 0x08944678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x08944678u) goto L_08944678;
    return;
L_08944678:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944690;
      }
      goto L_08944684;
    }
L_08944684:
    ctx.set_gpr(31, 0x0894468Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x0894468Cu) goto L_0894468C;
    return;
L_0894468C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08944690;
L_08944690:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32668)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944704;
      }
      goto L_0894469C;
    }
L_0894469C:
    ctx.set_gpr(19, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089446B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089446B4u) goto L_089446B4;
    return;
L_089446B4:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944704;
      }
      goto L_089446C0;
    }
L_089446C0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[19] & 65535u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089446E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089446E4u) goto L_089446E4;
    return;
L_089446E4:
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31360)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31360), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894473C;
      }
      goto L_08944704;
    }
L_08944704:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08944724u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08944724u) goto L_08944724;
    return;
L_08944724:
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31364)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31364), ctx.gpr[3]);
    goto L_0894473C;
L_0894473C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944754;
      }
      goto L_08944744;
    }
L_08944744:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08944754u);
    // nop
    goto L_089460F0;
L_08944754:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31352)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31356)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31352), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31356), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08944784;
L_08944784:
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
L_089447A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944894;
      }
      goto L_089447CC;
    }
L_089447CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089447FC;
      }
      goto L_089447D8;
    }
L_089447D8:
    ctx.set_gpr(31, 0x089447E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089447E0u) goto L_089447E0;
    return;
L_089447E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089447ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089447ECu) goto L_089447EC;
    return;
L_089447EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089447F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 127u, 0x088F0B00u>(ctx, &aot_mem) && ctx.pc == 0x089447F8u) goto L_089447F8;
    return;
L_089447F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_089447FC;
L_089447FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894480Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 731u, 0x08927300u>(ctx, &aot_mem) && ctx.pc == 0x0894480Cu) goto L_0894480C;
    return;
L_0894480C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08944858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 670u, 0x08926F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08944858u) goto L_08944858;
    return;
L_08944858:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944888;
      }
      goto L_08944864;
    }
L_08944864:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08944874u);
    // nop
    goto L_08944B4C;
L_08944874:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08944884u);
    // nop
    goto L_08944A54;
L_08944884:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08944888;
L_08944888:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944864;
      }
      goto L_08944894;
    }
L_08944894:
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
L_089448B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894492C;
      }
      goto L_089448DC;
    }
L_089448DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894492C;
      }
      goto L_089448E8;
    }
L_089448E8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944920;
      }
      goto L_089448F8;
    }
L_089448F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08944918u);
    // nop
    goto L_089448B4;
L_08944918:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08944920;
L_08944920:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089448F8;
      }
      goto L_0894492C;
    }
L_0894492C:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_08944950:
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
          goto L_089449A0;
      }
      goto L_08944978;
    }
L_08944978:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08944984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08944984u) goto L_08944984;
    return;
L_08944984:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944998;
      }
      goto L_0894498C;
    }
L_0894498C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08944998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08944998u) goto L_08944998;
    return;
L_08944998:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089449A0;
L_089449A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089449B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089449B4u) goto L_089449B4;
    return;
L_089449B4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089449E4;
      }
      goto L_089449C8;
    }
L_089449C8:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089449E4;
      }
      goto L_089449E0;
    }
L_089449E0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089449E4;
L_089449E4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944A10;
      }
      goto L_089449EC;
    }
L_089449EC:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944A10;
      }
      goto L_08944A04;
    }
L_08944A04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08944A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08944A10u) goto L_08944A10;
    return;
L_08944A10:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
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
L_08944A2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08944A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 28u, 0x0895C184u>(ctx, &aot_mem) && ctx.pc == 0x08944A44u) goto L_08944A44;
    return;
L_08944A44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944A54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31344)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31348)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31344), ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31348), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08944A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x08944A94u) goto L_08944A94;
    return;
L_08944A94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944AA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08944AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x08944AC8u) goto L_08944AC8;
    return;
L_08944AC8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08944AD8u);
    // nop
    goto L_08944A54;
L_08944AD8:
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
L_08944AF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08944B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x08944B1Cu) goto L_08944B1C;
    return;
L_08944B1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08944B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 755u, 0x08927548u>(ctx, &aot_mem) && ctx.pc == 0x08944B30u) goto L_08944B30;
    return;
L_08944B30:
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
L_08944B4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944B68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26904)));
    ctx.set_gpr(31, 0x08944B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 692u, 0x0892707Cu>(ctx, &aot_mem) && ctx.pc == 0x08944B88u) goto L_08944B88;
    return;
L_08944B88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944B98:
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
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08944BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 670u, 0x08926F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08944BD4u) goto L_08944BD4;
    return;
L_08944BD4:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944C4C;
      }
      goto L_08944BE0;
    }
L_08944BE0:
    ctx.set_gpr(31, 0x08944BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08944BE8u) goto L_08944BE8;
    return;
L_08944BE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08944BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08944BF4u) goto L_08944BF4;
    return;
L_08944BF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08944C0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08944C0Cu) goto L_08944C0C;
    return;
L_08944C0C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08944C20u);
    // nop
    goto L_08944A54;
L_08944C20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944C48;
      }
      goto L_08944C3C;
    }
L_08944C3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08944C48u);
    // nop
    goto L_089467C8;
L_08944C48:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08944C4C;
L_08944C4C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944BE0;
      }
      goto L_08944C58;
    }
L_08944C58:
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
L_08944C7C:
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
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x08944CC0u);
    // nop
    goto L_089451A8;
L_08944CC0:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944D24;
      }
      goto L_08944CD0;
    }
L_08944CD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[22] << 2u);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08944D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 547u, 0x0894265Cu>(ctx, &aot_mem) && ctx.pc == 0x08944D10u) goto L_08944D10;
    return;
L_08944D10:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08944D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x08944D1Cu) goto L_08944D1C;
    return;
L_08944D1C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08944D24;
L_08944D24:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944CD0;
      }
      goto L_08944D30;
    }
L_08944D30:
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
L_08944D60:
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
    ctx.set_gpr(31, 0x08944D98u);
    // nop
    goto L_089451A8;
L_08944D98:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944EC8;
      }
      goto L_08944DBC;
    }
L_08944DBC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08944DCCu);
    // nop
    goto L_08944B4C;
L_08944DCC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08944DE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08944DE4u) goto L_08944DE4;
    return;
L_08944DE4:
    ctx.set_gpr(16, ctx.gpr[2] & 65535u);
    ctx.set_gpr(2, ctx.gpr[19] & 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944DFC;
      }
      goto L_08944DF8;
    }
L_08944DF8:
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
    goto L_08944DFC;
L_08944DFC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944E2C;
      }
      goto L_08944E08;
    }
L_08944E08:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[20] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(20, ctx.gpr[2] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944EA4;
      }
      goto L_08944E2C;
    }
L_08944E2C:
    ctx.set_gpr(30, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944E50;
      }
      goto L_08944E3C;
    }
L_08944E3C:
    ctx.set_gpr(31, 0x08944E44u);
    // nop
    goto L_089451A8;
L_08944E44:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944E5C;
      }
      goto L_08944E50;
    }
L_08944E50:
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944E78;
      }
      goto L_08944E5C;
    }
L_08944E5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08944E6Cu);
    // nop
    goto L_08944B4C;
L_08944E6C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08944E78;
      }
      goto L_08944E74;
    }
L_08944E74:
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(1));
    goto L_08944E78;
L_08944E78:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944E8C;
      }
      goto L_08944E80;
    }
L_08944E80:
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[23]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    goto L_08944E8C;
L_08944E8C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944EA0;
      }
      goto L_08944E98;
    }
L_08944E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944EA4;
      }
      goto L_08944EA0;
    }
L_08944EA0:
    ctx.set_gpr(22, ctx.gpr[16] + 0u);
    goto L_08944EA4;
L_08944EA4:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944EC4;
      }
      goto L_08944EC0;
    }
L_08944EC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    goto L_08944EC4;
L_08944EC4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08944EC8;
L_08944EC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944DBC;
      }
      goto L_08944ED8;
    }
L_08944ED8:
    ctx.set_gpr(3, ctx.gpr[19] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944EF0;
      }
      goto L_08944EEC;
    }
L_08944EEC:
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[19]));
    goto L_08944EF0;
L_08944EF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08944F14;
      }
      goto L_08944F00;
    }
L_08944F00:
    ctx.set_gpr(2, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, ctx.gpr[20] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08944F14;
L_08944F14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] | 4u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08944F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08944F28u) goto L_08944F28;
    return;
L_08944F28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08944F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 705u, 0x08907134u>(ctx, &aot_mem) && ctx.pc == 0x08944F38u) goto L_08944F38;
    return;
L_08944F38:
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
L_08944F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944F8C;
      }
      goto L_08944F74;
    }
L_08944F74:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08944F88;
      }
      goto L_08944F7C;
    }
L_08944F7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944F98;
      }
      goto L_08944F88;
    }
L_08944F88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08944F8C;
L_08944F8C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944F74;
      }
      goto L_08944F94;
    }
L_08944F94:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08944F98;
L_08944F98:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944FA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944FB8;
      }
      goto L_08944FAC;
    }
L_08944FAC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944FBC;
      }
      goto L_08944FB8;
    }
L_08944FB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    goto L_08944FBC;
L_08944FBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944FC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944FE0:
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
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894501C;
      }
      goto L_08945010;
    }
L_08945010:
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089450A8;
      }
      goto L_0894501C;
    }
L_0894501C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945034;
      }
      goto L_08945028;
    }
L_08945028:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089450A8;
      }
      goto L_08945034;
    }
L_08945034:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945098;
      }
      goto L_08945048;
    }
L_08945048:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08945068u);
    // nop
    goto L_089450D0;
L_08945068:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945090;
      }
      goto L_08945078;
    }
L_08945078:
    ctx.set_gpr(5, ctx.gpr[20] - ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08945088u);
    // nop
    goto L_08944FE0;
L_08945088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089450A8;
      }
      goto L_08945090;
    }
L_08945090:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08945098;
L_08945098:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945048;
      }
      goto L_089450A4;
    }
L_089450A4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089450A8;
L_089450A8:
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
L_089450D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945104;
      }
      goto L_089450F8;
    }
L_089450F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894514C;
      }
      goto L_08945104;
    }
L_08945104:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894513C;
      }
      goto L_08945118;
    }
L_08945118:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08945134u);
    // nop
    goto L_089450D0;
L_08945134:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0894513C;
L_0894513C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945118;
      }
      goto L_08945148;
    }
L_08945148:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_0894514C;
L_0894514C:
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
L_0894516C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08945184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08945184u) goto L_08945184;
    return;
L_08945184:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08945194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 690u, 0x08907020u>(ctx, &aot_mem) && ctx.pc == 0x08945194u) goto L_08945194;
    return;
L_08945194:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089451A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089451B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089451D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089451D0u) goto L_089451D0;
    return;
L_089451D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089451E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 697u, 0x0890708Cu>(ctx, &aot_mem) && ctx.pc == 0x089451E0u) goto L_089451E0;
    return;
L_089451E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089451F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0894520Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0894520Cu) goto L_0894520C;
    return;
L_0894520C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894521Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 699u, 0x089070B0u>(ctx, &aot_mem) && ctx.pc == 0x0894521Cu) goto L_0894521C;
    return;
L_0894521C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945230:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08945260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08945260u) goto L_08945260;
    return;
L_08945260:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08945274;
      }
      goto L_0894526C;
    }
L_0894526C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089452EC;
      }
      goto L_08945274;
    }
L_08945274:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089452D0;
      }
      goto L_08945280;
    }
L_08945280:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0894529Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 244u, 0x088C54E4u>(ctx, &aot_mem) && ctx.pc == 0x0894529Cu) goto L_0894529C;
    return;
L_0894529C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089452B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x089452B4u) goto L_089452B4;
    return;
L_089452B4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089452D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x089452D0u) goto L_089452D0;
    return;
L_089452D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089452E4;
      }
      goto L_089452DC;
    }
L_089452DC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945280;
      }
      goto L_089452E4;
    }
L_089452E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_089452EC;
L_089452EC:
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
L_08945308:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945354;
      }
      goto L_08945330;
    }
L_08945330:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08945340u);
    // nop
    goto L_08944B4C;
L_08945340:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945350;
      }
      goto L_0894534C;
    }
L_0894534C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08945350;
L_08945350:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08945354;
L_08945354:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08945360u);
    // nop
    goto L_089451A8;
L_08945360:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945330;
      }
      goto L_0894536C;
    }
L_0894536C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_0894538C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089453A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089453A4u) goto L_089453A4;
    return;
L_089453A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089453B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x089453B4u) goto L_089453B4;
    return;
L_089453B4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089453F8;
      }
      goto L_089453C4;
    }
L_089453C4:
    ctx.set_gpr(31, 0x089453CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089453CCu) goto L_089453CC;
    return;
L_089453CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089453DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 688u, 0x08906FFCu>(ctx, &aot_mem) && ctx.pc == 0x089453DCu) goto L_089453DC;
    return;
L_089453DC:
    ctx.set_gpr(31, 0x089453E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089453E4u) goto L_089453E4;
    return;
L_089453E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089453F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x089453F4u) goto L_089453F4;
    return;
L_089453F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_089453F8;
L_089453F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894540C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945418:
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
          goto L_08945468;
      }
      goto L_08945440;
    }
L_08945440:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894544Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894544Cu) goto L_0894544C;
    return;
L_0894544C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945460;
      }
      goto L_08945454;
    }
L_08945454:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08945460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08945460u) goto L_08945460;
    return;
L_08945460:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08945468;
L_08945468:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894547Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894547Cu) goto L_0894547C;
    return;
L_0894547C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089454AC;
      }
      goto L_08945490;
    }
L_08945490:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089454AC;
      }
      goto L_089454A8;
    }
L_089454A8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089454AC;
L_089454AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089454D8;
      }
      goto L_089454B4;
    }
L_089454B4:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089454D8;
      }
      goto L_089454CC;
    }
L_089454CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089454D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089454D8u) goto L_089454D8;
    return;
L_089454D8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
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
L_089454F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945508:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    jump_target = ctx.gpr[4];
    ctx.set_gpr(31, 0x08945524u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08945524u) goto L_08945524;
    return;
L_08945524:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945578;
      }
      goto L_08945530;
    }
L_08945530:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894555C;
      }
      goto L_08945540;
    }
L_08945540:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08945558u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08945558u) goto L_08945558;
    return;
L_08945558:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0894555C;
L_0894555C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945540;
      }
      goto L_08945568;
    }
L_08945568:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08945578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907434u>(ctx, &aot_mem) && ctx.pc == 0x08945578u) goto L_08945578;
    return;
L_08945578:
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
L_08945594:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-320));
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
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(19, ctx.gpr[9] + 0u);
    ctx.set_gpr(30, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.set_gpr(31, 0x089455E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089455E8u) goto L_089455E8;
    return;
L_089455E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089455F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089455F4u) goto L_089455F4;
    return;
L_089455F4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945640;
      }
      goto L_08945604;
    }
L_08945604:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2768));
    ctx.set_gpr(31, 0x08945618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08945618u) goto L_08945618;
    return;
L_08945618:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945630;
      }
      goto L_08945620;
    }
L_08945620:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08945630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08945630u) goto L_08945630;
    return;
L_08945630:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894563Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x0894563Cu) goto L_0894563C;
    return;
L_0894563C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08945640;
L_08945640:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089458D0;
      }
      goto L_0894565C;
    }
L_0894565C:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[2] | 8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[6] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089458C0;
      }
      goto L_0894567C;
    }
L_0894567C:
    ctx.set_gpr(2, ctx.gpr[6] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089457FC;
      }
      goto L_0894568C;
    }
L_0894568C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31336)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31340)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31336), ctx.gpr[4]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(31340), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[6] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089456FC;
      }
      goto L_089456CC;
    }
L_089456CC:
    jump_target = ctx.gpr[20];
    ctx.set_gpr(31, 0x089456D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089456D4u) goto L_089456D4;
    return;
L_089456D4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    jump_target = ctx.gpr[22];
    ctx.set_gpr(31, 0x089456E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089456E0u) goto L_089456E0;
    return;
L_089456E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089456F0u);
    // nop
    goto L_089447A4;
L_089456F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_089456FC;
L_089456FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894570Cu);
    // nop
    goto L_08944A2C;
L_0894570C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[21]));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945730;
      }
      goto L_08945720;
    }
L_08945720:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0894572Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894572Cu) goto L_0894572C;
    return;
L_0894572C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    goto L_08945730;
L_08945730:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945744;
      }
      goto L_0894573C;
    }
L_0894573C:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08945744u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08945744u) goto L_08945744;
    return;
L_08945744:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894575Cu);
    // nop
    goto L_0894538C;
L_0894575C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945784;
      }
      goto L_08945778;
    }
L_08945778:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08945784u);
    // nop
    goto L_089467C8;
L_08945784:
    ctx.set_gpr(31, 0x0894578Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0894578Cu) goto L_0894578C;
    return;
L_0894578C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089457FC;
      }
      goto L_08945798;
    }
L_08945798:
    ctx.set_gpr(31, 0x089457A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089457A0u) goto L_089457A0;
    return;
L_089457A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089457FC;
      }
      goto L_089457AC;
    }
L_089457AC:
    ctx.set_gpr(31, 0x089457B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089457B4u) goto L_089457B4;
    return;
L_089457B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089457FC;
      }
      goto L_089457C0;
    }
L_089457C0:
    ctx.set_gpr(31, 0x089457C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089457C8u) goto L_089457C8;
    return;
L_089457C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089457D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 197u, 0x0895CC64u>(ctx, &aot_mem) && ctx.pc == 0x089457D8u) goto L_089457D8;
    return;
L_089457D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089457FC;
      }
      goto L_089457E4;
    }
L_089457E4:
    ctx.set_gpr(31, 0x089457ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089457ECu) goto L_089457EC;
    return;
L_089457EC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089457FCu);
    // nop
    goto L_0894540C;
L_089457FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08945808u);
    // nop
    goto L_08944D60;
L_08945808:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945820;
      }
      goto L_08945814;
    }
L_08945814:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08945820u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08945820u) goto L_08945820;
    return;
L_08945820:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945864;
      }
      goto L_08945828;
    }
L_08945828:
    ctx.set_gpr(31, 0x08945830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08945830u) goto L_08945830;
    return;
L_08945830:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894583Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0894583Cu) goto L_0894583C;
    return;
L_0894583C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894584Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem) && ctx.pc == 0x0894584Cu) goto L_0894584C;
    return;
L_0894584C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945860;
      }
      goto L_08945854;
    }
L_08945854:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08945860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890741Cu>(ctx, &aot_mem) && ctx.pc == 0x08945860u) goto L_08945860;
    return;
L_08945860:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08945864;
L_08945864:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945894;
      }
      goto L_08945870;
    }
L_08945870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945888;
      }
      goto L_08945878;
    }
L_08945878:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08945884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 758u, 0x0890749Cu>(ctx, &aot_mem) && ctx.pc == 0x08945884u) goto L_08945884;
    return;
L_08945884:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_08945888;
L_08945888:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945878;
      }
      goto L_08945894;
    }
L_08945894:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089458B4;
      }
      goto L_0894589C;
    }
L_0894589C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089458B4;
      }
      goto L_089458A8;
    }
L_089458A8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089458B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 758u, 0x0890749Cu>(ctx, &aot_mem) && ctx.pc == 0x089458B4u) goto L_089458B4;
    return;
L_089458B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] | 4u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_089458C0;
L_089458C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-9));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_089458D0;
L_089458D0:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945908:
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
          goto L_08945958;
      }
      goto L_08945930;
    }
L_08945930:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894593Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894593Cu) goto L_0894593C;
    return;
L_0894593C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945950;
      }
      goto L_08945944;
    }
L_08945944:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08945950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08945950u) goto L_08945950;
    return;
L_08945950:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_08945958;
L_08945958:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894596Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894596Cu) goto L_0894596C;
    return;
L_0894596C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894599C;
      }
      goto L_08945980;
    }
L_08945980:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894599C;
      }
      goto L_08945998;
    }
L_08945998:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0894599C;
L_0894599C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089459C8;
      }
      goto L_089459A4;
    }
L_089459A4:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089459C8;
      }
      goto L_089459BC;
    }
L_089459BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089459C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089459C8u) goto L_089459C8;
    return;
L_089459C8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
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
L_089459E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945A58;
      }
      goto L_08945A00;
    }
L_08945A00:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08945A54;
      }
      goto L_08945A18;
    }
L_08945A18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945A34;
      }
      goto L_08945A2C;
    }
L_08945A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945A3C;
      }
      goto L_08945A34;
    }
L_08945A34:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8240));
    goto L_08945A3C;
L_08945A3C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x08945A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 167u, 0x0891CCBCu>(ctx, &aot_mem) && ctx.pc == 0x08945A4Cu) goto L_08945A4C;
    return;
L_08945A4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945A7C;
      }
      goto L_08945A54;
    }
L_08945A54:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08945A58;
L_08945A58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945A00;
      }
      goto L_08945A6C;
    }
L_08945A6C:
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08945A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 579u, 0x08926880u>(ctx, &aot_mem) && ctx.pc == 0x08945A7Cu) goto L_08945A7C;
    return;
L_08945A7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945A8C:
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
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945AC8;
      }
      goto L_08945ABC;
    }
L_08945ABC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945B60;
      }
      goto L_08945AC8;
    }
L_08945AC8:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945B38;
      }
      goto L_08945AD4;
    }
L_08945AD4:
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945B00;
      }
      goto L_08945AF8;
    }
L_08945AF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945B08;
      }
      goto L_08945B00;
    }
L_08945B00:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8240));
    goto L_08945B08;
L_08945B08:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08945B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08945B14u) goto L_08945B14;
    return;
L_08945B14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945B34;
      }
      goto L_08945B1C;
    }
L_08945B1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945B60;
      }
      goto L_08945B34;
    }
L_08945B34:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08945B38;
L_08945B38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945AD4;
      }
      goto L_08945B4C;
    }
L_08945B4C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08945B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 599u, 0x089269F0u>(ctx, &aot_mem) && ctx.pc == 0x08945B60u) goto L_08945B60;
    return;
L_08945B60:
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
L_08945B84:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945B98;
      }
      goto L_08945B8C;
    }
L_08945B8C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945BF0;
      }
      goto L_08945B98;
    }
L_08945B98:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945BE0;
      }
      goto L_08945BA8;
    }
L_08945BA8:
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945BDC;
      }
      goto L_08945BC0;
    }
L_08945BC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08945BDC;
      }
      goto L_08945BD4;
    }
L_08945BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945BF0;
      }
      goto L_08945BDC;
    }
L_08945BDC:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08945BE0;
L_08945BE0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945BA8;
      }
      goto L_08945BEC;
    }
L_08945BEC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08945BF0;
L_08945BF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945BF8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5792));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 65472u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945C64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5792));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945C98;
      }
      goto L_08945C90;
    }
L_08945C90:
    ctx.set_gpr(31, 0x08945C98u);
    // nop
    goto L_08945BF8;
L_08945C98:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, ctx.gpr[2] << 25u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 31u) & 0x00000001u);
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08945CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08945CC4u) goto L_08945CC4;
    return;
L_08945CC4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945D4C;
      }
      goto L_08945CD0;
    }
L_08945CD0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08945CDCu);
    // nop
    goto L_08947FEC;
L_08945CDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08945CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 523u, 0x0892E3F4u>(ctx, &aot_mem) && ctx.pc == 0x08945CE8u) goto L_08945CE8;
    return;
L_08945CE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08945CFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08945CFCu) goto L_08945CFC;
    return;
L_08945CFC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 511 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945D30;
      }
      goto L_08945D08;
    }
L_08945D08:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, ctx.gpr[2] & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945D4C;
      }
      goto L_08945D30;
    }
L_08945D30:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(3, 0u | 65408u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08945D4C;
L_08945D4C:
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
L_08945D68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5792));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945D94;
      }
      goto L_08945D8C;
    }
L_08945D8C:
    ctx.set_gpr(31, 0x08945D94u);
    // nop
    goto L_08945BF8;
L_08945D94:
    ctx.set_gpr(31, 0x08945D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08945D9Cu) goto L_08945D9C;
    return;
L_08945D9C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945E5C;
      }
      goto L_08945DA8;
    }
L_08945DA8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08945DB4u);
    // nop
    goto L_08947FEC;
L_08945DB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08945DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 523u, 0x0892E3F4u>(ctx, &aot_mem) && ctx.pc == 0x08945DC0u) goto L_08945DC0;
    return;
L_08945DC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945E34;
      }
      goto L_08945DC8;
    }
L_08945DC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08945DDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08945DDCu) goto L_08945DDC;
    return;
L_08945DDC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 511 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945E10;
      }
      goto L_08945DE8;
    }
L_08945DE8:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, ctx.gpr[2] & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945E7C;
      }
      goto L_08945E10;
    }
L_08945E10:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(3, 0u | 65408u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945E7C;
      }
      goto L_08945E34;
    }
L_08945E34:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945E7C;
      }
      goto L_08945E5C;
    }
L_08945E5C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08945E7C;
L_08945E7C:
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
L_08945E94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945E9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945EA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945EAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945EB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945EBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945EC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945ECC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945ED8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945EE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945EEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945EF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945EFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945F04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945F0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945F14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945F1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945F24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945F2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945F34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08945F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08945F54u) goto L_08945F54;
    return;
L_08945F54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 65472u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08945FA8u);
    // nop
    goto L_08947FEC;
L_08945FA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08945FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 523u, 0x0892E3F4u>(ctx, &aot_mem) && ctx.pc == 0x08945FB4u) goto L_08945FB4;
    return;
L_08945FB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946028;
      }
      goto L_08945FBC;
    }
L_08945FBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08945FD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08945FD0u) goto L_08945FD0;
    return;
L_08945FD0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 511 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946004;
      }
      goto L_08945FDC;
    }
L_08945FDC:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, ctx.gpr[2] & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946048;
      }
      goto L_08946004;
    }
L_08946004:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(3, 0u | 65408u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946048;
      }
      goto L_08946028;
    }
L_08946028:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08946048;
L_08946048:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08946054u);
    // nop
    goto L_0894696C;
L_08946054:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08946060u);
    // nop
    goto L_08946A54;
L_08946060:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894606Cu);
    // nop
    goto L_08946BBC;
L_0894606C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946080u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946080u) goto L_08946080;
    return;
L_08946080:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946098u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946098u) goto L_08946098;
    return;
L_08946098:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089460ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089460ACu) goto L_089460AC;
    return;
L_089460AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089460D8;
      }
      goto L_089460B4;
    }
L_089460B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089460D8;
      }
      goto L_089460CC;
    }
L_089460CC:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089460D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 731u, 0x08927300u>(ctx, &aot_mem) && ctx.pc == 0x089460D8u) goto L_089460D8;
    return;
L_089460D8:
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
L_089460F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08946110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08946110u) goto L_08946110;
    return;
L_08946110:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 65472u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08946160u);
    // nop
    goto L_08947FEC;
L_08946160:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894616Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 523u, 0x0892E3F4u>(ctx, &aot_mem) && ctx.pc == 0x0894616Cu) goto L_0894616C;
    return;
L_0894616C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089461E0;
      }
      goto L_08946174;
    }
L_08946174:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946188u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946188u) goto L_08946188;
    return;
L_08946188:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 511 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089461BC;
      }
      goto L_08946194;
    }
L_08946194:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, ctx.gpr[2] & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946200;
      }
      goto L_089461BC;
    }
L_089461BC:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(3, 0u | 65408u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946200;
      }
      goto L_089461E0;
    }
L_089461E0:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 127u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08946200;
L_08946200:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894620Cu);
    // nop
    goto L_0894696C;
L_0894620C:
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
L_08946224:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946258;
      }
      goto L_0894623C;
    }
L_0894623C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946258;
      }
      goto L_08946248;
    }
L_08946248:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946258u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946258u) goto L_08946258;
    return;
L_08946258:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946270u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946270u) goto L_08946270;
    return;
L_08946270:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946288u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946288u) goto L_08946288;
    return;
L_08946288:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089462A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089462A0u) goto L_089462A0;
    return;
L_089462A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089462B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089462B4u) goto L_089462B4;
    return;
L_089462B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089462E0;
      }
      goto L_089462BC;
    }
L_089462BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089462E0;
      }
      goto L_089462D4;
    }
L_089462D4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089462E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 731u, 0x08927300u>(ctx, &aot_mem) && ctx.pc == 0x089462E0u) goto L_089462E0;
    return;
L_089462E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089462F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08946304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08946304u) goto L_08946304;
    return;
L_08946304:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08946310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08946310u) goto L_08946310;
    return;
L_08946310:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08946320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem) && ctx.pc == 0x08946320u) goto L_08946320;
    return;
L_08946320:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946334;
      }
      goto L_08946328;
    }
L_08946328:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08946334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890741Cu>(ctx, &aot_mem) && ctx.pc == 0x08946334u) goto L_08946334;
    return;
L_08946334:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946344:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946350:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08946364u);
    // nop
    goto L_08945BF8;
L_08946364:
    ctx.set_gpr(31, 0x0894636Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0894636Cu) goto L_0894636C;
    return;
L_0894636C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946388:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2196u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(31, 0x089463A0u);
    // nop
    goto L_08945508;
L_089463A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089463B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2196u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25644));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31368));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25332));
    ctx.set_gpr(7, 2196u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(25412));
    ctx.set_gpr(8, 2196u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(25628));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-2752));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2196u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(25424));
    ctx.set_gpr(31, 0x0894640Cu);
    // nop
    goto L_08945594;
L_0894640C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894641C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894642C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08946440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08946440u) goto L_08946440;
    return;
L_08946440:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894644Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0894644Cu) goto L_0894644C;
    return;
L_0894644C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08946458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 456u, 0x088DE650u>(ctx, &aot_mem) && ctx.pc == 0x08946458u) goto L_08946458;
    return;
L_08946458:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(31372));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2740));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894648C;
      }
      goto L_08946480;
    }
L_08946480:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089464DC;
      }
      goto L_0894648C;
    }
L_0894648C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089464C4;
      }
      goto L_0894649C;
    }
L_0894649C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089464A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x089464A8u) goto L_089464A8;
    return;
L_089464A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089464BC;
      }
      goto L_089464B0;
    }
L_089464B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089464BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089464BCu) goto L_089464BC;
    return;
L_089464BC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089464C4;
L_089464C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2740));
    ctx.set_gpr(31, 0x089464DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089464DCu) goto L_089464DC;
    return;
L_089464DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089464F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x089464F0u) goto L_089464F0;
    return;
L_089464F0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894651C;
      }
      goto L_08946500;
    }
L_08946500:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894651C;
      }
      goto L_08946518;
    }
L_08946518:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0894651C;
L_0894651C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946548;
      }
      goto L_08946524;
    }
L_08946524:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946548;
      }
      goto L_0894653C;
    }
L_0894653C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08946548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08946548u) goto L_08946548;
    return;
L_08946548:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08946568u);
    // nop
    goto L_08944AA4;
L_08946568:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946590;
      }
      goto L_08946584;
    }
L_08946584:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08946590u);
    // nop
    goto L_089467C8;
L_08946590:
    ctx.set_gpr(31, 0x08946598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08946598u) goto L_08946598;
    return;
L_08946598:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089465A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089465A4u) goto L_089465A4;
    return;
L_089465A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089465B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 456u, 0x088DE650u>(ctx, &aot_mem) && ctx.pc == 0x089465B0u) goto L_089465B0;
    return;
L_089465B0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(31376));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2728));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089465E4;
      }
      goto L_089465D8;
    }
L_089465D8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946634;
      }
      goto L_089465E4;
    }
L_089465E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894661C;
      }
      goto L_089465F4;
    }
L_089465F4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08946600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08946600u) goto L_08946600;
    return;
L_08946600:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946614;
      }
      goto L_08946608;
    }
L_08946608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08946614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08946614u) goto L_08946614;
    return;
L_08946614:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894661C;
L_0894661C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2728));
    ctx.set_gpr(31, 0x08946634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08946634u) goto L_08946634;
    return;
L_08946634:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08946648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x08946648u) goto L_08946648;
    return;
L_08946648:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946674;
      }
      goto L_08946658;
    }
L_08946658:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946674;
      }
      goto L_08946670;
    }
L_08946670:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08946674;
L_08946674:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089466A0;
      }
      goto L_0894667C;
    }
L_0894667C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089466A0;
      }
      goto L_08946694;
    }
L_08946694:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089466A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089466A0u) goto L_089466A0;
    return;
L_089466A0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089466C0u);
    // nop
    goto L_08944AA4;
L_089466C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089466E8;
      }
      goto L_089466DC;
    }
L_089466DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089466E8u);
    // nop
    goto L_089467C8;
L_089466E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089466FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946734;
      }
      goto L_0894671C;
    }
L_0894671C:
    ctx.set_gpr(31, 0x08946724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x08946724u) goto L_08946724;
    return;
L_08946724:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08946730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08946730u) goto L_08946730;
    return;
L_08946730:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08946734;
L_08946734:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946750;
      }
      goto L_0894673C;
    }
L_0894673C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08946748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 487u, 0x0881201Cu>(ctx, &aot_mem) && ctx.pc == 0x08946748u) goto L_08946748;
    return;
L_08946748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894676C;
      }
      goto L_08946750;
    }
L_08946750:
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946768u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946768u) goto L_08946768;
    return;
L_08946768:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    goto L_0894676C;
L_0894676C:
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
L_08946784:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08946798u);
    // nop
    goto L_089466FC;
L_08946798:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089467A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089467B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089467B8u) goto L_089467B8;
    return;
L_089467B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089467C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089467E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089467E4u) goto L_089467E4;
    return;
L_089467E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946954;
      }
      goto L_089467EC;
    }
L_089467EC:
    ctx.set_gpr(31, 0x089467F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089467F4u) goto L_089467F4;
    return;
L_089467F4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946850;
      }
      goto L_08946800;
    }
L_08946800:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946814u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946814u) goto L_08946814;
    return;
L_08946814:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946828u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946828u) goto L_08946828;
    return;
L_08946828:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894683Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894683Cu) goto L_0894683C;
    return;
L_0894683C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08946848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x08946848u) goto L_08946848;
    return;
L_08946848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946924;
      }
      goto L_08946850;
    }
L_08946850:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946864u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946864u) goto L_08946864;
    return;
L_08946864:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894689C;
      }
      goto L_0894687C;
    }
L_0894687C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894688Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x0894688Cu) goto L_0894688C;
    return;
L_0894688C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894689Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 717u, 0x0892723Cu>(ctx, &aot_mem) && ctx.pc == 0x0894689Cu) goto L_0894689C;
    return;
L_0894689C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089468B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089468B0u) goto L_089468B0;
    return;
L_089468B0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089468C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089468C4u) goto L_089468C4;
    return;
L_089468C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089468D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089468D8u) goto L_089468D8;
    return;
L_089468D8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089468E4u);
    // nop
    goto L_08946C94;
L_089468E4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089468F0u);
    // nop
    goto L_08946D48;
L_089468F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089468FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089468FCu) goto L_089468FC;
    return;
L_089468FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894690Cu);
    // nop
    goto L_08947FEC;
L_0894690C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946924u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946924u) goto L_08946924;
    return;
L_08946924:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31352)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31356)));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31352), ctx.gpr[5]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(31356), ctx.gpr[4]);
    goto L_08946954;
L_08946954:
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
L_0894696C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946998u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946998u) goto L_08946998;
    return;
L_08946998:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089469B8;
      }
      goto L_089469A4;
    }
L_089469A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089469E0;
      }
      goto L_089469B8;
    }
L_089469B8:
    ctx.set_gpr(31, 0x089469C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089469C0u) goto L_089469C0;
    return;
L_089469C0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089469E0;
      }
      goto L_089469CC;
    }
L_089469CC:
    ctx.set_gpr(31, 0x089469D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089469D4u) goto L_089469D4;
    return;
L_089469D4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946A34;
      }
      goto L_089469E0;
    }
L_089469E0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946A28;
      }
      goto L_08946A00;
    }
L_08946A00:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946A24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946A24u) goto L_08946A24;
    return;
L_08946A24:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08946A28;
L_08946A28:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946A00;
      }
      goto L_08946A34;
    }
L_08946A34:
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
L_08946A54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946A80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946A80u) goto L_08946A80;
    return;
L_08946A80:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946AC8;
      }
      goto L_08946AA0;
    }
L_08946AA0:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946AC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946AC4u) goto L_08946AC4;
    return;
L_08946AC4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08946AC8;
L_08946AC8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946AA0;
      }
      goto L_08946AD4;
    }
L_08946AD4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946AECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946AECu) goto L_08946AEC;
    return;
L_08946AEC:
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
L_08946B0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946B38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946B38u) goto L_08946B38;
    return;
L_08946B38:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946B78;
      }
      goto L_08946B58;
    }
L_08946B58:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08946B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 578u, 0x089428BCu>(ctx, &aot_mem) && ctx.pc == 0x08946B74u) goto L_08946B74;
    return;
L_08946B74:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08946B78;
L_08946B78:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946B58;
      }
      goto L_08946B84;
    }
L_08946B84:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946B9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946B9Cu) goto L_08946B9C;
    return;
L_08946B9C:
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
L_08946BBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946BECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946BECu) goto L_08946BEC;
    return;
L_08946BEC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946C4C;
      }
      goto L_08946C0C;
    }
L_08946C0C:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946C30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946C30u) goto L_08946C30;
    return;
L_08946C30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946C48;
      }
      goto L_08946C38;
    }
L_08946C38:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08946C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 578u, 0x089428BCu>(ctx, &aot_mem) && ctx.pc == 0x08946C48u) goto L_08946C48;
    return;
L_08946C48:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08946C4C;
L_08946C4C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946C0C;
      }
      goto L_08946C58;
    }
L_08946C58:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946C70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946C70u) goto L_08946C70;
    return;
L_08946C70:
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
L_08946C94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946CC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946CC0u) goto L_08946CC0;
    return;
L_08946CC0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946CD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946CD4u) goto L_08946CD4;
    return;
L_08946CD4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946D1C;
      }
      goto L_08946CF4;
    }
L_08946CF4:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946D18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946D18u) goto L_08946D18;
    return;
L_08946D18:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08946D1C;
L_08946D1C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946CF4;
      }
      goto L_08946D28;
    }
L_08946D28:
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
L_08946D48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946D74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946D74u) goto L_08946D74;
    return;
L_08946D74:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946DBC;
      }
      goto L_08946D94;
    }
L_08946D94:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946DB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946DB8u) goto L_08946DB8;
    return;
L_08946DB8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08946DBC;
L_08946DBC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946D94;
      }
      goto L_08946DC8;
    }
L_08946DC8:
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
L_08946DE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946E18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946E18u) goto L_08946E18;
    return;
L_08946E18:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946E34;
      }
      goto L_08946E28;
    }
L_08946E28:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08946E30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946E30u) goto L_08946E30;
    return;
L_08946E30:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08946E34;
L_08946E34:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946E4C;
      }
      goto L_08946E40;
    }
L_08946E40:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946EBC;
      }
      goto L_08946E4C;
    }
L_08946E4C:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(31, 0x08946E60u);
    // nop
    goto L_089451A8;
L_08946E60:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08946E70u);
    // nop
    goto L_089451A8;
L_08946E70:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946EAC;
      }
      goto L_08946E7C;
    }
L_08946E7C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08946E8Cu);
    // nop
    goto L_08944B4C;
L_08946E8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946EA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946EA4u) goto L_08946EA4;
    return;
L_08946EA4:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08946EAC;
L_08946EAC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946E7C;
      }
      goto L_08946EB8;
    }
L_08946EB8:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    goto L_08946EBC;
L_08946EBC:
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
L_08946EE0:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946F2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946F2Cu) goto L_08946F2C;
    return;
L_08946F2C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946F48;
      }
      goto L_08946F3C;
    }
L_08946F3C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947080;
      }
      goto L_08946F48;
    }
L_08946F48:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08946F5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946F5Cu) goto L_08946F5C;
    return;
L_08946F5C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946F7C;
      }
      goto L_08946F6C;
    }
L_08946F6C:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08946F74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946F74u) goto L_08946F74;
    return;
L_08946F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946F80;
      }
      goto L_08946F7C;
    }
L_08946F7C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08946F80;
L_08946F80:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946FA0;
      }
      goto L_08946F8C;
    }
L_08946F8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08946F9Cu);
    // nop
    goto L_08945230;
L_08946F9C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_08946FA0;
L_08946FA0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08946FACu);
    // nop
    goto L_089451A8;
L_08946FAC:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(31, 0x08946FC0u);
    // nop
    goto L_089451A8;
L_08946FC0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08946FD4u);
    // nop
    goto L_08946DE8;
L_08946FD4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947004;
      }
      goto L_08946FE0;
    }
L_08946FE0:
    ctx.set_gpr(31, 0x08946FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08946FE8u) goto L_08946FE8;
    return;
L_08946FE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947004u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947004u) goto L_08947004;
    return;
L_08947004:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947068;
      }
      goto L_08947010;
    }
L_08947010:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08947020u);
    // nop
    goto L_08944B4C;
L_08947020:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(38)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08947064;
      }
      goto L_08947034;
    }
L_08947034:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947064;
      }
      goto L_08947040;
    }
L_08947040:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947060u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947060u) goto L_08947060;
    return;
L_08947060:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    goto L_08947064;
L_08947064:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08947068;
L_08947068:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947010;
      }
      goto L_08947074;
    }
L_08947074:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08947080u);
    // nop
    goto L_08946DE8;
L_08947080:
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
L_089470B0:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089470FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089470FCu) goto L_089470FC;
    return;
L_089470FC:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947118;
      }
      goto L_0894710C;
    }
L_0894710C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089473A4;
      }
      goto L_08947118;
    }
L_08947118:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947144;
      }
      goto L_08947120;
    }
L_08947120:
    ctx.set_gpr(31, 0x08947128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08947128u) goto L_08947128;
    return;
L_08947128:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947144u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947144u) goto L_08947144;
    return;
L_08947144:
    ctx.set_gpr(18, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(31, 0x08947158u);
    // nop
    goto L_089451A8;
L_08947158:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08947168u);
    // nop
    goto L_089451A8;
L_08947168:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894734C;
      }
      goto L_0894717C;
    }
L_0894717C:
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894718Cu);
    // nop
    goto L_08944B4C;
L_0894718C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089471F8;
      }
      goto L_0894719C;
    }
L_0894719C:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089471B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089471B8u) goto L_089471B8;
    return;
L_089471B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x089471CCu);
    // nop
    goto L_08947F8C;
L_089471CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089471E0;
      }
      goto L_089471D4;
    }
L_089471D4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947348;
      }
      goto L_089471E0;
    }
L_089471E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089471F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 578u, 0x089428BCu>(ctx, &aot_mem) && ctx.pc == 0x089471F0u) goto L_089471F0;
    return;
L_089471F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947348;
      }
      goto L_089471F8;
    }
L_089471F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947260;
      }
      goto L_08947208;
    }
L_08947208:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947220u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947220u) goto L_08947220;
    return;
L_08947220:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x08947234u);
    // nop
    goto L_08947F8C;
L_08947234:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947248;
      }
      goto L_0894723C;
    }
L_0894723C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947348;
      }
      goto L_08947248;
    }
L_08947248:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08947258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 578u, 0x089428BCu>(ctx, &aot_mem) && ctx.pc == 0x08947258u) goto L_08947258;
    return;
L_08947258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947348;
      }
      goto L_08947260;
    }
L_08947260:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894728C;
      }
      goto L_08947268;
    }
L_08947268:
    ctx.set_gpr(31, 0x08947270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x08947270u) goto L_08947270;
    return;
L_08947270:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894728Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894728Cu) goto L_0894728C;
    return;
L_0894728C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947324;
      }
      goto L_089472A0;
    }
L_089472A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089472B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089472B8u) goto L_089472B8;
    return;
L_089472B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x089472CCu);
    // nop
    goto L_08947F8C;
L_089472CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089472E0;
      }
      goto L_089472D4;
    }
L_089472D4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089472F0;
      }
      goto L_089472E0;
    }
L_089472E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089472F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 578u, 0x089428BCu>(ctx, &aot_mem) && ctx.pc == 0x089472F0u) goto L_089472F0;
    return;
L_089472F0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947348;
      }
      goto L_089472F8;
    }
L_089472F8:
    ctx.set_gpr(31, 0x08947300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x08947300u) goto L_08947300;
    return;
L_08947300:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894731Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894731Cu) goto L_0894731C;
    return;
L_0894731C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947348;
      }
      goto L_08947324;
    }
L_08947324:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08947344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 614u, 0x08942B44u>(ctx, &aot_mem) && ctx.pc == 0x08947344u) goto L_08947344;
    return;
L_08947344:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    goto L_08947348;
L_08947348:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0894734C;
L_0894734C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894717C;
      }
      goto L_0894735C;
    }
L_0894735C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894738C;
      }
      goto L_08947368;
    }
L_08947368:
    ctx.set_gpr(31, 0x08947370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08947370u) goto L_08947370;
    return;
L_08947370:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894738Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894738Cu) goto L_0894738C;
    return;
L_0894738C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089473A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089473A0u) goto L_089473A0;
    return;
L_089473A0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_089473A4;
L_089473A4:
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
L_089473D8:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947424u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947424u) goto L_08947424;
    return;
L_08947424:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947440;
      }
      goto L_08947434;
    }
L_08947434:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947654;
      }
      goto L_08947440;
    }
L_08947440:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947474;
      }
      goto L_08947450;
    }
L_08947450:
    ctx.set_gpr(31, 0x08947458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08947458u) goto L_08947458;
    return;
L_08947458:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947474u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947474u) goto L_08947474;
    return;
L_08947474:
    ctx.set_gpr(30, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(31, 0x0894749Cu);
    // nop
    goto L_089451A8;
L_0894749C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x089474ACu);
    // nop
    goto L_089451A8;
L_089474AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089474D4;
      }
      goto L_089474C4;
    }
L_089474C4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089474E0;
      }
      goto L_089474D4;
    }
L_089474D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089474E0;
L_089474E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089475FC;
      }
      goto L_089474F0;
    }
L_089474F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08947500u);
    // nop
    goto L_08944B4C;
L_08947500:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947528;
      }
      goto L_08947510;
    }
L_08947510:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947528;
      }
      goto L_0894751C;
    }
L_0894751C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_08947528;
L_08947528:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089475A8;
      }
      goto L_08947538;
    }
L_08947538:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(8, ctx.gpr[23] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947568u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947568u) goto L_08947568;
    return;
L_08947568:
    ctx.set_gpr(30, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894758C;
      }
      goto L_0894757C;
    }
L_0894757C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089475F8;
      }
      goto L_0894758C;
    }
L_0894758C:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089475F8;
      }
      goto L_089475A8;
    }
L_089475A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089475C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089475C0u) goto L_089475C0;
    return;
L_089475C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x089475D4u);
    // nop
    goto L_08947F8C;
L_089475D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089475E8;
      }
      goto L_089475DC;
    }
L_089475DC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089475F8;
      }
      goto L_089475E8;
    }
L_089475E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089475F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 578u, 0x089428BCu>(ctx, &aot_mem) && ctx.pc == 0x089475F8u) goto L_089475F8;
    return;
L_089475F8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089475FC;
L_089475FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089474F0;
      }
      goto L_0894760C;
    }
L_0894760C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894763C;
      }
      goto L_08947618;
    }
L_08947618:
    ctx.set_gpr(31, 0x08947620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x08947620u) goto L_08947620;
    return;
L_08947620:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894763Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894763Cu) goto L_0894763C;
    return;
L_0894763C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947650u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947650u) goto L_08947650;
    return;
L_08947650:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08947654;
L_08947654:
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
L_08947688:
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
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089476C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089476C8u) goto L_089476C8;
    return;
L_089476C8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089476E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089476E0u) goto L_089476E0;
    return;
L_089476E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(7, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2712));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08947704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x08947704u) goto L_08947704;
    return;
L_08947704:
    ctx.set_gpr(31, 0x0894770Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0894770Cu) goto L_0894770C;
    return;
L_0894770C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947804;
      }
      goto L_08947714;
    }
L_08947714:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08947720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08947720u) goto L_08947720;
    return;
L_08947720:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08947734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x08947734u) goto L_08947734;
    return;
L_08947734:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2696));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08947750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08947750u) goto L_08947750;
    return;
L_08947750:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947764u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947764u) goto L_08947764;
    return;
L_08947764:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2692));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894778Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0894778Cu) goto L_0894778C;
    return;
L_0894778C:
    ctx.set_gpr(31, 0x08947794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08947794u) goto L_08947794;
    return;
L_08947794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089477CC;
      }
      goto L_0894779C;
    }
L_0894779C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089477C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089477C8u) goto L_089477C8;
    return;
L_089477C8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089477CC;
L_089477CC:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894779C;
      }
      goto L_089477D8;
    }
L_089477D8:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2684));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089477ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x089477ECu) goto L_089477EC;
    return;
L_089477EC:
    ctx.set_gpr(31, 0x089477F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x089477F4u) goto L_089477F4;
    return;
L_089477F4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08947804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x08947804u) goto L_08947804;
    return;
L_08947804:
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
L_08947830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947864u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947864u) goto L_08947864;
    return;
L_08947864:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894787Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894787Cu) goto L_0894787C;
    return;
L_0894787C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947890u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947890u) goto L_08947890;
    return;
L_08947890:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(31, 0x089478A8u);
    // nop
    goto L_089451A8;
L_089478A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089478D8;
      }
      goto L_089478B4;
    }
L_089478B4:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089478D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 649u, 0x08942DDCu>(ctx, &aot_mem) && ctx.pc == 0x089478D4u) goto L_089478D4;
    return;
L_089478D4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089478D8;
L_089478D8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089478B4;
      }
      goto L_089478E4;
    }
L_089478E4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089478FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089478FCu) goto L_089478FC;
    return;
L_089478FC:
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
L_08947920:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947954u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947954u) goto L_08947954;
    return;
L_08947954:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(31, 0x0894796Cu);
    // nop
    goto L_089451A8;
L_0894796C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894799C;
      }
      goto L_08947978;
    }
L_08947978:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08947998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 647u, 0x08942DB8u>(ctx, &aot_mem) && ctx.pc == 0x08947998u) goto L_08947998;
    return;
L_08947998:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0894799C;
L_0894799C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947978;
      }
      goto L_089479A8;
    }
L_089479A8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089479C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089479C0u) goto L_089479C0;
    return;
L_089479C0:
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
L_089479E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947A1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947A1Cu) goto L_08947A1C;
    return;
L_08947A1C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947A34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947A34u) goto L_08947A34;
    return;
L_08947A34:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08947A48;
      }
      goto L_08947A3C;
    }
L_08947A3C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947ADC;
      }
      goto L_08947A48;
    }
L_08947A48:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947A5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947A5Cu) goto L_08947A5C;
    return;
L_08947A5C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(31, 0x08947A74u);
    // nop
    goto L_089451A8;
L_08947A74:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947AB8;
      }
      goto L_08947A80;
    }
L_08947A80:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08947AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 761u, 0x08943584u>(ctx, &aot_mem) && ctx.pc == 0x08947AA0u) goto L_08947AA0;
    return;
L_08947AA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947AB4;
      }
      goto L_08947AA8;
    }
L_08947AA8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947ADC;
      }
      goto L_08947AB4;
    }
L_08947AB4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08947AB8;
L_08947AB8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947A80;
      }
      goto L_08947AC4;
    }
L_08947AC4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947ADCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947ADCu) goto L_08947ADC;
    return;
L_08947ADC:
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
L_08947B00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947B38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947B38u) goto L_08947B38;
    return;
L_08947B38:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947B50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947B50u) goto L_08947B50;
    return;
L_08947B50:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08947B64;
      }
      goto L_08947B58;
    }
L_08947B58:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947BF8;
      }
      goto L_08947B64;
    }
L_08947B64:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947B78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947B78u) goto L_08947B78;
    return;
L_08947B78:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(31, 0x08947B90u);
    // nop
    goto L_089451A8;
L_08947B90:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947BD4;
      }
      goto L_08947B9C;
    }
L_08947B9C:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08947BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 763u, 0x089435A8u>(ctx, &aot_mem) && ctx.pc == 0x08947BBCu) goto L_08947BBC;
    return;
L_08947BBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947BD0;
      }
      goto L_08947BC4;
    }
L_08947BC4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947BF8;
      }
      goto L_08947BD0;
    }
L_08947BD0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08947BD4;
L_08947BD4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947B9C;
      }
      goto L_08947BE0;
    }
L_08947BE0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947BF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947BF8u) goto L_08947BF8;
    return;
L_08947BF8:
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
L_08947C1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947C54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947C54u) goto L_08947C54;
    return;
L_08947C54:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947C6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947C6Cu) goto L_08947C6C;
    return;
L_08947C6C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08947C80;
      }
      goto L_08947C74;
    }
L_08947C74:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947D00;
      }
      goto L_08947C80;
    }
L_08947C80:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947C94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947C94u) goto L_08947C94;
    return;
L_08947C94:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(31, 0x08947CACu);
    // nop
    goto L_089451A8;
L_08947CAC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947CF0;
      }
      goto L_08947CB8;
    }
L_08947CB8:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08947CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 759u, 0x08943560u>(ctx, &aot_mem) && ctx.pc == 0x08947CD8u) goto L_08947CD8;
    return;
L_08947CD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947CEC;
      }
      goto L_08947CE0;
    }
L_08947CE0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947D00;
      }
      goto L_08947CEC;
    }
L_08947CEC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08947CF0;
L_08947CF0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947CB8;
      }
      goto L_08947CFC;
    }
L_08947CFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08947D00;
L_08947D00:
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
L_08947D24:
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
    ctx.set_gpr(5, 0u + 0u);
    jump_target = ctx.gpr[20];
    ctx.set_gpr(31, 0x08947D60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947D60u) goto L_08947D60;
    return;
L_08947D60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08947E18;
      }
      goto L_08947D6C;
    }
L_08947D6C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947D80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947D80u) goto L_08947D80;
    return;
L_08947D80:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947D94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947D94u) goto L_08947D94;
    return;
L_08947D94:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(31, 0x08947DACu);
    // nop
    goto L_089451A8;
L_08947DAC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947E0C;
      }
      goto L_08947DB8;
    }
L_08947DB8:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    jump_target = ctx.gpr[20];
    ctx.set_gpr(31, 0x08947DDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947DDCu) goto L_08947DDC;
    return;
L_08947DDC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08947E08;
      }
      goto L_08947DE8;
    }
L_08947DE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947E08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947E08u) goto L_08947E08;
    return;
L_08947E08:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08947E0C;
L_08947E0C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947DB8;
      }
      goto L_08947E18;
    }
L_08947E18:
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
L_08947E44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947E78;
      }
      goto L_08947E54;
    }
L_08947E54:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08947E68;
      }
      goto L_08947E60;
    }
L_08947E60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947E80;
      }
      goto L_08947E68;
    }
L_08947E68:
    ctx.set_gpr(31, 0x08947E70u);
    // nop
    goto L_08947830;
L_08947E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947E80;
      }
      goto L_08947E78;
    }
L_08947E78:
    ctx.set_gpr(31, 0x08947E80u);
    // nop
    goto L_08947920;
L_08947E80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947E90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947EBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947EBCu) goto L_08947EBC;
    return;
L_08947EBC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08947ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08947ECCu) goto L_08947ECC;
    return;
L_08947ECC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08947EDCu);
    // nop
    goto L_089443D4;
L_08947EDC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08947EF4u);
    // nop
    goto L_08947E44;
L_08947EF4:
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
L_08947F14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947F44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947F44u) goto L_08947F44;
    return;
L_08947F44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08947F54u);
    // nop
    goto L_089443D4;
L_08947F54:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08947F6Cu);
    // nop
    goto L_08947E44;
L_08947F6C:
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
L_08947F8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08947FACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08947FACu) goto L_08947FAC;
    return;
L_08947FAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947FCC;
      }
      goto L_08947FB4;
    }
L_08947FB4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08947FC8;
      }
      goto L_08947FBC;
    }
L_08947FBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947FD8;
      }
      goto L_08947FC8;
    }
L_08947FC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    goto L_08947FCC;
L_08947FCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947FB4;
      }
      goto L_08947FD4;
    }
L_08947FD4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08947FD8;
L_08947FD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947FEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08948000u; return;
}

void recomp_unit_0080(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0080_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_80(Runtime &runtime) {
    runtime.register_generated_unit(80u, 0x08944000u, 16384u, &recomp_unit_0080, &recomp_unit_0080_entry);
    runtime.register_function(0x08944000u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944018u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944024u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944030u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894403Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944058u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944060u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944070u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894407Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944088u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944090u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944110u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894412Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894420Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944224u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944228u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944230u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944248u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944254u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944274u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894428Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944304u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944320u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944328u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894433Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944354u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944364u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894436Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944378u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944380u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944384u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944398u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089443B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089443C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089443D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944400u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944408u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944418u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944420u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944430u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894443Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944444u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944458u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944464u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894446Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944478u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944480u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894448Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944494u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944498u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894450Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894452Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944544u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894454Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894455Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894458Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944600u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944610u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944618u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944628u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944634u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894463Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944650u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894465Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944664u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944670u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944678u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944684u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894468Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944690u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894469Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944704u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944724u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894473Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944744u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944754u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944784u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894480Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944858u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944864u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944874u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944884u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944888u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944894u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944918u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944920u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894492Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944950u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944978u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944984u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894498Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944998u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B88u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DCCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DFCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944ED8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F88u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945010u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894501Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945028u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945034u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945048u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945068u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945078u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945088u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945090u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945098u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945104u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945118u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945134u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894513Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945148u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894514Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894516Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945184u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945194u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894520Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894521Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945230u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945260u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894526Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945274u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945280u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894529Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945308u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945330u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945340u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894534Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945350u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945354u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945360u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894536Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894538Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894540Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945418u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945440u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894544Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945454u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945460u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945468u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894547Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945490u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945508u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945524u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945530u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945540u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945558u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894555Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945568u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945578u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945594u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945604u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945618u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945620u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945630u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894563Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945640u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894565Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894567Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894568Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894570Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945720u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894572Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945730u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894573Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945744u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894575Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945778u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945784u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894578Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945798u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945808u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945814u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945820u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945828u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945830u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894583Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894584Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945854u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945860u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945864u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945870u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945878u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945884u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945888u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945894u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894589Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945908u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945930u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894593Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945944u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945950u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945958u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894596Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945980u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945998u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894599Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945ABCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C64u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CFCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945EA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945EACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945EB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945EBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945EC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945ECCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945ED8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945EE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945EECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945EF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945EFCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946004u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946028u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946048u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946054u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946060u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894606Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946080u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946098u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946110u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946160u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894616Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946174u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946188u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946194u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946200u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894620Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946224u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894623Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946248u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946258u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946270u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946288u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946304u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946310u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946320u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946328u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946334u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946344u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946350u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946364u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894636Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946388u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089463A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089463B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894640Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894641Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894642Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946440u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894644Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946458u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946480u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894648Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894649Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946500u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946518u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894651Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946524u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894653Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946548u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946568u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946584u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946590u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946598u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946600u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946608u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946614u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894661Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946634u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946648u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946658u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946670u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946674u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894667Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946694u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894671Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946724u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946730u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946734u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894673Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946748u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946750u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946768u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894676Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946784u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946798u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946800u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946814u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946828u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894683Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946848u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946850u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946864u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894687Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894688Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894689Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894690Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946924u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946954u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894696Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946998u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947004u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947010u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947020u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947034u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947040u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947060u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947064u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947068u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947074u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947080u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894710Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947118u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947120u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947128u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947144u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947158u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947168u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894717Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894718Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894719Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947208u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947220u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947234u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894723Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947248u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947258u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947260u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947268u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947270u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894728Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947300u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894731Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947324u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947344u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947348u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894734Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894735Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947368u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947370u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894738Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947424u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947434u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947440u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947450u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947458u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947474u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894749Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947500u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947510u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894751Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947528u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947538u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947568u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894757Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894758Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894760Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947618u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947620u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894763Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947650u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947654u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947688u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947704u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894770Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947714u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947720u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947734u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947750u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947764u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894778Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947794u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894779Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947804u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947830u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947864u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894787Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947890u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947920u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947954u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894796Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947978u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947998u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894799Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947ADCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B64u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CFCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947ECCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FCCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FECu, &recomp_unit_0080, "recomp_unit_0080");
}
} // namespace psprecomp
