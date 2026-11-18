#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0081[4091] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0,
    0, 33, 0, 34, 35, 0, 36, 0, 37, 0, 38, 0, 0, 39, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 43, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64,
    0, 65, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0,
    73, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 80, 81, 0, 0, 82, 0, 0, 83,
    0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 92, 0, 0, 93,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0,
    100, 0, 101, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 109, 110, 0, 0, 111, 0, 0,
    0, 112, 0, 0, 113, 0, 114, 0, 0, 115, 0, 116, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0,
    122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 137,
    0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0,
    0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 154, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 174, 175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178,
    0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 205, 0, 0, 206, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0,
    0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 227, 0, 228, 229, 0, 230, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 242, 0,
    0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0,
    0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0,
    0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0,
    0, 269, 0, 270, 271, 0, 0, 272, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 285, 286, 0, 0, 287,
    0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0,
    0, 0, 0, 293, 0, 294, 295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0,
    321, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 332, 0, 0, 333, 0, 0, 0, 0, 334, 0,
    0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0,
    0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 352, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 362, 0, 0,
    0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 366, 0, 0, 367, 368, 0, 0, 369, 370, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 377, 378, 0, 0, 379, 380, 0,
    381, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 387, 388, 0, 0, 389, 390, 0, 391, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398,
    0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 412, 413, 0, 414, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 423, 0, 424, 0, 0, 425, 0, 426, 0, 0, 427,
    0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 431, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 436, 437, 0, 438, 0,
    0, 439, 0, 440, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444,
    0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 448, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0,
    0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0,
    0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0, 476, 477, 0, 0, 478,
    0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 484, 0, 0, 0, 485, 0, 0, 0,
    0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0,
    490, 0, 491, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0,
    0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 499, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 506, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 523, 0, 524, 0, 0, 525, 0, 526,
    0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0,
    534, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 539, 0, 540, 0, 541, 0, 542, 0, 0, 543, 0, 544, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 548, 0,
    549, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 552, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 558, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0,
    0, 0, 0, 0, 569, 0, 0, 0, 570, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 577, 0, 0, 578, 0, 579, 0, 0, 580, 0, 0, 581, 582, 0, 0, 0,
    583, 584, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587,
    0, 588, 0, 589, 0, 0, 590, 0, 591, 0, 0, 592, 0, 0, 593, 594, 0, 0, 0, 595, 596, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0, 0, 602, 0, 603, 0, 0, 604, 0,
    0, 605, 606, 0, 0, 0, 607, 608, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0,
    0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0,
    617, 0, 618, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0,
    624, 0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0,
    0, 632, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 637, 0, 638, 0,
    0, 639, 0, 0, 0, 0, 640, 0, 641, 0, 0, 642, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0,
    648, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0,
    0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660,
    0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0,
    0, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0,
    673, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 677, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0,
    681, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 686, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0,
    689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 692, 0, 693, 0, 0, 694, 0, 695, 0, 696, 0, 0, 0, 0,
    0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 703, 0, 704, 0, 0, 0, 0, 705,
    0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0,
    0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0,
    721, 0, 722, 0, 723, 0, 0, 724, 0, 725, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 729, 0, 730, 0, 0,
    731, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 735, 0, 736, 0, 737, 0, 0, 738, 0, 739, 0, 0, 0, 740,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 743, 0, 0, 744, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0,
    0, 0, 0, 748, 749, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0, 0,
    0, 0, 755, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0,
    0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0,
    0, 0, 0, 764, 0, 765, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0,
    0, 0, 770, 0, 0, 771, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0,
    0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 780, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0,
    783, 0, 0, 784, 0, 0, 785, 0, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0,
    789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 792, 0, 0, 793, 0, 794, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    796, 0, 797, 0, 798, 0, 0, 799, 0, 800, 0, 0, 801, 802, 0, 0, 803, 804, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0,
    0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 808, 0, 0, 809, 0, 0, 0, 0, 810, 0, 811, 0, 812, 0, 813, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 816, 817, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 0, 820, 0, 0, 821, 0, 0,
    0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0, 824, 825, 0, 0, 826, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 829, 0, 0, 0, 0,
    0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 831, 0, 0, 832, 0, 0, 833, 0, 0, 0, 834, 835, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 839, 0, 0, 0, 0, 0, 840, 0, 841, 0, 0, 842, 0, 843, 0,
    0, 844, 0, 0, 845, 0, 0, 0, 0, 0, 0, 846, 0, 847, 0, 0, 848, 0, 0, 849, 0, 0, 850, 0, 0, 851, 0, 0, 0, 0, 0, 0,
    0, 0, 852, 0, 853, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 856, 0, 0, 0, 0, 0, 857, 0, 858, 0,
    0, 0, 0, 859, 0, 0, 0, 0, 0, 0, 0, 860, 0, 861, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0,
    0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0,
    868, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 0, 871, 0, 0, 872, 0, 0, 0, 0, 873,
    0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 0, 876, 0, 0, 0, 877, 0, 878, 0, 0, 879, 0, 880,
};
void recomp_unit_0081_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08948000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0081[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08948000;
    case 2u: goto L_0894800C;
    case 3u: goto L_08948028;
    case 4u: goto L_08948040;
    case 5u: goto L_08948058;
    case 6u: goto L_0894806C;
    case 7u: goto L_0894808C;
    case 8u: goto L_089480A8;
    case 9u: goto L_089480C0;
    case 10u: goto L_089480E0;
    case 11u: goto L_089480FC;
    case 12u: goto L_08948114;
    case 13u: goto L_08948134;
    case 14u: goto L_08948150;
    case 15u: goto L_08948168;
    case 16u: goto L_08948190;
    case 17u: goto L_089481B0;
    case 18u: goto L_089481CC;
    case 19u: goto L_089481E4;
    case 20u: goto L_089481EC;
    case 21u: goto L_08948204;
    case 22u: goto L_08948218;
    case 23u: goto L_08948230;
    case 24u: goto L_08948238;
    case 25u: goto L_08948250;
    case 26u: goto L_08948264;
    case 27u: goto L_08948288;
    case 28u: goto L_08948298;
    case 29u: goto L_089482AC;
    case 30u: goto L_089482C8;
    case 31u: goto L_089482E8;
    case 32u: goto L_089482F8;
    case 33u: goto L_08948304;
    case 34u: goto L_0894830C;
    case 35u: goto L_08948310;
    case 36u: goto L_08948318;
    case 37u: goto L_08948320;
    case 38u: goto L_08948328;
    case 39u: goto L_08948334;
    case 40u: goto L_08948338;
    case 41u: goto L_0894835C;
    case 42u: goto L_08948380;
    case 43u: goto L_0894838C;
    case 44u: goto L_08948394;
    case 45u: goto L_0894839C;
    case 46u: goto L_089483A8;
    case 47u: goto L_089483B8;
    case 48u: goto L_089483DC;
    case 49u: goto L_089483E8;
    case 50u: goto L_089483F4;
    case 51u: goto L_08948400;
    case 52u: goto L_0894841C;
    case 53u: goto L_08948424;
    case 54u: goto L_08948434;
    case 55u: goto L_08948440;
    case 56u: goto L_0894844C;
    case 57u: goto L_08948454;
    case 58u: goto L_0894846C;
    case 59u: goto L_08948490;
    case 60u: goto L_0894849C;
    case 61u: goto L_089484B0;
    case 62u: goto L_089484E4;
    case 63u: goto L_089484F0;
    case 64u: goto L_089484FC;
    case 65u: goto L_08948504;
    case 66u: goto L_0894850C;
    case 67u: goto L_08948518;
    case 68u: goto L_0894852C;
    case 69u: goto L_08948544;
    case 70u: goto L_08948550;
    case 71u: goto L_0894856C;
    case 72u: goto L_08948574;
    case 73u: goto L_08948580;
    case 74u: goto L_08948588;
    case 75u: goto L_08948594;
    case 76u: goto L_089485A0;
    case 77u: goto L_089485BC;
    case 78u: goto L_089485D0;
    case 79u: goto L_089485D8;
    case 80u: goto L_089485E0;
    case 81u: goto L_089485E4;
    case 82u: goto L_089485F0;
    case 83u: goto L_089485FC;
    case 84u: goto L_08948608;
    case 85u: goto L_08948614;
    case 86u: goto L_08948624;
    case 87u: goto L_08948634;
    case 88u: goto L_08948640;
    case 89u: goto L_08948654;
    case 90u: goto L_0894865C;
    case 91u: goto L_08948668;
    case 92u: goto L_08948670;
    case 93u: goto L_0894867C;
    case 94u: goto L_08948688;
    case 95u: goto L_089486A4;
    case 96u: goto L_089486C8;
    case 97u: goto L_089486DC;
    case 98u: goto L_089486E4;
    case 99u: goto L_089486EC;
    case 100u: goto L_08948700;
    case 101u: goto L_08948708;
    case 102u: goto L_08948710;
    case 103u: goto L_08948718;
    case 104u: goto L_08948728;
    case 105u: goto L_0894873C;
    case 106u: goto L_08948744;
    case 107u: goto L_08948750;
    case 108u: goto L_08948758;
    case 109u: goto L_08948764;
    case 110u: goto L_08948768;
    case 111u: goto L_08948774;
    case 112u: goto L_08948784;
    case 113u: goto L_08948790;
    case 114u: goto L_08948798;
    case 115u: goto L_089487A4;
    case 116u: goto L_089487AC;
    case 117u: goto L_089487B0;
    case 118u: goto L_089487D4;
    case 119u: goto L_089487E4;
    case 120u: goto L_089487EC;
    case 121u: goto L_089487F8;
    case 122u: goto L_08948800;
    case 123u: goto L_08948810;
    case 124u: goto L_0894882C;
    case 125u: goto L_08948838;
    case 126u: goto L_08948848;
    case 127u: goto L_0894886C;
    case 128u: goto L_08948874;
    case 129u: goto L_08948890;
    case 130u: goto L_0894889C;
    case 131u: goto L_089488A4;
    case 132u: goto L_089488B0;
    case 133u: goto L_089488B8;
    case 134u: goto L_089488CC;
    case 135u: goto L_089488E0;
    case 136u: goto L_089488F8;
    case 137u: goto L_089488FC;
    case 138u: goto L_08948904;
    case 139u: goto L_0894891C;
    case 140u: goto L_08948928;
    case 141u: goto L_08948934;
    case 142u: goto L_08948944;
    case 143u: goto L_08948950;
    case 144u: goto L_08948958;
    case 145u: goto L_08948964;
    case 146u: goto L_0894896C;
    case 147u: goto L_08948984;
    case 148u: goto L_08948998;
    case 149u: goto L_089489B0;
    case 150u: goto L_089489B4;
    case 151u: goto L_089489BC;
    case 152u: goto L_089489D4;
    case 153u: goto L_089489E0;
    case 154u: goto L_089489E4;
    case 155u: goto L_089489FC;
    case 156u: goto L_08948A1C;
    case 157u: goto L_08948A28;
    case 158u: goto L_08948A34;
    case 159u: goto L_08948A50;
    case 160u: goto L_08948A58;
    case 161u: goto L_08948A74;
    case 162u: goto L_08948AA4;
    case 163u: goto L_08948AC4;
    case 164u: goto L_08948ADC;
    case 165u: goto L_08948AF8;
    case 166u: goto L_08948B14;
    case 167u: goto L_08948B24;
    case 168u: goto L_08948B30;
    case 169u: goto L_08948B38;
    case 170u: goto L_08948B48;
    case 171u: goto L_08948B5C;
    case 172u: goto L_08948B90;
    case 173u: goto L_08948BA0;
    case 174u: goto L_08948BA8;
    case 175u: goto L_08948BAC;
    case 176u: goto L_08948BB8;
    case 177u: goto L_08948BCC;
    case 178u: goto L_08948BFC;
    case 179u: goto L_08948C14;
    case 180u: goto L_08948C1C;
    case 181u: goto L_08948C28;
    case 182u: goto L_08948C30;
    case 183u: goto L_08948C3C;
    case 184u: goto L_08948C4C;
    case 185u: goto L_08948C68;
    case 186u: goto L_08948C78;
    case 187u: goto L_08948CA4;
    case 188u: goto L_08948CC0;
    case 189u: goto L_08948CD8;
    case 190u: goto L_08948CF0;
    case 191u: goto L_08948D08;
    case 192u: goto L_08948D4C;
    case 193u: goto L_08948D8C;
    case 194u: goto L_08948D94;
    case 195u: goto L_08948DB0;
    case 196u: goto L_08948DDC;
    case 197u: goto L_08948DE4;
    case 198u: goto L_08948DF0;
    case 199u: goto L_08948E04;
    case 200u: goto L_08948E24;
    case 201u: goto L_08948E28;
    case 202u: goto L_08948E34;
    case 203u: goto L_08948E48;
    case 204u: goto L_08948E60;
    case 205u: goto L_08948E64;
    case 206u: goto L_08948E70;
    case 207u: goto L_08948E84;
    case 208u: goto L_08948E9C;
    case 209u: goto L_08948EA8;
    case 210u: goto L_08948EB0;
    case 211u: goto L_08948EE0;
    case 212u: goto L_08948F0C;
    case 213u: goto L_08948F28;
    case 214u: goto L_08948F40;
    case 215u: goto L_08948F58;
    case 216u: goto L_08948F70;
    case 217u: goto L_08948F9C;
    case 218u: goto L_08948FB0;
    case 219u: goto L_08948FC0;
    case 220u: goto L_08948FC8;
    case 221u: goto L_08948FE8;
    case 222u: goto L_08948FF4;
    case 223u: goto L_08949004;
    case 224u: goto L_08949010;
    case 225u: goto L_0894901C;
    case 226u: goto L_08949028;
    case 227u: goto L_08949030;
    case 228u: goto L_08949038;
    case 229u: goto L_0894903C;
    case 230u: goto L_08949044;
    case 231u: goto L_0894904C;
    case 232u: goto L_08949058;
    case 233u: goto L_08949068;
    case 234u: goto L_08949074;
    case 235u: goto L_08949090;
    case 236u: goto L_0894909C;
    case 237u: goto L_089490B0;
    case 238u: goto L_089490CC;
    case 239u: goto L_089490D8;
    case 240u: goto L_089490E0;
    case 241u: goto L_089490F4;
    case 242u: goto L_089490F8;
    case 243u: goto L_08949114;
    case 244u: goto L_0894911C;
    case 245u: goto L_08949128;
    case 246u: goto L_08949130;
    case 247u: goto L_08949140;
    case 248u: goto L_0894915C;
    case 249u: goto L_08949168;
    case 250u: goto L_08949178;
    case 251u: goto L_08949184;
    case 252u: goto L_08949190;
    case 253u: goto L_089491A0;
    case 254u: goto L_089491D4;
    case 255u: goto L_089491E8;
    case 256u: goto L_089491F8;
    case 257u: goto L_08949210;
    case 258u: goto L_08949218;
    case 259u: goto L_08949234;
    case 260u: goto L_08949238;
    case 261u: goto L_08949244;
    case 262u: goto L_0894926C;
    case 263u: goto L_0894928C;
    case 264u: goto L_08949294;
    case 265u: goto L_089492A0;
    case 266u: goto L_089492B4;
    case 267u: goto L_089492DC;
    case 268u: goto L_089492EC;
    case 269u: goto L_08949304;
    case 270u: goto L_0894930C;
    case 271u: goto L_08949310;
    case 272u: goto L_0894931C;
    case 273u: goto L_08949320;
    case 274u: goto L_08949330;
    case 275u: goto L_08949350;
    case 276u: goto L_08949358;
    case 277u: goto L_08949364;
    case 278u: goto L_0894936C;
    case 279u: goto L_08949398;
    case 280u: goto L_089493A4;
    case 281u: goto L_089493B4;
    case 282u: goto L_089493C0;
    case 283u: goto L_089493CC;
    case 284u: goto L_089493E4;
    case 285u: goto L_089493EC;
    case 286u: goto L_089493F0;
    case 287u: goto L_089493FC;
    case 288u: goto L_08949410;
    case 289u: goto L_08949420;
    case 290u: goto L_0894942C;
    case 291u: goto L_0894944C;
    case 292u: goto L_08949474;
    case 293u: goto L_0894948C;
    case 294u: goto L_08949494;
    case 295u: goto L_08949498;
    case 296u: goto L_089494A4;
    case 297u: goto L_089494B0;
    case 298u: goto L_089494C4;
    case 299u: goto L_089494E0;
    case 300u: goto L_08949504;
    case 301u: goto L_08949510;
    case 302u: goto L_08949524;
    case 303u: goto L_08949538;
    case 304u: goto L_0894954C;
    case 305u: goto L_08949578;
    case 306u: goto L_08949598;
    case 307u: goto L_089495AC;
    case 308u: goto L_089495B8;
    case 309u: goto L_089495BC;
    case 310u: goto L_089495C8;
    case 311u: goto L_089495D8;
    case 312u: goto L_089495E8;
    case 313u: goto L_08949618;
    case 314u: goto L_08949624;
    case 315u: goto L_0894963C;
    case 316u: goto L_08949644;
    case 317u: goto L_08949648;
    case 318u: goto L_08949654;
    case 319u: goto L_08949660;
    case 320u: goto L_08949674;
    case 321u: goto L_08949680;
    case 322u: goto L_0894968C;
    case 323u: goto L_08949694;
    case 324u: goto L_089496A4;
    case 325u: goto L_089496B0;
    case 326u: goto L_089496BC;
    case 327u: goto L_089496DC;
    case 328u: goto L_089496FC;
    case 329u: goto L_08949734;
    case 330u: goto L_0894974C;
    case 331u: goto L_08949754;
    case 332u: goto L_08949758;
    case 333u: goto L_08949764;
    case 334u: goto L_08949778;
    case 335u: goto L_08949788;
    case 336u: goto L_0894979C;
    case 337u: goto L_089497A8;
    case 338u: goto L_089497CC;
    case 339u: goto L_089497F0;
    case 340u: goto L_089497F8;
    case 341u: goto L_08949814;
    case 342u: goto L_0894981C;
    case 343u: goto L_0894982C;
    case 344u: goto L_0894984C;
    case 345u: goto L_08949850;
    case 346u: goto L_08949868;
    case 347u: goto L_0894989C;
    case 348u: goto L_089498A8;
    case 349u: goto L_089498C0;
    case 350u: goto L_089498C8;
    case 351u: goto L_089498D8;
    case 352u: goto L_08949908;
    case 353u: goto L_0894990C;
    case 354u: goto L_08949914;
    case 355u: goto L_08949938;
    case 356u: goto L_08949968;
    case 357u: goto L_08949978;
    case 358u: goto L_0894998C;
    case 359u: goto L_089499AC;
    case 360u: goto L_089499E0;
    case 361u: goto L_089499E8;
    case 362u: goto L_089499F4;
    case 363u: goto L_08949A04;
    case 364u: goto L_08949A30;
    case 365u: goto L_08949A3C;
    case 366u: goto L_08949A44;
    case 367u: goto L_08949A50;
    case 368u: goto L_08949A54;
    case 369u: goto L_08949A60;
    case 370u: goto L_08949A64;
    case 371u: goto L_08949A8C;
    case 372u: goto L_08949A98;
    case 373u: goto L_08949AA4;
    case 374u: goto L_08949AB0;
    case 375u: goto L_08949AC8;
    case 376u: goto L_08949ADC;
    case 377u: goto L_08949AE4;
    case 378u: goto L_08949AE8;
    case 379u: goto L_08949AF4;
    case 380u: goto L_08949AF8;
    case 381u: goto L_08949B00;
    case 382u: goto L_08949B08;
    case 383u: goto L_08949B14;
    case 384u: goto L_08949B24;
    case 385u: goto L_08949B3C;
    case 386u: goto L_08949B50;
    case 387u: goto L_08949B58;
    case 388u: goto L_08949B5C;
    case 389u: goto L_08949B68;
    case 390u: goto L_08949B6C;
    case 391u: goto L_08949B74;
    case 392u: goto L_08949B9C;
    case 393u: goto L_08949BA8;
    case 394u: goto L_08949BB0;
    case 395u: goto L_08949BC0;
    case 396u: goto L_08949BCC;
    case 397u: goto L_08949BF0;
    case 398u: goto L_08949BFC;
    case 399u: goto L_08949C18;
    case 400u: goto L_08949C20;
    case 401u: goto L_08949C2C;
    case 402u: goto L_08949C38;
    case 403u: goto L_08949C44;
    case 404u: goto L_08949C54;
    case 405u: goto L_08949C84;
    case 406u: goto L_08949C90;
    case 407u: goto L_08949C9C;
    case 408u: goto L_08949CA8;
    case 409u: goto L_08949CB0;
    case 410u: goto L_08949CBC;
    case 411u: goto L_08949CE4;
    case 412u: goto L_08949CE8;
    case 413u: goto L_08949CEC;
    case 414u: goto L_08949CF4;
    case 415u: goto L_08949D28;
    case 416u: goto L_08949D3C;
    case 417u: goto L_08949D48;
    case 418u: goto L_08949D6C;
    case 419u: goto L_08949D94;
    case 420u: goto L_08949DA0;
    case 421u: goto L_08949DB4;
    case 422u: goto L_08949DC0;
    case 423u: goto L_08949DD4;
    case 424u: goto L_08949DDC;
    case 425u: goto L_08949DE8;
    case 426u: goto L_08949DF0;
    case 427u: goto L_08949DFC;
    case 428u: goto L_08949E08;
    case 429u: goto L_08949E14;
    case 430u: goto L_08949E20;
    case 431u: goto L_08949E34;
    case 432u: goto L_08949E3C;
    case 433u: goto L_08949E48;
    case 434u: goto L_08949E54;
    case 435u: goto L_08949E60;
    case 436u: goto L_08949E6C;
    case 437u: goto L_08949E70;
    case 438u: goto L_08949E78;
    case 439u: goto L_08949E84;
    case 440u: goto L_08949E8C;
    case 441u: goto L_08949E98;
    case 442u: goto L_08949EA0;
    case 443u: goto L_08949ECC;
    case 444u: goto L_08949EFC;
    case 445u: goto L_08949F0C;
    case 446u: goto L_08949F28;
    case 447u: goto L_08949F30;
    case 448u: goto L_08949F3C;
    case 449u: goto L_08949F40;
    case 450u: goto L_08949F4C;
    case 451u: goto L_08949F74;
    case 452u: goto L_08949F9C;
    case 453u: goto L_08949FC0;
    case 454u: goto L_08949FDC;
    case 455u: goto L_0894A020;
    case 456u: goto L_0894A028;
    case 457u: goto L_0894A034;
    case 458u: goto L_0894A03C;
    case 459u: goto L_0894A058;
    case 460u: goto L_0894A064;
    case 461u: goto L_0894A094;
    case 462u: goto L_0894A0DC;
    case 463u: goto L_0894A0F8;
    case 464u: goto L_0894A104;
    case 465u: goto L_0894A114;
    case 466u: goto L_0894A144;
    case 467u: goto L_0894A174;
    case 468u: goto L_0894A188;
    case 469u: goto L_0894A194;
    case 470u: goto L_0894A19C;
    case 471u: goto L_0894A1A8;
    case 472u: goto L_0894A1BC;
    case 473u: goto L_0894A1C8;
    case 474u: goto L_0894A1D4;
    case 475u: goto L_0894A1E0;
    case 476u: goto L_0894A1EC;
    case 477u: goto L_0894A1F0;
    case 478u: goto L_0894A1FC;
    case 479u: goto L_0894A20C;
    case 480u: goto L_0894A228;
    case 481u: goto L_0894A234;
    case 482u: goto L_0894A250;
    case 483u: goto L_0894A25C;
    case 484u: goto L_0894A260;
    case 485u: goto L_0894A270;
    case 486u: goto L_0894A294;
    case 487u: goto L_0894A2BC;
    case 488u: goto L_0894A2C8;
    case 489u: goto L_0894A2E4;
    case 490u: goto L_0894A300;
    case 491u: goto L_0894A308;
    case 492u: goto L_0894A30C;
    case 493u: goto L_0894A31C;
    case 494u: goto L_0894A338;
    case 495u: goto L_0894A360;
    case 496u: goto L_0894A36C;
    case 497u: goto L_0894A388;
    case 498u: goto L_0894A3A4;
    case 499u: goto L_0894A3AC;
    case 500u: goto L_0894A3B0;
    case 501u: goto L_0894A3C0;
    case 502u: goto L_0894A3D0;
    case 503u: goto L_0894A3EC;
    case 504u: goto L_0894A414;
    case 505u: goto L_0894A430;
    case 506u: goto L_0894A438;
    case 507u: goto L_0894A43C;
    case 508u: goto L_0894A44C;
    case 509u: goto L_0894A468;
    case 510u: goto L_0894A498;
    case 511u: goto L_0894A4B8;
    case 512u: goto L_0894A4BC;
    case 513u: goto L_0894A4CC;
    case 514u: goto L_0894A4EC;
    case 515u: goto L_0894A51C;
    case 516u: goto L_0894A544;
    case 517u: goto L_0894A548;
    case 518u: goto L_0894A558;
    case 519u: goto L_0894A578;
    case 520u: goto L_0894A5A8;
    case 521u: goto L_0894A5D0;
    case 522u: goto L_0894A5D8;
    case 523u: goto L_0894A5E0;
    case 524u: goto L_0894A5E8;
    case 525u: goto L_0894A5F4;
    case 526u: goto L_0894A5FC;
    case 527u: goto L_0894A604;
    case 528u: goto L_0894A61C;
    case 529u: goto L_0894A634;
    case 530u: goto L_0894A63C;
    case 531u: goto L_0894A644;
    case 532u: goto L_0894A660;
    case 533u: goto L_0894A668;
    case 534u: goto L_0894A680;
    case 535u: goto L_0894A684;
    case 536u: goto L_0894A694;
    case 537u: goto L_0894A6B4;
    case 538u: goto L_0894A6E4;
    case 539u: goto L_0894A70C;
    case 540u: goto L_0894A714;
    case 541u: goto L_0894A71C;
    case 542u: goto L_0894A724;
    case 543u: goto L_0894A730;
    case 544u: goto L_0894A738;
    case 545u: goto L_0894A740;
    case 546u: goto L_0894A758;
    case 547u: goto L_0894A770;
    case 548u: goto L_0894A778;
    case 549u: goto L_0894A780;
    case 550u: goto L_0894A79C;
    case 551u: goto L_0894A7A4;
    case 552u: goto L_0894A7BC;
    case 553u: goto L_0894A7C0;
    case 554u: goto L_0894A7D0;
    case 555u: goto L_0894A7F0;
    case 556u: goto L_0894A818;
    case 557u: goto L_0894A834;
    case 558u: goto L_0894A83C;
    case 559u: goto L_0894A840;
    case 560u: goto L_0894A850;
    case 561u: goto L_0894A86C;
    case 562u: goto L_0894A8B4;
    case 563u: goto L_0894A8D0;
    case 564u: goto L_0894A8DC;
    case 565u: goto L_0894A8EC;
    case 566u: goto L_0894A928;
    case 567u: goto L_0894A93C;
    case 568u: goto L_0894A974;
    case 569u: goto L_0894A990;
    case 570u: goto L_0894A9A0;
    case 571u: goto L_0894A9A4;
    case 572u: goto L_0894A9B4;
    case 573u: goto L_0894A9D8;
    case 574u: goto L_0894AA08;
    case 575u: goto L_0894AA30;
    case 576u: goto L_0894AA38;
    case 577u: goto L_0894AA40;
    case 578u: goto L_0894AA4C;
    case 579u: goto L_0894AA54;
    case 580u: goto L_0894AA60;
    case 581u: goto L_0894AA6C;
    case 582u: goto L_0894AA70;
    case 583u: goto L_0894AA80;
    case 584u: goto L_0894AA84;
    case 585u: goto L_0894AAA4;
    case 586u: goto L_0894AAD4;
    case 587u: goto L_0894AAFC;
    case 588u: goto L_0894AB04;
    case 589u: goto L_0894AB0C;
    case 590u: goto L_0894AB18;
    case 591u: goto L_0894AB20;
    case 592u: goto L_0894AB2C;
    case 593u: goto L_0894AB38;
    case 594u: goto L_0894AB3C;
    case 595u: goto L_0894AB4C;
    case 596u: goto L_0894AB50;
    case 597u: goto L_0894AB70;
    case 598u: goto L_0894ABA0;
    case 599u: goto L_0894ABC8;
    case 600u: goto L_0894ABD0;
    case 601u: goto L_0894ABD8;
    case 602u: goto L_0894ABE4;
    case 603u: goto L_0894ABEC;
    case 604u: goto L_0894ABF8;
    case 605u: goto L_0894AC04;
    case 606u: goto L_0894AC08;
    case 607u: goto L_0894AC18;
    case 608u: goto L_0894AC1C;
    case 609u: goto L_0894AC3C;
    case 610u: goto L_0894AC58;
    case 611u: goto L_0894AC64;
    case 612u: goto L_0894AC78;
    case 613u: goto L_0894AC90;
    case 614u: goto L_0894ACA8;
    case 615u: goto L_0894ACBC;
    case 616u: goto L_0894ACF4;
    case 617u: goto L_0894AD00;
    case 618u: goto L_0894AD08;
    case 619u: goto L_0894AD14;
    case 620u: goto L_0894AD1C;
    case 621u: goto L_0894AD38;
    case 622u: goto L_0894AD44;
    case 623u: goto L_0894AD6C;
    case 624u: goto L_0894AD80;
    case 625u: goto L_0894AD90;
    case 626u: goto L_0894AD9C;
    case 627u: goto L_0894ADB0;
    case 628u: goto L_0894ADC0;
    case 629u: goto L_0894ADE0;
    case 630u: goto L_0894ADEC;
    case 631u: goto L_0894ADF8;
    case 632u: goto L_0894AE04;
    case 633u: goto L_0894AE10;
    case 634u: goto L_0894AE28;
    case 635u: goto L_0894AE50;
    case 636u: goto L_0894AE64;
    case 637u: goto L_0894AE70;
    case 638u: goto L_0894AE78;
    case 639u: goto L_0894AE84;
    case 640u: goto L_0894AE98;
    case 641u: goto L_0894AEA0;
    case 642u: goto L_0894AEAC;
    case 643u: goto L_0894AEB4;
    case 644u: goto L_0894AEC0;
    case 645u: goto L_0894AED0;
    case 646u: goto L_0894AEE8;
    case 647u: goto L_0894AEF4;
    case 648u: goto L_0894AF00;
    case 649u: goto L_0894AF08;
    case 650u: goto L_0894AF24;
    case 651u: goto L_0894AF30;
    case 652u: goto L_0894AF4C;
    case 653u: goto L_0894AF60;
    case 654u: goto L_0894AF74;
    case 655u: goto L_0894AF90;
    case 656u: goto L_0894AF98;
    case 657u: goto L_0894AFA8;
    case 658u: goto L_0894AFCC;
    case 659u: goto L_0894AFE0;
    case 660u: goto L_0894AFFC;
    case 661u: goto L_0894B004;
    case 662u: goto L_0894B014;
    case 663u: goto L_0894B02C;
    case 664u: goto L_0894B048;
    case 665u: goto L_0894B050;
    case 666u: goto L_0894B060;
    case 667u: goto L_0894B078;
    case 668u: goto L_0894B088;
    case 669u: goto L_0894B0A4;
    case 670u: goto L_0894B0B4;
    case 671u: goto L_0894B0F0;
    case 672u: goto L_0894B0F8;
    case 673u: goto L_0894B100;
    case 674u: goto L_0894B108;
    case 675u: goto L_0894B11C;
    case 676u: goto L_0894B12C;
    case 677u: goto L_0894B134;
    case 678u: goto L_0894B13C;
    case 679u: goto L_0894B150;
    case 680u: goto L_0894B168;
    case 681u: goto L_0894B180;
    case 682u: goto L_0894B18C;
    case 683u: goto L_0894B194;
    case 684u: goto L_0894B1B0;
    case 685u: goto L_0894B1BC;
    case 686u: goto L_0894B1C4;
    case 687u: goto L_0894B1CC;
    case 688u: goto L_0894B1E0;
    case 689u: goto L_0894B200;
    case 690u: goto L_0894B238;
    case 691u: goto L_0894B240;
    case 692u: goto L_0894B248;
    case 693u: goto L_0894B250;
    case 694u: goto L_0894B25C;
    case 695u: goto L_0894B264;
    case 696u: goto L_0894B26C;
    case 697u: goto L_0894B284;
    case 698u: goto L_0894B29C;
    case 699u: goto L_0894B2A8;
    case 700u: goto L_0894B2B0;
    case 701u: goto L_0894B2CC;
    case 702u: goto L_0894B2D8;
    case 703u: goto L_0894B2E0;
    case 704u: goto L_0894B2E8;
    case 705u: goto L_0894B2FC;
    case 706u: goto L_0894B318;
    case 707u: goto L_0894B334;
    case 708u: goto L_0894B33C;
    case 709u: goto L_0894B34C;
    case 710u: goto L_0894B3A0;
    case 711u: goto L_0894B3A8;
    case 712u: goto L_0894B3B0;
    case 713u: goto L_0894B3C4;
    case 714u: goto L_0894B3D4;
    case 715u: goto L_0894B3F4;
    case 716u: goto L_0894B410;
    case 717u: goto L_0894B420;
    case 718u: goto L_0894B430;
    case 719u: goto L_0894B450;
    case 720u: goto L_0894B474;
    case 721u: goto L_0894B480;
    case 722u: goto L_0894B488;
    case 723u: goto L_0894B490;
    case 724u: goto L_0894B49C;
    case 725u: goto L_0894B4A4;
    case 726u: goto L_0894B4B4;
    case 727u: goto L_0894B4D8;
    case 728u: goto L_0894B4E4;
    case 729u: goto L_0894B4EC;
    case 730u: goto L_0894B4F4;
    case 731u: goto L_0894B500;
    case 732u: goto L_0894B508;
    case 733u: goto L_0894B518;
    case 734u: goto L_0894B53C;
    case 735u: goto L_0894B548;
    case 736u: goto L_0894B550;
    case 737u: goto L_0894B558;
    case 738u: goto L_0894B564;
    case 739u: goto L_0894B56C;
    case 740u: goto L_0894B57C;
    case 741u: goto L_0894B5A4;
    case 742u: goto L_0894B5B0;
    case 743u: goto L_0894B5B8;
    case 744u: goto L_0894B5C4;
    case 745u: goto L_0894B5CC;
    case 746u: goto L_0894B5E0;
    case 747u: goto L_0894B5F4;
    case 748u: goto L_0894B60C;
    case 749u: goto L_0894B610;
    case 750u: goto L_0894B618;
    case 751u: goto L_0894B630;
    case 752u: goto L_0894B63C;
    case 753u: goto L_0894B658;
    case 754u: goto L_0894B670;
    case 755u: goto L_0894B688;
    case 756u: goto L_0894B694;
    case 757u: goto L_0894B6AC;
    case 758u: goto L_0894B6C4;
    case 759u: goto L_0894B6F8;
    case 760u: goto L_0894B718;
    case 761u: goto L_0894B754;
    case 762u: goto L_0894B764;
    case 763u: goto L_0894B774;
    case 764u: goto L_0894B78C;
    case 765u: goto L_0894B794;
    case 766u: goto L_0894B7A0;
    case 767u: goto L_0894B7A8;
    case 768u: goto L_0894B7DC;
    case 769u: goto L_0894B7E4;
    case 770u: goto L_0894B808;
    case 771u: goto L_0894B814;
    case 772u: goto L_0894B820;
    case 773u: goto L_0894B834;
    case 774u: goto L_0894B850;
    case 775u: goto L_0894B878;
    case 776u: goto L_0894B884;
    case 777u: goto L_0894B898;
    case 778u: goto L_0894B8A8;
    case 779u: goto L_0894B8B8;
    case 780u: goto L_0894B8C4;
    case 781u: goto L_0894B8CC;
    case 782u: goto L_0894B8E8;
    case 783u: goto L_0894B900;
    case 784u: goto L_0894B90C;
    case 785u: goto L_0894B918;
    case 786u: goto L_0894B92C;
    case 787u: goto L_0894B940;
    case 788u: goto L_0894B974;
    case 789u: goto L_0894B980;
    case 790u: goto L_0894B9A8;
    case 791u: goto L_0894B9B0;
    case 792u: goto L_0894B9B8;
    case 793u: goto L_0894B9C4;
    case 794u: goto L_0894B9CC;
    case 795u: goto L_0894B9D8;
    case 796u: goto L_0894BA00;
    case 797u: goto L_0894BA08;
    case 798u: goto L_0894BA10;
    case 799u: goto L_0894BA1C;
    case 800u: goto L_0894BA24;
    case 801u: goto L_0894BA30;
    case 802u: goto L_0894BA34;
    case 803u: goto L_0894BA40;
    case 804u: goto L_0894BA44;
    case 805u: goto L_0894BA64;
    case 806u: goto L_0894BA74;
    case 807u: goto L_0894BA90;
    case 808u: goto L_0894BAAC;
    case 809u: goto L_0894BAB8;
    case 810u: goto L_0894BACC;
    case 811u: goto L_0894BAD4;
    case 812u: goto L_0894BADC;
    case 813u: goto L_0894BAE4;
    case 814u: goto L_0894BB14;
    case 815u: goto L_0894BB2C;
    case 816u: goto L_0894BB34;
    case 817u: goto L_0894BB38;
    case 818u: goto L_0894BB44;
    case 819u: goto L_0894BB54;
    case 820u: goto L_0894BB68;
    case 821u: goto L_0894BB74;
    case 822u: goto L_0894BB8C;
    case 823u: goto L_0894BBA4;
    case 824u: goto L_0894BBAC;
    case 825u: goto L_0894BBB0;
    case 826u: goto L_0894BBBC;
    case 827u: goto L_0894BBCC;
    case 828u: goto L_0894BBE0;
    case 829u: goto L_0894BBEC;
    case 830u: goto L_0894BC10;
    case 831u: goto L_0894BC28;
    case 832u: goto L_0894BC34;
    case 833u: goto L_0894BC40;
    case 834u: goto L_0894BC50;
    case 835u: goto L_0894BC54;
    case 836u: goto L_0894BC68;
    case 837u: goto L_0894BC98;
    case 838u: goto L_0894BCB8;
    case 839u: goto L_0894BCC4;
    case 840u: goto L_0894BCDC;
    case 841u: goto L_0894BCE4;
    case 842u: goto L_0894BCF0;
    case 843u: goto L_0894BCF8;
    case 844u: goto L_0894BD04;
    case 845u: goto L_0894BD10;
    case 846u: goto L_0894BD2C;
    case 847u: goto L_0894BD34;
    case 848u: goto L_0894BD40;
    case 849u: goto L_0894BD4C;
    case 850u: goto L_0894BD58;
    case 851u: goto L_0894BD64;
    case 852u: goto L_0894BD88;
    case 853u: goto L_0894BD90;
    case 854u: goto L_0894BDA0;
    case 855u: goto L_0894BDD0;
    case 856u: goto L_0894BDD8;
    case 857u: goto L_0894BDF0;
    case 858u: goto L_0894BDF8;
    case 859u: goto L_0894BE0C;
    case 860u: goto L_0894BE2C;
    case 861u: goto L_0894BE34;
    case 862u: goto L_0894BE48;
    case 863u: goto L_0894BE6C;
    case 864u: goto L_0894BE74;
    case 865u: goto L_0894BE84;
    case 866u: goto L_0894BEC0;
    case 867u: goto L_0894BEEC;
    case 868u: goto L_0894BF00;
    case 869u: goto L_0894BF18;
    case 870u: goto L_0894BF50;
    case 871u: goto L_0894BF5C;
    case 872u: goto L_0894BF68;
    case 873u: goto L_0894BF7C;
    case 874u: goto L_0894BF8C;
    case 875u: goto L_0894BFB0;
    case 876u: goto L_0894BFBC;
    case 877u: goto L_0894BFCC;
    case 878u: goto L_0894BFD4;
    case 879u: goto L_0894BFE0;
    case 880u: goto L_0894BFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08948000:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894800Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894800Cu) goto L_0894800C;
    return;
L_0894800C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948028:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08948040u);
    // nop
    goto L_0894835C;
L_08948040:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948058u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948058u) goto L_08948058;
    return;
L_08948058:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894806C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0894808Cu);
    // nop
    goto L_0894835C;
L_0894808C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] & 65535u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089480A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089480A8u) goto L_089480A8;
    return;
L_089480A8:
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
L_089480C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089480E0u);
    // nop
    goto L_0894835C;
L_089480E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089480FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089480FCu) goto L_089480FC;
    return;
L_089480FC:
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
L_08948114:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08948134u);
    // nop
    goto L_0894835C;
L_08948134:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948150u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948150u) goto L_08948150;
    return;
L_08948150:
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
L_08948168:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08948190u);
    // nop
    goto L_0894835C;
L_08948190:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] & 65535u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089481B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089481B0u) goto L_089481B0;
    return;
L_089481B0:
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
L_089481CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948204;
      }
      goto L_089481E4;
    }
L_089481E4:
    ctx.set_gpr(31, 0x089481ECu);
    // nop
    goto L_0894835C;
L_089481EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948204u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948204u) goto L_08948204;
    return;
L_08948204:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948218:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948250;
      }
      goto L_08948230;
    }
L_08948230:
    ctx.set_gpr(31, 0x08948238u);
    // nop
    goto L_0894835C;
L_08948238:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948250u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948250u) goto L_08948250;
    return;
L_08948250:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08948288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08948288u) goto L_08948288;
    return;
L_08948288:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08948298u);
    // nop
    goto L_08948028;
L_08948298:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089482ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x089482ACu) goto L_089482AC;
    return;
L_089482AC:
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
L_089482C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089482E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089482E8u) goto L_089482E8;
    return;
L_089482E8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(31, 0x089482F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089482F8u) goto L_089482F8;
    return;
L_089482F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948310;
      }
      goto L_08948304;
    }
L_08948304:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948310;
      }
      goto L_0894830C;
    }
L_0894830C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08948310;
L_08948310:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948320;
      }
      goto L_08948318;
    }
L_08948318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948338;
      }
      goto L_08948320;
    }
L_08948320:
    ctx.set_gpr(31, 0x08948328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08948328u) goto L_08948328;
    return;
L_08948328:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08948334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 774u, 0x089075BCu>(ctx, &aot_mem) && ctx.pc == 0x08948334u) goto L_08948334;
    return;
L_08948334:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08948338;
L_08948338:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
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
L_0894835C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, ctx.gpr[2] >> 23u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 511 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948394;
      }
      goto L_08948380;
    }
L_08948380:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894838Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 542u, 0x0892E534u>(ctx, &aot_mem) && ctx.pc == 0x0894838Cu) goto L_0894838C;
    return;
L_0894838C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089483A8;
      }
      goto L_08948394;
    }
L_08948394:
    ctx.set_gpr(31, 0x0894839Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 865u, 0x08947FECu>(ctx, &aot_mem) && ctx.pc == 0x0894839Cu) goto L_0894839C;
    return;
L_0894839C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089483A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 523u, 0x0892E3F4u>(ctx, &aot_mem) && ctx.pc == 0x089483A8u) goto L_089483A8;
    return;
L_089483A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089483B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x089483DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 853u, 0x08947F14u>(ctx, &aot_mem) && ctx.pc == 0x089483DCu) goto L_089483DC;
    return;
L_089483DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089483F4;
      }
      goto L_089483E8;
    }
L_089483E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089483F4;
L_089483F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948424;
      }
      goto L_08948400;
    }
L_08948400:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948424;
      }
      goto L_0894841C;
    }
L_0894841C:
    ctx.set_gpr(31, 0x08948424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08948424u) goto L_08948424;
    return;
L_08948424:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948440;
      }
      goto L_08948434;
    }
L_08948434:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08948440;
L_08948440:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948454;
      }
      goto L_0894844C;
    }
L_0894844C:
    ctx.set_gpr(31, 0x08948454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08948454u) goto L_08948454;
    return;
L_08948454:
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
L_0894846C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948490u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948490u) goto L_08948490;
    return;
L_08948490:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894849Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x0894849Cu) goto L_0894849C;
    return;
L_0894849C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089484B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089484F0;
      }
      goto L_089484E4;
    }
L_089484E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089484F0;
L_089484F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948518;
      }
      goto L_089484FC;
    }
L_089484FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894850C;
      }
      goto L_08948504;
    }
L_08948504:
    ctx.set_gpr(31, 0x0894850Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894850Cu) goto L_0894850C;
    return;
L_0894850C:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089487B0;
      }
      goto L_08948518;
    }
L_08948518:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894852Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894852Cu) goto L_0894852C;
    return;
L_0894852C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089485A0;
      }
      goto L_08948544;
    }
L_08948544:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08948550u);
    // nop
    goto L_089495E8;
L_08948550:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948574;
      }
      goto L_0894856C;
    }
L_0894856C:
    ctx.set_gpr(31, 0x08948574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08948574u) goto L_08948574;
    return;
L_08948574:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089485A0;
      }
      goto L_08948580;
    }
L_08948580:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089485A0;
      }
      goto L_08948588;
    }
L_08948588:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089485A0;
      }
      goto L_08948594;
    }
L_08948594:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_089485A0;
L_089485A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089485E0;
      }
      goto L_089485BC;
    }
L_089485BC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28824)));
    ctx.set_gpr(31, 0x089485D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089485D0u) goto L_089485D0;
    return;
L_089485D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089485E0;
      }
      goto L_089485D8;
    }
L_089485D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089485E4;
      }
      goto L_089485E0;
    }
L_089485E0:
    ctx.set_gpr(19, 0u + 0u);
    goto L_089485E4;
L_089485E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089485FC;
      }
      goto L_089485F0;
    }
L_089485F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089485FC;
L_089485FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948688;
      }
      goto L_08948608;
    }
L_08948608:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(320)));
    ctx.set_gpr(31, 0x08948614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 119u, 0x088ECA5Cu>(ctx, &aot_mem) && ctx.pc == 0x08948614u) goto L_08948614;
    return;
L_08948614:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08948624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08948624u) goto L_08948624;
    return;
L_08948624:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948640;
      }
      goto L_08948634;
    }
L_08948634:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08948640;
L_08948640:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894865C;
      }
      goto L_08948654;
    }
L_08948654:
    ctx.set_gpr(31, 0x0894865Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894865Cu) goto L_0894865C;
    return;
L_0894865C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948688;
      }
      goto L_08948668;
    }
L_08948668:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08948688;
      }
      goto L_08948670;
    }
L_08948670:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948688;
      }
      goto L_0894867C;
    }
L_0894867C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_08948688;
L_08948688:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948768;
      }
      goto L_089486A4;
    }
L_089486A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[9] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08948764;
      }
      goto L_089486C8;
    }
L_089486C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089486E4;
      }
      goto L_089486DC;
    }
L_089486DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089486EC;
      }
      goto L_089486E4;
    }
L_089486E4:
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8240));
    goto L_089486EC;
L_089486EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948708;
      }
      goto L_08948700;
    }
L_08948700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948710;
      }
      goto L_08948708;
    }
L_08948708:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8240));
    goto L_08948710;
L_08948710:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08948764;
      }
      goto L_08948718;
    }
L_08948718:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08948764;
      }
      goto L_08948728;
    }
L_08948728:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948744;
      }
      goto L_0894873C;
    }
L_0894873C:
    ctx.set_gpr(31, 0x08948744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08948744u) goto L_08948744;
    return;
L_08948744:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948758;
      }
      goto L_08948750;
    }
L_08948750:
    ctx.set_gpr(31, 0x08948758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08948758u) goto L_08948758;
    return;
L_08948758:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089487B0;
      }
      goto L_08948764;
    }
L_08948764:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08948768;
L_08948768:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089486A4;
      }
      goto L_08948774;
    }
L_08948774:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08948784u);
    // nop
    goto L_089494E0;
L_08948784:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948798;
      }
      goto L_08948790;
    }
L_08948790:
    ctx.set_gpr(31, 0x08948798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08948798u) goto L_08948798;
    return;
L_08948798:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089487AC;
      }
      goto L_089487A4;
    }
L_089487A4:
    ctx.set_gpr(31, 0x089487ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089487ACu) goto L_089487AC;
    return;
L_089487AC:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_089487B0;
L_089487B0:
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
L_089487D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28840)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089487E4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089487F8;
      }
      goto L_089487EC;
    }
L_089487EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089487F8;
L_089487F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948800:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948838;
      }
      goto L_08948810;
    }
L_08948810:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948838;
      }
      goto L_0894882C;
    }
L_0894882C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08948838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08948838u) goto L_08948838;
    return;
L_08948838:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948848:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0894886Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0894886Cu) goto L_0894886C;
    return;
L_0894886C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948934;
      }
      goto L_08948874;
    }
L_08948874:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089488B8;
      }
      goto L_08948890;
    }
L_08948890:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894889Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894889Cu) goto L_0894889C;
    return;
L_0894889C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089488B0;
      }
      goto L_089488A4;
    }
L_089488A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089488B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x089488B0u) goto L_089488B0;
    return;
L_089488B0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_089488B8;
L_089488B8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089488CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x089488CCu) goto L_089488CC;
    return;
L_089488CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089488FC;
      }
      goto L_089488E0;
    }
L_089488E0:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089488FC;
      }
      goto L_089488F8;
    }
L_089488F8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089488FC;
L_089488FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948928;
      }
      goto L_08948904;
    }
L_08948904:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948928;
      }
      goto L_0894891C;
    }
L_0894891C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08948928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08948928u) goto L_08948928;
    return;
L_08948928:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089489E4;
      }
      goto L_08948934;
    }
L_08948934:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894896C;
      }
      goto L_08948944;
    }
L_08948944:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08948950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x08948950u) goto L_08948950;
    return;
L_08948950:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948964;
      }
      goto L_08948958;
    }
L_08948958:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08948964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x08948964u) goto L_08948964;
    return;
L_08948964:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894896C;
L_0894896C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26908));
    ctx.set_gpr(31, 0x08948984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x08948984u) goto L_08948984;
    return;
L_08948984:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089489B4;
      }
      goto L_08948998;
    }
L_08948998:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089489B4;
      }
      goto L_089489B0;
    }
L_089489B0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_089489B4;
L_089489B4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089489E0;
      }
      goto L_089489BC;
    }
L_089489BC:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089489E0;
      }
      goto L_089489D4;
    }
L_089489D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089489E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x089489E0u) goto L_089489E0;
    return;
L_089489E0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    goto L_089489E4;
L_089489E4:
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
L_089489FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948A28;
      }
      goto L_08948A1C;
    }
L_08948A1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08948A28;
L_08948A28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948A58;
      }
      goto L_08948A34;
    }
L_08948A34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948A58;
      }
      goto L_08948A50;
    }
L_08948A50:
    ctx.set_gpr(31, 0x08948A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08948A58u) goto L_08948A58;
    return;
L_08948A58:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
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
L_08948A74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948AA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948AA4u) goto L_08948AA4;
    return;
L_08948AA4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(31, 0x08948AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 642u, 0x08946EE0u>(ctx, &aot_mem) && ctx.pc == 0x08948AC4u) goto L_08948AC4;
    return;
L_08948AC4:
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948ADCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948ADCu) goto L_08948ADC;
    return;
L_08948ADC:
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
L_08948AF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948B48;
      }
      goto L_08948B14;
    }
L_08948B14:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948B24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948B24u) goto L_08948B24;
    return;
L_08948B24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948B48;
      }
      goto L_08948B30;
    }
L_08948B30:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08948B38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948B38u) goto L_08948B38;
    return;
L_08948B38:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08948B48u);
    // nop
    goto L_08948848;
L_08948B48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948B5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948B90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948B90u) goto L_08948B90;
    return;
L_08948B90:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948BAC;
      }
      goto L_08948BA0;
    }
L_08948BA0:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08948BA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948BA8u) goto L_08948BA8;
    return;
L_08948BA8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08948BAC;
L_08948BAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(31, 0x08948BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 243u, 0x08945230u>(ctx, &aot_mem) && ctx.pc == 0x08948BB8u) goto L_08948BB8;
    return;
L_08948BB8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08948BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 627u, 0x08946DE8u>(ctx, &aot_mem) && ctx.pc == 0x08948BCCu) goto L_08948BCC;
    return;
L_08948BCC:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(184), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(180), ctx.gpr[3]);
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
L_08948BFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948C3C;
      }
      goto L_08948C14;
    }
L_08948C14:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948C30;
      }
      goto L_08948C1C;
    }
L_08948C1C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08948C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 473u, 0x08946224u>(ctx, &aot_mem) && ctx.pc == 0x08948C28u) goto L_08948C28;
    return;
L_08948C28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948C3C;
      }
      goto L_08948C30;
    }
L_08948C30:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08948C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 473u, 0x08946224u>(ctx, &aot_mem) && ctx.pc == 0x08948C3Cu) goto L_08948C3C;
    return;
L_08948C3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948C4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948C68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948C68u) goto L_08948C68;
    return;
L_08948C68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948C78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948CA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948CA4u) goto L_08948CA4;
    return;
L_08948CA4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(31, 0x08948CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 669u, 0x089470B0u>(ctx, &aot_mem) && ctx.pc == 0x08948CC0u) goto L_08948CC0;
    return;
L_08948CC0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948CD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948CD8u) goto L_08948CD8;
    return;
L_08948CD8:
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948CF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948CF0u) goto L_08948CF0;
    return;
L_08948CF0:
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
L_08948D08:
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
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948D4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948D4Cu) goto L_08948D4C;
    return;
L_08948D4C:
    ctx.set_gpr(21, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948D94;
      }
      goto L_08948D8C;
    }
L_08948D8C:
    ctx.set_gpr(31, 0x08948D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x08948D94u) goto L_08948D94;
    return;
L_08948D94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948DE4;
      }
      goto L_08948DB0;
    }
L_08948DB0:
    ctx.set_gpr(2, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948DDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948DDCu) goto L_08948DDC;
    return;
L_08948DDC:
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08948DE4;
L_08948DE4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948DB0;
      }
      goto L_08948DF0;
    }
L_08948DF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(22, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948E28;
      }
      goto L_08948E04;
    }
L_08948E04:
    ctx.set_gpr(2, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948E24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948E24u) goto L_08948E24;
    return;
L_08948E24:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08948E28;
L_08948E28:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948E04;
      }
      goto L_08948E34;
    }
L_08948E34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(19, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(22, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948E64;
      }
      goto L_08948E48;
    }
L_08948E48:
    ctx.set_gpr(2, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08948E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 578u, 0x089428BCu>(ctx, &aot_mem) && ctx.pc == 0x08948E60u) goto L_08948E60;
    return;
L_08948E60:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08948E64;
L_08948E64:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948E48;
      }
      goto L_08948E70;
    }
L_08948E70:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948E84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948E84u) goto L_08948E84;
    return;
L_08948E84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948E9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948E9Cu) goto L_08948E9C;
    return;
L_08948E9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948EB0;
      }
      goto L_08948EA8;
    }
L_08948EA8:
    ctx.set_gpr(31, 0x08948EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08948EB0u) goto L_08948EB0;
    return;
L_08948EB0:
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
L_08948EE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948F0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948F0Cu) goto L_08948F0C;
    return;
L_08948F0C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(31, 0x08948F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 716u, 0x089473D8u>(ctx, &aot_mem) && ctx.pc == 0x08948F28u) goto L_08948F28;
    return;
L_08948F28:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948F40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948F40u) goto L_08948F40;
    return;
L_08948F40:
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08948F58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08948F58u) goto L_08948F58;
    return;
L_08948F58:
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
L_08948F70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08948FC8;
      }
      goto L_08948F9C;
    }
L_08948F9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x08948FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 233u, 0x0894516Cu>(ctx, &aot_mem) && ctx.pc == 0x08948FB0u) goto L_08948FB0;
    return;
L_08948FB0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08948FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08948FC0u) goto L_08948FC0;
    return;
L_08948FC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948FE8;
      }
      goto L_08948FC8;
    }
L_08948FC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08948FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08948FE8u) goto L_08948FE8;
    return;
L_08948FE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089490E0;
      }
      goto L_08948FF4;
    }
L_08948FF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894901C;
      }
      goto L_08949004;
    }
L_08949004:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0894901C;
      }
      goto L_08949010;
    }
L_08949010:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08949028;
      }
      goto L_0894901C;
    }
L_0894901C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894903C;
      }
      goto L_08949028;
    }
L_08949028:
    ctx.set_gpr(31, 0x08949030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08949030u) goto L_08949030;
    return;
L_08949030:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894903C;
      }
      goto L_08949038;
    }
L_08949038:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    goto L_0894903C;
L_0894903C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949058;
      }
      goto L_08949044;
    }
L_08949044:
    ctx.set_gpr(31, 0x0894904Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 221u, 0x0893CE2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894904Cu) goto L_0894904C;
    return;
L_0894904C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08949058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08949058u) goto L_08949058;
    return;
L_08949058:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08949068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 76u, 0x089445ACu>(ctx, &aot_mem) && ctx.pc == 0x08949068u) goto L_08949068;
    return;
L_08949068:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894909C;
      }
      goto L_08949074;
    }
L_08949074:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08949090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 131u, 0x08910840u>(ctx, &aot_mem) && ctx.pc == 0x08949090u) goto L_08949090;
    return;
L_08949090:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089490F8;
      }
      goto L_0894909C;
    }
L_0894909C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089490B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 131u, 0x08910840u>(ctx, &aot_mem) && ctx.pc == 0x089490B0u) goto L_089490B0;
    return;
L_089490B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089490F4;
      }
      goto L_089490CC;
    }
L_089490CC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089490D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089490D8u) goto L_089490D8;
    return;
L_089490D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089490F4;
      }
      goto L_089490E0;
    }
L_089490E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089490F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 131u, 0x08910840u>(ctx, &aot_mem) && ctx.pc == 0x089490F4u) goto L_089490F4;
    return;
L_089490F4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089490F8;
L_089490F8:
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
L_08949114:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949128;
      }
      goto L_0894911C;
    }
L_0894911C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08949128;
L_08949128:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949168;
      }
      goto L_08949140;
    }
L_08949140:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949168;
      }
      goto L_0894915C;
    }
L_0894915C:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08949168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08949168u) goto L_08949168;
    return;
L_08949168:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949178:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949184:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949190:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089491A0:
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
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089491D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x089491D4u) goto L_089491D4;
    return;
L_089491D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949238;
      }
      goto L_089491E8;
    }
L_089491E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089491F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089491F8u) goto L_089491F8;
    return;
L_089491F8:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27024)));
    ctx.set_gpr(31, 0x08949210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08949210u) goto L_08949210;
    return;
L_08949210:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949234;
      }
      goto L_08949218;
    }
L_08949218:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08949234u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08949234u) goto L_08949234;
    return;
L_08949234:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08949238;
L_08949238:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089491E8;
      }
      goto L_08949244;
    }
L_08949244:
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
L_0894926C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2676));
    ctx.set_gpr(31, 0x0894928Cu);
    // nop
    goto L_0894BF18;
L_0894928C:
    ctx.set_gpr(31, 0x08949294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x08949294u) goto L_08949294;
    return;
L_08949294:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089492A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 71u, 0x089104BCu>(ctx, &aot_mem) && ctx.pc == 0x089492A0u) goto L_089492A0;
    return;
L_089492A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089492B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949320;
      }
      goto L_089492DC;
    }
L_089492DC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949310;
      }
      goto L_089492EC;
    }
L_089492EC:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894930C;
      }
      goto L_08949304;
    }
L_08949304:
    ctx.set_gpr(31, 0x0894930Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894930Cu) goto L_0894930C;
    return;
L_0894930C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08949310;
L_08949310:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089492EC;
      }
      goto L_0894931C;
    }
L_0894931C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    goto L_08949320;
L_08949320:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08949330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 433u, 0x08945EE4u>(ctx, &aot_mem) && ctx.pc == 0x08949330u) goto L_08949330;
    return;
L_08949330:
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
L_08949350:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949364;
      }
      goto L_08949358;
    }
L_08949358:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    goto L_08949364;
L_08949364:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894936C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089493C0;
      }
      goto L_08949398;
    }
L_08949398:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089493B4;
      }
      goto L_089493A4;
    }
L_089493A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089493B4;
L_089493B4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089493A4;
      }
      goto L_089493C0;
    }
L_089493C0:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089493F0;
      }
      goto L_089493CC;
    }
L_089493CC:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089493EC;
      }
      goto L_089493E4;
    }
L_089493E4:
    ctx.set_gpr(31, 0x089493ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089493ECu) goto L_089493EC;
    return;
L_089493EC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089493F0;
L_089493F0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089493CC;
      }
      goto L_089493FC;
    }
L_089493FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949420;
      }
      goto L_08949410;
    }
L_08949410:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08949420;
L_08949420:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949410;
      }
      goto L_0894942C;
    }
L_0894942C:
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
L_0894944C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949498;
      }
      goto L_08949474;
    }
L_08949474:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949494;
      }
      goto L_0894948C;
    }
L_0894948C:
    ctx.set_gpr(31, 0x08949494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08949494u) goto L_08949494;
    return;
L_08949494:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08949498;
L_08949498:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949474;
      }
      goto L_089494A4;
    }
L_089494A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089494C4;
      }
      goto L_089494B0;
    }
L_089494B0:
    ctx.set_gpr(6, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089494C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089494C4u) goto L_089494C4;
    return;
L_089494C4:
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
L_089494E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949510;
      }
      goto L_08949504;
    }
L_08949504:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08949510;
L_08949510:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949538;
      }
      goto L_08949524;
    }
L_08949524:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894954C;
      }
      goto L_08949538;
    }
L_08949538:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0894954Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894954Cu) goto L_0894954C;
    return;
L_0894954C:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
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
L_08949578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089495BC;
      }
      goto L_08949598;
    }
L_08949598:
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089495B8;
      }
      goto L_089495AC;
    }
L_089495AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089495B8;
L_089495B8:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089495BC;
L_089495BC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949598;
      }
      goto L_089495C8;
    }
L_089495C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089495D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 844u, 0x0890FFD4u>(ctx, &aot_mem) && ctx.pc == 0x089495D8u) goto L_089495D8;
    return;
L_089495D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089495E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894968C;
      }
      goto L_08949618;
    }
L_08949618:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949648;
      }
      goto L_08949624;
    }
L_08949624:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949644;
      }
      goto L_0894963C;
    }
L_0894963C:
    ctx.set_gpr(31, 0x08949644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08949644u) goto L_08949644;
    return;
L_08949644:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08949648;
L_08949648:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949624;
      }
      goto L_08949654;
    }
L_08949654:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949674;
      }
      goto L_08949660;
    }
L_08949660:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08949674;
L_08949674:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949660;
      }
      goto L_08949680;
    }
L_08949680:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089496DC;
      }
      goto L_0894968C;
    }
L_0894968C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089496BC;
      }
      goto L_08949694;
    }
L_08949694:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089496B0;
      }
      goto L_089496A4;
    }
L_089496A4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089496BC;
      }
      goto L_089496B0;
    }
L_089496B0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089496BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089496BCu) goto L_089496BC;
    return;
L_089496BC:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089496DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089496DCu) goto L_089496DC;
    return;
L_089496DC:
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
L_089496FC:
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
    ctx.set_gpr(16, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949758;
      }
      goto L_08949734;
    }
L_08949734:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949754;
      }
      goto L_0894974C;
    }
L_0894974C:
    ctx.set_gpr(31, 0x08949754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08949754u) goto L_08949754;
    return;
L_08949754:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08949758;
L_08949758:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949734;
      }
      goto L_08949764;
    }
L_08949764:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08949778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 6u, 0x0891006Cu>(ctx, &aot_mem) && ctx.pc == 0x08949778u) goto L_08949778;
    return;
L_08949778:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894979C;
      }
      goto L_08949788;
    }
L_08949788:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0894979C;
L_0894979C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949788;
      }
      goto L_089497A8;
    }
L_089497A8:
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
L_089497CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089497F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x089497F0u) goto L_089497F0;
    return;
L_089497F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894984C;
      }
      goto L_089497F8;
    }
L_089497F8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894981C;
      }
      goto L_08949814;
    }
L_08949814:
    ctx.set_gpr(31, 0x0894981Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894981Cu) goto L_0894981C;
    return;
L_0894981C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894982Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0894982Cu) goto L_0894982C;
    return;
L_0894982C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949850;
      }
      goto L_0894984C;
    }
L_0894984C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08949850;
L_08949850:
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
L_08949868:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0894989Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x0894989Cu) goto L_0894989C;
    return;
L_0894989C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894990C;
      }
      goto L_089498A8;
    }
L_089498A8:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089498C8;
      }
      goto L_089498C0;
    }
L_089498C0:
    ctx.set_gpr(31, 0x089498C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089498C8u) goto L_089498C8;
    return;
L_089498C8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089498D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x089498D8u) goto L_089498D8;
    return;
L_089498D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08949908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08949908u) goto L_08949908;
    return;
L_08949908:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0894990C;
L_0894990C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089498A8;
      }
      goto L_08949914;
    }
L_08949914:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08949938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08949968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x08949968u) goto L_08949968;
    return;
L_08949968:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894998C;
      }
      goto L_08949978;
    }
L_08949978:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894998Cu);
    // nop
    goto L_089494E0;
L_0894998C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089499AC:
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089499E8;
      }
      goto L_089499E0;
    }
L_089499E0:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089499F4;
      }
      goto L_089499E8;
    }
L_089499E8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949A64;
      }
      goto L_089499F4;
    }
L_089499F4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949A54;
      }
      goto L_08949A04;
    }
L_08949A04:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949A50;
      }
      goto L_08949A30;
    }
L_08949A30:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08949A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08949A3Cu) goto L_08949A3C;
    return;
L_08949A3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949A50;
      }
      goto L_08949A44;
    }
L_08949A44:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949A64;
      }
      goto L_08949A50;
    }
L_08949A50:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08949A54;
L_08949A54:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949A04;
      }
      goto L_08949A60;
    }
L_08949A60:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08949A64;
L_08949A64:
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
L_08949A8C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949AA4;
      }
      goto L_08949A98;
    }
L_08949A98:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949AF8;
      }
      goto L_08949AA4;
    }
L_08949AA4:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949AE8;
      }
      goto L_08949AB0;
    }
L_08949AB0:
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949AE4;
      }
      goto L_08949AC8;
    }
L_08949AC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08949AE4;
      }
      goto L_08949ADC;
    }
L_08949ADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949AF8;
      }
      goto L_08949AE4;
    }
L_08949AE4:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08949AE8;
L_08949AE8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949AB0;
      }
      goto L_08949AF4;
    }
L_08949AF4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08949AF8;
L_08949AF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949B00:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949B14;
      }
      goto L_08949B08;
    }
L_08949B08:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949B6C;
      }
      goto L_08949B14;
    }
L_08949B14:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949B5C;
      }
      goto L_08949B24;
    }
L_08949B24:
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949B58;
      }
      goto L_08949B3C;
    }
L_08949B3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08949B58;
      }
      goto L_08949B50;
    }
L_08949B50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949B6C;
      }
      goto L_08949B58;
    }
L_08949B58:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08949B5C;
L_08949B5C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949B24;
      }
      goto L_08949B68;
    }
L_08949B68:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08949B6C;
L_08949B6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949B74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949BA8;
      }
      goto L_08949B9C;
    }
L_08949B9C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949BFC;
      }
      goto L_08949BA8;
    }
L_08949BA8:
    ctx.set_gpr(31, 0x08949BB0u);
    // nop
    goto L_08949C18;
L_08949BB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949BCC;
      }
      goto L_08949BC0;
    }
L_08949BC0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949BFC;
      }
      goto L_08949BCC;
    }
L_08949BCC:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08949BFC;
      }
      goto L_08949BF0;
    }
L_08949BF0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949BFC;
      }
      goto L_08949BFC;
    }
L_08949BFC:
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
L_08949C18:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949C2C;
      }
      goto L_08949C20;
    }
L_08949C20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949CEC;
      }
      goto L_08949C2C;
    }
L_08949C2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08949C44;
      }
      goto L_08949C38;
    }
L_08949C38:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949CEC;
      }
      goto L_08949C44;
    }
L_08949C44:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949CB0;
      }
      goto L_08949C54;
    }
L_08949C54:
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(7, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949C90;
      }
      goto L_08949C84;
    }
L_08949C84:
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949CB0;
      }
      goto L_08949C90;
    }
L_08949C90:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949CA8;
      }
      goto L_08949C9C;
    }
L_08949C9C:
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949CB0;
      }
      goto L_08949CA8;
    }
L_08949CA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949CEC;
      }
      goto L_08949CB0;
    }
L_08949CB0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949C54;
      }
      goto L_08949CBC;
    }
L_08949CBC:
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949CE8;
      }
      goto L_08949CE4;
    }
L_08949CE4:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08949CE8;
L_08949CE8:
    ctx.set_gpr(2, ctx.gpr[9] + 0u);
    goto L_08949CEC;
L_08949CEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08949CF4:
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
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949EA0;
      }
      goto L_08949D28;
    }
L_08949D28:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949EA0;
      }
      goto L_08949D3C;
    }
L_08949D3C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E84;
      }
      goto L_08949D48;
    }
L_08949D48:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E78;
      }
      goto L_08949D6C;
    }
L_08949D6C:
    ctx.set_gpr(16, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E70;
      }
      goto L_08949D94;
    }
L_08949D94:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08949DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08949DA0u) goto L_08949DA0;
    return;
L_08949DA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949DC0;
      }
      goto L_08949DB4;
    }
L_08949DB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08949DC0;
L_08949DC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949DDC;
      }
      goto L_08949DD4;
    }
L_08949DD4:
    ctx.set_gpr(31, 0x08949DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08949DDCu) goto L_08949DDC;
    return;
L_08949DDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E08;
      }
      goto L_08949DE8;
    }
L_08949DE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08949E08;
      }
      goto L_08949DF0;
    }
L_08949DF0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E08;
      }
      goto L_08949DFC;
    }
L_08949DFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    goto L_08949E08;
L_08949E08:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E20;
      }
      goto L_08949E14;
    }
L_08949E14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08949E20;
L_08949E20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E3C;
      }
      goto L_08949E34;
    }
L_08949E34:
    ctx.set_gpr(31, 0x08949E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08949E3Cu) goto L_08949E3C;
    return;
L_08949E3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E6C;
      }
      goto L_08949E48;
    }
L_08949E48:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08949E6C;
      }
      goto L_08949E54;
    }
L_08949E54:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949E6C;
      }
      goto L_08949E60;
    }
L_08949E60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[21]);
    goto L_08949E6C;
L_08949E6C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08949E70;
L_08949E70:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08949E78;
L_08949E78:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949D6C;
      }
      goto L_08949E84;
    }
L_08949E84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08949D48;
      }
      goto L_08949E8C;
    }
L_08949E8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949EA0;
      }
      goto L_08949E98;
    }
L_08949E98:
    ctx.set_gpr(31, 0x08949EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08949EA0u) goto L_08949EA0;
    return;
L_08949EA0:
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
L_08949ECC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949F4C;
      }
      goto L_08949EFC;
    }
L_08949EFC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949F40;
      }
      goto L_08949F0C;
    }
L_08949F0C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08949F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08949F28u) goto L_08949F28;
    return;
L_08949F28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949F3C;
      }
      goto L_08949F30;
    }
L_08949F30:
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949F4C;
      }
      goto L_08949F3C;
    }
L_08949F3C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08949F40;
L_08949F40:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949F0C;
      }
      goto L_08949F4C;
    }
L_08949F4C:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_08949F74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08949F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 771u, 0x088DBFC4u>(ctx, &aot_mem) && ctx.pc == 0x08949F9Cu) goto L_08949F9C;
    return;
L_08949F9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08949FC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08949FC0u) goto L_08949FC0;
    return;
L_08949FC0:
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
L_08949FDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A064;
      }
      goto L_0894A020;
    }
L_0894A020:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A034;
      }
      goto L_0894A028;
    }
L_0894A028:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0894A034;
L_0894A034:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A064;
      }
      goto L_0894A03C;
    }
L_0894A03C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A064;
      }
      goto L_0894A058;
    }
L_0894A058:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0894A064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894A064u) goto L_0894A064;
    return;
L_0894A064:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
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
L_0894A094:
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
          goto L_0894A104;
      }
      goto L_0894A0DC;
    }
L_0894A0DC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894A0F8u);
    // nop
    goto L_0894ADC0;
L_0894A0F8:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_0894A104;
L_0894A104:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A0DC;
      }
      goto L_0894A114;
    }
L_0894A114:
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
L_0894A144:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A270;
      }
      goto L_0894A174;
    }
L_0894A174:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A1E0;
      }
      goto L_0894A188;
    }
L_0894A188:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A1E0;
      }
      goto L_0894A194;
    }
L_0894A194:
    ctx.set_gpr(31, 0x0894A19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0894A19Cu) goto L_0894A19C;
    return;
L_0894A19C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A1E0;
      }
      goto L_0894A1A8;
    }
L_0894A1A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0894A1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 202u, 0x0893CCACu>(ctx, &aot_mem) && ctx.pc == 0x0894A1BCu) goto L_0894A1BC;
    return;
L_0894A1BC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A1F0;
      }
      goto L_0894A1C8;
    }
L_0894A1C8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894A1D4u);
    // nop
    goto L_0894835C;
L_0894A1D4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A1F0;
      }
      goto L_0894A1E0;
    }
L_0894A1E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894A1ECu);
    // nop
    goto L_0894835C;
L_0894A1EC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0894A1F0;
L_0894A1F0:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A260;
      }
      goto L_0894A1FC;
    }
L_0894A1FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894A20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0894A20Cu) goto L_0894A20C;
    return;
L_0894A20C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894A228u);
    // nop
    goto L_08949FDC;
L_0894A228:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A25C;
      }
      goto L_0894A234;
    }
L_0894A234:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A25C;
      }
      goto L_0894A250;
    }
L_0894A250:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894A25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894A25Cu) goto L_0894A25C;
    return;
L_0894A25C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894A260;
L_0894A260:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A1FC;
      }
      goto L_0894A270;
    }
L_0894A270:
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
L_0894A294:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A31C;
      }
      goto L_0894A2BC;
    }
L_0894A2BC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A30C;
      }
      goto L_0894A2C8;
    }
L_0894A2C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A308;
      }
      goto L_0894A2E4;
    }
L_0894A2E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A308;
      }
      goto L_0894A300;
    }
L_0894A300:
    ctx.set_gpr(31, 0x0894A308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894A308u) goto L_0894A308;
    return;
L_0894A308:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894A30C;
L_0894A30C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A2C8;
      }
      goto L_0894A31C;
    }
L_0894A31C:
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
L_0894A338:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A3C0;
      }
      goto L_0894A360;
    }
L_0894A360:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A3B0;
      }
      goto L_0894A36C;
    }
L_0894A36C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A3AC;
      }
      goto L_0894A388;
    }
L_0894A388:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A3AC;
      }
      goto L_0894A3A4;
    }
L_0894A3A4:
    ctx.set_gpr(31, 0x0894A3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894A3ACu) goto L_0894A3AC;
    return;
L_0894A3AC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894A3B0;
L_0894A3B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A36C;
      }
      goto L_0894A3C0;
    }
L_0894A3C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894A3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 339u, 0x089518ECu>(ctx, &aot_mem) && ctx.pc == 0x0894A3D0u) goto L_0894A3D0;
    return;
L_0894A3D0:
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
L_0894A3EC:
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
          goto L_0894A43C;
      }
      goto L_0894A414;
    }
L_0894A414:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A438;
      }
      goto L_0894A430;
    }
L_0894A430:
    ctx.set_gpr(31, 0x0894A438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 598u, 0x08946B0Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A438u) goto L_0894A438;
    return;
L_0894A438:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894A43C;
L_0894A43C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A414;
      }
      goto L_0894A44C;
    }
L_0894A44C:
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
L_0894A468:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A4BC;
      }
      goto L_0894A498;
    }
L_0894A498:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894A4B8u);
    // nop
    goto L_08949FDC;
L_0894A4B8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0894A4BC;
L_0894A4BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A498;
      }
      goto L_0894A4CC;
    }
L_0894A4CC:
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
L_0894A4EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A548;
      }
      goto L_0894A51C;
    }
L_0894A51C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894A544u);
    // nop
    goto L_08949FDC;
L_0894A544:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894A548;
L_0894A548:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A51C;
      }
      goto L_0894A558;
    }
L_0894A558:
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
L_0894A578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A684;
      }
      goto L_0894A5A8;
    }
L_0894A5A8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5D8;
      }
      goto L_0894A5D0;
    }
L_0894A5D0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A694;
      }
      goto L_0894A5D8;
    }
L_0894A5D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5FC;
      }
      goto L_0894A5E0;
    }
L_0894A5E0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5FC;
      }
      goto L_0894A5E8;
    }
L_0894A5E8:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0894A5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 769u, 0x08947830u>(ctx, &aot_mem) && ctx.pc == 0x0894A5F4u) goto L_0894A5F4;
    return;
L_0894A5F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A680;
      }
      goto L_0894A5FC;
    }
L_0894A5FC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A63C;
      }
      goto L_0894A604;
    }
L_0894A604:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894A61Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894A61Cu) goto L_0894A61C;
    return;
L_0894A61C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894A634u);
    // nop
    goto L_08949FDC;
L_0894A634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A680;
      }
      goto L_0894A63C;
    }
L_0894A63C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A680;
      }
      goto L_0894A644;
    }
L_0894A644:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A668;
      }
      goto L_0894A660;
    }
L_0894A660:
    ctx.set_gpr(31, 0x0894A668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894A668u) goto L_0894A668;
    return;
L_0894A668:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0894A680u);
    // nop
    goto L_08949FDC;
L_0894A680:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894A684;
L_0894A684:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5A8;
      }
      goto L_0894A694;
    }
L_0894A694:
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
L_0894A6B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A7C0;
      }
      goto L_0894A6E4;
    }
L_0894A6E4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A714;
      }
      goto L_0894A70C;
    }
L_0894A70C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A7D0;
      }
      goto L_0894A714;
    }
L_0894A714:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A738;
      }
      goto L_0894A71C;
    }
L_0894A71C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A738;
      }
      goto L_0894A724;
    }
L_0894A724:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0894A730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 779u, 0x08947920u>(ctx, &aot_mem) && ctx.pc == 0x0894A730u) goto L_0894A730;
    return;
L_0894A730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A7BC;
      }
      goto L_0894A738;
    }
L_0894A738:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A778;
      }
      goto L_0894A740;
    }
L_0894A740:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894A758u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894A758u) goto L_0894A758;
    return;
L_0894A758:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894A770u);
    // nop
    goto L_08949FDC;
L_0894A770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A7BC;
      }
      goto L_0894A778;
    }
L_0894A778:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A7BC;
      }
      goto L_0894A780;
    }
L_0894A780:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A7A4;
      }
      goto L_0894A79C;
    }
L_0894A79C:
    ctx.set_gpr(31, 0x0894A7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894A7A4u) goto L_0894A7A4;
    return;
L_0894A7A4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0894A7BCu);
    // nop
    goto L_08949FDC;
L_0894A7BC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894A7C0;
L_0894A7C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A6E4;
      }
      goto L_0894A7D0;
    }
L_0894A7D0:
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
L_0894A7F0:
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
          goto L_0894A840;
      }
      goto L_0894A818;
    }
L_0894A818:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A83C;
      }
      goto L_0894A834;
    }
L_0894A834:
    ctx.set_gpr(31, 0x0894A83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 598u, 0x08946B0Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A83Cu) goto L_0894A83C;
    return;
L_0894A83C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894A840;
L_0894A840:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A818;
      }
      goto L_0894A850;
    }
L_0894A850:
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
L_0894A86C:
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
          goto L_0894A8DC;
      }
      goto L_0894A8B4;
    }
L_0894A8B4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0894A8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 353u, 0x089519ECu>(ctx, &aot_mem) && ctx.pc == 0x0894A8D0u) goto L_0894A8D0;
    return;
L_0894A8D0:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894A8DC;
L_0894A8DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A8B4;
      }
      goto L_0894A8EC;
    }
L_0894A8EC:
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
L_0894A928:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894A93C:
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
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A9A4;
      }
      goto L_0894A974;
    }
L_0894A974:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A9A0;
      }
      goto L_0894A990;
    }
L_0894A990:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894A9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 829u, 0x08947D24u>(ctx, &aot_mem) && ctx.pc == 0x0894A9A0u) goto L_0894A9A0;
    return;
L_0894A9A0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894A9A4;
L_0894A9A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A974;
      }
      goto L_0894A9B4;
    }
L_0894A9B4:
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
L_0894A9D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AA70;
      }
      goto L_0894AA08;
    }
L_0894AA08:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894AA6C;
      }
      goto L_0894AA30;
    }
L_0894AA30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AA40;
      }
      goto L_0894AA38;
    }
L_0894AA38:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AA4C;
      }
      goto L_0894AA40;
    }
L_0894AA40:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AA84;
      }
      goto L_0894AA4C;
    }
L_0894AA4C:
    ctx.set_gpr(31, 0x0894AA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 815u, 0x08947C1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894AA54u) goto L_0894AA54;
    return;
L_0894AA54:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AA6C;
      }
      goto L_0894AA60;
    }
L_0894AA60:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AA84;
      }
      goto L_0894AA6C;
    }
L_0894AA6C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894AA70;
L_0894AA70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AA08;
      }
      goto L_0894AA80;
    }
L_0894AA80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0894AA84;
L_0894AA84:
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
L_0894AAA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB3C;
      }
      goto L_0894AAD4;
    }
L_0894AAD4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894AB38;
      }
      goto L_0894AAFC;
    }
L_0894AAFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB0C;
      }
      goto L_0894AB04;
    }
L_0894AB04:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB18;
      }
      goto L_0894AB0C;
    }
L_0894AB0C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB50;
      }
      goto L_0894AB18;
    }
L_0894AB18:
    ctx.set_gpr(31, 0x0894AB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 787u, 0x089479E4u>(ctx, &aot_mem) && ctx.pc == 0x0894AB20u) goto L_0894AB20;
    return;
L_0894AB20:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB38;
      }
      goto L_0894AB2C;
    }
L_0894AB2C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AB50;
      }
      goto L_0894AB38;
    }
L_0894AB38:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894AB3C;
L_0894AB3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AAD4;
      }
      goto L_0894AB4C;
    }
L_0894AB4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0894AB50;
L_0894AB50:
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
L_0894AB70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AC08;
      }
      goto L_0894ABA0;
    }
L_0894ABA0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894AC04;
      }
      goto L_0894ABC8;
    }
L_0894ABC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894ABD8;
      }
      goto L_0894ABD0;
    }
L_0894ABD0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894ABE4;
      }
      goto L_0894ABD8;
    }
L_0894ABD8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AC1C;
      }
      goto L_0894ABE4;
    }
L_0894ABE4:
    ctx.set_gpr(31, 0x0894ABECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 801u, 0x08947B00u>(ctx, &aot_mem) && ctx.pc == 0x0894ABECu) goto L_0894ABEC;
    return;
L_0894ABEC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AC04;
      }
      goto L_0894ABF8;
    }
L_0894ABF8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AC1C;
      }
      goto L_0894AC04;
    }
L_0894AC04:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0894AC08;
L_0894AC08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894ABA0;
      }
      goto L_0894AC18;
    }
L_0894AC18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0894AC1C;
L_0894AC1C:
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
L_0894AC3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0894AC58u);
    // nop
    goto L_0894AD9C;
L_0894AC58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894AC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x0894AC64u) goto L_0894AC64;
    return;
L_0894AC64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894AC78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0894AC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 434u, 0x08945EECu>(ctx, &aot_mem) && ctx.pc == 0x0894AC90u) goto L_0894AC90;
    return;
L_0894AC90:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894ACA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894ACA8u) goto L_0894ACA8;
    return;
L_0894ACA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894ACBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD00;
      }
      goto L_0894ACF4;
    }
L_0894ACF4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD44;
      }
      goto L_0894AD00;
    }
L_0894AD00:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD14;
      }
      goto L_0894AD08;
    }
L_0894AD08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0894AD14;
L_0894AD14:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD44;
      }
      goto L_0894AD1C;
    }
L_0894AD1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD44;
      }
      goto L_0894AD38;
    }
L_0894AD38:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0894AD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894AD44u) goto L_0894AD44;
    return;
L_0894AD44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
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
L_0894AD6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894AD80u);
    // nop
    goto L_0894ACBC;
L_0894AD80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894AD90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894AD9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x0894ADB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0894ADB0u) goto L_0894ADB0;
    return;
L_0894ADB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894ADC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0894ADE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 342u, 0x08951938u>(ctx, &aot_mem) && ctx.pc == 0x0894ADE0u) goto L_0894ADE0;
    return;
L_0894ADE0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894ADF8;
      }
      goto L_0894ADEC;
    }
L_0894ADEC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AE10;
      }
      goto L_0894ADF8;
    }
L_0894ADF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AE10;
      }
      goto L_0894AE04;
    }
L_0894AE04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0894AE10;
L_0894AE10:
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
L_0894AE28:
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
          goto L_0894AF30;
      }
      goto L_0894AE50;
    }
L_0894AE50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AEB4;
      }
      goto L_0894AE64;
    }
L_0894AE64:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AEB4;
      }
      goto L_0894AE70;
    }
L_0894AE70:
    ctx.set_gpr(31, 0x0894AE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0894AE78u) goto L_0894AE78;
    return;
L_0894AE78:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AEB4;
      }
      goto L_0894AE84;
    }
L_0894AE84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0894AE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 202u, 0x0893CCACu>(ctx, &aot_mem) && ctx.pc == 0x0894AE98u) goto L_0894AE98;
    return;
L_0894AE98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AEC0;
      }
      goto L_0894AEA0;
    }
L_0894AEA0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894AEACu);
    // nop
    goto L_0894835C;
L_0894AEAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AEC0;
      }
      goto L_0894AEB4;
    }
L_0894AEB4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894AEC0u);
    // nop
    goto L_0894835C;
L_0894AEC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894AED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0894AED0u) goto L_0894AED0;
    return;
L_0894AED0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894AEE8u);
    // nop
    goto L_0894ACBC;
L_0894AEE8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AF00;
      }
      goto L_0894AEF4;
    }
L_0894AEF4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AF30;
      }
      goto L_0894AF00;
    }
L_0894AF00:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AF30;
      }
      goto L_0894AF08;
    }
L_0894AF08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AF30;
      }
      goto L_0894AF24;
    }
L_0894AF24:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894AF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894AF30u) goto L_0894AF30;
    return;
L_0894AF30:
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
L_0894AF4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AF98;
      }
      goto L_0894AF60;
    }
L_0894AF60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AF98;
      }
      goto L_0894AF74;
    }
L_0894AF74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AF98;
      }
      goto L_0894AF90;
    }
L_0894AF90:
    ctx.set_gpr(31, 0x0894AF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894AF98u) goto L_0894AF98;
    return;
L_0894AF98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894AFA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AFCC;
    }
L_0894AFCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AFE0;
    }
L_0894AFE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B004;
      }
      goto L_0894AFFC;
    }
L_0894AFFC:
    ctx.set_gpr(31, 0x0894B004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894B004u) goto L_0894B004;
    return;
L_0894B004:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894B014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 339u, 0x089518ECu>(ctx, &aot_mem) && ctx.pc == 0x0894B014u) goto L_0894B014;
    return;
L_0894B014:
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
L_0894B02C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B050;
      }
      goto L_0894B048;
    }
L_0894B048:
    ctx.set_gpr(31, 0x0894B050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 598u, 0x08946B0Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B050u) goto L_0894B050;
    return;
L_0894B050:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B060:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894B078u);
    // nop
    goto L_0894ACBC;
L_0894B078:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B088:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894B0A4u);
    // nop
    goto L_0894ACBC;
L_0894B0A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B0B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B0F8;
      }
      goto L_0894B0F0;
    }
L_0894B0F0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1E0;
      }
      goto L_0894B0F8;
    }
L_0894B0F8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B134;
      }
      goto L_0894B100;
    }
L_0894B100:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B134;
      }
      goto L_0894B108;
    }
L_0894B108:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894B11Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894B11Cu) goto L_0894B11C;
    return;
L_0894B11C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894B12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 769u, 0x08947830u>(ctx, &aot_mem) && ctx.pc == 0x0894B12Cu) goto L_0894B12C;
    return;
L_0894B12C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1E0;
      }
      goto L_0894B134;
    }
L_0894B134:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1C4;
      }
      goto L_0894B13C;
    }
L_0894B13C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894B150u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894B150u) goto L_0894B150;
    return;
L_0894B150:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894B168u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894B168u) goto L_0894B168;
    return;
L_0894B168:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894B180u);
    // nop
    goto L_0894ACBC;
L_0894B180:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1E0;
      }
      goto L_0894B18C;
    }
L_0894B18C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1E0;
      }
      goto L_0894B194;
    }
L_0894B194:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1E0;
      }
      goto L_0894B1B0;
    }
L_0894B1B0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894B1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894B1BCu) goto L_0894B1BC;
    return;
L_0894B1BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1E0;
      }
      goto L_0894B1C4;
    }
L_0894B1C4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1E0;
      }
      goto L_0894B1CC;
    }
L_0894B1CC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0894B1E0u);
    // nop
    goto L_0894ACBC;
L_0894B1E0:
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
L_0894B200:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B240;
      }
      goto L_0894B238;
    }
L_0894B238:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2FC;
      }
      goto L_0894B240;
    }
L_0894B240:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B264;
      }
      goto L_0894B248;
    }
L_0894B248:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B264;
      }
      goto L_0894B250;
    }
L_0894B250:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0894B25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 779u, 0x08947920u>(ctx, &aot_mem) && ctx.pc == 0x0894B25Cu) goto L_0894B25C;
    return;
L_0894B25C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2FC;
      }
      goto L_0894B264;
    }
L_0894B264:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2E0;
      }
      goto L_0894B26C;
    }
L_0894B26C:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0894B284u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894B284u) goto L_0894B284;
    return;
L_0894B284:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894B29Cu);
    // nop
    goto L_0894ACBC;
L_0894B29C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2FC;
      }
      goto L_0894B2A8;
    }
L_0894B2A8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2FC;
      }
      goto L_0894B2B0;
    }
L_0894B2B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2FC;
      }
      goto L_0894B2CC;
    }
L_0894B2CC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894B2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894B2D8u) goto L_0894B2D8;
    return;
L_0894B2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2FC;
      }
      goto L_0894B2E0;
    }
L_0894B2E0:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2FC;
      }
      goto L_0894B2E8;
    }
L_0894B2E8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0894B2FCu);
    // nop
    goto L_0894ACBC;
L_0894B2FC:
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
L_0894B318:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B33C;
      }
      goto L_0894B334;
    }
L_0894B334:
    ctx.set_gpr(31, 0x0894B33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 598u, 0x08946B0Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B33Cu) goto L_0894B33C;
    return;
L_0894B33C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B34C:
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
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2648));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894B3A0u);
    // nop
    goto L_0894BF18;
L_0894B3A0:
    ctx.set_gpr(31, 0x0894B3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0894B3A8u) goto L_0894B3A8;
    return;
L_0894B3A8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B3D4;
      }
      goto L_0894B3B0;
    }
L_0894B3B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B3D4;
      }
      goto L_0894B3C4;
    }
L_0894B3C4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894B3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 750u, 0x08947688u>(ctx, &aot_mem) && ctx.pc == 0x0894B3D4u) goto L_0894B3D4;
    return;
L_0894B3D4:
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
L_0894B3F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B420;
      }
      goto L_0894B410;
    }
L_0894B410:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0894B420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 829u, 0x08947D24u>(ctx, &aot_mem) && ctx.pc == 0x0894B420u) goto L_0894B420;
    return;
L_0894B420:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B430:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B450:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B480;
      }
      goto L_0894B474;
    }
L_0894B474:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B4A4;
      }
      goto L_0894B480;
    }
L_0894B480:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B490;
      }
      goto L_0894B488;
    }
L_0894B488:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B49C;
      }
      goto L_0894B490;
    }
L_0894B490:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B4A4;
      }
      goto L_0894B49C;
    }
L_0894B49C:
    ctx.set_gpr(31, 0x0894B4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 815u, 0x08947C1Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B4A4u) goto L_0894B4A4;
    return;
L_0894B4A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B4B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B4E4;
      }
      goto L_0894B4D8;
    }
L_0894B4D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B508;
      }
      goto L_0894B4E4;
    }
L_0894B4E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B4F4;
      }
      goto L_0894B4EC;
    }
L_0894B4EC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B500;
      }
      goto L_0894B4F4;
    }
L_0894B4F4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B508;
      }
      goto L_0894B500;
    }
L_0894B500:
    ctx.set_gpr(31, 0x0894B508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 787u, 0x089479E4u>(ctx, &aot_mem) && ctx.pc == 0x0894B508u) goto L_0894B508;
    return;
L_0894B508:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B518:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B548;
      }
      goto L_0894B53C;
    }
L_0894B53C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B56C;
      }
      goto L_0894B548;
    }
L_0894B548:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B558;
      }
      goto L_0894B550;
    }
L_0894B550:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B564;
      }
      goto L_0894B558;
    }
L_0894B558:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B56C;
      }
      goto L_0894B564;
    }
L_0894B564:
    ctx.set_gpr(31, 0x0894B56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 801u, 0x08947B00u>(ctx, &aot_mem) && ctx.pc == 0x0894B56Cu) goto L_0894B56C;
    return;
L_0894B56C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B57C:
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
          goto L_0894B5CC;
      }
      goto L_0894B5A4;
    }
L_0894B5A4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0894B5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0894B5B0u) goto L_0894B5B0;
    return;
L_0894B5B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B5C4;
      }
      goto L_0894B5B8;
    }
L_0894B5B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894B5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0894B5C4u) goto L_0894B5C4;
    return;
L_0894B5C4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0894B5CC;
L_0894B5CC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894B5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0894B5E0u) goto L_0894B5E0;
    return;
L_0894B5E0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B610;
      }
      goto L_0894B5F4;
    }
L_0894B5F4:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B610;
      }
      goto L_0894B60C;
    }
L_0894B60C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0894B610;
L_0894B610:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B63C;
      }
      goto L_0894B618;
    }
L_0894B618:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B63C;
      }
      goto L_0894B630;
    }
L_0894B630:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0894B63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B63Cu) goto L_0894B63C;
    return;
L_0894B63C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
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
L_0894B658:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0894B670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 451u, 0x08952058u>(ctx, &aot_mem) && ctx.pc == 0x0894B670u) goto L_0894B670;
    return;
L_0894B670:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17164));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B694;
      }
      goto L_0894B688;
    }
L_0894B688:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894B694u);
    // nop
    goto L_0894B6AC;
L_0894B694:
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
L_0894B6AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0894B6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 455u, 0x089520A8u>(ctx, &aot_mem) && ctx.pc == 0x0894B6C4u) goto L_0894B6C4;
    return;
L_0894B6C4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17164));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
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
L_0894B6F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0894B718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 457u, 0x089520ECu>(ctx, &aot_mem) && ctx.pc == 0x0894B718u) goto L_0894B718;
    return;
L_0894B718:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(17164));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
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
L_0894B754:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0894B764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 459u, 0x08952144u>(ctx, &aot_mem) && ctx.pc == 0x0894B764u) goto L_0894B764;
    return;
L_0894B764:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B774:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B7A0;
      }
      goto L_0894B78C;
    }
L_0894B78C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B7A0;
      }
      goto L_0894B794;
    }
L_0894B794:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0894B7A0;
L_0894B7A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B7A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B834;
      }
      goto L_0894B7DC;
    }
L_0894B7DC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B834;
      }
      goto L_0894B7E4;
    }
L_0894B7E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[3] << 10u);
    ctx.set_gpr(18, ctx.gpr[18] >> 10u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B814;
      }
      goto L_0894B808;
    }
L_0894B808:
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0894B814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0894B814u) goto L_0894B814;
    return;
L_0894B814:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894B834;
      }
      goto L_0894B820;
    }
L_0894B820:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0894B834u);
    // nop
    goto L_0894ACBC;
L_0894B834:
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
L_0894B850:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0894B878u);
    // nop
    goto L_0894835C;
L_0894B878:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894B884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 257u, 0x088ED72Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B884u) goto L_0894B884;
    return;
L_0894B884:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894B898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x0894B898u) goto L_0894B898;
    return;
L_0894B898:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0894B8A8u);
    // nop
    goto L_089494E0;
L_0894B8A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0894B8B8u);
    // nop
    goto L_089494E0;
L_0894B8B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B8CC;
      }
      goto L_0894B8C4;
    }
L_0894B8C4:
    ctx.set_gpr(31, 0x0894B8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894B8CCu) goto L_0894B8CC;
    return;
L_0894B8CC:
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
L_0894B8E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0894B900u);
    // nop
    goto L_0894B940;
L_0894B900:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894B918;
      }
      goto L_0894B90C;
    }
L_0894B90C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B92C;
      }
      goto L_0894B918;
    }
L_0894B918:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_0894B92C;
L_0894B92C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B940:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA34;
      }
      goto L_0894B974;
    }
L_0894B974:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B9D8;
      }
      goto L_0894B980;
    }
L_0894B980:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B9B0;
      }
      goto L_0894B9A8;
    }
L_0894B9A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B9B8;
      }
      goto L_0894B9B0;
    }
L_0894B9B0:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8240));
    goto L_0894B9B8;
L_0894B9B8:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894B9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0894B9C4u) goto L_0894B9C4;
    return;
L_0894B9C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA30;
      }
      goto L_0894B9CC;
    }
L_0894B9CC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA44;
      }
      goto L_0894B9D8;
    }
L_0894B9D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA08;
      }
      goto L_0894BA00;
    }
L_0894BA00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA10;
      }
      goto L_0894BA08;
    }
L_0894BA08:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8240));
    goto L_0894BA10;
L_0894BA10:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0894BA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 449u, 0x08816370u>(ctx, &aot_mem) && ctx.pc == 0x0894BA1Cu) goto L_0894BA1C;
    return;
L_0894BA1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA30;
      }
      goto L_0894BA24;
    }
L_0894BA24:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA44;
      }
      goto L_0894BA30;
    }
L_0894BA30:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0894BA34;
L_0894BA34:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B974;
      }
      goto L_0894BA40;
    }
L_0894BA40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0894BA44;
L_0894BA44:
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
L_0894BA64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BA74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BA90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BAB8;
      }
      goto L_0894BAAC;
    }
L_0894BAAC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BADC;
      }
      goto L_0894BAB8;
    }
L_0894BAB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BAD4;
      }
      goto L_0894BACC;
    }
L_0894BACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BADC;
      }
      goto L_0894BAD4;
    }
L_0894BAD4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8240));
    goto L_0894BADC;
L_0894BADC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BAE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BB38;
      }
      goto L_0894BB14;
    }
L_0894BB14:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BB34;
      }
      goto L_0894BB2C;
    }
L_0894BB2C:
    ctx.set_gpr(31, 0x0894BB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894BB34u) goto L_0894BB34;
    return;
L_0894BB34:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0894BB38;
L_0894BB38:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BB14;
      }
      goto L_0894BB44;
    }
L_0894BB44:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BB68;
      }
      goto L_0894BB54;
    }
L_0894BB54:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0894BB68;
L_0894BB68:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BB54;
      }
      goto L_0894BB74;
    }
L_0894BB74:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BBB0;
      }
      goto L_0894BB8C;
    }
L_0894BB8C:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BBAC;
      }
      goto L_0894BBA4;
    }
L_0894BBA4:
    ctx.set_gpr(31, 0x0894BBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894BBACu) goto L_0894BBAC;
    return;
L_0894BBAC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0894BBB0;
L_0894BBB0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BB8C;
      }
      goto L_0894BBBC;
    }
L_0894BBBC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BBE0;
      }
      goto L_0894BBCC;
    }
L_0894BBCC:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0894BBE0;
L_0894BBE0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BBCC;
      }
      goto L_0894BBEC;
    }
L_0894BBEC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
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
L_0894BC10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0894BC28u);
    // nop
    goto L_0894B940;
L_0894BC28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894BC40;
      }
      goto L_0894BC34;
    }
L_0894BC34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BC54;
      }
      goto L_0894BC40;
    }
L_0894BC40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0894BC50u);
    // nop
    goto L_0894BC68;
L_0894BC50:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0894BC54;
L_0894BC54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BC68:
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
    ctx.set_gpr(31, 0x0894BC98u);
    // nop
    goto L_0894BA64;
L_0894BC98:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BCC4;
      }
      goto L_0894BCB8;
    }
L_0894BCB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0894BCC4;
L_0894BCC4:
    ctx.set_gpr(19, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BCE4;
      }
      goto L_0894BCDC;
    }
L_0894BCDC:
    ctx.set_gpr(31, 0x0894BCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894BCE4u) goto L_0894BCE4;
    return;
L_0894BCE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD10;
      }
      goto L_0894BCF0;
    }
L_0894BCF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894BD10;
      }
      goto L_0894BCF8;
    }
L_0894BCF8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD10;
      }
      goto L_0894BD04;
    }
L_0894BD04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    goto L_0894BD10;
L_0894BD10:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD34;
      }
      goto L_0894BD2C;
    }
L_0894BD2C:
    ctx.set_gpr(31, 0x0894BD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894BD34u) goto L_0894BD34;
    return;
L_0894BD34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD64;
      }
      goto L_0894BD40;
    }
L_0894BD40:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894BD64;
      }
      goto L_0894BD4C;
    }
L_0894BD4C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD64;
      }
      goto L_0894BD58;
    }
L_0894BD58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-4), 0u);
    goto L_0894BD64;
L_0894BD64:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(21, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BD90;
      }
      goto L_0894BD88;
    }
L_0894BD88:
    ctx.set_gpr(31, 0x0894BD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894BD90u) goto L_0894BD90;
    return;
L_0894BD90:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0894BDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0894BDA0u) goto L_0894BDA0;
    return;
L_0894BDA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BDD8;
      }
      goto L_0894BDD0;
    }
L_0894BDD0:
    ctx.set_gpr(31, 0x0894BDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883D588u>(ctx, &aot_mem) && ctx.pc == 0x0894BDD8u) goto L_0894BDD8;
    return;
L_0894BDD8:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BDF8;
      }
      goto L_0894BDF0;
    }
L_0894BDF0:
    ctx.set_gpr(31, 0x0894BDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894BDF8u) goto L_0894BDF8;
    return;
L_0894BDF8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0894BE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x0894BE0Cu) goto L_0894BE0C;
    return;
L_0894BE0C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BE34;
      }
      goto L_0894BE2C;
    }
L_0894BE2C:
    ctx.set_gpr(31, 0x0894BE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894BE34u) goto L_0894BE34;
    return;
L_0894BE34:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0894BE48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 23u, 0x088D019Cu>(ctx, &aot_mem) && ctx.pc == 0x0894BE48u) goto L_0894BE48;
    return;
L_0894BE48:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BE74;
      }
      goto L_0894BE6C;
    }
L_0894BE6C:
    ctx.set_gpr(31, 0x0894BE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0894BE74u) goto L_0894BE74;
    return;
L_0894BE74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0894BE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0894BE84u) goto L_0894BE84;
    return;
L_0894BE84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
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
L_0894BEC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0894BEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 841u, 0x08947E44u>(ctx, &aot_mem) && ctx.pc == 0x0894BEECu) goto L_0894BEEC;
    return;
L_0894BEEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0894BF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 841u, 0x08947E44u>(ctx, &aot_mem) && ctx.pc == 0x0894BF00u) goto L_0894BF00;
    return;
L_0894BF00:
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
L_0894BF18:
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
          goto L_0894BF5C;
      }
      goto L_0894BF50;
    }
L_0894BF50:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BF68;
      }
      goto L_0894BF5C;
    }
L_0894BF5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_0894BF68;
L_0894BF68:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x0894BF7Cu);
    // nop
    goto L_0894BF8C;
L_0894BF7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BF8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31380)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 5u, 0x0894C034u>(ctx, &aot_mem); return;
      }
      goto L_0894BFB0;
    }
L_0894BFB0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32664)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 5u, 0x0894C034u>(ctx, &aot_mem); return;
      }
      goto L_0894BFBC;
    }
L_0894BFBC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4096));
    ctx.set_gpr(31, 0x0894BFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 1063u, 0x0881BF28u>(ctx, &aot_mem) && ctx.pc == 0x0894BFCCu) goto L_0894BFCC;
    return;
L_0894BFCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0894BFE0;
      }
      goto L_0894BFD4;
    }
L_0894BFD4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 4096 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BFE8;
      }
      goto L_0894BFE0;
    }
L_0894BFE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4096));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4111), static_cast<std::uint8_t>(0u));
    goto L_0894BFE8;
L_0894BFE8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31380)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x0894C000u; return;
}

void recomp_unit_0081(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0081_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_81(Runtime &runtime) {
    runtime.register_generated_unit(81u, 0x08948000u, 16384u, &recomp_unit_0081, &recomp_unit_0081_entry);
    runtime.register_function(0x08948000u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894800Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948028u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948040u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948058u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894806Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894808Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948114u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948134u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948150u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948168u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948190u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948204u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948218u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948230u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948238u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948250u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948264u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948288u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948298u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948304u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894830Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948310u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948318u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948320u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948328u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948334u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948338u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894835Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948380u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894838Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948394u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894839Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948400u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894841Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948424u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948434u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948440u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894844Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948454u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894846Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948490u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894849Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948504u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894850Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948518u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894852Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948544u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948550u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894856Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948574u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948580u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948588u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948594u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948608u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948614u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948624u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948634u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948640u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948654u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894865Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948668u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948670u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894867Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948688u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948700u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948708u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948710u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948718u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948728u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894873Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948744u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948750u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948758u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948764u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948768u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948774u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948784u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948790u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948798u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948800u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948810u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894882Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948838u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948848u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894886Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948874u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948890u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894889Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948904u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894891Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948928u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948934u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948944u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948950u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948958u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948964u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894896Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948984u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948998u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948ADCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949004u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949010u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894901Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949028u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949030u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949038u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894903Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949044u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894904Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949058u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949068u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949074u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949090u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894909Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949114u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894911Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949128u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949130u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949140u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894915Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949168u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949178u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949184u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949190u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089491A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089491D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089491E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089491F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949210u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949218u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949234u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949238u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949244u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894926Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894928Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949294u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949304u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894930Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949310u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894931Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949320u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949330u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949350u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949358u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949364u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894936Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949398u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949410u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949420u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894942Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894944Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949474u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894948Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949494u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949498u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949504u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949510u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949524u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949538u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894954Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949578u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949598u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949618u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949624u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894963Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949644u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949648u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949654u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949660u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949674u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949680u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894968Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949694u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949734u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894974Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949754u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949758u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949764u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949778u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949788u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894979Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949814u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894981Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894982Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894984Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949850u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949868u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894989Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949908u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894990Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949914u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949938u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949968u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949978u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894998Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949ADCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949EA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949ECCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949EFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A020u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A028u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A034u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A03Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A058u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A064u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A094u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A104u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A114u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A144u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A174u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A188u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A194u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A19Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A20Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A228u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A234u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A250u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A25Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A260u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A270u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A294u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A300u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A308u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A30Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A31Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A338u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A360u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A36Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A388u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A414u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A430u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A438u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A43Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A44Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A468u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A498u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A51Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A544u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A548u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A558u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A578u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A604u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A61Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A634u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A63Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A644u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A660u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A668u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A680u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A684u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A694u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A70Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A714u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A71Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A724u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A730u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A738u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A740u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A758u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A770u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A778u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A780u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A79Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A818u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A834u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A83Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A840u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A850u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A86Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A928u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A93Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A974u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A990u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AED0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B004u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B014u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B02Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B048u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B050u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B060u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B078u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B088u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B100u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B108u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B11Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B12Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B134u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B13Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B150u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B168u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B180u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B18Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B194u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B200u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B238u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B240u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B248u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B250u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B25Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B264u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B26Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B284u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B29Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B318u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B334u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B33Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B34Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B410u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B420u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B430u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B450u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B474u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B480u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B488u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B490u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B49Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B500u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B508u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B518u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B53Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B548u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B550u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B558u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B564u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B56Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B57Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B60Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B610u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B618u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B630u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B63Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B658u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B670u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B688u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B694u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B718u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B754u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B764u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B774u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B78Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B794u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B808u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B814u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B820u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B834u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B850u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B878u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B884u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B898u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B900u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B90Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B918u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B92Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B940u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B974u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B980u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BACCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BADCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFE8u, &recomp_unit_0081, "recomp_unit_0081");
}
} // namespace psprecomp
