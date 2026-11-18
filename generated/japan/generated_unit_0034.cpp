#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0034[3706] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0,
    9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0,
    16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37,
    0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 41, 0, 0, 0, 0, 0, 0, 42, 43, 0,
    44, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53,
    54, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0,
    67, 0, 0, 68, 0, 69, 70, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0,
    83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96,
    0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0,
    0, 127, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0,
    139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 146,
    0, 147, 0, 148, 149, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 157, 0, 158, 0, 159,
    0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0,
    171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0,
    0, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187,
    0, 188, 0, 189, 0, 0, 190, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 0, 197, 198, 0, 0, 199, 0, 200, 0, 0, 201, 0, 0,
    202, 0, 0, 203, 204, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 0,
    216, 217, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 220, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 224, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236,
    0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 246,
    0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0,
    260, 0, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 0, 265, 266, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269,
    0, 270, 0, 271, 0, 272, 0, 0, 0, 0, 0, 273, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 283, 0,
    284, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 299, 0, 0, 0, 300,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 314, 315, 0, 316, 0, 0, 0,
    317, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0,
    336, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 345, 0,
    346, 0, 347, 0, 348, 0, 349, 0, 350, 0, 0, 351, 0, 352, 0, 353, 0, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0,
    361, 0, 362, 0, 0, 363, 0, 364, 0, 365, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 0, 0, 372, 373, 0, 0, 0, 0,
    374, 0, 375, 0, 376, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387,
    0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 394, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 402, 0, 0,
    0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0,
    409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0,
    0, 0, 411, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    413, 0, 0, 0, 0, 414, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0,
    0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 421, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 425, 0, 0, 426, 0, 0, 427,
    0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0,
    0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 0, 438, 0, 439, 0, 440, 0, 441, 0,
    442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 445,
    0, 0, 446, 0, 447, 0, 448, 449, 0, 450, 451, 0, 0, 0, 0, 452, 0, 453, 454, 0, 0, 0, 0, 0, 455, 0, 0, 456, 457, 0, 0, 0,
    0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 464,
    0, 465, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0,
    0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0,
    0, 480, 0, 0, 0, 481, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 487, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 491, 492, 0, 0, 493, 494, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 497, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 501,
    502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 505, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507,
    0, 508, 0, 509, 510, 0, 0, 511, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0,
    0, 516, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0,
    0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0,
    0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0,
    0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 539, 540,
    0, 541, 542, 0, 0, 0, 0, 543, 0, 544, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 551, 552, 0, 0, 553, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555,
    0, 556, 0, 557, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 561, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 563, 0, 564, 0, 565, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 569, 570, 0, 0, 571, 572, 0,
    0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 577, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0,
    583, 0, 584, 0, 585, 0, 586, 0, 587, 0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 596, 0, 597, 0, 598, 599, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605,
    0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0, 619, 0, 620, 0, 621,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 624, 625, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 628,
    0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 642, 0, 0,
    643, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0, 648, 0, 649, 0, 650, 0, 651, 0, 0, 652, 653, 0, 654,
    0, 0, 655, 0, 656, 0, 0, 657, 0, 0, 0, 658, 0, 659, 0, 660, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0,
    664, 0, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 667, 0, 668, 0, 0, 0, 669, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0,
    0, 673, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 684, 0, 0, 0, 0, 0, 685, 0, 686,
    0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 690, 691, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 694, 0, 695, 0, 696, 0, 0,
    0, 0, 697, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 702, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 704, 705, 0, 0, 0, 0, 0, 706, 707, 0, 0, 0, 0, 0, 708, 709, 0, 0, 0, 0, 0, 710, 711, 0, 712, 713, 0, 0,
    714, 0, 715, 0, 716, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 719, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 725, 0, 726, 0, 727, 0, 0, 728, 0, 729, 0, 0, 730, 0, 0, 731, 0,
    732, 0, 733, 734, 0, 735, 0, 0, 736, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 740, 0, 0, 741,
    0, 742, 0, 0, 743, 0, 744, 0, 745, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0,
    752, 0, 753, 0, 0, 754, 0, 0, 0, 755, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 758, 759, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0,
    0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 770,
    0, 0, 0, 771, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 774, 0, 775, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 0, 778, 779, 0, 0,
    0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0,
    783, 784, 0, 0, 785, 0, 0, 0, 786, 0, 0, 787, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 791,
    0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 795, 796, 0, 0, 0, 797, 0, 0, 0, 0,
    798, 0, 799, 0, 800, 0, 801, 0, 0, 0, 802, 0, 0, 0, 803, 0, 0, 804, 0, 0, 0, 805, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0,
    0, 808, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 813, 0, 814, 0, 815, 0,
    0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 818, 0, 0, 0, 819, 820, 821, 0, 0, 0, 0, 0, 0, 822, 0, 0, 823,
    0, 824, 0, 825, 0, 826, 0, 827, 0, 0, 828, 0, 0, 829, 0, 830, 0, 831, 0, 832, 833, 0, 834, 0, 0, 835, 0, 0, 0, 0, 836, 0,
    837, 0, 838, 0, 0, 0, 839, 0, 0, 0, 0, 0, 840, 0, 841, 0, 842, 0, 843, 0, 0, 844, 0, 0, 0, 845,
};
void recomp_unit_0034_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0888C40Cu;
        entry_id = (entry_delta < 14824u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0034[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0888C40C;
    case 2u: goto L_0888C42C;
    case 3u: goto L_0888C434;
    case 4u: goto L_0888C43C;
    case 5u: goto L_0888C44C;
    case 6u: goto L_0888C454;
    case 7u: goto L_0888C474;
    case 8u: goto L_0888C484;
    case 9u: goto L_0888C48C;
    case 10u: goto L_0888C494;
    case 11u: goto L_0888C4AC;
    case 12u: goto L_0888C4B4;
    case 13u: goto L_0888C550;
    case 14u: goto L_0888C574;
    case 15u: goto L_0888C57C;
    case 16u: goto L_0888C58C;
    case 17u: goto L_0888C594;
    case 18u: goto L_0888C59C;
    case 19u: goto L_0888C5A4;
    case 20u: goto L_0888C5AC;
    case 21u: goto L_0888C5B4;
    case 22u: goto L_0888C5CC;
    case 23u: goto L_0888C5E8;
    case 24u: goto L_0888C77C;
    case 25u: goto L_0888C794;
    case 26u: goto L_0888C7A8;
    case 27u: goto L_0888C7C4;
    case 28u: goto L_0888C7D0;
    case 29u: goto L_0888C7D8;
    case 30u: goto L_0888C7E8;
    case 31u: goto L_0888C7F0;
    case 32u: goto L_0888C91C;
    case 33u: goto L_0888C968;
    case 34u: goto L_0888C970;
    case 35u: goto L_0888C978;
    case 36u: goto L_0888C980;
    case 37u: goto L_0888C988;
    case 38u: goto L_0888C998;
    case 39u: goto L_0888C9C0;
    case 40u: goto L_0888C9E0;
    case 41u: goto L_0888C9E4;
    case 42u: goto L_0888CA00;
    case 43u: goto L_0888CA04;
    case 44u: goto L_0888CA0C;
    case 45u: goto L_0888CA14;
    case 46u: goto L_0888CA1C;
    case 47u: goto L_0888CA24;
    case 48u: goto L_0888CA48;
    case 49u: goto L_0888CA50;
    case 50u: goto L_0888CA58;
    case 51u: goto L_0888CA78;
    case 52u: goto L_0888CA80;
    case 53u: goto L_0888CA88;
    case 54u: goto L_0888CA8C;
    case 55u: goto L_0888CAA0;
    case 56u: goto L_0888CAA8;
    case 57u: goto L_0888CAD8;
    case 58u: goto L_0888CAF8;
    case 59u: goto L_0888CB04;
    case 60u: goto L_0888CB0C;
    case 61u: goto L_0888CB30;
    case 62u: goto L_0888CB48;
    case 63u: goto L_0888CB50;
    case 64u: goto L_0888CB60;
    case 65u: goto L_0888CB68;
    case 66u: goto L_0888CB74;
    case 67u: goto L_0888CB8C;
    case 68u: goto L_0888CB98;
    case 69u: goto L_0888CBA0;
    case 70u: goto L_0888CBA4;
    case 71u: goto L_0888CBA8;
    case 72u: goto L_0888CBBC;
    case 73u: goto L_0888CBC4;
    case 74u: goto L_0888CBD8;
    case 75u: goto L_0888CBE4;
    case 76u: goto L_0888CBEC;
    case 77u: goto L_0888CC14;
    case 78u: goto L_0888CC2C;
    case 79u: goto L_0888CC58;
    case 80u: goto L_0888CC6C;
    case 81u: goto L_0888CC74;
    case 82u: goto L_0888CC80;
    case 83u: goto L_0888CC8C;
    case 84u: goto L_0888CC9C;
    case 85u: goto L_0888CCD0;
    case 86u: goto L_0888CCDC;
    case 87u: goto L_0888CCEC;
    case 88u: goto L_0888CD28;
    case 89u: goto L_0888CD38;
    case 90u: goto L_0888CD74;
    case 91u: goto L_0888CD84;
    case 92u: goto L_0888CDB8;
    case 93u: goto L_0888CDC8;
    case 94u: goto L_0888CDF8;
    case 95u: goto L_0888CE00;
    case 96u: goto L_0888CE08;
    case 97u: goto L_0888CE10;
    case 98u: goto L_0888CE18;
    case 99u: goto L_0888CE24;
    case 100u: goto L_0888CE34;
    case 101u: goto L_0888CE64;
    case 102u: goto L_0888CE6C;
    case 103u: goto L_0888CE7C;
    case 104u: goto L_0888CEA8;
    case 105u: goto L_0888CEB4;
    case 106u: goto L_0888CEBC;
    case 107u: goto L_0888CEFC;
    case 108u: goto L_0888CF10;
    case 109u: goto L_0888CF1C;
    case 110u: goto L_0888CF28;
    case 111u: goto L_0888CF38;
    case 112u: goto L_0888CF44;
    case 113u: goto L_0888CF64;
    case 114u: goto L_0888CF9C;
    case 115u: goto L_0888CFB8;
    case 116u: goto L_0888CFC8;
    case 117u: goto L_0888CFD0;
    case 118u: goto L_0888CFD8;
    case 119u: goto L_0888CFE4;
    case 120u: goto L_0888CFF0;
    case 121u: goto L_0888D020;
    case 122u: goto L_0888D028;
    case 123u: goto L_0888D030;
    case 124u: goto L_0888D040;
    case 125u: goto L_0888D074;
    case 126u: goto L_0888D080;
    case 127u: goto L_0888D090;
    case 128u: goto L_0888D098;
    case 129u: goto L_0888D0A8;
    case 130u: goto L_0888D0B0;
    case 131u: goto L_0888D0C4;
    case 132u: goto L_0888D0D0;
    case 133u: goto L_0888D0D8;
    case 134u: goto L_0888D0EC;
    case 135u: goto L_0888D138;
    case 136u: goto L_0888D168;
    case 137u: goto L_0888D170;
    case 138u: goto L_0888D178;
    case 139u: goto L_0888D18C;
    case 140u: goto L_0888D198;
    case 141u: goto L_0888D1A0;
    case 142u: goto L_0888D1CC;
    case 143u: goto L_0888D1E4;
    case 144u: goto L_0888D1F4;
    case 145u: goto L_0888D1FC;
    case 146u: goto L_0888D208;
    case 147u: goto L_0888D210;
    case 148u: goto L_0888D218;
    case 149u: goto L_0888D21C;
    case 150u: goto L_0888D238;
    case 151u: goto L_0888D240;
    case 152u: goto L_0888D24C;
    case 153u: goto L_0888D254;
    case 154u: goto L_0888D25C;
    case 155u: goto L_0888D264;
    case 156u: goto L_0888D270;
    case 157u: goto L_0888D278;
    case 158u: goto L_0888D280;
    case 159u: goto L_0888D288;
    case 160u: goto L_0888D290;
    case 161u: goto L_0888D2A8;
    case 162u: goto L_0888D2B0;
    case 163u: goto L_0888D2B8;
    case 164u: goto L_0888D2C4;
    case 165u: goto L_0888D2CC;
    case 166u: goto L_0888D2D8;
    case 167u: goto L_0888D2E0;
    case 168u: goto L_0888D2E8;
    case 169u: goto L_0888D2F4;
    case 170u: goto L_0888D304;
    case 171u: goto L_0888D30C;
    case 172u: goto L_0888D314;
    case 173u: goto L_0888D334;
    case 174u: goto L_0888D340;
    case 175u: goto L_0888D348;
    case 176u: goto L_0888D35C;
    case 177u: goto L_0888D368;
    case 178u: goto L_0888D370;
    case 179u: goto L_0888D384;
    case 180u: goto L_0888D394;
    case 181u: goto L_0888D398;
    case 182u: goto L_0888D3C0;
    case 183u: goto L_0888D3DC;
    case 184u: goto L_0888D3E8;
    case 185u: goto L_0888D3F4;
    case 186u: goto L_0888D3FC;
    case 187u: goto L_0888D408;
    case 188u: goto L_0888D410;
    case 189u: goto L_0888D418;
    case 190u: goto L_0888D424;
    case 191u: goto L_0888D428;
    case 192u: goto L_0888D430;
    case 193u: goto L_0888D438;
    case 194u: goto L_0888D440;
    case 195u: goto L_0888D448;
    case 196u: goto L_0888D450;
    case 197u: goto L_0888D45C;
    case 198u: goto L_0888D460;
    case 199u: goto L_0888D46C;
    case 200u: goto L_0888D474;
    case 201u: goto L_0888D480;
    case 202u: goto L_0888D48C;
    case 203u: goto L_0888D498;
    case 204u: goto L_0888D49C;
    case 205u: goto L_0888D4A4;
    case 206u: goto L_0888D4AC;
    case 207u: goto L_0888D4B8;
    case 208u: goto L_0888D4C0;
    case 209u: goto L_0888D4C8;
    case 210u: goto L_0888D4D4;
    case 211u: goto L_0888D4DC;
    case 212u: goto L_0888D4E4;
    case 213u: goto L_0888D4EC;
    case 214u: goto L_0888D4F8;
    case 215u: goto L_0888D500;
    case 216u: goto L_0888D50C;
    case 217u: goto L_0888D510;
    case 218u: goto L_0888D518;
    case 219u: goto L_0888D528;
    case 220u: goto L_0888D53C;
    case 221u: goto L_0888D540;
    case 222u: goto L_0888D55C;
    case 223u: goto L_0888D568;
    case 224u: goto L_0888D56C;
    case 225u: goto L_0888D588;
    case 226u: goto L_0888D5AC;
    case 227u: goto L_0888D5B8;
    case 228u: goto L_0888D5C8;
    case 229u: goto L_0888D5D4;
    case 230u: goto L_0888D5D8;
    case 231u: goto L_0888D5E0;
    case 232u: goto L_0888D5E8;
    case 233u: goto L_0888D5F0;
    case 234u: goto L_0888D5F8;
    case 235u: goto L_0888D600;
    case 236u: goto L_0888D608;
    case 237u: goto L_0888D614;
    case 238u: goto L_0888D62C;
    case 239u: goto L_0888D634;
    case 240u: goto L_0888D63C;
    case 241u: goto L_0888D644;
    case 242u: goto L_0888D64C;
    case 243u: goto L_0888D65C;
    case 244u: goto L_0888D664;
    case 245u: goto L_0888D678;
    case 246u: goto L_0888D688;
    case 247u: goto L_0888D698;
    case 248u: goto L_0888D6A4;
    case 249u: goto L_0888D6AC;
    case 250u: goto L_0888D6B4;
    case 251u: goto L_0888D6BC;
    case 252u: goto L_0888D6C4;
    case 253u: goto L_0888D6CC;
    case 254u: goto L_0888D6D8;
    case 255u: goto L_0888D6E0;
    case 256u: goto L_0888D6E8;
    case 257u: goto L_0888D6F4;
    case 258u: goto L_0888D6FC;
    case 259u: goto L_0888D704;
    case 260u: goto L_0888D70C;
    case 261u: goto L_0888D71C;
    case 262u: goto L_0888D724;
    case 263u: goto L_0888D72C;
    case 264u: goto L_0888D734;
    case 265u: goto L_0888D740;
    case 266u: goto L_0888D744;
    case 267u: goto L_0888D760;
    case 268u: goto L_0888D768;
    case 269u: goto L_0888D788;
    case 270u: goto L_0888D790;
    case 271u: goto L_0888D798;
    case 272u: goto L_0888D7A0;
    case 273u: goto L_0888D7B8;
    case 274u: goto L_0888D7C0;
    case 275u: goto L_0888D7C8;
    case 276u: goto L_0888D7D4;
    case 277u: goto L_0888D7DC;
    case 278u: goto L_0888D800;
    case 279u: goto L_0888D83C;
    case 280u: goto L_0888D850;
    case 281u: goto L_0888D868;
    case 282u: goto L_0888D874;
    case 283u: goto L_0888D884;
    case 284u: goto L_0888D88C;
    case 285u: goto L_0888D894;
    case 286u: goto L_0888D8A4;
    case 287u: goto L_0888D8C8;
    case 288u: goto L_0888D8D0;
    case 289u: goto L_0888D8DC;
    case 290u: goto L_0888D8E4;
    case 291u: goto L_0888D8EC;
    case 292u: goto L_0888D910;
    case 293u: goto L_0888D920;
    case 294u: goto L_0888D928;
    case 295u: goto L_0888D944;
    case 296u: goto L_0888D958;
    case 297u: goto L_0888D968;
    case 298u: goto L_0888D970;
    case 299u: goto L_0888D978;
    case 300u: goto L_0888D988;
    case 301u: goto L_0888D9B8;
    case 302u: goto L_0888D9C4;
    case 303u: goto L_0888D9D0;
    case 304u: goto L_0888D9D8;
    case 305u: goto L_0888D9EC;
    case 306u: goto L_0888DA10;
    case 307u: goto L_0888DA20;
    case 308u: goto L_0888DA28;
    case 309u: goto L_0888DA38;
    case 310u: goto L_0888DA40;
    case 311u: goto L_0888DA48;
    case 312u: goto L_0888DA50;
    case 313u: goto L_0888DA58;
    case 314u: goto L_0888DA70;
    case 315u: goto L_0888DA74;
    case 316u: goto L_0888DA7C;
    case 317u: goto L_0888DA8C;
    case 318u: goto L_0888DA94;
    case 319u: goto L_0888DAA0;
    case 320u: goto L_0888DAB0;
    case 321u: goto L_0888DAB8;
    case 322u: goto L_0888DAC8;
    case 323u: goto L_0888DAD0;
    case 324u: goto L_0888DADC;
    case 325u: goto L_0888DAEC;
    case 326u: goto L_0888DAF4;
    case 327u: goto L_0888DB04;
    case 328u: goto L_0888DB0C;
    case 329u: goto L_0888DB74;
    case 330u: goto L_0888DB88;
    case 331u: goto L_0888DBA0;
    case 332u: goto L_0888DBB8;
    case 333u: goto L_0888DBF4;
    case 334u: goto L_0888DBFC;
    case 335u: goto L_0888DC04;
    case 336u: goto L_0888DC0C;
    case 337u: goto L_0888DC14;
    case 338u: goto L_0888DC24;
    case 339u: goto L_0888DC34;
    case 340u: goto L_0888DC3C;
    case 341u: goto L_0888DC44;
    case 342u: goto L_0888DC58;
    case 343u: goto L_0888DCE0;
    case 344u: goto L_0888DD00;
    case 345u: goto L_0888DD04;
    case 346u: goto L_0888DD0C;
    case 347u: goto L_0888DD14;
    case 348u: goto L_0888DD1C;
    case 349u: goto L_0888DD24;
    case 350u: goto L_0888DD2C;
    case 351u: goto L_0888DD38;
    case 352u: goto L_0888DD40;
    case 353u: goto L_0888DD48;
    case 354u: goto L_0888DD54;
    case 355u: goto L_0888DD5C;
    case 356u: goto L_0888DD64;
    case 357u: goto L_0888DD6C;
    case 358u: goto L_0888DD74;
    case 359u: goto L_0888DD7C;
    case 360u: goto L_0888DD84;
    case 361u: goto L_0888DD8C;
    case 362u: goto L_0888DD94;
    case 363u: goto L_0888DDA0;
    case 364u: goto L_0888DDA8;
    case 365u: goto L_0888DDB0;
    case 366u: goto L_0888DDBC;
    case 367u: goto L_0888DDC4;
    case 368u: goto L_0888DDCC;
    case 369u: goto L_0888DDD4;
    case 370u: goto L_0888DDDC;
    case 371u: goto L_0888DDE4;
    case 372u: goto L_0888DDF4;
    case 373u: goto L_0888DDF8;
    case 374u: goto L_0888DE0C;
    case 375u: goto L_0888DE14;
    case 376u: goto L_0888DE1C;
    case 377u: goto L_0888DE28;
    case 378u: goto L_0888DE30;
    case 379u: goto L_0888DE60;
    case 380u: goto L_0888DE98;
    case 381u: goto L_0888DEA4;
    case 382u: goto L_0888DEB0;
    case 383u: goto L_0888DEC0;
    case 384u: goto L_0888DECC;
    case 385u: goto L_0888DEEC;
    case 386u: goto L_0888DEFC;
    case 387u: goto L_0888DF08;
    case 388u: goto L_0888DF28;
    case 389u: goto L_0888DF38;
    case 390u: goto L_0888DF6C;
    case 391u: goto L_0888DF98;
    case 392u: goto L_0888DFB8;
    case 393u: goto L_0888DFC0;
    case 394u: goto L_0888DFC8;
    case 395u: goto L_0888DFD0;
    case 396u: goto L_0888DFE0;
    case 397u: goto L_0888DFF8;
    case 398u: goto L_0888E02C;
    case 399u: goto L_0888E03C;
    case 400u: goto L_0888E074;
    case 401u: goto L_0888E07C;
    case 402u: goto L_0888E080;
    case 403u: goto L_0888E0A0;
    case 404u: goto L_0888E0DC;
    case 405u: goto L_0888E0E4;
    case 406u: goto L_0888E150;
    case 407u: goto L_0888E164;
    case 408u: goto L_0888E180;
    case 409u: goto L_0888E18C;
    case 410u: goto L_0888E280;
    case 411u: goto L_0888E294;
    case 412u: goto L_0888E298;
    case 413u: goto L_0888E30C;
    case 414u: goto L_0888E320;
    case 415u: goto L_0888E324;
    case 416u: goto L_0888E37C;
    case 417u: goto L_0888E384;
    case 418u: goto L_0888E390;
    case 419u: goto L_0888E398;
    case 420u: goto L_0888E3C0;
    case 421u: goto L_0888E3C4;
    case 422u: goto L_0888E3C8;
    case 423u: goto L_0888E3DC;
    case 424u: goto L_0888E3E8;
    case 425u: goto L_0888E3F0;
    case 426u: goto L_0888E3FC;
    case 427u: goto L_0888E408;
    case 428u: goto L_0888E410;
    case 429u: goto L_0888E438;
    case 430u: goto L_0888E458;
    case 431u: goto L_0888E468;
    case 432u: goto L_0888E480;
    case 433u: goto L_0888E494;
    case 434u: goto L_0888E4AC;
    case 435u: goto L_0888E4C4;
    case 436u: goto L_0888E4D8;
    case 437u: goto L_0888E4E0;
    case 438u: goto L_0888E4EC;
    case 439u: goto L_0888E4F4;
    case 440u: goto L_0888E4FC;
    case 441u: goto L_0888E504;
    case 442u: goto L_0888E50C;
    case 443u: goto L_0888E56C;
    case 444u: goto L_0888E57C;
    case 445u: goto L_0888E588;
    case 446u: goto L_0888E594;
    case 447u: goto L_0888E59C;
    case 448u: goto L_0888E5A4;
    case 449u: goto L_0888E5A8;
    case 450u: goto L_0888E5B0;
    case 451u: goto L_0888E5B4;
    case 452u: goto L_0888E5C8;
    case 453u: goto L_0888E5D0;
    case 454u: goto L_0888E5D4;
    case 455u: goto L_0888E5EC;
    case 456u: goto L_0888E5F8;
    case 457u: goto L_0888E5FC;
    case 458u: goto L_0888E610;
    case 459u: goto L_0888E628;
    case 460u: goto L_0888E640;
    case 461u: goto L_0888E658;
    case 462u: goto L_0888E664;
    case 463u: goto L_0888E66C;
    case 464u: goto L_0888E688;
    case 465u: goto L_0888E690;
    case 466u: goto L_0888E698;
    case 467u: goto L_0888E6A8;
    case 468u: goto L_0888E6BC;
    case 469u: goto L_0888E6E4;
    case 470u: goto L_0888E6FC;
    case 471u: goto L_0888E750;
    case 472u: goto L_0888E754;
    case 473u: goto L_0888E774;
    case 474u: goto L_0888E780;
    case 475u: goto L_0888E798;
    case 476u: goto L_0888E7B0;
    case 477u: goto L_0888E7C8;
    case 478u: goto L_0888E7E8;
    case 479u: goto L_0888E7F8;
    case 480u: goto L_0888E810;
    case 481u: goto L_0888E820;
    case 482u: goto L_0888E824;
    case 483u: goto L_0888E854;
    case 484u: goto L_0888E860;
    case 485u: goto L_0888E868;
    case 486u: goto L_0888E870;
    case 487u: goto L_0888E880;
    case 488u: goto L_0888E8A8;
    case 489u: goto L_0888E8DC;
    case 490u: goto L_0888E8E4;
    case 491u: goto L_0888E8EC;
    case 492u: goto L_0888E8F0;
    case 493u: goto L_0888E8FC;
    case 494u: goto L_0888E900;
    case 495u: goto L_0888E930;
    case 496u: goto L_0888E938;
    case 497u: goto L_0888E940;
    case 498u: goto L_0888E944;
    case 499u: goto L_0888E978;
    case 500u: goto L_0888E980;
    case 501u: goto L_0888E988;
    case 502u: goto L_0888E98C;
    case 503u: goto L_0888E9C0;
    case 504u: goto L_0888E9C8;
    case 505u: goto L_0888E9D0;
    case 506u: goto L_0888E9D4;
    case 507u: goto L_0888EA08;
    case 508u: goto L_0888EA10;
    case 509u: goto L_0888EA18;
    case 510u: goto L_0888EA1C;
    case 511u: goto L_0888EA28;
    case 512u: goto L_0888EA30;
    case 513u: goto L_0888EA40;
    case 514u: goto L_0888EA58;
    case 515u: goto L_0888EA70;
    case 516u: goto L_0888EA90;
    case 517u: goto L_0888EA94;
    case 518u: goto L_0888EAA0;
    case 519u: goto L_0888EB5C;
    case 520u: goto L_0888EB74;
    case 521u: goto L_0888EB84;
    case 522u: goto L_0888EB9C;
    case 523u: goto L_0888EBAC;
    case 524u: goto L_0888EBD4;
    case 525u: goto L_0888EBEC;
    case 526u: goto L_0888EC00;
    case 527u: goto L_0888EC18;
    case 528u: goto L_0888EC2C;
    case 529u: goto L_0888EC34;
    case 530u: goto L_0888EC54;
    case 531u: goto L_0888EC68;
    case 532u: goto L_0888EC80;
    case 533u: goto L_0888EC98;
    case 534u: goto L_0888ECB0;
    case 535u: goto L_0888ECC8;
    case 536u: goto L_0888ECD4;
    case 537u: goto L_0888ECEC;
    case 538u: goto L_0888ECFC;
    case 539u: goto L_0888ED04;
    case 540u: goto L_0888ED08;
    case 541u: goto L_0888ED10;
    case 542u: goto L_0888ED14;
    case 543u: goto L_0888ED28;
    case 544u: goto L_0888ED30;
    case 545u: goto L_0888ED3C;
    case 546u: goto L_0888ED50;
    case 547u: goto L_0888ED64;
    case 548u: goto L_0888ED80;
    case 549u: goto L_0888EDB4;
    case 550u: goto L_0888EDBC;
    case 551u: goto L_0888EDC4;
    case 552u: goto L_0888EDC8;
    case 553u: goto L_0888EDD4;
    case 554u: goto L_0888EDD8;
    case 555u: goto L_0888EE08;
    case 556u: goto L_0888EE10;
    case 557u: goto L_0888EE18;
    case 558u: goto L_0888EE1C;
    case 559u: goto L_0888EE50;
    case 560u: goto L_0888EE58;
    case 561u: goto L_0888EE60;
    case 562u: goto L_0888EE64;
    case 563u: goto L_0888EE98;
    case 564u: goto L_0888EEA0;
    case 565u: goto L_0888EEA8;
    case 566u: goto L_0888EEAC;
    case 567u: goto L_0888EEE0;
    case 568u: goto L_0888EEE8;
    case 569u: goto L_0888EEF0;
    case 570u: goto L_0888EEF4;
    case 571u: goto L_0888EF00;
    case 572u: goto L_0888EF04;
    case 573u: goto L_0888EF14;
    case 574u: goto L_0888EF2C;
    case 575u: goto L_0888EF44;
    case 576u: goto L_0888EF58;
    case 577u: goto L_0888EF60;
    case 578u: goto L_0888EF64;
    case 579u: goto L_0888EF6C;
    case 580u: goto L_0888EF74;
    case 581u: goto L_0888EF7C;
    case 582u: goto L_0888EF84;
    case 583u: goto L_0888EF8C;
    case 584u: goto L_0888EF94;
    case 585u: goto L_0888EF9C;
    case 586u: goto L_0888EFA4;
    case 587u: goto L_0888EFAC;
    case 588u: goto L_0888EFB4;
    case 589u: goto L_0888EFBC;
    case 590u: goto L_0888EFC4;
    case 591u: goto L_0888EFCC;
    case 592u: goto L_0888EFD4;
    case 593u: goto L_0888EFDC;
    case 594u: goto L_0888EFE4;
    case 595u: goto L_0888EFEC;
    case 596u: goto L_0888F020;
    case 597u: goto L_0888F028;
    case 598u: goto L_0888F030;
    case 599u: goto L_0888F034;
    case 600u: goto L_0888F038;
    case 601u: goto L_0888F068;
    case 602u: goto L_0888F070;
    case 603u: goto L_0888F078;
    case 604u: goto L_0888F080;
    case 605u: goto L_0888F088;
    case 606u: goto L_0888F090;
    case 607u: goto L_0888F098;
    case 608u: goto L_0888F0A0;
    case 609u: goto L_0888F0A8;
    case 610u: goto L_0888F0B0;
    case 611u: goto L_0888F0B8;
    case 612u: goto L_0888F0C0;
    case 613u: goto L_0888F0C8;
    case 614u: goto L_0888F0D0;
    case 615u: goto L_0888F0D8;
    case 616u: goto L_0888F0E0;
    case 617u: goto L_0888F0E8;
    case 618u: goto L_0888F0F0;
    case 619u: goto L_0888F0F8;
    case 620u: goto L_0888F100;
    case 621u: goto L_0888F108;
    case 622u: goto L_0888F138;
    case 623u: goto L_0888F140;
    case 624u: goto L_0888F148;
    case 625u: goto L_0888F14C;
    case 626u: goto L_0888F150;
    case 627u: goto L_0888F180;
    case 628u: goto L_0888F188;
    case 629u: goto L_0888F190;
    case 630u: goto L_0888F198;
    case 631u: goto L_0888F1A0;
    case 632u: goto L_0888F1A8;
    case 633u: goto L_0888F1B0;
    case 634u: goto L_0888F1B8;
    case 635u: goto L_0888F1E0;
    case 636u: goto L_0888F220;
    case 637u: goto L_0888F234;
    case 638u: goto L_0888F244;
    case 639u: goto L_0888F250;
    case 640u: goto L_0888F264;
    case 641u: goto L_0888F270;
    case 642u: goto L_0888F280;
    case 643u: goto L_0888F28C;
    case 644u: goto L_0888F2A0;
    case 645u: goto L_0888F2AC;
    case 646u: goto L_0888F2C0;
    case 647u: goto L_0888F2CC;
    case 648u: goto L_0888F2D8;
    case 649u: goto L_0888F2E0;
    case 650u: goto L_0888F2E8;
    case 651u: goto L_0888F2F0;
    case 652u: goto L_0888F2FC;
    case 653u: goto L_0888F300;
    case 654u: goto L_0888F308;
    case 655u: goto L_0888F314;
    case 656u: goto L_0888F31C;
    case 657u: goto L_0888F328;
    case 658u: goto L_0888F338;
    case 659u: goto L_0888F340;
    case 660u: goto L_0888F348;
    case 661u: goto L_0888F354;
    case 662u: goto L_0888F368;
    case 663u: goto L_0888F378;
    case 664u: goto L_0888F38C;
    case 665u: goto L_0888F3AC;
    case 666u: goto L_0888F3B4;
    case 667u: goto L_0888F3C0;
    case 668u: goto L_0888F3C8;
    case 669u: goto L_0888F3D8;
    case 670u: goto L_0888F3E0;
    case 671u: goto L_0888F3F0;
    case 672u: goto L_0888F400;
    case 673u: goto L_0888F410;
    case 674u: goto L_0888F420;
    case 675u: goto L_0888F42C;
    case 676u: goto L_0888F448;
    case 677u: goto L_0888F45C;
    case 678u: goto L_0888F460;
    case 679u: goto L_0888F47C;
    case 680u: goto L_0888F4A4;
    case 681u: goto L_0888F4B4;
    case 682u: goto L_0888F4C8;
    case 683u: goto L_0888F4E0;
    case 684u: goto L_0888F4E8;
    case 685u: goto L_0888F500;
    case 686u: goto L_0888F508;
    case 687u: goto L_0888F524;
    case 688u: goto L_0888F52C;
    case 689u: goto L_0888F534;
    case 690u: goto L_0888F53C;
    case 691u: goto L_0888F540;
    case 692u: goto L_0888F560;
    case 693u: goto L_0888F568;
    case 694u: goto L_0888F570;
    case 695u: goto L_0888F578;
    case 696u: goto L_0888F580;
    case 697u: goto L_0888F594;
    case 698u: goto L_0888F5A0;
    case 699u: goto L_0888F5AC;
    case 700u: goto L_0888F5C8;
    case 701u: goto L_0888F5D4;
    case 702u: goto L_0888F5E0;
    case 703u: goto L_0888F5E4;
    case 704u: goto L_0888F61C;
    case 705u: goto L_0888F620;
    case 706u: goto L_0888F638;
    case 707u: goto L_0888F63C;
    case 708u: goto L_0888F654;
    case 709u: goto L_0888F658;
    case 710u: goto L_0888F670;
    case 711u: goto L_0888F674;
    case 712u: goto L_0888F67C;
    case 713u: goto L_0888F680;
    case 714u: goto L_0888F68C;
    case 715u: goto L_0888F694;
    case 716u: goto L_0888F69C;
    case 717u: goto L_0888F6A4;
    case 718u: goto L_0888F6BC;
    case 719u: goto L_0888F6C8;
    case 720u: goto L_0888F6CC;
    case 721u: goto L_0888F6E4;
    case 722u: goto L_0888F6F4;
    case 723u: goto L_0888F728;
    case 724u: goto L_0888F73C;
    case 725u: goto L_0888F748;
    case 726u: goto L_0888F750;
    case 727u: goto L_0888F758;
    case 728u: goto L_0888F764;
    case 729u: goto L_0888F76C;
    case 730u: goto L_0888F778;
    case 731u: goto L_0888F784;
    case 732u: goto L_0888F78C;
    case 733u: goto L_0888F794;
    case 734u: goto L_0888F798;
    case 735u: goto L_0888F7A0;
    case 736u: goto L_0888F7AC;
    case 737u: goto L_0888F7B8;
    case 738u: goto L_0888F7C4;
    case 739u: goto L_0888F7F0;
    case 740u: goto L_0888F7FC;
    case 741u: goto L_0888F808;
    case 742u: goto L_0888F810;
    case 743u: goto L_0888F81C;
    case 744u: goto L_0888F824;
    case 745u: goto L_0888F82C;
    case 746u: goto L_0888F834;
    case 747u: goto L_0888F844;
    case 748u: goto L_0888F858;
    case 749u: goto L_0888F860;
    case 750u: goto L_0888F870;
    case 751u: goto L_0888F884;
    case 752u: goto L_0888F88C;
    case 753u: goto L_0888F894;
    case 754u: goto L_0888F8A0;
    case 755u: goto L_0888F8B0;
    case 756u: goto L_0888F8B8;
    case 757u: goto L_0888F8C8;
    case 758u: goto L_0888F8DC;
    case 759u: goto L_0888F8E0;
    case 760u: goto L_0888F8EC;
    case 761u: goto L_0888F900;
    case 762u: goto L_0888F910;
    case 763u: goto L_0888F91C;
    case 764u: goto L_0888F928;
    case 765u: goto L_0888F938;
    case 766u: goto L_0888F948;
    case 767u: goto L_0888F958;
    case 768u: goto L_0888F968;
    case 769u: goto L_0888F978;
    case 770u: goto L_0888F988;
    case 771u: goto L_0888F998;
    case 772u: goto L_0888F9A8;
    case 773u: goto L_0888F9B8;
    case 774u: goto L_0888F9C4;
    case 775u: goto L_0888F9CC;
    case 776u: goto L_0888F9D4;
    case 777u: goto L_0888F9E0;
    case 778u: goto L_0888F9FC;
    case 779u: goto L_0888FA00;
    case 780u: goto L_0888FA24;
    case 781u: goto L_0888FA50;
    case 782u: goto L_0888FA7C;
    case 783u: goto L_0888FA8C;
    case 784u: goto L_0888FA90;
    case 785u: goto L_0888FA9C;
    case 786u: goto L_0888FAAC;
    case 787u: goto L_0888FAB8;
    case 788u: goto L_0888FAD4;
    case 789u: goto L_0888FAE4;
    case 790u: goto L_0888FAF8;
    case 791u: goto L_0888FB08;
    case 792u: goto L_0888FB20;
    case 793u: goto L_0888FB38;
    case 794u: goto L_0888FB50;
    case 795u: goto L_0888FB64;
    case 796u: goto L_0888FB68;
    case 797u: goto L_0888FB78;
    case 798u: goto L_0888FB8C;
    case 799u: goto L_0888FB94;
    case 800u: goto L_0888FB9C;
    case 801u: goto L_0888FBA4;
    case 802u: goto L_0888FBB4;
    case 803u: goto L_0888FBC4;
    case 804u: goto L_0888FBD0;
    case 805u: goto L_0888FBE0;
    case 806u: goto L_0888FBEC;
    case 807u: goto L_0888FBFC;
    case 808u: goto L_0888FC10;
    case 809u: goto L_0888FC18;
    case 810u: goto L_0888FC40;
    case 811u: goto L_0888FC58;
    case 812u: goto L_0888FC60;
    case 813u: goto L_0888FC74;
    case 814u: goto L_0888FC7C;
    case 815u: goto L_0888FC84;
    case 816u: goto L_0888FCA8;
    case 817u: goto L_0888FCBC;
    case 818u: goto L_0888FCC8;
    case 819u: goto L_0888FCD8;
    case 820u: goto L_0888FCDC;
    case 821u: goto L_0888FCE0;
    case 822u: goto L_0888FCFC;
    case 823u: goto L_0888FD08;
    case 824u: goto L_0888FD10;
    case 825u: goto L_0888FD18;
    case 826u: goto L_0888FD20;
    case 827u: goto L_0888FD28;
    case 828u: goto L_0888FD34;
    case 829u: goto L_0888FD40;
    case 830u: goto L_0888FD48;
    case 831u: goto L_0888FD50;
    case 832u: goto L_0888FD58;
    case 833u: goto L_0888FD5C;
    case 834u: goto L_0888FD64;
    case 835u: goto L_0888FD70;
    case 836u: goto L_0888FD84;
    case 837u: goto L_0888FD8C;
    case 838u: goto L_0888FD94;
    case 839u: goto L_0888FDA4;
    case 840u: goto L_0888FDBC;
    case 841u: goto L_0888FDC4;
    case 842u: goto L_0888FDCC;
    case 843u: goto L_0888FDD4;
    case 844u: goto L_0888FDE0;
    case 845u: goto L_0888FDF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0888C40C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0888C42Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 358u, 0x08889DF8u>(ctx, &aot_mem) && ctx.pc == 0x0888C42Cu) goto L_0888C42C;
    return;
L_0888C42C:
    ctx.set_gpr(31, 0x0888C434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888C434u) goto L_0888C434;
    return;
L_0888C434:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0888C4AC;
      }
      goto L_0888C43C;
    }
L_0888C43C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(496), ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0888C484;
      }
      goto L_0888C44C;
    }
L_0888C44C:
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, ctx.gpr[17] << 2u);
    goto L_0888C454;
L_0888C454:
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[18]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(6, ctx.gpr[9] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(31, 0x0888C474u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x08885644u>(ctx, &aot_mem) && ctx.pc == 0x0888C474u) goto L_0888C474;
    return;
L_0888C474:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(9, ctx.gpr[17] << 2u);
      if (branch_taken) {
          goto L_0888C454;
      }
      goto L_0888C484;
    }
L_0888C484:
    ctx.set_gpr(31, 0x0888C48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888C48Cu) goto L_0888C48C;
    return;
L_0888C48C:
    ctx.set_gpr(31, 0x0888C494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 359u, 0x08889E00u>(ctx, &aot_mem) && ctx.pc == 0x0888C494u) goto L_0888C494;
    return;
L_0888C494:
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
L_0888C4AC:
    ctx.set_gpr(31, 0x0888C4B4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(19180));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888C4B4u) goto L_0888C4B4;
    return;
L_0888C4B4:
    // nop
    goto L_0888C484;
L_0888C550:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0888C574u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 358u, 0x08889DF8u>(ctx, &aot_mem) && ctx.pc == 0x0888C574u) goto L_0888C574;
    return;
L_0888C574:
    ctx.set_gpr(31, 0x0888C57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888C57Cu) goto L_0888C57C;
    return;
L_0888C57C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(19312));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 33 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888C59C;
      }
      goto L_0888C58C;
    }
L_0888C58C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
      if (branch_taken) {
          goto L_0888C5CC;
      }
      goto L_0888C594;
    }
L_0888C594:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(19352));
    goto L_0888C59C;
L_0888C59C:
    ctx.set_gpr(31, 0x0888C5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888C5A4u) goto L_0888C5A4;
    return;
L_0888C5A4:
    ctx.set_gpr(31, 0x0888C5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888C5ACu) goto L_0888C5AC;
    return;
L_0888C5AC:
    ctx.set_gpr(31, 0x0888C5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 359u, 0x08889E00u>(ctx, &aot_mem) && ctx.pc == 0x0888C5B4u) goto L_0888C5B4;
    return;
L_0888C5B4:
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
L_0888C5CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(500), ctx.gpr[18]);
    ctx.set_gpr(31, 0x0888C5E8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x08885644u>(ctx, &aot_mem) && ctx.pc == 0x0888C5E8u) goto L_0888C5E8;
    return;
L_0888C5E8:
    // nop
    goto L_0888C5A4;
L_0888C77C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888C794u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 358u, 0x08889DF8u>(ctx, &aot_mem) && ctx.pc == 0x0888C794u) goto L_0888C794;
    return;
L_0888C794:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(19524));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_0888C7E8;
      }
      goto L_0888C7A8;
    }
L_0888C7A8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(0u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(19564));
      if (branch_taken) {
          goto L_0888C7E8;
      }
      goto L_0888C7C4;
    }
L_0888C7C4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(644), 0u);
    goto L_0888C7D0;
L_0888C7D0:
    ctx.set_gpr(31, 0x0888C7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 359u, 0x08889E00u>(ctx, &aot_mem) && ctx.pc == 0x0888C7D8u) goto L_0888C7D8;
    return;
L_0888C7D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888C7E8:
    ctx.set_gpr(31, 0x0888C7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888C7F0u) goto L_0888C7F0;
    return;
L_0888C7F0:
    // nop
    goto L_0888C7D0;
L_0888C91C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(10, 2225u << 16u);
    ctx.set_gpr(9, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(14448)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0888CA1C;
      }
      goto L_0888C968;
    }
L_0888C968:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.set_gpr(6, 2225u << 16u);
      if (branch_taken) {
          goto L_0888CA14;
      }
      goto L_0888C970;
    }
L_0888C970:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(7, 2225u << 16u);
      if (branch_taken) {
          goto L_0888CA00;
      }
      goto L_0888C978;
    }
L_0888C978:
    ctx.set_gpr(31, 0x0888C980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 394u, 0x0888A0F8u>(ctx, &aot_mem) && ctx.pc == 0x0888C980u) goto L_0888C980;
    return;
L_0888C980:
    ctx.set_gpr(31, 0x0888C988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888C988u) goto L_0888C988;
    return;
L_0888C988:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888C998u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    goto L_0888F234;
L_0888C998:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[20]);
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(476), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(480), ctx.gpr[19]);
    ctx.set_gpr(31, 0x0888C9C0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[8]);
    goto L_0888DA28;
L_0888C9C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(484), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(438), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(632), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), 0u);
    ctx.set_gpr(31, 0x0888C9E0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(652), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888C9E0u) goto L_0888C9E0;
    return;
L_0888C9E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0888C9E4;
L_0888C9E4:
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
L_0888CA00:
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(19864));
    goto L_0888CA04;
L_0888CA04:
    ctx.set_gpr(31, 0x0888CA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888CA0Cu) goto L_0888CA0C;
    return;
L_0888CA0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0888C9E4;
L_0888CA14:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(19820));
    goto L_0888CA04;
L_0888CA1C:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(19780));
    goto L_0888CA04;
L_0888CA24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0888CAF8;
      }
      goto L_0888CA48;
    }
L_0888CA48:
    ctx.set_gpr(31, 0x0888CA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 394u, 0x0888A0F8u>(ctx, &aot_mem) && ctx.pc == 0x0888CA50u) goto L_0888CA50;
    return;
L_0888CA50:
    ctx.set_gpr(31, 0x0888CA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888CA58u) goto L_0888CA58;
    return;
L_0888CA58:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-26296));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0888CA78u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 97u, 0x0887CCA4u>(ctx, &aot_mem) && ctx.pc == 0x0888CA78u) goto L_0888CA78;
    return;
L_0888CA78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0888CAA0;
      }
      goto L_0888CA80;
    }
L_0888CA80:
    ctx.set_gpr(31, 0x0888CA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888CA88u) goto L_0888CA88;
    return;
L_0888CA88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0888CA8C;
L_0888CA8C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888CAA0:
    ctx.set_gpr(31, 0x0888CAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 101u, 0x0887CD30u>(ctx, &aot_mem) && ctx.pc == 0x0888CAA8u) goto L_0888CAA8;
    return;
L_0888CAA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(480), ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(476), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[7]);
    ctx.set_gpr(31, 0x0888CAD8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0888DA28;
L_0888CAD8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(484), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(438), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(632), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(652), 0u);
    goto L_0888CA80;
L_0888CAF8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0888CB04u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(19908));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888CB04u) goto L_0888CB04;
    return;
L_0888CB04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0888CA8C;
L_0888CB0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0888CBD8;
      }
      goto L_0888CB30;
    }
L_0888CB30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(31, 0x0888CB48u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 237u, 0x0888517Cu>(ctx, &aot_mem) && ctx.pc == 0x0888CB48u) goto L_0888CB48;
    return;
L_0888CB48:
    ctx.set_gpr(31, 0x0888CB50u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888CB50u) goto L_0888CB50;
    return;
L_0888CB50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888CBC4;
      }
      goto L_0888CB60;
    }
L_0888CB60:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888CB98;
      }
      goto L_0888CB68;
    }
L_0888CB68:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0888CBBC;
      }
      goto L_0888CB74;
    }
L_0888CB74:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(632)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(9, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[11] + ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888CB98;
      }
      goto L_0888CB8C;
    }
L_0888CB8C:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(652)));
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    goto L_0888CB98;
L_0888CB98:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888CBA4;
      }
      goto L_0888CBA0;
    }
L_0888CBA0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0888CBA4;
L_0888CBA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0888CBA8;
L_0888CBA8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888CBBC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_0888CB98;
L_0888CBC4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    ctx.set_gpr(7, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) ctx.set_gpr(4, ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0888CB60;
L_0888CBD8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0888CBE4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(19948));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888CBE4u) goto L_0888CBE4;
    return;
L_0888CBE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0888CBA8;
L_0888CBEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0888CEA8;
      }
      goto L_0888CC14;
    }
L_0888CC14:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[7] & 255u);
    ctx.set_gpr(5, ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0888CC58;
      }
      goto L_0888CC2C;
    }
L_0888CC2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0888CC58:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(31, 0x0888CC6Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888DA50;
L_0888CC6C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888CDF8;
      }
      goto L_0888CC74;
    }
L_0888CC74:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_0888CE00;
      }
      goto L_0888CC80;
    }
L_0888CC80:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888CC8Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888DA58;
L_0888CC8C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888CC9Cu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_0888DA7C;
L_0888CC9C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    ctx.set_gpr(15, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[15] << 3u);
    ctx.set_gpr(14, ctx.gpr[3] + ctx.gpr[15]);
    ctx.set_gpr(11, ctx.gpr[14] << 1u);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 31u));
    ctx.set_gpr(12, ctx.gpr[13] >> 27u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[12]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 5u));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888CDF8;
      }
      goto L_0888CCD0;
    }
L_0888CCD0:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888CCDCu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888DA58;
L_0888CCDC:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888CCECu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_0888DA7C;
L_0888CCEC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(18, ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(24, ctx.lo);
    ctx.set_gpr(15, ctx.gpr[24] << 3u);
    ctx.set_gpr(3, ctx.gpr[15] + ctx.gpr[24]);
    ctx.set_gpr(12, ctx.gpr[3] << 1u);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 31u));
    ctx.set_gpr(13, ctx.gpr[14] >> 27u);
    ctx.set_gpr(11, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 5u));
    ctx.set_gpr(31, 0x0888CD28u);
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[10]);
    goto L_0888DA58;
L_0888CD28:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888CD38u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0888DA7C;
L_0888CD38:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(17, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[2] << 3u);
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(25, ctx.gpr[8] << 1u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[7] >> 27u);
    ctx.set_gpr(16, ctx.gpr[25] + ctx.gpr[6]);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 5u));
    ctx.set_gpr(31, 0x0888CD74u);
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[24]);
    goto L_0888DA58;
L_0888CD74:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888CD84u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0888DA7C;
L_0888CD84:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(15, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[15] << 3u);
    ctx.set_gpr(14, ctx.gpr[3] + ctx.gpr[15]);
    ctx.set_gpr(11, ctx.gpr[14] << 1u);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 31u));
    ctx.set_gpr(12, ctx.gpr[13] >> 27u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[12]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 5u));
    ctx.set_gpr(31, 0x0888CDB8u);
    ctx.set_gpr(18, ctx.gpr[21] + ctx.gpr[9]);
    goto L_0888DA58;
L_0888CDB8:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888CDC8u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0888DA7C;
L_0888CDC8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[2] << 3u);
    ctx.set_gpr(8, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[8] << 1u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[7] >> 27u);
    ctx.set_gpr(25, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 5u));
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(21, ctx.gpr[18] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0888CCD0;
      }
      goto L_0888CDF8;
    }
L_0888CDF8:
    ctx.set_gpr(3, ctx.gpr[21] + 0u);
    goto L_0888CC2C;
L_0888CE00:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888CCD0;
      }
      goto L_0888CE08;
    }
L_0888CE08:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888CC80;
      }
      goto L_0888CE10;
    }
L_0888CE10:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_0888CE64;
      }
      goto L_0888CE18;
    }
L_0888CE18:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888CE24u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888DA58;
L_0888CE24:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888CE34u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0888DA7C;
L_0888CE34:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[8] << 3u);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(24, ctx.gpr[6] << 1u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 31u));
    ctx.set_gpr(25, ctx.gpr[5] >> 27u);
    ctx.set_gpr(18, ctx.gpr[24] + ctx.gpr[25]);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 5u));
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[16]);
    goto L_0888CC80;
L_0888CE64:
    ctx.set_gpr(31, 0x0888CE6Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888DA58;
L_0888CE6C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0888CE7Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0888DA7C;
L_0888CE7C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(15, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[15] + ctx.gpr[2]);
    ctx.set_gpr(12, ctx.gpr[3] << 1u);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 31u));
    ctx.set_gpr(13, ctx.gpr[14] >> 27u);
    ctx.set_gpr(11, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 5u));
    goto L_0888CE18;
L_0888CEA8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0888CEB4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(19988));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888CEB4u) goto L_0888CEB4;
    return;
L_0888CEB4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_0888CC2C;
L_0888CEBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(19, (ctx.gpr[19] & ~0x0000003Fu) | ((0u & 0x0000003Fu) << 0u));
    ctx.set_gpr(3, ctx.gpr[19] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[6] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0888D18C;
      }
      goto L_0888CEFC;
    }
L_0888CEFC:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3508))))));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(3508));
      if (branch_taken) {
          goto L_0888CF38;
      }
      goto L_0888CF10;
    }
L_0888CF10:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(664))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888CF38;
      }
      goto L_0888CF1C;
    }
L_0888CF1C:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1328))))));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0888CF38;
      }
      goto L_0888CF28;
    }
L_0888CF28:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1992))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[10] != 0u) ctx.set_gpr(5, ctx.gpr[9]);
    goto L_0888CF38;
L_0888CF38:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_0888D138;
      }
      goto L_0888CF44;
    }
L_0888CF44:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(664));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(664));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(18, ctx.lo);
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(31, 0x0888CF64u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0888CF64u) goto L_0888CF64;
    return;
L_0888CF64:
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(628), ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(424), ctx.gpr[12]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16576));
      if (branch_taken) {
          goto L_0888D178;
      }
      goto L_0888CF9C;
    }
L_0888CF9C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(64));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    goto L_0888CFB8;
L_0888CFB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888CFC8u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 552u, 0x0888AAC4u>(ctx, &aot_mem) && ctx.pc == 0x0888CFC8u) goto L_0888CFC8;
    return;
L_0888CFC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(20, ctx.gpr[20] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_0888D168;
      }
      goto L_0888CFD0;
    }
L_0888CFD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0888D168;
      }
      goto L_0888CFD8;
    }
L_0888CFD8:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0888D040;
      }
      goto L_0888CFE4;
    }
L_0888CFE4:
    ctx.set_gpr(22, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(21, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    goto L_0888CFF0;
L_0888CFF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(11, ctx.gpr[18] << 2u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(10, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[20] - ctx.gpr[10]);
    ctx.set_gpr(4, ctx.gpr[11] + ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[11] + ctx.gpr[21]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_0888D168;
      }
      goto L_0888D020;
    }
L_0888D020:
    ctx.set_gpr(31, 0x0888D028u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x0888D028u) goto L_0888D028;
    return;
L_0888D028:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888D168;
      }
      goto L_0888D030;
    }
L_0888D030:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
        goto L_0888CFF0;
    }
    goto L_0888D040;
L_0888D040:
    ctx.set_gpr(17, ctx.gpr[20] + static_cast<std::uint32_t>(-8448));
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.set_gpr(15, ctx.gpr[18] >> 21u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[15]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x000007FFu) | ((0u & 0x000007FFu) << 0u));
    ctx.set_gpr(13, ctx.gpr[5] + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(20, ctx.gpr[20] - ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(280), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(288), ctx.gpr[14]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(284), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888D168;
      }
      goto L_0888D074;
    }
L_0888D074:
    ctx.set_gpr(21, static_cast<std::int32_t>(ctx.gpr[20]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0888D168;
      }
      goto L_0888D080;
    }
L_0888D080:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), 0u);
    ctx.set_gpr(31, 0x0888D090u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8192));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x0888D090u) goto L_0888D090;
    return;
L_0888D090:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888D168;
      }
      goto L_0888D098;
    }
L_0888D098:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(31, 0x0888D0A8u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(152));
    goto L_0888D8EC;
L_0888D0A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888D168;
      }
      goto L_0888D0B0;
    }
L_0888D0B0:
    ctx.set_gpr(19, 2185u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(-22856));
    ctx.set_gpr(31, 0x0888D0C4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_0888DC58;
L_0888D0C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x0888D0D0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 584u, 0x088822A4u>(ctx, &aot_mem) && ctx.pc == 0x0888D0D0u) goto L_0888D0D0;
    return;
L_0888D0D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888D168;
      }
      goto L_0888D0D8;
    }
L_0888D0D8:
    ctx.set_gpr(22, 2185u << 16u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0888D0ECu);
    ctx.set_gpr(5, ctx.gpr[22] + static_cast<std::uint32_t>(-24136));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 772u, 0x08882CD0u>(ctx, &aot_mem) && ctx.pc == 0x0888D0ECu) goto L_0888D0EC;
    return;
L_0888D0EC:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(437), static_cast<std::uint8_t>(ctx.gpr[23]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(428), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(436), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(440), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(444), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(448), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(492), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(656), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(660), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(644), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(648), 0u);
    goto L_0888D138;
L_0888D138:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D168:
    ctx.set_gpr(31, 0x0888D170u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 362u, 0x08889FB0u>(ctx, &aot_mem) && ctx.pc == 0x0888D170u) goto L_0888D170;
    return;
L_0888D170:
    ctx.set_gpr(6, 0u + 0u);
    goto L_0888D138;
L_0888D178:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[24] << 6u);
    ctx.set_gpr(21, ctx.gpr[22] + ctx.gpr[24]);
    ctx.set_gpr(17, ctx.gpr[21] << 8u);
    goto L_0888CFB8;
L_0888D18C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0888D198u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20044));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888D198u) goto L_0888D198;
    return;
L_0888D198:
    ctx.set_gpr(6, 0u + 0u);
    goto L_0888D138;
L_0888D1A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0888D7C8;
      }
      goto L_0888D1CC;
    }
L_0888D1CC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_0888D2E0;
      }
      goto L_0888D1E4;
    }
L_0888D1E4:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[15];
    // nop
      if (branch_taken) {
          goto L_0888D254;
      }
      goto L_0888D1F4;
    }
L_0888D1F4:
    ctx.set_gpr(31, 0x0888D1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888D1FCu) goto L_0888D1FC;
    return;
L_0888D1FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888D238;
      }
      goto L_0888D208;
    }
L_0888D208:
    ctx.set_gpr(31, 0x0888D210u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 446u, 0x0888A358u>(ctx, &aot_mem) && ctx.pc == 0x0888D210u) goto L_0888D210;
    return;
L_0888D210:
    ctx.set_gpr(31, 0x0888D218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888D218u) goto L_0888D218;
    return;
L_0888D218:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_0888D21C;
L_0888D21C:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D238:
    ctx.set_gpr(31, 0x0888D240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 719u, 0x08882988u>(ctx, &aot_mem) && ctx.pc == 0x0888D240u) goto L_0888D240;
    return;
L_0888D240:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
        goto L_0888D208;
    }
    goto L_0888D24C;
L_0888D24C:
    // nop
    goto L_0888D208;
L_0888D254:
    ctx.set_gpr(31, 0x0888D25Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888DC34;
L_0888D25C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D2B0;
      }
      goto L_0888D264;
    }
L_0888D264:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888D278;
      }
      goto L_0888D270;
    }
L_0888D270:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0888D1F4;
L_0888D278:
    ctx.set_gpr(31, 0x0888D280u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 719u, 0x08882988u>(ctx, &aot_mem) && ctx.pc == 0x0888D280u) goto L_0888D280;
    return;
L_0888D280:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0888D1F4;
      }
      goto L_0888D288;
    }
L_0888D288:
    ctx.set_gpr(31, 0x0888D290u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 230u, 0x08884EC4u>(ctx, &aot_mem) && ctx.pc == 0x0888D290u) goto L_0888D290;
    return;
L_0888D290:
    ctx.set_gpr(9, ctx.gpr[2] ^ 5u);
    ctx.set_gpr(5, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[7] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0888D270;
      }
      goto L_0888D2A8;
    }
L_0888D2A8:
    // nop
    goto L_0888D1F4;
L_0888D2B0:
    ctx.set_gpr(31, 0x0888D2B8u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888D9D0;
L_0888D2B8:
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[24];
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888D1F4;
      }
      goto L_0888D2C4;
    }
L_0888D2C4:
    ctx.set_gpr(31, 0x0888D2CCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 662u, 0x0888B11Cu>(ctx, &aot_mem) && ctx.pc == 0x0888D2CCu) goto L_0888D2CC;
    return;
L_0888D2CC:
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[25]) {
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[16]));
        goto L_0888D1F4;
    }
    goto L_0888D2D8;
L_0888D2D8:
    // nop
    goto L_0888D1F4;
L_0888D2E0:
    ctx.set_gpr(31, 0x0888D2E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 578u, 0x0888ACA0u>(ctx, &aot_mem) && ctx.pc == 0x0888D2E8u) goto L_0888D2E8;
    return;
L_0888D2E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888D6F4;
      }
      goto L_0888D2F4;
    }
L_0888D2F4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(484)));
    ctx.set_gpr(4, ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D63C;
      }
      goto L_0888D304;
    }
L_0888D304:
    ctx.set_gpr(31, 0x0888D30Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 719u, 0x08882988u>(ctx, &aot_mem) && ctx.pc == 0x0888D30Cu) goto L_0888D30C;
    return;
L_0888D30C:
    ctx.set_gpr(31, 0x0888D314u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888D314u) goto L_0888D314;
    return;
L_0888D314:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(438))))));
    ctx.set_gpr(2, ctx.gpr[16] ^ 2u);
    ctx.set_gpr(9, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[11] ^ 1u);
    ctx.set_gpr(8, ctx.gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[8] & ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D62C;
      }
      goto L_0888D334;
    }
L_0888D334:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(438), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x0888D340u);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888D340u) goto L_0888D340;
    return;
L_0888D340:
    ctx.set_gpr(31, 0x0888D348u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08882768u>(ctx, &aot_mem) && ctx.pc == 0x0888D348u) goto L_0888D348;
    return;
L_0888D348:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x0888D35Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D35Cu) goto L_0888D35C;
    return;
L_0888D35C:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    if (static_cast<std::int32_t>(ctx.gpr[12]) <= 0) {
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(480)));
        goto L_0888D398;
    }
    goto L_0888D368;
L_0888D368:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0888D370;
L_0888D370:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0888D384u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D384u) goto L_0888D384;
    return;
L_0888D384:
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[24]) ? 1u : 0u);
    if (ctx.gpr[15] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0888D370;
    }
    goto L_0888D394;
L_0888D394:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(480)));
    goto L_0888D398;
L_0888D398:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2048));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(476)));
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[9]) * static_cast<std::uint64_t>(ctx.gpr[4]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(472)));
    ctx.set_gpr(9, ctx.hi);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(31, 0x0888D3C0u);
    ctx.set_gpr(18, 32767u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 652u, 0x08882594u>(ctx, &aot_mem) && ctx.pc == 0x0888D3C0u) goto L_0888D3C0;
    return;
L_0888D3C0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[6] >> 31u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    ctx.set_gpr(31, 0x0888D3DCu);
    ctx.set_gpr(6, ctx.gpr[18] | 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 817u, 0x088831A0u>(ctx, &aot_mem) && ctx.pc == 0x0888D3DCu) goto L_0888D3DC;
    return;
L_0888D3DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0888D3E8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 722u, 0x088829C0u>(ctx, &aot_mem) && ctx.pc == 0x0888D3E8u) goto L_0888D3E8;
    return;
L_0888D3E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0888D3F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08882D18u>(ctx, &aot_mem) && ctx.pc == 0x0888D3F4u) goto L_0888D3F4;
    return;
L_0888D3F4:
    ctx.set_gpr(31, 0x0888D3FCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 731u, 0x08882A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0888D3FCu) goto L_0888D3FC;
    return;
L_0888D3FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x0888D408u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0888DA38;
L_0888D408:
    ctx.set_gpr(31, 0x0888D410u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_0888D9D8;
L_0888D410:
    ctx.set_gpr(31, 0x0888D418u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888D9D0;
L_0888D418:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[8];
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888D438;
      }
      goto L_0888D424;
    }
L_0888D424:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(4));
    goto L_0888D428;
L_0888D428:
    if (ctx.gpr[3] == ctx.gpr[10]) {
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
        goto L_0888D218;
    }
    goto L_0888D430;
L_0888D430:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    goto L_0888D1E4;
L_0888D438:
    ctx.set_gpr(31, 0x0888D440u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888DA50;
L_0888D440:
    ctx.set_gpr(31, 0x0888D448u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888DC34;
L_0888D448:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888D4E4;
      }
      goto L_0888D450;
    }
L_0888D450:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[10]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_0888D46C;
    }
    goto L_0888D45C;
L_0888D45C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    goto L_0888D460;
L_0888D460:
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(432), ctx.gpr[24]);
    goto L_0888D1E4;
L_0888D46C:
    ctx.set_gpr(31, 0x0888D474u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08882D18u>(ctx, &aot_mem) && ctx.pc == 0x0888D474u) goto L_0888D474;
    return;
L_0888D474:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888D480u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0888DA38;
L_0888D480:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(436))))));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[16];
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_0888D4D4;
      }
      goto L_0888D48C;
    }
L_0888D48C:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(437))))));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0888D4D4;
      }
      goto L_0888D498;
    }
L_0888D498:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_0888D49C;
L_0888D49C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(15, 2225u << 16u);
      if (branch_taken) {
          goto L_0888D4C0;
      }
      goto L_0888D4A4;
    }
L_0888D4A4:
    ctx.set_gpr(31, 0x0888D4ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 298u, 0x08886764u>(ctx, &aot_mem) && ctx.pc == 0x0888D4ACu) goto L_0888D4AC;
    return;
L_0888D4AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0888D4B8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 198u, 0x08884D44u>(ctx, &aot_mem) && ctx.pc == 0x0888D4B8u) goto L_0888D4B8;
    return;
L_0888D4B8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    goto L_0888D460;
L_0888D4C0:
    ctx.set_gpr(31, 0x0888D4C8u);
    ctx.set_gpr(4, ctx.gpr[15] + static_cast<std::uint32_t>(20084));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888D4C8u) goto L_0888D4C8;
    return;
L_0888D4C8:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[14]));
    goto L_0888D45C;
L_0888D4D4:
    ctx.set_gpr(31, 0x0888D4DCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0888DA40;
L_0888D4DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_0888D49C;
L_0888D4E4:
    ctx.set_gpr(31, 0x0888D4ECu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 484u, 0x0888A51Cu>(ctx, &aot_mem) && ctx.pc == 0x0888D4ECu) goto L_0888D4EC;
    return;
L_0888D4EC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(448), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888D50C;
      }
      goto L_0888D4F8;
    }
L_0888D4F8:
    ctx.set_gpr(31, 0x0888D500u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_0888DA8C;
L_0888D500:
    ctx.set_gpr(20, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0888D518;
      }
      goto L_0888D50C;
    }
L_0888D50C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    goto L_0888D510;
L_0888D510:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0888D218;
L_0888D518:
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888D528u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    goto L_0888DAD0;
L_0888D528:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(444)));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0888D56C;
      }
      goto L_0888D53C;
    }
L_0888D53C:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    goto L_0888D540;
L_0888D540:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888D608;
      }
      goto L_0888D55C;
    }
L_0888D55C:
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[24] != 0u) {
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
        goto L_0888D540;
    }
    goto L_0888D568;
L_0888D568:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0888D56C;
L_0888D56C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(448), ctx.gpr[16]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(8, ctx.gpr[10] >> 21u);
    ctx.set_gpr(9, ctx.gpr[4] + ctx.gpr[8]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x0888D588u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 11u));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 722u, 0x088829C0u>(ctx, &aot_mem) && ctx.pc == 0x0888D588u) goto L_0888D588;
    return;
L_0888D588:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, ctx.gpr[7] + ctx.gpr[5]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[6] >> 21u);
    ctx.set_gpr(25, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x0888D5ACu);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 11u));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08882D18u>(ctx, &aot_mem) && ctx.pc == 0x0888D5ACu) goto L_0888D5AC;
    return;
L_0888D5AC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888D5B8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0888DA38;
L_0888D5B8:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(436))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_0888D5F8;
      }
      goto L_0888D5C8;
    }
L_0888D5C8:
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(437))))));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0888D5F8;
      }
      goto L_0888D5D4;
    }
L_0888D5D4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0888D5D8;
L_0888D5D8:
    ctx.set_gpr(31, 0x0888D5E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 610u, 0x0888AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0888D5E0u) goto L_0888D5E0;
    return;
L_0888D5E0:
    ctx.set_gpr(31, 0x0888D5E8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 585u, 0x0888AD28u>(ctx, &aot_mem) && ctx.pc == 0x0888D5E8u) goto L_0888D5E8;
    return;
L_0888D5E8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
        goto L_0888D460;
    }
    goto L_0888D5F0;
L_0888D5F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    goto L_0888D510;
L_0888D5F8:
    ctx.set_gpr(31, 0x0888D600u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0888DA40;
L_0888D600:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0888D5D8;
L_0888D608:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0888D614u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    goto L_0888DAD0;
L_0888D614:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(444)));
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[14]);
    goto L_0888D55C;
L_0888D62C:
    ctx.set_gpr(31, 0x0888D634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888D634u) goto L_0888D634;
    return;
L_0888D634:
    // nop
    goto L_0888D410;
L_0888D63C:
    ctx.set_gpr(31, 0x0888D644u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888D9D0;
L_0888D644:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888D6CC;
      }
      goto L_0888D64C;
    }
L_0888D64C:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[25]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0888D688;
      }
      goto L_0888D65C;
    }
L_0888D65C:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0888D664;
L_0888D664:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x0888D678u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888D678u) goto L_0888D678;
    return;
L_0888D678:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0888D664;
    }
    goto L_0888D688;
L_0888D688:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(436))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[3];
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_0888D6BC;
      }
      goto L_0888D698;
    }
L_0888D698:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(437))))));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0888D6BC;
      }
      goto L_0888D6A4;
    }
L_0888D6A4:
    ctx.set_gpr(31, 0x0888D6ACu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888D9D8;
L_0888D6AC:
    ctx.set_gpr(31, 0x0888D6B4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888DE30;
L_0888D6B4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    goto L_0888D1E4;
L_0888D6BC:
    ctx.set_gpr(31, 0x0888D6C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0888DA40;
L_0888D6C4:
    // nop
    goto L_0888D6A4;
L_0888D6CC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888D428;
      }
      goto L_0888D6D8;
    }
L_0888D6D8:
    ctx.set_gpr(31, 0x0888D6E0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 585u, 0x0888AD28u>(ctx, &aot_mem) && ctx.pc == 0x0888D6E0u) goto L_0888D6E0;
    return;
L_0888D6E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888D510;
      }
      goto L_0888D6E8;
    }
L_0888D6E8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(432), ctx.gpr[16]);
    goto L_0888D1E4;
L_0888D6F4:
    ctx.set_gpr(31, 0x0888D6FCu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888DC34;
L_0888D6FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888D71C;
      }
      goto L_0888D704;
    }
L_0888D704:
    if (ctx.gpr[2] != ctx.gpr[16]) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
        goto L_0888D1E4;
    }
    goto L_0888D70C;
L_0888D70C:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[14]));
    goto L_0888D1E4;
L_0888D71C:
    ctx.set_gpr(31, 0x0888D724u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 628u, 0x0888AF90u>(ctx, &aot_mem) && ctx.pc == 0x0888D724u) goto L_0888D724;
    return;
L_0888D724:
    if (ctx.gpr[2] != ctx.gpr[16]) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
        goto L_0888D1E4;
    }
    goto L_0888D72C;
L_0888D72C:
    ctx.set_gpr(31, 0x0888D734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888D734u) goto L_0888D734;
    return;
L_0888D734:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0888D7B8;
      }
      goto L_0888D740;
    }
L_0888D740:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(492)));
    goto L_0888D744;
L_0888D744:
    ctx.fpr[2] = std::bit_cast<float>(0u);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) && ctx.fpr[1] == ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(432), 0u);
      if (branch_taken) {
          goto L_0888D7A0;
      }
      goto L_0888D760;
    }
L_0888D760:
    ctx.set_gpr(31, 0x0888D768u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0888CBEC;
L_0888D768:
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(492)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(284)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(3, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    goto L_0888D788;
L_0888D788:
    ctx.set_gpr(31, 0x0888D790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 817u, 0x088831A0u>(ctx, &aot_mem) && ctx.pc == 0x0888D790u) goto L_0888D790;
    return;
L_0888D790:
    ctx.set_gpr(31, 0x0888D798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888D798u) goto L_0888D798;
    return;
L_0888D798:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    goto L_0888D1E4;
L_0888D7A0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(284)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(13, ctx.gpr[6] >> 31u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[13]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_0888D788;
L_0888D7B8:
    ctx.set_gpr(31, 0x0888D7C0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 578u, 0x0888ACA0u>(ctx, &aot_mem) && ctx.pc == 0x0888D7C0u) goto L_0888D7C0;
    return;
L_0888D7C0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(492)));
    goto L_0888D744;
L_0888D7C8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0888D7D4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20152));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888D7D4u) goto L_0888D7D4;
    return;
L_0888D7D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_0888D21C;
L_0888D7DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(640));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x0888D800u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(536)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0888D800u) goto L_0888D800;
    return;
L_0888D800:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(536), ctx.gpr[17]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(610), static_cast<std::uint16_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(608), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(612), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(614), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D83C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888D850u);
    ctx.set_gpr(16, 2245u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888D850u) goto L_0888D850;
    return;
L_0888D850:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26040)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(6164));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3312));
      if (branch_taken) {
          goto L_0888D884;
      }
      goto L_0888D868;
    }
L_0888D868:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0888D874u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26040), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888D874u) goto L_0888D874;
    return;
L_0888D874:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D884:
    ctx.set_gpr(31, 0x0888D88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0888D88Cu) goto L_0888D88C;
    return;
L_0888D88C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26040)));
    goto L_0888D868;
L_0888D894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888D8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888D8A4u) goto L_0888D8A4;
    return;
L_0888D8A4:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26040)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3312));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(6164));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-26040), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0888D8DC;
      }
      goto L_0888D8C8;
    }
L_0888D8C8:
    ctx.set_gpr(31, 0x0888D8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888D8D0u) goto L_0888D8D0;
    return;
L_0888D8D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D8DC:
    ctx.set_gpr(31, 0x0888D8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0888D8E4u) goto L_0888D8E4;
    return;
L_0888D8E4:
    // nop
    goto L_0888D8C8;
L_0888D8EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888D910u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888D910u) goto L_0888D910;
    return;
L_0888D910:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888D920u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_0888DE60;
L_0888D920:
    ctx.set_gpr(31, 0x0888D928u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888D928u) goto L_0888D928;
    return;
L_0888D928:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_0888D944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888D958u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888D958u) goto L_0888D958;
    return;
L_0888D958:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(828));
      if (branch_taken) {
          goto L_0888D970;
      }
      goto L_0888D968;
    }
L_0888D968:
    ctx.set_gpr(31, 0x0888D970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0888D970u) goto L_0888D970;
    return;
L_0888D970:
    ctx.set_gpr(31, 0x0888D978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888D978u) goto L_0888D978;
    return;
L_0888D978:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D988:
    ctx.set_gpr(11, ctx.gpr[6] + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[12] >> 28u);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[6]) < 128 ? 1u : 0u);
    ctx.set_gpr(8, 0u < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[8] | ctx.gpr[9]);
    ctx.set_gpr(7, (ctx.gpr[7] & ~0x0000003Fu) | ((0u & 0x0000003Fu) << 0u));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 4u));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(700));
      if (branch_taken) {
          goto L_0888D9C4;
      }
      goto L_0888D9B8;
    }
L_0888D9B8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(692), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(696), ctx.gpr[6]);
    goto L_0888D9C4;
L_0888D9C4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(696), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(692), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D9D0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888D9D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0888D9ECu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888D9ECu) goto L_0888D9EC;
    return;
L_0888D9EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(824), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x0888DA10u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(820), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888DA10u) goto L_0888DA10;
    return;
L_0888DA10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DA20:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DA28:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DA38:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DA40:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DA48:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DA50:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(172))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DA58:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0888DA74;
      }
      goto L_0888DA70;
    }
L_0888DA70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    goto L_0888DA74;
L_0888DA74:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DA7C:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(176))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DA8C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DA94:
    ctx.set_gpr(8, ctx.gpr[5] << 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_0888DAB0;
      }
      goto L_0888DAA0;
    }
L_0888DAA0:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(536)));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0888DAB0;
L_0888DAB0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888DAC8;
      }
      goto L_0888DAB8;
    }
L_0888DAB8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(536)));
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0888DAC8;
L_0888DAC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DAD0:
    ctx.set_gpr(8, ctx.gpr[5] << 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_0888DAEC;
      }
      goto L_0888DADC;
    }
L_0888DADC:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(536)));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0888DAEC;
L_0888DAEC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888DB04;
      }
      goto L_0888DAF4;
    }
L_0888DAF4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(536)));
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0888DB04;
L_0888DB04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DB0C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(764)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DB74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(160));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_0888DBF4;
      }
      goto L_0888DB88;
    }
L_0888DB88:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(528)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(536)));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[9] & 3u);
      if (branch_taken) {
          goto L_0888DBFC;
      }
      goto L_0888DBA0;
    }
L_0888DBA0:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888DBF4;
      }
      goto L_0888DBB8;
    }
L_0888DBB8:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[11]);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(15, ctx.gpr[2] + ctx.gpr[25]);
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[15] + ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(6, ctx.gpr[14] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888DBB8;
      }
      goto L_0888DBF4;
    }
L_0888DBF4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DBFC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888DBB8;
      }
      goto L_0888DC04;
    }
L_0888DC04:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888DBA0;
      }
      goto L_0888DC0C;
    }
L_0888DC0C:
    if (ctx.gpr[11] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_0888DC24;
    }
    goto L_0888DC14;
L_0888DC14:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0888DC24;
L_0888DC24:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[3]);
    goto L_0888DBA0;
L_0888DC34:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DC3C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(824)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DC44:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(820), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DC58:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(816), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(812), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DCE0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26036)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0888DE1C;
      }
      goto L_0888DD00;
    }
L_0888DD00:
    ctx.set_gpr(3, 2247u << 16u);
    goto L_0888DD04;
L_0888DD04:
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(6164));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(7));
    goto L_0888DD0C;
L_0888DD0C:
    ctx.set_gpr(31, 0x0888DD14u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(828));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888DD14u) goto L_0888DD14;
    return;
L_0888DD14:
    ctx.set_gpr(31, 0x0888DD1Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0888E398;
L_0888DD1C:
    ctx.set_gpr(31, 0x0888DD24u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888DD24u) goto L_0888DD24;
    return;
L_0888DD24:
    ctx.set_gpr(31, 0x0888DD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888DD2Cu) goto L_0888DD2C;
    return;
L_0888DD2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0888DD38u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(1656));
    goto L_0888E398;
L_0888DD38:
    ctx.set_gpr(31, 0x0888DD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888DD40u) goto L_0888DD40;
    return;
L_0888DD40:
    ctx.set_gpr(31, 0x0888DD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888DD48u) goto L_0888DD48;
    return;
L_0888DD48:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0888DD54u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(2484));
    goto L_0888E398;
L_0888DD54:
    ctx.set_gpr(31, 0x0888DD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888DD5Cu) goto L_0888DD5C;
    return;
L_0888DD5C:
    ctx.set_gpr(31, 0x0888DD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888DD64u) goto L_0888DD64;
    return;
L_0888DD64:
    ctx.set_gpr(31, 0x0888DD6Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0888E398;
L_0888DD6C:
    ctx.set_gpr(31, 0x0888DD74u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(828));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888DD74u) goto L_0888DD74;
    return;
L_0888DD74:
    ctx.set_gpr(31, 0x0888DD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888DD7Cu) goto L_0888DD7C;
    return;
L_0888DD7C:
    ctx.set_gpr(31, 0x0888DD84u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0888E398;
L_0888DD84:
    ctx.set_gpr(31, 0x0888DD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888DD8Cu) goto L_0888DD8C;
    return;
L_0888DD8C:
    ctx.set_gpr(31, 0x0888DD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888DD94u) goto L_0888DD94;
    return;
L_0888DD94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0888DDA0u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(1656));
    goto L_0888E398;
L_0888DDA0:
    ctx.set_gpr(31, 0x0888DDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888DDA8u) goto L_0888DDA8;
    return;
L_0888DDA8:
    ctx.set_gpr(31, 0x0888DDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888DDB0u) goto L_0888DDB0;
    return;
L_0888DDB0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0888DDBCu);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(2484));
    goto L_0888E398;
L_0888DDBC:
    ctx.set_gpr(31, 0x0888DDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888DDC4u) goto L_0888DDC4;
    return;
L_0888DDC4:
    ctx.set_gpr(31, 0x0888DDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 354u, 0x08889DC0u>(ctx, &aot_mem) && ctx.pc == 0x0888DDCCu) goto L_0888DDCC;
    return;
L_0888DDCC:
    ctx.set_gpr(31, 0x0888DDD4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0888E398;
L_0888DDD4:
    ctx.set_gpr(31, 0x0888DDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 356u, 0x08889DDCu>(ctx, &aot_mem) && ctx.pc == 0x0888DDDCu) goto L_0888DDDC;
    return;
L_0888DDDC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0888DD0C;
      }
      goto L_0888DDE4;
    }
L_0888DDE4:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26028)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 2245u << 16u);
      if (branch_taken) {
          goto L_0888DE0C;
      }
      goto L_0888DDF4;
    }
L_0888DDF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0888DDF8;
L_0888DDF8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DE0C:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0888DE14u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26024)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DE14u) goto L_0888DE14;
    return;
L_0888DE14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0888DDF8;
L_0888DE1C:
    ctx.set_gpr(5, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0888DE28u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26032)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888DE28u) goto L_0888DE28;
    return;
L_0888DE28:
    ctx.set_gpr(3, 2247u << 16u);
    goto L_0888DD04;
L_0888DE30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DE60:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(6164))))));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(6164));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0888DEC0;
      }
      goto L_0888DE98;
    }
L_0888DE98:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(828))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888DEC0;
      }
      goto L_0888DEA4;
    }
L_0888DEA4:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1656))))));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0888DEC0;
      }
      goto L_0888DEB0;
    }
L_0888DEB0:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2484))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[9] != 0u) ctx.set_gpr(5, ctx.gpr[8]);
    goto L_0888DEC0;
L_0888DEC0:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[10];
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_0888DF98;
      }
      goto L_0888DECC;
    }
L_0888DECC:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(828));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(828));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(11, ctx.lo);
    ctx.set_gpr(16, ctx.gpr[11] + ctx.gpr[4]);
    ctx.set_gpr(31, 0x0888DEECu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0888DEECu) goto L_0888DEEC;
    return;
L_0888DEEC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0888DF6C;
      }
      goto L_0888DEFC;
    }
L_0888DEFC:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[17] & 3u);
      if (branch_taken) {
          goto L_0888DFB8;
      }
      goto L_0888DF08;
    }
L_0888DF08:
    ctx.set_gpr(8, ctx.gpr[7] << 2u);
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[18]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[16]);
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[25] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0888DF6C;
      }
      goto L_0888DF28;
    }
L_0888DF28:
    ctx.set_gpr(11, ctx.gpr[7] << 2u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[11] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(44));
    goto L_0888DF38;
L_0888DF38:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-12), ctx.gpr[14]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8), ctx.gpr[13]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[5]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888DF38;
      }
      goto L_0888DF6C;
    }
L_0888DF6C:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(700));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(692), ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(696), ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(824), 0u);
    goto L_0888DF98;
L_0888DF98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888DFB8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888DF28;
      }
      goto L_0888DFC0;
    }
L_0888DFC0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888DF08;
      }
      goto L_0888DFC8;
    }
L_0888DFC8:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(24, ctx.gpr[7] << 2u);
      if (branch_taken) {
          goto L_0888DFE0;
      }
      goto L_0888DFD0;
    }
L_0888DFD0:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[14]);
    ctx.set_gpr(24, ctx.gpr[7] << 2u);
    goto L_0888DFE0;
L_0888DFE0:
    ctx.set_gpr(2, ctx.gpr[24] + ctx.gpr[18]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[24] + ctx.gpr[16]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    goto L_0888DF08;
L_0888DFF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(3, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(20204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888E02Cu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0888E02Cu) goto L_0888E02C;
    return;
L_0888E02C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 6144 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888E080;
      }
      goto L_0888E03C;
    }
L_0888E03C:
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(14, ctx.gpr[24] << 24u);
    ctx.set_gpr(15, ctx.gpr[16] << 16u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, ctx.gpr[14] | ctx.gpr[15]);
    ctx.set_gpr(12, ctx.gpr[13] << 8u);
    ctx.set_gpr(10, ctx.gpr[5] | ctx.gpr[12]);
    ctx.set_gpr(9, 16713u << 16u);
    ctx.set_gpr(7, ctx.gpr[10] | ctx.gpr[11]);
    ctx.set_gpr(4, ctx.gpr[9] | 22598u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888E0A0;
      }
      goto L_0888E074;
    }
L_0888E074:
    ctx.set_gpr(31, 0x0888E07Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0888D7DC;
L_0888E07C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0888E080;
L_0888E080:
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
L_0888E0A0:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[13] << 24u);
    ctx.set_gpr(11, ctx.gpr[12] << 16u);
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[11]);
    ctx.set_gpr(9, ctx.gpr[10] << 8u);
    ctx.set_gpr(3, ctx.gpr[7] | ctx.gpr[9]);
    ctx.set_gpr(16, ctx.gpr[3] | ctx.gpr[25]);
    ctx.set_gpr(8, ctx.gpr[16] - ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0888E0DCu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x0888E0DCu) goto L_0888E0DC;
    return;
L_0888E0DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888E080;
      }
      goto L_0888E0E4;
    }
L_0888E0E4:
    ctx.set_gpr(19, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(11, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(532)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(19, static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(12, ctx.gpr[6] << 8u);
    ctx.set_gpr(5, ctx.gpr[12] | ctx.gpr[13]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, ctx.gpr[3] << 24u);
    ctx.set_gpr(10, ctx.gpr[4] << 16u);
    ctx.set_gpr(8, ctx.gpr[25] << 8u);
    ctx.set_gpr(24, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(14, ctx.gpr[24] | ctx.gpr[8]);
    ctx.set_gpr(6, ctx.gpr[14] | ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0888E164;
      }
      goto L_0888E150;
    }
L_0888E150:
    ctx.set_gpr(14, ctx.gpr[17] + static_cast<std::uint32_t>(540));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(536), ctx.gpr[14]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(532), ctx.gpr[7]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    goto L_0888E164;
L_0888E164:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(24, ctx.gpr[9] << 8u);
    ctx.set_gpr(2, ctx.gpr[24] | ctx.gpr[25]);
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(528), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0888E384;
      }
      goto L_0888E180;
    }
L_0888E180:
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(9, 0u + 0u);
      if (branch_taken) {
          goto L_0888E280;
      }
      goto L_0888E18C;
    }
L_0888E18C:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(536)));
    ctx.set_gpr(4, ctx.gpr[7] << 24u);
    ctx.set_gpr(6, ctx.gpr[14] << 16u);
    ctx.set_gpr(19, ctx.gpr[4] | ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[13] << 8u);
    ctx.set_gpr(11, ctx.gpr[19] | ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[9] << 4u);
    ctx.set_gpr(18, ctx.gpr[11] | ctx.gpr[12]);
    ctx.set_gpr(25, ctx.gpr[19] + ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(536)));
    ctx.set_gpr(7, ctx.gpr[24] << 24u);
    ctx.set_gpr(5, ctx.gpr[15] << 16u);
    ctx.set_gpr(13, ctx.gpr[7] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[14] << 8u);
    ctx.set_gpr(3, ctx.gpr[13] | ctx.gpr[6]);
    ctx.set_gpr(11, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(10, ctx.gpr[19] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.set_gpr(10, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(536)));
    ctx.set_gpr(5, ctx.gpr[25] << 24u);
    ctx.set_gpr(15, ctx.gpr[24] << 16u);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[15]);
    ctx.set_gpr(14, ctx.gpr[7] << 8u);
    ctx.set_gpr(4, ctx.gpr[6] | ctx.gpr[14]);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[13]);
    ctx.set_gpr(11, ctx.gpr[19] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(15, ctx.gpr[18] << 24u);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(536)));
    ctx.set_gpr(24, ctx.gpr[25] << 16u);
    ctx.set_gpr(5, ctx.gpr[15] | ctx.gpr[24]);
    ctx.set_gpr(14, ctx.gpr[7] << 8u);
    ctx.set_gpr(12, ctx.gpr[5] | ctx.gpr[14]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[12] | ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(528)));
    ctx.set_gpr(18, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.set_gpr(8, ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888E18C;
      }
      goto L_0888E280;
    }
L_0888E280:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(604), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888E30C;
      }
      goto L_0888E294;
    }
L_0888E294:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0888E298;
L_0888E298:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(11, ctx.gpr[12] << 8u);
    ctx.set_gpr(18, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(608), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.set_gpr(14, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(12, ctx.gpr[14] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, ctx.gpr[24] << 8u);
    ctx.set_gpr(7, ctx.gpr[5] | ctx.gpr[15]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(610), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(8, ctx.gpr[12] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[6] << 8u);
    ctx.set_gpr(19, ctx.gpr[13] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(612), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(10, ctx.gpr[11] << 8u);
    ctx.set_gpr(25, ctx.gpr[18] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(614), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(604)));
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[24]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0888E298;
      }
      goto L_0888E30C;
    }
L_0888E30C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_0888E37C;
      }
      goto L_0888E320;
    }
L_0888E320:
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0888E324;
L_0888E324:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(19, ctx.gpr[13] << 16u);
    ctx.set_gpr(4, ctx.gpr[6] << 24u);
    ctx.set_gpr(10, ctx.gpr[4] | ctx.gpr[19]);
    ctx.set_gpr(11, ctx.gpr[12] << 8u);
    ctx.set_gpr(15, ctx.gpr[9] << 4u);
    ctx.set_gpr(25, ctx.gpr[10] | ctx.gpr[11]);
    ctx.set_gpr(24, ctx.gpr[25] | ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[15] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[24]);
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[15] + ctx.gpr[17]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12))))));
    ctx.set_gpr(19, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0888E324;
      }
      goto L_0888E37C;
    }
L_0888E37C:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_0888E080;
L_0888E384:
    ctx.set_gpr(17, 2225u << 16u);
    ctx.set_gpr(31, 0x0888E390u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20256));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888E390u) goto L_0888E390;
    return;
L_0888E390:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    goto L_0888E080;
L_0888E398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0888E3DC;
      }
      goto L_0888E3C0;
    }
L_0888E3C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_0888E3C4;
L_0888E3C4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0888E3C8;
L_0888E3C8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888E3DC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0888E4FC;
      }
      goto L_0888E3E8;
    }
L_0888E3E8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_0888E3C4;
      }
      goto L_0888E3F0;
    }
L_0888E3F0:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_0888E3C8;
    }
    goto L_0888E3FC;
L_0888E3FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888E4D8;
      }
      goto L_0888E408;
    }
L_0888E408:
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_0888E3C8;
    }
    goto L_0888E410;
L_0888E410:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(24, 32767u << 16u);
    ctx.set_gpr(6, ctx.gpr[24] | 65535u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    jump_target = ctx.gpr[18];
    ctx.set_gpr(31, 0x0888E438u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E438u) goto L_0888E438;
    return;
L_0888E438:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[14];
    ctx.set_gpr(31, 0x0888E458u);
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E458u) goto L_0888E458;
    return;
L_0888E458:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0888E468u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0888E468u) goto L_0888E468;
    return;
L_0888E468:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[12];
    ctx.set_gpr(31, 0x0888E480u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E480u) goto L_0888E480;
    return;
L_0888E480:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x0888E494u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0888E494u) goto L_0888E494;
    return;
L_0888E494:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x0888E4ACu);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E4ACu) goto L_0888E4AC;
    return;
L_0888E4AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x0888E4C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E4C4u) goto L_0888E4C4;
    return;
L_0888E4C4:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    goto L_0888E3C0;
L_0888E4D8:
    ctx.set_gpr(31, 0x0888E4E0u);
    // nop
    goto L_0888E6FC;
L_0888E4E0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_0888E3C4;
    }
    goto L_0888E4EC;
L_0888E4EC:
    ctx.set_gpr(31, 0x0888E4F4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888E6FC;
L_0888E4F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_0888E3C4;
L_0888E4FC:
    ctx.set_gpr(31, 0x0888E504u);
    // nop
    goto L_0888E50C;
L_0888E504:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_0888E3C4;
L_0888E50C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x0888E56Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E56Cu) goto L_0888E56C;
    return;
L_0888E56C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0888E57Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_0888DFF8;
L_0888E57C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888E6E4;
      }
      goto L_0888E588;
    }
L_0888E588:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0888E5B4;
    }
    goto L_0888E594;
L_0888E594:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888E698;
      }
      goto L_0888E59C;
    }
L_0888E59C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[7];
    ctx.set_gpr(13, 2225u << 16u);
      if (branch_taken) {
          goto L_0888E5EC;
      }
      goto L_0888E5A4;
    }
L_0888E5A4:
    ctx.set_gpr(4, ctx.gpr[13] + static_cast<std::uint32_t>(20324));
    goto L_0888E5A8;
L_0888E5A8:
    ctx.set_gpr(31, 0x0888E5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888E5B0u) goto L_0888E5B0;
    return;
L_0888E5B0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0888E5B4;
L_0888E5B4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[15];
    ctx.set_gpr(31, 0x0888E5C8u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E5C8u) goto L_0888E5C8;
    return;
L_0888E5C8:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[14]));
    goto L_0888E5D0;
L_0888E5D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_0888E5D4;
L_0888E5D4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888E5EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(804)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(800), 0u);
      if (branch_taken) {
          goto L_0888E658;
      }
      goto L_0888E5F8;
    }
L_0888E5F8:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0888E5FC;
L_0888E5FC:
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888E610u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0888E610u) goto L_0888E610;
    return;
L_0888E610:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x0888E628u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E628u) goto L_0888E628;
    return;
L_0888E628:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x0888E640u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E640u) goto L_0888E640;
    return;
L_0888E640:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[25]));
    ctx.set_gpr(17, ctx.gpr[24] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    goto L_0888E5D0;
L_0888E658:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(808)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0888E664u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E664u) goto L_0888E664;
    return;
L_0888E664:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888E5FC;
      }
      goto L_0888E66C;
    }
L_0888E66C:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    goto L_0888E688;
L_0888E688:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0888E690u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E690u) goto L_0888E690;
    return;
L_0888E690:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_0888E5D4;
L_0888E698:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0888E6A8u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 299u, 0x0887E02Cu>(ctx, &aot_mem) && ctx.pc == 0x0888E6A8u) goto L_0888E6A8;
    return;
L_0888E6A8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20360));
      if (branch_taken) {
          goto L_0888E5A8;
      }
      goto L_0888E6BC;
    }
L_0888E6BC:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(536)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(688), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(800), ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(ctx.gpr[10]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(180), ctx.gpr[9]);
    goto L_0888E5F8;
L_0888E6E4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    goto L_0888E688;
L_0888E6FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(30, ctx.gpr[21] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(172))))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
      if (branch_taken) {
          goto L_0888E810;
      }
      goto L_0888E750;
    }
L_0888E750:
    ctx.set_gpr(22, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0888E754;
L_0888E754:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 32767u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[3] | 65535u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x0888E774u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E774u) goto L_0888E774;
    return;
L_0888E774:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(820)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0888E870;
      }
      goto L_0888E780;
    }
L_0888E780:
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[15]) ? ctx.gpr[2] : ctx.gpr[15]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888E798u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0888E798u) goto L_0888E798;
    return;
L_0888E798:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x0888E7B0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E7B0u) goto L_0888E7B0;
    return;
L_0888E7B0:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[11];
    ctx.set_gpr(31, 0x0888E7C8u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E7C8u) goto L_0888E7C8;
    return;
L_0888E7C8:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 32767u << 16u);
    ctx.set_gpr(6, ctx.gpr[7] | 65535u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x0888E7E8u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E7E8u) goto L_0888E7E8;
    return;
L_0888E7E8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(820)));
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(820), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888E870;
      }
      goto L_0888E7F8;
    }
L_0888E7F8:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(25, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[25]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[25]);
      if (branch_taken) {
          goto L_0888E754;
      }
      goto L_0888E810;
    }
L_0888E810:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[19];
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_0888E854;
      }
      goto L_0888E820;
    }
L_0888E820:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_0888E824;
L_0888E824:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888E854:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(812)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(824), ctx.gpr[30]);
      if (branch_taken) {
          goto L_0888E820;
      }
      goto L_0888E860;
    }
L_0888E860:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0888E868u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(816)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888E868u) goto L_0888E868;
    return;
L_0888E868:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_0888E824;
L_0888E870:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    ctx.set_gpr(13, ctx.gpr[10] + 0u);
      if (branch_taken) {
          goto L_0888EA94;
      }
      goto L_0888E880;
    }
L_0888E880:
    ctx.set_gpr(23, 16713u << 16u);
    ctx.set_gpr(20, 16713u << 16u);
    ctx.set_gpr(18, 16713u << 16u);
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[10]) < 2 ? 1u : 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(9, ctx.gpr[23] | 22598u);
    ctx.set_gpr(12, ctx.gpr[20] | 22597u);
    ctx.set_gpr(11, ctx.gpr[18] | 22608u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(3, ctx.gpr[10] & 3u);
      if (branch_taken) {
          goto L_0888F0F0;
      }
      goto L_0888E8A8;
    }
L_0888E8A8:
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(6, ctx.gpr[15] << 24u);
    ctx.set_gpr(17, ctx.gpr[14] << 16u);
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(23, ctx.gpr[6] | ctx.gpr[17]);
    ctx.set_gpr(24, ctx.gpr[25] << 8u);
    ctx.set_gpr(20, ctx.gpr[23] | ctx.gpr[24]);
    ctx.set_gpr(3, ctx.gpr[20] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888E8EC;
      }
      goto L_0888E8DC;
    }
L_0888E8DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888F0E0;
      }
      goto L_0888E8E4;
    }
L_0888E8E4:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0888EA28;
      }
      goto L_0888E8EC;
    }
L_0888E8EC:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888E8F0;
L_0888E8F0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888EA28;
      }
      goto L_0888E8FC;
    }
L_0888E8FC:
    ctx.set_gpr(17, ctx.gpr[7] + ctx.gpr[8]);
    goto L_0888E900;
L_0888E900:
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(25, ctx.gpr[14] << 24u);
    ctx.set_gpr(6, ctx.gpr[5] << 16u);
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(20, ctx.gpr[25] | ctx.gpr[6]);
    ctx.set_gpr(23, ctx.gpr[24] << 8u);
    ctx.set_gpr(18, ctx.gpr[20] | ctx.gpr[23]);
    ctx.set_gpr(3, ctx.gpr[18] | ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888E940;
      }
      goto L_0888E930;
    }
L_0888E930:
    { const bool branch_taken = ctx.gpr[15] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888F0D0;
      }
      goto L_0888E938;
    }
L_0888E938:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0888EA28;
      }
      goto L_0888E940;
    }
L_0888E940:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888E944;
L_0888E944:
    ctx.set_gpr(25, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(23, ctx.gpr[17] << 24u);
    ctx.set_gpr(24, ctx.gpr[6] << 16u);
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[23] | ctx.gpr[24]);
    ctx.set_gpr(18, ctx.gpr[20] << 8u);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888E988;
      }
      goto L_0888E978;
    }
L_0888E978:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888F0C0;
      }
      goto L_0888E980;
    }
L_0888E980:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0888EA28;
      }
      goto L_0888E988;
    }
L_0888E988:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888E98C;
L_0888E98C:
    ctx.set_gpr(24, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(23, ctx.gpr[3] << 16u);
    ctx.set_gpr(20, ctx.gpr[25] << 24u);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(16, ctx.gpr[20] | ctx.gpr[23]);
    ctx.set_gpr(4, ctx.gpr[18] << 8u);
    ctx.set_gpr(15, ctx.gpr[16] | ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[15] | ctx.gpr[14]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888E9D0;
      }
      goto L_0888E9C0;
    }
L_0888E9C0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888F0B0;
      }
      goto L_0888E9C8;
    }
L_0888E9C8:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0888EA28;
      }
      goto L_0888E9D0;
    }
L_0888E9D0:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888E9D4;
L_0888E9D4:
    ctx.set_gpr(23, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, ctx.gpr[4] << 24u);
    ctx.set_gpr(20, ctx.gpr[24] << 16u);
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(15, ctx.gpr[5] | ctx.gpr[20]);
    ctx.set_gpr(16, ctx.gpr[18] << 8u);
    ctx.set_gpr(14, ctx.gpr[15] | ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[14] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888EA18;
      }
      goto L_0888EA08;
    }
L_0888EA08:
    { const bool branch_taken = ctx.gpr[25] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888F0A0;
      }
      goto L_0888EA10;
    }
L_0888EA10:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0888EA28;
      }
      goto L_0888EA18;
    }
L_0888EA18:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888EA1C;
L_0888EA1C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[7] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0888E900;
      }
      goto L_0888EA28;
    }
L_0888EA28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_0888EA94;
      }
      goto L_0888EA30;
    }
L_0888EA30:
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0888EA40u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0888EA40u) goto L_0888EA40;
    return;
L_0888EA40:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[11];
    ctx.set_gpr(31, 0x0888EA58u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EA58u) goto L_0888EA58;
    return;
L_0888EA58:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x0888EA70u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EA70u) goto L_0888EA70;
    return;
L_0888EA70:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[2] | 65535u);
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x0888EA90u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EA90u) goto L_0888EA90;
    return;
L_0888EA90:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0888EA94;
L_0888EA94:
    ctx.set_gpr(13, ctx.gpr[10] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    if (ctx.gpr[13] != 0u) {
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0888ED14;
    }
    goto L_0888EAA0;
L_0888EAA0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 16713u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 22597u);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[13] << 24u);
    ctx.set_gpr(11, ctx.gpr[12] << 16u);
    ctx.set_gpr(9, ctx.gpr[4] | ctx.gpr[11]);
    ctx.set_gpr(3, ctx.gpr[10] << 8u);
    ctx.set_gpr(25, ctx.gpr[9] | ctx.gpr[3]);
    ctx.set_gpr(24, ctx.gpr[25] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.set_gpr(23, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(18, ctx.gpr[23] << 24u);
    ctx.set_gpr(5, ctx.gpr[20] << 16u);
    ctx.set_gpr(14, ctx.gpr[18] | ctx.gpr[5]);
    ctx.set_gpr(15, ctx.gpr[16] << 8u);
    ctx.set_gpr(13, ctx.gpr[14] | ctx.gpr[15]);
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(9)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[10] << 8u);
    ctx.set_gpr(8, ctx.gpr[9] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(13)));
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(15)));
    ctx.set_gpr(23, ctx.gpr[25] << 24u);
    ctx.set_gpr(24, ctx.gpr[4] << 16u);
    ctx.set_gpr(18, ctx.gpr[23] | ctx.gpr[24]);
    ctx.set_gpr(5, ctx.gpr[20] << 8u);
    ctx.set_gpr(15, ctx.gpr[18] | ctx.gpr[5]);
    ctx.set_gpr(14, ctx.gpr[15] | ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[6];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[14]);
      if (branch_taken) {
          goto L_0888ED50;
      }
      goto L_0888EB5C;
    }
L_0888EB5C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0888ED10;
      }
      goto L_0888EB74;
    }
L_0888EB74:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(20, ctx.gpr[16] << 2u);
      if (branch_taken) {
          goto L_0888ED30;
      }
      goto L_0888EB84;
    }
L_0888EB84:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[30]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x0888EB9Cu);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EB9Cu) goto L_0888EB9C;
    return;
L_0888EB9C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0888ED10;
      }
      goto L_0888EBAC;
    }
L_0888EBAC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(23, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(12, ctx.gpr[25] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[12] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[12]);
    ctx.set_gpr(31, 0x0888EBD4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0888EBD4u) goto L_0888EBD4;
    return;
L_0888EBD4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x0888EBECu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EBECu) goto L_0888EBEC;
    return;
L_0888EBEC:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0888EC00u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0888EC00u) goto L_0888EC00;
    return;
L_0888EC00:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x0888EC18u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EC18u) goto L_0888EC18;
    return;
L_0888EC18:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0888ECC8;
      }
      goto L_0888EC2C;
    }
L_0888EC2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0888EC98;
      }
      goto L_0888EC34;
    }
L_0888EC34:
    ctx.set_gpr(16, ctx.gpr[20] + ctx.gpr[30]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[17]);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x0888EC54u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EC54u) goto L_0888EC54;
    return;
L_0888EC54:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x0888EC68u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0888EC68u) goto L_0888EC68;
    return;
L_0888EC68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x0888EC80u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EC80u) goto L_0888EC80;
    return;
L_0888EC80:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(10))))));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[15]);
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0888EC34;
      }
      goto L_0888EC98;
    }
L_0888EC98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x0888ECB0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888ECB0u) goto L_0888ECB0;
    return;
L_0888ECB0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, ctx.gpr[7] + ctx.gpr[9]);
    ctx.set_gpr(18, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    goto L_0888E7F8;
L_0888ECC8:
    ctx.set_gpr(17, 2225u << 16u);
    ctx.set_gpr(31, 0x0888ECD4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20396));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888ECD4u) goto L_0888ECD4;
    return;
L_0888ECD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x0888ECECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888ECECu) goto L_0888ECEC;
    return;
L_0888ECEC:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    goto L_0888ECFC;
L_0888ECFC:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0888ED04u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888ED04u) goto L_0888ED04;
    return;
L_0888ED04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    goto L_0888ED08;
L_0888ED08:
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0888E820;
L_0888ED10:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_0888ED14;
L_0888ED14:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[21];
    ctx.set_gpr(31, 0x0888ED28u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888ED28u) goto L_0888ED28;
    return;
L_0888ED28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_0888E824;
L_0888ED30:
    ctx.set_gpr(15, 2225u << 16u);
    ctx.set_gpr(31, 0x0888ED3Cu);
    ctx.set_gpr(4, ctx.gpr[15] + static_cast<std::uint32_t>(20432));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 360u, 0x08889E08u>(ctx, &aot_mem) && ctx.pc == 0x0888ED3Cu) goto L_0888ED3C;
    return;
L_0888ED3C:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(28)));
    goto L_0888ECFC;
L_0888ED50:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(30, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.set_gpr(15, 16713u << 16u);
      if (branch_taken) {
          goto L_0888EF00;
      }
      goto L_0888ED64;
    }
L_0888ED64:
    ctx.set_gpr(14, 16713u << 16u);
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[12]) < 10 ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[15] | 22598u);
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    ctx.set_gpr(11, ctx.gpr[14] | 22608u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(3, ctx.gpr[12] & 3u);
      if (branch_taken) {
          goto L_0888EFD4;
      }
      goto L_0888ED80;
    }
L_0888ED80:
    ctx.set_gpr(16, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(15, ctx.gpr[20] << 24u);
    ctx.set_gpr(6, ctx.gpr[18] << 16u);
    ctx.set_gpr(30, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[15] | ctx.gpr[6]);
    ctx.set_gpr(17, ctx.gpr[14] << 8u);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888EDC4;
      }
      goto L_0888EDB4;
    }
L_0888EDB4:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888EFC4;
      }
      goto L_0888EDBC;
    }
L_0888EDBC:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[10];
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_0888EF04;
      }
      goto L_0888EDC4;
    }
L_0888EDC4:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888EDC8;
L_0888EDC8:
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_0888EF04;
      }
      goto L_0888EDD4;
    }
L_0888EDD4:
    ctx.set_gpr(15, ctx.gpr[7] + ctx.gpr[8]);
    goto L_0888EDD8;
L_0888EDD8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(14, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[6] << 24u);
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(30, ctx.gpr[5] | ctx.gpr[14]);
    ctx.set_gpr(4, ctx.gpr[17] << 8u);
    ctx.set_gpr(13, ctx.gpr[30] | ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[13] | ctx.gpr[25]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888EE18;
      }
      goto L_0888EE08;
    }
L_0888EE08:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888EFB4;
      }
      goto L_0888EE10;
    }
L_0888EE10:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[10];
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_0888EF04;
      }
      goto L_0888EE18;
    }
L_0888EE18:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888EE1C;
L_0888EE1C:
    ctx.set_gpr(17, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(13, ctx.gpr[4] << 24u);
    ctx.set_gpr(30, ctx.gpr[5] << 16u);
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(23, ctx.gpr[13] | ctx.gpr[30]);
    ctx.set_gpr(24, ctx.gpr[25] << 8u);
    ctx.set_gpr(20, ctx.gpr[23] | ctx.gpr[24]);
    ctx.set_gpr(3, ctx.gpr[20] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888EE60;
      }
      goto L_0888EE50;
    }
L_0888EE50:
    { const bool branch_taken = ctx.gpr[14] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888EFA4;
      }
      goto L_0888EE58;
    }
L_0888EE58:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[10];
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_0888EF04;
      }
      goto L_0888EE60;
    }
L_0888EE60:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888EE64;
L_0888EE64:
    ctx.set_gpr(24, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(20, ctx.gpr[13] << 24u);
    ctx.set_gpr(23, ctx.gpr[25] << 16u);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[20] | ctx.gpr[23]);
    ctx.set_gpr(16, ctx.gpr[18] << 8u);
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(30, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888EEA8;
      }
      goto L_0888EE98;
    }
L_0888EE98:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888EF94;
      }
      goto L_0888EEA0;
    }
L_0888EEA0:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[10];
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_0888EF04;
      }
      goto L_0888EEA8;
    }
L_0888EEA8:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888EEAC;
L_0888EEAC:
    ctx.set_gpr(18, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(16, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[20] << 24u);
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(14, ctx.gpr[5] | ctx.gpr[16]);
    ctx.set_gpr(15, ctx.gpr[6] << 8u);
    ctx.set_gpr(4, ctx.gpr[14] | ctx.gpr[15]);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(23, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888EEF0;
      }
      goto L_0888EEE0;
    }
L_0888EEE0:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888EF84;
      }
      goto L_0888EEE8;
    }
L_0888EEE8:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[10];
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_0888EF04;
      }
      goto L_0888EEF0;
    }
L_0888EEF0:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888EEF4;
L_0888EEF4:
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(15, ctx.gpr[7] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0888EDD8;
      }
      goto L_0888EF00;
    }
L_0888EF00:
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    goto L_0888EF04;
L_0888EF04:
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0888EF14u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0888EF14u) goto L_0888EF14;
    return;
L_0888EF14:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x0888EF2Cu);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EF2Cu) goto L_0888EF2C;
    return;
L_0888EF2C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x0888EF44u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EF44u) goto L_0888EF44;
    return;
L_0888EF44:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[19];
    ctx.set_gpr(31, 0x0888EF58u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888EF58u) goto L_0888EF58;
    return;
L_0888EF58:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(5))))));
        goto L_0888EF74;
    }
    goto L_0888EF60;
L_0888EF60:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6))))));
    goto L_0888EF64;
L_0888EF64:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0888ED08;
      }
      goto L_0888EF6C;
    }
L_0888EF6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_0888E824;
L_0888EF74:
    if (ctx.gpr[11] != 0u) {
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
        goto L_0888EF60;
    }
    goto L_0888EF7C;
L_0888EF7C:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(6))))));
    goto L_0888EF64;
L_0888EF84:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888EEF4;
    }
    goto L_0888EF8C;
L_0888EF8C:
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    goto L_0888EF04;
L_0888EF94:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888EEAC;
    }
    goto L_0888EF9C;
L_0888EF9C:
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    goto L_0888EF04;
L_0888EFA4:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888EE64;
    }
    goto L_0888EFAC;
L_0888EFAC:
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    goto L_0888EF04;
L_0888EFB4:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888EE1C;
    }
    goto L_0888EFBC;
L_0888EFBC:
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    goto L_0888EF04;
L_0888EFC4:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888EDC8;
    }
    goto L_0888EFCC;
L_0888EFCC:
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    goto L_0888EF04;
L_0888EFD4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888EDD4;
      }
      goto L_0888EFDC;
    }
L_0888EFDC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888ED80;
      }
      goto L_0888EFE4;
    }
L_0888EFE4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(24, ctx.gpr[7] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0888F038;
      }
      goto L_0888EFEC;
    }
L_0888EFEC:
    ctx.set_gpr(30, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, ctx.gpr[3] << 24u);
    ctx.set_gpr(13, ctx.gpr[4] << 16u);
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(23, ctx.gpr[5] | ctx.gpr[13]);
    ctx.set_gpr(24, ctx.gpr[25] << 8u);
    ctx.set_gpr(20, ctx.gpr[23] | ctx.gpr[24]);
    ctx.set_gpr(3, ctx.gpr[20] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888F030;
      }
      goto L_0888F020;
    }
L_0888F020:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888F090;
      }
      goto L_0888F028;
    }
L_0888F028:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[10];
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_0888EF04;
      }
      goto L_0888F030;
    }
L_0888F030:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888F034;
L_0888F034:
    ctx.set_gpr(24, ctx.gpr[7] + ctx.gpr[8]);
    goto L_0888F038;
L_0888F038:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(20, ctx.gpr[5] << 24u);
    ctx.set_gpr(23, ctx.gpr[25] << 16u);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, ctx.gpr[20] | ctx.gpr[23]);
    ctx.set_gpr(16, ctx.gpr[18] << 8u);
    ctx.set_gpr(15, ctx.gpr[6] | ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[15] | ctx.gpr[14]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888F078;
      }
      goto L_0888F068;
    }
L_0888F068:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888F080;
      }
      goto L_0888F070;
    }
L_0888F070:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[10];
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_0888EF04;
      }
      goto L_0888F078;
    }
L_0888F078:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888ED80;
L_0888F080:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888ED80;
    }
    goto L_0888F088;
L_0888F088:
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    goto L_0888EF04;
L_0888F090:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888F034;
    }
    goto L_0888F098;
L_0888F098:
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    goto L_0888EF04;
L_0888F0A0:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888EA1C;
    }
    goto L_0888F0A8;
L_0888F0A8:
    // nop
    goto L_0888EA28;
L_0888F0B0:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888E9D4;
    }
    goto L_0888F0B8;
L_0888F0B8:
    // nop
    goto L_0888EA28;
L_0888F0C0:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888E98C;
    }
    goto L_0888F0C8;
L_0888F0C8:
    // nop
    goto L_0888EA28;
L_0888F0D0:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888E944;
    }
    goto L_0888F0D8;
L_0888F0D8:
    // nop
    goto L_0888EA28;
L_0888F0E0:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888E8F0;
    }
    goto L_0888F0E8;
L_0888F0E8:
    // nop
    goto L_0888EA28;
L_0888F0F0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888E8FC;
      }
      goto L_0888F0F8;
    }
L_0888F0F8:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888E8A8;
      }
      goto L_0888F100;
    }
L_0888F100:
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.set_gpr(15, ctx.gpr[7] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_0888F150;
      }
      goto L_0888F108;
    }
L_0888F108:
    ctx.set_gpr(18, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[18] << 24u);
    ctx.set_gpr(15, ctx.gpr[16] << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[14] << 8u);
    ctx.set_gpr(17, ctx.gpr[4] | ctx.gpr[15]);
    ctx.set_gpr(5, ctx.gpr[17] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(20, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888F148;
      }
      goto L_0888F138;
    }
L_0888F138:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888F1A8;
      }
      goto L_0888F140;
    }
L_0888F140:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0888EA28;
      }
      goto L_0888F148;
    }
L_0888F148:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888F14C;
L_0888F14C:
    ctx.set_gpr(15, ctx.gpr[7] + ctx.gpr[8]);
    goto L_0888F150;
L_0888F150:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(14, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[4] << 24u);
    ctx.set_gpr(23, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(25, ctx.gpr[5] | ctx.gpr[14]);
    ctx.set_gpr(6, ctx.gpr[17] << 8u);
    ctx.set_gpr(24, ctx.gpr[25] | ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[24] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888F190;
      }
      goto L_0888F180;
    }
L_0888F180:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888F198;
      }
      goto L_0888F188;
    }
L_0888F188:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0888EA28;
      }
      goto L_0888F190;
    }
L_0888F190:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0888E8A8;
L_0888F198:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888E8A8;
    }
    goto L_0888F1A0;
L_0888F1A0:
    // nop
    goto L_0888EA28;
L_0888F1A8:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0888F14C;
    }
    goto L_0888F1B0;
L_0888F1B0:
    // nop
    goto L_0888EA28;
L_0888F1B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.set_gpr(31, 0x0888F1E0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1u, 0x0881C004u>(ctx, &aot_mem) && ctx.pc == 0x0888F1E0u) goto L_0888F1E0;
    return;
L_0888F1E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F220:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(20468));
    ctx.set_gpr(4, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26020), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F234:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888F244u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0888F244u) goto L_0888F244;
    return;
L_0888F244:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888F264u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0888F264u) goto L_0888F264;
    return;
L_0888F264:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F270:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888F280u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x0888F280u) goto L_0888F280;
    return;
L_0888F280:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F28C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888F2A0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 530u, 0x088168E4u>(ctx, &aot_mem) && ctx.pc == 0x0888F2A0u) goto L_0888F2A0;
    return;
L_0888F2A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F2AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888F2C0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1u, 0x0881C004u>(ctx, &aot_mem) && ctx.pc == 0x0888F2C0u) goto L_0888F2C0;
    return;
L_0888F2C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F2CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0888F368;
      }
      goto L_0888F2D8;
    }
L_0888F2D8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(6, 2245u << 16u);
      if (branch_taken) {
          goto L_0888F348;
      }
      goto L_0888F2E0;
    }
L_0888F2E0:
    ctx.set_gpr(31, 0x0888F2E8u);
    // nop
    goto L_0888F38C;
L_0888F2E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(9, 2245u << 16u);
      if (branch_taken) {
          goto L_0888F31C;
      }
      goto L_0888F2F0;
    }
L_0888F2F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 2185u << 16u);
      if (branch_taken) {
          goto L_0888F308;
      }
      goto L_0888F2FC;
    }
L_0888F2FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0888F300;
L_0888F300:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F308:
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(4248));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0888F314u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888F314u) goto L_0888F314;
    return;
L_0888F314:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0888F300;
L_0888F31C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-26016)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_0888F300;
    }
    goto L_0888F328;
L_0888F328:
    ctx.set_gpr(11, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(10, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[10] + static_cast<std::uint32_t>(20552));
    goto L_0888F338;
L_0888F338:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0888F340u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888F340u) goto L_0888F340;
    return;
L_0888F340:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0888F300;
L_0888F348:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26016)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_0888F300;
    }
    goto L_0888F354;
L_0888F354:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(20588));
    goto L_0888F338;
L_0888F368:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26016)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_0888F300;
    }
    goto L_0888F378;
L_0888F378:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(20624));
    goto L_0888F338;
L_0888F38C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888F3ACu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0888F580;
L_0888F3AC:
    jump_target = ctx.gpr[18];
    ctx.set_gpr(31, 0x0888F3B4u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888F3B4u) goto L_0888F3B4;
    return;
L_0888F3B4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888F3C0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_0888F47C;
L_0888F3C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0888F460;
      }
      goto L_0888F3C8;
    }
L_0888F3C8:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-25684));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_0888F3D8;
L_0888F3D8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888F420;
      }
      goto L_0888F3E0;
    }
L_0888F3E0:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888F420;
      }
      goto L_0888F3F0;
    }
L_0888F3F0:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888F420;
      }
      goto L_0888F400;
    }
L_0888F400:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888F420;
      }
      goto L_0888F410;
    }
L_0888F410:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
        goto L_0888F3D8;
    }
    goto L_0888F420;
L_0888F420:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[10];
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0888F460;
      }
      goto L_0888F42C;
    }
L_0888F42C:
    ctx.set_gpr(13, ctx.gpr[16] << 4u);
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(14, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888F448u);
    ctx.set_gpr(16, ctx.gpr[13] + ctx.gpr[14]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0888F448u) goto L_0888F448;
    return;
L_0888F448:
    ctx.set_gpr(11, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888F45Cu);
    ctx.set_gpr(6, ctx.gpr[11] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0888F45Cu) goto L_0888F45C;
    return;
L_0888F45C:
    ctx.set_gpr(3, ctx.gpr[18] + 0u);
    goto L_0888F460;
L_0888F460:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F47C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888F4A4u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0888F4A4u) goto L_0888F4A4;
    return;
L_0888F4A4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(-25680));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    goto L_0888F4B4;
L_0888F4B4:
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0888F4C8u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x0888F4C8u) goto L_0888F4C8;
    return;
L_0888F4C8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0888F578;
      }
      goto L_0888F4E0;
    }
L_0888F4E0:
    ctx.set_gpr(31, 0x0888F4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x0888F4E8u) goto L_0888F4E8;
    return;
L_0888F4E8:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[7] << 4u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0888F570;
      }
      goto L_0888F500;
    }
L_0888F500:
    ctx.set_gpr(31, 0x0888F508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x0888F508u) goto L_0888F508;
    return;
L_0888F508:
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, ctx.gpr[9] << 4u);
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[19]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0888F568;
      }
      goto L_0888F524;
    }
L_0888F524:
    ctx.set_gpr(31, 0x0888F52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x0888F52Cu) goto L_0888F52C;
    return;
L_0888F52C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[16] < static_cast<std::uint32_t>(32) ? 1u : 0u);
      if (branch_taken) {
          goto L_0888F560;
      }
      goto L_0888F534;
    }
L_0888F534:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0888F4B4;
      }
      goto L_0888F53C;
    }
L_0888F53C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0888F540;
L_0888F540:
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
L_0888F560:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    goto L_0888F540;
L_0888F568:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    goto L_0888F540;
L_0888F570:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_0888F540;
L_0888F578:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_0888F540;
L_0888F580:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888F594u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0888F594u) goto L_0888F594;
    return;
L_0888F594:
    ctx.set_gpr(10, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_0888F67C;
      }
      goto L_0888F5A0;
    }
L_0888F5A0:
    ctx.set_gpr(4, ctx.gpr[10] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, ctx.gpr[10] & 3u);
      if (branch_taken) {
          goto L_0888F68C;
      }
      goto L_0888F5AC;
    }
L_0888F5AC:
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-97));
    ctx.set_gpr(25, ctx.gpr[6] & 255u);
    ctx.set_gpr(24, ctx.gpr[25] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    if (ctx.gpr[24] == 0u) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_0888F5D4;
    }
    goto L_0888F5C8;
L_0888F5C8:
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0888F5D4;
L_0888F5D4:
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888F680;
      }
      goto L_0888F5E0;
    }
L_0888F5E0:
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0888F5E4;
L_0888F5E4:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[16] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(13, ctx.gpr[12] + static_cast<std::uint32_t>(-97));
    ctx.set_gpr(3, ctx.gpr[13] & 255u);
    ctx.set_gpr(11, ctx.gpr[3] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[16] + ctx.gpr[14]);
    ctx.set_gpr(6, ctx.gpr[5] < ctx.gpr[10] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[12] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_0888F620;
      }
      goto L_0888F61C;
    }
L_0888F61C:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0888F620;
L_0888F620:
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[24] + static_cast<std::uint32_t>(-97));
    ctx.set_gpr(25, ctx.gpr[11] & 255u);
    ctx.set_gpr(15, ctx.gpr[25] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(3, ctx.gpr[24] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_0888F63C;
      }
      goto L_0888F638;
    }
L_0888F638:
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0888F63C;
L_0888F63C:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, ctx.gpr[12] + static_cast<std::uint32_t>(-97));
    ctx.set_gpr(3, ctx.gpr[13] & 255u);
    ctx.set_gpr(7, ctx.gpr[3] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[12] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_0888F658;
      }
      goto L_0888F654;
    }
L_0888F654:
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0888F658;
L_0888F658:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[4] + static_cast<std::uint32_t>(-97));
    ctx.set_gpr(8, ctx.gpr[15] & 255u);
    ctx.set_gpr(14, ctx.gpr[8] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_0888F674;
      }
      goto L_0888F670;
    }
L_0888F670:
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0888F674;
L_0888F674:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F5E4;
      }
      goto L_0888F67C;
    }
L_0888F67C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0888F680;
L_0888F680:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F68C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888F5E0;
      }
      goto L_0888F694;
    }
L_0888F694:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888F5AC;
      }
      goto L_0888F69C;
    }
L_0888F69C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888F6CC;
      }
      goto L_0888F6A4;
    }
L_0888F6A4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(-97));
    ctx.set_gpr(8, ctx.gpr[9] & 255u);
    ctx.set_gpr(7, ctx.gpr[8] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_0888F6C8;
    }
    goto L_0888F6BC;
L_0888F6BC:
    ctx.set_gpr(11, ctx.gpr[3] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0888F6C8;
L_0888F6C8:
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[5]);
    goto L_0888F6CC;
L_0888F6CC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, ctx.gpr[3] + static_cast<std::uint32_t>(-97));
    ctx.set_gpr(13, ctx.gpr[14] & 255u);
    ctx.set_gpr(12, ctx.gpr[13] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    if (ctx.gpr[12] == 0u) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_0888F5AC;
    }
    goto L_0888F6E4;
L_0888F6E4:
    ctx.set_gpr(15, ctx.gpr[3] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0888F5AC;
L_0888F6F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-640));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0888F8DC;
      }
      goto L_0888F728;
    }
L_0888F728:
    ctx.set_gpr(20, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888F73Cu);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_0888F9E0;
L_0888F73C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(304))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, 2245u << 16u);
      if (branch_taken) {
          goto L_0888F8E0;
      }
      goto L_0888F748;
    }
L_0888F748:
    ctx.set_gpr(31, 0x0888F750u);
    // nop
    goto L_0888F900;
L_0888F750:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888F8B8;
      }
      goto L_0888F758;
    }
L_0888F758:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(19, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_0888F778;
      }
      goto L_0888F764;
    }
L_0888F764:
    ctx.set_gpr(31, 0x0888F76Cu);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0888FC18;
L_0888F76C:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0888F798;
      }
      goto L_0888F778;
    }
L_0888F778:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888F784u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 38u, 0x08891004u>(ctx, &aot_mem) && ctx.pc == 0x0888F784u) goto L_0888F784;
    return;
L_0888F784:
    ctx.set_gpr(31, 0x0888F78Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888F47C;
L_0888F78C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888F884;
      }
      goto L_0888F794;
    }
L_0888F794:
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    goto L_0888F798;
L_0888F798:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0888F858;
      }
      goto L_0888F7A0;
    }
L_0888F7A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0888F82C;
      }
      goto L_0888F7AC;
    }
L_0888F7AC:
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0888F7B8u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888F7B8u) goto L_0888F7B8;
    return;
L_0888F7B8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0888F7F0;
      }
      goto L_0888F7C4;
    }
L_0888F7C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(640));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F7F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888F7FCu);
    ctx.set_gpr(16, 2245u << 16u);
    goto L_0888F9D4;
L_0888F7FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26016)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, 2245u << 16u);
      if (branch_taken) {
          goto L_0888F810;
      }
      goto L_0888F808;
    }
L_0888F808:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0888F7C4;
L_0888F810:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(17, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20660));
    goto L_0888F81C;
L_0888F81C:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0888F824u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888F824u) goto L_0888F824;
    return;
L_0888F824:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0888F7C4;
L_0888F82C:
    ctx.set_gpr(31, 0x0888F834u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0888F9D4;
L_0888F834:
    ctx.set_gpr(13, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-26016)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, 0u + 0u);
        goto L_0888F7C4;
    }
    goto L_0888F844;
L_0888F844:
    ctx.set_gpr(15, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(14, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[14] + static_cast<std::uint32_t>(20692));
    goto L_0888F81C;
L_0888F858:
    ctx.set_gpr(31, 0x0888F860u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0888F9D4;
L_0888F860:
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-26016)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, 0u + 0u);
        goto L_0888F7C4;
    }
    goto L_0888F870;
L_0888F870:
    ctx.set_gpr(12, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(11, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[11] + static_cast<std::uint32_t>(20716));
    goto L_0888F81C;
L_0888F884:
    ctx.set_gpr(31, 0x0888F88Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888FC18;
L_0888F88C:
    ctx.set_gpr(31, 0x0888F894u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_0888F47C;
L_0888F894:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0888F798;
      }
      goto L_0888F8A0;
    }
L_0888F8A0:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0888F8B0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(297));
    goto L_0888F234;
L_0888F8B0:
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    goto L_0888F798;
L_0888F8B8:
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26016)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, 0u + 0u);
        goto L_0888F7C4;
    }
    goto L_0888F8C8;
L_0888F8C8:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(20748));
    goto L_0888F81C;
L_0888F8DC:
    ctx.set_gpr(4, 2245u << 16u);
    goto L_0888F8E0;
L_0888F8E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26016)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, 0u + 0u);
        goto L_0888F7C4;
    }
    goto L_0888F8EC;
L_0888F8EC:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(20784));
    goto L_0888F81C;
L_0888F900:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-26004));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_0888F910;
L_0888F910:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0888F9B8;
      }
      goto L_0888F91C;
    }
L_0888F91C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F9B8;
      }
      goto L_0888F928;
    }
L_0888F928:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F9B8;
      }
      goto L_0888F938;
    }
L_0888F938:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F9B8;
      }
      goto L_0888F948;
    }
L_0888F948:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F9B8;
      }
      goto L_0888F958;
    }
L_0888F958:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F9B8;
      }
      goto L_0888F968;
    }
L_0888F968:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F9B8;
      }
      goto L_0888F978;
    }
L_0888F978:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F9B8;
      }
      goto L_0888F988;
    }
L_0888F988:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F9B8;
      }
      goto L_0888F998;
    }
L_0888F998:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888F9B8;
      }
      goto L_0888F9A8;
    }
L_0888F9A8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0888F910;
      }
      goto L_0888F9B8;
    }
L_0888F9B8:
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[25];
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0888F9CC;
      }
      goto L_0888F9C4;
    }
L_0888F9C4:
    ctx.set_gpr(6, ctx.gpr[4] << 3u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[5]);
    goto L_0888F9CC;
L_0888F9CC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F9D4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888F9E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0888FB78;
      }
      goto L_0888F9FC;
    }
L_0888F9FC:
    ctx.set_gpr(7, 0u + 0u);
    goto L_0888FA00;
L_0888FA00:
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    ctx.set_gpr(3, ctx.gpr[9] ^ 58u);
    ctx.set_gpr(10, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(11, ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[10] | ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(8, ctx.gpr[16] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0888FA90;
      }
      goto L_0888FA24;
    }
L_0888FA24:
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    ctx.set_gpr(24, ctx.gpr[15] ^ 58u);
    ctx.set_gpr(13, ctx.gpr[24] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(14, ctx.gpr[15] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[14]);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(8, ctx.gpr[16] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0888FA90;
      }
      goto L_0888FA50;
    }
L_0888FA50:
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    ctx.set_gpr(3, ctx.gpr[9] ^ 58u);
    ctx.set_gpr(10, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(11, ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(25, ctx.gpr[10] | ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.set_gpr(8, ctx.gpr[16] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0888FA90;
      }
      goto L_0888FA7C;
    }
L_0888FA7C:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[7]) < 297 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0888FA00;
      }
      goto L_0888FA8C;
    }
L_0888FA8C:
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[7]);
    goto L_0888FA90;
L_0888FA90:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0888FBEC;
      }
      goto L_0888FA9C;
    }
L_0888FA9C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0888FBE0;
      }
      goto L_0888FAAC;
    }
L_0888FAAC:
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[7]) < 297 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_0888FB64;
      }
      goto L_0888FAB8;
    }
L_0888FAB8:
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(297));
    ctx.set_gpr(14, ctx.gpr[15] - ctx.gpr[7]);
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[9]) < 297 ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[14] & 3u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0888FB8C;
      }
      goto L_0888FAD4;
    }
L_0888FAD4:
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, ctx.gpr[4] - ctx.gpr[7]);
        goto L_0888FB68;
    }
    goto L_0888FAE4;
L_0888FAE4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[4]) < 297 ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888FB64;
      }
      goto L_0888FAF8;
    }
L_0888FAF8:
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, ctx.gpr[4] - ctx.gpr[7]);
        goto L_0888FB68;
    }
    goto L_0888FB08;
L_0888FB08:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888FB64;
      }
      goto L_0888FB20;
    }
L_0888FB20:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888FB64;
      }
      goto L_0888FB38;
    }
L_0888FB38:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888FB64;
      }
      goto L_0888FB50;
    }
L_0888FB50:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[4]) < 297 ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888FAF8;
      }
      goto L_0888FB64;
    }
L_0888FB64:
    ctx.set_gpr(5, ctx.gpr[4] - ctx.gpr[7]);
    goto L_0888FB68;
L_0888FB68:
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x0888FB78u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0888F580;
L_0888FB78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888FB8C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888FAF8;
      }
      goto L_0888FB94;
    }
L_0888FB94:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888FAD4;
      }
      goto L_0888FB9C;
    }
L_0888FB9C:
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.set_gpr(11, ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0888FBC4;
      }
      goto L_0888FBA4;
    }
L_0888FBA4:
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[4] - ctx.gpr[7]);
      if (branch_taken) {
          goto L_0888FB68;
      }
      goto L_0888FBB4;
    }
L_0888FBB4:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[9] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[6] + ctx.gpr[4]);
    goto L_0888FBC4;
L_0888FBC4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, ctx.gpr[4] - ctx.gpr[7]);
        goto L_0888FB68;
    }
    goto L_0888FBD0;
L_0888FBD0:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_0888FAD4;
L_0888FBE0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(7, 0u + 0u);
    goto L_0888FAAC;
L_0888FBEC:
    ctx.set_gpr(6, ctx.gpr[16] + ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x0888FBFCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0888FBFCu) goto L_0888FBFC;
    return;
L_0888FBFC:
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0888FC10u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0888FC10u) goto L_0888FC10;
    return;
L_0888FC10:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0888FB78;
L_0888FC18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(-25172));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0888FC40u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0888FC40u) goto L_0888FC40;
    return;
L_0888FC40:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-25172))))));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0888FC74;
      }
      goto L_0888FC58;
    }
L_0888FC58:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0888FC60;
L_0888FC60:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888FC74:
    ctx.set_gpr(31, 0x0888FC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0888FC7Cu) goto L_0888FC7C;
    return;
L_0888FC7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0888FC60;
L_0888FC84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-640));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0888FCC8;
      }
      goto L_0888FCA8;
    }
L_0888FCA8:
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888FCBCu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_0888F9E0;
L_0888FCBC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(304))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0888FD18;
      }
      goto L_0888FCC8;
    }
L_0888FCC8:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26016)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, 2245u << 16u);
      if (branch_taken) {
          goto L_0888FCFC;
      }
      goto L_0888FCD8;
    }
L_0888FCD8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0888FCDC;
L_0888FCDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    goto L_0888FCE0;
L_0888FCE0:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(640));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888FCFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(20816));
    goto L_0888FD08;
L_0888FD08:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0888FD10u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888FD10u) goto L_0888FD10;
    return;
L_0888FD10:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0888FCDC;
L_0888FD18:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_0888FD34;
      }
      goto L_0888FD20;
    }
L_0888FD20:
    ctx.set_gpr(31, 0x0888FD28u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    goto L_0888FC18;
L_0888FD28:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_0888FD94;
      }
      goto L_0888FD34;
    }
L_0888FD34:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888FD40u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 38u, 0x08891004u>(ctx, &aot_mem) && ctx.pc == 0x0888FD40u) goto L_0888FD40;
    return;
L_0888FD40:
    ctx.set_gpr(31, 0x0888FD48u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0888F47C;
L_0888FD48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0888FDC4;
      }
      goto L_0888FD50;
    }
L_0888FD50:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0888FD94;
      }
      goto L_0888FD58;
    }
L_0888FD58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_0888FD5C;
L_0888FD5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(10, 2245u << 16u);
      if (branch_taken) {
          goto L_0888FD84;
      }
      goto L_0888FD64;
    }
L_0888FD64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-26016)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0888FCDC;
    }
    goto L_0888FD70;
L_0888FD70:
    ctx.set_gpr(12, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(11, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[11] + static_cast<std::uint32_t>(20856));
    goto L_0888FD08;
L_0888FD84:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0888FD8Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888FD8Cu) goto L_0888FD8C;
    return;
L_0888FD8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    goto L_0888FCE0;
L_0888FD94:
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26016)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_0888FD5C;
    }
    goto L_0888FDA4;
L_0888FDA4:
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(20888));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0888FDBCu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888FDBCu) goto L_0888FDBC;
    return;
L_0888FDBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_0888FD5C;
L_0888FDC4:
    ctx.set_gpr(31, 0x0888FDCCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0888FC18;
L_0888FDCC:
    ctx.set_gpr(31, 0x0888FDD4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0888F47C;
L_0888FDD4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_0888FD94;
      }
      goto L_0888FDE0;
    }
L_0888FDE0:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0888FDF0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(297));
    goto L_0888F234;
L_0888FDF0:
    // nop
    goto L_0888FD50;
}

void recomp_unit_0034(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0034_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_34(Runtime &runtime) {
    runtime.register_generated_unit(34u, 0x0888C000u, 16384u, &recomp_unit_0034, &recomp_unit_0034_entry);
    runtime.register_function(0x0888C40Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C42Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C434u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C43Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C44Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C454u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C474u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C484u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C48Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C494u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C4ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C4B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C550u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C574u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C57Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C58Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C594u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C59Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C5A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C5ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C5B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C5CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C5E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C77Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C794u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C7A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C7C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C7D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C7D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C7E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C7F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C91Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C968u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C970u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C978u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C980u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C988u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C998u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C9C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C9E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888C9E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA00u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA14u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA1Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA24u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA48u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA78u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA88u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CA8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CAA0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CAA8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CAD8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CAF8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB30u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB48u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB60u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB68u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CB98u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CBA0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CBA4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CBA8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CBBCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CBC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CBD8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CBE4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CBECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC14u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC2Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC6Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CC9Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CCD0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CCDCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CCECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CD28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CD38u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CD74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CD84u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CDB8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CDC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CDF8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CE00u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CE08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CE10u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CE18u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CE24u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CE34u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CE64u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CE6Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CE7Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CEA8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CEB4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CEBCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CEFCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CF10u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CF1Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CF28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CF38u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CF44u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CF64u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CF9Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CFB8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CFC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CFD0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CFD8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CFE4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888CFF0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D020u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D028u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D030u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D040u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D074u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D080u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D090u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D098u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D0A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D0B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D0C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D0D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D0D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D0ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D138u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D168u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D170u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D178u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D18Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D198u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D1A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D1CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D1E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D1F4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D1FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D208u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D210u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D218u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D21Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D238u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D240u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D24Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D254u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D25Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D264u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D270u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D278u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D280u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D288u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D290u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D2A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D2B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D2B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D2C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D2CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D2D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D2E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D2E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D2F4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D304u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D30Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D314u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D334u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D340u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D348u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D35Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D368u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D370u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D384u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D394u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D398u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D3C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D3DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D3E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D3F4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D3FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D408u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D410u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D418u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D424u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D428u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D430u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D438u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D440u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D448u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D450u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D45Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D460u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D46Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D474u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D480u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D48Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D498u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D49Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D4A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D4ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D4B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D4C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D4C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D4D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D4DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D4E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D4ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D4F8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D500u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D50Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D510u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D518u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D528u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D53Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D540u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D55Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D568u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D56Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D588u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D5ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D5B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D5C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D5D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D5D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D5E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D5E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D5F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D5F8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D600u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D608u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D614u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D62Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D634u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D63Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D644u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D64Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D65Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D664u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D678u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D688u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D698u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6BCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6F4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D6FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D704u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D70Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D71Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D724u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D72Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D734u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D740u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D744u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D760u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D768u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D788u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D790u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D798u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D7A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D7B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D7C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D7C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D7D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D7DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D800u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D83Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D850u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D868u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D874u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D884u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D88Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D894u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D8A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D8C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D8D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D8DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D8E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D8ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D910u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D920u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D928u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D944u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D958u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D968u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D970u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D978u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D988u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D9B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D9C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D9D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D9D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888D9ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA10u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA20u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA38u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA48u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA70u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA7Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DA94u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DAA0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DAB0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DAB8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DAC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DAD0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DADCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DAECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DAF4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DB04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DB0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DB74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DB88u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DBA0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DBB8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DBF4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DBFCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC14u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC24u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC34u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC3Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC44u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DC58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DCE0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD00u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD14u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD1Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD24u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD2Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD38u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD48u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD54u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD5Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD64u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD6Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD7Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD84u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DD94u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDA0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDA8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDB0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDBCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDCCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDD4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDDCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDE4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDF4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DDF8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE14u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE1Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE30u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE60u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DE98u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DEA4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DEB0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DEC0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DECCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DEECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DEFCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF38u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF6Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DF98u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DFB8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DFC0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DFC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DFD0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DFE0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888DFF8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E02Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E03Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E074u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E07Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E080u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E0A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E0DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E0E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E150u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E164u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E180u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E18Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E280u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E294u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E298u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E30Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E320u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E324u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E37Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E384u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E390u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E398u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E3C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E3C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E3C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E3DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E3E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E3F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E3FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E408u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E410u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E438u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E458u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E468u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E480u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E494u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E4ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E4C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E4D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E4E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E4ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E4F4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E4FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E504u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E50Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E56Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E57Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E588u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E594u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E59Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5F8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E5FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E610u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E628u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E640u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E658u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E664u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E66Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E688u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E690u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E698u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E6A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E6BCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E6E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E6FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E750u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E754u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E774u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E780u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E798u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E7B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E7C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E7E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E7F8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E810u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E820u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E824u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E854u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E860u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E868u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E870u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E880u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E8FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E900u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E930u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E938u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E940u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E944u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E978u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E980u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E988u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E98Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E9C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E9C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E9D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888E9D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA10u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA18u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA1Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA30u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA70u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA90u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EA94u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EAA0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EB5Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EB74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EB84u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EB9Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EBACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EBD4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EBECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC00u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC18u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC2Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC34u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC54u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC68u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EC98u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ECB0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ECC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ECD4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ECECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ECFCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED10u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED14u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED30u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED3Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED64u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888ED80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EDB4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EDBCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EDC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EDC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EDD4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EDD8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE10u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE18u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE1Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE60u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE64u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EE98u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEA0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEA8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEE0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEE8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEF0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EEF4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF00u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF14u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF2Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF44u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF60u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF64u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF6Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF7Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF84u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF94u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EF9Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EFA4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EFACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EFB4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EFBCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EFC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EFCCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EFD4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EFDCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EFE4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888EFECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F020u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F028u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F030u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F034u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F038u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F068u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F070u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F078u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F080u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F088u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F090u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F098u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F0F8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F100u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F108u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F138u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F140u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F148u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F14Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F150u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F180u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F188u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F190u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F198u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F1A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F1A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F1B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F1B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F1E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F220u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F234u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F244u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F250u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F264u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F270u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F280u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F28Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F2A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F2ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F2C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F2CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F2D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F2E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F2E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F2F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F2FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F300u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F308u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F314u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F31Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F328u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F338u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F340u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F348u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F354u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F368u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F378u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F38Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3D8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F3F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F400u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F410u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F420u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F42Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F448u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F45Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F460u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F47Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F4E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F500u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F508u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F524u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F52Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F534u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F53Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F540u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F560u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F568u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F570u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F578u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F580u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F594u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F5E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F61Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F620u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F638u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F63Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F654u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F658u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F670u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F674u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F67Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F680u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F68Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F694u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F69Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F6A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F6BCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F6C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F6CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F6E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F6F4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F728u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F73Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F748u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F750u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F758u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F764u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F76Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F778u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F784u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F78Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F794u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F798u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F7FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F808u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F810u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F81Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F824u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F82Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F834u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F844u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F858u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F860u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F870u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F884u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F88Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F894u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8C8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F8ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F900u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F910u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F91Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F928u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F938u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F948u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F958u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F968u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F978u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F988u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F998u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9B8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888F9FCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FA00u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FA24u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FA50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FA7Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FA8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FA90u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FA9Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FAACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FAB8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FAD4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FAE4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FAF8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB20u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB38u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB64u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB68u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB78u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB94u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FB9Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FBA4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FBB4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FBC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FBD0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FBE0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FBECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FBFCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC10u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC18u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC60u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC7Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FC84u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FCA8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FCBCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FCC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FCD8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FCDCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FCE0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FCFCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD10u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD18u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD20u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD28u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD34u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD48u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD5Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD64u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD70u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD84u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FD94u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FDA4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FDBCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FDC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FDCCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FDD4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FDE0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0888FDF0u, &recomp_unit_0034, "recomp_unit_0034");
}
} // namespace psprecomp
