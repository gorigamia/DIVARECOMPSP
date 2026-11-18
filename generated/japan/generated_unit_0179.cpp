#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0179[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22,
    0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 31, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 37, 0, 38,
    0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 47,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 0, 53, 0, 54, 0,
    0, 55, 0, 56, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61,
    0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0,
    69, 0, 0, 0, 70, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80,
    0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 86, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 90, 0, 91, 0, 0, 92,
    0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 123, 0, 124, 0, 0, 125, 0,
    0, 0, 126, 127, 0, 128, 0, 129, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 139, 0, 140, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 147, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 165,
    0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173,
    0, 174, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0,
    183, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 190, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197,
    0, 0, 198, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0,
    0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 0, 210, 211, 0, 0, 0, 212, 0, 0,
    0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 0, 219, 220, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 228, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 236, 0, 237,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 251,
    0, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 259,
    0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0,
    266, 0, 267, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0,
    0, 278, 0, 279, 0, 0, 280, 0, 281, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286,
    0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 294, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 305, 0, 306, 0, 0, 307, 0, 308, 0, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0,
    0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 323, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0,
    0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0,
    0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 350, 351, 0, 0, 0, 352, 0, 0,
    0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 357, 0, 0, 0, 0, 0,
    0, 358, 0, 0, 0, 0, 0, 0, 359, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0,
    0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 368, 0, 0, 369, 0, 0, 0, 0, 370,
    0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 413, 0, 0, 0, 0, 0, 414, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0,
    419, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0,
    0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0,
    439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 444, 0, 445, 0, 446, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 452, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0,
    0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0,
    0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0,
    0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0,
    0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0,
    0, 0, 492, 0, 0, 493, 494, 0, 0, 495, 496, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0,
    500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 504, 505, 0, 0, 0, 506, 0,
    0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 510, 0, 0, 0, 511, 512, 0, 513, 0,
    514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 519, 0, 520, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0,
    0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 534,
    0, 0, 535, 0, 536, 0, 537, 0, 0, 538, 0, 0, 539, 540, 0, 0, 541, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0,
    0, 0, 0, 551, 0, 0, 552, 0, 553, 554, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 560, 0, 561,
    0, 562, 0, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 567, 0, 568, 0, 0, 569, 0, 570, 0, 0, 571, 0, 572,
    0, 0, 573, 0, 574, 0, 0, 575, 0, 576, 0, 577, 0, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 0, 586,
    0, 587, 0, 588, 0, 589, 0, 590, 0, 591, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0,
    0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 611, 0, 612, 613, 0,
    0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 623,
    0, 624, 625, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 628, 0, 0, 0, 629, 630, 0, 631, 0, 632, 0, 0, 0, 0,
    0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0,
    0, 0, 638, 0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 642, 643, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 650,
    0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 656, 657, 0, 0, 0, 0,
    0, 0, 0, 0, 658, 0, 659, 0, 660, 0, 0, 0, 661, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 0, 0,
    666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0,
    672, 0, 673, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 675, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 0, 681, 0, 0,
    682, 0, 0, 683, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 690,
    0, 0, 691, 0, 0, 692, 0, 0, 693, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 698,
    0, 0, 699, 0, 700, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706,
    0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 713, 0, 0, 714,
    0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0,
    0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 725, 726, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0,
    0, 729, 0, 730, 0, 731, 732, 0, 0, 0, 733, 0, 0, 0, 734, 735, 0, 0, 0, 736, 0, 0, 0, 737, 738, 0, 0, 0, 739, 740, 0, 0,
    741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 746, 0,
    0, 0, 747, 0, 748, 749, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 752, 0, 753, 0, 0, 754, 0, 0, 0, 755, 756, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0,
    0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 766,
    0, 767, 768, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 773, 0, 774, 0, 0,
    0, 775, 0, 776, 0, 0, 777, 0, 778, 779, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 785,
    0, 0, 0, 786, 0, 787, 788, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 0, 792,
    0, 793, 0, 794, 795, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 798, 0, 0, 0, 799, 0, 0, 0, 0, 800, 0, 801, 0, 0,
    0, 802, 0, 803, 0, 0, 0, 804, 0, 805, 0, 0, 0, 806, 0, 807, 0, 0, 0, 0, 808, 809, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0,
    0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 815, 816, 0, 817, 0, 0, 0,
    0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 822, 823, 0, 824, 0, 0,
    0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 826, 827, 0, 0, 828, 0, 829, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 831,
    832, 0, 0, 833, 0, 834, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 836, 0, 0, 0, 0, 837, 0, 838, 0, 0, 0, 0, 0, 0, 0, 839,
    0, 0, 840, 0, 0, 0, 0, 841, 0, 842, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0,
    846, 0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 849, 0, 850, 0, 851, 0, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 854, 0, 855, 0, 0,
    0, 856, 0, 0, 0, 0, 0, 857, 0, 0, 858, 0, 859, 860, 861, 0, 862, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 864, 0, 0, 865, 0,
    0, 866, 0, 867, 0, 0, 868, 0, 869, 0, 870, 0, 871, 0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 0, 874, 0, 875, 0, 0, 0, 0, 876,
    0, 877, 0, 0, 0, 0, 878, 0, 879, 0, 0, 0, 0, 0, 880, 0, 881, 0, 0, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 884,
    0, 0, 885, 0, 886, 0, 887, 0, 0, 0, 0, 888, 0, 889, 0, 0, 0, 0, 890, 0, 891, 0, 0, 0, 0, 892, 0, 893, 0, 0, 0, 0,
    894, 0, 895, 0, 0, 0, 0, 0, 896, 0, 0, 897, 0, 0, 0, 0, 0, 0, 0, 898, 0, 899, 0, 0, 0, 0, 900, 0, 0, 0, 901, 0,
    902, 0, 903, 0, 0, 904, 0, 905, 0, 0, 0, 0, 906, 0, 907, 0, 0, 0, 0, 0, 0, 0, 908, 0, 909, 0, 0, 0, 0, 0, 0, 0,
    0, 910, 0, 0, 0, 911, 0, 912, 0, 913, 0, 0, 914, 0, 915, 0, 0, 0, 0, 916, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0,
    918, 0, 919, 0, 0, 0, 0, 0, 920, 0, 921, 0, 0, 0, 0, 0, 0, 0, 0, 922, 0, 0, 923, 0, 924, 0, 925, 0, 0, 926, 0, 927,
    0, 0, 0, 0, 928, 0, 0, 0, 929, 930, 0, 0, 0, 931, 0, 0, 932, 0, 933, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 934, 0, 935,
};
void recomp_unit_0179_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AD0000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0179[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AD0000;
    case 2u: goto L_08AD000C;
    case 3u: goto L_08AD0024;
    case 4u: goto L_08AD002C;
    case 5u: goto L_08AD0040;
    case 6u: goto L_08AD0048;
    case 7u: goto L_08AD0050;
    case 8u: goto L_08AD0084;
    case 9u: goto L_08AD008C;
    case 10u: goto L_08AD00A8;
    case 11u: goto L_08AD00C0;
    case 12u: goto L_08AD00C8;
    case 13u: goto L_08AD00DC;
    case 14u: goto L_08AD00E4;
    case 15u: goto L_08AD00EC;
    case 16u: goto L_08AD0120;
    case 17u: goto L_08AD0128;
    case 18u: goto L_08AD0144;
    case 19u: goto L_08AD015C;
    case 20u: goto L_08AD0164;
    case 21u: goto L_08AD0174;
    case 22u: goto L_08AD017C;
    case 23u: goto L_08AD0184;
    case 24u: goto L_08AD019C;
    case 25u: goto L_08AD01A4;
    case 26u: goto L_08AD01C4;
    case 27u: goto L_08AD01CC;
    case 28u: goto L_08AD01D4;
    case 29u: goto L_08AD01E4;
    case 30u: goto L_08AD0224;
    case 31u: goto L_08AD0228;
    case 32u: goto L_08AD0230;
    case 33u: goto L_08AD0244;
    case 34u: goto L_08AD024C;
    case 35u: goto L_08AD0260;
    case 36u: goto L_08AD0270;
    case 37u: goto L_08AD0274;
    case 38u: goto L_08AD027C;
    case 39u: goto L_08AD0290;
    case 40u: goto L_08AD02A0;
    case 41u: goto L_08AD02A8;
    case 42u: goto L_08AD02BC;
    case 43u: goto L_08AD02C4;
    case 44u: goto L_08AD02D8;
    case 45u: goto L_08AD02E0;
    case 46u: goto L_08AD02F4;
    case 47u: goto L_08AD02FC;
    case 48u: goto L_08AD0310;
    case 49u: goto L_08AD0348;
    case 50u: goto L_08AD0350;
    case 51u: goto L_08AD035C;
    case 52u: goto L_08AD0364;
    case 53u: goto L_08AD0370;
    case 54u: goto L_08AD0378;
    case 55u: goto L_08AD0384;
    case 56u: goto L_08AD038C;
    case 57u: goto L_08AD0390;
    case 58u: goto L_08AD03A8;
    case 59u: goto L_08AD03C4;
    case 60u: goto L_08AD03F4;
    case 61u: goto L_08AD03FC;
    case 62u: goto L_08AD0404;
    case 63u: goto L_08AD040C;
    case 64u: goto L_08AD043C;
    case 65u: goto L_08AD0444;
    case 66u: goto L_08AD0468;
    case 67u: goto L_08AD0470;
    case 68u: goto L_08AD0478;
    case 69u: goto L_08AD0480;
    case 70u: goto L_08AD0490;
    case 71u: goto L_08AD0498;
    case 72u: goto L_08AD04A8;
    case 73u: goto L_08AD04B0;
    case 74u: goto L_08AD04C0;
    case 75u: goto L_08AD04C8;
    case 76u: goto L_08AD04D0;
    case 77u: goto L_08AD04DC;
    case 78u: goto L_08AD04EC;
    case 79u: goto L_08AD04F4;
    case 80u: goto L_08AD04FC;
    case 81u: goto L_08AD0508;
    case 82u: goto L_08AD0510;
    case 83u: goto L_08AD0518;
    case 84u: goto L_08AD0528;
    case 85u: goto L_08AD0538;
    case 86u: goto L_08AD053C;
    case 87u: goto L_08AD0544;
    case 88u: goto L_08AD0554;
    case 89u: goto L_08AD0564;
    case 90u: goto L_08AD0568;
    case 91u: goto L_08AD0570;
    case 92u: goto L_08AD057C;
    case 93u: goto L_08AD0590;
    case 94u: goto L_08AD0598;
    case 95u: goto L_08AD05A0;
    case 96u: goto L_08AD05A8;
    case 97u: goto L_08AD05B0;
    case 98u: goto L_08AD05B8;
    case 99u: goto L_08AD05C0;
    case 100u: goto L_08AD05DC;
    case 101u: goto L_08AD05F4;
    case 102u: goto L_08AD0604;
    case 103u: goto L_08AD060C;
    case 104u: goto L_08AD061C;
    case 105u: goto L_08AD0628;
    case 106u: goto L_08AD0630;
    case 107u: goto L_08AD063C;
    case 108u: goto L_08AD0650;
    case 109u: goto L_08AD06A4;
    case 110u: goto L_08AD06CC;
    case 111u: goto L_08AD06D4;
    case 112u: goto L_08AD06E8;
    case 113u: goto L_08AD06F0;
    case 114u: goto L_08AD06F8;
    case 115u: goto L_08AD0718;
    case 116u: goto L_08AD0720;
    case 117u: goto L_08AD072C;
    case 118u: goto L_08AD0738;
    case 119u: goto L_08AD0740;
    case 120u: goto L_08AD0748;
    case 121u: goto L_08AD0750;
    case 122u: goto L_08AD0758;
    case 123u: goto L_08AD0764;
    case 124u: goto L_08AD076C;
    case 125u: goto L_08AD0778;
    case 126u: goto L_08AD0788;
    case 127u: goto L_08AD078C;
    case 128u: goto L_08AD0794;
    case 129u: goto L_08AD079C;
    case 130u: goto L_08AD07A0;
    case 131u: goto L_08AD07B0;
    case 132u: goto L_08AD07B8;
    case 133u: goto L_08AD07E4;
    case 134u: goto L_08AD07F8;
    case 135u: goto L_08AD080C;
    case 136u: goto L_08AD081C;
    case 137u: goto L_08AD0828;
    case 138u: goto L_08AD0834;
    case 139u: goto L_08AD083C;
    case 140u: goto L_08AD0844;
    case 141u: goto L_08AD0848;
    case 142u: goto L_08AD085C;
    case 143u: goto L_08AD0870;
    case 144u: goto L_08AD089C;
    case 145u: goto L_08AD08A4;
    case 146u: goto L_08AD08AC;
    case 147u: goto L_08AD08C8;
    case 148u: goto L_08AD08CC;
    case 149u: goto L_08AD08DC;
    case 150u: goto L_08AD08F8;
    case 151u: goto L_08AD091C;
    case 152u: goto L_08AD0924;
    case 153u: goto L_08AD0930;
    case 154u: goto L_08AD0938;
    case 155u: goto L_08AD0944;
    case 156u: goto L_08AD0954;
    case 157u: goto L_08AD0960;
    case 158u: goto L_08AD0978;
    case 159u: goto L_08AD0994;
    case 160u: goto L_08AD09C0;
    case 161u: goto L_08AD09C8;
    case 162u: goto L_08AD09D0;
    case 163u: goto L_08AD09E8;
    case 164u: goto L_08AD09F0;
    case 165u: goto L_08AD09FC;
    case 166u: goto L_08AD0A0C;
    case 167u: goto L_08AD0A18;
    case 168u: goto L_08AD0A28;
    case 169u: goto L_08AD0A38;
    case 170u: goto L_08AD0A44;
    case 171u: goto L_08AD0A48;
    case 172u: goto L_08AD0A60;
    case 173u: goto L_08AD0A7C;
    case 174u: goto L_08AD0A84;
    case 175u: goto L_08AD0A90;
    case 176u: goto L_08AD0A9C;
    case 177u: goto L_08AD0AA4;
    case 178u: goto L_08AD0AB0;
    case 179u: goto L_08AD0AC0;
    case 180u: goto L_08AD0ACC;
    case 181u: goto L_08AD0ADC;
    case 182u: goto L_08AD0AEC;
    case 183u: goto L_08AD0B00;
    case 184u: goto L_08AD0B08;
    case 185u: goto L_08AD0B14;
    case 186u: goto L_08AD0B1C;
    case 187u: goto L_08AD0B28;
    case 188u: goto L_08AD0B38;
    case 189u: goto L_08AD0B44;
    case 190u: goto L_08AD0B48;
    case 191u: goto L_08AD0B4C;
    case 192u: goto L_08AD0B5C;
    case 193u: goto L_08AD0B90;
    case 194u: goto L_08AD0BA8;
    case 195u: goto L_08AD0BD8;
    case 196u: goto L_08AD0BE8;
    case 197u: goto L_08AD0BFC;
    case 198u: goto L_08AD0C08;
    case 199u: goto L_08AD0C0C;
    case 200u: goto L_08AD0C14;
    case 201u: goto L_08AD0C60;
    case 202u: goto L_08AD0C70;
    case 203u: goto L_08AD0C78;
    case 204u: goto L_08AD0C8C;
    case 205u: goto L_08AD0C98;
    case 206u: goto L_08AD0CA0;
    case 207u: goto L_08AD0CB8;
    case 208u: goto L_08AD0CC0;
    case 209u: goto L_08AD0CC8;
    case 210u: goto L_08AD0CE0;
    case 211u: goto L_08AD0CE4;
    case 212u: goto L_08AD0CF4;
    case 213u: goto L_08AD0D08;
    case 214u: goto L_08AD0D14;
    case 215u: goto L_08AD0D1C;
    case 216u: goto L_08AD0D34;
    case 217u: goto L_08AD0D3C;
    case 218u: goto L_08AD0D44;
    case 219u: goto L_08AD0D5C;
    case 220u: goto L_08AD0D60;
    case 221u: goto L_08AD0D70;
    case 222u: goto L_08AD0D94;
    case 223u: goto L_08AD0DB4;
    case 224u: goto L_08AD0DCC;
    case 225u: goto L_08AD0DDC;
    case 226u: goto L_08AD0DE4;
    case 227u: goto L_08AD0DF4;
    case 228u: goto L_08AD0DF8;
    case 229u: goto L_08AD0E14;
    case 230u: goto L_08AD0E50;
    case 231u: goto L_08AD0E70;
    case 232u: goto L_08AD0E94;
    case 233u: goto L_08AD0EB4;
    case 234u: goto L_08AD0EE0;
    case 235u: goto L_08AD0EE8;
    case 236u: goto L_08AD0EF4;
    case 237u: goto L_08AD0EFC;
    case 238u: goto L_08AD0F0C;
    case 239u: goto L_08AD0F30;
    case 240u: goto L_08AD0F44;
    case 241u: goto L_08AD0F48;
    case 242u: goto L_08AD0F68;
    case 243u: goto L_08AD0F7C;
    case 244u: goto L_08AD0F90;
    case 245u: goto L_08AD0FA4;
    case 246u: goto L_08AD0FB8;
    case 247u: goto L_08AD0FC4;
    case 248u: goto L_08AD0FD8;
    case 249u: goto L_08AD0FE0;
    case 250u: goto L_08AD0FF0;
    case 251u: goto L_08AD0FFC;
    case 252u: goto L_08AD1014;
    case 253u: goto L_08AD101C;
    case 254u: goto L_08AD1024;
    case 255u: goto L_08AD1030;
    case 256u: goto L_08AD1038;
    case 257u: goto L_08AD1060;
    case 258u: goto L_08AD1074;
    case 259u: goto L_08AD107C;
    case 260u: goto L_08AD1084;
    case 261u: goto L_08AD1094;
    case 262u: goto L_08AD10A0;
    case 263u: goto L_08AD10BC;
    case 264u: goto L_08AD10D0;
    case 265u: goto L_08AD10EC;
    case 266u: goto L_08AD1100;
    case 267u: goto L_08AD1108;
    case 268u: goto L_08AD1120;
    case 269u: goto L_08AD1128;
    case 270u: goto L_08AD1134;
    case 271u: goto L_08AD113C;
    case 272u: goto L_08AD1148;
    case 273u: goto L_08AD1150;
    case 274u: goto L_08AD115C;
    case 275u: goto L_08AD1164;
    case 276u: goto L_08AD1170;
    case 277u: goto L_08AD1178;
    case 278u: goto L_08AD1184;
    case 279u: goto L_08AD118C;
    case 280u: goto L_08AD1198;
    case 281u: goto L_08AD11A0;
    case 282u: goto L_08AD11AC;
    case 283u: goto L_08AD11B4;
    case 284u: goto L_08AD11D4;
    case 285u: goto L_08AD11EC;
    case 286u: goto L_08AD11FC;
    case 287u: goto L_08AD121C;
    case 288u: goto L_08AD1224;
    case 289u: goto L_08AD1248;
    case 290u: goto L_08AD125C;
    case 291u: goto L_08AD1274;
    case 292u: goto L_08AD1284;
    case 293u: goto L_08AD12A4;
    case 294u: goto L_08AD12A8;
    case 295u: goto L_08AD12AC;
    case 296u: goto L_08AD12C0;
    case 297u: goto L_08AD12E0;
    case 298u: goto L_08AD1300;
    case 299u: goto L_08AD1308;
    case 300u: goto L_08AD1324;
    case 301u: goto L_08AD132C;
    case 302u: goto L_08AD1340;
    case 303u: goto L_08AD1354;
    case 304u: goto L_08AD1380;
    case 305u: goto L_08AD1388;
    case 306u: goto L_08AD1390;
    case 307u: goto L_08AD139C;
    case 308u: goto L_08AD13A4;
    case 309u: goto L_08AD13B0;
    case 310u: goto L_08AD13B8;
    case 311u: goto L_08AD13C4;
    case 312u: goto L_08AD13CC;
    case 313u: goto L_08AD13EC;
    case 314u: goto L_08AD1404;
    case 315u: goto L_08AD1414;
    case 316u: goto L_08AD1434;
    case 317u: goto L_08AD143C;
    case 318u: goto L_08AD1460;
    case 319u: goto L_08AD1474;
    case 320u: goto L_08AD148C;
    case 321u: goto L_08AD149C;
    case 322u: goto L_08AD14BC;
    case 323u: goto L_08AD14C0;
    case 324u: goto L_08AD14C4;
    case 325u: goto L_08AD14D8;
    case 326u: goto L_08AD14F8;
    case 327u: goto L_08AD1518;
    case 328u: goto L_08AD1520;
    case 329u: goto L_08AD153C;
    case 330u: goto L_08AD1544;
    case 331u: goto L_08AD1558;
    case 332u: goto L_08AD156C;
    case 333u: goto L_08AD1598;
    case 334u: goto L_08AD15A0;
    case 335u: goto L_08AD15B8;
    case 336u: goto L_08AD15C4;
    case 337u: goto L_08AD15E4;
    case 338u: goto L_08AD15F8;
    case 339u: goto L_08AD1618;
    case 340u: goto L_08AD1648;
    case 341u: goto L_08AD1664;
    case 342u: goto L_08AD1684;
    case 343u: goto L_08AD1694;
    case 344u: goto L_08AD16C8;
    case 345u: goto L_08AD16D0;
    case 346u: goto L_08AD16D8;
    case 347u: goto L_08AD1714;
    case 348u: goto L_08AD171C;
    case 349u: goto L_08AD175C;
    case 350u: goto L_08AD1760;
    case 351u: goto L_08AD1764;
    case 352u: goto L_08AD1774;
    case 353u: goto L_08AD1794;
    case 354u: goto L_08AD17A4;
    case 355u: goto L_08AD17D8;
    case 356u: goto L_08AD17E0;
    case 357u: goto L_08AD17E8;
    case 358u: goto L_08AD1804;
    case 359u: goto L_08AD1820;
    case 360u: goto L_08AD1824;
    case 361u: goto L_08AD1834;
    case 362u: goto L_08AD1878;
    case 363u: goto L_08AD188C;
    case 364u: goto L_08AD1898;
    case 365u: goto L_08AD18A0;
    case 366u: goto L_08AD18C8;
    case 367u: goto L_08AD18D8;
    case 368u: goto L_08AD18DC;
    case 369u: goto L_08AD18E8;
    case 370u: goto L_08AD18FC;
    case 371u: goto L_08AD1908;
    case 372u: goto L_08AD1920;
    case 373u: goto L_08AD192C;
    case 374u: goto L_08AD1950;
    case 375u: goto L_08AD1974;
    case 376u: goto L_08AD1990;
    case 377u: goto L_08AD19A4;
    case 378u: goto L_08AD19C0;
    case 379u: goto L_08AD19D4;
    case 380u: goto L_08AD19F0;
    case 381u: goto L_08AD1A0C;
    case 382u: goto L_08AD1A20;
    case 383u: goto L_08AD1A2C;
    case 384u: goto L_08AD1A3C;
    case 385u: goto L_08AD1A58;
    case 386u: goto L_08AD1A74;
    case 387u: goto L_08AD1A90;
    case 388u: goto L_08AD1AAC;
    case 389u: goto L_08AD1ABC;
    case 390u: goto L_08AD1AC8;
    case 391u: goto L_08AD1AE0;
    case 392u: goto L_08AD1AFC;
    case 393u: goto L_08AD1B08;
    case 394u: goto L_08AD1B20;
    case 395u: goto L_08AD1B3C;
    case 396u: goto L_08AD1B48;
    case 397u: goto L_08AD1B60;
    case 398u: goto L_08AD1BA8;
    case 399u: goto L_08AD1BDC;
    case 400u: goto L_08AD1C0C;
    case 401u: goto L_08AD1C20;
    case 402u: goto L_08AD1C2C;
    case 403u: goto L_08AD1C40;
    case 404u: goto L_08AD1C4C;
    case 405u: goto L_08AD1C54;
    case 406u: goto L_08AD1C5C;
    case 407u: goto L_08AD1C84;
    case 408u: goto L_08AD1C94;
    case 409u: goto L_08AD1CA8;
    case 410u: goto L_08AD1CCC;
    case 411u: goto L_08AD1CD4;
    case 412u: goto L_08AD1CDC;
    case 413u: goto L_08AD1D04;
    case 414u: goto L_08AD1D1C;
    case 415u: goto L_08AD1D24;
    case 416u: goto L_08AD1D2C;
    case 417u: goto L_08AD1D54;
    case 418u: goto L_08AD1D5C;
    case 419u: goto L_08AD1D80;
    case 420u: goto L_08AD1D94;
    case 421u: goto L_08AD1DA4;
    case 422u: goto L_08AD1DBC;
    case 423u: goto L_08AD1DC8;
    case 424u: goto L_08AD1DD0;
    case 425u: goto L_08AD1DE0;
    case 426u: goto L_08AD1E10;
    case 427u: goto L_08AD1E24;
    case 428u: goto L_08AD1E2C;
    case 429u: goto L_08AD1E40;
    case 430u: goto L_08AD1E5C;
    case 431u: goto L_08AD1E78;
    case 432u: goto L_08AD1E94;
    case 433u: goto L_08AD1EA8;
    case 434u: goto L_08AD1EB0;
    case 435u: goto L_08AD1EC4;
    case 436u: goto L_08AD1ED0;
    case 437u: goto L_08AD1EE0;
    case 438u: goto L_08AD1EF0;
    case 439u: goto L_08AD1F00;
    case 440u: goto L_08AD1F24;
    case 441u: goto L_08AD1F38;
    case 442u: goto L_08AD1F44;
    case 443u: goto L_08AD1F58;
    case 444u: goto L_08AD1F64;
    case 445u: goto L_08AD1F6C;
    case 446u: goto L_08AD1F74;
    case 447u: goto L_08AD1F9C;
    case 448u: goto L_08AD1FAC;
    case 449u: goto L_08AD1FC0;
    case 450u: goto L_08AD1FE4;
    case 451u: goto L_08AD1FEC;
    case 452u: goto L_08AD1FF4;
    case 453u: goto L_08AD201C;
    case 454u: goto L_08AD2034;
    case 455u: goto L_08AD203C;
    case 456u: goto L_08AD2044;
    case 457u: goto L_08AD206C;
    case 458u: goto L_08AD2074;
    case 459u: goto L_08AD2098;
    case 460u: goto L_08AD20BC;
    case 461u: goto L_08AD20CC;
    case 462u: goto L_08AD20E4;
    case 463u: goto L_08AD20F0;
    case 464u: goto L_08AD20F8;
    case 465u: goto L_08AD2108;
    case 466u: goto L_08AD2138;
    case 467u: goto L_08AD214C;
    case 468u: goto L_08AD2154;
    case 469u: goto L_08AD2168;
    case 470u: goto L_08AD218C;
    case 471u: goto L_08AD219C;
    case 472u: goto L_08AD21B4;
    case 473u: goto L_08AD21C0;
    case 474u: goto L_08AD21D0;
    case 475u: goto L_08AD21E4;
    case 476u: goto L_08AD21F8;
    case 477u: goto L_08AD220C;
    case 478u: goto L_08AD2220;
    case 479u: goto L_08AD2234;
    case 480u: goto L_08AD224C;
    case 481u: goto L_08AD2250;
    case 482u: goto L_08AD2268;
    case 483u: goto L_08AD2298;
    case 484u: goto L_08AD22C8;
    case 485u: goto L_08AD2310;
    case 486u: goto L_08AD2340;
    case 487u: goto L_08AD2388;
    case 488u: goto L_08AD23B0;
    case 489u: goto L_08AD23D4;
    case 490u: goto L_08AD23DC;
    case 491u: goto L_08AD23F0;
    case 492u: goto L_08AD2408;
    case 493u: goto L_08AD2414;
    case 494u: goto L_08AD2418;
    case 495u: goto L_08AD2424;
    case 496u: goto L_08AD2428;
    case 497u: goto L_08AD2434;
    case 498u: goto L_08AD243C;
    case 499u: goto L_08AD2468;
    case 500u: goto L_08AD2480;
    case 501u: goto L_08AD24A0;
    case 502u: goto L_08AD24CC;
    case 503u: goto L_08AD24D4;
    case 504u: goto L_08AD24E4;
    case 505u: goto L_08AD24E8;
    case 506u: goto L_08AD24F8;
    case 507u: goto L_08AD250C;
    case 508u: goto L_08AD2520;
    case 509u: goto L_08AD2558;
    case 510u: goto L_08AD255C;
    case 511u: goto L_08AD256C;
    case 512u: goto L_08AD2570;
    case 513u: goto L_08AD2578;
    case 514u: goto L_08AD2580;
    case 515u: goto L_08AD2598;
    case 516u: goto L_08AD25CC;
    case 517u: goto L_08AD25E4;
    case 518u: goto L_08AD25EC;
    case 519u: goto L_08AD25F0;
    case 520u: goto L_08AD25F8;
    case 521u: goto L_08AD2624;
    case 522u: goto L_08AD262C;
    case 523u: goto L_08AD2644;
    case 524u: goto L_08AD264C;
    case 525u: goto L_08AD2664;
    case 526u: goto L_08AD266C;
    case 527u: goto L_08AD2690;
    case 528u: goto L_08AD2698;
    case 529u: goto L_08AD26AC;
    case 530u: goto L_08AD26B4;
    case 531u: goto L_08AD26D8;
    case 532u: goto L_08AD26E4;
    case 533u: goto L_08AD26F0;
    case 534u: goto L_08AD26FC;
    case 535u: goto L_08AD2708;
    case 536u: goto L_08AD2710;
    case 537u: goto L_08AD2718;
    case 538u: goto L_08AD2724;
    case 539u: goto L_08AD2730;
    case 540u: goto L_08AD2734;
    case 541u: goto L_08AD2740;
    case 542u: goto L_08AD2744;
    case 543u: goto L_08AD2760;
    case 544u: goto L_08AD283C;
    case 545u: goto L_08AD2880;
    case 546u: goto L_08AD289C;
    case 547u: goto L_08AD28B4;
    case 548u: goto L_08AD28CC;
    case 549u: goto L_08AD28E4;
    case 550u: goto L_08AD28F8;
    case 551u: goto L_08AD290C;
    case 552u: goto L_08AD2918;
    case 553u: goto L_08AD2920;
    case 554u: goto L_08AD2924;
    case 555u: goto L_08AD2930;
    case 556u: goto L_08AD2944;
    case 557u: goto L_08AD2954;
    case 558u: goto L_08AD2960;
    case 559u: goto L_08AD296C;
    case 560u: goto L_08AD2974;
    case 561u: goto L_08AD297C;
    case 562u: goto L_08AD2984;
    case 563u: goto L_08AD2990;
    case 564u: goto L_08AD29AC;
    case 565u: goto L_08AD29B8;
    case 566u: goto L_08AD29C0;
    case 567u: goto L_08AD29CC;
    case 568u: goto L_08AD29D4;
    case 569u: goto L_08AD29E0;
    case 570u: goto L_08AD29E8;
    case 571u: goto L_08AD29F4;
    case 572u: goto L_08AD29FC;
    case 573u: goto L_08AD2A08;
    case 574u: goto L_08AD2A10;
    case 575u: goto L_08AD2A1C;
    case 576u: goto L_08AD2A24;
    case 577u: goto L_08AD2A2C;
    case 578u: goto L_08AD2A38;
    case 579u: goto L_08AD2A40;
    case 580u: goto L_08AD2A48;
    case 581u: goto L_08AD2A50;
    case 582u: goto L_08AD2A58;
    case 583u: goto L_08AD2A60;
    case 584u: goto L_08AD2A68;
    case 585u: goto L_08AD2A70;
    case 586u: goto L_08AD2A7C;
    case 587u: goto L_08AD2A84;
    case 588u: goto L_08AD2A8C;
    case 589u: goto L_08AD2A94;
    case 590u: goto L_08AD2A9C;
    case 591u: goto L_08AD2AA4;
    case 592u: goto L_08AD2AA8;
    case 593u: goto L_08AD2ABC;
    case 594u: goto L_08AD2AD0;
    case 595u: goto L_08AD2AE0;
    case 596u: goto L_08AD2AEC;
    case 597u: goto L_08AD2AF8;
    case 598u: goto L_08AD2B04;
    case 599u: goto L_08AD2B0C;
    case 600u: goto L_08AD2B14;
    case 601u: goto L_08AD2B1C;
    case 602u: goto L_08AD2B24;
    case 603u: goto L_08AD2B2C;
    case 604u: goto L_08AD2B34;
    case 605u: goto L_08AD2B40;
    case 606u: goto L_08AD2B48;
    case 607u: goto L_08AD2B50;
    case 608u: goto L_08AD2B58;
    case 609u: goto L_08AD2B60;
    case 610u: goto L_08AD2B68;
    case 611u: goto L_08AD2B6C;
    case 612u: goto L_08AD2B74;
    case 613u: goto L_08AD2B78;
    case 614u: goto L_08AD2B8C;
    case 615u: goto L_08AD2BB4;
    case 616u: goto L_08AD2BE0;
    case 617u: goto L_08AD2BEC;
    case 618u: goto L_08AD2C30;
    case 619u: goto L_08AD2C44;
    case 620u: goto L_08AD2C5C;
    case 621u: goto L_08AD2C68;
    case 622u: goto L_08AD2C74;
    case 623u: goto L_08AD2C7C;
    case 624u: goto L_08AD2C84;
    case 625u: goto L_08AD2C88;
    case 626u: goto L_08AD2C90;
    case 627u: goto L_08AD2CC4;
    case 628u: goto L_08AD2CC8;
    case 629u: goto L_08AD2CD8;
    case 630u: goto L_08AD2CDC;
    case 631u: goto L_08AD2CE4;
    case 632u: goto L_08AD2CEC;
    case 633u: goto L_08AD2D04;
    case 634u: goto L_08AD2D30;
    case 635u: goto L_08AD2D44;
    case 636u: goto L_08AD2D64;
    case 637u: goto L_08AD2D74;
    case 638u: goto L_08AD2D88;
    case 639u: goto L_08AD2D94;
    case 640u: goto L_08AD2D9C;
    case 641u: goto L_08AD2DAC;
    case 642u: goto L_08AD2DB4;
    case 643u: goto L_08AD2DB8;
    case 644u: goto L_08AD2DBC;
    case 645u: goto L_08AD2DCC;
    case 646u: goto L_08AD2DEC;
    case 647u: goto L_08AD2E30;
    case 648u: goto L_08AD2E44;
    case 649u: goto L_08AD2E64;
    case 650u: goto L_08AD2E7C;
    case 651u: goto L_08AD2E8C;
    case 652u: goto L_08AD2E9C;
    case 653u: goto L_08AD2EB0;
    case 654u: goto L_08AD2ED4;
    case 655u: goto L_08AD2EDC;
    case 656u: goto L_08AD2EE8;
    case 657u: goto L_08AD2EEC;
    case 658u: goto L_08AD2F10;
    case 659u: goto L_08AD2F18;
    case 660u: goto L_08AD2F20;
    case 661u: goto L_08AD2F30;
    case 662u: goto L_08AD2F38;
    case 663u: goto L_08AD2F40;
    case 664u: goto L_08AD2F5C;
    case 665u: goto L_08AD2F64;
    case 666u: goto L_08AD2F80;
    case 667u: goto L_08AD2FA0;
    case 668u: goto L_08AD2FBC;
    case 669u: goto L_08AD2FD4;
    case 670u: goto L_08AD2FEC;
    case 671u: goto L_08AD2FF8;
    case 672u: goto L_08AD3000;
    case 673u: goto L_08AD3008;
    case 674u: goto L_08AD3024;
    case 675u: goto L_08AD3044;
    case 676u: goto L_08AD3048;
    case 677u: goto L_08AD3050;
    case 678u: goto L_08AD3058;
    case 679u: goto L_08AD3060;
    case 680u: goto L_08AD3068;
    case 681u: goto L_08AD3074;
    case 682u: goto L_08AD3080;
    case 683u: goto L_08AD308C;
    case 684u: goto L_08AD3098;
    case 685u: goto L_08AD30A0;
    case 686u: goto L_08AD30BC;
    case 687u: goto L_08AD30D8;
    case 688u: goto L_08AD30E8;
    case 689u: goto L_08AD30F4;
    case 690u: goto L_08AD30FC;
    case 691u: goto L_08AD3108;
    case 692u: goto L_08AD3114;
    case 693u: goto L_08AD3120;
    case 694u: goto L_08AD312C;
    case 695u: goto L_08AD3134;
    case 696u: goto L_08AD3150;
    case 697u: goto L_08AD316C;
    case 698u: goto L_08AD317C;
    case 699u: goto L_08AD3188;
    case 700u: goto L_08AD3190;
    case 701u: goto L_08AD319C;
    case 702u: goto L_08AD31A8;
    case 703u: goto L_08AD31B4;
    case 704u: goto L_08AD31C0;
    case 705u: goto L_08AD31C8;
    case 706u: goto L_08AD31FC;
    case 707u: goto L_08AD3210;
    case 708u: goto L_08AD3218;
    case 709u: goto L_08AD3230;
    case 710u: goto L_08AD324C;
    case 711u: goto L_08AD325C;
    case 712u: goto L_08AD3268;
    case 713u: goto L_08AD3270;
    case 714u: goto L_08AD327C;
    case 715u: goto L_08AD3288;
    case 716u: goto L_08AD3294;
    case 717u: goto L_08AD32A0;
    case 718u: goto L_08AD32A8;
    case 719u: goto L_08AD32C4;
    case 720u: goto L_08AD32F8;
    case 721u: goto L_08AD330C;
    case 722u: goto L_08AD3314;
    case 723u: goto L_08AD332C;
    case 724u: goto L_08AD333C;
    case 725u: goto L_08AD3348;
    case 726u: goto L_08AD334C;
    case 727u: goto L_08AD336C;
    case 728u: goto L_08AD3378;
    case 729u: goto L_08AD3384;
    case 730u: goto L_08AD338C;
    case 731u: goto L_08AD3394;
    case 732u: goto L_08AD3398;
    case 733u: goto L_08AD33A8;
    case 734u: goto L_08AD33B8;
    case 735u: goto L_08AD33BC;
    case 736u: goto L_08AD33CC;
    case 737u: goto L_08AD33DC;
    case 738u: goto L_08AD33E0;
    case 739u: goto L_08AD33F0;
    case 740u: goto L_08AD33F4;
    case 741u: goto L_08AD3400;
    case 742u: goto L_08AD343C;
    case 743u: goto L_08AD3448;
    case 744u: goto L_08AD3458;
    case 745u: goto L_08AD346C;
    case 746u: goto L_08AD3478;
    case 747u: goto L_08AD3488;
    case 748u: goto L_08AD3490;
    case 749u: goto L_08AD3494;
    case 750u: goto L_08AD34A4;
    case 751u: goto L_08AD34AC;
    case 752u: goto L_08AD34C0;
    case 753u: goto L_08AD34C8;
    case 754u: goto L_08AD34D4;
    case 755u: goto L_08AD34E4;
    case 756u: goto L_08AD34E8;
    case 757u: goto L_08AD3518;
    case 758u: goto L_08AD3568;
    case 759u: goto L_08AD358C;
    case 760u: goto L_08AD3594;
    case 761u: goto L_08AD35B8;
    case 762u: goto L_08AD35C0;
    case 763u: goto L_08AD35D0;
    case 764u: goto L_08AD35D8;
    case 765u: goto L_08AD35F4;
    case 766u: goto L_08AD35FC;
    case 767u: goto L_08AD3604;
    case 768u: goto L_08AD3608;
    case 769u: goto L_08AD361C;
    case 770u: goto L_08AD362C;
    case 771u: goto L_08AD3654;
    case 772u: goto L_08AD365C;
    case 773u: goto L_08AD366C;
    case 774u: goto L_08AD3674;
    case 775u: goto L_08AD3684;
    case 776u: goto L_08AD368C;
    case 777u: goto L_08AD3698;
    case 778u: goto L_08AD36A0;
    case 779u: goto L_08AD36A4;
    case 780u: goto L_08AD36B4;
    case 781u: goto L_08AD36BC;
    case 782u: goto L_08AD36C8;
    case 783u: goto L_08AD36D0;
    case 784u: goto L_08AD36F4;
    case 785u: goto L_08AD36FC;
    case 786u: goto L_08AD370C;
    case 787u: goto L_08AD3714;
    case 788u: goto L_08AD3718;
    case 789u: goto L_08AD3738;
    case 790u: goto L_08AD3764;
    case 791u: goto L_08AD3770;
    case 792u: goto L_08AD377C;
    case 793u: goto L_08AD3784;
    case 794u: goto L_08AD378C;
    case 795u: goto L_08AD3790;
    case 796u: goto L_08AD3798;
    case 797u: goto L_08AD37C0;
    case 798u: goto L_08AD37C8;
    case 799u: goto L_08AD37D8;
    case 800u: goto L_08AD37EC;
    case 801u: goto L_08AD37F4;
    case 802u: goto L_08AD3804;
    case 803u: goto L_08AD380C;
    case 804u: goto L_08AD381C;
    case 805u: goto L_08AD3824;
    case 806u: goto L_08AD3834;
    case 807u: goto L_08AD383C;
    case 808u: goto L_08AD3850;
    case 809u: goto L_08AD3854;
    case 810u: goto L_08AD386C;
    case 811u: goto L_08AD388C;
    case 812u: goto L_08AD38A4;
    case 813u: goto L_08AD38C4;
    case 814u: goto L_08AD38DC;
    case 815u: goto L_08AD38E4;
    case 816u: goto L_08AD38E8;
    case 817u: goto L_08AD38F0;
    case 818u: goto L_08AD3910;
    case 819u: goto L_08AD3928;
    case 820u: goto L_08AD3948;
    case 821u: goto L_08AD3960;
    case 822u: goto L_08AD3968;
    case 823u: goto L_08AD396C;
    case 824u: goto L_08AD3974;
    case 825u: goto L_08AD3994;
    case 826u: goto L_08AD39AC;
    case 827u: goto L_08AD39B0;
    case 828u: goto L_08AD39BC;
    case 829u: goto L_08AD39C4;
    case 830u: goto L_08AD39E4;
    case 831u: goto L_08AD39FC;
    case 832u: goto L_08AD3A00;
    case 833u: goto L_08AD3A0C;
    case 834u: goto L_08AD3A14;
    case 835u: goto L_08AD3A34;
    case 836u: goto L_08AD3A40;
    case 837u: goto L_08AD3A54;
    case 838u: goto L_08AD3A5C;
    case 839u: goto L_08AD3A7C;
    case 840u: goto L_08AD3A88;
    case 841u: goto L_08AD3A9C;
    case 842u: goto L_08AD3AA4;
    case 843u: goto L_08AD3AAC;
    case 844u: goto L_08AD3AE0;
    case 845u: goto L_08AD3AF0;
    case 846u: goto L_08AD3B00;
    case 847u: goto L_08AD3B0C;
    case 848u: goto L_08AD3B1C;
    case 849u: goto L_08AD3B2C;
    case 850u: goto L_08AD3B34;
    case 851u: goto L_08AD3B3C;
    case 852u: goto L_08AD3B4C;
    case 853u: goto L_08AD3B5C;
    case 854u: goto L_08AD3B6C;
    case 855u: goto L_08AD3B74;
    case 856u: goto L_08AD3B84;
    case 857u: goto L_08AD3B9C;
    case 858u: goto L_08AD3BA8;
    case 859u: goto L_08AD3BB0;
    case 860u: goto L_08AD3BB4;
    case 861u: goto L_08AD3BB8;
    case 862u: goto L_08AD3BC0;
    case 863u: goto L_08AD3BE0;
    case 864u: goto L_08AD3BEC;
    case 865u: goto L_08AD3BF8;
    case 866u: goto L_08AD3C04;
    case 867u: goto L_08AD3C0C;
    case 868u: goto L_08AD3C18;
    case 869u: goto L_08AD3C20;
    case 870u: goto L_08AD3C28;
    case 871u: goto L_08AD3C30;
    case 872u: goto L_08AD3C44;
    case 873u: goto L_08AD3C4C;
    case 874u: goto L_08AD3C60;
    case 875u: goto L_08AD3C68;
    case 876u: goto L_08AD3C7C;
    case 877u: goto L_08AD3C84;
    case 878u: goto L_08AD3C98;
    case 879u: goto L_08AD3CA0;
    case 880u: goto L_08AD3CB8;
    case 881u: goto L_08AD3CC0;
    case 882u: goto L_08AD3CE0;
    case 883u: goto L_08AD3CE8;
    case 884u: goto L_08AD3CFC;
    case 885u: goto L_08AD3D08;
    case 886u: goto L_08AD3D10;
    case 887u: goto L_08AD3D18;
    case 888u: goto L_08AD3D2C;
    case 889u: goto L_08AD3D34;
    case 890u: goto L_08AD3D48;
    case 891u: goto L_08AD3D50;
    case 892u: goto L_08AD3D64;
    case 893u: goto L_08AD3D6C;
    case 894u: goto L_08AD3D80;
    case 895u: goto L_08AD3D88;
    case 896u: goto L_08AD3DA0;
    case 897u: goto L_08AD3DAC;
    case 898u: goto L_08AD3DCC;
    case 899u: goto L_08AD3DD4;
    case 900u: goto L_08AD3DE8;
    case 901u: goto L_08AD3DF8;
    case 902u: goto L_08AD3E00;
    case 903u: goto L_08AD3E08;
    case 904u: goto L_08AD3E14;
    case 905u: goto L_08AD3E1C;
    case 906u: goto L_08AD3E30;
    case 907u: goto L_08AD3E38;
    case 908u: goto L_08AD3E58;
    case 909u: goto L_08AD3E60;
    case 910u: goto L_08AD3E84;
    case 911u: goto L_08AD3E94;
    case 912u: goto L_08AD3E9C;
    case 913u: goto L_08AD3EA4;
    case 914u: goto L_08AD3EB0;
    case 915u: goto L_08AD3EB8;
    case 916u: goto L_08AD3ECC;
    case 917u: goto L_08AD3EE0;
    case 918u: goto L_08AD3F00;
    case 919u: goto L_08AD3F08;
    case 920u: goto L_08AD3F20;
    case 921u: goto L_08AD3F28;
    case 922u: goto L_08AD3F4C;
    case 923u: goto L_08AD3F58;
    case 924u: goto L_08AD3F60;
    case 925u: goto L_08AD3F68;
    case 926u: goto L_08AD3F74;
    case 927u: goto L_08AD3F7C;
    case 928u: goto L_08AD3F90;
    case 929u: goto L_08AD3FA0;
    case 930u: goto L_08AD3FA4;
    case 931u: goto L_08AD3FB4;
    case 932u: goto L_08AD3FC0;
    case 933u: goto L_08AD3FC8;
    case 934u: goto L_08AD3FF4;
    case 935u: goto L_08AD3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AD0000:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08AD000Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD000Cu) goto L_08AD000C;
    return;
L_08AD000C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD038C;
      }
      goto L_08AD0024;
    }
L_08AD0024:
    ctx.set_gpr(31, 0x08AD002Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD002Cu) goto L_08AD002C;
    return;
L_08AD002C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08AD0040u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1730));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0040u) goto L_08AD0040;
    return;
L_08AD0040:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD038C;
      }
      goto L_08AD0048;
    }
L_08AD0048:
    ctx.set_gpr(31, 0x08AD0050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0050u) goto L_08AD0050;
    return;
L_08AD0050:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AD0084u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AD0084u) goto L_08AD0084;
    return;
L_08AD0084:
    ctx.set_gpr(31, 0x08AD008Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD008Cu) goto L_08AD008C;
    return;
L_08AD008C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16143u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08AD00A8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD00A8u) goto L_08AD00A8;
    return;
L_08AD00A8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD038C;
      }
      goto L_08AD00C0;
    }
L_08AD00C0:
    ctx.set_gpr(31, 0x08AD00C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD00C8u) goto L_08AD00C8;
    return;
L_08AD00C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AD00DCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1732));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD00DCu) goto L_08AD00DC;
    return;
L_08AD00DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD038C;
      }
      goto L_08AD00E4;
    }
L_08AD00E4:
    ctx.set_gpr(31, 0x08AD00ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD00ECu) goto L_08AD00EC;
    return;
L_08AD00EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AD0120u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AD0120u) goto L_08AD0120;
    return;
L_08AD0120:
    ctx.set_gpr(31, 0x08AD0128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0128u) goto L_08AD0128;
    return;
L_08AD0128:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16143u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08AD0144u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0144u) goto L_08AD0144;
    return;
L_08AD0144:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD038C;
      }
      goto L_08AD015C;
    }
L_08AD015C:
    ctx.set_gpr(31, 0x08AD0164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 160u, 0x08848A74u>(ctx, &aot_mem) && ctx.pc == 0x08AD0164u) goto L_08AD0164;
    return;
L_08AD0164:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AD0174u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AD0174u) goto L_08AD0174;
    return;
L_08AD0174:
    ctx.set_gpr(31, 0x08AD017Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AD1834;
L_08AD017C:
    ctx.set_gpr(31, 0x08AD0184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0184u) goto L_08AD0184;
    return;
L_08AD0184:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AD019Cu);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08AD019Cu) goto L_08AD019C;
    return;
L_08AD019C:
    ctx.set_gpr(31, 0x08AD01A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD01A4u) goto L_08AD01A4;
    return;
L_08AD01A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AD01C4u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD01C4u) goto L_08AD01C4;
    return;
L_08AD01C4:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    goto L_08AD01CC;
L_08AD01CC:
    ctx.set_gpr(31, 0x08AD01D4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(312));
    goto L_08AD03A8;
L_08AD01D4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08AD01CC;
      }
      goto L_08AD01E4;
    }
L_08AD01E4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(108), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(156), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(31, 0x08AD0224u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08AD0994;
L_08AD0224:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AD0228;
L_08AD0228:
    ctx.set_gpr(31, 0x08AD0230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0230u) goto L_08AD0230;
    return;
L_08AD0230:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AD0244u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0244u) goto L_08AD0244;
    return;
L_08AD0244:
    ctx.set_gpr(31, 0x08AD024Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD024Cu) goto L_08AD024C;
    return;
L_08AD024C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AD0260u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0260u) goto L_08AD0260;
    return;
L_08AD0260:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0228;
      }
      goto L_08AD0270;
    }
L_08AD0270:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(5));
    goto L_08AD0274;
L_08AD0274:
    ctx.set_gpr(31, 0x08AD027Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD027Cu) goto L_08AD027C;
    return;
L_08AD027C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AD0290u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0290u) goto L_08AD0290;
    return;
L_08AD0290:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0274;
      }
      goto L_08AD02A0;
    }
L_08AD02A0:
    ctx.set_gpr(31, 0x08AD02A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD02A8u) goto L_08AD02A8;
    return;
L_08AD02A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AD02BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD02BCu) goto L_08AD02BC;
    return;
L_08AD02BC:
    ctx.set_gpr(31, 0x08AD02C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD02C4u) goto L_08AD02C4;
    return;
L_08AD02C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08AD02D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD02D8u) goto L_08AD02D8;
    return;
L_08AD02D8:
    ctx.set_gpr(31, 0x08AD02E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD02E0u) goto L_08AD02E0;
    return;
L_08AD02E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08AD02F4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD02F4u) goto L_08AD02F4;
    return;
L_08AD02F4:
    ctx.set_gpr(31, 0x08AD02FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD02FCu) goto L_08AD02FC;
    return;
L_08AD02FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD0310u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0310u) goto L_08AD0310;
    return;
L_08AD0310:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(112), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AD0348u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD0348u) goto L_08AD0348;
    return;
L_08AD0348:
    ctx.set_gpr(31, 0x08AD0350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0350u) goto L_08AD0350;
    return;
L_08AD0350:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD035Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(131));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 847u, 0x08AB31BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD035Cu) goto L_08AD035C;
    return;
L_08AD035C:
    ctx.set_gpr(31, 0x08AD0364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0364u) goto L_08AD0364;
    return;
L_08AD0364:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0370u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1734));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 847u, 0x08AB31BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0370u) goto L_08AD0370;
    return;
L_08AD0370:
    ctx.set_gpr(31, 0x08AD0378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0378u) goto L_08AD0378;
    return;
L_08AD0378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0384u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1735));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 847u, 0x08AB31BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0384u) goto L_08AD0384;
    return;
L_08AD0384:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD0390;
      }
      goto L_08AD038C;
    }
L_08AD038C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AD0390;
L_08AD0390:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD03A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AD03C4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD03C4u) goto L_08AD03C4;
    return;
L_08AD03C4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08AD03F4u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 928u, 0x08ACF510u>(ctx, &aot_mem) && ctx.pc == 0x08AD03F4u) goto L_08AD03F4;
    return;
L_08AD03F4:
    ctx.set_gpr(31, 0x08AD03FCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 928u, 0x08ACF510u>(ctx, &aot_mem) && ctx.pc == 0x08AD03FCu) goto L_08AD03FC;
    return;
L_08AD03FC:
    ctx.set_gpr(31, 0x08AD0404u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 928u, 0x08ACF510u>(ctx, &aot_mem) && ctx.pc == 0x08AD0404u) goto L_08AD0404;
    return;
L_08AD0404:
    ctx.set_gpr(31, 0x08AD040Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(120));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 928u, 0x08ACF510u>(ctx, &aot_mem) && ctx.pc == 0x08AD040Cu) goto L_08AD040C;
    return;
L_08AD040C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD043C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08AD0444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD063C;
      }
      goto L_08AD0468;
    }
L_08AD0468:
    ctx.set_gpr(31, 0x08AD0470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0470u) goto L_08AD0470;
    return;
L_08AD0470:
    ctx.set_gpr(31, 0x08AD0478u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08AD0478u) goto L_08AD0478;
    return;
L_08AD0478:
    ctx.set_gpr(31, 0x08AD0480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0480u) goto L_08AD0480;
    return;
L_08AD0480:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(131));
    ctx.set_gpr(31, 0x08AD0490u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 887u, 0x08AB33C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0490u) goto L_08AD0490;
    return;
L_08AD0490:
    ctx.set_gpr(31, 0x08AD0498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0498u) goto L_08AD0498;
    return;
L_08AD0498:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1734));
    ctx.set_gpr(31, 0x08AD04A8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 887u, 0x08AB33C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD04A8u) goto L_08AD04A8;
    return;
L_08AD04A8:
    ctx.set_gpr(31, 0x08AD04B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD04B0u) goto L_08AD04B0;
    return;
L_08AD04B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1735));
    ctx.set_gpr(31, 0x08AD04C0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 887u, 0x08AB33C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD04C0u) goto L_08AD04C0;
    return;
L_08AD04C0:
    ctx.set_gpr(31, 0x08AD04C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AD04C8u) goto L_08AD04C8;
    return;
L_08AD04C8:
    ctx.set_gpr(31, 0x08AD04D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AD04D0u) goto L_08AD04D0;
    return;
L_08AD04D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(31, 0x08AD04DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD04DCu) goto L_08AD04DC;
    return;
L_08AD04DC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_08AD0510;
    }
    goto L_08AD04EC;
L_08AD04EC:
    ctx.set_gpr(31, 0x08AD04F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AD04F4u) goto L_08AD04F4;
    return;
L_08AD04F4:
    ctx.set_gpr(31, 0x08AD04FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AD04FCu) goto L_08AD04FC;
    return;
L_08AD04FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0508u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD0508u) goto L_08AD0508;
    return;
L_08AD0508:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AD0510;
L_08AD0510:
    ctx.set_gpr(31, 0x08AD0518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0518u) goto L_08AD0518;
    return;
L_08AD0518:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08AD0528u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0528u) goto L_08AD0528;
    return;
L_08AD0528:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0510;
      }
      goto L_08AD0538;
    }
L_08AD0538:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AD053C;
L_08AD053C:
    ctx.set_gpr(31, 0x08AD0544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0544u) goto L_08AD0544;
    return;
L_08AD0544:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08AD0554u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0554u) goto L_08AD0554;
    return;
L_08AD0554:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD053C;
      }
      goto L_08AD0564;
    }
L_08AD0564:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AD0568;
L_08AD0568:
    ctx.set_gpr(31, 0x08AD0570u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 45u, 0x08850228u>(ctx, &aot_mem) && ctx.pc == 0x08AD0570u) goto L_08AD0570;
    return;
L_08AD0570:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08AD057Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 778u, 0x0884EA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD057Cu) goto L_08AD057C;
    return;
L_08AD057C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD0568;
      }
      goto L_08AD0590;
    }
L_08AD0590:
    ctx.set_gpr(31, 0x08AD0598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AD0598u) goto L_08AD0598;
    return;
L_08AD0598:
    ctx.set_gpr(31, 0x08AD05A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AD05A0u) goto L_08AD05A0;
    return;
L_08AD05A0:
    ctx.set_gpr(31, 0x08AD05A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD05A8u) goto L_08AD05A8;
    return;
L_08AD05A8:
    ctx.set_gpr(31, 0x08AD05B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD05B0u) goto L_08AD05B0;
    return;
L_08AD05B0:
    ctx.set_gpr(31, 0x08AD05B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AD05B8u) goto L_08AD05B8;
    return;
L_08AD05B8:
    ctx.set_gpr(31, 0x08AD05C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 351u, 0x088496ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD05C0u) goto L_08AD05C0;
    return;
L_08AD05C0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AD05DCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD05DCu) goto L_08AD05DC;
    return;
L_08AD05DC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AD05F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD05F4u) goto L_08AD05F4;
    return;
L_08AD05F4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
        goto L_08AD0628;
    }
    goto L_08AD0604;
L_08AD0604:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD061C;
      }
      goto L_08AD060C;
    }
L_08AD060C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AD061Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD061Cu) goto L_08AD061C;
    return;
L_08AD061C:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD0628;
L_08AD0628:
    ctx.set_gpr(31, 0x08AD0630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 618u, 0x08852494u>(ctx, &aot_mem) && ctx.pc == 0x08AD0630u) goto L_08AD0630;
    return;
L_08AD0630:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23980)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_08AD063C;
L_08AD063C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0650:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AD06F0;
      }
      goto L_08AD06A4;
    }
L_08AD06A4:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-5596)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08AD06F0;
      }
      goto L_08AD06CC;
    }
L_08AD06CC:
    ctx.set_gpr(31, 0x08AD06D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD06D4u) goto L_08AD06D4;
    return;
L_08AD06D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1735));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD06E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD06E8u) goto L_08AD06E8;
    return;
L_08AD06E8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(0u));
    goto L_08AD06F0;
L_08AD06F0:
    ctx.set_gpr(31, 0x08AD06F8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AD243C;
L_08AD06F8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AD0718u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD0718u) goto L_08AD0718;
    return;
L_08AD0718:
    ctx.set_gpr(31, 0x08AD0720u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AD28F8;
L_08AD0720:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0738;
      }
      goto L_08AD072C;
    }
L_08AD072C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AD0738u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AD0EB4;
L_08AD0738:
    ctx.set_gpr(31, 0x08AD0740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AD0740u) goto L_08AD0740;
    return;
L_08AD0740:
    ctx.set_gpr(31, 0x08AD0748u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 915u, 0x08AAB1F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0748u) goto L_08AD0748;
    return;
L_08AD0748:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
        goto L_08AD078C;
    }
    goto L_08AD0750;
L_08AD0750:
    ctx.set_gpr(31, 0x08AD0758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0758u) goto L_08AD0758;
    return;
L_08AD0758:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0764u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0764u) goto L_08AD0764;
    return;
L_08AD0764:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0788;
      }
      goto L_08AD076C;
    }
L_08AD076C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0788;
      }
      goto L_08AD0778;
    }
L_08AD0778:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), ctx.gpr[3]);
    goto L_08AD0788;
L_08AD0788:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    goto L_08AD078C;
L_08AD078C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AD07A0;
    }
    goto L_08AD0794;
L_08AD0794:
    ctx.set_gpr(31, 0x08AD079Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AD3BC0;
L_08AD079C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD07A0;
L_08AD07A0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD07B0:
    // nop
    goto L_08AD07B8;
L_08AD07B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD08DC;
      }
      goto L_08AD07E4;
    }
L_08AD07E4:
    ctx.set_gpr(3, ctx.gpr[18] << 4u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(17, ctx.gpr[3] << 2u);
    goto L_08AD07F8;
L_08AD07F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
        goto L_08AD08CC;
    }
    goto L_08AD080C;
L_08AD080C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AD08A4;
      }
      goto L_08AD081C;
    }
L_08AD081C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AD08A4;
      }
      goto L_08AD0828;
    }
L_08AD0828:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
        goto L_08AD0848;
    }
    goto L_08AD0834;
L_08AD0834:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0844;
      }
      goto L_08AD083C;
    }
L_08AD083C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD08C8;
      }
      goto L_08AD0844;
    }
L_08AD0844:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    goto L_08AD0848;
L_08AD0848:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(31, 0x08AD085Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AD085Cu) goto L_08AD085C;
    return;
L_08AD085C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(31, 0x08AD0870u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AD0870u) goto L_08AD0870;
    return;
L_08AD0870:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6412));
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(104)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(108)));
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08AD089Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AD089Cu) goto L_08AD089C;
    return;
L_08AD089C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD08C8;
      }
      goto L_08AD08A4;
    }
L_08AD08A4:
    ctx.set_gpr(31, 0x08AD08ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD08ACu) goto L_08AD08AC;
    return;
L_08AD08AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08AD08C8u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AD08C8u) goto L_08AD08C8;
    return;
L_08AD08C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    goto L_08AD08CC;
L_08AD08CC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08AD07F8;
      }
      goto L_08AD08DC;
    }
L_08AD08DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD08F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD0978;
      }
      goto L_08AD091C;
    }
L_08AD091C:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[16] + 0u);
    goto L_08AD0924;
L_08AD0924:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08AD0930u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x08AD0930u) goto L_08AD0930;
    return;
L_08AD0930:
    ctx.set_gpr(31, 0x08AD0938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0938u) goto L_08AD0938;
    return;
L_08AD0938:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0944u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0944u) goto L_08AD0944;
    return;
L_08AD0944:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0954u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0954u) goto L_08AD0954;
    return;
L_08AD0954:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AD0960u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AD0960u) goto L_08AD0960;
    return;
L_08AD0960:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[19]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD0924;
      }
      goto L_08AD0978;
    }
L_08AD0978:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0994:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD0A44;
      }
      goto L_08AD09C0;
    }
L_08AD09C0:
    ctx.set_gpr(31, 0x08AD09C8u);
    // nop
    goto L_08AD08F8;
L_08AD09C8:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AD0A48;
    }
    goto L_08AD09D0;
L_08AD09D0:
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08AD09E8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x08AD09E8u) goto L_08AD09E8;
    return;
L_08AD09E8:
    ctx.set_gpr(31, 0x08AD09F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD09F0u) goto L_08AD09F0;
    return;
L_08AD09F0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD09FCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD09FCu) goto L_08AD09FC;
    return;
L_08AD09FC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0A0Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0A0Cu) goto L_08AD0A0C;
    return;
L_08AD0A0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AD0A18u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A18u) goto L_08AD0A18;
    return;
L_08AD0A18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD0A28u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 235u, 0x08850B38u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A28u) goto L_08AD0A28;
    return;
L_08AD0A28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x08AD0A38u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 259u, 0x08850C78u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A38u) goto L_08AD0A38;
    return;
L_08AD0A38:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AD0A44;
L_08AD0A44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AD0A48;
L_08AD0A48:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0A60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD0B48;
      }
      goto L_08AD0A7C;
    }
L_08AD0A7C:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(95)));
        goto L_08AD0B00;
    }
    goto L_08AD0A84;
L_08AD0A84:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(95)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AD0B4C;
    }
    goto L_08AD0A90;
L_08AD0A90:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08AD0A9Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x08AD0A9Cu) goto L_08AD0A9C;
    return;
L_08AD0A9C:
    ctx.set_gpr(31, 0x08AD0AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0AA4u) goto L_08AD0AA4;
    return;
L_08AD0AA4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0AB0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0AB0u) goto L_08AD0AB0;
    return;
L_08AD0AB0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0AC0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0AC0u) goto L_08AD0AC0;
    return;
L_08AD0AC0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AD0ACCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AD0ACCu) goto L_08AD0ACC;
    return;
L_08AD0ACC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(31, 0x08AD0ADCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 235u, 0x08850B38u>(ctx, &aot_mem) && ctx.pc == 0x08AD0ADCu) goto L_08AD0ADC;
    return;
L_08AD0ADC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x08AD0AECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 259u, 0x08850C78u>(ctx, &aot_mem) && ctx.pc == 0x08AD0AECu) goto L_08AD0AEC;
    return;
L_08AD0AEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), 0u);
      if (branch_taken) {
          goto L_08AD0B48;
      }
      goto L_08AD0B00;
    }
L_08AD0B00:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0B48;
      }
      goto L_08AD0B08;
    }
L_08AD0B08:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08AD0B14u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 234u, 0x08850B30u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B14u) goto L_08AD0B14;
    return;
L_08AD0B14:
    ctx.set_gpr(31, 0x08AD0B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0B1Cu) goto L_08AD0B1C;
    return;
L_08AD0B1C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0B28u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD0B28u) goto L_08AD0B28;
    return;
L_08AD0B28:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0B38u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B38u) goto L_08AD0B38;
    return;
L_08AD0B38:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08AD0B44u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08AD0B44u) goto L_08AD0B44;
    return;
L_08AD0B44:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(0u));
    goto L_08AD0B48;
L_08AD0B48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD0B4C;
L_08AD0B4C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0B5C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) || ctx.fpr[1] < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
        goto L_08AD0BFC;
    }
    goto L_08AD0B90;
L_08AD0B90:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(152)));
        goto L_08AD0BE8;
    }
    goto L_08AD0BA8;
L_08AD0BA8:
    ctx.fpr[1] = ctx.fpr[3] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, 17520u << 16u);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AD0C0C;
    }
    goto L_08AD0BD8;
L_08AD0BD8:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AD0C08;
      }
      goto L_08AD0BE8;
    }
L_08AD0BE8:
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD0C08;
      }
      goto L_08AD0BFC;
    }
L_08AD0BFC:
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD0C08;
L_08AD0C08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AD0C0C;
L_08AD0C0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0C14:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(140)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, 17392u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_gpr(2, 17520u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AD0C70;
    }
    goto L_08AD0C60;
L_08AD0C60:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AD0C70;
L_08AD0C70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0C78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AD0C8Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AD0B5C;
L_08AD0C8C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0CC0;
      }
      goto L_08AD0C98;
    }
L_08AD0C98:
    ctx.set_gpr(31, 0x08AD0CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CA0u) goto L_08AD0CA0;
    return;
L_08AD0CA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AD0CB8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0CB8u) goto L_08AD0CB8;
    return;
L_08AD0CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AD0CE4;
      }
      goto L_08AD0CC0;
    }
L_08AD0CC0:
    ctx.set_gpr(31, 0x08AD0CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0CC8u) goto L_08AD0CC8;
    return;
L_08AD0CC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AD0CE0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0CE0u) goto L_08AD0CE0;
    return;
L_08AD0CE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD0CE4;
L_08AD0CE4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0CF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AD0D08u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AD0C14;
L_08AD0D08:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0D3C;
      }
      goto L_08AD0D14;
    }
L_08AD0D14:
    ctx.set_gpr(31, 0x08AD0D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D1Cu) goto L_08AD0D1C;
    return;
L_08AD0D1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AD0D34u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0D34u) goto L_08AD0D34;
    return;
L_08AD0D34:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AD0D60;
      }
      goto L_08AD0D3C;
    }
L_08AD0D3C:
    ctx.set_gpr(31, 0x08AD0D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0D44u) goto L_08AD0D44;
    return;
L_08AD0D44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AD0D5Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0D5Cu) goto L_08AD0D5C;
    return;
L_08AD0D5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD0D60;
L_08AD0D60:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0D70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08AD0D94u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    goto L_08AD25F8;
L_08AD0D94:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0DB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD0DE4;
      }
      goto L_08AD0DCC;
    }
L_08AD0DCC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(31, 0x08AD0DDCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AD0A60;
L_08AD0DDC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD0DF8;
      }
      goto L_08AD0DE4;
    }
L_08AD0DE4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(31, 0x08AD0DF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD0A60;
L_08AD0DF4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    goto L_08AD0DF8;
L_08AD0DF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0E14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AD0E50u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD0E50u) goto L_08AD0E50;
    return;
L_08AD0E50:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0E70:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0E94:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD0EB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD101C;
      }
      goto L_08AD0EE0;
    }
L_08AD0EE0:
    ctx.set_gpr(31, 0x08AD0EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD0EE8u) goto L_08AD0EE8;
    return;
L_08AD0EE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0EF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AD0EF4u) goto L_08AD0EF4;
    return;
L_08AD0EF4:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08AD0F48;
    }
    goto L_08AD0EFC;
L_08AD0EFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD0F44;
      }
      goto L_08AD0F0C;
    }
L_08AD0F0C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AD0F30u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0F30u) goto L_08AD0F30;
    return;
L_08AD0F30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(131));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD0F44u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0F44u) goto L_08AD0F44;
    return;
L_08AD0F44:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08AD0F48;
L_08AD0F48:
    ctx.set_gpr(2, 16512u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(31, 0x08AD0F68u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0F68u) goto L_08AD0F68;
    return;
L_08AD0F68:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AD0F7Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0F7Cu) goto L_08AD0F7C;
    return;
L_08AD0F7C:
    ctx.set_gpr(5, 16384u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0F90u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0F90u) goto L_08AD0F90;
    return;
L_08AD0F90:
    ctx.set_gpr(5, 16384u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0FA4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FA4u) goto L_08AD0FA4;
    return;
L_08AD0FA4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0FB8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FB8u) goto L_08AD0FB8;
    return;
L_08AD0FB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD0FC4u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AD0FC4u) goto L_08AD0FC4;
    return;
L_08AD0FC4:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD0FE0;
      }
      goto L_08AD0FD8;
    }
L_08AD0FD8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), 0u);
    goto L_08AD0FE0;
L_08AD0FE0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(31, 0x08AD0FF0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_08AD1648;
L_08AD0FF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08AD0FFCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 270u, 0x0885934Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD0FFCu) goto L_08AD0FFC;
    return;
L_08AD0FFC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08AD1014u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 628u, 0x08857210u>(ctx, &aot_mem) && ctx.pc == 0x08AD1014u) goto L_08AD1014;
    return;
L_08AD1014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1084;
      }
      goto L_08AD101C;
    }
L_08AD101C:
    ctx.set_gpr(31, 0x08AD1024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1024u) goto L_08AD1024;
    return;
L_08AD1024:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD1030u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AD1030u) goto L_08AD1030;
    return;
L_08AD1030:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), 0u);
        goto L_08AD107C;
    }
    goto L_08AD1038;
L_08AD1038:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(3, 49024u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), 0u);
    ctx.set_gpr(31, 0x08AD1060u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1060u) goto L_08AD1060;
    return;
L_08AD1060:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(131));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD1074u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1074u) goto L_08AD1074;
    return;
L_08AD1074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1084;
      }
      goto L_08AD107C;
    }
L_08AD107C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), 0u);
    goto L_08AD1084;
L_08AD1084:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(31, 0x08AD1094u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08AD1648;
L_08AD1094:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08AD10A0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 270u, 0x0885934Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD10A0u) goto L_08AD10A0;
    return;
L_08AD10A0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 16416u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08AD10D0;
      }
      goto L_08AD10BC;
    }
L_08AD10BC:
    ctx.set_gpr(2, 16788u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD10D0;
L_08AD10D0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 49536u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD1100;
      }
      goto L_08AD10EC;
    }
L_08AD10EC:
    ctx.set_gpr(2, 16788u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD1100;
L_08AD1100:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1170;
      }
      goto L_08AD1108;
    }
L_08AD1108:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(31, 0x08AD1120u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 628u, 0x08857210u>(ctx, &aot_mem) && ctx.pc == 0x08AD1120u) goto L_08AD1120;
    return;
L_08AD1120:
    ctx.set_gpr(31, 0x08AD1128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1128u) goto L_08AD1128;
    return;
L_08AD1128:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD1134u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1134u) goto L_08AD1134;
    return;
L_08AD1134:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1148;
      }
      goto L_08AD113C;
    }
L_08AD113C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD1148u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AD1774;
L_08AD1148:
    ctx.set_gpr(31, 0x08AD1150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1150u) goto L_08AD1150;
    return;
L_08AD1150:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD115Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD115Cu) goto L_08AD115C;
    return;
L_08AD115C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1170;
      }
      goto L_08AD1164;
    }
L_08AD1164:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD1170u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD1774;
L_08AD1170:
    ctx.set_gpr(31, 0x08AD1178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1178u) goto L_08AD1178;
    return;
L_08AD1178:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD1184u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD1184u) goto L_08AD1184;
    return;
L_08AD1184:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
        goto L_08AD132C;
    }
    goto L_08AD118C;
L_08AD118C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD1198u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AD1664;
L_08AD1198:
    ctx.set_gpr(31, 0x08AD11A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD11A0u) goto L_08AD11A0;
    return;
L_08AD11A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD11ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD11ACu) goto L_08AD11AC;
    return;
L_08AD11AC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AD1224;
    }
    goto L_08AD11B4;
L_08AD11B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(244), ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, 15907u << 16u);
        goto L_08AD11EC;
    }
    goto L_08AD11D4;
L_08AD11D4:
    ctx.set_gpr(2, 15779u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 55050u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD11FC;
      }
      goto L_08AD11EC;
    }
L_08AD11EC:
    ctx.set_gpr(2, ctx.gpr[2] | 55050u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD11FC;
L_08AD11FC:
    ctx.set_gpr(2, 16076u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD1388;
      }
      goto L_08AD121C;
    }
L_08AD121C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1388;
      }
      goto L_08AD1224;
    }
L_08AD1224:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(244), ctx.gpr[2]);
    ctx.set_gpr(2, 15877u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 7864u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
        goto L_08AD12AC;
    }
    goto L_08AD1248;
L_08AD1248:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, 15861u << 16u);
        goto L_08AD1274;
    }
    goto L_08AD125C;
L_08AD125C:
    ctx.set_gpr(2, 15651u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 55050u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1284;
      }
      goto L_08AD1274;
    }
L_08AD1274:
    ctx.set_gpr(2, ctx.gpr[2] | 49807u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD1284;
L_08AD1284:
    ctx.set_gpr(2, 15877u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 7864u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD12A8;
      }
      goto L_08AD12A4;
    }
L_08AD12A4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD12A8;
L_08AD12A8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    goto L_08AD12AC;
L_08AD12AC:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 16076u << 16u);
        goto L_08AD1308;
    }
    goto L_08AD12C0;
L_08AD12C0:
    ctx.set_gpr(2, 15877u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 7864u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[1])) || ctx.fpr[2] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD1388;
      }
      goto L_08AD12E0;
    }
L_08AD12E0:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1388;
      }
      goto L_08AD1300;
    }
L_08AD1300:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08AD1388;
      }
      goto L_08AD1308;
    }
L_08AD1308:
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD1388;
      }
      goto L_08AD1324;
    }
L_08AD1324:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1388;
      }
      goto L_08AD132C;
    }
L_08AD132C:
    ctx.fpr[2] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD1388;
      }
      goto L_08AD1340;
    }
L_08AD1340:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) || ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD1388;
      }
      goto L_08AD1354;
    }
L_08AD1354:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 15395u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 55050u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08AD1388;
      }
      goto L_08AD1380;
    }
L_08AD1380:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(244), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_08AD1388;
L_08AD1388:
    ctx.set_gpr(31, 0x08AD1390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1390u) goto L_08AD1390;
    return;
L_08AD1390:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD139Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD139Cu) goto L_08AD139C;
    return;
L_08AD139C:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
        goto L_08AD1544;
    }
    goto L_08AD13A4;
L_08AD13A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD13B0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD1664;
L_08AD13B0:
    ctx.set_gpr(31, 0x08AD13B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD13B8u) goto L_08AD13B8;
    return;
L_08AD13B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD13C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD13C4u) goto L_08AD13C4;
    return;
L_08AD13C4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AD143C;
    }
    goto L_08AD13CC;
L_08AD13CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(244), ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 15907u << 16u);
        goto L_08AD1404;
    }
    goto L_08AD13EC;
L_08AD13EC:
    ctx.set_gpr(2, 15779u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 55050u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1414;
      }
      goto L_08AD1404;
    }
L_08AD1404:
    ctx.set_gpr(2, ctx.gpr[2] | 55050u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD1414;
L_08AD1414:
    ctx.set_gpr(2, 48844u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD15A0;
      }
      goto L_08AD1434;
    }
L_08AD1434:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD15A0;
      }
      goto L_08AD143C;
    }
L_08AD143C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(244), ctx.gpr[2]);
    ctx.set_gpr(2, 48645u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 7864u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
        goto L_08AD14C4;
    }
    goto L_08AD1460;
L_08AD1460:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 15861u << 16u);
        goto L_08AD148C;
    }
    goto L_08AD1474;
L_08AD1474:
    ctx.set_gpr(2, 15651u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 55050u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD149C;
      }
      goto L_08AD148C;
    }
L_08AD148C:
    ctx.set_gpr(2, ctx.gpr[2] | 49807u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD149C;
L_08AD149C:
    ctx.set_gpr(2, 48645u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 7864u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD14C0;
      }
      goto L_08AD14BC;
    }
L_08AD14BC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD14C0;
L_08AD14C0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(200)));
    goto L_08AD14C4;
L_08AD14C4:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 48844u << 16u);
        goto L_08AD1520;
    }
    goto L_08AD14D8;
L_08AD14D8:
    ctx.set_gpr(2, 48645u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 7864u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD15A0;
      }
      goto L_08AD14F8;
    }
L_08AD14F8:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD15A0;
      }
      goto L_08AD1518;
    }
L_08AD1518:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08AD15A0;
      }
      goto L_08AD1520;
    }
L_08AD1520:
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD15A0;
      }
      goto L_08AD153C;
    }
L_08AD153C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD15A0;
      }
      goto L_08AD1544;
    }
L_08AD1544:
    ctx.fpr[2] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD15A0;
      }
      goto L_08AD1558;
    }
L_08AD1558:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD15A0;
      }
      goto L_08AD156C;
    }
L_08AD156C:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 48163u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 55050u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08AD15A0;
      }
      goto L_08AD1598;
    }
L_08AD1598:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(244), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_08AD15A0;
L_08AD15A0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(31, 0x08AD15B8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(13));
    goto L_08AD1618;
L_08AD15B8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(136)));
        goto L_08AD15E4;
    }
    goto L_08AD15C4;
L_08AD15C4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 17543u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(136)));
    goto L_08AD15E4;
L_08AD15E4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(31, 0x08AD15F8u);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 627u, 0x08857200u>(ctx, &aot_mem) && ctx.pc == 0x08AD15F8u) goto L_08AD15F8;
    return;
L_08AD15F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD1618:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[13];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[14];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD1648:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD1664:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD1760;
      }
      goto L_08AD1684;
    }
L_08AD1684:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(31, 0x08AD1694u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08AD1648;
L_08AD1694:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 16600u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
      if (branch_taken) {
          goto L_08AD171C;
      }
      goto L_08AD16C8;
    }
L_08AD16C8:
    if (ctx.gpr[17] == 0u) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
        goto L_08AD16D8;
    }
    goto L_08AD16D0;
L_08AD16D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AD1764;
      }
      goto L_08AD16D8;
    }
L_08AD16D8:
    ctx.set_gpr(3, 16800u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, 16448u << 16u);
    ctx.set_gpr(3, 16928u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD1760;
      }
      goto L_08AD1714;
    }
L_08AD1714:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1760;
      }
      goto L_08AD171C;
    }
L_08AD171C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(3, 16800u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(4, 16448u << 16u);
    ctx.set_gpr(3, 49696u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD1760;
      }
      goto L_08AD175C;
    }
L_08AD175C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD1760;
L_08AD1760:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD1764;
L_08AD1764:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD1774:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD1820;
      }
      goto L_08AD1794;
    }
L_08AD1794:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(31, 0x08AD17A4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08AD1648;
L_08AD17A4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 16600u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
      if (branch_taken) {
          goto L_08AD1804;
      }
      goto L_08AD17D8;
    }
L_08AD17D8:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(3, 16928u << 16u);
        goto L_08AD17E8;
    }
    goto L_08AD17E0;
L_08AD17E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AD1824;
      }
      goto L_08AD17E8;
    }
L_08AD17E8:
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1820;
      }
      goto L_08AD1804;
    }
L_08AD1804:
    ctx.set_gpr(3, 49696u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16448u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD1820;
L_08AD1820:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD1824;
L_08AD1824:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD1834:
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
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(31, 0x08AD1878u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    goto L_08AD2408;
L_08AD1878:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD188Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_08AD2408;
L_08AD188C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AD1898u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AD1898u) goto L_08AD1898;
    return;
L_08AD1898:
    ctx.set_gpr(31, 0x08AD18A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AD18A0u) goto L_08AD18A0;
    return;
L_08AD18A0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AD18C8u);
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD18C8u) goto L_08AD18C8;
    return;
L_08AD18C8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
      if (branch_taken) {
          goto L_08AD2268;
      }
      goto L_08AD18D8;
    }
L_08AD18D8:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08AD18DC;
L_08AD18DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08AD18E8u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[18]);
    goto L_08AD03A8;
L_08AD18E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD18FCu);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    goto L_08AD2408;
L_08AD18FC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AD1908u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1908u) goto L_08AD1908;
    return;
L_08AD1908:
    ctx.set_gpr(4, 16527u << 16u);
    ctx.set_gpr(7, ctx.gpr[4] | 16384u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AD1920u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1920u) goto L_08AD1920;
    return;
L_08AD1920:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD192Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AD192Cu) goto L_08AD192C;
    return;
L_08AD192C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD1950u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AD2408;
L_08AD1950:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(64))))));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AD224C;
      }
      goto L_08AD1974;
    }
L_08AD1974:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5512));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD1990:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD19A4u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    goto L_08AD2408;
L_08AD19A4:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD19C0u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AD2408;
L_08AD19C0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(16, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AD19D4u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08AD19D4u) goto L_08AD19D4;
    return;
L_08AD19D4:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(31, 0x08AD19F0u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AD19F0u) goto L_08AD19F0;
    return;
L_08AD19F0:
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(64))))));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08AD1A2C;
    }
    goto L_08AD1A0C;
L_08AD1A0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD1A20u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    goto L_08AD2408;
L_08AD1A20:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08AD1A2C;
L_08AD1A2C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD1A3Cu);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    goto L_08AD2408;
L_08AD1A3C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD1A58u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AD2408;
L_08AD1A58:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD1A74u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AD2408;
L_08AD1A74:
    ctx.set_gpr(21, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD1A90u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AD2408;
L_08AD1A90:
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD1AACu);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AD2408;
L_08AD1AAC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AD1AC8;
      }
      goto L_08AD1ABC;
    }
L_08AD1ABC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_08AD1AE0;
      }
      goto L_08AD1AC8;
    }
L_08AD1AC8:
    ctx.set_gpr(3, ctx.gpr[16] >> 1u);
    ctx.set_gpr(2, ctx.gpr[16] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08AD1AE0;
L_08AD1AE0:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1B08;
      }
      goto L_08AD1AFC;
    }
L_08AD1AFC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_08AD1B20;
      }
      goto L_08AD1B08;
    }
L_08AD1B08:
    ctx.set_gpr(3, ctx.gpr[21] >> 1u);
    ctx.set_gpr(2, ctx.gpr[21] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08AD1B20;
L_08AD1B20:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1B48;
      }
      goto L_08AD1B3C;
    }
L_08AD1B3C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_08AD1B60;
      }
      goto L_08AD1B48;
    }
L_08AD1B48:
    ctx.set_gpr(3, ctx.gpr[22] >> 1u);
    ctx.set_gpr(2, ctx.gpr[22] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[2];
    goto L_08AD1B60;
L_08AD1B60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[2] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08AD1BA8u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 650u, 0x088526A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1BA8u) goto L_08AD1BA8;
    return;
L_08AD1BA8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(3, ctx.lo);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08AD1BDCu);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1BDCu) goto L_08AD1BDC;
    return;
L_08AD1BDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 16672u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08AD1C0Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1C0Cu) goto L_08AD1C0C;
    return;
L_08AD1C0C:
    ctx.set_gpr(5, 16384u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD1C20u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD1C20u) goto L_08AD1C20;
    return;
L_08AD1C20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD1C2Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AD1C2Cu) goto L_08AD1C2C;
    return;
L_08AD1C2C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1C94;
      }
      goto L_08AD1C40;
    }
L_08AD1C40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[30] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
        goto L_08AD1C84;
    }
    goto L_08AD1C4C;
L_08AD1C4C:
    if (ctx.gpr[30] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
        goto L_08AD1C5C;
    }
    goto L_08AD1C54;
L_08AD1C54:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08AD1CA8;
      }
      goto L_08AD1C5C;
    }
L_08AD1C5C:
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1CCC;
      }
      goto L_08AD1C84;
    }
L_08AD1C84:
    ctx.set_gpr(3, 17160u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD1CCC;
      }
      goto L_08AD1C94;
    }
L_08AD1C94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, 17280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD1CCC;
      }
      goto L_08AD1CA8;
    }
L_08AD1CA8:
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD1CCC;
L_08AD1CCC:
    if (static_cast<std::int32_t>(ctx.gpr[17]) >= 0) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
        goto L_08AD1D1C;
    }
    goto L_08AD1CD4;
L_08AD1CD4:
    ctx.set_gpr(31, 0x08AD1CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08AD1CDCu) goto L_08AD1CDC;
    return;
L_08AD1CDC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(136));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[18]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AD1D04u);
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[2]);
    goto L_08AD23B0;
L_08AD1D04:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1D80;
      }
      goto L_08AD1D1C;
    }
L_08AD1D1C:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD1D54;
      }
      goto L_08AD1D24;
    }
L_08AD1D24:
    ctx.set_gpr(31, 0x08AD1D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1D2Cu) goto L_08AD1D2C;
    return;
L_08AD1D2C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1D80;
      }
      goto L_08AD1D54;
    }
L_08AD1D54:
    ctx.set_gpr(31, 0x08AD1D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD1D5Cu) goto L_08AD1D5C;
    return;
L_08AD1D5C:
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(-10));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD1D80;
L_08AD1D80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
        goto L_08AD1DD0;
    }
    goto L_08AD1D94;
L_08AD1D94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AD1DA4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1DA4u) goto L_08AD1DA4;
    return;
L_08AD1DA4:
    ctx.set_gpr(4, 16527u << 16u);
    ctx.set_gpr(7, ctx.gpr[4] | 16384u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AD1DBCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD1DBCu) goto L_08AD1DBC;
    return;
L_08AD1DBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD1DC8u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AD1DC8u) goto L_08AD1DC8;
    return;
L_08AD1DC8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    goto L_08AD1DD0;
L_08AD1DD0:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08AD1DE0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(72));
    goto L_08AD2388;
L_08AD1DE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[18]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AD1E10u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(88));
    goto L_08AD2388;
L_08AD1E10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08AD1E24u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(104));
    goto L_08AD2388;
L_08AD1E24:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08AD2250;
      }
      goto L_08AD1E2C;
    }
L_08AD1E2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD1E40u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    goto L_08AD2408;
L_08AD1E40:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD1E5Cu);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AD2408;
L_08AD1E5C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD1E78u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AD2408;
L_08AD1E78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AD1EB0;
      }
      goto L_08AD1E94;
    }
L_08AD1E94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD1EA8u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    goto L_08AD2408;
L_08AD1EA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_08AD1EB0;
L_08AD1EB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AD1EC4u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    goto L_08AD2408;
L_08AD1EC4:
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(31, 0x08AD1ED0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1ED0u) goto L_08AD1ED0;
    return;
L_08AD1ED0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AD1EE0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    goto L_08AD2310;
L_08AD1EE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(31, 0x08AD1EF0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1EF0u) goto L_08AD1EF0;
    return;
L_08AD1EF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AD1F00u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    goto L_08AD2298;
L_08AD1F00:
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 16672u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AD1F24u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD1F24u) goto L_08AD1F24;
    return;
L_08AD1F24:
    ctx.set_gpr(5, 16384u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD1F38u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 485u, 0x0880E5DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD1F38u) goto L_08AD1F38;
    return;
L_08AD1F38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD1F44u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AD1F44u) goto L_08AD1F44;
    return;
L_08AD1F44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1FAC;
      }
      goto L_08AD1F58;
    }
L_08AD1F58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
        goto L_08AD1F9C;
    }
    goto L_08AD1F64;
L_08AD1F64:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
        goto L_08AD1F74;
    }
    goto L_08AD1F6C;
L_08AD1F6C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08AD1FC0;
      }
      goto L_08AD1F74;
    }
L_08AD1F74:
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD1FE4;
      }
      goto L_08AD1F9C;
    }
L_08AD1F9C:
    ctx.set_gpr(3, 17160u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD1FE4;
      }
      goto L_08AD1FAC;
    }
L_08AD1FAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, 17280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD1FE4;
      }
      goto L_08AD1FC0;
    }
L_08AD1FC0:
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD1FE4;
L_08AD1FE4:
    if (static_cast<std::int32_t>(ctx.gpr[16]) >= 0) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
        goto L_08AD2034;
    }
    goto L_08AD1FEC;
L_08AD1FEC:
    ctx.set_gpr(31, 0x08AD1FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08AD1FF4u) goto L_08AD1FF4;
    return;
L_08AD1FF4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(136));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[18]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AD201Cu);
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[2]);
    goto L_08AD23B0;
L_08AD201C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD2098;
      }
      goto L_08AD2034;
    }
L_08AD2034:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD206C;
      }
      goto L_08AD203C;
    }
L_08AD203C:
    ctx.set_gpr(31, 0x08AD2044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD2044u) goto L_08AD2044;
    return;
L_08AD2044:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD2098;
      }
      goto L_08AD206C;
    }
L_08AD206C:
    ctx.set_gpr(31, 0x08AD2074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 651u, 0x088526C4u>(ctx, &aot_mem) && ctx.pc == 0x08AD2074u) goto L_08AD2074;
    return;
L_08AD2074:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(-10));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(56));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD2098;
L_08AD2098:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
        goto L_08AD20F8;
    }
    goto L_08AD20BC;
L_08AD20BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AD20CCu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD20CCu) goto L_08AD20CC;
    return;
L_08AD20CC:
    ctx.set_gpr(4, 16527u << 16u);
    ctx.set_gpr(7, ctx.gpr[4] | 16384u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AD20E4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD20E4u) goto L_08AD20E4;
    return;
L_08AD20E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD20F0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AD20F0u) goto L_08AD20F0;
    return;
L_08AD20F0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    goto L_08AD20F8;
L_08AD20F8:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08AD2108u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(72));
    goto L_08AD2388;
L_08AD2108:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[18]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AD2138u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(88));
    goto L_08AD2388;
L_08AD2138:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08AD214Cu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(104));
    goto L_08AD2388;
L_08AD214C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD224C;
      }
      goto L_08AD2154;
    }
L_08AD2154:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD2168u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    goto L_08AD2408;
L_08AD2168:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD218Cu);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AD2408;
L_08AD218C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08AD219Cu);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD219Cu) goto L_08AD219C;
    return;
L_08AD219C:
    ctx.set_gpr(4, 16527u << 16u);
    ctx.set_gpr(7, ctx.gpr[4] | 16384u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AD21B4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD21B4u) goto L_08AD21B4;
    return;
L_08AD21B4:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AD21C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AD21C0u) goto L_08AD21C0;
    return;
L_08AD21C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD224C;
      }
      goto L_08AD21D0;
    }
L_08AD21D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD21E4u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    goto L_08AD2408;
L_08AD21E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD224C;
      }
      goto L_08AD21F8;
    }
L_08AD21F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD220Cu);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    goto L_08AD2408;
L_08AD220C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD224C;
      }
      goto L_08AD2220;
    }
L_08AD2220:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AD2234u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    goto L_08AD2408;
L_08AD2234:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD224C;
L_08AD224C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08AD2250;
L_08AD2250:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08AD18DC;
      }
      goto L_08AD2268;
    }
L_08AD2268:
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
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2298:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13100)));
    goto L_08AD22C8;
L_08AD22C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1112));
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13325)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13326)));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2148)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2310:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13100)));
    goto L_08AD2340;
L_08AD2340:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1112));
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13325)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13326)));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2144)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2388:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD23B0:
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
          goto L_08AD23F0;
      }
      goto L_08AD23D4;
    }
L_08AD23D4:
    ctx.set_gpr(31, 0x08AD23DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 157u, 0x0885C91Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD23DCu) goto L_08AD23DC;
    return;
L_08AD23DC:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08AD23F0;
L_08AD23F0:
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
L_08AD2408:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD2434;
      }
      goto L_08AD2414;
    }
L_08AD2414:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AD2418;
L_08AD2418:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD2428;
      }
      goto L_08AD2424;
    }
L_08AD2424:
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    goto L_08AD2428;
L_08AD2428:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[4]);
        goto L_08AD2418;
    }
    goto L_08AD2434;
L_08AD2434:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD243C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD24E4;
      }
      goto L_08AD2468;
    }
L_08AD2468:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD2480;
L_08AD2480:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
        goto L_08AD24E8;
    }
    goto L_08AD24A0;
L_08AD24A0:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(140)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
        goto L_08AD24D4;
    }
    goto L_08AD24CC;
L_08AD24CC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    goto L_08AD24D4;
L_08AD24D4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08AD2480;
      }
      goto L_08AD24E4;
    }
L_08AD24E4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    goto L_08AD24E8;
L_08AD24E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AD2570;
    }
    goto L_08AD24F8;
L_08AD24F8:
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    goto L_08AD250C;
L_08AD250C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(157)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
        goto L_08AD255C;
    }
    goto L_08AD2520;
L_08AD2520:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(152)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6300));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(64))))));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08AD2558u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD2558u) goto L_08AD2558;
    return;
L_08AD2558:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    goto L_08AD255C;
L_08AD255C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08AD250C;
      }
      goto L_08AD256C;
    }
L_08AD256C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AD2570;
L_08AD2570:
    ctx.set_gpr(31, 0x08AD2578u);
    // nop
    goto L_08AD2598;
L_08AD2578:
    ctx.set_gpr(31, 0x08AD2580u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AD2B8C;
L_08AD2580:
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
L_08AD2598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[6] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(157)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AD25F0;
    }
    goto L_08AD25CC;
L_08AD25CC:
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD25EC;
      }
      goto L_08AD25E4;
    }
L_08AD25E4:
    ctx.set_gpr(31, 0x08AD25ECu);
    // nop
    goto L_08AD2598;
L_08AD25EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD25F0;
L_08AD25F0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD25F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD2744;
      }
      goto L_08AD2624;
    }
L_08AD2624:
    ctx.set_gpr(31, 0x08AD262Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD262Cu) goto L_08AD262C;
    return;
L_08AD262C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17056u << 16u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AD2644u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2644u) goto L_08AD2644;
    return;
L_08AD2644:
    ctx.set_gpr(31, 0x08AD264Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD264Cu) goto L_08AD264C;
    return;
L_08AD264C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08AD2664u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD2664u) goto L_08AD2664;
    return;
L_08AD2664:
    ctx.set_gpr(31, 0x08AD266Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD266Cu) goto L_08AD266C;
    return;
L_08AD266C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD2690u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD2690u) goto L_08AD2690;
    return;
L_08AD2690:
    ctx.set_gpr(31, 0x08AD2698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD2698u) goto L_08AD2698;
    return;
L_08AD2698:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AD26ACu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD26ACu) goto L_08AD26AC;
    return;
L_08AD26AC:
    ctx.set_gpr(31, 0x08AD26B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD26B4u) goto L_08AD26B4;
    return;
L_08AD26B4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AD26D8u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD26D8u) goto L_08AD26D8;
    return;
L_08AD26D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08AD2730;
      }
      goto L_08AD26E4;
    }
L_08AD26E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
        goto L_08AD2734;
    }
    goto L_08AD26F0;
L_08AD26F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD2724;
      }
      goto L_08AD26FC;
    }
L_08AD26FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(5, 0u + 0u);
        goto L_08AD2734;
    }
    goto L_08AD2708;
L_08AD2708:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2718;
      }
      goto L_08AD2710;
    }
L_08AD2710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2734;
      }
      goto L_08AD2718;
    }
L_08AD2718:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2734;
      }
      goto L_08AD2724;
    }
L_08AD2724:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2734;
      }
      goto L_08AD2730;
    }
L_08AD2730:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08AD2734;
L_08AD2734:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AD2740u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD0994;
L_08AD2740:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    goto L_08AD2744;
L_08AD2744:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2760:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(263), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(262), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(267), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(266), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(268), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(269), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(271), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(270), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(272), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(273), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(275), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(274), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(279), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(278), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(280), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(281), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(283), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(282), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(284), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(285), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(287), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(286), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(288), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(289), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(291), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(290), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(292), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(293), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(295), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(294), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(297), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(299), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(298), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(301), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(303), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(302), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(307), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(306), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(311), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(310), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD283C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AD2880u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD2880u) goto L_08AD2880;
    return;
L_08AD2880:
    ctx.set_gpr(16, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(260))))));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(31, 0x08AD289Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 909u, 0x08ACF358u>(ctx, &aot_mem) && ctx.pc == 0x08AD289Cu) goto L_08AD289C;
    return;
L_08AD289C:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(261))))));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(31, 0x08AD28B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 909u, 0x08ACF358u>(ctx, &aot_mem) && ctx.pc == 0x08AD28B4u) goto L_08AD28B4;
    return;
L_08AD28B4:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(263))))));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(31, 0x08AD28CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 909u, 0x08ACF358u>(ctx, &aot_mem) && ctx.pc == 0x08AD28CCu) goto L_08AD28CC;
    return;
L_08AD28CC:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(262))))));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(31, 0x08AD28E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 909u, 0x08ACF358u>(ctx, &aot_mem) && ctx.pc == 0x08AD28E4u) goto L_08AD28E4;
    return;
L_08AD28E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD28F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AD290Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08AD2ABC;
L_08AD290C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AD2924;
    }
    goto L_08AD2918;
L_08AD2918:
    ctx.set_gpr(31, 0x08AD2920u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD2930;
L_08AD2920:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD2924;
L_08AD2924:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2930:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AD2944u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08AD2944u) goto L_08AD2944;
    return;
L_08AD2944:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AD2AA4;
      }
      goto L_08AD2954;
    }
L_08AD2954:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(5, 0u + 0u);
        goto L_08AD2A68;
    }
    goto L_08AD2960;
L_08AD2960:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.set_gpr(5, 0u + 0u);
        goto L_08AD2A24;
    }
    goto L_08AD296C;
L_08AD296C:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(5, 0u + 0u);
        goto L_08AD297C;
    }
    goto L_08AD2974;
L_08AD2974:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
      if (branch_taken) {
          goto L_08AD2AA8;
      }
      goto L_08AD297C;
    }
L_08AD297C:
    ctx.set_gpr(31, 0x08AD2984u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    goto L_08AD23B0;
L_08AD2984:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AA4;
      }
      goto L_08AD2990;
    }
L_08AD2990:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5476));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD29AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AD29B8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AD283C;
L_08AD29B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AA4;
      }
      goto L_08AD29C0;
    }
L_08AD29C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AD29CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD283C;
L_08AD29CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AA4;
      }
      goto L_08AD29D4;
    }
L_08AD29D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AD29E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    goto L_08AD283C;
L_08AD29E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AA4;
      }
      goto L_08AD29E8;
    }
L_08AD29E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AD29F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    goto L_08AD283C;
L_08AD29F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AA4;
      }
      goto L_08AD29FC;
    }
L_08AD29FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AD2A08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    goto L_08AD283C;
L_08AD2A08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AA4;
      }
      goto L_08AD2A10;
    }
L_08AD2A10:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AD2A1Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    goto L_08AD283C;
L_08AD2A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AA4;
      }
      goto L_08AD2A24;
    }
L_08AD2A24:
    ctx.set_gpr(31, 0x08AD2A2Cu);
    // nop
    goto L_08AD23B0;
L_08AD2A2C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AD2A58;
    }
    goto L_08AD2A38;
L_08AD2A38:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AD2A48;
    }
    goto L_08AD2A40;
L_08AD2A40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AA4;
      }
      goto L_08AD2A48;
    }
L_08AD2A48:
    ctx.set_gpr(31, 0x08AD2A50u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    goto L_08AD283C;
L_08AD2A50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AA4;
      }
      goto L_08AD2A58;
    }
L_08AD2A58:
    ctx.set_gpr(31, 0x08AD2A60u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    goto L_08AD283C;
L_08AD2A60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AA4;
      }
      goto L_08AD2A68;
    }
L_08AD2A68:
    ctx.set_gpr(31, 0x08AD2A70u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD23B0;
L_08AD2A70:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AD2A9C;
    }
    goto L_08AD2A7C;
L_08AD2A7C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AD2A8C;
    }
    goto L_08AD2A84;
L_08AD2A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AA4;
      }
      goto L_08AD2A8C;
    }
L_08AD2A8C:
    ctx.set_gpr(31, 0x08AD2A94u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    goto L_08AD283C;
L_08AD2A94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2AA4;
      }
      goto L_08AD2A9C;
    }
L_08AD2A9C:
    ctx.set_gpr(31, 0x08AD2AA4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    goto L_08AD283C;
L_08AD2AA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    goto L_08AD2AA8;
L_08AD2AA8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2ABC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AD2AD0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08AD2AD0u) goto L_08AD2AD0;
    return;
L_08AD2AD0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AD2B74;
      }
      goto L_08AD2AE0;
    }
L_08AD2AE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
        goto L_08AD2B78;
    }
    goto L_08AD2AEC;
L_08AD2AEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(5, 0u + 0u);
        goto L_08AD2B2C;
    }
    goto L_08AD2AF8;
L_08AD2AF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AD2B1C;
    }
    goto L_08AD2B04;
L_08AD2B04:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AD2B14;
    }
    goto L_08AD2B0C;
L_08AD2B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2B74;
      }
      goto L_08AD2B14;
    }
L_08AD2B14:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AD2B1C;
L_08AD2B1C:
    ctx.set_gpr(31, 0x08AD2B24u);
    // nop
    goto L_08AD2930;
L_08AD2B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2B74;
      }
      goto L_08AD2B2C;
    }
L_08AD2B2C:
    ctx.set_gpr(31, 0x08AD2B34u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD23B0;
L_08AD2B34:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AD2B60;
    }
    goto L_08AD2B40;
L_08AD2B40:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AD2B50;
    }
    goto L_08AD2B48;
L_08AD2B48:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD2B6C;
      }
      goto L_08AD2B50;
    }
L_08AD2B50:
    ctx.set_gpr(31, 0x08AD2B58u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    goto L_08AD283C;
L_08AD2B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2B68;
      }
      goto L_08AD2B60;
    }
L_08AD2B60:
    ctx.set_gpr(31, 0x08AD2B68u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    goto L_08AD283C;
L_08AD2B68:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD2B6C;
L_08AD2B6C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), 0u);
    goto L_08AD2B74;
L_08AD2B74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    goto L_08AD2B78;
L_08AD2B78:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2B8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(31, 0x08AD2BB4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08AD1648;
L_08AD2BB4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08AD2BE0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 493u, 0x08847118u>(ctx, &aot_mem) && ctx.pc == 0x08AD2BE0u) goto L_08AD2BE0;
    return;
L_08AD2BE0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08AD2BECu);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(208));
    goto L_08AD2388;
L_08AD2BEC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 16968u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(2, 17096u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(220), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AD2CDC;
    }
    goto L_08AD2C30;
L_08AD2C30:
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    goto L_08AD2C44;
L_08AD2C44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(64))))));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(120));
        goto L_08AD2C88;
    }
    goto L_08AD2C5C;
L_08AD2C5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD2C84;
      }
      goto L_08AD2C68;
    }
L_08AD2C68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD2C84;
      }
      goto L_08AD2C74;
    }
L_08AD2C74:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2C84;
      }
      goto L_08AD2C7C;
    }
L_08AD2C7C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_08AD2CC8;
      }
      goto L_08AD2C84;
    }
L_08AD2C84:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(120));
    goto L_08AD2C88;
L_08AD2C88:
    ctx.set_gpr(31, 0x08AD2C90u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(104));
    goto L_08AD2388;
L_08AD2C90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(148)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AD2CC4u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08AD3AAC;
L_08AD2CC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    goto L_08AD2CC8;
L_08AD2CC8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08AD2C44;
      }
      goto L_08AD2CD8;
    }
L_08AD2CD8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AD2CDC;
L_08AD2CDC:
    ctx.set_gpr(31, 0x08AD2CE4u);
    // nop
    goto L_08AD2D04;
L_08AD2CE4:
    ctx.set_gpr(31, 0x08AD2CECu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AD2DEC;
L_08AD2CEC:
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
L_08AD2D04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD2D64;
      }
      goto L_08AD2D30;
    }
L_08AD2D30:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_08AD2D44;
L_08AD2D44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08AD2D44;
      }
      goto L_08AD2D64;
    }
L_08AD2D64:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AD2DCC;
      }
      goto L_08AD2D74;
    }
L_08AD2D74:
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[2] << 2u);
    goto L_08AD2D88;
L_08AD2D88:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AD2D94u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08AD3738;
L_08AD2D94:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
        goto L_08AD2DBC;
    }
    goto L_08AD2D9C;
L_08AD2D9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AD2DACu);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    goto L_08AD3798;
L_08AD2DAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD2DB8;
      }
      goto L_08AD2DB4;
    }
L_08AD2DB4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD2DB8;
L_08AD2DB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    goto L_08AD2DBC;
L_08AD2DBC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08AD2D88;
      }
      goto L_08AD2DCC;
    }
L_08AD2DCC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD2DEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-400));
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
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD2E64;
      }
      goto L_08AD2E30;
    }
L_08AD2E30:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    goto L_08AD2E44;
L_08AD2E44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08AD2E44;
      }
      goto L_08AD2E64;
    }
L_08AD2E64:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x08AD2E7Cu);
    ctx.set_gpr(19, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD2E7Cu) goto L_08AD2E7C;
    return;
L_08AD2E7C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AD2E8Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD2E8Cu) goto L_08AD2E8C;
    return;
L_08AD2E8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08AD34E8;
    }
    goto L_08AD2E9C;
L_08AD2E9C:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[22] << 4u);
    goto L_08AD2EB0;
L_08AD2EB0:
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(156)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(20, ctx.gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08AD2EDC;
    }
    goto L_08AD2ED4;
L_08AD2ED4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD34D4;
      }
      goto L_08AD2EDC;
    }
L_08AD2EDC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
        goto L_08AD33F4;
    }
    goto L_08AD2EE8;
L_08AD2EE8:
    ctx.set_gpr(2, ctx.gpr[20] << 4u);
    goto L_08AD2EEC;
L_08AD2EEC:
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(156)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08AD2F18;
    }
    goto L_08AD2F10;
L_08AD2F10:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD33E0;
      }
      goto L_08AD2F18;
    }
L_08AD2F18:
    ctx.set_gpr(31, 0x08AD2F20u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    goto L_08AD3738;
L_08AD2F20:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08AD2F30u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08AD3738;
L_08AD2F30:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AD33DC;
      }
      goto L_08AD2F38;
    }
L_08AD2F38:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08AD33E0;
    }
    goto L_08AD2F40;
L_08AD2F40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AD2F5Cu);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(104));
    goto L_08AD386C;
L_08AD2F5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD33DC;
      }
      goto L_08AD2F64;
    }
L_08AD2F64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08AD2F80u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(120));
    goto L_08AD3974;
L_08AD2F80:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08AD2FA0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(120));
    goto L_08AD39C4;
L_08AD2FA0:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(31, 0x08AD2FBCu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(120));
    goto L_08AD3A14;
L_08AD2FBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08AD2FD4u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(120));
    goto L_08AD3A14;
L_08AD2FD4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08AD2FECu);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_08AD3518;
L_08AD2FEC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
        goto L_08AD3000;
    }
    goto L_08AD2FF8;
L_08AD2FF8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD33E0;
      }
      goto L_08AD3000;
    }
L_08AD3000:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3048;
      }
      goto L_08AD3008;
    }
L_08AD3008:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08AD3024u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(104));
    goto L_08AD3974;
L_08AD3024:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08AD3044u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(104));
    goto L_08AD39C4;
L_08AD3044:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    goto L_08AD3048;
L_08AD3048:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3060;
      }
      goto L_08AD3050;
    }
L_08AD3050:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3060;
      }
      goto L_08AD3058;
    }
L_08AD3058:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD33E0;
      }
      goto L_08AD3060;
    }
L_08AD3060:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD30F4;
      }
      goto L_08AD3068;
    }
L_08AD3068:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD30E8;
    }
    goto L_08AD3074;
L_08AD3074:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD30D8;
    }
    goto L_08AD3080;
L_08AD3080:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD30BC;
    }
    goto L_08AD308C;
L_08AD308C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD30A0;
    }
    goto L_08AD3098;
L_08AD3098:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD30F4;
      }
      goto L_08AD30A0;
    }
L_08AD30A0:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(116)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD30F4;
      }
      goto L_08AD30BC;
    }
L_08AD30BC:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD30F4;
      }
      goto L_08AD30D8;
    }
L_08AD30D8:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD30F4;
      }
      goto L_08AD30E8;
    }
L_08AD30E8:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD30F4;
L_08AD30F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD3188;
      }
      goto L_08AD30FC;
    }
L_08AD30FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD317C;
    }
    goto L_08AD3108;
L_08AD3108:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD316C;
    }
    goto L_08AD3114;
L_08AD3114:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD3150;
    }
    goto L_08AD3120;
L_08AD3120:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD3134;
    }
    goto L_08AD312C;
L_08AD312C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3188;
      }
      goto L_08AD3134;
    }
L_08AD3134:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3188;
      }
      goto L_08AD3150;
    }
L_08AD3150:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(116)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3188;
      }
      goto L_08AD316C;
    }
L_08AD316C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3188;
      }
      goto L_08AD317C;
    }
L_08AD317C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD3188;
L_08AD3188:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD3268;
      }
      goto L_08AD3190;
    }
L_08AD3190:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD325C;
    }
    goto L_08AD319C;
L_08AD319C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD324C;
    }
    goto L_08AD31A8;
L_08AD31A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD3230;
    }
    goto L_08AD31B4;
L_08AD31B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD31C8;
    }
    goto L_08AD31C0;
L_08AD31C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3268;
      }
      goto L_08AD31C8;
    }
L_08AD31C8:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(23, ctx.gpr[2] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AD31FCu);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD31FCu) goto L_08AD31FC;
    return;
L_08AD31FC:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD3210u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08AD3210u) goto L_08AD3210;
    return;
L_08AD3210:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3268;
      }
      goto L_08AD3218;
    }
L_08AD3218:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3268;
      }
      goto L_08AD3230;
    }
L_08AD3230:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(104)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3268;
      }
      goto L_08AD324C;
    }
L_08AD324C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3268;
      }
      goto L_08AD325C;
    }
L_08AD325C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD3268;
L_08AD3268:
    if (static_cast<std::int32_t>(ctx.gpr[30]) <= 0) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD334C;
    }
    goto L_08AD3270;
L_08AD3270:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD333C;
    }
    goto L_08AD327C;
L_08AD327C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD332C;
    }
    goto L_08AD3288;
L_08AD3288:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD32C4;
    }
    goto L_08AD3294;
L_08AD3294:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD32A8;
    }
    goto L_08AD32A0;
L_08AD32A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3348;
      }
      goto L_08AD32A8;
    }
L_08AD32A8:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(104)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3348;
      }
      goto L_08AD32C4;
    }
L_08AD32C4:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(23, ctx.gpr[2] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AD32F8u);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD32F8u) goto L_08AD32F8;
    return;
L_08AD32F8:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD330Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08AD330Cu) goto L_08AD330C;
    return;
L_08AD330C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3348;
      }
      goto L_08AD3314;
    }
L_08AD3314:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3348;
      }
      goto L_08AD332C;
    }
L_08AD332C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3348;
      }
      goto L_08AD333C;
    }
L_08AD333C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD3348;
L_08AD3348:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    goto L_08AD334C;
L_08AD334C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AD33B8;
      }
      goto L_08AD336C;
    }
L_08AD336C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD33BC;
    }
    goto L_08AD3378;
L_08AD3378:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
        goto L_08AD3398;
    }
    goto L_08AD3384;
L_08AD3384:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD3394;
      }
      goto L_08AD338C;
    }
L_08AD338C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD33F0;
      }
      goto L_08AD3394;
    }
L_08AD3394:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    goto L_08AD3398;
L_08AD3398:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(137)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD33F0;
      }
      goto L_08AD33A8;
    }
L_08AD33A8:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08AD33F0;
      }
      goto L_08AD33B8;
    }
L_08AD33B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    goto L_08AD33BC;
L_08AD33BC:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(137)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD33F0;
      }
      goto L_08AD33CC;
    }
L_08AD33CC:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08AD33F0;
      }
      goto L_08AD33DC;
    }
L_08AD33DC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08AD33E0;
L_08AD33E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[20] << 4u);
        goto L_08AD2EEC;
    }
    goto L_08AD33F0;
L_08AD33F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    goto L_08AD33F4;
L_08AD33F4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08AD34D4;
    }
    goto L_08AD3400;
L_08AD3400:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(13, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD34C0;
      }
      goto L_08AD343C;
    }
L_08AD343C:
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD3448;
L_08AD3448:
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD34A4;
      }
      goto L_08AD3458;
    }
L_08AD3458:
    ctx.set_gpr(2, ctx.gpr[12] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(80));
    goto L_08AD346C;
L_08AD346C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
        goto L_08AD3494;
    }
    goto L_08AD3478;
L_08AD3478:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD3490;
      }
      goto L_08AD3488;
    }
L_08AD3488:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08AD34A4;
      }
      goto L_08AD3490;
    }
L_08AD3490:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    goto L_08AD3494;
L_08AD3494:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD346C;
      }
      goto L_08AD34A4;
    }
L_08AD34A4:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD34C0;
      }
      goto L_08AD34AC;
    }
L_08AD34AC:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD3448;
      }
      goto L_08AD34C0;
    }
L_08AD34C0:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD34E4;
      }
      goto L_08AD34C8;
    }
L_08AD34C8:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AD34D4;
L_08AD34D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[22] << 4u);
        goto L_08AD2EB0;
    }
    goto L_08AD34E4;
L_08AD34E4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08AD34E8;
L_08AD34E8:
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
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3518:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(137));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD3594;
      }
      goto L_08AD3568;
    }
L_08AD3568:
    ctx.set_gpr(2, ctx.gpr[6] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
        goto L_08AD3608;
    }
    goto L_08AD358C;
L_08AD358C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD3718;
      }
      goto L_08AD3594;
    }
L_08AD3594:
    ctx.set_gpr(2, ctx.gpr[6] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[16]);
        goto L_08AD35C0;
    }
    goto L_08AD35B8;
L_08AD35B8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD3718;
      }
      goto L_08AD35C0;
    }
L_08AD35C0:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08AD35D0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(104));
    goto L_08AD38F0;
L_08AD35D0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08AD3718;
    }
    goto L_08AD35D8;
L_08AD35D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AD35F4u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(120));
    goto L_08AD38F0;
L_08AD35F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3604;
      }
      goto L_08AD35FC;
    }
L_08AD35FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD3718;
      }
      goto L_08AD3604;
    }
L_08AD3604:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    goto L_08AD3608;
L_08AD3608:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(137));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(136));
        goto L_08AD36A4;
    }
    goto L_08AD361C;
L_08AD361C:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD36A0;
      }
      goto L_08AD362C;
    }
L_08AD362C:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = ctx.fpr[3] + ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD365C;
      }
      goto L_08AD3654;
    }
L_08AD3654:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD3718;
      }
      goto L_08AD365C;
    }
L_08AD365C:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[2])) || ctx.fpr[0] <= ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(136));
        goto L_08AD3674;
    }
    goto L_08AD366C;
L_08AD366C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD3718;
      }
      goto L_08AD3674;
    }
L_08AD3674:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[17]);
        goto L_08AD368C;
    }
    goto L_08AD3684;
L_08AD3684:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD3718;
      }
      goto L_08AD368C;
    }
L_08AD368C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AD3718;
    }
    goto L_08AD3698;
L_08AD3698:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD3718;
      }
      goto L_08AD36A0;
    }
L_08AD36A0:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(136));
    goto L_08AD36A4;
L_08AD36A4:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[17]);
        goto L_08AD36BC;
    }
    goto L_08AD36B4;
L_08AD36B4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD3718;
      }
      goto L_08AD36BC;
    }
L_08AD36BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AD36D0;
    }
    goto L_08AD36C8;
L_08AD36C8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD3718;
      }
      goto L_08AD36D0;
    }
L_08AD36D0:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = ctx.fpr[3] + ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD36FC;
      }
      goto L_08AD36F4;
    }
L_08AD36F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD3718;
      }
      goto L_08AD36FC;
    }
L_08AD36FC:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[2])) || ctx.fpr[0] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD3714;
      }
      goto L_08AD370C;
    }
L_08AD370C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD3718;
      }
      goto L_08AD3714;
    }
L_08AD3714:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AD3718;
L_08AD3718:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3738:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(64))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AD3790;
    }
    goto L_08AD3764;
L_08AD3764:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD378C;
      }
      goto L_08AD3770;
    }
L_08AD3770:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AD378C;
      }
      goto L_08AD377C;
    }
L_08AD377C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD378C;
      }
      goto L_08AD3784;
    }
L_08AD3784:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AD3790;
      }
      goto L_08AD378C;
    }
L_08AD378C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD3790;
L_08AD3790:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3798:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AD37C0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08AD386C;
L_08AD37C0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AD3854;
    }
    goto L_08AD37C8;
L_08AD37C8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08AD37D8u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(120));
    goto L_08AD3974;
L_08AD37D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08AD37ECu);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(120));
    goto L_08AD39C4;
L_08AD37EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD3804;
      }
      goto L_08AD37F4;
    }
L_08AD37F4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD3804;
L_08AD3804:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD381C;
      }
      goto L_08AD380C;
    }
L_08AD380C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD381C;
L_08AD381C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD3834;
      }
      goto L_08AD3824;
    }
L_08AD3824:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD3834;
L_08AD3834:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AD3850;
    }
    goto L_08AD383C;
L_08AD383C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD3850;
L_08AD3850:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AD3854;
L_08AD3854:
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
L_08AD386C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AD38E8;
    }
    goto L_08AD388C;
L_08AD388C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[2])) || ctx.fpr[0] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD38E4;
      }
      goto L_08AD38A4;
    }
L_08AD38A4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD38E4;
      }
      goto L_08AD38C4;
    }
L_08AD38C4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[2])) || ctx.fpr[0] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD38E4;
      }
      goto L_08AD38DC;
    }
L_08AD38DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD38E8;
      }
      goto L_08AD38E4;
    }
L_08AD38E4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AD38E8;
L_08AD38E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD38F0:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AD396C;
    }
    goto L_08AD3910;
L_08AD3910:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[2])) || ctx.fpr[0] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD3968;
      }
      goto L_08AD3928;
    }
L_08AD3928:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD3968;
      }
      goto L_08AD3948;
    }
L_08AD3948:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[2])) || ctx.fpr[0] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD3968;
      }
      goto L_08AD3960;
    }
L_08AD3960:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD396C;
      }
      goto L_08AD3968;
    }
L_08AD3968:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AD396C;
L_08AD396C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3974:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AD39BC;
    }
    goto L_08AD3994;
L_08AD3994:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[2])) || ctx.fpr[0] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD39B0;
      }
      goto L_08AD39AC;
    }
L_08AD39AC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AD39B0;
L_08AD39B0:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    goto L_08AD39BC;
L_08AD39BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD39C4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AD3A0C;
    }
    goto L_08AD39E4;
L_08AD39E4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[2])) || ctx.fpr[0] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AD3A00;
      }
      goto L_08AD39FC;
    }
L_08AD39FC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AD3A00;
L_08AD3A00:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    goto L_08AD3A0C;
L_08AD3A0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3A14:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
        goto L_08AD3A40;
    }
    goto L_08AD3A34;
L_08AD3A34:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3A5C;
      }
      goto L_08AD3A40;
    }
L_08AD3A40:
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
        goto L_08AD3A5C;
    }
    goto L_08AD3A54;
L_08AD3A54:
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD3A5C;
L_08AD3A5C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
        goto L_08AD3A88;
    }
    goto L_08AD3A7C;
L_08AD3A7C:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3AA4;
      }
      goto L_08AD3A88;
    }
L_08AD3A88:
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
        goto L_08AD3AA4;
    }
    goto L_08AD3A9C;
L_08AD3A9C:
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD3AA4;
L_08AD3AA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3AAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[4] = ctx.fpr[2] - ctx.fpr[3];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[4] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_08AD3AF0;
    }
    goto L_08AD3AE0;
L_08AD3AE0:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08AD3AF0;
L_08AD3AF0:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD3B0C;
      }
      goto L_08AD3B00;
    }
L_08AD3B00:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    goto L_08AD3B0C;
L_08AD3B0C:
    ctx.set_fpu_condition((ctx.fpr[4] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD3B3C;
      }
      goto L_08AD3B1C;
    }
L_08AD3B1C:
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD3B3C;
      }
      goto L_08AD3B2C;
    }
L_08AD3B2C:
    ctx.set_gpr(31, 0x08AD3B34u);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    goto L_08AD2388;
L_08AD3B34:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AD3BB8;
      }
      goto L_08AD3B3C;
    }
L_08AD3B3C:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[4]) || std::isnan(ctx.fpr[12])) || ctx.fpr[4] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
        goto L_08AD3B74;
    }
    goto L_08AD3B4C;
L_08AD3B4C:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[3])) || ctx.fpr[2] <= ctx.fpr[3]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08AD3B6C;
    }
    goto L_08AD3B5C;
L_08AD3B5C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3B74;
      }
      goto L_08AD3B6C;
    }
L_08AD3B6C:
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD3B74;
L_08AD3B74:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[12])) || ctx.fpr[1] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AD3BB0;
    }
    goto L_08AD3B84;
L_08AD3B84:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
        goto L_08AD3BA8;
    }
    goto L_08AD3B9C;
L_08AD3B9C:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3BB4;
      }
      goto L_08AD3BA8;
    }
L_08AD3BA8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AD3BB4;
      }
      goto L_08AD3BB0;
    }
L_08AD3BB0:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AD3BB4;
L_08AD3BB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD3BB8;
L_08AD3BB8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3BC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(999));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AD3F58;
      }
      goto L_08AD3BE0;
    }
L_08AD3BE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
        goto L_08AD3EE0;
    }
    goto L_08AD3BEC;
L_08AD3BEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AD3E94;
      }
      goto L_08AD3BF8;
    }
L_08AD3BF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AD3DF8;
      }
      goto L_08AD3C04;
    }
L_08AD3C04:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3D08;
      }
      goto L_08AD3C0C;
    }
L_08AD3C0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AD3C20;
      }
      goto L_08AD3C18;
    }
L_08AD3C18:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AD3FA4;
      }
      goto L_08AD3C20;
    }
L_08AD3C20:
    ctx.set_gpr(31, 0x08AD3C28u);
    // nop
    goto L_08AD3FB4;
L_08AD3C28:
    ctx.set_gpr(31, 0x08AD3C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3C30u) goto L_08AD3C30;
    return;
L_08AD3C30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AD3C44u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3C44u) goto L_08AD3C44;
    return;
L_08AD3C44:
    ctx.set_gpr(31, 0x08AD3C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3C4Cu) goto L_08AD3C4C;
    return;
L_08AD3C4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08AD3C60u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3C60u) goto L_08AD3C60;
    return;
L_08AD3C60:
    ctx.set_gpr(31, 0x08AD3C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3C68u) goto L_08AD3C68;
    return;
L_08AD3C68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08AD3C7Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3C7Cu) goto L_08AD3C7C;
    return;
L_08AD3C7C:
    ctx.set_gpr(31, 0x08AD3C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3C84u) goto L_08AD3C84;
    return;
L_08AD3C84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AD3C98u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3C98u) goto L_08AD3C98;
    return;
L_08AD3C98:
    ctx.set_gpr(31, 0x08AD3CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3CA0u) goto L_08AD3CA0;
    return;
L_08AD3CA0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AD3CB8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08AD3CB8u) goto L_08AD3CB8;
    return;
L_08AD3CB8:
    ctx.set_gpr(31, 0x08AD3CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3CC0u) goto L_08AD3CC0;
    return;
L_08AD3CC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AD3CE0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3CE0u) goto L_08AD3CE0;
    return;
L_08AD3CE0:
    ctx.set_gpr(31, 0x08AD3CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3CE8u) goto L_08AD3CE8;
    return;
L_08AD3CE8:
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD3CFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 365u, 0x08AB1554u>(ctx, &aot_mem) && ctx.pc == 0x08AD3CFCu) goto L_08AD3CFC;
    return;
L_08AD3CFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(999));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD3FA0;
      }
      goto L_08AD3D08;
    }
L_08AD3D08:
    ctx.set_gpr(31, 0x08AD3D10u);
    // nop
    goto L_08AD3FB4;
L_08AD3D10:
    ctx.set_gpr(31, 0x08AD3D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3D18u) goto L_08AD3D18;
    return;
L_08AD3D18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AD3D2Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3D2Cu) goto L_08AD3D2C;
    return;
L_08AD3D2C:
    ctx.set_gpr(31, 0x08AD3D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3D34u) goto L_08AD3D34;
    return;
L_08AD3D34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08AD3D48u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3D48u) goto L_08AD3D48;
    return;
L_08AD3D48:
    ctx.set_gpr(31, 0x08AD3D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3D50u) goto L_08AD3D50;
    return;
L_08AD3D50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08AD3D64u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3D64u) goto L_08AD3D64;
    return;
L_08AD3D64:
    ctx.set_gpr(31, 0x08AD3D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3D6Cu) goto L_08AD3D6C;
    return;
L_08AD3D6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AD3D80u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3D80u) goto L_08AD3D80;
    return;
L_08AD3D80:
    ctx.set_gpr(31, 0x08AD3D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3D88u) goto L_08AD3D88;
    return;
L_08AD3D88:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AD3DA0u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08AD3DA0u) goto L_08AD3DA0;
    return;
L_08AD3DA0:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(31, 0x08AD3DACu);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-5600)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3DACu) goto L_08AD3DAC;
    return;
L_08AD3DAC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AD3DCCu);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3DCCu) goto L_08AD3DCC;
    return;
L_08AD3DCC:
    ctx.set_gpr(31, 0x08AD3DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3DD4u) goto L_08AD3DD4;
    return;
L_08AD3DD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AD3DE8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 365u, 0x08AB1554u>(ctx, &aot_mem) && ctx.pc == 0x08AD3DE8u) goto L_08AD3DE8;
    return;
L_08AD3DE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD3FA0;
      }
      goto L_08AD3DF8;
    }
L_08AD3DF8:
    ctx.set_gpr(31, 0x08AD3E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E00u) goto L_08AD3E00;
    return;
L_08AD3E00:
    ctx.set_gpr(31, 0x08AD3E08u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E08u) goto L_08AD3E08;
    return;
L_08AD3E08:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3FA0;
      }
      goto L_08AD3E14;
    }
L_08AD3E14:
    ctx.set_gpr(31, 0x08AD3E1Cu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E1Cu) goto L_08AD3E1C;
    return;
L_08AD3E1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AD3E30u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3E30u) goto L_08AD3E30;
    return;
L_08AD3E30:
    ctx.set_gpr(31, 0x08AD3E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E38u) goto L_08AD3E38;
    return;
L_08AD3E38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08AD3E58u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E58u) goto L_08AD3E58;
    return;
L_08AD3E58:
    ctx.set_gpr(31, 0x08AD3E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E60u) goto L_08AD3E60;
    return;
L_08AD3E60:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-5600)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AD3E84u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E84u) goto L_08AD3E84;
    return;
L_08AD3E84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD3FA0;
      }
      goto L_08AD3E94;
    }
L_08AD3E94:
    ctx.set_gpr(31, 0x08AD3E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3E9Cu) goto L_08AD3E9C;
    return;
L_08AD3E9C:
    ctx.set_gpr(31, 0x08AD3EA4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08AD3EA4u) goto L_08AD3EA4;
    return;
L_08AD3EA4:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3FA0;
      }
      goto L_08AD3EB0;
    }
L_08AD3EB0:
    ctx.set_gpr(31, 0x08AD3EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3EB8u) goto L_08AD3EB8;
    return;
L_08AD3EB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1734));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AD3ECCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3ECCu) goto L_08AD3ECC;
    return;
L_08AD3ECC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD3FA0;
      }
      goto L_08AD3EE0;
    }
L_08AD3EE0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08AD3FA0;
      }
      goto L_08AD3F00;
    }
L_08AD3F00:
    ctx.set_gpr(31, 0x08AD3F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F08u) goto L_08AD3F08;
    return;
L_08AD3F08:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AD3F20u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F20u) goto L_08AD3F20;
    return;
L_08AD3F20:
    ctx.set_gpr(31, 0x08AD3F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F28u) goto L_08AD3F28;
    return;
L_08AD3F28:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-5600)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AD3F4Cu);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F4Cu) goto L_08AD3F4C;
    return;
L_08AD3F4C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(999));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AD3FA0;
      }
      goto L_08AD3F58;
    }
L_08AD3F58:
    ctx.set_gpr(31, 0x08AD3F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F60u) goto L_08AD3F60;
    return;
L_08AD3F60:
    ctx.set_gpr(31, 0x08AD3F68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F68u) goto L_08AD3F68;
    return;
L_08AD3F68:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD3FA0;
      }
      goto L_08AD3F74;
    }
L_08AD3F74:
    ctx.set_gpr(31, 0x08AD3F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD3F7Cu) goto L_08AD3F7C;
    return;
L_08AD3F7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AD3F90u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD3F90u) goto L_08AD3F90;
    return;
L_08AD3F90:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08AD3FA0;
L_08AD3FA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AD3FA4;
L_08AD3FA4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3FB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08AD3FF4;
      }
      goto L_08AD3FC0;
    }
L_08AD3FC0:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AD3FC8;
L_08AD3FC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(156), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08AD3FC8;
      }
      goto L_08AD3FF4;
    }
L_08AD3FF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD3FFC:
    ctx.set_gpr(3, 2233u << 16u);
    ctx.pc = 0x08AD4000u; return;
}

void recomp_unit_0179(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0179_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_179(Runtime &runtime) {
    runtime.register_generated_unit(179u, 0x08AD0000u, 16384u, &recomp_unit_0179, &recomp_unit_0179_entry);
    runtime.register_function(0x08AD0000u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD000Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0024u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD002Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0040u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0048u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0050u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0084u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD008Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD00ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0120u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0128u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0144u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD015Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0164u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0174u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD017Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0184u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD019Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD01E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0224u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0228u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0230u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0244u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD024Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0260u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0270u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0274u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD027Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0290u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD02FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0310u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0348u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0350u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD035Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0364u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0370u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0378u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0384u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD038Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0390u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD03FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0404u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD040Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD043Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0444u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0468u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0470u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0478u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0480u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0490u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0498u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD04FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0508u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0510u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0518u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0528u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0538u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD053Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0544u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0554u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0564u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0568u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0570u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD057Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0590u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0598u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD05F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0604u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD060Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD061Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0628u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0630u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD063Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0650u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD06F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0718u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0720u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD072Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0738u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0740u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0748u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0750u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0758u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0764u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD076Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0778u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0788u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD078Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0794u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD079Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD07F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD080Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD081Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0828u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0834u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD083Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0844u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0848u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD085Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0870u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD089Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD08F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD091Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0924u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0930u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0938u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0944u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0954u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0960u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0978u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0994u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD09FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0A9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0ACCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0ADCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0AECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0B90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0BFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0C98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0CF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0D94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0DF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0E94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0EFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0F90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD0FFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1014u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD101Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1024u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1030u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1038u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1060u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1074u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD107Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1084u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1094u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD10ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1100u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1108u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1120u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1128u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1134u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD113Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1148u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1150u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD115Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1164u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1170u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1178u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1184u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD118Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1198u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD11FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD121Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1224u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1248u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD125Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1274u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1284u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD12E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1300u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1308u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1324u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD132Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1340u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1354u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1380u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1388u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1390u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD139Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD13ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1404u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1414u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1434u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD143Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1460u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1474u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD148Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD149Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD14F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1518u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1520u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD153Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1544u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1558u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD156Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1598u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD15F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1618u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1648u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1664u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1684u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1694u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD16D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1714u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD171Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD175Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1760u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1764u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1774u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1794u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD17E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1804u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1820u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1824u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1834u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1878u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD188Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1898u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD18FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1908u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1920u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD192Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1950u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1974u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1990u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD19F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1A90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1ABCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1AFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1B60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1BDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1C94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1CDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1D94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1DE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1E94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1EA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1EB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1EC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1ED0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1EE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1EF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1F9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD1FF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD201Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2034u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD203Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2044u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD206Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2074u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2098u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD20F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2108u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2138u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD214Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2154u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2168u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD218Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD219Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD21F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD220Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2220u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2234u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD224Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2250u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2268u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2298u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD22C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2310u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2340u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2388u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD23F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2408u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2414u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2418u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2424u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2428u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2434u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD243Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2468u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2480u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD24F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD250Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2520u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2558u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD255Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD256Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2570u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2578u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2580u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2598u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD25F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2624u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD262Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2644u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD264Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2664u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD266Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2690u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2698u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD26FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2708u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2710u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2718u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2724u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2730u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2734u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2740u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2744u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2760u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD283Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2880u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD289Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD28B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD28CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD28E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD28F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD290Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2918u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2920u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2924u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2930u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2944u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2954u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2960u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD296Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2974u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD297Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2984u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2990u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD29FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A70u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2A9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2ABCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AD0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2AF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B24u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B78u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2B8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2BECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2C90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CC4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CD8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CE4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2CECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2D9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2DECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E8Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2E9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2ED4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EDCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2EECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2F80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FBCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD2FF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3000u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3008u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3024u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3044u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3048u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3050u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3058u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3060u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3068u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3074u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3080u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD308Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3098u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD30FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3108u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3114u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3120u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD312Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3134u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3150u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD316Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD317Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3188u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3190u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD319Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD31FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3210u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3218u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3230u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD324Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD325Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3268u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3270u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD327Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3288u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3294u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD32F8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD330Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3314u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD332Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD333Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3348u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD334Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD336Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3378u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3384u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD338Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3394u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3398u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33A8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33CCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33E0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD33F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3400u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD343Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3448u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3458u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD346Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3478u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3488u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3490u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3494u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34D4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD34E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3518u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3568u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD358Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3594u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35B8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD35FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3604u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3608u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD361Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD362Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3654u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD365Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD366Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3674u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3684u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD368Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3698u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36A0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36B4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36D0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD36FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD370Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3714u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3718u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3738u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3764u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3770u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD377Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3784u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD378Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3790u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3798u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37C0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37C8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37D8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37ECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD37F4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3804u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD380Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD381Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3824u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3834u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD383Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3850u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3854u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD386Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD388Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38A4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38DCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38E8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD38F0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3910u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3928u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3948u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3960u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3968u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD396Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3974u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3994u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39ACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39B0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39BCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39C4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39E4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD39FCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A40u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A54u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3A9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3AF0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B3Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B5Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3B9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BA8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BECu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3BF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C04u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C0Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C44u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3C98u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3CFCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D10u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D18u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D2Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D34u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D48u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D50u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D64u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D6Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D80u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3D88u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DACu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DCCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DD4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DE8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3DF8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E14u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E1Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E30u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E38u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E84u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E94u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3E9Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EB0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EB8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3ECCu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3EE0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F00u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F08u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F20u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F28u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F4Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F58u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F60u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F68u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F74u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F7Cu, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3F90u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FA0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FA4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FB4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FC0u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FC8u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FF4u, &recomp_unit_0179, "recomp_unit_0179");
    runtime.register_function(0x08AD3FFCu, &recomp_unit_0179, "recomp_unit_0179");
}
} // namespace psprecomp
