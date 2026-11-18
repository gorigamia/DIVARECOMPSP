#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0070[4094] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 14, 0, 0, 15, 16,
    0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 20, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 38, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 48, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 72, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 76, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 83, 0, 84,
    0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0,
    0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 128, 0,
    0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0,
    0, 0, 0, 0, 0, 164, 0, 0, 165, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 206, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 213, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 218,
    0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 226, 227, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 237, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0,
    0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 253, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258,
    0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 262, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 268, 0,
    0, 0, 269, 0, 0, 270, 0, 271, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 275, 0, 276, 0, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0,
    0, 280, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 285, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 288,
    289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0,
    0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0,
    301, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0,
    315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 323, 0,
    0, 324, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 327, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 333, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 338, 0, 339,
    0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 347, 348, 0, 0, 0, 0, 0, 0, 349, 0, 350, 351, 0, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367,
    0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 372, 0, 0,
    0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378,
    0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 386,
    0, 387, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 397, 0, 0, 398, 0, 0,
    0, 0, 399, 0, 0, 0, 0, 0, 400, 401, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 406, 0, 407, 0, 0, 0, 0,
    0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 414, 0, 0, 415,
    0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 421, 422,
    0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0,
    0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0,
    0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436,
    0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0,
    0, 440, 0, 0, 0, 0, 0, 0, 441, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445,
    0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0,
    0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0,
    0, 0, 462, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0,
    0, 0, 0, 0, 468, 469, 0, 470, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0,
    0, 0, 0, 0, 476, 477, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0,
    0, 0, 0, 0, 483, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 487, 0, 0, 0, 0, 0, 488, 0, 489, 490, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 494, 0, 0, 495, 0, 496, 0, 0, 0,
    0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0, 501, 0, 502, 503, 0, 504, 505, 0, 0, 0, 0, 0,
    0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 510, 0, 0, 511, 0,
    0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518,
    0, 0, 0, 519, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 523, 524, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0,
    527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 540, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0,
    0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0,
    549, 0, 550, 0, 0, 551, 0, 552, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0,
    0, 0, 0, 558, 559, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0,
    0, 0, 0, 0, 0, 0, 0, 564, 565, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 569, 570, 0, 0, 571, 0, 0,
    0, 572, 0, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0,
    577, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 0, 0, 582, 583, 0, 0, 0, 0, 584, 0, 0, 0,
    0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0,
    0, 590, 0, 591, 0, 0, 592, 0, 593, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 598,
    0, 0, 0, 0, 599, 600, 0, 601, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0, 607,
    608, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 612, 613, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 616, 0, 0,
    0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0,
    0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 627,
    0, 628, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 0, 635,
    0, 0, 636, 0, 637, 0, 0, 638, 0, 639, 0, 0, 0, 0, 640, 641, 0, 0, 0, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0,
    644, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649,
    0, 0, 0, 650, 0, 0, 651, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0,
    0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 661, 0, 662, 0, 0, 663, 0, 0,
    0, 0, 664, 0, 665, 0, 0, 666, 0, 667, 0, 0, 668, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 671, 0, 672, 0, 0, 673, 0, 0, 674,
    0, 0, 675, 0, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 682, 0, 683, 0,
    0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0,
    0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 0, 695, 696, 0,
    697, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 700, 0, 0, 701, 0, 702, 0, 0, 703, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0,
    706, 0, 0, 707, 0, 708, 0, 709, 0, 0, 0, 710, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0,
    0, 715, 0, 716, 0, 0, 0, 0, 717, 0, 0, 718, 0, 719, 0, 0, 0, 720, 0, 0, 721, 722, 0, 0, 723, 0, 0, 724, 0, 0, 725, 0,
    0, 0, 726, 727, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 732, 0, 733,
    0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 739, 0, 0, 740, 0, 0, 0, 0, 0, 0,
    0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 744, 0, 0, 0, 745, 0, 0, 0,
    0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 751,
    0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0,
    758, 0, 0, 759, 0, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 764, 765, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 772, 0, 0, 0, 773,
    0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 777, 0, 0, 778, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 781,
    0, 0, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 784, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 789, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 792, 793, 0,
    0, 794, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 798, 0, 0, 0, 0, 0, 0, 799, 0, 0,
    0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0,
    811, 0, 0, 0, 0, 0, 812, 813, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 817, 0, 0,
    0, 818, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 821, 0, 822, 0, 0, 823, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0, 0,
    0, 0, 829, 0, 0, 0, 0, 830, 0, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0,
    835, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 0, 0, 0,
    845, 0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 848, 0, 0, 849, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 856, 857, 0,
    0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 861, 0, 0, 0, 0, 862, 0, 0, 0, 863, 0, 0, 864,
};
void recomp_unit_0070_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0891C000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0070[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0891C000;
    case 2u: goto L_0891C014;
    case 3u: goto L_0891C064;
    case 4u: goto L_0891C0CC;
    case 5u: goto L_0891C0E4;
    case 6u: goto L_0891C0F0;
    case 7u: goto L_0891C0F8;
    case 8u: goto L_0891C110;
    case 9u: goto L_0891C128;
    case 10u: goto L_0891C138;
    case 11u: goto L_0891C144;
    case 12u: goto L_0891C160;
    case 13u: goto L_0891C168;
    case 14u: goto L_0891C16C;
    case 15u: goto L_0891C178;
    case 16u: goto L_0891C17C;
    case 17u: goto L_0891C184;
    case 18u: goto L_0891C190;
    case 19u: goto L_0891C1A8;
    case 20u: goto L_0891C1AC;
    case 21u: goto L_0891C1B4;
    case 22u: goto L_0891C1C0;
    case 23u: goto L_0891C1D4;
    case 24u: goto L_0891C1D8;
    case 25u: goto L_0891C1E0;
    case 26u: goto L_0891C1EC;
    case 27u: goto L_0891C220;
    case 28u: goto L_0891C228;
    case 29u: goto L_0891C234;
    case 30u: goto L_0891C248;
    case 31u: goto L_0891C24C;
    case 32u: goto L_0891C254;
    case 33u: goto L_0891C260;
    case 34u: goto L_0891C294;
    case 35u: goto L_0891C29C;
    case 36u: goto L_0891C2A8;
    case 37u: goto L_0891C2BC;
    case 38u: goto L_0891C2C0;
    case 39u: goto L_0891C2C8;
    case 40u: goto L_0891C2D4;
    case 41u: goto L_0891C300;
    case 42u: goto L_0891C308;
    case 43u: goto L_0891C330;
    case 44u: goto L_0891C33C;
    case 45u: goto L_0891C344;
    case 46u: goto L_0891C358;
    case 47u: goto L_0891C36C;
    case 48u: goto L_0891C370;
    case 49u: goto L_0891C38C;
    case 50u: goto L_0891C3B4;
    case 51u: goto L_0891C3C0;
    case 52u: goto L_0891C3CC;
    case 53u: goto L_0891C3E0;
    case 54u: goto L_0891C3F4;
    case 55u: goto L_0891C410;
    case 56u: goto L_0891C440;
    case 57u: goto L_0891C44C;
    case 58u: goto L_0891C454;
    case 59u: goto L_0891C460;
    case 60u: goto L_0891C468;
    case 61u: goto L_0891C47C;
    case 62u: goto L_0891C490;
    case 63u: goto L_0891C49C;
    case 64u: goto L_0891C4A4;
    case 65u: goto L_0891C4AC;
    case 66u: goto L_0891C4BC;
    case 67u: goto L_0891C4D8;
    case 68u: goto L_0891C4E4;
    case 69u: goto L_0891C508;
    case 70u: goto L_0891C524;
    case 71u: goto L_0891C530;
    case 72u: goto L_0891C540;
    case 73u: goto L_0891C544;
    case 74u: goto L_0891C560;
    case 75u: goto L_0891C588;
    case 76u: goto L_0891C594;
    case 77u: goto L_0891C59C;
    case 78u: goto L_0891C5A8;
    case 79u: goto L_0891C5B0;
    case 80u: goto L_0891C5C4;
    case 81u: goto L_0891C5D8;
    case 82u: goto L_0891C5F0;
    case 83u: goto L_0891C5F4;
    case 84u: goto L_0891C5FC;
    case 85u: goto L_0891C614;
    case 86u: goto L_0891C620;
    case 87u: goto L_0891C63C;
    case 88u: goto L_0891C65C;
    case 89u: goto L_0891C668;
    case 90u: goto L_0891C674;
    case 91u: goto L_0891C690;
    case 92u: goto L_0891C698;
    case 93u: goto L_0891C6B4;
    case 94u: goto L_0891C6D8;
    case 95u: goto L_0891C6E4;
    case 96u: goto L_0891C70C;
    case 97u: goto L_0891C71C;
    case 98u: goto L_0891C738;
    case 99u: goto L_0891C748;
    case 100u: goto L_0891C758;
    case 101u: goto L_0891C76C;
    case 102u: goto L_0891C788;
    case 103u: goto L_0891C798;
    case 104u: goto L_0891C7B0;
    case 105u: goto L_0891C7C8;
    case 106u: goto L_0891C7D8;
    case 107u: goto L_0891C7F0;
    case 108u: goto L_0891C808;
    case 109u: goto L_0891C814;
    case 110u: goto L_0891C828;
    case 111u: goto L_0891C840;
    case 112u: goto L_0891C854;
    case 113u: goto L_0891C85C;
    case 114u: goto L_0891C87C;
    case 115u: goto L_0891C8A0;
    case 116u: goto L_0891C8C0;
    case 117u: goto L_0891C8CC;
    case 118u: goto L_0891C8D8;
    case 119u: goto L_0891C8E4;
    case 120u: goto L_0891C8F4;
    case 121u: goto L_0891C90C;
    case 122u: goto L_0891C91C;
    case 123u: goto L_0891C934;
    case 124u: goto L_0891C940;
    case 125u: goto L_0891C958;
    case 126u: goto L_0891C964;
    case 127u: goto L_0891C96C;
    case 128u: goto L_0891C978;
    case 129u: goto L_0891C984;
    case 130u: goto L_0891C99C;
    case 131u: goto L_0891C9A8;
    case 132u: goto L_0891C9B4;
    case 133u: goto L_0891C9D4;
    case 134u: goto L_0891C9DC;
    case 135u: goto L_0891C9F4;
    case 136u: goto L_0891CA10;
    case 137u: goto L_0891CA2C;
    case 138u: goto L_0891CA4C;
    case 139u: goto L_0891CA60;
    case 140u: goto L_0891CA74;
    case 141u: goto L_0891CA90;
    case 142u: goto L_0891CA98;
    case 143u: goto L_0891CAA4;
    case 144u: goto L_0891CAAC;
    case 145u: goto L_0891CAB8;
    case 146u: goto L_0891CAC4;
    case 147u: goto L_0891CACC;
    case 148u: goto L_0891CAD0;
    case 149u: goto L_0891CAEC;
    case 150u: goto L_0891CB04;
    case 151u: goto L_0891CB24;
    case 152u: goto L_0891CB48;
    case 153u: goto L_0891CB54;
    case 154u: goto L_0891CB68;
    case 155u: goto L_0891CBA4;
    case 156u: goto L_0891CBBC;
    case 157u: goto L_0891CBD0;
    case 158u: goto L_0891CBE8;
    case 159u: goto L_0891CC30;
    case 160u: goto L_0891CC38;
    case 161u: goto L_0891CC5C;
    case 162u: goto L_0891CC70;
    case 163u: goto L_0891CC78;
    case 164u: goto L_0891CC94;
    case 165u: goto L_0891CCA0;
    case 166u: goto L_0891CCA4;
    case 167u: goto L_0891CCBC;
    case 168u: goto L_0891CD00;
    case 169u: goto L_0891CD0C;
    case 170u: goto L_0891CD1C;
    case 171u: goto L_0891CD2C;
    case 172u: goto L_0891CD34;
    case 173u: goto L_0891CD40;
    case 174u: goto L_0891CD4C;
    case 175u: goto L_0891CD58;
    case 176u: goto L_0891CD78;
    case 177u: goto L_0891CD94;
    case 178u: goto L_0891CD9C;
    case 179u: goto L_0891CDA4;
    case 180u: goto L_0891CDB8;
    case 181u: goto L_0891CDC4;
    case 182u: goto L_0891CDCC;
    case 183u: goto L_0891CDD8;
    case 184u: goto L_0891CDE0;
    case 185u: goto L_0891CDF4;
    case 186u: goto L_0891CE08;
    case 187u: goto L_0891CE14;
    case 188u: goto L_0891CE1C;
    case 189u: goto L_0891CE24;
    case 190u: goto L_0891CE34;
    case 191u: goto L_0891CE4C;
    case 192u: goto L_0891CE58;
    case 193u: goto L_0891CE60;
    case 194u: goto L_0891CE6C;
    case 195u: goto L_0891CE74;
    case 196u: goto L_0891CE88;
    case 197u: goto L_0891CE9C;
    case 198u: goto L_0891CEA8;
    case 199u: goto L_0891CEB0;
    case 200u: goto L_0891CEB8;
    case 201u: goto L_0891CEC8;
    case 202u: goto L_0891CEE4;
    case 203u: goto L_0891CF08;
    case 204u: goto L_0891CF20;
    case 205u: goto L_0891CF2C;
    case 206u: goto L_0891CF34;
    case 207u: goto L_0891CF38;
    case 208u: goto L_0891CF60;
    case 209u: goto L_0891CF80;
    case 210u: goto L_0891CF88;
    case 211u: goto L_0891CF94;
    case 212u: goto L_0891CFAC;
    case 213u: goto L_0891CFB8;
    case 214u: goto L_0891CFBC;
    case 215u: goto L_0891CFDC;
    case 216u: goto L_0891CFE8;
    case 217u: goto L_0891CFF0;
    case 218u: goto L_0891CFFC;
    case 219u: goto L_0891D004;
    case 220u: goto L_0891D018;
    case 221u: goto L_0891D02C;
    case 222u: goto L_0891D044;
    case 223u: goto L_0891D048;
    case 224u: goto L_0891D050;
    case 225u: goto L_0891D068;
    case 226u: goto L_0891D074;
    case 227u: goto L_0891D078;
    case 228u: goto L_0891D098;
    case 229u: goto L_0891D0C0;
    case 230u: goto L_0891D0CC;
    case 231u: goto L_0891D0D4;
    case 232u: goto L_0891D0E0;
    case 233u: goto L_0891D0E8;
    case 234u: goto L_0891D0FC;
    case 235u: goto L_0891D110;
    case 236u: goto L_0891D128;
    case 237u: goto L_0891D12C;
    case 238u: goto L_0891D134;
    case 239u: goto L_0891D14C;
    case 240u: goto L_0891D158;
    case 241u: goto L_0891D174;
    case 242u: goto L_0891D190;
    case 243u: goto L_0891D1A8;
    case 244u: goto L_0891D1B4;
    case 245u: goto L_0891D1C0;
    case 246u: goto L_0891D1DC;
    case 247u: goto L_0891D1E8;
    case 248u: goto L_0891D1F8;
    case 249u: goto L_0891D204;
    case 250u: goto L_0891D214;
    case 251u: goto L_0891D220;
    case 252u: goto L_0891D22C;
    case 253u: goto L_0891D238;
    case 254u: goto L_0891D23C;
    case 255u: goto L_0891D24C;
    case 256u: goto L_0891D264;
    case 257u: goto L_0891D270;
    case 258u: goto L_0891D27C;
    case 259u: goto L_0891D284;
    case 260u: goto L_0891D294;
    case 261u: goto L_0891D29C;
    case 262u: goto L_0891D2A8;
    case 263u: goto L_0891D2AC;
    case 264u: goto L_0891D2C0;
    case 265u: goto L_0891D2DC;
    case 266u: goto L_0891D2E4;
    case 267u: goto L_0891D2F0;
    case 268u: goto L_0891D2F8;
    case 269u: goto L_0891D308;
    case 270u: goto L_0891D314;
    case 271u: goto L_0891D31C;
    case 272u: goto L_0891D324;
    case 273u: goto L_0891D334;
    case 274u: goto L_0891D340;
    case 275u: goto L_0891D348;
    case 276u: goto L_0891D350;
    case 277u: goto L_0891D364;
    case 278u: goto L_0891D370;
    case 279u: goto L_0891D378;
    case 280u: goto L_0891D384;
    case 281u: goto L_0891D38C;
    case 282u: goto L_0891D3A0;
    case 283u: goto L_0891D3B4;
    case 284u: goto L_0891D3CC;
    case 285u: goto L_0891D3D0;
    case 286u: goto L_0891D3D8;
    case 287u: goto L_0891D3F0;
    case 288u: goto L_0891D3FC;
    case 289u: goto L_0891D400;
    case 290u: goto L_0891D418;
    case 291u: goto L_0891D44C;
    case 292u: goto L_0891D45C;
    case 293u: goto L_0891D474;
    case 294u: goto L_0891D494;
    case 295u: goto L_0891D4A0;
    case 296u: goto L_0891D4A8;
    case 297u: goto L_0891D4B4;
    case 298u: goto L_0891D4C0;
    case 299u: goto L_0891D4E8;
    case 300u: goto L_0891D4F8;
    case 301u: goto L_0891D500;
    case 302u: goto L_0891D508;
    case 303u: goto L_0891D514;
    case 304u: goto L_0891D51C;
    case 305u: goto L_0891D534;
    case 306u: goto L_0891D544;
    case 307u: goto L_0891D564;
    case 308u: goto L_0891D5A0;
    case 309u: goto L_0891D5AC;
    case 310u: goto L_0891D5B8;
    case 311u: goto L_0891D5C8;
    case 312u: goto L_0891D5D4;
    case 313u: goto L_0891D5E0;
    case 314u: goto L_0891D5F4;
    case 315u: goto L_0891D600;
    case 316u: goto L_0891D610;
    case 317u: goto L_0891D61C;
    case 318u: goto L_0891D630;
    case 319u: goto L_0891D63C;
    case 320u: goto L_0891D650;
    case 321u: goto L_0891D660;
    case 322u: goto L_0891D670;
    case 323u: goto L_0891D678;
    case 324u: goto L_0891D684;
    case 325u: goto L_0891D698;
    case 326u: goto L_0891D6A4;
    case 327u: goto L_0891D6B4;
    case 328u: goto L_0891D6B8;
    case 329u: goto L_0891D6E0;
    case 330u: goto L_0891D708;
    case 331u: goto L_0891D714;
    case 332u: goto L_0891D71C;
    case 333u: goto L_0891D728;
    case 334u: goto L_0891D730;
    case 335u: goto L_0891D744;
    case 336u: goto L_0891D758;
    case 337u: goto L_0891D770;
    case 338u: goto L_0891D774;
    case 339u: goto L_0891D77C;
    case 340u: goto L_0891D794;
    case 341u: goto L_0891D7A0;
    case 342u: goto L_0891D7C4;
    case 343u: goto L_0891D7F0;
    case 344u: goto L_0891D800;
    case 345u: goto L_0891D81C;
    case 346u: goto L_0891D824;
    case 347u: goto L_0891D838;
    case 348u: goto L_0891D83C;
    case 349u: goto L_0891D858;
    case 350u: goto L_0891D860;
    case 351u: goto L_0891D864;
    case 352u: goto L_0891D884;
    case 353u: goto L_0891D894;
    case 354u: goto L_0891D8A8;
    case 355u: goto L_0891D8D8;
    case 356u: goto L_0891D900;
    case 357u: goto L_0891D924;
    case 358u: goto L_0891D93C;
    case 359u: goto L_0891D948;
    case 360u: goto L_0891D960;
    case 361u: goto L_0891D96C;
    case 362u: goto L_0891D974;
    case 363u: goto L_0891D990;
    case 364u: goto L_0891D9AC;
    case 365u: goto L_0891D9C8;
    case 366u: goto L_0891D9E8;
    case 367u: goto L_0891D9FC;
    case 368u: goto L_0891DA18;
    case 369u: goto L_0891DA44;
    case 370u: goto L_0891DA60;
    case 371u: goto L_0891DA70;
    case 372u: goto L_0891DA74;
    case 373u: goto L_0891DA88;
    case 374u: goto L_0891DA94;
    case 375u: goto L_0891DAB8;
    case 376u: goto L_0891DAC0;
    case 377u: goto L_0891DAD0;
    case 378u: goto L_0891DAFC;
    case 379u: goto L_0891DB14;
    case 380u: goto L_0891DB20;
    case 381u: goto L_0891DB28;
    case 382u: goto L_0891DB30;
    case 383u: goto L_0891DB40;
    case 384u: goto L_0891DB50;
    case 385u: goto L_0891DB78;
    case 386u: goto L_0891DB7C;
    case 387u: goto L_0891DB84;
    case 388u: goto L_0891DB98;
    case 389u: goto L_0891DBA4;
    case 390u: goto L_0891DBBC;
    case 391u: goto L_0891DBE0;
    case 392u: goto L_0891DC24;
    case 393u: goto L_0891DC30;
    case 394u: goto L_0891DC40;
    case 395u: goto L_0891DC4C;
    case 396u: goto L_0891DC58;
    case 397u: goto L_0891DC68;
    case 398u: goto L_0891DC74;
    case 399u: goto L_0891DC88;
    case 400u: goto L_0891DCA0;
    case 401u: goto L_0891DCA4;
    case 402u: goto L_0891DCAC;
    case 403u: goto L_0891DCB8;
    case 404u: goto L_0891DCC8;
    case 405u: goto L_0891DCE0;
    case 406u: goto L_0891DCE4;
    case 407u: goto L_0891DCEC;
    case 408u: goto L_0891DD04;
    case 409u: goto L_0891DD10;
    case 410u: goto L_0891DD3C;
    case 411u: goto L_0891DD4C;
    case 412u: goto L_0891DD58;
    case 413u: goto L_0891DD60;
    case 414u: goto L_0891DD70;
    case 415u: goto L_0891DD7C;
    case 416u: goto L_0891DD88;
    case 417u: goto L_0891DD90;
    case 418u: goto L_0891DDBC;
    case 419u: goto L_0891DDE0;
    case 420u: goto L_0891DDE8;
    case 421u: goto L_0891DDF8;
    case 422u: goto L_0891DDFC;
    case 423u: goto L_0891DE18;
    case 424u: goto L_0891DE40;
    case 425u: goto L_0891DE4C;
    case 426u: goto L_0891DE58;
    case 427u: goto L_0891DE78;
    case 428u: goto L_0891DE94;
    case 429u: goto L_0891DEA0;
    case 430u: goto L_0891DECC;
    case 431u: goto L_0891DED8;
    case 432u: goto L_0891DEF4;
    case 433u: goto L_0891DF10;
    case 434u: goto L_0891DF4C;
    case 435u: goto L_0891DF58;
    case 436u: goto L_0891DF7C;
    case 437u: goto L_0891DFA0;
    case 438u: goto L_0891DFE8;
    case 439u: goto L_0891DFF4;
    case 440u: goto L_0891E004;
    case 441u: goto L_0891E020;
    case 442u: goto L_0891E024;
    case 443u: goto L_0891E054;
    case 444u: goto L_0891E070;
    case 445u: goto L_0891E07C;
    case 446u: goto L_0891E088;
    case 447u: goto L_0891E09C;
    case 448u: goto L_0891E0D4;
    case 449u: goto L_0891E0F8;
    case 450u: goto L_0891E110;
    case 451u: goto L_0891E120;
    case 452u: goto L_0891E128;
    case 453u: goto L_0891E134;
    case 454u: goto L_0891E140;
    case 455u: goto L_0891E160;
    case 456u: goto L_0891E188;
    case 457u: goto L_0891E194;
    case 458u: goto L_0891E1A8;
    case 459u: goto L_0891E1C4;
    case 460u: goto L_0891E1E8;
    case 461u: goto L_0891E1F0;
    case 462u: goto L_0891E208;
    case 463u: goto L_0891E20C;
    case 464u: goto L_0891E228;
    case 465u: goto L_0891E244;
    case 466u: goto L_0891E254;
    case 467u: goto L_0891E278;
    case 468u: goto L_0891E290;
    case 469u: goto L_0891E294;
    case 470u: goto L_0891E29C;
    case 471u: goto L_0891E2A8;
    case 472u: goto L_0891E2BC;
    case 473u: goto L_0891E2C8;
    case 474u: goto L_0891E2E8;
    case 475u: goto L_0891E2F8;
    case 476u: goto L_0891E310;
    case 477u: goto L_0891E314;
    case 478u: goto L_0891E31C;
    case 479u: goto L_0891E334;
    case 480u: goto L_0891E340;
    case 481u: goto L_0891E354;
    case 482u: goto L_0891E374;
    case 483u: goto L_0891E390;
    case 484u: goto L_0891E394;
    case 485u: goto L_0891E3A8;
    case 486u: goto L_0891E3C0;
    case 487u: goto L_0891E404;
    case 488u: goto L_0891E41C;
    case 489u: goto L_0891E424;
    case 490u: goto L_0891E428;
    case 491u: goto L_0891E430;
    case 492u: goto L_0891E448;
    case 493u: goto L_0891E454;
    case 494u: goto L_0891E45C;
    case 495u: goto L_0891E468;
    case 496u: goto L_0891E470;
    case 497u: goto L_0891E494;
    case 498u: goto L_0891E4A8;
    case 499u: goto L_0891E4B4;
    case 500u: goto L_0891E4C8;
    case 501u: goto L_0891E4D0;
    case 502u: goto L_0891E4D8;
    case 503u: goto L_0891E4DC;
    case 504u: goto L_0891E4E4;
    case 505u: goto L_0891E4E8;
    case 506u: goto L_0891E50C;
    case 507u: goto L_0891E538;
    case 508u: goto L_0891E550;
    case 509u: goto L_0891E560;
    case 510u: goto L_0891E56C;
    case 511u: goto L_0891E578;
    case 512u: goto L_0891E590;
    case 513u: goto L_0891E5A0;
    case 514u: goto L_0891E5AC;
    case 515u: goto L_0891E5BC;
    case 516u: goto L_0891E5D4;
    case 517u: goto L_0891E5F0;
    case 518u: goto L_0891E5FC;
    case 519u: goto L_0891E60C;
    case 520u: goto L_0891E614;
    case 521u: goto L_0891E624;
    case 522u: goto L_0891E63C;
    case 523u: goto L_0891E648;
    case 524u: goto L_0891E64C;
    case 525u: goto L_0891E654;
    case 526u: goto L_0891E670;
    case 527u: goto L_0891E680;
    case 528u: goto L_0891E698;
    case 529u: goto L_0891E6AC;
    case 530u: goto L_0891E6B0;
    case 531u: goto L_0891E6C0;
    case 532u: goto L_0891E6D0;
    case 533u: goto L_0891E6D8;
    case 534u: goto L_0891E708;
    case 535u: goto L_0891E710;
    case 536u: goto L_0891E734;
    case 537u: goto L_0891E744;
    case 538u: goto L_0891E75C;
    case 539u: goto L_0891E768;
    case 540u: goto L_0891E774;
    case 541u: goto L_0891E7AC;
    case 542u: goto L_0891E7B4;
    case 543u: goto L_0891E7D4;
    case 544u: goto L_0891E7E4;
    case 545u: goto L_0891E808;
    case 546u: goto L_0891E818;
    case 547u: goto L_0891E850;
    case 548u: goto L_0891E86C;
    case 549u: goto L_0891E880;
    case 550u: goto L_0891E888;
    case 551u: goto L_0891E894;
    case 552u: goto L_0891E89C;
    case 553u: goto L_0891E8A8;
    case 554u: goto L_0891E8BC;
    case 555u: goto L_0891E8E0;
    case 556u: goto L_0891E8E8;
    case 557u: goto L_0891E8F8;
    case 558u: goto L_0891E90C;
    case 559u: goto L_0891E910;
    case 560u: goto L_0891E918;
    case 561u: goto L_0891E930;
    case 562u: goto L_0891E954;
    case 563u: goto L_0891E978;
    case 564u: goto L_0891E99C;
    case 565u: goto L_0891E9A0;
    case 566u: goto L_0891E9B4;
    case 567u: goto L_0891E9C4;
    case 568u: goto L_0891E9DC;
    case 569u: goto L_0891E9E4;
    case 570u: goto L_0891E9E8;
    case 571u: goto L_0891E9F4;
    case 572u: goto L_0891EA04;
    case 573u: goto L_0891EA18;
    case 574u: goto L_0891EA24;
    case 575u: goto L_0891EA44;
    case 576u: goto L_0891EA78;
    case 577u: goto L_0891EA80;
    case 578u: goto L_0891EA90;
    case 579u: goto L_0891EAA4;
    case 580u: goto L_0891EAB0;
    case 581u: goto L_0891EABC;
    case 582u: goto L_0891EAD8;
    case 583u: goto L_0891EADC;
    case 584u: goto L_0891EAF0;
    case 585u: goto L_0891EB08;
    case 586u: goto L_0891EB20;
    case 587u: goto L_0891EB2C;
    case 588u: goto L_0891EB40;
    case 589u: goto L_0891EB70;
    case 590u: goto L_0891EB84;
    case 591u: goto L_0891EB8C;
    case 592u: goto L_0891EB98;
    case 593u: goto L_0891EBA0;
    case 594u: goto L_0891EBAC;
    case 595u: goto L_0891EBC0;
    case 596u: goto L_0891EBE4;
    case 597u: goto L_0891EBEC;
    case 598u: goto L_0891EBFC;
    case 599u: goto L_0891EC10;
    case 600u: goto L_0891EC14;
    case 601u: goto L_0891EC1C;
    case 602u: goto L_0891EC20;
    case 603u: goto L_0891EC34;
    case 604u: goto L_0891EC48;
    case 605u: goto L_0891EC5C;
    case 606u: goto L_0891EC74;
    case 607u: goto L_0891EC7C;
    case 608u: goto L_0891EC80;
    case 609u: goto L_0891EC8C;
    case 610u: goto L_0891EC9C;
    case 611u: goto L_0891ECB0;
    case 612u: goto L_0891ECBC;
    case 613u: goto L_0891ECC0;
    case 614u: goto L_0891ECE4;
    case 615u: goto L_0891ECEC;
    case 616u: goto L_0891ECF4;
    case 617u: goto L_0891ED08;
    case 618u: goto L_0891ED18;
    case 619u: goto L_0891ED2C;
    case 620u: goto L_0891ED3C;
    case 621u: goto L_0891ED50;
    case 622u: goto L_0891ED78;
    case 623u: goto L_0891ED9C;
    case 624u: goto L_0891EDB8;
    case 625u: goto L_0891EDE4;
    case 626u: goto L_0891EDF0;
    case 627u: goto L_0891EDFC;
    case 628u: goto L_0891EE04;
    case 629u: goto L_0891EE08;
    case 630u: goto L_0891EE1C;
    case 631u: goto L_0891EE38;
    case 632u: goto L_0891EE54;
    case 633u: goto L_0891EE60;
    case 634u: goto L_0891EE6C;
    case 635u: goto L_0891EE7C;
    case 636u: goto L_0891EE88;
    case 637u: goto L_0891EE90;
    case 638u: goto L_0891EE9C;
    case 639u: goto L_0891EEA4;
    case 640u: goto L_0891EEB8;
    case 641u: goto L_0891EEBC;
    case 642u: goto L_0891EED4;
    case 643u: goto L_0891EEE0;
    case 644u: goto L_0891EF00;
    case 645u: goto L_0891EF10;
    case 646u: goto L_0891EF1C;
    case 647u: goto L_0891EF48;
    case 648u: goto L_0891EF54;
    case 649u: goto L_0891EF7C;
    case 650u: goto L_0891EF8C;
    case 651u: goto L_0891EF98;
    case 652u: goto L_0891EFA4;
    case 653u: goto L_0891EFAC;
    case 654u: goto L_0891EFCC;
    case 655u: goto L_0891EFE8;
    case 656u: goto L_0891EFF0;
    case 657u: goto L_0891F00C;
    case 658u: goto L_0891F020;
    case 659u: goto L_0891F048;
    case 660u: goto L_0891F054;
    case 661u: goto L_0891F060;
    case 662u: goto L_0891F068;
    case 663u: goto L_0891F074;
    case 664u: goto L_0891F088;
    case 665u: goto L_0891F090;
    case 666u: goto L_0891F09C;
    case 667u: goto L_0891F0A4;
    case 668u: goto L_0891F0B0;
    case 669u: goto L_0891F0BC;
    case 670u: goto L_0891F0D0;
    case 671u: goto L_0891F0DC;
    case 672u: goto L_0891F0E4;
    case 673u: goto L_0891F0F0;
    case 674u: goto L_0891F0FC;
    case 675u: goto L_0891F108;
    case 676u: goto L_0891F120;
    case 677u: goto L_0891F128;
    case 678u: goto L_0891F138;
    case 679u: goto L_0891F144;
    case 680u: goto L_0891F150;
    case 681u: goto L_0891F164;
    case 682u: goto L_0891F170;
    case 683u: goto L_0891F178;
    case 684u: goto L_0891F188;
    case 685u: goto L_0891F1A0;
    case 686u: goto L_0891F1BC;
    case 687u: goto L_0891F1D8;
    case 688u: goto L_0891F1E8;
    case 689u: goto L_0891F1F8;
    case 690u: goto L_0891F20C;
    case 691u: goto L_0891F238;
    case 692u: goto L_0891F244;
    case 693u: goto L_0891F24C;
    case 694u: goto L_0891F268;
    case 695u: goto L_0891F274;
    case 696u: goto L_0891F278;
    case 697u: goto L_0891F280;
    case 698u: goto L_0891F294;
    case 699u: goto L_0891F2A0;
    case 700u: goto L_0891F2B0;
    case 701u: goto L_0891F2BC;
    case 702u: goto L_0891F2C4;
    case 703u: goto L_0891F2D0;
    case 704u: goto L_0891F2D8;
    case 705u: goto L_0891F2EC;
    case 706u: goto L_0891F300;
    case 707u: goto L_0891F30C;
    case 708u: goto L_0891F314;
    case 709u: goto L_0891F31C;
    case 710u: goto L_0891F32C;
    case 711u: goto L_0891F330;
    case 712u: goto L_0891F34C;
    case 713u: goto L_0891F370;
    case 714u: goto L_0891F378;
    case 715u: goto L_0891F384;
    case 716u: goto L_0891F38C;
    case 717u: goto L_0891F3A0;
    case 718u: goto L_0891F3AC;
    case 719u: goto L_0891F3B4;
    case 720u: goto L_0891F3C4;
    case 721u: goto L_0891F3D0;
    case 722u: goto L_0891F3D4;
    case 723u: goto L_0891F3E0;
    case 724u: goto L_0891F3EC;
    case 725u: goto L_0891F3F8;
    case 726u: goto L_0891F408;
    case 727u: goto L_0891F40C;
    case 728u: goto L_0891F424;
    case 729u: goto L_0891F448;
    case 730u: goto L_0891F454;
    case 731u: goto L_0891F468;
    case 732u: goto L_0891F474;
    case 733u: goto L_0891F47C;
    case 734u: goto L_0891F490;
    case 735u: goto L_0891F4A4;
    case 736u: goto L_0891F4B4;
    case 737u: goto L_0891F4C4;
    case 738u: goto L_0891F4D4;
    case 739u: goto L_0891F4D8;
    case 740u: goto L_0891F4E4;
    case 741u: goto L_0891F508;
    case 742u: goto L_0891F528;
    case 743u: goto L_0891F55C;
    case 744u: goto L_0891F560;
    case 745u: goto L_0891F570;
    case 746u: goto L_0891F58C;
    case 747u: goto L_0891F5C0;
    case 748u: goto L_0891F5CC;
    case 749u: goto L_0891F5DC;
    case 750u: goto L_0891F5F0;
    case 751u: goto L_0891F5FC;
    case 752u: goto L_0891F608;
    case 753u: goto L_0891F620;
    case 754u: goto L_0891F644;
    case 755u: goto L_0891F650;
    case 756u: goto L_0891F660;
    case 757u: goto L_0891F678;
    case 758u: goto L_0891F680;
    case 759u: goto L_0891F68C;
    case 760u: goto L_0891F698;
    case 761u: goto L_0891F6B4;
    case 762u: goto L_0891F6DC;
    case 763u: goto L_0891F70C;
    case 764u: goto L_0891F730;
    case 765u: goto L_0891F734;
    case 766u: goto L_0891F744;
    case 767u: goto L_0891F760;
    case 768u: goto L_0891F7B4;
    case 769u: goto L_0891F7C0;
    case 770u: goto L_0891F7D0;
    case 771u: goto L_0891F7E0;
    case 772u: goto L_0891F7EC;
    case 773u: goto L_0891F7FC;
    case 774u: goto L_0891F814;
    case 775u: goto L_0891F82C;
    case 776u: goto L_0891F838;
    case 777u: goto L_0891F844;
    case 778u: goto L_0891F850;
    case 779u: goto L_0891F860;
    case 780u: goto L_0891F870;
    case 781u: goto L_0891F87C;
    case 782u: goto L_0891F88C;
    case 783u: goto L_0891F8A4;
    case 784u: goto L_0891F8BC;
    case 785u: goto L_0891F8C8;
    case 786u: goto L_0891F8D8;
    case 787u: goto L_0891F8E8;
    case 788u: goto L_0891F910;
    case 789u: goto L_0891F92C;
    case 790u: goto L_0891F938;
    case 791u: goto L_0891F95C;
    case 792u: goto L_0891F974;
    case 793u: goto L_0891F978;
    case 794u: goto L_0891F984;
    case 795u: goto L_0891F998;
    case 796u: goto L_0891F9BC;
    case 797u: goto L_0891F9CC;
    case 798u: goto L_0891F9D8;
    case 799u: goto L_0891F9F4;
    case 800u: goto L_0891FA08;
    case 801u: goto L_0891FA30;
    case 802u: goto L_0891FA84;
    case 803u: goto L_0891FAA8;
    case 804u: goto L_0891FAB8;
    case 805u: goto L_0891FAD4;
    case 806u: goto L_0891FAE4;
    case 807u: goto L_0891FB14;
    case 808u: goto L_0891FB4C;
    case 809u: goto L_0891FB68;
    case 810u: goto L_0891FB74;
    case 811u: goto L_0891FB80;
    case 812u: goto L_0891FB98;
    case 813u: goto L_0891FB9C;
    case 814u: goto L_0891FBAC;
    case 815u: goto L_0891FBB8;
    case 816u: goto L_0891FBEC;
    case 817u: goto L_0891FBF4;
    case 818u: goto L_0891FC04;
    case 819u: goto L_0891FC10;
    case 820u: goto L_0891FC34;
    case 821u: goto L_0891FC40;
    case 822u: goto L_0891FC48;
    case 823u: goto L_0891FC54;
    case 824u: goto L_0891FC5C;
    case 825u: goto L_0891FC94;
    case 826u: goto L_0891FCBC;
    case 827u: goto L_0891FCE0;
    case 828u: goto L_0891FCE8;
    case 829u: goto L_0891FD08;
    case 830u: goto L_0891FD1C;
    case 831u: goto L_0891FD30;
    case 832u: goto L_0891FD40;
    case 833u: goto L_0891FD4C;
    case 834u: goto L_0891FD68;
    case 835u: goto L_0891FD80;
    case 836u: goto L_0891FD88;
    case 837u: goto L_0891FDAC;
    case 838u: goto L_0891FDC0;
    case 839u: goto L_0891FDE4;
    case 840u: goto L_0891FE0C;
    case 841u: goto L_0891FE28;
    case 842u: goto L_0891FE38;
    case 843u: goto L_0891FE58;
    case 844u: goto L_0891FE60;
    case 845u: goto L_0891FE80;
    case 846u: goto L_0891FE98;
    case 847u: goto L_0891FEB8;
    case 848u: goto L_0891FEC8;
    case 849u: goto L_0891FED4;
    case 850u: goto L_0891FEF0;
    case 851u: goto L_0891FF18;
    case 852u: goto L_0891FF40;
    case 853u: goto L_0891FF50;
    case 854u: goto L_0891FF5C;
    case 855u: goto L_0891FF68;
    case 856u: goto L_0891FF74;
    case 857u: goto L_0891FF78;
    case 858u: goto L_0891FF94;
    case 859u: goto L_0891FFB4;
    case 860u: goto L_0891FFBC;
    case 861u: goto L_0891FFC4;
    case 862u: goto L_0891FFD8;
    case 863u: goto L_0891FFE8;
    case 864u: goto L_0891FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0891C000:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C014:
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    ctx.set_gpr(31, 0x0891C064u);
    // nop
    goto L_0891C110;
L_0891C064:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[21] + 0u);
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
L_0891C0CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C0F8;
      }
      goto L_0891C0E4;
    }
L_0891C0E4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891C0F8;
      }
      goto L_0891C0F0;
    }
L_0891C0F0:
    ctx.set_gpr(31, 0x0891C0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem) && ctx.pc == 0x0891C0F8u) goto L_0891C0F8;
    return;
L_0891C0F8:
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
L_0891C110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x0891C128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0891C128u) goto L_0891C128;
    return;
L_0891C128:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C138:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C16C;
      }
      goto L_0891C144;
    }
L_0891C144:
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, ctx.gpr[3] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C168;
      }
      goto L_0891C160;
    }
L_0891C160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C17C;
      }
      goto L_0891C168;
    }
L_0891C168:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0891C16C;
L_0891C16C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C144;
      }
      goto L_0891C178;
    }
L_0891C178:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891C17C;
L_0891C17C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C184:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C1A8;
      }
      goto L_0891C190;
    }
L_0891C190:
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, ctx.gpr[2] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C1AC;
      }
      goto L_0891C1A8;
    }
L_0891C1A8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891C1AC;
L_0891C1AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C1B4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C1D4;
      }
      goto L_0891C1C0;
    }
L_0891C1C0:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C1D8;
      }
      goto L_0891C1D4;
    }
L_0891C1D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0891C1D8;
L_0891C1D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C1E0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C220;
      }
      goto L_0891C1EC;
    }
L_0891C1EC:
    ctx.set_gpr(8, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(7, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(7, ctx.gpr[3] & ctx.gpr[7]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    goto L_0891C220;
L_0891C220:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C228:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C248;
      }
      goto L_0891C234;
    }
L_0891C234:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C24C;
      }
      goto L_0891C248;
    }
L_0891C248:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0891C24C;
L_0891C24C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C254:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C294;
      }
      goto L_0891C260;
    }
L_0891C260:
    ctx.set_gpr(8, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(7, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(7, ctx.gpr[3] & ctx.gpr[7]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    goto L_0891C294;
L_0891C294:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C29C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C2BC;
      }
      goto L_0891C2A8;
    }
L_0891C2A8:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C2C0;
      }
      goto L_0891C2BC;
    }
L_0891C2BC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891C2C0;
L_0891C2C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C2C8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C300;
      }
      goto L_0891C2D4;
    }
L_0891C2D4:
    ctx.set_gpr(7, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, ctx.gpr[3] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(7, ~(ctx.gpr[8] | 0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[8] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    goto L_0891C300;
L_0891C300:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C308:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C370;
      }
      goto L_0891C330;
    }
L_0891C330:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C370;
      }
      goto L_0891C33C;
    }
L_0891C33C:
    ctx.set_gpr(31, 0x0891C344u);
    // nop
    goto L_0891C228;
L_0891C344:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891C358u);
    // nop
    goto L_0891C228;
L_0891C358:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891C36Cu);
    // nop
    goto L_0891C228;
L_0891C36C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_0891C370;
L_0891C370:
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
L_0891C38C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C3F4;
      }
      goto L_0891C3B4;
    }
L_0891C3B4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C3F4;
      }
      goto L_0891C3C0;
    }
L_0891C3C0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891C3CCu);
    // nop
    goto L_0891C254;
L_0891C3CC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0891C3E0u);
    // nop
    goto L_0891C254;
L_0891C3E0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0891C3F4u);
    // nop
    goto L_0891C254;
L_0891C3F4:
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
L_0891C410:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C468;
      }
      goto L_0891C440;
    }
L_0891C440:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891C44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0891C44Cu) goto L_0891C44C;
    return;
L_0891C44C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C460;
      }
      goto L_0891C454;
    }
L_0891C454:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891C460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0891C460u) goto L_0891C460;
    return;
L_0891C460:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0891C468;
L_0891C468:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891C47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0891C47Cu) goto L_0891C47C;
    return;
L_0891C47C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C4A4;
      }
      goto L_0891C490;
    }
L_0891C490:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0891C49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C49Cu) goto L_0891C49C;
    return;
L_0891C49C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0891C4A4;
L_0891C4A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C4BC;
      }
      goto L_0891C4AC;
    }
L_0891C4AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0891C4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0891C4BCu) goto L_0891C4BC;
    return;
L_0891C4BC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891C4D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C4D8u) goto L_0891C4D8;
    return;
L_0891C4D8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C530;
      }
      goto L_0891C4E4;
    }
L_0891C4E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12080));
    ctx.set_gpr(31, 0x0891C508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 461u, 0x08955FA4u>(ctx, &aot_mem) && ctx.pc == 0x0891C508u) goto L_0891C508;
    return;
L_0891C508:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0891C524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 131u, 0x08910840u>(ctx, &aot_mem) && ctx.pc == 0x0891C524u) goto L_0891C524;
    return;
L_0891C524:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C544;
      }
      goto L_0891C530;
    }
L_0891C530:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0891C540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 131u, 0x08910840u>(ctx, &aot_mem) && ctx.pc == 0x0891C540u) goto L_0891C540;
    return;
L_0891C540:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891C544;
L_0891C544:
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
L_0891C560:
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
          goto L_0891C5B0;
      }
      goto L_0891C588;
    }
L_0891C588:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891C594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0891C594u) goto L_0891C594;
    return;
L_0891C594:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C5A8;
      }
      goto L_0891C59C;
    }
L_0891C59C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891C5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0891C5A8u) goto L_0891C5A8;
    return;
L_0891C5A8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0891C5B0;
L_0891C5B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891C5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0891C5C4u) goto L_0891C5C4;
    return;
L_0891C5C4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C5F4;
      }
      goto L_0891C5D8;
    }
L_0891C5D8:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C5F4;
      }
      goto L_0891C5F0;
    }
L_0891C5F0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0891C5F4;
L_0891C5F4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C620;
      }
      goto L_0891C5FC;
    }
L_0891C5FC:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C620;
      }
      goto L_0891C614;
    }
L_0891C614:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891C620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C620u) goto L_0891C620;
    return;
L_0891C620:
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
L_0891C63C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C668;
      }
      goto L_0891C65C;
    }
L_0891C65C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0891C668;
L_0891C668:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C698;
      }
      goto L_0891C674;
    }
L_0891C674:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C698;
      }
      goto L_0891C690;
    }
L_0891C690:
    ctx.set_gpr(31, 0x0891C698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0891C698u) goto L_0891C698;
    return;
L_0891C698:
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
L_0891C6B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0891C6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C6D8u) goto L_0891C6D8;
    return;
L_0891C6D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891C6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 250u, 0x088E13E8u>(ctx, &aot_mem) && ctx.pc == 0x0891C6E4u) goto L_0891C6E4;
    return;
L_0891C6E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891C70Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C70Cu) goto L_0891C70C;
    return;
L_0891C70C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C7D8;
      }
      goto L_0891C71C;
    }
L_0891C71C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(18, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(31, 0x0891C738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891C738u) goto L_0891C738;
    return;
L_0891C738:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891C748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891C748u) goto L_0891C748;
    return;
L_0891C748:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[28] + static_cast<std::uint32_t>(-32692));
    ctx.set_gpr(31, 0x0891C758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891C758u) goto L_0891C758;
    return;
L_0891C758:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891C76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948028u>(ctx, &aot_mem) && ctx.pc == 0x0891C76Cu) goto L_0891C76C;
    return;
L_0891C76C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891C788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C788u) goto L_0891C788;
    return;
L_0891C788:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32692));
    ctx.set_gpr(31, 0x0891C798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0891C798u) goto L_0891C798;
    return;
L_0891C798:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891C7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0891C7B0u) goto L_0891C7B0;
    return;
L_0891C7B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891C7C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C7C8u) goto L_0891C7C8;
    return;
L_0891C7C8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891C7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 22u, 0x08948218u>(ctx, &aot_mem) && ctx.pc == 0x0891C7D8u) goto L_0891C7D8;
    return;
L_0891C7D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0891C7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 456u, 0x08911DB4u>(ctx, &aot_mem) && ctx.pc == 0x0891C7F0u) goto L_0891C7F0;
    return;
L_0891C7F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891C808u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C808u) goto L_0891C808;
    return;
L_0891C808:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C840;
      }
      goto L_0891C814;
    }
L_0891C814:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11996));
    ctx.set_gpr(31, 0x0891C828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 456u, 0x08911DB4u>(ctx, &aot_mem) && ctx.pc == 0x0891C828u) goto L_0891C828;
    return;
L_0891C828:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891C840u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C840u) goto L_0891C840;
    return;
L_0891C840:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C85C;
      }
      goto L_0891C854;
    }
L_0891C854:
    ctx.set_gpr(31, 0x0891C85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891C85Cu) goto L_0891C85C;
    return;
L_0891C85C:
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
L_0891C87C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0891C8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0891C8A0u) goto L_0891C8A0;
    return;
L_0891C8A0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891C8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 549u, 0x0895655Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C8C0u) goto L_0891C8C0;
    return;
L_0891C8C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C91C;
      }
      goto L_0891C8CC;
    }
L_0891C8CC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891C8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C8D8u) goto L_0891C8D8;
    return;
L_0891C8D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891C8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 88u, 0x088F4808u>(ctx, &aot_mem) && ctx.pc == 0x0891C8E4u) goto L_0891C8E4;
    return;
L_0891C8E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891C8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C8F4u) goto L_0891C8F4;
    return;
L_0891C8F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0891C90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 484u, 0x08911F74u>(ctx, &aot_mem) && ctx.pc == 0x0891C90Cu) goto L_0891C90C;
    return;
L_0891C90C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0891C91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 576u, 0x08956714u>(ctx, &aot_mem) && ctx.pc == 0x0891C91Cu) goto L_0891C91C;
    return;
L_0891C91C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891C934u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C934u) goto L_0891C934;
    return;
L_0891C934:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C958;
      }
      goto L_0891C940;
    }
L_0891C940:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891C958u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C958u) goto L_0891C958;
    return;
L_0891C958:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C978;
      }
      goto L_0891C964;
    }
L_0891C964:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C978;
      }
      goto L_0891C96C;
    }
L_0891C96C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x0891C978u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C978u) goto L_0891C978;
    return;
L_0891C978:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CAB8;
      }
      goto L_0891C984;
    }
L_0891C984:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891C99Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891C99Cu) goto L_0891C99C;
    return;
L_0891C99C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C9B4;
      }
      goto L_0891C9A8;
    }
L_0891C9A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0891C9B4;
L_0891C9B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C9DC;
      }
      goto L_0891C9D4;
    }
L_0891C9D4:
    ctx.set_gpr(31, 0x0891C9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0891C9DCu) goto L_0891C9DC;
    return;
L_0891C9DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x0891C9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 351u, 0x08945908u>(ctx, &aot_mem) && ctx.pc == 0x0891C9F4u) goto L_0891C9F4;
    return;
L_0891C9F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891CA10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891CA10u) goto L_0891CA10;
    return;
L_0891CA10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0891CA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0891CA2Cu) goto L_0891CA2C;
    return;
L_0891CA2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA60;
      }
      goto L_0891CA4C;
    }
L_0891CA4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA74;
      }
      goto L_0891CA60;
    }
L_0891CA60:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0891CA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0891CA74u) goto L_0891CA74;
    return;
L_0891CA74:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA98;
      }
      goto L_0891CA90;
    }
L_0891CA90:
    ctx.set_gpr(31, 0x0891CA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891CA98u) goto L_0891CA98;
    return;
L_0891CA98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CAAC;
      }
      goto L_0891CAA4;
    }
L_0891CAA4:
    ctx.set_gpr(31, 0x0891CAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891CAACu) goto L_0891CAAC;
    return;
L_0891CAAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CAD0;
      }
      goto L_0891CAB8;
    }
L_0891CAB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CACC;
      }
      goto L_0891CAC4;
    }
L_0891CAC4:
    ctx.set_gpr(31, 0x0891CACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891CACCu) goto L_0891CACC;
    return;
L_0891CACC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891CAD0;
L_0891CAD0:
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
L_0891CAEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0891CB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 61u, 0x08910424u>(ctx, &aot_mem) && ctx.pc == 0x0891CB04u) goto L_0891CB04;
    return;
L_0891CB04:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CB24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891CB48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891CB48u) goto L_0891CB48;
    return;
L_0891CB48:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891CB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 435u, 0x08945EF4u>(ctx, &aot_mem) && ctx.pc == 0x0891CB54u) goto L_0891CB54;
    return;
L_0891CB54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CB68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x0891CBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 127u, 0x08910800u>(ctx, &aot_mem) && ctx.pc == 0x0891CBA4u) goto L_0891CBA4;
    return;
L_0891CBA4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891CBBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891CBBCu) goto L_0891CBBC;
    return;
L_0891CBBC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x0891CBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 131u, 0x08910840u>(ctx, &aot_mem) && ctx.pc == 0x0891CBD0u) goto L_0891CBD0;
    return;
L_0891CBD0:
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
L_0891CBE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0891CC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 271u, 0x089111ACu>(ctx, &aot_mem) && ctx.pc == 0x0891CC30u) goto L_0891CC30;
    return;
L_0891CC30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CC78;
      }
      goto L_0891CC38;
    }
L_0891CC38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891CC5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891CC5Cu) goto L_0891CC5C;
    return;
L_0891CC5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891CC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 131u, 0x08910840u>(ctx, &aot_mem) && ctx.pc == 0x0891CC70u) goto L_0891CC70;
    return;
L_0891CC70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CCA0;
      }
      goto L_0891CC78;
    }
L_0891CC78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0891CC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 131u, 0x08910840u>(ctx, &aot_mem) && ctx.pc == 0x0891CC94u) goto L_0891CC94;
    return;
L_0891CC94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CCA4;
      }
      goto L_0891CCA0;
    }
L_0891CCA0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891CCA4;
L_0891CCA4:
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
L_0891CCBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29872)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891CD00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 329u, 0x08911574u>(ctx, &aot_mem) && ctx.pc == 0x0891CD00u) goto L_0891CD00;
    return;
L_0891CD00:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891CD40;
      }
      goto L_0891CD0C;
    }
L_0891CD0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CD40;
      }
      goto L_0891CD1C;
    }
L_0891CD1C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891CD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 127u, 0x08910800u>(ctx, &aot_mem) && ctx.pc == 0x0891CD2Cu) goto L_0891CD2C;
    return;
L_0891CD2C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0891CD40;
      }
      goto L_0891CD34;
    }
L_0891CD34:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CF38;
      }
      goto L_0891CD40;
    }
L_0891CD40:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0891CD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0891CD4Cu) goto L_0891CD4C;
    return;
L_0891CD4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891CD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 341u, 0x088F1D28u>(ctx, &aot_mem) && ctx.pc == 0x0891CD58u) goto L_0891CD58;
    return;
L_0891CD58:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0891CD78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x0891CD78u) goto L_0891CD78;
    return;
L_0891CD78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(20, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CD9C;
      }
      goto L_0891CD94;
    }
L_0891CD94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CDA4;
      }
      goto L_0891CD9C;
    }
L_0891CD9C:
    ctx.set_gpr(20, 2225u << 16u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(8240));
    goto L_0891CDA4;
L_0891CDA4:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CDE0;
      }
      goto L_0891CDB8;
    }
L_0891CDB8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891CDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0891CDC4u) goto L_0891CDC4;
    return;
L_0891CDC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CDD8;
      }
      goto L_0891CDCC;
    }
L_0891CDCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891CDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0891CDD8u) goto L_0891CDD8;
    return;
L_0891CDD8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0891CDE0;
L_0891CDE0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0891CDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0891CDF4u) goto L_0891CDF4;
    return;
L_0891CDF4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CE1C;
      }
      goto L_0891CE08;
    }
L_0891CE08:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x0891CE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0891CE14u) goto L_0891CE14;
    return;
L_0891CE14:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0891CE1C;
L_0891CE1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CE34;
      }
      goto L_0891CE24;
    }
L_0891CE24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0891CE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0891CE34u) goto L_0891CE34;
    return;
L_0891CE34:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CE74;
      }
      goto L_0891CE4C;
    }
L_0891CE4C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891CE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0891CE58u) goto L_0891CE58;
    return;
L_0891CE58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CE6C;
      }
      goto L_0891CE60;
    }
L_0891CE60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891CE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0891CE6Cu) goto L_0891CE6C;
    return;
L_0891CE6C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0891CE74;
L_0891CE74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891CE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0891CE88u) goto L_0891CE88;
    return;
L_0891CE88:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CEB0;
      }
      goto L_0891CE9C;
    }
L_0891CE9C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0891CEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0891CEA8u) goto L_0891CEA8;
    return;
L_0891CEA8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0891CEB0;
L_0891CEB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CEC8;
      }
      goto L_0891CEB8;
    }
L_0891CEB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0891CEC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0891CEC8u) goto L_0891CEC8;
    return;
L_0891CEC8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891CEE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891CEE4u) goto L_0891CEE4;
    return;
L_0891CEE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0891CF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 244u, 0x088C54E4u>(ctx, &aot_mem) && ctx.pc == 0x0891CF08u) goto L_0891CF08;
    return;
L_0891CF08:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0891CF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 837u, 0x0890FF10u>(ctx, &aot_mem) && ctx.pc == 0x0891CF20u) goto L_0891CF20;
    return;
L_0891CF20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CF34;
      }
      goto L_0891CF2C;
    }
L_0891CF2C:
    ctx.set_gpr(31, 0x0891CF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891CF34u) goto L_0891CF34;
    return;
L_0891CF34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0891CF38;
L_0891CF38:
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
L_0891CF60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30648)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D078;
      }
      goto L_0891CF80;
    }
L_0891CF80:
    ctx.set_gpr(31, 0x0891CF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x0891CF88u) goto L_0891CF88;
    return;
L_0891CF88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891CF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0891CF94u) goto L_0891CF94;
    return;
L_0891CF94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891CFACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891CFACu) goto L_0891CFAC;
    return;
L_0891CFAC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CFBC;
      }
      goto L_0891CFB8;
    }
L_0891CFB8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_0891CFBC;
L_0891CFBC:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(30648), ctx.gpr[17]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11988)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D004;
      }
      goto L_0891CFDC;
    }
L_0891CFDC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891CFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0891CFE8u) goto L_0891CFE8;
    return;
L_0891CFE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CFFC;
      }
      goto L_0891CFF0;
    }
L_0891CFF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891CFFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0891CFFCu) goto L_0891CFFC;
    return;
L_0891CFFC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0891D004;
L_0891D004:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891D018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0891D018u) goto L_0891D018;
    return;
L_0891D018:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D048;
      }
      goto L_0891D02C;
    }
L_0891D02C:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D048;
      }
      goto L_0891D044;
    }
L_0891D044:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0891D048;
L_0891D048:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D074;
      }
      goto L_0891D050;
    }
L_0891D050:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D074;
      }
      goto L_0891D068;
    }
L_0891D068:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891D074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D074u) goto L_0891D074;
    return;
L_0891D074:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0891D078;
L_0891D078:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30648));
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
L_0891D098:
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
          goto L_0891D0E8;
      }
      goto L_0891D0C0;
    }
L_0891D0C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891D0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0891D0CCu) goto L_0891D0CC;
    return;
L_0891D0CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D0E0;
      }
      goto L_0891D0D4;
    }
L_0891D0D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891D0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0891D0E0u) goto L_0891D0E0;
    return;
L_0891D0E0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0891D0E8;
L_0891D0E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891D0FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0891D0FCu) goto L_0891D0FC;
    return;
L_0891D0FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D12C;
      }
      goto L_0891D110;
    }
L_0891D110:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D12C;
      }
      goto L_0891D128;
    }
L_0891D128:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0891D12C;
L_0891D12C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D158;
      }
      goto L_0891D134;
    }
L_0891D134:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D158;
      }
      goto L_0891D14C;
    }
L_0891D14C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891D158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D158u) goto L_0891D158;
    return;
L_0891D158:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
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
L_0891D174:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    goto L_0891D190;
L_0891D190:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[17]))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891D1A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D1A8u) goto L_0891D1A8;
    return;
L_0891D1A8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891D1C0;
      }
      goto L_0891D1B4;
    }
L_0891D1B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891D190;
      }
      goto L_0891D1C0;
    }
L_0891D1C0:
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
L_0891D1DC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D1E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D204;
      }
      goto L_0891D1F8;
    }
L_0891D1F8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D23C;
      }
      goto L_0891D204;
    }
L_0891D204:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(47));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891D220;
      }
      goto L_0891D214;
    }
L_0891D214:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891D22C;
      }
      goto L_0891D220;
    }
L_0891D220:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D23C;
      }
      goto L_0891D22C;
    }
L_0891D22C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x0891D238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x0891D238u) goto L_0891D238;
    return;
L_0891D238:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_0891D23C;
L_0891D23C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D24C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D270;
      }
      goto L_0891D264;
    }
L_0891D264:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D2AC;
      }
      goto L_0891D270;
    }
L_0891D270:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(47));
    ctx.set_gpr(31, 0x0891D27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x0891D27Cu) goto L_0891D27C;
    return;
L_0891D27C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D2A8;
      }
      goto L_0891D284;
    }
L_0891D284:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x0891D294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x0891D294u) goto L_0891D294;
    return;
L_0891D294:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D2A8;
      }
      goto L_0891D29C;
    }
L_0891D29C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D2AC;
      }
      goto L_0891D2A8;
    }
L_0891D2A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0891D2AC;
L_0891D2AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D2C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D348;
      }
      goto L_0891D2DC;
    }
L_0891D2DC:
    ctx.set_gpr(31, 0x0891D2E4u);
    // nop
    goto L_0891CF60;
L_0891D2E4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D400;
      }
      goto L_0891D2F0;
    }
L_0891D2F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D334;
      }
      goto L_0891D2F8;
    }
L_0891D2F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D31C;
      }
      goto L_0891D308;
    }
L_0891D308:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891D314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D314u) goto L_0891D314;
    return;
L_0891D314:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0891D31C;
L_0891D31C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D334;
      }
      goto L_0891D324;
    }
L_0891D324:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0891D334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0891D334u) goto L_0891D334;
    return;
L_0891D334:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891D340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x0891D340u) goto L_0891D340;
    return;
L_0891D340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D400;
      }
      goto L_0891D348;
    }
L_0891D348:
    ctx.set_gpr(31, 0x0891D350u);
    // nop
    goto L_0891CF60;
L_0891D350:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D38C;
      }
      goto L_0891D364;
    }
L_0891D364:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891D370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0891D370u) goto L_0891D370;
    return;
L_0891D370:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D384;
      }
      goto L_0891D378;
    }
L_0891D378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891D384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0891D384u) goto L_0891D384;
    return;
L_0891D384:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0891D38C;
L_0891D38C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891D3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0891D3A0u) goto L_0891D3A0;
    return;
L_0891D3A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D3D0;
      }
      goto L_0891D3B4;
    }
L_0891D3B4:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D3D0;
      }
      goto L_0891D3CC;
    }
L_0891D3CC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0891D3D0;
L_0891D3D0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D3FC;
      }
      goto L_0891D3D8;
    }
L_0891D3D8:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D3FC;
      }
      goto L_0891D3F0;
    }
L_0891D3F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891D3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D3FCu) goto L_0891D3FC;
    return;
L_0891D3FC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0891D400;
L_0891D400:
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
L_0891D418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891D44Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D44Cu) goto L_0891D44C;
    return;
L_0891D44C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x0891D45Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D45Cu) goto L_0891D45C;
    return;
L_0891D45C:
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
L_0891D474:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11988)));
    ctx.set_gpr(31, 0x0891D494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0891D494u) goto L_0891D494;
    return;
L_0891D494:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D51C;
      }
      goto L_0891D4A0;
    }
L_0891D4A0:
    ctx.set_gpr(31, 0x0891D4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 218u, 0x0893CDFCu>(ctx, &aot_mem) && ctx.pc == 0x0891D4A8u) goto L_0891D4A8;
    return;
L_0891D4A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891D4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0891D4B4u) goto L_0891D4B4;
    return;
L_0891D4B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891D4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x0891D4C0u) goto L_0891D4C0;
    return;
L_0891D4C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11984));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0891D4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 691u, 0x08953010u>(ctx, &aot_mem) && ctx.pc == 0x0891D4E8u) goto L_0891D4E8;
    return;
L_0891D4E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D500;
      }
      goto L_0891D4F8;
    }
L_0891D4F8:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0891D500;
L_0891D500:
    ctx.set_gpr(31, 0x0891D508u);
    // nop
    goto L_0891D2C0;
L_0891D508:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D51C;
      }
      goto L_0891D514;
    }
L_0891D514:
    ctx.set_gpr(31, 0x0891D51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891D51Cu) goto L_0891D51C;
    return;
L_0891D51C:
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
L_0891D534:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0891D544u);
    // nop
    goto L_0891CF60;
L_0891D544:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D564:
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
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D5AC;
      }
      goto L_0891D5A0;
    }
L_0891D5A0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D5B8;
      }
      goto L_0891D5AC;
    }
L_0891D5AC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D6B8;
      }
      goto L_0891D5B8;
    }
L_0891D5B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0891D5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x0891D5C8u) goto L_0891D5C8;
    return;
L_0891D5C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D61C;
      }
      goto L_0891D5D4;
    }
L_0891D5D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891D5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891D5E0u) goto L_0891D5E0;
    return;
L_0891D5E0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D600;
      }
      goto L_0891D5F4;
    }
L_0891D5F4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D6B8;
      }
      goto L_0891D600;
    }
L_0891D600:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891D610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D610u) goto L_0891D610;
    return;
L_0891D610:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D660;
      }
      goto L_0891D61C;
    }
L_0891D61C:
    ctx.set_gpr(17, ctx.gpr[16] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D63C;
      }
      goto L_0891D630;
    }
L_0891D630:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D6B8;
      }
      goto L_0891D63C;
    }
L_0891D63C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891D650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0891D650u) goto L_0891D650;
    return;
L_0891D650:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0891D660;
L_0891D660:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32736));
    ctx.set_gpr(31, 0x0891D670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0891D670u) goto L_0891D670;
    return;
L_0891D670:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D684;
      }
      goto L_0891D678;
    }
L_0891D678:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D6B4;
      }
      goto L_0891D684;
    }
L_0891D684:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-1))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(47));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891D6B4;
      }
      goto L_0891D698;
    }
L_0891D698:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891D6B4;
      }
      goto L_0891D6A4;
    }
L_0891D6A4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32692));
    ctx.set_gpr(31, 0x0891D6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0891D6B4u) goto L_0891D6B4;
    return;
L_0891D6B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0891D6B8;
L_0891D6B8:
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
L_0891D6E0:
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
          goto L_0891D730;
      }
      goto L_0891D708;
    }
L_0891D708:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891D714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0891D714u) goto L_0891D714;
    return;
L_0891D714:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D728;
      }
      goto L_0891D71C;
    }
L_0891D71C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891D728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0891D728u) goto L_0891D728;
    return;
L_0891D728:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0891D730;
L_0891D730:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891D744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0891D744u) goto L_0891D744;
    return;
L_0891D744:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D774;
      }
      goto L_0891D758;
    }
L_0891D758:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D774;
      }
      goto L_0891D770;
    }
L_0891D770:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0891D774;
L_0891D774:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D7A0;
      }
      goto L_0891D77C;
    }
L_0891D77C:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D7A0;
      }
      goto L_0891D794;
    }
L_0891D794:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891D7A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D7A0u) goto L_0891D7A0;
    return;
L_0891D7A0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[16] & ctx.gpr[2]);
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
L_0891D7C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891D7F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D7F0u) goto L_0891D7F0;
    return;
L_0891D7F0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891D864;
      }
      goto L_0891D800;
    }
L_0891D800:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891D81Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D81Cu) goto L_0891D81C;
    return;
L_0891D81C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D83C;
      }
      goto L_0891D824;
    }
L_0891D824:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891D838u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D838u) goto L_0891D838;
    return;
L_0891D838:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0891D83C;
L_0891D83C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891D858u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D858u) goto L_0891D858;
    return;
L_0891D858:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D864;
      }
      goto L_0891D860;
    }
L_0891D860:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    goto L_0891D864;
L_0891D864:
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
L_0891D884:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0891D894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0891D894u) goto L_0891D894;
    return;
L_0891D894:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D8A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0891D8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0891D8D8u) goto L_0891D8D8;
    return;
L_0891D8D8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11968));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0891D900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0891D900u) goto L_0891D900;
    return;
L_0891D900:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11940));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x0891D924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x0891D924u) goto L_0891D924;
    return;
L_0891D924:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D948;
      }
      goto L_0891D93C;
    }
L_0891D93C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0891D948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D948u) goto L_0891D948;
    return;
L_0891D948:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D96C;
      }
      goto L_0891D960;
    }
L_0891D960:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0891D96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D96Cu) goto L_0891D96C;
    return;
L_0891D96C:
    ctx.set_gpr(31, 0x0891D974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 524u, 0x088E27E0u>(ctx, &aot_mem) && ctx.pc == 0x0891D974u) goto L_0891D974;
    return;
L_0891D974:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x0891D990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D990u) goto L_0891D990;
    return;
L_0891D990:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891D9ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D9ACu) goto L_0891D9AC;
    return;
L_0891D9AC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(304)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891D9C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D9C8u) goto L_0891D9C8;
    return;
L_0891D9C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891D9E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D9E8u) goto L_0891D9E8;
    return;
L_0891D9E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891D9FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891D9FCu) goto L_0891D9FC;
    return;
L_0891D9FC:
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
L_0891DA18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DA74;
      }
      goto L_0891DA44;
    }
L_0891DA44:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891DA60u);
    // nop
    goto L_0891E954;
L_0891DA60:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891DA70u);
    // nop
    goto L_0891E228;
L_0891DA70:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891DA74;
L_0891DA74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891DA44;
      }
      goto L_0891DA88;
    }
L_0891DA88:
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DB7C;
      }
      goto L_0891DA94;
    }
L_0891DA94:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DAC0;
      }
      goto L_0891DAB8;
    }
L_0891DAB8:
    ctx.set_gpr(31, 0x0891DAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891DAC0u) goto L_0891DAC0;
    return;
L_0891DAC0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0891DAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0891DAD0u) goto L_0891DAD0;
    return;
L_0891DAD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0891DAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 173u, 0x08908C04u>(ctx, &aot_mem) && ctx.pc == 0x0891DAFCu) goto L_0891DAFC;
    return;
L_0891DAFC:
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DB28;
      }
      goto L_0891DB14;
    }
L_0891DB14:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891DB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0891DB20u) goto L_0891DB20;
    return;
L_0891DB20:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_0891DB28;
L_0891DB28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DB40;
      }
      goto L_0891DB30;
    }
L_0891DB30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0891DB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0891DB40u) goto L_0891DB40;
    return;
L_0891DB40:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0891DB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0891DB50u) goto L_0891DB50;
    return;
L_0891DB50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0891DB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0891DB78u) goto L_0891DB78;
    return;
L_0891DB78:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_0891DB7C;
L_0891DB7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0891DA94;
      }
      goto L_0891DB84;
    }
L_0891DB84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891DB98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891DB98u) goto L_0891DB98;
    return;
L_0891DB98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x0891DBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0891DBA4u) goto L_0891DBA4;
    return;
L_0891DBA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891DBBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891DBBCu) goto L_0891DBBC;
    return;
L_0891DBBC:
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
L_0891DBE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DC30;
      }
      goto L_0891DC24;
    }
L_0891DC24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0891DC30;
L_0891DC30:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0891DC40u);
    // nop
    goto L_0891E160;
L_0891DC40:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DD60;
      }
      goto L_0891DC4C;
    }
L_0891DC4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x0891DC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 515u, 0x088E2748u>(ctx, &aot_mem) && ctx.pc == 0x0891DC58u) goto L_0891DC58;
    return;
L_0891DC58:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891DC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0891DC68u) goto L_0891DC68;
    return;
L_0891DC68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DD60;
      }
      goto L_0891DC74;
    }
L_0891DC74:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DCA4;
      }
      goto L_0891DC88;
    }
L_0891DC88:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DCA4;
      }
      goto L_0891DCA0;
    }
L_0891DCA0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0891DCA4;
L_0891DCA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DCB8;
      }
      goto L_0891DCAC;
    }
L_0891DCAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_0891DCB8;
L_0891DCB8:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DCE4;
      }
      goto L_0891DCC8;
    }
L_0891DCC8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DCE4;
      }
      goto L_0891DCE0;
    }
L_0891DCE0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0891DCE4;
L_0891DCE4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DD10;
      }
      goto L_0891DCEC;
    }
L_0891DCEC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891DD10;
      }
      goto L_0891DD04;
    }
L_0891DD04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891DD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0891DD10u) goto L_0891DD10;
    return;
L_0891DD10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0891DD3Cu);
    // nop
    goto L_0891E654;
L_0891DD3C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x0891DD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0891DD4Cu) goto L_0891DD4C;
    return;
L_0891DD4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DD60;
      }
      goto L_0891DD58;
    }
L_0891DD58:
    ctx.set_gpr(31, 0x0891DD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891DD60u) goto L_0891DD60;
    return;
L_0891DD60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DD7C;
      }
      goto L_0891DD70;
    }
L_0891DD70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0891DD7C;
L_0891DD7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DD90;
      }
      goto L_0891DD88;
    }
L_0891DD88:
    ctx.set_gpr(31, 0x0891DD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891DD90u) goto L_0891DD90;
    return;
L_0891DD90:
    ctx.set_gpr(2, 0u + 0u);
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
L_0891DDBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0891DDE0u);
    // nop
    goto L_0891E160;
L_0891DDE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DDFC;
      }
      goto L_0891DDE8;
    }
L_0891DDE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891DDF8u);
    // nop
    goto L_0891E680;
L_0891DDF8:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_0891DDFC;
L_0891DDFC:
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
L_0891DE18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0891DE40u);
    // nop
    goto L_0891E160;
L_0891DE40:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DE78;
      }
      goto L_0891DE4C;
    }
L_0891DE4C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891DE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x0891DE58u) goto L_0891DE58;
    return;
L_0891DE58:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891DE78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891DE78u) goto L_0891DE78;
    return;
L_0891DE78:
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
L_0891DE94:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DEA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0891DECCu);
    // nop
    goto L_0891E160;
L_0891DECC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DEF4;
      }
      goto L_0891DED8;
    }
L_0891DED8:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891DEF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891DEF4u) goto L_0891DEF4;
    return;
L_0891DEF4:
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
L_0891DF10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0891DF4Cu);
    // nop
    goto L_0891E160;
L_0891DF4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DF7C;
      }
      goto L_0891DF58;
    }
L_0891DF58:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891DF7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891DF7Cu) goto L_0891DF7C;
    return;
L_0891DF7C:
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
L_0891DFA0:
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
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0891DFE8u);
    // nop
    goto L_0891E160;
L_0891DFE8:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E024;
      }
      goto L_0891DFF4;
    }
L_0891DFF4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0891E004u);
    // nop
    goto L_0891E228;
L_0891E004:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891E020u);
    // nop
    goto L_0891E7E4;
L_0891E020:
    ctx.set_gpr(22, ctx.gpr[2] & 255u);
    goto L_0891E024;
L_0891E024:
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
L_0891E054:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0891E070u);
    // nop
    goto L_0891E160;
L_0891E070:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E088;
      }
      goto L_0891E07C;
    }
L_0891E07C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891E088u);
    // nop
    goto L_0891E818;
L_0891E088:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E09C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0891E0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x0891E0D4u) goto L_0891E0D4;
    return;
L_0891E0D4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891E140;
      }
      goto L_0891E0F8;
    }
L_0891E0F8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0891E110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x0891E110u) goto L_0891E110;
    return;
L_0891E110:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E140;
      }
      goto L_0891E120;
    }
L_0891E120:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891E140;
      }
      goto L_0891E128;
    }
L_0891E128:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E140;
      }
      goto L_0891E134;
    }
L_0891E134:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0891E140;
L_0891E140:
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
L_0891E160:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0891E188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 874u, 0x08907C70u>(ctx, &aot_mem) && ctx.pc == 0x0891E188u) goto L_0891E188;
    return;
L_0891E188:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891E1A8;
      }
      goto L_0891E194;
    }
L_0891E194:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_0891E1A8;
L_0891E1A8:
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
L_0891E1C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0891E1E8u);
    // nop
    goto L_0891E160;
L_0891E1E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E20C;
      }
      goto L_0891E1F0;
    }
L_0891E1F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891E208u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E208u) goto L_0891E208;
    return;
L_0891E208:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_0891E20C;
L_0891E20C:
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
L_0891E228:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891E244u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E244u) goto L_0891E244;
    return;
L_0891E244:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E254:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E294;
      }
      goto L_0891E278;
    }
L_0891E278:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E294;
      }
      goto L_0891E290;
    }
L_0891E290:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_0891E294;
L_0891E294:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E2A8;
      }
      goto L_0891E29C;
    }
L_0891E29C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    goto L_0891E2A8;
L_0891E2A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0891E2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 874u, 0x08907C70u>(ctx, &aot_mem) && ctx.pc == 0x0891E2BCu) goto L_0891E2BC;
    return;
L_0891E2BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891E2E8;
      }
      goto L_0891E2C8;
    }
L_0891E2C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891E2E8u);
    // nop
    goto L_0891E228;
L_0891E2E8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E314;
      }
      goto L_0891E2F8;
    }
L_0891E2F8:
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E314;
      }
      goto L_0891E310;
    }
L_0891E310:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0891E314;
L_0891E314:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E340;
      }
      goto L_0891E31C;
    }
L_0891E31C:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E340;
      }
      goto L_0891E334;
    }
L_0891E334:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891E340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E340u) goto L_0891E340;
    return;
L_0891E340:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E354:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E394;
      }
      goto L_0891E374;
    }
L_0891E374:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891E390u);
    // nop
    goto L_0891E228;
L_0891E390:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891E394;
L_0891E394:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E374;
      }
      goto L_0891E3A8;
    }
L_0891E3A8:
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
L_0891E3C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891E428;
      }
      goto L_0891E404;
    }
L_0891E404:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E428;
      }
      goto L_0891E41C;
    }
L_0891E41C:
    ctx.set_gpr(31, 0x0891E424u);
    // nop
    goto L_0891E3C0;
L_0891E424:
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    goto L_0891E428;
L_0891E428:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E4E8;
      }
      goto L_0891E430;
    }
L_0891E430:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E4E8;
      }
      goto L_0891E448;
    }
L_0891E448:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E470;
      }
      goto L_0891E454;
    }
L_0891E454:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891E470;
      }
      goto L_0891E45C;
    }
L_0891E45C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E470;
      }
      goto L_0891E468;
    }
L_0891E468:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32688)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0891E470;
L_0891E470:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891E494u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E494u) goto L_0891E494;
    return;
L_0891E494:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891E4A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E4A8u) goto L_0891E4A8;
    return;
L_0891E4A8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E4D8;
      }
      goto L_0891E4B4;
    }
L_0891E4B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28212)));
    ctx.set_gpr(31, 0x0891E4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E4C8u) goto L_0891E4C8;
    return;
L_0891E4C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E4D8;
      }
      goto L_0891E4D0;
    }
L_0891E4D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E4DC;
      }
      goto L_0891E4D8;
    }
L_0891E4D8:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0891E4DC;
L_0891E4DC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E4E8;
      }
      goto L_0891E4E4;
    }
L_0891E4E4:
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_0891E4E8;
L_0891E4E8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_0891E50C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0891E538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x0891E538u) goto L_0891E538;
    return;
L_0891E538:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891E578;
      }
      goto L_0891E550;
    }
L_0891E550:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E56C;
      }
      goto L_0891E560;
    }
L_0891E560:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E578;
      }
      goto L_0891E56C;
    }
L_0891E56C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0891E578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E578u) goto L_0891E578;
    return;
L_0891E578:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E5A0;
      }
      goto L_0891E590;
    }
L_0891E590:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32684)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0891E5A0;
L_0891E5A0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E590;
      }
      goto L_0891E5AC;
    }
L_0891E5AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891E5BCu);
    // nop
    goto L_0891E3C0;
L_0891E5BC:
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
L_0891E5D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0891E5F0u);
    // nop
    goto L_0891D884;
L_0891E5F0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E624;
      }
      goto L_0891E5FC;
    }
L_0891E5FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891E60Cu);
    // nop
    goto L_0891E1C4;
L_0891E60C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E624;
      }
      goto L_0891E614;
    }
L_0891E614:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891E624u);
    // nop
    goto L_0891DDBC;
L_0891E624:
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
L_0891E63C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E64C;
      }
      goto L_0891E648;
    }
L_0891E648:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), 0u);
    goto L_0891E64C;
L_0891E64C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E654:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891E670u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E670u) goto L_0891E670;
    return;
L_0891E670:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E680:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E6B0;
      }
      goto L_0891E698;
    }
L_0891E698:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891E6ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E6ACu) goto L_0891E6AC;
    return;
L_0891E6AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0891E6B0;
L_0891E6B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E6C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E6D8;
      }
      goto L_0891E6D0;
    }
L_0891E6D0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E710;
      }
      goto L_0891E6D8;
    }
L_0891E6D8:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[9]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0891E708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0891E708u) goto L_0891E708;
    return;
L_0891E708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E734;
      }
      goto L_0891E710;
    }
L_0891E710:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    goto L_0891E734;
L_0891E734:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891E7D4;
      }
      goto L_0891E75C;
    }
L_0891E75C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E7B4;
      }
      goto L_0891E768;
    }
L_0891E768:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0891E7B4;
      }
      goto L_0891E774;
    }
L_0891E774:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[9]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0891E7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0891E7ACu) goto L_0891E7AC;
    return;
L_0891E7AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E7D4;
      }
      goto L_0891E7B4;
    }
L_0891E7B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0891E7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0891E7D4u) goto L_0891E7D4;
    return;
L_0891E7D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E7E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891E808u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E808u) goto L_0891E808;
    return;
L_0891E808:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E818:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E910;
      }
      goto L_0891E850;
    }
L_0891E850:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0891E90C;
      }
      goto L_0891E86C;
    }
L_0891E86C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E8BC;
      }
      goto L_0891E880;
    }
L_0891E880:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891E8BC;
      }
      goto L_0891E888;
    }
L_0891E888:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E8BC;
      }
      goto L_0891E894;
    }
L_0891E894:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891E8BC;
      }
      goto L_0891E89C;
    }
L_0891E89C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E8BC;
      }
      goto L_0891E8A8;
    }
L_0891E8A8:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0891E8BC;
L_0891E8BC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E8E8;
      }
      goto L_0891E8E0;
    }
L_0891E8E0:
    ctx.set_gpr(31, 0x0891E8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891E8E8u) goto L_0891E8E8;
    return;
L_0891E8E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891E8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0891E8F8u) goto L_0891E8F8;
    return;
L_0891E8F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_0891E90C;
L_0891E90C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_0891E910;
L_0891E910:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0891E850;
      }
      goto L_0891E918;
    }
L_0891E918:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891E930u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E930u) goto L_0891E930;
    return;
L_0891E930:
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
L_0891E954:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E9A0;
      }
      goto L_0891E978;
    }
L_0891E978:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891E99Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891E99Cu) goto L_0891E99C;
    return;
L_0891E99C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891E9A0;
L_0891E9A0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E978;
      }
      goto L_0891E9B4;
    }
L_0891E9B4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E9E8;
      }
      goto L_0891E9C4;
    }
L_0891E9C4:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E9E4;
      }
      goto L_0891E9DC;
    }
L_0891E9DC:
    ctx.set_gpr(31, 0x0891E9E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891E9E4u) goto L_0891E9E4;
    return;
L_0891E9E4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0891E9E8;
L_0891E9E8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E9C4;
      }
      goto L_0891E9F4;
    }
L_0891E9F4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EA18;
      }
      goto L_0891EA04;
    }
L_0891EA04:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0891EA18;
L_0891EA18:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EA04;
      }
      goto L_0891EA24;
    }
L_0891EA24:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
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
L_0891EA44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891EA78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891EA78u) goto L_0891EA78;
    return;
L_0891EA78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ECC0;
      }
      goto L_0891EA80;
    }
L_0891EA80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891ECC0;
      }
      goto L_0891EA90;
    }
L_0891EA90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EAB0;
      }
      goto L_0891EAA4;
    }
L_0891EAA4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0891EAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EAB0u) goto L_0891EAB0;
    return;
L_0891EAB0:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EADC;
      }
      goto L_0891EABC;
    }
L_0891EABC:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x0891EAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x0891EAD8u) goto L_0891EAD8;
    return;
L_0891EAD8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0891EADC;
L_0891EADC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EABC;
      }
      goto L_0891EAF0;
    }
L_0891EAF0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891EB08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891EB08u) goto L_0891EB08;
    return;
L_0891EB08:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891EB20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891EB20u) goto L_0891EB20;
    return;
L_0891EB20:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC20;
      }
      goto L_0891EB2C;
    }
L_0891EB2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC14;
      }
      goto L_0891EB40;
    }
L_0891EB40:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891EC10;
      }
      goto L_0891EB70;
    }
L_0891EB70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EBC0;
      }
      goto L_0891EB84;
    }
L_0891EB84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891EBC0;
      }
      goto L_0891EB8C;
    }
L_0891EB8C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EBC0;
      }
      goto L_0891EB98;
    }
L_0891EB98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891EBC0;
      }
      goto L_0891EBA0;
    }
L_0891EBA0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EBC0;
      }
      goto L_0891EBAC;
    }
L_0891EBAC:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0891EBC0;
L_0891EBC0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EBEC;
      }
      goto L_0891EBE4;
    }
L_0891EBE4:
    ctx.set_gpr(31, 0x0891EBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891EBECu) goto L_0891EBEC;
    return;
L_0891EBEC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891EBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x0891EBFCu) goto L_0891EBFC;
    return;
L_0891EBFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_0891EC10;
L_0891EC10:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_0891EC14;
L_0891EC14:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0891EB40;
      }
      goto L_0891EC1C;
    }
L_0891EC1C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0891EC20;
L_0891EC20:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EB2C;
      }
      goto L_0891EC34;
    }
L_0891EC34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891EC48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891EC48u) goto L_0891EC48;
    return;
L_0891EC48:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC80;
      }
      goto L_0891EC5C;
    }
L_0891EC5C:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC7C;
      }
      goto L_0891EC74;
    }
L_0891EC74:
    ctx.set_gpr(31, 0x0891EC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891EC7Cu) goto L_0891EC7C;
    return;
L_0891EC7C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0891EC80;
L_0891EC80:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC5C;
      }
      goto L_0891EC8C;
    }
L_0891EC8C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ECB0;
      }
      goto L_0891EC9C;
    }
L_0891EC9C:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0891ECB0;
L_0891ECB0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC9C;
      }
      goto L_0891ECBC;
    }
L_0891ECBC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_0891ECC0;
L_0891ECC0:
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
L_0891ECE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891ECEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891ECF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0891ED08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 590u, 0x08902F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0891ED08u) goto L_0891ED08;
    return;
L_0891ED08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891ED18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0891ED2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 584u, 0x08902EC8u>(ctx, &aot_mem) && ctx.pc == 0x0891ED2Cu) goto L_0891ED2C;
    return;
L_0891ED2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891ED3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891ED50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0891ED78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 328u, 0x088D9B14u>(ctx, &aot_mem) && ctx.pc == 0x0891ED78u) goto L_0891ED78;
    return;
L_0891ED78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891ED9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891ED9Cu) goto L_0891ED9C;
    return;
L_0891ED9C:
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
L_0891EDB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11912));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891EDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 427u, 0x08816084u>(ctx, &aot_mem) && ctx.pc == 0x0891EDE4u) goto L_0891EDE4;
    return;
L_0891EDE4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891EE04;
      }
      goto L_0891EDF0;
    }
L_0891EDF0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891EDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891EDFCu) goto L_0891EDFC;
    return;
L_0891EDFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EE08;
      }
      goto L_0891EE04;
    }
L_0891EE04:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891EE08;
L_0891EE08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891EE1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-1040));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0891EE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0891EE38u) goto L_0891EE38;
    return;
L_0891EE38:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11912));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0891EE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0891EE54u) goto L_0891EE54;
    return;
L_0891EE54:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EE6C;
      }
      goto L_0891EE60;
    }
L_0891EE60:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EEBC;
      }
      goto L_0891EE6C;
    }
L_0891EE6C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EEA4;
      }
      goto L_0891EE7C;
    }
L_0891EE7C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891EE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0891EE88u) goto L_0891EE88;
    return;
L_0891EE88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EE9C;
      }
      goto L_0891EE90;
    }
L_0891EE90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891EE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0891EE9Cu) goto L_0891EE9C;
    return;
L_0891EE9C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0891EEA4;
L_0891EEA4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891EEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0891EEB8u) goto L_0891EEB8;
    return;
L_0891EEB8:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_0891EEBC;
L_0891EEBC:
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
L_0891EED4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891EEE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891EF00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891EF00u) goto L_0891EF00;
    return;
L_0891EF00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891EF10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891EF1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891EF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EF48u) goto L_0891EF48;
    return;
L_0891EF48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891EF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 21u, 0x088E81E8u>(ctx, &aot_mem) && ctx.pc == 0x0891EF54u) goto L_0891EF54;
    return;
L_0891EF54:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11908));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891EF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 633u, 0x0895AA80u>(ctx, &aot_mem) && ctx.pc == 0x0891EF7Cu) goto L_0891EF7C;
    return;
L_0891EF7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EF98;
      }
      goto L_0891EF8C;
    }
L_0891EF8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0891EF98;
L_0891EF98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EFAC;
      }
      goto L_0891EFA4;
    }
L_0891EFA4:
    ctx.set_gpr(31, 0x0891EFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891EFACu) goto L_0891EFAC;
    return;
L_0891EFAC:
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
L_0891EFCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F00C;
      }
      goto L_0891EFE8;
    }
L_0891EFE8:
    ctx.set_gpr(31, 0x0891EFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 415u, 0x088DA21Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EFF0u) goto L_0891EFF0;
    return;
L_0891EFF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891F00Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F00Cu) goto L_0891F00C;
    return;
L_0891F00C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891F020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
          goto L_0891F060;
      }
      goto L_0891F048;
    }
L_0891F048:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F060;
      }
      goto L_0891F054;
    }
L_0891F054:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F1A0;
      }
      goto L_0891F060;
    }
L_0891F060:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F090;
      }
      goto L_0891F068;
    }
L_0891F068:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F090;
      }
      goto L_0891F074;
    }
L_0891F074:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891F088u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F088u) goto L_0891F088;
    return;
L_0891F088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F1A0;
      }
      goto L_0891F090;
    }
L_0891F090:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F128;
      }
      goto L_0891F09C;
    }
L_0891F09C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F128;
      }
      goto L_0891F0A4;
    }
L_0891F0A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891F0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x0891F0B0u) goto L_0891F0B0;
    return;
L_0891F0B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891F0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem) && ctx.pc == 0x0891F0BCu) goto L_0891F0BC;
    return;
L_0891F0BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891F0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0891F0D0u) goto L_0891F0D0;
    return;
L_0891F0D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F0E4;
      }
      goto L_0891F0DC;
    }
L_0891F0DC:
    ctx.set_gpr(31, 0x0891F0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891F0E4u) goto L_0891F0E4;
    return;
L_0891F0E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F0FC;
      }
      goto L_0891F0F0;
    }
L_0891F0F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F1A0;
      }
      goto L_0891F0FC;
    }
L_0891F0FC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891F108u);
    // nop
    goto L_0891D098;
L_0891F108:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891F120u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F120u) goto L_0891F120;
    return;
L_0891F120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F1A0;
      }
      goto L_0891F128;
    }
L_0891F128:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891F138u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F138u) goto L_0891F138;
    return;
L_0891F138:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891F144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x0891F144u) goto L_0891F144;
    return;
L_0891F144:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891F150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 295u, 0x088F1924u>(ctx, &aot_mem) && ctx.pc == 0x0891F150u) goto L_0891F150;
    return;
L_0891F150:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891F164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0891F164u) goto L_0891F164;
    return;
L_0891F164:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F178;
      }
      goto L_0891F170;
    }
L_0891F170:
    ctx.set_gpr(31, 0x0891F178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891F178u) goto L_0891F178;
    return;
L_0891F178:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891F188u);
    // nop
    goto L_0891D098;
L_0891F188:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891F1A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F1A0u) goto L_0891F1A0;
    return;
L_0891F1A0:
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
L_0891F1BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F1F8;
      }
      goto L_0891F1D8;
    }
L_0891F1D8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891F1E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F1E8u) goto L_0891F1E8;
    return;
L_0891F1E8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0891F1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0891F1F8u) goto L_0891F1F8;
    return;
L_0891F1F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891F20C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F24C;
      }
      goto L_0891F238;
    }
L_0891F238:
    ctx.set_gpr(5, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(31, 0x0891F244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x0891F244u) goto L_0891F244;
    return;
L_0891F244:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F330;
      }
      goto L_0891F24C;
    }
L_0891F24C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(16, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891F268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891F268u) goto L_0891F268;
    return;
L_0891F268:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F278;
      }
      goto L_0891F274;
    }
L_0891F274:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_0891F278;
L_0891F278:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891F2A0;
      }
      goto L_0891F280;
    }
L_0891F280:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-1))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(47));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891F2A0;
      }
      goto L_0891F294;
    }
L_0891F294:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0891F274;
      }
      goto L_0891F2A0;
    }
L_0891F2A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F2D8;
      }
      goto L_0891F2B0;
    }
L_0891F2B0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0891F2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x0891F2BCu) goto L_0891F2BC;
    return;
L_0891F2BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F2D0;
      }
      goto L_0891F2C4;
    }
L_0891F2C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891F2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x0891F2D0u) goto L_0891F2D0;
    return;
L_0891F2D0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_0891F2D8;
L_0891F2D8:
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(31, 0x0891F2ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x0891F2ECu) goto L_0891F2EC;
    return;
L_0891F2EC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F314;
      }
      goto L_0891F300;
    }
L_0891F300:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0891F30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F30Cu) goto L_0891F30C;
    return;
L_0891F30C:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    goto L_0891F314;
L_0891F314:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F32C;
      }
      goto L_0891F31C;
    }
L_0891F31C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0891F32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x0891F32Cu) goto L_0891F32C;
    return;
L_0891F32C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    goto L_0891F330;
L_0891F330:
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
L_0891F34C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F384;
      }
      goto L_0891F370;
    }
L_0891F370:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F384;
      }
      goto L_0891F378;
    }
L_0891F378:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F40C;
      }
      goto L_0891F384;
    }
L_0891F384:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F3D4;
      }
      goto L_0891F38C;
    }
L_0891F38C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0891F3A0u);
    // nop
    goto L_0891F020;
L_0891F3A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0891F3D0;
      }
      goto L_0891F3AC;
    }
L_0891F3AC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F3C4;
      }
      goto L_0891F3B4;
    }
L_0891F3B4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0891F3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0891F3C4u) goto L_0891F3C4;
    return;
L_0891F3C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F40C;
      }
      goto L_0891F3D0;
    }
L_0891F3D0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(236), ctx.gpr[3]);
    goto L_0891F3D4;
L_0891F3D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F3EC;
      }
      goto L_0891F3E0;
    }
L_0891F3E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F40C;
      }
      goto L_0891F3EC;
    }
L_0891F3EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891F3F8u);
    // nop
    goto L_0891F20C;
L_0891F3F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0891F408u);
    // nop
    goto L_0891D1DC;
L_0891F408:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891F40C;
L_0891F40C:
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
L_0891F424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0891F448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x0891F448u) goto L_0891F448;
    return;
L_0891F448:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891F454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 162u, 0x088F8E68u>(ctx, &aot_mem) && ctx.pc == 0x0891F454u) goto L_0891F454;
    return;
L_0891F454:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891F468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0891F468u) goto L_0891F468;
    return;
L_0891F468:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F47C;
      }
      goto L_0891F474;
    }
L_0891F474:
    ctx.set_gpr(31, 0x0891F47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891F47Cu) goto L_0891F47C;
    return;
L_0891F47C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29856)));
    ctx.set_gpr(31, 0x0891F490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 243u, 0x08945230u>(ctx, &aot_mem) && ctx.pc == 0x0891F490u) goto L_0891F490;
    return;
L_0891F490:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29856)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0891F4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 225u, 0x089450D0u>(ctx, &aot_mem) && ctx.pc == 0x0891F4A4u) goto L_0891F4A4;
    return;
L_0891F4A4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F4D8;
      }
      goto L_0891F4B4;
    }
L_0891F4B4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891F4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 212u, 0x08944FE0u>(ctx, &aot_mem) && ctx.pc == 0x0891F4C4u) goto L_0891F4C4;
    return;
L_0891F4C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891F4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 355u, 0x08949938u>(ctx, &aot_mem) && ctx.pc == 0x0891F4D4u) goto L_0891F4D4;
    return;
L_0891F4D4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0891F4D8;
L_0891F4D8:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F4B4;
      }
      goto L_0891F4E4;
    }
L_0891F4E4:
    ctx.set_gpr(2, 0u + 0u);
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
L_0891F508:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F560;
      }
      goto L_0891F528;
    }
L_0891F528:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891F55Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F55Cu) goto L_0891F55C;
    return;
L_0891F55C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891F560;
L_0891F560:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F528;
      }
      goto L_0891F570;
    }
L_0891F570:
    ctx.set_gpr(2, 0u + 0u);
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
L_0891F58C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(336), ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F5F0;
      }
      goto L_0891F5C0;
    }
L_0891F5C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891F5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 205u, 0x0893CCF0u>(ctx, &aot_mem) && ctx.pc == 0x0891F5CCu) goto L_0891F5CC;
    return;
L_0891F5CC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0891F5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891F5DCu) goto L_0891F5DC;
    return;
L_0891F5DC:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(336), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891F5F0;
L_0891F5F0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F5C0;
      }
      goto L_0891F5FC;
    }
L_0891F5FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0891F608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x0891F608u) goto L_0891F608;
    return;
L_0891F608:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891F620u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F620u) goto L_0891F620;
    return;
L_0891F620:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(340), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(75));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F680;
      }
      goto L_0891F644;
    }
L_0891F644:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891F650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 205u, 0x0893CCF0u>(ctx, &aot_mem) && ctx.pc == 0x0891F650u) goto L_0891F650;
    return;
L_0891F650:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0891F660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891F660u) goto L_0891F660;
    return;
L_0891F660:
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891F678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0891F678u) goto L_0891F678;
    return;
L_0891F678:
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891F680;
L_0891F680:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F644;
      }
      goto L_0891F68C;
    }
L_0891F68C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F6B4;
      }
      goto L_0891F698;
    }
L_0891F698:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891F6B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F6B4u) goto L_0891F6B4;
    return;
L_0891F6B4:
    ctx.set_gpr(2, 0u + 0u);
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
L_0891F6DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F734;
      }
      goto L_0891F70C;
    }
L_0891F70C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891F730u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F730u) goto L_0891F730;
    return;
L_0891F730:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0891F734;
L_0891F734:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F70C;
      }
      goto L_0891F744;
    }
L_0891F744:
    ctx.set_gpr(2, 0u + 0u);
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
L_0891F760:
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
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0891F7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x0891F7B4u) goto L_0891F7B4;
    return;
L_0891F7B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891F7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 485u, 0x088F68A4u>(ctx, &aot_mem) && ctx.pc == 0x0891F7C0u) goto L_0891F7C0;
    return;
L_0891F7C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891F7FC;
      }
      goto L_0891F7D0;
    }
L_0891F7D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F7EC;
      }
      goto L_0891F7E0;
    }
L_0891F7E0:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F7FC;
      }
      goto L_0891F7EC;
    }
L_0891F7EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0891F7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F7FCu) goto L_0891F7FC;
    return;
L_0891F7FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F82C;
      }
      goto L_0891F814;
    }
L_0891F814:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11900)));
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0891F82C;
L_0891F82C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F814;
      }
      goto L_0891F838;
    }
L_0891F838:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0891F844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x0891F844u) goto L_0891F844;
    return;
L_0891F844:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0891F850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 485u, 0x088F68A4u>(ctx, &aot_mem) && ctx.pc == 0x0891F850u) goto L_0891F850;
    return;
L_0891F850:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0891F88C;
      }
      goto L_0891F860;
    }
L_0891F860:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F87C;
      }
      goto L_0891F870;
    }
L_0891F870:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F88C;
      }
      goto L_0891F87C;
    }
L_0891F87C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0891F88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F88Cu) goto L_0891F88C;
    return;
L_0891F88C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F8BC;
      }
      goto L_0891F8A4;
    }
L_0891F8A4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11896)));
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0891F8BC;
L_0891F8BC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F8A4;
      }
      goto L_0891F8C8;
    }
L_0891F8C8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31368)));
    ctx.set_gpr(31, 0x0891F8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0891F8D8u) goto L_0891F8D8;
    return;
L_0891F8D8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F9BC;
      }
      goto L_0891F8E8;
    }
L_0891F8E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(5, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, ctx.gpr[22] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F978;
      }
      goto L_0891F910;
    }
L_0891F910:
    ctx.set_gpr(7, ctx.gpr[19] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F974;
      }
      goto L_0891F92C;
    }
L_0891F92C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F938;
    }
L_0891F938:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(168), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0891F95C;
L_0891F95C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0891F974;
L_0891F974:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0891F978;
L_0891F978:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F910;
      }
      goto L_0891F984;
    }
L_0891F984:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0891F998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891F998u) goto L_0891F998;
    return;
L_0891F998:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0891F9BC;
L_0891F9BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F8E8;
      }
      goto L_0891F9CC;
    }
L_0891F9CC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0891F9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x0891F9D8u) goto L_0891F9D8;
    return;
L_0891F9D8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891F9F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F9F4u) goto L_0891F9F4;
    return;
L_0891F9F4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FAA8;
      }
      goto L_0891FA08;
    }
L_0891FA08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(17, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0891FA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891FA30u) goto L_0891FA30;
    return;
L_0891FA30:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(232)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0891FA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x0891FA84u) goto L_0891FA84;
    return;
L_0891FA84:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0891FAA8;
L_0891FAA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FA08;
      }
      goto L_0891FAB8;
    }
L_0891FAB8:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x0891FAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 201u, 0x088DD050u>(ctx, &aot_mem) && ctx.pc == 0x0891FAD4u) goto L_0891FAD4;
    return;
L_0891FAD4:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FBF4;
      }
      goto L_0891FAE4;
    }
L_0891FAE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0891FB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0891FB14u) goto L_0891FB14;
    return;
L_0891FB14:
    ctx.set_gpr(2, ctx.gpr[20] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[22] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FB9C;
      }
      goto L_0891FB4C;
    }
L_0891FB4C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FB98;
      }
      goto L_0891FB68;
    }
L_0891FB68:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FB98;
      }
      goto L_0891FB74;
    }
L_0891FB74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891FB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 593u, 0x089429B8u>(ctx, &aot_mem) && ctx.pc == 0x0891FB80u) goto L_0891FB80;
    return;
L_0891FB80:
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    goto L_0891FB98;
L_0891FB98:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0891FB9C;
L_0891FB9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FB4C;
      }
      goto L_0891FBAC;
    }
L_0891FBAC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FBEC;
      }
      goto L_0891FBB8;
    }
L_0891FBB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[30] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891FBECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891FBECu) goto L_0891FBEC;
    return;
L_0891FBEC:
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0891FBF4;
L_0891FBF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FAE4;
      }
      goto L_0891FC04;
    }
L_0891FC04:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FC34;
      }
      goto L_0891FC10;
    }
L_0891FC10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891FC34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891FC34u) goto L_0891FC34;
    return;
L_0891FC34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FC48;
      }
      goto L_0891FC40;
    }
L_0891FC40:
    ctx.set_gpr(31, 0x0891FC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891FC48u) goto L_0891FC48;
    return;
L_0891FC48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FC5C;
      }
      goto L_0891FC54;
    }
L_0891FC54:
    ctx.set_gpr(31, 0x0891FC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0891FC5Cu) goto L_0891FC5C;
    return;
L_0891FC5C:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891FC94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0891FCBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x0891FCBCu) goto L_0891FCBC;
    return;
L_0891FCBC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FD30;
      }
      goto L_0891FCE0;
    }
L_0891FCE0:
    ctx.set_gpr(31, 0x0891FCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x0891FCE8u) goto L_0891FCE8;
    return;
L_0891FCE8:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891FD08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891FD08u) goto L_0891FD08;
    return;
L_0891FD08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0891FD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891FD1Cu) goto L_0891FD1C;
    return;
L_0891FD1C:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0891FD30;
L_0891FD30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FCE0;
      }
      goto L_0891FD40;
    }
L_0891FD40:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0891FD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x0891FD4Cu) goto L_0891FD4C;
    return;
L_0891FD4C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891FD68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891FD68u) goto L_0891FD68;
    return;
L_0891FD68:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(220), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FE28;
      }
      goto L_0891FD80;
    }
L_0891FD80:
    ctx.set_gpr(31, 0x0891FD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x0891FD88u) goto L_0891FD88;
    return;
L_0891FD88:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891FDACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891FDACu) goto L_0891FDAC;
    return;
L_0891FDAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0891FDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891FDC0u) goto L_0891FDC0;
    return;
L_0891FDC0:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891FDE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891FDE4u) goto L_0891FDE4;
    return;
L_0891FDE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891FE0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891FE0Cu) goto L_0891FE0C;
    return;
L_0891FE0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0891FE28;
L_0891FE28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FD80;
      }
      goto L_0891FE38;
    }
L_0891FE38:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(16, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FEB8;
      }
      goto L_0891FE58;
    }
L_0891FE58:
    ctx.set_gpr(31, 0x0891FE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x0891FE60u) goto L_0891FE60;
    return;
L_0891FE60:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891FE80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891FE80u) goto L_0891FE80;
    return;
L_0891FE80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0891FE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0891FE98u) goto L_0891FE98;
    return;
L_0891FE98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(2, ctx.gpr[19] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0891FEB8;
L_0891FEB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FE58;
      }
      goto L_0891FEC8;
    }
L_0891FEC8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FEF0;
      }
      goto L_0891FED4;
    }
L_0891FED4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0891FEF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891FEF0u) goto L_0891FEF0;
    return;
L_0891FEF0:
    ctx.set_gpr(2, 0u + 0u);
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
L_0891FF18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0891FF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0891FF40u) goto L_0891FF40;
    return;
L_0891FF40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF5C;
      }
      goto L_0891FF50;
    }
L_0891FF50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0891FF5C;
L_0891FF5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF74;
      }
      goto L_0891FF68;
    }
L_0891FF68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF78;
      }
      goto L_0891FF74;
    }
L_0891FF74:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0891FF78;
L_0891FF78:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(288), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(280), ctx.gpr[2]);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FFD8;
      }
      goto L_0891FF94;
    }
L_0891FF94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FFBC;
      }
      goto L_0891FFB4;
    }
L_0891FFB4:
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1368)));
    goto L_0891FFBC;
L_0891FFBC:
    ctx.set_gpr(31, 0x0891FFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0891FFC4u) goto L_0891FFC4;
    return;
L_0891FFC4:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(280), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0891FFD8;
L_0891FFD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF94;
      }
      goto L_0891FFE8;
    }
L_0891FFE8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0891FFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 568u, 0x089267ECu>(ctx, &aot_mem) && ctx.pc == 0x0891FFF4u) goto L_0891FFF4;
    return;
L_0891FFF4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08920000u; return;
}

void recomp_unit_0070(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0070_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_70(Runtime &runtime) {
    runtime.register_generated_unit(70u, 0x0891C000u, 16384u, &recomp_unit_0070, &recomp_unit_0070_entry);
    runtime.register_function(0x0891C000u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C014u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C064u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C110u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C128u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C138u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C144u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C160u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C168u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C16Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C178u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C17Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C184u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C190u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C220u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C228u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C234u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C248u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C24Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C254u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C260u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C294u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C29Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C300u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C308u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C330u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C33Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C344u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C358u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C36Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C370u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C38Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C410u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C440u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C44Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C454u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C460u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C468u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C47Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C490u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C49Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C508u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C524u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C530u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C540u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C544u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C560u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C588u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C594u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C59Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C614u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C620u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C63Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C65Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C668u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C674u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C690u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C698u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C70Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C71Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C738u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C748u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C758u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C76Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C788u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C798u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C808u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C814u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C828u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C840u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C854u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C85Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C87Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C90Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C91Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C934u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C940u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C958u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C964u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C96Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C978u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C984u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C99Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CACCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CDA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CDB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CDC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CDCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CDD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CDE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CDF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D004u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D018u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D02Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D044u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D048u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D050u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D068u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D074u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D078u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D098u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D110u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D128u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D12Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D134u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D14Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D158u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D174u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D190u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D204u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D214u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D220u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D22Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D238u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D23Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D24Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D264u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D270u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D27Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D284u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D294u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D29Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D308u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D314u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D31Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D324u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D334u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D340u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D348u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D350u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D364u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D370u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D378u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D384u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D38Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D400u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D418u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D44Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D45Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D474u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D494u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D500u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D508u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D514u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D51Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D534u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D544u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D564u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D600u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D610u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D61Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D630u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D63Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D650u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D660u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D670u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D678u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D684u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D698u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D708u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D714u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D71Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D728u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D730u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D744u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D758u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D770u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D774u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D77Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D794u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D800u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D81Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D824u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D838u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D83Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D858u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D860u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D864u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D884u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D894u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D8A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D8D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D900u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D924u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D93Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D948u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D960u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D96Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D974u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D990u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DAB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DAC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DAD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DAFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDF8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DEA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DECCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DED8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DEF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E004u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E020u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E024u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E054u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E070u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E07Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E088u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E09Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E110u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E120u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E128u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E134u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E140u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E160u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E188u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E194u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E208u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E20Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E228u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E244u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E254u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E278u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E290u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E294u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E29Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E310u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E314u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E31Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E334u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E340u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E354u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E374u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E390u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E394u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E404u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E41Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E424u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E428u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E430u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E448u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E454u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E45Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E468u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E470u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E494u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E50Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E538u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E550u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E560u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E56Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E578u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E590u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E60Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E614u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E624u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E63Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E648u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E64Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E654u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E670u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E680u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E698u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E708u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E710u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E734u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E744u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E75Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E768u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E774u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E808u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E818u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E850u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E86Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E880u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E888u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E894u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E89Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E90Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E910u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E918u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E930u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E954u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E978u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E99Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EABCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EADCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EED4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F00Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F020u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F048u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F054u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F060u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F068u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F074u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F088u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F090u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F09Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F108u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F120u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F128u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F138u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F144u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F150u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F164u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F170u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F178u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F188u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F20Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F238u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F244u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F24Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F268u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F274u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F278u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F280u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F294u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F300u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F30Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F314u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F31Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F32Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F330u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F34Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F370u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F378u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F384u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F38Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F408u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F40Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F424u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F448u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F454u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F468u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F474u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F47Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F490u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F508u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F528u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F55Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F560u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F570u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F58Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F608u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F620u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F644u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F650u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F660u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F678u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F680u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F68Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F698u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F70Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F730u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F734u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F744u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F760u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F814u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F82Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F838u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F844u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F850u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F860u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F870u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F87Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F88Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F910u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F92Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F938u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F95Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F974u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F978u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F984u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F998u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FED4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFF4u, &recomp_unit_0070, "recomp_unit_0070");
}
} // namespace psprecomp
